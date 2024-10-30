//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venancio (adapted from BottomTracker)                       *
//***************************************************************************

// ISO C++ 98 headers.
// #include <limits>
#include <cmath>

// DUNE headers.
#include <DUNE/Control/ClimbMonitor.hpp>
// #include <DUNE/Math/Angles.hpp>
// #include <DUNE/Memory.hpp>
#include <DUNE/Utils/String.hpp>
// #include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Tasks/Task.hpp>
using namespace DUNE::Utils;

//! Depth hysteresis.
static const float c_depth_hyst = 0.5;
//! Altitude hysteresis.
static const float c_alt_hyst = 0.2;

//! State to string for debug messages
static const std::string c_str_states[] = {DTR_RT("Idle"),
                                           DTR_RT("Ascending"),
                                           DTR_RT("Descending"),
                                           DTR_RT("On Target"),
                                           DTR_RT("Stabilizing")};

//! Climb monitor name
static const std::string c_cm_name = DTR_RT("ClimbMonitor");

static const unsigned c_window_size = 10;
static const unsigned c_climb_error_timeout = 20;

namespace DUNE
{
  namespace Control
  {
    ClimbMonitor::ClimbMonitor(const Arguments* args):
      m_args(args),
      m_active(false),
      m_error_deriv_avr(c_window_size),
      m_got_error(false),
      m_stabilize_init(false)
    {
      reset();
    }

    ClimbMonitor::~ClimbMonitor(void)
    {
    }

    void
    ClimbMonitor::reset(void)
    {
      m_z_ref.clear();
      m_estate.clear();
      m_cstate = SM_IDLE;
      m_climb_error_timer.setTop(c_climb_error_timeout);
      resetClimb();
      resetStabilize();
    }

    void
    ClimbMonitor::activate(void)
    {
      m_active = true;
      reset();

      debug("enabling");
    }

    void
    ClimbMonitor::deactivate(void)
    {
      m_active = false;
      debug("disabling");
    }

    void
    ClimbMonitor::onDesiredZ(const IMC::DesiredZ* msg)
    {
      if (!m_active)
        return;
      
      m_z_ref = *msg;

      updateClimbState();
    }

    void
    ClimbMonitor::onEstimatedState(const IMC::EstimatedState* msg)
    {
      if (!m_active)
        return;

      m_estate = *msg;

      updateStateMachine();
    }

    void
    ClimbMonitor::updateStateMachine(void)
    {
      if (!m_active)
        return;

      // Run state machine
      switch (m_cstate)
      {
        case SM_IDLE:
          onIdle();
          break;
        case SM_DESCENDING:
        case SM_ASCENDING:
          onClimb();
          break;
        case SM_AT_TARGET:
          onTarget();
          break;
        case SM_STABILIZE:
          onStabilize();
          break;
      }
    }

    void
    ClimbMonitor::updateClimbState()
    {
      double z_error = 0;
      if (m_z_ref.z_units == IMC::Z_ALTITUDE)
        z_error = m_z_ref.value - m_estate.alt;
      else if (m_z_ref.z_units == IMC::Z_DEPTH)
        z_error = m_estate.depth - m_z_ref.value;
      else
      {
        // Not tracking climb
        war("Unsupported Z units. Not tracking climb");
        changeState(SM_IDLE);
        return;
      }

      double hyst = m_z_ref.z_units == IMC::Z_ALTITUDE ? c_alt_hyst : c_depth_hyst;
      if  (std::abs(z_error) < hyst)
      {
        // At desired Z
        changeState(SM_AT_TARGET);
        return;
      }

      resetClimb();
      if (z_error < 0)
        changeState(SM_DESCENDING);
      else
        changeState(SM_ASCENDING);
    }

    void
    ClimbMonitor::onIdle()
    {
      if (!m_active)
        return;
    }

    //! Descending state
    void
    ClimbMonitor::onDescend()
    {
      if (!m_active)
        return;
    }
    
    //! Ascend state
    void
    ClimbMonitor::onAscend()
    {
      if (!m_active)
        return;
    }
    
    //! Ascend state
    void
    ClimbMonitor::onTarget()
    {
      if (!m_active)
        return;

      // Check if still of target, otherwise change state
      updateClimbState();
    }

    //! Stabilize state
    void
    ClimbMonitor::onStabilize()
    {
      if (!m_active)
        return;

      if (!m_stabilize_init)
      {
        IMC::DesiredSpeed desired_speed;
        desired_speed.value = 0;
        desired_speed.speed_units = IMC::SUNITS_RPM;
        dispatch(desired_speed);
        
        m_stabilize_init = true;
        return;
      }
    }

    void
    ClimbMonitor::resetStabilize()
    {
      m_stabilize_init = false;
    }

    void
    ClimbMonitor::onClimb()
    {
      if (!m_active)
        return;
        
      // Compute absolute error
      double z_error = m_z_ref.value - m_z_ref.z_units == IMC::Z_ALTITUDE ? m_estate.alt : m_estate.depth;
      z_error = std::abs(z_error);

      // If at desired z -> change state
      double hyst = m_z_ref.z_units == IMC::Z_ALTITUDE ? c_alt_hyst : c_depth_hyst;
      if  (z_error < hyst)
      {
        changeState(SM_AT_TARGET);
        return;
      }

      double z_error_deriv = m_error_deriv.update(z_error);
      if (!m_got_error)
      {
        m_got_error = true;
        return;
      }

      // Check case of 0 derivative!!!
      double error_change_avr = m_error_deriv_avr.update(z_error_deriv);

      // if error is decreasing, on average -> reset climb timer
      if (error_change_avr < 0)
        m_climb_error_timer.reset();

      if (m_climb_error_timer.overflow())
      {
        resetStabilize();
        changeState(SM_STABILIZE);
      }
    }

    void
    ClimbMonitor::resetClimb()
    {
      m_got_error = false;
      m_error_deriv_avr.clear();
      m_error_deriv.clear();
      m_climb_error_timer.reset();
    }

    void
    ClimbMonitor::changeState(ClimbStates state)
    {
      if (m_cstate == state)
        return;

      info(String::str("State change: %s", c_str_states[state].c_str()));
      m_cstate = state;
    }

    void
    ClimbMonitor::info(const std::string& msg) const
    {
      m_args->task->inf("[%s.%s] >> %s", DTR(c_cm_name.c_str()),
                        DTR(c_str_states[m_cstate].c_str()), msg.c_str());
    }

    void
    ClimbMonitor::debug(const std::string& msg) const
    {
      m_args->task->debug("[%s.%s] >> %s", DTR(c_cm_name.c_str()),
                          DTR(c_str_states[m_cstate].c_str()), msg.c_str());
    }

    void
    ClimbMonitor::war(const std::string& msg) const
    {
      m_args->task->war("[%s.%s] >> %s", DTR(c_cm_name.c_str()),
                        DTR(c_str_states[m_cstate].c_str()), msg.c_str());
    }
  }
}
