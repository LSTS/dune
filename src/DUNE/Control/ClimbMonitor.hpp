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

#ifndef DUNE_CONTROL_CLIMB_MONITOR_HPP_INCLUDED_
#define DUNE_CONTROL_CLIMB_MONITOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Entities/BasicEntity.hpp>
#include <DUNE/Math/MovingAverage.hpp>
#include <DUNE/Math/Derivative.hpp>
#include <DUNE/Time/Counter.hpp>

namespace DUNE
{
  namespace Control
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM ClimbMonitor;

    class ClimbMonitor
    {
    public:
      struct Arguments
      {
        //! Pointer to task.
        Tasks::Task* task;
        //! Entity for bottom tracker
        Entities::BasicEntity* entity;
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

      //! Constructor.
      //! @param[in] args pointer to bottom track arguments struct
      ClimbMonitor(const Arguments* args);

      //! Destructor.
      ~ClimbMonitor(void);

      //! Reset task's variables.
      void
      reset(void);

      //! Activate bottom tracker
      void
      activate(void);

      //! Deactivate bottom tracker
      void
      deactivate(void);

      //! On new desired z reference message (sent or received).
      //! @param[in] msg message being consumed or sent.
      void
      onDesiredZ(const DUNE::IMC::DesiredZ* msg);

      //! On new desired speed reference message (sent or received).
      //! @param[in] msg message being consumed or sent.
      void
      onDesiredSpeed(const DUNE::IMC::DesiredSpeed* msg);

      //! On new EstimatedState message.
      //! @param[in] msg message being consumed.
      void
      onEstimatedState(const DUNE::IMC::EstimatedState* msg);

    private:
      //! State machine states.
      enum ClimbStates
      {
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

      //! Get z error depending on z units
      //! @return z error, depending on z units
      double
      getZError();

      //! Check if vehicle is at target z
      //! @param[in] z_error current z error
      //! @return true if vehicle is on target, false otherwise
      bool
      isOnTarget(double z_error);

      //! Check if vehicle is trying to descend
      //! @param[in] z_error current z error
      //! @return true if vehicle is trying to descend, false if ascending
      bool
      isDescending(double z_error);

      //! Check if vehicle is at surface
      //! @return true if vehicle is at surface, false otherwise
      bool
      isAtSurface();

      //! Check if vehicle is pitch stable
      //! @return true if vehicle pitch is stable, false otherwise
      bool
      isPitchStable();

      //! Check if there is enough data to start tracking
      //! @return true if there is sufficient data, false otherwise
      bool
      gotData()
      {
        return m_got_zref && m_got_estate;
      }

      //! Brake
      //! @param[in] start true to start braking, false to stop
      void
      brake(bool start);

      //! On target state
      void
      onTarget();

      //! Stabilize state
      void
      onStabilize();

      //! Reset stabilize state
      void
      resetStabilize();

      //! Reset recover descent state
      void
      resetRecoverDescent();

      //! Recover descent state
      void
      onRecoverDescent();

      //! Recover ascent state
      void
      onRecoverAscent();

      //! Reset recover ascend state
      void
      resetRecoverAscent();

      //! Climb state
      void
      onClimb();

      //! Reset climb state
      void
      resetClimb();

      //! Emergency state
      void
      onEmergency();

      //! Update climb state according to DesiredZ reference
      void
      updateClimbState();

      //! Update climb monitor state machine.
      void
      updateStateMachine(void);

      //! Change state machine state
      //! @param[in] state new state 
      void
      changeState(ClimbStates state, bool reset_state = true);

      //! Function for info messages.
      //! @param[in] msg string message to output.
      void
      info(const std::string& msg) const;

      //! Function for debug messages.
      //! @param[in] msg string message to output.
      void
      debug(const std::string& msg) const;

      //! Function for warning messages.
      //! @param[in] msg string message to output
      void
      war(const std::string& msg) const;

      //! Function for error messages.
      //! @param[in] msg string message to output
      void
      err(const std::string& msg) const;

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
      //! Pointer to arguments.
      const Arguments* m_args;
      //! Active or inactive.
      bool m_active;
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
      //! Flag first EstimatedState received
      bool m_got_estate;
      //! Flag for braking
      bool m_braking;
      // Z error change average
      ChangeAverage m_change_average;
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
    };
  }
}

#endif
