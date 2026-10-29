//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace HeadingMode
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Force system to stay at the surface.
      bool force_surface;
    };

    constexpr const fp32_t c_min_timeout = 1.0;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Task arguments.
      Arguments m_args;
      //! Output message for desired heading.
      IMC::DesiredHeading m_desired_heading;
      //! Output message for desired heading rate.
      IMC::DesiredHeading m_desired_heading_rate;
      //! Output message for desired speed.
      IMC::DesiredSpeed m_desired_speed;
      //! Output message for desired z.
      IMC::DesiredZ m_desired_z;
      //! Follow command state.
      IMC::FollowCommandState m_follow_state;
      //! Control loops flag.
      uint32_t m_mask;
      //! Timestamp of last received command.
      double m_last_command_ts;
      //! Maneuver timeout.
      double m_timeout;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        param("Force Surface", m_args.force_surface)
        .defaultValue("false")
        .description("True if the system should stay at the surface, false otherwise.");

        m_follow_state.state = IMC::FollowCommandState::FC_WAIT;

        bindToManeuver<Task, IMC::FollowCommand>();
        bind<IMC::Command>(this);
      }
      
      void
      consume(const IMC::FollowCommand* msg)
      {
        debug("received FollowCommand message from system %u (%u) - timeout %.2f s",
              msg->control_src,
              msg->control_ent,
              msg->timeout);

        m_last_command_ts = Time::Clock::getSinceEpoch();

        m_timeout = std::max(c_min_timeout, msg->timeout);

        m_follow_state.control_src = msg->control_src;
        m_follow_state.control_ent = msg->control_ent;

        updateState(IMC::FollowCommandState::FC_WAIT);

        m_mask = 0;
      }

      void
      consume(const IMC::Command* msg)
      {
        double now = Time::Clock::getSinceEpoch();

        if (m_follow_state.control_src != 0xFFFF &&
            m_follow_state.control_src != msg->getSource())
        {
          trace("received Command message from system %u (%u)", msg->getSource(), msg->getSourceEntity());
          return;
        }

        spew("received Command message: %.3f %.3f %.3f (0x%x)", Angles::degrees(msg->heading), msg->speed, msg->z, msg->flags);

        m_last_command_ts = now;

        updateControlLoops(msg);
        updateHeadingReference(msg);
        updateSpeedReference(msg);
        updateZReference(msg);
        updateState(IMC::FollowCommandState::FC_MOVING, msg);
      }

      void
      onStateReport(void) override
      {
        double now = Time::Clock::getSinceEpoch();
        if (now - m_last_command_ts > m_timeout &&
            m_follow_state.state != IMC::FollowCommandState::FC_TIMEOUT)
        {
          updateState(IMC::FollowCommandState::FC_TIMEOUT);
          signalError("FollowCommand maneuver timed out");
        }
      }

    private:
      void
      updateState(uint8_t state, const IMC::Command* cmd = NULL)
      {
        m_follow_state.state = state;

        if (cmd)
          m_follow_state.command.set(*cmd);
        else
          m_follow_state.command.clear();

        dispatch(m_follow_state);
      }

      void
      updateControlLoops(const IMC::Command* msg)
      {
        const auto flags = msg->flags;
        uint32_t mask = m_mask;

        if (flags & IMC::Command::FLAG_HEADING)
          mask = (mask | IMC::CL_YAW) & ~IMC::CL_YAW_RATE;
        else if (flags & IMC::Command::FLAG_HEADING_RATE)
          mask = (mask | IMC::CL_YAW_RATE) & ~IMC::CL_YAW;

        if (flags & (IMC::Command::FLAG_SPEED_METERS_PS |
                     IMC::Command::FLAG_SPEED_RPM       |
                     IMC::Command::FLAG_SPEED_PERCENT))
          mask |= IMC::CL_SPEED;
        else
          mask &= ~IMC::CL_SPEED;

        if ((flags & IMC::Command::FLAG_DEPTH) != 0 || m_args.force_surface)
          mask = (mask | IMC::CL_DEPTH) & ~IMC::CL_ALTITUDE;
        else if (flags & IMC::Command::FLAG_ALTITUDE)
          mask = (mask | IMC::CL_ALTITUDE) & ~IMC::CL_DEPTH;

        if (mask != m_mask)
        {
          setControl(mask);
          m_mask = mask;
        }
      }

      void
      updateHeadingReference(const IMC::Command* msg)
      {
        if (msg->flags & IMC::Command::FLAG_HEADING)
        {
          m_desired_heading.value = msg->heading;
          dispatch(m_desired_heading);
        }
        else if (msg->flags & IMC::Command::FLAG_HEADING_RATE)
        {
          m_desired_heading_rate.value = msg->heading;
          dispatch(m_desired_heading_rate);
        }
      }

      void
      updateSpeedReference(const IMC::Command* msg)
      {
        if (msg->flags & IMC::Command::FLAG_SPEED_METERS_PS)
        {
          m_desired_speed.value = msg->speed;
          m_desired_speed.speed_units = IMC::SpeedUnits::SUNITS_METERS_PS;
          dispatch(m_desired_speed);
        }
        else if (msg->flags & IMC::Command::FLAG_SPEED_RPM)
        {
          m_desired_speed.value = msg->speed;
          m_desired_speed.speed_units = IMC::SpeedUnits::SUNITS_RPM;
          dispatch(m_desired_speed);
        }
        else if (msg->flags & IMC::Command::FLAG_SPEED_PERCENT)
        {
          m_desired_speed.value = msg->speed;
          m_desired_speed.speed_units = IMC::SpeedUnits::SUNITS_PERCENTAGE;
          dispatch(m_desired_speed);
        }
      }

      void
      updateZReference(const IMC::Command* msg)
      {
        if (m_args.force_surface)
        {
          m_desired_z.value = 0.0;
          m_desired_z.z_units = IMC::ZUnits::Z_DEPTH;
          dispatch(m_desired_z);
        }
        else if (msg->flags & (IMC::Command::FLAG_DEPTH |
                          IMC::Command::FLAG_ALTITUDE))
        {
          m_desired_z.value = msg->z;

          if (msg->flags & IMC::Command::FLAG_DEPTH)
            m_desired_z.z_units = IMC::ZUnits::Z_DEPTH;
          else
            m_desired_z.z_units = IMC::ZUnits::Z_ALTITUDE;

          dispatch(m_desired_z);
        }
      }
    };
  }
}

DUNE_TASK
