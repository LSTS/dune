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

#ifndef MANEUVER_MULTIPLEXER_ELEVATOR_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_ELEVATOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Constants.hpp"
#include "MuxedManeuver.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    //! Arguments
    struct ElevatorArgs
    {
      //! Distance tolerance to start loitering near elevator's location
      float radius_tolerance;
      //! Negative values will disable vertical progress monitor
      float vmonitor_speed;
      //! Timeout when progress is below the specified value
      float vmonitor_timeout;
      //! Minimum radius to prevent incompatibility with path controller
      float min_radius;
    };

    //! Elevator maneuver
    class Elevator: public MuxedManeuver<IMC::Elevator, ElevatorArgs>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args elevator arguments
      Elevator(Maneuvers::Maneuver* task, ElevatorArgs* args):
        MuxedManeuver<IMC::Elevator, ElevatorArgs>(task, args),
        m_elevate(NULL),
        m_vmon(NULL)
      { }

      //! Destructor
      ~Elevator(void)
      {
        Memory::clear(m_vmon);
        Memory::clear(m_elevate);
      }

      //! Start maneuver function
      //! @param[in] maneuver rows maneuver message
      void
      onStart(const IMC::Elevator* maneuver)
      {
        m_maneuver = *maneuver;

        Memory::clear(m_elevate);
        m_elevate = new Maneuvers::Elevate(maneuver, m_task, m_args->min_radius);

        if (m_args->vmonitor_speed > 0.0)
        {
          Memory::clear(m_vmon);
          m_vmon = new VerticalMonitor(m_args->vmonitor_timeout, m_args->vmonitor_speed);
        }
      }

      //! On message EstimatedState
      //! @param[in] msg pointer to EstimatedState message
      void
      onEstimatedState(const IMC::EstimatedState* msg)
      {
        m_vz = msg->vz;
        m_depth = msg->depth;
        m_altitude = msg->alt;
        m_pitch = msg->theta;
        m_u_speed = msg->u;
        m_elevate->update(msg);
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        m_elevate->updatePathControl(pcs);

        if (m_elevate->isDone())
        {
          m_task->signalCompletion();
          return;
        }

        float vertical_error = m_elevate->getVerticalError(m_depth, m_altitude);

        if (pcs->flags & IMC::PathControlState::FL_LOITERING)
        {
          if (m_args->vmonitor_speed > 0.0)
            checkVerticalProgress();

          float time_left = vertical_error / (m_u_speed * std::sin(m_pitch));
          m_task->signalProgress((unsigned)std::fabs(time_left));
        }
        else
        {
          float diagonal_length = vertical_error / std::sin(Plans::c_rated_pitch);
          float loiter;

          if (m_u_speed)
            loiter = diagonal_length / m_u_speed;
          else
            loiter = Plans::c_max_eta;

          m_task->signalProgress((uint16_t)Math::round(pcs->eta + loiter));
        }
      }

      //! Check vertical progress
      void
      checkVerticalProgress(void)
      {
        // compute vertical rate
        // (multiply by minus direction for absolute value)
        float vrate = - m_elevate->getElevatorDirection() * m_vz;

        if (m_vmon->isProgressSlow(vrate))
          m_task->signalError(DTR("vertical progress is too slow"));
      }

    private:
      //! Desired path message
      IMC::DesiredPath m_path;
      //! Elevator Maneuver message
      IMC::Elevator m_maneuver;
      //! Current speed in z
      float m_vz;
      //! Current depth
      float m_depth;
      //! Current altitude
      float m_altitude;
      //! Current pitch
      float m_pitch;
      //! Current forward speed
      float m_u_speed;
      //! Elevator mechanism
      Maneuvers::Elevate* m_elevate;
      //! Vertical monitor
      VerticalMonitor* m_vmon;
    };
  }
}

#endif
