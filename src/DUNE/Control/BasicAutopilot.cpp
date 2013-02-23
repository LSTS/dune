//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: BasicAutopilot.cpp 12836 2013-02-01 17:04:32Z pdcalado           $:*
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
    static const char* c_no_alt = DTR("no valid altitude measurements");

    BasicAutopilot::BasicAutopilot(const std::string& name, Tasks::Context& ctx,
                                   const uint32_t controllable_loops, const uint32_t required_loops):
      Tasks::Task(name, ctx),
      m_vertical_mode(VERTICAL_MODE_NONE),
      m_yaw_mode(YAW_MODE_NONE),
      m_aloops(0),
      m_controllable_loops(controllable_loops),
      m_required_loops(required_loops)
    {
      param("Heading Rate Bypass", m_hrate_bypass)
      .defaultValue("false")
      .description("Bypass heading rate controller and use reference directly on torques");

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
      deactivate();
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

      if (msg->z_units == IMC::Z_DEPTH)
      {
        m_vertical_mode = VERTICAL_MODE_DEPTH;
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

      m_vertical_ref = msg->value;

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

      m_estate = *msg;

      // check if vertical control mode is valid
      if (m_vertical_mode >= VERTICAL_MODE_SIZE)
      {
        signalBadVertical(DTR("bad vertical control mode %d, this should not happen"));
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
          setEntityState(IMC::EntityState::ESTA_ERROR, c_no_alt);
          err("%s", c_no_alt);
          return;
        }

        m_bottom_follow_depth = m_estate.depth + (msg->alt - m_vertical_ref);

        if (m_bottom_follow_depth < 0.0)
        {
          if (m_btrack_wrn.overflow())
          {
            std::string desc = String::str(DTR("bottom tracking not viable, water column is not deep enough ( %0.2f < %0.2f )"), msg->alt + m_estate.depth, m_vertical_ref);
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

      // check if yaw control mode is valid
      if (m_yaw_mode >= YAW_MODE_SIZE)
      {
        signalBadYaw(DTR("bad yaw control mode %d, this should not happen"));
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
          signalBadYaw(DTR("timed out while waiting for yaw control mode"));
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

      bool was_active = isActive();

      if (msg->enable)
      {
        if (!isActive())
        {
          activate();
          m_aloops = 0;
        }
        m_aloops |= loops;
      }
      else
      {
        m_aloops &= ~loops;

        if (!m_aloops)
          deactivate();
      }

      if (was_active != isActive())
      {
        debug("%s", isActive() ? "enabling" : "disabling");

        if (msg->enable)
        {
          activate();

          IMC::ControlLoops cloops;
          cloops.enable = IMC::ControlLoops::CL_ENABLE;
          cloops.mask = m_required_loops;
          dispatch(cloops);
        }
        else
        {
          deactivate();
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
