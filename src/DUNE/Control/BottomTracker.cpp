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
#include <limits>
#include <cmath>

// DUNE headers.
#include <DUNE/Control/BottomTracker.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Tasks/Task.hpp>

using namespace DUNE::Math;
using namespace DUNE::Utils;
using std::sin;
using std::cos;
using std::tan;

//! Depth hysteresis for ignoring ranges and altitude
static const float c_depth_hyst = 0.5;
//! State to string for debug messages
static const std::string c_str_states[] = {DTR_RT("Idle"), DTR_RT("Tracking"),
                                           DTR_RT("Depth"), DTR_RT("LimitDepth"),
                                           DTR_RT("Unsafe"), DTR_RT("Avoiding")};

//! Bottom tracker name
static const std::string c_bt_name = DTR_RT("BottomTrack");

namespace DUNE
{
  namespace Control
  {
    BottomTracker::BottomTracker(const Arguments* args):
      m_args(args),
      m_active(false)
    {
      m_sdata = new SlopeData(m_args->fsamples, m_args->min_range,
                              m_args->safe_pitch, m_args->slope_hyst);

      reset();
    }

    BottomTracker::~BottomTracker(void)
    {
      Memory::clear(m_sdata);
    }

    void
    BottomTracker::reset(void)
    {
      if (m_sdata != NULL)
        m_sdata->reset();

      m_mstate = SM_IDLE;

      m_got_data = false;

      m_z_ref.value = 0.0;
      m_z_ref.z_units = IMC::Z_NONE;

      m_forced = FC_NONE;

      m_dspeed = 0.0;

      m_last_run = Time::Clock::get();

      m_cparcel.clear();
    }

    void
    BottomTracker::activate(void)
    {
      m_active = true;
      reset();

      debug("enabling");
    }

    void
    BottomTracker::deactivate(void)
    {
      m_active = false;
      debug("disabling");
    }

    void
    BottomTracker::onDistance(const IMC::Distance* msg)
    {
      // Use control parcel for debug
      m_sdata->onDistance(msg, m_estate, m_cparcel);
    }

    void
    BottomTracker::onDesiredZ(const IMC::DesiredZ* msg, bool outgoing)
    {
      IMC::DesiredZ zed = *msg;
      bool tobus = false;

      if (m_active)
      {
        m_z_ref = zed;

        if (outgoing)
        {
          switch (m_mstate)
          {
            case SM_UNSAFE:
            case SM_AVOIDING:
              // do not tobus message
              break;
            default:
              tobus = true;
              break;
          }

          if (m_forced != FC_NONE)
            tobus = false;
        }
      }
      else if (outgoing)
      {
        tobus = true;
      }

      if (tobus)
      {
        zed.setTimeStamp();
        m_args->entity->dispatch(zed, Tasks::DF_KEEP_TIME);
      }
    }

    void
    BottomTracker::onDesiredSpeed(const IMC::DesiredSpeed* msg)
    {
      if (!m_active)
        return;

      m_dspeed = msg->value;
    }

    void
    BottomTracker::onEstimatedState(const IMC::EstimatedState* msg)
    {
      if (!m_active)
        return;

      m_estate = *msg;

      if (Time::Clock::get() - m_last_run > m_args->control_period)
      {
        updateStateMachine();
        m_last_run = Time::Clock::get();

        // dispatch debug message
        m_args->entity->dispatch(m_cparcel, Tasks::DF_KEEP_TIME);
      }
    }

    bool
    BottomTracker::checkSafety(void)
    {
      // Do not attempt to interfere if the echo can be the surface
      if (m_sdata->isSurface(m_estate))
        return false;

      // Check if forward range is too low
      if (m_sdata->isRangeLow())
      {
        debug(String::str("frange is too low: %.2f.", m_sdata->getFRange()));

        brake(true);
        m_mstate = SM_AVOIDING;
        return false;
      }

      // if slope is too steep
      if (m_sdata->isTooSteep())
      {
        debug(String::str("slope is too steep: %.2f > %.2f",
                          Angles::degrees(m_sdata->getSlope()),
                          Angles::degrees(m_args->safe_pitch)));

        m_cparcel.d = m_sdata->updateSlopeTop(m_estate);
        dispatchSafeDepth();
        m_mstate = SM_UNSAFE;
        return false;
      }

      return true;
    }

