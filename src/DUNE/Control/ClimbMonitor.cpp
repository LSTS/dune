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
#include <DUNE/Math/Angles.hpp>
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
static const std::string c_str_states[] = {DTR_RT("Ascending"),
                                           DTR_RT("Descending"),
                                           DTR_RT("On Target"),
                                           DTR_RT("Stabilizing"),
                                           DTR_RT("Recovering Descent"),
                                           DTR_RT("Recovering Ascent"),
                                           DTR_RT("Emergency")};

//! Climb monitor name
static const std::string c_cm_name = DTR_RT("ClimbMonitor");

namespace DUNE
{
  namespace Control
  {
    ClimbMonitor::ClimbMonitor(const Arguments* args):
      m_args(args),
      m_active(false),
      m_got_zref(false),
      m_got_estate(false),
      m_braking(false),
      m_change_average(ChangeAverage(args->window_size)),
      m_stabilize_init(false),
      m_rec_descent_init(false)
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
      m_cstate = SM_AT_TARGET;
      m_got_zref = false;
      m_got_estate = false;
      m_braking = false;
      m_climb_error_timer.setTop(m_args->climb_error_timeout);
      m_recover_error_timer.setTop(m_args->recover_error_timeout);
      resetClimb();
      resetStabilize();
      resetRecoverDescent();
      resetRecoverAscent();
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
      
      if (msg->z_units != IMC::Z_DEPTH && msg->z_units != IMC::Z_ALTITUDE)
      {
        war("Unsupported Z units. Not tracking climb");
        deactivate();
        return;
      }

      m_z_ref = *msg;
      m_got_zref = true;
      updateClimbState();
    }

    void
    ClimbMonitor::onDesiredSpeed(const IMC::DesiredSpeed* msg)
    {
      if (!m_active)
        return;

      m_speed_ref = *msg;
    }

    void
    ClimbMonitor::onEstimatedState(const IMC::EstimatedState* msg)
    {
      if (!m_active)
        return;

      m_estate = *msg;
      m_got_estate = true;
      updateStateMachine();
    }

    void
    ClimbMonitor::updateStateMachine(void)
    {
      if (!gotData())
        return;

      // Run state machine
      switch (m_cstate)
      {
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
        case SM_RECOVER_DESCENT:
          onRecoverDescent();
          break;
        case SM_RECOVER_ASCENT:
          onRecoverAscent();
          break;
        case SM_EMERGENCY:
          onEmergency();
          break;
      }
    }

    double
    ClimbMonitor::getZError()
    {
      if (m_z_ref.z_units == IMC::Z_ALTITUDE)
        return m_z_ref.value - m_estate.alt;
      else if (m_z_ref.z_units == IMC::Z_DEPTH)
        return m_estate.depth - m_z_ref.value;

      war("Unsupported Z units. Not tracking climb");
      deactivate();
      return 0;
    }

    bool
    ClimbMonitor::isOnTarget(double z_error)
    {     
      double hyst = m_z_ref.z_units == IMC::Z_ALTITUDE ? c_alt_hyst : c_depth_hyst;
      return std::abs(z_error) < hyst;
    }

    bool
    ClimbMonitor::isDescending(double z_error)
    {
      return z_error < 0;
    }

    bool
    ClimbMonitor::isAtSurface()
    {
      return m_estate.depth < c_depth_hyst;
    }

    bool
    ClimbMonitor::isPitchStable()
    {
      double limit = DUNE::Math::Angles::radians(m_args->stable_angle_window);
      limit = DUNE::Math::Angles::normalizeRadian(limit);
      return m_estate.theta < limit && m_estate.theta > -limit;
    }

    void
    ClimbMonitor::brake(bool start)
    {
      IMC::Brake brk;
      m_braking = start;
      brk.op = start ? IMC::Brake::OP_START : IMC::Brake::OP_STOP;
      m_args->entity->dispatch(brk, Tasks::DF_LOOP_BACK);

      if (start)
        info(DTR("Started braking"));
      else
        info(DTR("Stopped braking"));
    }

    void
    ClimbMonitor::updateClimbState()
    {
      if (!gotData())
        return;
      
      double z_error = getZError();

      if  (isOnTarget(z_error))
      {
        // At desired Z
        changeState(SM_AT_TARGET);
        return;
      }

      if (isDescending(z_error))
        changeState(SM_DESCENDING);
      else
        changeState(SM_ASCENDING);
    }
    
    //! Ascend state
    void
    ClimbMonitor::onTarget()
    {
      // Check if still of target, otherwise change state
      updateClimbState();
    }

