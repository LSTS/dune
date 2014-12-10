//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_DISLODGE_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_DISLODGE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "Constants.hpp"
#include "MuxedManeuver.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    struct DislodgeArgs
    {
      //! Number of bursts
      unsigned bursts;
      //! Number of total attempts
      unsigned attempts;
      //! Burst duration
      float burst_time;
      //! Interval between bursts
      float interval_time;
      //! Minimum distance to ground or object to stop burst
      float min_distance;
      //! Safe depth change to consider the maneuver was successful
      float safe_gap;
      //! Depth threshold to be considered surface
      float depth_threshold;
    };

    //! Dislodge maneuver
    class Dislodge: public MuxedManeuver<IMC::Dislodge, DislodgeArgs>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args pointer to Maneuver's arguments
      Dislodge(Maneuvers::Maneuver* task, DislodgeArgs* args):
        MuxedManeuver<IMC::Dislodge, DislodgeArgs>(task, args),
        m_state(ST_START),
        m_got_depth(false),
        m_bursting(false)
      { }

      //! Start maneuver function
      //! @param[in] maneuver idle maneuver message
      void
      onStart(const IMC::Dislodge* maneuver)
      {
        m_task->setControl(IMC::CL_SPEED);

        m_rpm = std::fabs(maneuver->rpm);
        m_dir = maneuver->direction;

        m_attempts = 0;

        if (burstDirection())
          setState(ST_FRONT);
        else
          setState(ST_BACK);
      }

      //! On EstimatedState message
      //! @param[in] msg EstimatedState message
      void
      onEstimatedState(const IMC::EstimatedState* msg)
      {
        m_estate = *msg;

        if (!m_got_depth)
          m_init_depth = msg->depth;

        switch (m_state)
        {
          case ST_START:
            break;
          case ST_BACK:
          case ST_FRONT:
            if (m_timer.overflow())
            {
              if (m_bursting)
              {
                ++m_bursts;
                if (m_bursts >= m_args->bursts)
                {
                  setState(ST_CHECK_RESULTS);
                  break;
                }

                stopBurst();
                m_bursting = false;
                m_timer.setTop(m_args->interval_time);
              }
              else
              {
                startBurst(m_state);
                m_bursting = true;
                m_timer.setTop(m_args->burst_time);
              }
            }
            break;
          case ST_CHECK_RESULTS:
            if (m_timer.overflow())
            {
              if (m_init_depth < m_args->safe_gap + 0.5)
              {
                if (msg->depth < m_args->depth_threshold)
                {
                  m_task->signalCompletion();
                  setState(ST_DONE);
                  break;
                }
              }
              else if (m_init_depth - msg->depth > m_args->safe_gap)
              {
                m_task->signalCompletion();
                setState(ST_DONE);
                break;
              }

              failedAttempt();
            }
            break;
          case ST_FAILED:
            break;
          case ST_DONE:
            break;
        }
      }

      ~Dislodge(void)
      { }

    private:
      enum State
      {
        //! Starting state
        ST_START,
        //! Going backwards
        ST_BACK,
        //! Going forward
        ST_FRONT,
        //! Check results
        ST_CHECK_RESULTS,
        //! Failed state
        ST_FAILED,
        //! Done state
        ST_DONE
      };

      //! Go to state
      //! @param[in] state transition to this state
      void
      setState(State state)
      {
        switch (state)
        {
          case ST_BACK:
          case ST_FRONT:
            m_bursts = 0;
            m_bursting = false;
            m_timer.setTop(m_args->burst_time);
            startBurst(state);
            break;
          case ST_CHECK_RESULTS:
            m_timer.setTop(c_stab_time);
            break;
          case ST_FAILED:
            m_task->signalError(DTR("dislodge failed"));
            break;
          default:
            break;
        }

        m_state = state;
      }

      //! Burst direction
      //! @return true for front, false for back
      bool
      burstDirection(void)
      {
        switch (m_dir)
        {
          case IMC::Dislodge::DIR_FORWARD:
            return true;
          case IMC::Dislodge::DIR_BACKWARD:
            return false;
          case IMC::Dislodge::DIR_AUTO:
            if (m_attempts % 2 == 0)
              return false;
            else
              return true;
          default:
            return false;
        }
      }

      //! Start bursting
      //! @param[in] state reference to the desired state for burst direction
      void
      startBurst(State state)
      {
        float value = m_rpm;

        if (state == ST_BACK)
          value *= -1.0;

        IMC::DesiredSpeed ds;
        ds.value = value;
        ds.speed_units = IMC::SUNITS_RPM;
        m_task->dispatch(ds);
      }

      //! Stop bursting
      void
      stopBurst(void)
      {
        IMC::DesiredSpeed ds;
        ds.value = 0.0;
        ds.speed_units = IMC::SUNITS_RPM;
        m_task->dispatch(ds);
      }

      //! Failed attempt of dislodging
      void
      failedAttempt(void)
      {
        ++m_attempts;

        if (m_attempts >= m_args->attempts)
        {
          setState(ST_FAILED);
          return;
        }

        m_task->inf(DTR("trying again to dislodge"));

        if (burstDirection())
          setState(ST_FRONT);
        else
          setState(ST_BACK);
      }

      //! State of the state machine
      State m_state;
      //! EstimatedState data
      IMC::EstimatedState m_estate;
      //! Speed in rpms
      float m_rpm;
      //! Direction for dislodge
      uint8_t m_dir;
      //! Initial depth
      float m_init_depth;
      //! Got initial depth
      bool m_got_depth;
      //! True if bursting
      bool m_bursting;
      //! Number of bursts so far
      unsigned m_bursts;
      //! Number of attempts so far
      unsigned m_attempts;
      //! Timer for bursts and intervals
      Time::Counter<float> m_timer;
    };
  }
}

#endif
