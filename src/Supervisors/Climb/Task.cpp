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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Luis Venancio
  namespace Climb
  {
    using DUNE_NAMESPACES;

    //! State to string for debug messages
    const std::string c_str_states[] = {DTR_RT("Idle"),
                                        DTR_RT("Ascending"),
                                        DTR_RT("Descending"),
                                        DTR_RT("On Target"),
                                        DTR_RT("Stabilizing"),
                                        DTR_RT("Recovering Descent"),
                                        DTR_RT("Recovering Ascent"),
                                        DTR_RT("Emergency")};

    //! Depth hysteresis.
    static const float c_depth_hyst = 0.5;
    //! Altitude hysteresis.
    static const float c_alt_hyst = 0.2;

    struct ChangeAverage
    {
      ChangeAverage(unsigned int window_size):
        error_deriv_avr(DUNE::Math::MovingAverage<double>(window_size))
      { }
      //! Flag for first error, for derivative calculation
      bool got_error;
      //! Z error derivative
      DUNE::Math::Derivative<double> error_deriv;
      //! Average of climb error change
      DUNE::Math::MovingAverage<double> error_deriv_avr;

      void
      reset()
      {
        got_error = false;
        error_deriv.clear();
        error_deriv_avr.clear();
      }

      void
      update(double error)
      {
        error = std::abs(error);
        double z_error_deriv = error_deriv.update(error);
        if (!got_error)
        {
          got_error = true;
          return;
        }

        error_deriv_avr.update(z_error_deriv);
      }

      double
      get()
      {
        return error_deriv_avr.mean();
      }
    };

    struct Arguments
    {
      //! Climb moving average window
      unsigned window_size;
      //! Climb error timeout.
      unsigned climb_error_timeout;
      //! Recover error timeout
      unsigned recover_error_timeout;
      //! Speed boost to use when stabilizing descent
      unsigned speed_boost_rpm;
      //! Angle window to consider the vehicle pitch stable
      double stable_angle_window;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! State machine states.
      enum ClimbStates
      {
        //! Idle state, doing nothing
        SM_IDLE,
        //! Vehicle ascending.
        SM_ASCENDING,
        //! Vehicle descending.
        SM_DESCENDING,
        //! Vehicle at target z
        SM_AT_TARGET,
        //! Vehicle stabilizing
        SM_STABILIZE,
        //! Vehicle recovering descent
        SM_RECOVER_DESCENT,
        //! Vehicle recovering ascent
        SM_RECOVER_ASCENT,
        //! Vehicle unable to stabilize
        SM_EMERGENCY
      };
      //! Arguments.
      Arguments m_args;
      //! Control loops last reference
      uint32_t m_scope_ref;
      //! Current state in the state machine.
      ClimbStates m_cstate;
      //! Last EstimatedState message.
      DUNE::IMC::EstimatedState m_estate;
      //! Last received DesiredZ message.
      DUNE::IMC::DesiredZ m_z_ref;
      //! Last received DesiredSpeed message.
      DUNE::IMC::DesiredSpeed m_speed_ref;
      //! Flag first DesiredZ received
      bool m_got_zref;
      //! Flag for braking
      bool m_braking;
      // Z error change average
      ChangeAverage* m_change_average;
      //! Climb state
      //! Climb error timer, resets if climb error decreases
      DUNE::Time::Counter<double> m_climb_error_timer;
      //! Stabilize state
      //! Flag for stabilize state initialized
      bool m_stabilize_init;
      //! Recover Descent state
      //! Flag for recover descent state initialized
      bool m_rec_descent_init;
      //! Recover Ascent state
      //! Flag for recover ascent state initialized
      bool m_rec_ascent_init;
      //! Recover error timer
      DUNE::Time::Counter<double> m_recover_error_timer;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_scope_ref(0),
        m_got_zref(false),
        m_braking(false),
        m_change_average(nullptr),
        m_stabilize_init(false),
        m_rec_descent_init(false)
      {
        param("Climb Average Window Size", m_args.window_size)
        .defaultValue("10")
        .description("Climb monitor's moving average window size");

        param("Climb error timeout", m_args.climb_error_timeout)
        .defaultValue("20")
        .units(Units::Second)
        .description("Climb progress failure timeout. If there is no progress"
                    "the vehicle attempts to stabilize after this interval.");

        param("Recover error timeout", m_args.recover_error_timeout)
        .defaultValue("20")
        .units(Units::Second)
        .description("Recover failure timeout. If the vehicle does not recover"
                    " whithin this time then....");

        param("RPM Boost", m_args.speed_boost_rpm)
        .defaultValue("1900")
        .units(Units::RPM)
        .description("If attempting to stabilize descent increase RPM's to this "
                    "value.");

        param("Stable Pitch Angle Window", m_args.stable_angle_window)
        .defaultValue("10")
        .units(Units::Degree)
        .description("Angle window to consider the vehicle pitch stable");

        bind<IMC::ControlLoops>(this);
        bind<IMC::DesiredZ>(this);
        bind<IMC::DesiredSpeed>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::Brake>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.window_size))
        {
          Memory::clear(m_change_average);
          m_change_average = new ChangeAverage(m_args.window_size);
        }
      }

      void
      onActivation(void)
      {
        reset();
        debug("enabling");
      }

      void
      onDeactivation(void)
      {
        if (m_braking)
          brake(false);
        debug("disabling");
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        if (!m_change_average)
          m_change_average = new ChangeAverage(m_args.window_size);

        requestDeactivation();
        reset();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_change_average);
      }

      void
      consume(const IMC::ControlLoops* cloops)
      {
        if (cloops->scope_ref < m_scope_ref)
          return;

        m_scope_ref = cloops->scope_ref;

        if (!(cloops->mask & IMC::CL_PATH))
          return;

        const bool was = isActive();
        const bool will = cloops->enable == IMC::ControlLoops::CL_ENABLE;

        if (was != will)
        {
          if (will)
            requestActivation();
          else
            requestDeactivation();
        }
      }

      void
      consume(const IMC::DesiredZ* msg)
      {
        if (!isActive())
          return;
        
        if (msg->z_units != IMC::Z_DEPTH && msg->z_units != IMC::Z_ALTITUDE)
        {
          war("Unsupported Z units. Not tracking climb");
          requestDeactivation();
          return;
        }

        m_z_ref = *msg;
        m_got_zref = true;
        updateClimbState();
      }

      void
      consume(const IMC::DesiredSpeed* msg)
      {
        if (!isActive())
          return;

        m_speed_ref = *msg;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_estate = *msg;
        updateStateMachine();
      }

      void
      consume(const IMC::Brake* msg)
      {
        if (!isActive())
          return;

        // Disable tracking when braking
        if (msg->op == IMC::Brake::OP_STOP)
          updateClimbState();
        else
          changeState(SM_IDLE);
      }

      //! Reset task's variables.
      void
      reset(void)
      {
        m_z_ref.clear();
        m_estate.clear();
        m_cstate = SM_IDLE;
        m_got_zref = false;
        m_braking = false;
        m_climb_error_timer.setTop(m_args.climb_error_timeout);
        m_recover_error_timer.setTop(m_args.recover_error_timeout);
        resetClimb();
        resetStabilize();
        resetRecoverDescent();
        resetRecoverAscent();
      }

      //! Update climb monitor state machine.
      void
      updateStateMachine(void)
      {
        if (!isActive())
          return;

        if (!gotData())
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

      //! Get z error depending on z units
      //! @return z error, depending on z units
      double
      getZError()
      {
        if (m_z_ref.z_units == IMC::Z_ALTITUDE)
          return m_z_ref.value - m_estate.alt;
        else if (m_z_ref.z_units == IMC::Z_DEPTH)
          return m_estate.depth - m_z_ref.value;

        war("Unsupported Z units. Not tracking climb");
        requestDeactivation();
        return 0;
      }

      //! Check if vehicle is at target z
      //! @param[in] z_error current z error
      //! @return true if vehicle is on target, false otherwise
      bool
      isOnTarget(double z_error)
      {     
        double hyst = m_z_ref.z_units == IMC::Z_ALTITUDE ? c_alt_hyst : c_depth_hyst;
        return std::abs(z_error) < hyst;
      }

      //! Check if vehicle is trying to descend
      //! @param[in] z_error current z error
      //! @return true if vehicle is trying to descend, false if ascending
      bool
      isDescending(double z_error)
      {
        return z_error < 0;
      }

      //! Brake
      //! @param[in] start true to start braking, false to stop
      void
      brake(bool start)
      {
        IMC::Brake brk;
        m_braking = start;
        brk.op = start ? IMC::Brake::OP_START : IMC::Brake::OP_STOP;
        dispatch(brk);

        if (start)
          inf(DTR("Started braking"));
        else
          inf(DTR("Stopped braking"));
      }      
      
      //! Check if there is enough data to start tracking
      //! @return true if there is sufficient data, false otherwise
      bool
      gotData()
      {
        return m_got_zref;
      }

      //! Update climb state according to DesiredZ reference
      void
      updateClimbState()
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

      //! Idle state
      void
      onIdle()
      {

      }
      
      //! On Target state
      void
      onTarget()
      {
        // Check if still of target, otherwise change state
        updateClimbState();
      }

      //! Stabilize state
      void
      onStabilize()
      {
        double z_error = getZError();
        double pitch_limit = DUNE::Math::Angles::radians(m_args.stable_angle_window);
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

      //! Reset stabilize state
      void
      resetStabilize()
      {
        m_stabilize_init = false;
      }

      //! Recover descent state
      void
      onRecoverDescent()
      {
        if (!m_rec_descent_init)
        {
          IMC::DesiredSpeed desired_speed;
          desired_speed.speed_units = IMC::SUNITS_RPM;
          desired_speed.value = m_args.speed_boost_rpm;

          war("Recovering descent -> Increasing speed");
          dispatch(desired_speed);
          m_rec_descent_init = true;
        }

        double z_error = getZError();
        m_change_average->update(z_error);
        if (m_change_average->get() < 0) // Recovering
        {
          dispatch(m_speed_ref);
          updateClimbState();
        }

        if (m_recover_error_timer.overflow())
          changeState(SM_EMERGENCY);
      }

      //! Reset recover descent state
      void
      resetRecoverDescent()
      {
        m_recover_error_timer.reset();
        m_change_average->reset();
        m_rec_descent_init = false;
      }

      //! Recover ascent state
      void
      onRecoverAscent()
      {
        if (!m_rec_ascent_init)
        {
          if (!m_braking)
            brake(true);

          war("Recovering ascent -> Braking");
          m_rec_ascent_init = true;
        }

        double z_error = getZError();
        m_change_average->update(z_error);
        if (m_change_average->get() < 0) // Recovering
        {
          brake(false);
          updateClimbState();
        }

        if (m_recover_error_timer.overflow())
          changeState(SM_EMERGENCY);
      }

      //! Reset recover ascend state
      void
      resetRecoverAscent()
      {
        m_recover_error_timer.reset();
        m_change_average->reset();
        m_rec_ascent_init = false;
      }

      //! Climb state
      void
      onClimb()
      {
        // Compute absolute error
        double z_error = getZError();

        // If at desired z -> change state
        if (isOnTarget(z_error))
        {
          changeState(SM_AT_TARGET);
          return;
        }

        m_change_average->update(z_error);
        // if error is decreasing, on average -> reset climb timer
        if (m_change_average->get() < 0)
        {
          m_climb_error_timer.reset();
          return;
        }

        if (m_climb_error_timer.overflow())
          changeState(SM_STABILIZE);
      }

      //! Reset climb state
      void
      resetClimb()
      {
        m_change_average->reset();
        m_climb_error_timer.reset();
      }

      //! Emergency state
      void
      onEmergency()
      {
        IMC::Abort abort;
        abort.setDestination(getSystemId());
        dispatch(abort);
        requestDeactivation();
      }
      
      //! Change state machine state
      //! @param[in] state new state 
      //! @param[in] reset_state true to reset state variables, false otherwise 
      void
      changeState(ClimbStates state, bool reset_state = true)
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

        debug("State change: %s", c_str_states[state].c_str());
        m_cstate = state;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
