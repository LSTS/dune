//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: BottomTracker.hpp 12679 2013-01-23 11:00:01Z pdcalado            $:*
//***************************************************************************

#ifndef DUNE_CONTROL_BOTTOM_TRACKER_HPP_INCLUDED_
#define DUNE_CONTROL_BOTTOM_TRACKER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Tasks/Task.hpp>
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
        //! Entity id for bottom tracker
        unsigned eid;
        //! Control period of execution for the bottom tracker
        float control_period;
      };

      //! Constructor.
      //! @param[in] pointer to bottom track arguments struct
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

      //! Update bottom tracking state machine.
      void
      updateStateMachine(void);

      //! On idle state.
      void
      onIdle(void);

      //! On tracking state.
      void
      onTracking(void);

      //! On tracking state.
      void
      onDepth(void);

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

      //! Check if forward range measurement could be the surface.
      //! @return true if it can be the surface.
      bool
      isSurface(void) const;

      //! Check if altitude values should be ignored or not.
      //! @return true if they should be ignored.
      bool
      isAltitudeValid(void);

      //! Inline function to call dispatch
      //! @param[in] msg pointer to message to dispatch
      inline void
      dispatch(IMC::Message& msg) const;

      //! Inline function to call dispatch
      //! @param[in] msg
      inline void
      dispatchLoop(IMC::Message& msg) const;

      //! Temporary function for debug messages.
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
