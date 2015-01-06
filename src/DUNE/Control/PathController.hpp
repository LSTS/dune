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
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_CONTROL_PATH_CONTROLLER_HPP_INCLUDED_
#define DUNE_CONTROL_PATH_CONTROLLER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/Tasks.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Time.hpp>
#include <DUNE/Control/BottomTracker.hpp>

namespace DUNE
{
  namespace Control
  {
    //! Factor for path error in y direction to prevent too large cross track offsets
    static const float c_erry_factor = 1.75f;

    // Export DLL Symbol.
    class DUNE_DLL_SYM PathController;

    class PathController: public Tasks::Task
    {
    public:
      //! Constructor.
      PathController(std::string name, Tasks::Context& ctx);

      //! Destructor.
      virtual
      ~PathController(void);

      //! Entity reservation callback.
      void
      onEntityReservation(void);

      //! Entity reservation callback.
      void
      onEntityResolution(void);

      //! Consumer for Brake message.
      //! @param brake message to consume.
      void
      consume(const IMC::Brake* brake);

      //! Consumer for EstimatedState message.
      //! @param es message to consume.
      void
      consume(const IMC::EstimatedState* es);

      //! Consumer for ControlLoops message.
      //! @param cl message to consume.
      void
      consume(const IMC::ControlLoops* cl);

      //! Consumer for DesiredPath message.
      //! @param dp message to consume.
      void
      consume(const IMC::DesiredPath* dp);

      //! Consumer for NavigationUncertainty message.
      //! @param nu message to consume.
      void
      consume(const IMC::NavigationUncertainty* nu);

      //! Consumer for Distance message.
      //! @param dist message to consume.
      void
      consume(const IMC::Distance* dist);

      //! Consumer for DesiredZ message.
      //! @param zref message to consume.
      void
      consume(const IMC::DesiredZ* zref);

      //! Consumer for DesiredSpeed message.
      //! @param dspeed message to consume.
      void
      consume(const IMC::DesiredSpeed* dspeed);

      //! Handler for parameter updates.
      //! This can be overriden but in that case this parent
      //! class implementation MUST be called.
      virtual void
      onUpdateParameters(void);

      //! On resource initialization
      //! This can be overriden but in that case this parent
      //! class implementation MUST be called.
      virtual void
      onResourceInitialization(void);

      //! On resource aquisition
      //! This can be overriden but in that case this parent
      //! class implementation MUST be called.
      virtual void
      onResourceAcquisition(void);

      //! On resource aquisition
      //! This can be overriden but in that case this parent
      //! class implementation MUST be called.
      virtual void
      onResourceRelease(void);

      //! Handler for path control activation.
      //! This is called when path control is activated.
      //! By default it does nothing.
      virtual void
      onPathActivation(void)
      { }

      //! Handler for path control deactivation.
      //! This is called when path control is deactivated.
      //! By default it does nothing.
      virtual void
      onPathDeactivation(void)
      { }

      //! All data regarding the vehicle's state while tracking the path
      struct TrackingState
      {
        //! current time (wall clock).
        double now;
        //! time since last control step invocation.
        double delta;
        //! start time (wall clock).
        double start_time;
        //! end time (wall clock).
        double end_time;
        //! eta estimate.
        double eta;

        //! start, end waypoints.
        struct Coord
        {
          double x;
          double y;
          double z;
        } start, end;

        //! bearing from start to end.
        double track_bearing;
        //! distance from start to end.
        double track_length;
        //! range from current position to end.
        double range;
        //! angle from current position to end (line-of-sight angle).
        double los_angle;
        //! current ground course if course control enabled, yaw otherwise.
        double course;
        //! current ground speed if course control enabled,
        //! body-fixed frame u speed otherwise.
        double speed;
        //! course error in relation to track bearing.
        double course_error;

        //! Track position & velocity.
        struct TrackCoord
        {
          //! Along track.
          double x;
          //! Cross track.
          double y;
          //! Vertical track.
          double z;
        } track_pos, track_vel;

        //! Loiter data.
        struct LoiterData
        {
          //! Center coordinates.
          Coord center;
          //! Loiter radius.
          double radius;
          //! Direction.
          bool clockwise;
        } loiter;

        //! Set if altitude control is defined.
        bool z_control : 1;
        //! Set if loitering.
        bool loitering : 1;
        //! Set if near endpoint
        bool nearby : 1;
        //! Set if course control is enabled.
        bool cc : 1;
      };

      //! Handler for the startup of a new path.
      //! The default handler does nothing and can be overriden.
      //! This is called when a new path is started
      //! (several paths may be executed between activation and deactivation).
      //! @param state current navigational state.
      //! @param ts initial tracking state.
      virtual void
      onPathStartup(const IMC::EstimatedState& state, const TrackingState& ts)
      {
        (void)state;
        (void)ts;
      }

      //! Abstract method for controller step that must be provided by subclasses.
      //! @param state navigation state
      //! @param ts tracking state information
      virtual void
      step(const IMC::EstimatedState& state, const TrackingState& ts) = 0;

      //! Default implementation for loiter control,
      //! that can be  overriden for a controller specific implementation.
      //! @param state navigation state
      //! @param ts tracking state information
      virtual void
      loiter(const IMC::EstimatedState& state, const TrackingState& ts);

      //! Flagging method indicating if controller wishes to handle
      //! altitude/depth control. If not (the default) depth or
      //! altitude references will be fired at the start of a path.
      //! @return false (at the base class level)
      virtual bool
      hasSpecificZControl(void) const
      {
        return false;
      }