    void
    BottomTracker::updateStateMachine(void)
    {
      if (!m_active)
        return;

      if (!m_got_data)
      {
        // Check if we have altitude or depth reference
        if (m_z_ref.z_units == IMC::Z_NONE)
          return;

        // Check if we have a speed reference
        if (m_dspeed <= 0.0)
          return;
      }

      m_got_data = true;

      // Run state machine
      switch (m_mstate)
      {
        case SM_IDLE:
          onIdle();
          break;
        case SM_TRACKING:
          onTracking();
          break;
        case SM_DEPTH:
          if (m_args->depth_avoid)
            onDepth();
          else
            onIdle();
          break;
        case SM_LIMITDEPTH:
          onLimitDepth();
          break;
        case SM_UNSAFE:
          onUnsafe();
          break;
        case SM_AVOIDING:
          onAvoiding();
          break;
      }
    }

    void
    BottomTracker::onIdle(void)
    {
      if (m_z_ref.z_units == IMC::Z_ALTITUDE)
      {
        debug("units are now altitude. moving to tracking");

        m_mstate = SM_TRACKING;

        m_valid_alt = (m_estate.depth > m_args->depth_tol);
        return;
      }
      else if (m_z_ref.z_units == IMC::Z_DEPTH)
      {
        m_mstate = SM_DEPTH;

        m_valid_alt = (m_estate.depth > m_args->depth_tol);
        return;
      }
    }

    void
    BottomTracker::onTracking(void)
    {
      // Render slope top as invalid here
      m_sdata->renderSlopeInvalid();

      float depth_ref = m_estate.depth + m_estate.alt - m_z_ref.value;

      // if units are now altitude
      if (m_forced == FC_ALTITUDE)
      {
        if  (m_z_ref.z_units == IMC::Z_ALTITUDE)
        {
          debug("units are altitude now. moving to tracking");

          m_forced = FC_NONE;
          m_mstate = SM_TRACKING;
          return;
        }
        else if (depth_ref >= m_args->adm_alt + c_depth_hyst)
        {
          debug("depth reference is now safe");

          m_forced = FC_NONE;
          dispatchSameZ();
          m_mstate = SM_DEPTH;
          return;
        }
      } // if reference is for depth now
      else if ((m_forced != FC_ALTITUDE) && (m_z_ref.z_units == IMC::Z_DEPTH))
      {
        debug("units are depth now");

        m_mstate = SM_DEPTH;
        return;
      }

      // Do not attempt to interfere if we cant use altitude
      if (!isAltitudeValid())
        return;

      // check if altitude value is becoming dangerous
      if (m_estate.alt < m_args->min_alt)
      {
        debug(String::str("altitude is too low: %.2f.", m_estate.alt));

        brake(true);
        m_mstate = SM_AVOIDING;
        return;
      }

      // check safety
      if (!checkSafety())
        return;

      // if reaching a limit in altitude
      if (depth_ref > m_args->depth_limit + c_depth_hyst &&
          m_estate.depth > m_args->depth_limit)
      {
        info(DTR("depth is reaching unacceptable values, forcing depth control"));

        m_forced = FC_DEPTH;
        dispatchLimitDepth();
        m_mstate = SM_LIMITDEPTH;
        return;
      }
    }

    void
    BottomTracker::onDepth(void)
    {
      // Render slope top as invalid here
      m_sdata->renderSlopeInvalid();

      // if reference is for altitude now
      if (m_z_ref.z_units == IMC::Z_ALTITUDE)
      {
        debug("units are altitude now. moving to tracking");

        m_mstate = SM_TRACKING;
        return;
      }

      // Do not attempt to interfere if we cant use altitude
      if (!isAltitudeValid())
        return;

      // if reaching a limit in altitude
      float depth_ref = m_estate.depth + m_estate.alt - m_z_ref.value;

      // if altitude is not admissible for depth control
      if (depth_ref < m_args->adm_alt && m_estate.alt < m_args->adm_alt)
      {
        debug("below admissible depth. moving to altitude control.");

        m_forced = FC_ALTITUDE;
        m_mstate = SM_TRACKING;
        dispatchAdmAltitude();
        return;
      }

      // check safety
      if (!checkSafety())
        return;
    }

