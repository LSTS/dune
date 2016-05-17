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
    };

    //! ScheduledGoto maneuver
    class ScheduledGoto: public MuxedManeuver<IMC::ScheduledGoto, ScheduledArgs>

    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      ScheduledGoto(Maneuvers::Maneuver* task, ScheduledArgs* args):
        MuxedManeuver<IMC::ScheduledGoto, ScheduledArgs>(task,args),
        m_dbeh(DBEH_RESUME)
      {}

      //! Start maneuver function
      //! @param[in] maneuver goto maneuver message
      void
      onStart(const IMC::ScheduledGoto* maneuver)
      {

        timer.setTop(0.2);

        isblock = false;

        scheduled = *maneuver;

        ontime = false;

      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {

      time_left = t_arrival - Clock::getSinceEpoch();

        if(time_left <= 0)
          {
            ontime = false;
            if (pcs->flags & IMC::PathControlState::FL_NEAR)
              m_task->signalCompletion();
          }
        else
          {
            m_task->signalProgress(pcs->eta);
            ontime = true;
          }
        if ((ontime == false) & !(pcs->flags
                              & IMC::PathControlState::FL_NEAR)
                              || speed >= m_args->max_speed)
            {

               switch(m_dbeh)
              {
                case DBEH_RESUME:
                if (d_behavior == 0)
                {
                  if (!(pcs->flags
                              & IMC::PathControlState::FL_NEAR))
                    m_task->signalProgress(pcs->eta);
                  else
                    m_task->signalCompletion();
                }
                else
                m_dbeh = DBEH_SKIP;
                break;

                case DBEH_SKIP:
                if (d_behavior == 1)
                  m_task->signalCompletion();
                else
                m_dbeh = DBEH_FAIL;
                break;

                case DBEH_FAIL:
                if (d_behavior == 2)
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

        if (timer.overflow())
        {
          timer.reset();
          m_task->setControl(IMC::CL_PATH);

          path.end_lat = scheduled.lat;
          path.end_lon = scheduled.lon;
          path.end_z = scheduled.z;
          path.end_z_units = scheduled.z_units;

          m_lat = scheduled.lat;
          m_lon = scheduled.lon;

          t_arrival = scheduled.arrival_time;
          travel_z = scheduled.travel_z;
          travel_z_units = scheduled.travel_z_units;

          d_behavior = scheduled.delayed;

          //! Meters per Second Speed Units
          path.speed_units = 0;

          path.speed = speedCalc(msg);

          if ((path.speed > m_args->max_speed) |
                    ((ontime == false) & (d_behavior == 0)))
              path.speed = m_args->max_speed;

          m_task->dispatch(path);
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

        //! Calculates actual position
        Coordinates::toWGS84(m_state, lat, lon);

        //! Calculates distance from maneuver point
        dist = WGS84::distance(lat, lon, 0.0,
                                                m_lat, m_lon, 0.0);

        //! Calculates diference from initial maneuver time to arrival time
        deltat = t_arrival - Clock::getSinceEpoch();

        //! Calculates speed of the vehicule
        speed = dist/deltat;

        //m_task->inf("dist: %f", dist);
        m_task->inf("t_arrival: %f", deltat);
        m_task->inf("Speed: %f", speed);
        m_task->inf("max speed: %f",m_args->max_speed);
        //m_task->inf("Time left %f", time_left);
        //m_task->inf("Total time %f", total_time);
        //m_task->inf("Start time %f", start_time);
        //m_task->inf("Stop time %f", t_arrival);
        //m_task->inf("Delayed Behavior %d", d_behavior);
        //m_task->inf("Ontime %d", ontime);

        return speed;
      }

      ~ScheduledGoto(void)
      { }

      private:

        enum DelayedBehavior
        {
          //! Resume maneuver at top speed until it's completed
          DBEH_RESUME = 0,
          //! It will stop current maneuver and advance to the next one
          DBEH_SKIP = 1,
          //! It will stop the vehicle and show a FAILED result
          DBEH_FAIL = 2
        };

        //! Time of arrival
        double t_arrival;
        //! Travel Z value
        float travel_z;
        //! Travel Z units
        float travel_z_units;
        //! Maneuver Latitude
        double m_lat;
        //! Maneuver Longitude
        double m_lon;
        //! Dispatch block flag
        bool isblock;
        //!
        uint8_t d_behavior;
        //!
        DelayedBehavior m_dbeh;

        //! Timer counter for duration
        Time::Counter<float> timer;
        //! ScheduledGoto maneuver message
        IMC::ScheduledGoto scheduled;
        //! EstimatedState message
        IMC::EstimatedState m_state;

        double time_left;

        bool ontime;

        double speed;
    };
  }
}

#endif
