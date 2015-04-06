//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>

// Local headers.
#include <DUNE/Control/BasicAutopilot.hpp>

using namespace DUNE::Time;
using namespace DUNE::Utils;

namespace DUNE
{
  namespace Control
  {
    //! Timeout when waiting for some control mode
    static const float c_mode_timeout = 5.0f;
    //! Cooldown for the warning thrown when bottom tracking cannot be done
    static const float c_btrack_wrn_cooldown = 15.0f;
    //! No altitude measurements message
    static const char* c_no_alt = DTR_RT("no valid altitude measurements");
    //! Depth margin when checking for maximum admissible depth
    static const float c_depth_margin = 1.0;

    BasicAutopilot::BasicAutopilot(const std::string& name, Tasks::Context& ctx,
                                   const uint32_t controllable_loops, const uint32_t required_loops):
      Tasks::Task(name, ctx),
      m_vertical_mode(VERTICAL_MODE_NONE),
      m_yaw_mode(YAW_MODE_NONE),
      m_aloops(0),
      m_controllable_loops(controllable_loops),
      m_required_loops(required_loops),
      m_scope_ref(0)
    {
      param("Heading Rate Bypass", m_hrate_bypass)
      .defaultValue("false")
      .description("Bypass heading rate controller and use reference directly on torques");

      m_ctx.config.get("General", "Absolute Maximum Depth", "50.0", m_max_depth);

      // Initialize entity state.
      setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

      // Register handler routines.
      bind<IMC::EstimatedState>(this);
      bind<IMC::DesiredHeadingRate>(this);
      bind<IMC::DesiredHeading>(this);
      bind<IMC::DesiredZ>(this);
      bind<IMC::DesiredPitch>(this);
      bind<IMC::DesiredVelocity>(this);
      bind<IMC::ControlLoops>(this);
    }

    BasicAutopilot::~BasicAutopilot(void)
    { }

    void
    BasicAutopilot::onResourceInitialization(void)
    {
      requestDeactivation();
    }

    void
    BasicAutopilot::reset(void)
    {
      m_vertical_ref = 0;
      m_vertical_mode = VERTICAL_MODE_NONE;
      m_vmode_wait = 0.0;
      m_vmode_delta.clear();

      m_yaw_ref = 0;
      m_yaw_mode = YAW_MODE_NONE;
      m_ymode_wait = 0.0;
      m_ymode_delta.clear();

      m_surge_ref = 0.0;
      m_sway_ref = 0.0;

      m_btrack_wrn.setTop(c_btrack_wrn_cooldown);
      m_bottom_follow_depth = 0.0;
    }

    void
    BasicAutopilot::consume(const IMC::DesiredHeading* msg)
    {
      if (!isActive())
        return;

      m_yaw_mode = YAW_MODE_HEADING;
      m_yaw_ref = msg->value;

      // always clear delta timer after changing mode
      m_ymode_delta.clear();
    }

    void
    BasicAutopilot::consume(const IMC::DesiredHeadingRate* msg)
    {
      if (!isActive())
        return;

      if (m_hrate_bypass)
        m_yaw_mode = YAW_MODE_BYPASS;
      else
        m_yaw_mode = YAW_MODE_HRATE;

      m_yaw_ref = msg->value;

      // always clear delta timer after changing mode
      m_ymode_delta.clear();
    }

    void
    BasicAutopilot::consume(const IMC::DesiredPitch* msg)
    {
      if (!isActive())
        return;

      m_vertical_mode = VERTICAL_MODE_PITCH;
      m_vertical_ref = msg->value;

      // always clear delta timer after changing mode
      m_vmode_delta.clear();
    }

    void
    BasicAutopilot::consume(const IMC::DesiredZ* msg)
    {
      if (!isActive())
        return;

      m_vertical_ref = msg->value;

      if (msg->z_units == IMC::Z_DEPTH)
      {
        m_vertical_mode = VERTICAL_MODE_DEPTH;

        float limit = m_max_depth - c_depth_margin;

        if (m_vertical_ref > limit)
        {
          m_vertical_ref = limit;
          war(DTR("limiting depth to %.1f"), limit);
        }
      }
      else if (msg->z_units == IMC::Z_ALTITUDE)
      {
        m_vertical_mode = VERTICAL_MODE_ALTITUDE;
        // Avoid possible rough transition when changing from depth to altitude
        m_bottom_follow_depth = m_estate.depth;
      }
      else
      {
        m_vertical_mode = VERTICAL_MODE_NONE;
      }

      // always clear delta timer after changing mode
      m_vmode_delta.clear();
    }

