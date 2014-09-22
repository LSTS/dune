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

#ifndef DUNE_CONTROL_BOTTOM_TRACKER_HPP_INCLUDED_
#define DUNE_CONTROL_BOTTOM_TRACKER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Entities/BasicEntity.hpp>
#include <DUNE/Math/MovingAverage.hpp>
#include "SlopeData.hpp"

namespace DUNE
{
  namespace Control
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM BottomTracker;

    class BottomTracker
    {
    public:
      struct Arguments
      {
        //! Pointer to task.
        Tasks::Task* task;
        //! Number of samples for forward range moving average.
        unsigned fsamples;
        //! Safe pitch angle to perform bottom tracking.
        float safe_pitch;
        //! Minimum admissible altitude for bottom tracking.
        float min_alt;
        //! Minimum admissible forward range for bottom tracking.
        float min_range;
        //! Altitude tolerance when in depth control.
        float alt_tol;
        //! Depth below which altitude is ignored.
        float depth_tol;
        //! Depth limit for tracking bottom.
        float depth_limit;
        //! Slope angle hysteresis value for safeness detection.
        float slope_hyst;
        //! Check slope trend in unsafe state
        bool check_trend;
        //! Control period of execution for the bottom tracker
        float control_period;
        //! Enable or disable obstacle avoidance during depth control
        bool depth_avoid;
        //! Admissible altitude when doing depth control
        float adm_alt;
        //! Entity for bottom tracker
        Entities::BasicEntity* entity;
      };

      //! Constructor.
      //! @param[in] args pointer to bottom track arguments struct
      BottomTracker(const Arguments* args);

      //! Destructor.
      ~BottomTracker(void);

      //! Reset task's variables.
      void
      reset(void);

      //! Activate bottom tracker
      void
      activate(void);

      //! Deactivate bottom tracker
      void
      deactivate(void);

      //! On consume message Distance.
      //! @param[in] msg message being consumed.
      void
      onDistance(const DUNE::IMC::Distance* msg);

      //! On new desired z reference message (sent or received).
      //! @param[in] msg message being consumed or sent.
      //! @param[in] outgoing true if message is supposed to go to the bus.
      void
      onDesiredZ(const DUNE::IMC::DesiredZ* msg, bool outgoing);

      //! On new desired z reference message (sent or received).
      //! @param[in] msg message being consumed or sent.
      void
      onDesiredZ(const DUNE::IMC::DesiredZ* msg)
      {
        onDesiredZ(msg, false);
      };

      //! On new desired speed message.
      //! @param[in] msg message being consumed or sent.
      void
      onDesiredSpeed(const DUNE::IMC::DesiredSpeed* msg);

      //! On new EstimatedState message.
      //! @param[in] msg message being consumed.
      void
      onEstimatedState(const DUNE::IMC::EstimatedState* msg);

    private:
      //! State machine states.
      enum MachineStates
      {
        //! Idle doing nothing.
        SM_IDLE,
        //! Tracking bottom.
        SM_TRACKING,
        //! Depth control.
        SM_DEPTH,
        //! On limit depth control.
        SM_LIMITDEPTH,
        //! In an unsafe yet controllable state.
        SM_UNSAFE,
        //! Avoiding unsurpassable obstacle.
        SM_AVOIDING
      };

      //! Forcing depth or altitude control.
      enum ForcedControl
      {
        //! Forcing none of them.
        FC_NONE,
        //! Forcing depth control.
        FC_DEPTH,
        //! Forcing altitude control.
        FC_ALTITUDE
      };

      //! Check if vehicle's current situation is safe (check slope etc)
      //! Take appropriate measures
      //! @return true if safe, false if not safe or unable to tell
      bool
      checkSafety(void);

      //! Update bottom tracking state machine.
      void
      updateStateMachine(void);

      //! On idle state.
      void
      onIdle(void);

      //! On altitude tracking state.
      void
      onTracking(void);

      //! On depth tracking state.
      void
      onDepth(void);

      //! Near depth limit.
      void
      onLimitDepth(void);

      //! On unsafe state.
      void
      onUnsafe(void);

      //! On avoiding state.
      void
      onAvoiding(void);

      //! Brake
      //! @param[in] start true to start braking, false to stop
      void
      brake(bool start) const;

      //! Dispatch safe depth message.
      void
      dispatchSafeDepth(void) const;

      //! Dispatch absolute limit for desired depth message.
      void
      dispatchLimitDepth(void) const;

      //! Dispatch same altitude.
      void
      dispatchSameZ(void) const;

      //! Dispatch altitude message.
      void
      dispatchAltitude(void) const;

      //! Dispatch admissible altitude.
      void
      dispatchAdmAltitude(void) const;

      //! Check if forward range measurement could be the surface.
      //! @return true if it can be the surface.
      bool
      isSurface(void) const;

      //! Check if altitude values should be ignored or not.
      //! @return true if they should be ignored.
      bool
      isAltitudeValid(void);

      //! Function for info messages.
      //! @param[in] msg string message to output.
      void
      info(const std::string& msg) const;

      //! Function for debug messages.
      //! @param[in] msg string message to output.
      void
      debug(const std::string& msg) const;

      //! Throw an error if really necessary
      //! @param[in] msg string message to output
      void
      err(const std::string& msg) const;

      //! Pointer to arguments.
      const Arguments* m_args;
      //! SlopeData object
      SlopeData* m_sdata;
      //! Active or inactive.
      bool m_active;
      //! Got necessary data to start state machine.
      bool m_got_data;
      //! Current state in the state machine.
      MachineStates m_mstate;
      //! Forced control enum.
      ForcedControl m_forced;
      //! Last received DesiredSpeed value.
      float m_dspeed;
      //! Last EstimatedState message.
      DUNE::IMC::EstimatedState m_estate;
      //! Last received DesiredZ message.
      DUNE::IMC::DesiredZ m_z_ref;
      //! Last altitude validity, true if valid
      bool m_valid_alt;
      //! Last time main routine was ran
      float m_last_run;
      //! Control parcel message for debug
      DUNE::IMC::ControlParcel m_cparcel;
    };
  }
}

#endif