    void
    BottomTracker::onLimitDepth(void)
    {
      // if reference is for altitude now
      if ((m_z_ref.z_units == IMC::Z_ALTITUDE) && (m_forced != FC_DEPTH))
      {
        debug("units are altitude now. moving to altitude control");

        m_forced = FC_NONE;
        dispatchSameZ();
        m_mstate = SM_TRACKING;
        return;
      }

      if ((m_z_ref.z_units == IMC::Z_DEPTH) && (m_z_ref.value < m_args->depth_limit))
      {
        debug("units are depth now. moving to idle");

        m_forced = FC_NONE;
        m_mstate = SM_IDLE;
        dispatchSameZ();
        return;
      }

      if (m_sdata->isRangeLow())
      {
        debug(String::str("frange is too low: %.2f.", m_sdata->getFRange()));

        m_forced = FC_NONE;
        brake(true);
        m_mstate = SM_AVOIDING;
        return;
      }

      // check if depth control is being forced and if we can switch back
      if ((m_forced == FC_DEPTH) &&
          (m_estate.depth + m_estate.alt - m_z_ref.value < m_args->depth_limit))
      {
        debug("depth is no longer near the limit");

        m_forced = FC_NONE;
        dispatchSameZ();
        m_mstate = SM_TRACKING;
        return;
      }
    }

    void
    BottomTracker::onUnsafe(void)
    {
      m_cparcel.d = m_sdata->updateSlopeTop(m_estate);

      // Test if slope top is no longer an issue
      bool away_top = m_sdata->isTopCleared();

      // Can we use altitude
      if (!isAltitudeValid())
      {
        if (away_top)
        {
          debug("cannot use altitude");
          debug("moving away from slope top or ");
          debug(String::str("distance to slope top is short: %.2f",
                            m_sdata->getDistanceToSlope()));
          debug("moving to tracking");

          dispatchSameZ();
          m_mstate = SM_TRACKING;
          m_sdata->renderSlopeInvalid();
        }

        return;
      }

      // check if altitude or forward range value is becoming dangerous
      if ((m_estate.alt < m_args->min_alt) || m_sdata->isRangeLow())
      {
        if (m_estate.alt < m_args->min_alt)
          debug(String::str("altitude is too low: %.2f.", m_estate.alt));
        else
          debug(String::str("frange is too low: %.2f.", m_sdata->getFRange()));

        brake(true);
        m_mstate = SM_AVOIDING;
        return;
      }

      if (m_sdata->isSurface(m_estate))
      {
        debug("cannot use range. tracking");

        dispatchSameZ();
        m_mstate = SM_TRACKING;
        return;
      }

      // check if slope is safe
      if (!m_sdata->isTooSteep())
      {
        if (away_top)
        {
          debug("moving away from slope top or ");
          debug(String::str("distance to slope top is short: %.2f",
                            m_sdata->getDistanceToSlope()));
          debug("moving to tracking");

          // dispatch same z reference sent by upper layer
          dispatchSameZ();
          m_mstate = SM_TRACKING;
          m_sdata->renderSlopeInvalid();
          return;
        }
      }  // check if slope is becoming steeper
      else if (m_sdata->isSlopeIncreasing())
      {
        if (m_args->check_trend || (!m_args->check_trend && m_estate.theta < 0.0))
        {
          debug(String::str("slope is becoming steeper %.2f",
                            Angles::degrees(m_sdata->getSlope())));

          dispatchSafeDepth();
        }
      }
    }

    void
    BottomTracker::onAvoiding(void)
    {
      // If ranges or altitude cannot be used, then we're clueless
      if (m_sdata->isSurface(m_estate) || !isAltitudeValid())
      {
        err(DTR("unable to avoid obstacle"));
        return;
      }

      // check if slope is safe right now and
      // check if buoyancy has pulled the vehicle up to a safe depth/altitude
      if (!m_sdata->isTooSteep() && !m_sdata->isRangeLow())
      {
        if ((m_z_ref.z_units == IMC::Z_ALTITUDE) && (m_estate.alt >= m_z_ref.value))
        {
          debug("above altitude reference and slope is safe");

          // Stop braking
          brake(false);
          dispatchSameZ();
          m_mstate = SM_TRACKING;
          return;
        }
        else if ((m_forced == FC_ALTITUDE) && (m_estate.alt >= m_args->adm_alt))
        {
          debug("slope is safe, keep forcing altitude");

          // Stop braking
          brake(false);
          dispatchAdmAltitude();
          m_mstate = SM_TRACKING;
          return;
        }
        else if ((m_z_ref.z_units == IMC::Z_DEPTH) && (!m_args->depth_avoid))
        {
          debug("units are depth, carry on");

          // Stop braking
          brake(false);
          dispatchSameZ();
          m_mstate = SM_DEPTH;
          return;
        }
        else if ((m_z_ref.z_units == IMC::Z_DEPTH) && (m_args->depth_avoid))
        {
          debug("situation is now safe, carry on");

          // Stop braking
          brake(false);
          dispatchSameZ();
          m_mstate = SM_DEPTH;
          return;
        }
      }
    }

