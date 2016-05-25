//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Miguel Rosa                                                      *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_SCHEDULEDGOTO_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_SCHEDULEDGOTO_HPP_INCLUDED_

#include "Constants.hpp"
#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    struct ScheduledArgs
    {
      float max_speed;
      float min_speed;
    };

    //! ScheduledGoto maneuver
    class ScheduledGoto: public MuxedManeuver<IMC::ScheduledGoto, ScheduledArgs>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      ScheduledGoto(Maneuvers::Maneuver* task, ScheduledArgs* args):
        MuxedManeuver<IMC::ScheduledGoto, ScheduledArgs>(task,args)
      {
        m_dbeh = IMC::ScheduledGoto::DBEH_RESUME;
        m_speed = 0;
        m_dispatched = false;
      }

      //! Start maneuver function
      //! @param[in] maneuver goto maneuver message
      void
      onStart(const IMC::ScheduledGoto* maneuver)
      {
        m_timer.setTop(0.2);
        m_maneuver = *maneuver;
        m_dbeh = maneuver->delayed;
        m_dispatched = false;
        m_speed = 0;
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        bool time_ran_out = m_maneuver.arrival_time - Clock::getSinceEpoch() <= 0;
        bool near = (pcs->flags & IMC::PathControlState::FL_NEAR) != 0;
        bool delayed = m_speed >= m_args->max_speed;

        if(time_ran_out && near)
        {
          m_task->signalCompletion();
          return;
        }

        if (time_ran_out || delayed)
        {
          switch(m_dbeh)
          {
            case IMC::ScheduledGoto::DBEH_RESUME:
              if (!near)
                m_task->signalProgress(pcs->eta);
              else
                m_task->signalCompletion();
              break;

            case IMC::ScheduledGoto::DBEH_SKIP:
              m_task->signalCompletion();
              break;

            case IMC::ScheduledGoto::DBEH_FAIL:
              m_task->signalError("Unable to reach destination on scheduled time.");
              break;
          }
        }
      }

      //! On message EstimatedState
      //! @param[in] msg pointer to EstimatedState message
      void
      onEstimatedState(const IMC::EstimatedState* msg)
      {

        IMC::DesiredPath path;

        if (m_timer.overflow())
        {
          m_timer.reset();

          uint32_t control = IMC::CL_PATH | IMC::CL_SPEED;

          path.end_lat = m_maneuver.lat;
          path.end_lon = m_maneuver.lon;
          path.end_z = m_maneuver.z;
          path.end_z_units = m_maneuver.z_units;

          switch (path.end_z_units) {
            case Z_DEPTH:
              control |= IMC::CL_DEPTH;
              break;
            case Z_ALTITUDE:
              control |= IMC::CL_ALTITUDE;
              break;
            default:
              break;
          }

          double prev_speed = m_speed;

          //! Calculate speed to arrive on time, in mps
          path.speed_units = IMC::SUNITS_METERS_PS;
          m_speed = speedCalc(msg);
          path.speed = m_speed;

          if (!m_dispatched && m_speed < m_args->min_speed)
          {
            // start moving only when necessary...
            m_task->setControl(0);
            return;
          }

          m_task->setControl(control);

          if (!m_dispatched || m_speed != prev_speed)
          {
            m_task->dispatch(path);
            m_dispatched = true;
          }
        }
      }

      //! Calculates vehicle speed
      double
      speedCalc(const IMC::EstimatedState* msg)
      {

        m_state = *msg;

        double lat;
        double lon;
        double dist;
        double deltat;

        double speed;

        //! Calculates actual position
        Coordinates::toWGS84(m_state, lat, lon);

        //! Calculates distance from maneuver point
        dist = WGS84::distance(lat, lon, 0.0, m_maneuver.lat, m_maneuver.lon, 0.0);

        //! Calculates diference from initial maneuver time to arrival time
        deltat = m_maneuver.arrival_time - Clock::getSinceEpoch();

        //! Calculates speed of the vehicule
        speed = dist/deltat;

        if (deltat < 0)
          speed = m_args->max_speed;
        else
          speed = speed > m_args->max_speed ? m_args->max_speed : speed;

        m_task->debug("dist: %f, delta_t: %f", dist, deltat);
        m_task->debug("Speed: %f", speed);
        m_task->debug("max speed: %f",m_args->max_speed);

        return speed;
      }

      ~ScheduledGoto(void)
      { }

    private:

      //! What to do if not able to reach on time
      uint8_t m_dbeh;
      //! Timer counter for duration
      Time::Counter<float> m_timer;
      //! ScheduledGoto maneuver message
      IMC::ScheduledGoto m_maneuver;
      //! EstimatedState message
      IMC::EstimatedState m_state;
      //! Calculated desired speed
      double m_speed;
      //! Has dispatched any paths yet
      bool m_dispatched;
    };
  }
}

#endif