    void
    BasicAutopilot::consume(const IMC::DesiredVelocity* msg)
    {
      if (!isActive())
        return;

      uint8_t horizontal_flags = (IMC::DesiredVelocity::FL_SURGE | IMC::DesiredVelocity::FL_SWAY);
      if ((msg->flags & horizontal_flags) == horizontal_flags)
      {
        m_surge_ref = msg->u;
        m_sway_ref = msg->v;
      }

      if (msg->flags & IMC::DesiredVelocity::FL_YAW)
      {
        m_yaw_ref = msg->r;
        m_yaw_mode = YAW_MODE_HRATE;
      }

      if (msg->flags & IMC::DesiredVelocity::FL_HEAVE)
      {
        m_vertical_mode = VERTICAL_MODE_HEAVE;
        m_vertical_ref = msg->w;
      }
    }

    void
    BasicAutopilot::consume(const IMC::EstimatedState* msg)
    {
      if (!isActive())
        return;

      if (msg->getSource() != getSystemId())
        return;

      m_estate = *msg;

      // check if vertical control mode is valid
      if (m_vertical_mode >= VERTICAL_MODE_SIZE)
      {
        signalBadVertical(DTR("invalid vertical control mode %d"));
        return;
      }
      else if (m_vertical_mode == VERTICAL_MODE_NONE)
      {
        float delta = m_vmode_delta.getDelta();
        if (delta > 0.0)
          m_vmode_wait += delta;

        if (m_vmode_wait > c_mode_timeout)
        {
          m_vmode_wait = 0.0;
          signalBadVertical(DTR("timed out while waiting for vertical control mode"));
        }

        return;
      }
      else if (m_vertical_mode == VERTICAL_MODE_ALTITUDE)
      {
        // Required depth for bottom following = current depth + required altitude correction
        // in case the follow depth is lower than 0.0 it will be capped since the btrack
        // is not possible

        // check if we have altitude measurements
        if (msg->alt < 0.0)
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, DTR(c_no_alt));
          err("%s", DTR(c_no_alt));
          return;
        }

        m_bottom_follow_depth = m_estate.depth + (msg->alt - m_vertical_ref);

        if (m_bottom_follow_depth < 0.0)
        {
          if (m_btrack_wrn.overflow())
          {
            std::string desc = String::str(DTR("water column not deep enough for altitude control ( %0.2f < %0.2f )"), msg->alt + m_estate.depth, m_vertical_ref);
            setEntityState(IMC::EntityState::ESTA_NORMAL, desc);
            war("%s", desc.c_str());
            m_btrack_wrn.reset();
          }
        }
        else
        {
          m_btrack_wrn.reset();
        }

        // Will not let the bottom follow depth be lower than zero
        // to avoid causing excessive controller integration
        m_bottom_follow_depth = std::max(m_bottom_follow_depth, (float)0.0);
      }
      else if (m_vertical_mode == VERTICAL_MODE_PITCH)
      {
        if (m_estate.depth >= m_max_depth - c_depth_margin)
        {
          const std::string desc = DTR("getting too close to maximum admissible depth");
          setEntityState(IMC::EntityState::ESTA_ERROR, desc);
          err("%s", desc.c_str());
          requestDeactivation();
          return;
        }
      }

      // check if yaw control mode is valid
      if (m_yaw_mode >= YAW_MODE_SIZE)
      {
        signalBadYaw(DTR("invalid yaw control mode %d"));
        return;
      }
      else if (m_yaw_mode == YAW_MODE_NONE)
      {
        float delta = m_ymode_delta.getDelta();
        if (delta > 0.0)
          m_ymode_wait += delta;

        if (m_ymode_wait > c_mode_timeout)
        {
          m_ymode_wait = 0.0;
          signalBadYaw(DTR("timed out waiting for yaw control mode"));
        }

        return;
      }

      // Compute time delta.
      float timestep = m_last_estate.getDelta();

      // Check if we have a valid time delta.
      if (timestep < 0.0)
        return;

      onEstimatedState(timestep, msg);
    }

    void
    BasicAutopilot::consume(const IMC::ControlLoops* msg)
    {
      uint32_t loops = msg->mask & m_controllable_loops;

      if (!loops)
        return;

      // If this scope is obsolete, ignore message
      if (msg->scope_ref < m_scope_ref)
        return;

      m_scope_ref = msg->scope_ref;

      bool was_active = isActive();

      if (msg->enable)
      {
        if (!isActive())
        {
          requestActivation();
          m_aloops = 0;
        }
        m_aloops |= loops;
      }
      else
      {
        m_aloops &= ~loops;

        if (!m_aloops)
          requestDeactivation();
      }

      if (was_active != isActive())
      {
        debug("%s", isActive() ? "enabling" : "disabling");

        if (msg->enable)
        {
          requestActivation();

          IMC::ControlLoops cloops;
          cloops.enable = IMC::ControlLoops::CL_ENABLE;
          cloops.mask = m_required_loops;
          cloops.scope_ref = m_scope_ref;
          dispatch(cloops);
        }
        else
        {
          requestDeactivation();
        }
      }
    }

    void
    BasicAutopilot::onMain(void)
    {
      while (!stopping())
      {
        waitForMessages(1.0);
      }
    }
  }
}
