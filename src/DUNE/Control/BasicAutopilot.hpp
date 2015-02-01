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

#ifndef DUNE_CONTROL_BASIC_AUTOPILOT_HPP_INCLUDED_
#define DUNE_CONTROL_BASIC_AUTOPILOT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <limits>

// DUNE headers.
#include <DUNE/Tasks.hpp>
#include <DUNE/Config.hpp>
#include <DUNE/Time.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Utils.hpp>

namespace DUNE
{
  namespace Control
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM BasicAutopilot;

    class BasicAutopilot: public Tasks::Task
    {
    public:
      //! Constructor
      BasicAutopilot(const std::string& name, Tasks::Context& ctx,
                     const uint32_t controllable_loops, const uint32_t required_loops);

      //! Destructor.
      virtual
      ~BasicAutopilot(void);

      virtual void
      onResourceInitialization(void);

      virtual void
      onResourceAcquisition(void)
      { }

      virtual void
      onResourceRelease(void)
      { }

      //! Reset to initial values
      virtual void
      reset(void);

      //! To be used by derived class when estimated state is received
      virtual void
      onEstimatedState(const double timestep, const IMC::EstimatedState* msg) = 0;

      void
      consume(const IMC::EstimatedState* msg);

      void
      consume(const IMC::DesiredZ* msg);

      void
      consume(const IMC::DesiredPitch* msg);

      void
      consume(const IMC::DesiredHeading* msg);

      void
      consume(const IMC::DesiredHeadingRate* msg);

      void
      consume(const IMC::ControlLoops* msg);

      void
      consume(const IMC::DesiredVelocity* msg);

      void
      onMain(void);

    protected:
      //! Available vertical modes
      enum VerticalMode
      {
        //! No vertical mode.
        VERTICAL_MODE_NONE,
        //! Depth control.
        VERTICAL_MODE_DEPTH,
        //! Altitude control.
        VERTICAL_MODE_ALTITUDE,
        //! Pitch control.
        VERTICAL_MODE_PITCH,
        //! Heave control.
        VERTICAL_MODE_HEAVE,
        //! Number of available vertical control modes.
        VERTICAL_MODE_SIZE
      };

      //! Available yaw modes
      enum YawMode
      {
        //! No yaw control mode.
        YAW_MODE_NONE,
        //! Heading control.
        YAW_MODE_HEADING,
        //! Heading rate control.
        YAW_MODE_HRATE,
        //! Heading bypass directly to fins.
        YAW_MODE_BYPASS,
        //! Number of yaw control modes.
        YAW_MODE_SIZE
      };

      //! On autopilot activation
      //! Does nothing by default
      virtual void
      onAutopilotActivation(void)
      { }

      //! On autopilot deactivation
      //! Does nothing by default
      virtual void
      onAutopilotDeactivation(void)
      { }

      //! On deactivation leave error or active entity state
      //! Method from parent class
      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        reset();
        onAutopilotDeactivation();
      }

      //! On activation enter active entity state
      //! Method from parent class
      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        reset();
        onAutopilotActivation();
      }

      //! Signal a bad yaw mode or incompatible
      //! @param[in] desc description of bad yaw mode
      void
      signalBadYaw(const char* desc = DTR("yaw control mode %d not supported"))
      {
        setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR(desc), m_yaw_mode));
        err("%s", Utils::String::str(DTR(desc), m_yaw_mode).c_str());
        requestDeactivation();
      }

      //! Signal a bad vertical mode or incompatible
      //! @param[in] desc description of bad vertical mode
      void
      signalBadVertical(const char* desc = DTR("vertical control mode %d not supported"))
      {
        setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR(desc), m_vertical_mode));
        err("%s", Utils::String::str(DTR(desc), m_vertical_mode).c_str());
        requestDeactivation();
      }

      //! get vertical ref value
      //! @return current vertical reference value
      inline float
      getVerticalRef(void) const
      {
        return m_vertical_ref;
      }

      //! get vertical mode
      //! @return current vertical mode
      inline VerticalMode
      getVerticalMode(void) const
      {
        return m_vertical_mode;
      }

      //! get yaw ref value
      //! @return current yaw reference
      inline float
      getYawRef(void) const
      {
        return m_yaw_ref;
      }

      //! get yaw mode
      //! @return current yaw mode
      inline YawMode
      getYawMode(void) const
      {
        return m_yaw_mode;
      }

      //! get surge reference
      //! @return current surge reference
      inline float
      getSurgeRef(void) const
      {
        return m_surge_ref;
      }

      //! get sway reference
      //! @return current sway reference
      inline float
      getSwayRef(void) const
      {
        return m_sway_ref;
      }

      //! Get depth for following the bottom
      //! @return current depth to follow bottom profile
      inline float
      getBottomFollowDepth(void) const
      {
        return m_bottom_follow_depth;
      }

    private:
      //!! Current vertical mode
      VerticalMode m_vertical_mode;
      //! Current vertical reference.
      float m_vertical_ref;
      //! Current yaw reference.
      float m_yaw_ref;
      //! Current surge reference.
      float m_surge_ref;
      //! Current sway reference.
      float m_sway_ref;
      //! Current yaw control mode
      YawMode m_yaw_mode;
      //! Active loops.
      uint32_t m_aloops;
      //! Bottom tracking viability warning timer
      Time::Counter<float> m_btrack_wrn;
      //! Delta timeout for vertical control mode
      Time::Delta m_vmode_delta;
      //! Time waiting for vertical control mode so far
      float m_vmode_wait;
      //! Delta timeout for yaw control mode
      Time::Delta m_ymode_delta;
      //! Time waiting for yaw control mode so far
      float m_ymode_wait;
      //! Time of last Estimated State (Integration timer).
      Time::Delta m_last_estate;
      //! Last EstimatedState
      IMC::EstimatedState m_estate;
      //! Current bottom following depth.
      float m_bottom_follow_depth;
      //! Controllable loops in this controller
      const uint32_t m_controllable_loops;
      //! Required loops for this controller
      const uint32_t m_required_loops;
      //! Control loops last reference
      uint32_t m_scope_ref;
      //! Maximum admissible depth that the vehicle may sustain
      float m_max_depth;

      // Configuration
      //! Bypass heading rate control
      bool m_hrate_bypass;
    };
  }
}

#endif