    //! Stabilize state
    void
    ClimbMonitor::onStabilize()
    {
      if (!m_active)
        return;

      // Compute absolute error
      double z_error = getZError();
      double pitch_limit = DUNE::Math::Angles::radians(m_args->stable_angle_window);
      pitch_limit = DUNE::Math::Angles::normalizeRadian(pitch_limit);
      if (isDescending(z_error))
      {
        if (m_estate.theta > pitch_limit)
        {
          if (!m_stabilize_init)
          {
            m_stabilize_init = true;
            brake(true);
          }
        }
        else
        {
          if (m_stabilize_init)
            brake(false);
          changeState(SM_RECOVER_DESCENT);  
        }
      }
      else
      {
        if (m_estate.theta < -pitch_limit)
        {
          if (!m_stabilize_init)
          {
            m_stabilize_init = true;
            brake(true);
          }
        }
        else
        {
          if (m_stabilize_init)
            brake(false);
          changeState(SM_RECOVER_ASCENT);  
        }
      }
    }

    void
    ClimbMonitor::resetStabilize()
    {
      m_stabilize_init = false;
    }

    void
    ClimbMonitor::onRecoverDescent()
    {
      if (!m_rec_descent_init)
      {
        IMC::DesiredSpeed desired_speed;
        desired_speed.speed_units = IMC::SUNITS_RPM;
        desired_speed.value = m_args->speed_boost_rpm;

        war("Recovering descent -> Increasing speed");
        m_args->entity->dispatch(desired_speed);
        m_rec_descent_init = true;
      }

      double z_error = getZError();
      m_change_average.update(z_error);
      if (m_change_average.get() < 0) // Recovering
      {
        m_args->entity->dispatch(m_speed_ref);
        updateClimbState();
      }

      if (m_recover_error_timer.overflow())
        changeState(SM_EMERGENCY);
    }

    void
    ClimbMonitor::resetRecoverDescent()
    {
      m_climb_error_timer.reset();
      m_change_average.reset();
      m_rec_descent_init = false;
    }

    void
    ClimbMonitor::onRecoverAscent()
    {
      if (!m_rec_ascent_init)
      {
        if (!m_braking)
          brake(true);

        war("Recovering ascent -> Braking");
        m_rec_ascent_init = true;
      }

      double z_error = getZError();
      m_change_average.update(z_error);
      if (m_change_average.get() < 0) // Recovering
      {
        brake(false);
        updateClimbState();
      }

      if (m_recover_error_timer.overflow())
        changeState(SM_EMERGENCY);
    }

    void
    ClimbMonitor::resetRecoverAscent()
    {
      m_climb_error_timer.reset();
      m_change_average.reset();
      m_rec_ascent_init = false;
    }

    void
    ClimbMonitor::onClimb()
    {
      // Compute absolute error
      double z_error = getZError();

      // If at desired z -> change state
      if (isOnTarget(z_error))
      {
        changeState(SM_AT_TARGET);
        return;
      }

      m_change_average.update(z_error);
      // if error is decreasing, on average -> reset climb timer
      if (m_change_average.get() < 0)
      {
        m_climb_error_timer.reset();
        return;
      }

      if (m_climb_error_timer.overflow())
        changeState(SM_STABILIZE);
    }

    void
    ClimbMonitor::resetClimb()
    {
      m_change_average.reset();
      m_climb_error_timer.reset();
    }

    //! Stabilize state
    void
    ClimbMonitor::onEmergency()
    {
      IMC::Abort abort;
      m_args->entity->dispatch(abort);
      deactivate();
    }

    void
    ClimbMonitor::changeState(ClimbStates state, bool reset_state)
    {
      if (m_cstate == state)
        return;

      // Reset state
      if (reset_state)
      {
        switch (state)
        {
          case SM_DESCENDING:
          case SM_ASCENDING:
            resetClimb();
            break;
          case SM_STABILIZE:
            resetStabilize();
            break;
          case SM_RECOVER_DESCENT:
            resetRecoverDescent();
            break;
          case SM_RECOVER_ASCENT:
            resetRecoverAscent();
            break;
          default:
            break;
        }
      }

      debug(String::str("State change: %s", c_str_states[state].c_str()));
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

    void
    ClimbMonitor::err(const std::string& msg) const
    {
      m_args->task->err("[%s.%s] >> %s", DTR(c_cm_name.c_str()),
                        DTR(c_str_states[m_cstate].c_str()), msg.c_str());
    }
  }
}