      //! Signal an error.
      //! This method should be used by subclasses to signal an error condition.
      //! @param msg error message
      void
      signalError(const std::string& msg);

      //! Enable control loops.
      //! @param mask control loop mask
      void
      enableControlLoops(uint32_t mask)
      {
        configureControlLoops(IMC::ControlLoops::CL_ENABLE, mask);
      }

      //! Disable control loops (need to use only if
      //! control mode changes during path control, not on deactivation).
      //! @param mask control loop mask
      inline void
      disableControlLoops(uint32_t mask)
      {
        configureControlLoops(IMC::ControlLoops::CL_DISABLE, mask);
      }

      //! Task method.
      void
      onMain(void);

    private:
      //! Update entity state
      //! @param[in] msg message text for error description
      void
      updateEntityState(const std::string msg = "");

      //! Report current path control state
      //! @param[in] force ignore reporting period and force
      void
      reportPathControlState(bool force);

      //! Update tracking state variable
      void
      updateTrackingState(void);

      //! Test if there has been a jump in navigation
      //! @param[in] new_state newly received EstimatedState
      //! @param[in] old_state newly received EstimatedState
      //! @param[out] distance distance between present and previous EstimatedState
      //! @param[in] change_ref true if EstimatedState reference has changed
      //! @return true if the jump is considered to be meaningful
      bool
      navigationJumped(const IMC::EstimatedState* new_state,
                       const IMC::EstimatedState* old_state,
                       float &distance, bool change_ref);

      //! Monitor along track error and update variables
      void
      monitorAlongTrackError(void);

      //! Monitor cross track error and update variables
      void
      monitorCrossTrackError(void);

      //! Dispatch new control loops
      //! @param[in] enable control loops message enable field
      //! @param[in] mask control loops message mask field
      void
      configureControlLoops(uint8_t enable, uint32_t mask);

      //! OnActivation routine from parent class
      void
      onActivation(void);

      //! OnDeactivation routine from parent class
      void
      onDeactivation(void);

      //! Update position relatively to track
      //! @param[in] coord current coordinate
      //! @param[out] x x coordinate relatively to path
      //! @param[out] y y coordinate relatively to path
      template <typename T>
      inline void
      getTrackPosition(const T& coord, double* x, double* y = 0)
      {
        Coordinates::getTrackPosition(m_ts.start, m_ts.track_bearing, coord, x, y);
      }

      //! Deactivate bottom tracker
      void
      deactivateBottomTracker(void);

      //! Data for along-track error monitoring.
      struct ATMData
      {
        //! Enabled or disabled along track monitoring
        bool enabled;
        //! True if diverging
        bool diverging;
        //! Monitoring period
        double period;
        //! Minimum speed
        double min_speed;
        //! Minimum yawing when facing backwards to waypoint
        double min_yaw;
        //! Last time checked
        double time;
        //! Previous error
        double last_err;
        //! Previous course error
        double last_course_err;
      } m_atm;

      //! Data for cross-track error monitoring.
      struct CTMData
      {
        //! Enabled or disabled along track monitoring
        bool enabled;
        //! True if diverging
        bool diverging;
        //! Cross track limit
        double distance_limit;
        //! Time admissible outside the limit
        double time_limit;
        //! Time when divergence started
        double divergence_started;
        //! Navigation uncertainty factor
        double nav_unc_factor;
        //! Navigation uncertainty
        double nav_uncertainty;
      } m_ctm;

      //! Data for bottom tracker.
      struct BTData
      {
        //! Enabled or disabled
        bool enabled;
        //! Arguments for the bottom tracker
        BottomTracker::Arguments args;
      } m_btd;
      //! Entity for the bottom tracker.
      Entities::BasicEntity* m_bt_entity;

      //! Running path monitors
      bool m_running_monitors;
      //! Enable or disable course control
      bool m_course_ctl;
      //! True when already tracking path
      bool m_tracking;
      //! True if there is some error
      bool m_error;
      //! True if starting up (booting)
      bool m_setup;
      //! In braking procedures
      bool m_braking;
      //! True if monitors are being disabled because of navigation jump
      bool m_jump_monitors;
      //! Navigation jump timer to  disable monitors
      Time::Counter<float> m_jump_timer;

      // Arguments
      //! Control period
      double m_cperiod;
      //! State report period
      double m_speriod;
      //! Last time path control state was reported
      double m_last_pcs_report;
      //! Threshold for a jump in EstimatedState to turn monitors off
      float m_jump_threshold;
      //! Relation between monitor disabling time and position jump
      float m_jump_factor;
      //! ETA minimum admissible speed
      float m_eta_min_speed;
      //! Active loops
      uint32_t m_aloops;
      //! Timeout for new incoming path reference
      double m_new_ref_timeout;
      //! Time of arrival factor
      float m_time_factor;
      //! Current tracking state
      TrackingState m_ts;
      //! Path control state message
      IMC::PathControlState m_pcs;
      //! Control loops message
      IMC::ControlLoops m_cloops;
      //! EstimatedState message
      IMC::EstimatedState m_estate;
      //! DesiredZ reference
      IMC::DesiredZ m_zref;
      //! DesiredSpeed reference
      IMC::DesiredSpeed m_speed;
      //! Pointer to bottom tracker object
      BottomTracker* m_btrack;
      //! Control loops last reference
      uint32_t m_scope_ref;
    };
  }
}

#endif