    void
    BottomTracker::brake(bool start) const
    {
      IMC::Brake brk;
      brk.op = start ? IMC::Brake::OP_START : IMC::Brake::OP_STOP;
      m_args->entity->dispatch(brk, Tasks::DF_LOOP_BACK);

      if (start)
        info(DTR("Started braking"));
      else
        info(DTR("Stopped braking"));
    }

    void
    BottomTracker::dispatchSafeDepth(void) const
    {
      // compute depth at top of slope
      float depth_at_slope = m_estate.depth - m_sdata->getFRange() * sin(m_estate.theta);

      IMC::DesiredZ new_ddepth;
      new_ddepth.z_units = IMC::Z_DEPTH;

      if (m_z_ref.z_units == IMC::Z_ALTITUDE)
        new_ddepth.value = std::max((float)0.0, depth_at_slope - m_z_ref.value);
      else
        new_ddepth.value = std::max((float)0.0, depth_at_slope - m_args->alt_tol);

      m_args->entity->dispatch(new_ddepth);

      debug(String::str("dispatching new depth: %.2f", new_ddepth.value));
    }

    void
    BottomTracker::dispatchLimitDepth(void) const
    {
      IMC::DesiredZ limit_depth;
      limit_depth.value = m_args->depth_limit;
      limit_depth.z_units = IMC::Z_DEPTH;

      m_args->entity->dispatch(limit_depth);

      debug(String::str("dispatching limit depth: %.2f", limit_depth.value));
    }

    void
    BottomTracker::dispatchSameZ(void) const
    {
      IMC::DesiredZ same_z = m_z_ref;

      m_args->entity->dispatch(same_z);

      debug(String::str("dispatching same z ref: %.2f", same_z.value));
    }

    void
    BottomTracker::dispatchAltitude(void) const
    {
      IMC::DesiredZ zed;
      zed.value = m_args->alt_tol;
      zed.z_units = IMC::Z_ALTITUDE;

      m_args->entity->dispatch(zed);

      debug(String::str("dispatching altitude ref: %.2f", zed.value));
    }

    void
    BottomTracker::dispatchAdmAltitude(void) const
    {
      IMC::DesiredZ zed;
      zed.value = m_args->adm_alt;
      zed.z_units = IMC::Z_ALTITUDE;

      m_args->entity->dispatch(zed);
    }

    bool
    BottomTracker::isAltitudeValid(void)
    {
      if (m_estate.alt < 0.0)
        m_valid_alt = false;

      if (m_estate.depth > m_args->depth_tol)
        m_valid_alt = true;
      else if (m_estate.depth < m_args->depth_tol - c_depth_hyst)
        m_valid_alt = false;

      return m_valid_alt;
    }

    void
    BottomTracker::info(const std::string& msg) const
    {
      m_args->task->inf("[%s.%s] >> %s", DTR(c_bt_name.c_str()),
                        DTR(c_str_states[m_mstate].c_str()), msg.c_str());
    }

    void
    BottomTracker::debug(const std::string& msg) const
    {
      m_args->task->debug("[%s.%s] >> %s", DTR(c_bt_name.c_str()),
                          DTR(c_str_states[m_mstate].c_str()), msg.c_str());
    }

    void
    BottomTracker::err(const std::string& msg) const
    {
      throw std::runtime_error(String::str("[%s.%s] >> %s", DTR(c_bt_name.c_str()),
                                           DTR(c_str_states[m_mstate].c_str()),
                                           msg.c_str()));
    }
  }
}
