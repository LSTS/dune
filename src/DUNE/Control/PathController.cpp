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

// ISO C++ 98 headers.
#include <iomanip>

// DUNE headers.
#include <DUNE/Control/PathController.hpp>
#include <DUNE/Math/General.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Time.hpp>
#include <DUNE/Utils/String.hpp>

using namespace DUNE::Coordinates;
using namespace DUNE::Math;
using namespace DUNE::IMC;
using namespace DUNE::Time;

namespace DUNE
{
  namespace Control
  {
    //! Loiter size factor to compute if inside the circle
    static const double c_lsize_factor = 0.75;
    //! Distance tolerance to loiter's center
    static const double c_ldistance = 1.0;
    //! Distance between current and previous loiter centers to consider keep on loitering
    static const double c_lkeep_distance = 30.0;
    //! Maximum admissible time for disabling monitors due to navigation jump
    static const float c_max_jump_time = 100.0;
    //! Depth margin when limiting depth in bottom tracker
    static const float c_depth_margin = 1.0;

    PathController::PathController(std::string name, Tasks::Context& ctx):
      Task(name, ctx),
      m_bt_entity(NULL),
      m_running_monitors(true),
      m_error(false),
      m_setup(true),
      m_braking(false),
      m_jump_monitors(false),
      m_aloops(0),
      m_btrack(NULL),
      m_scope_ref(0)
    {
      param("Control Frequency", m_cperiod)
      .defaultValue("10")
      .description("Control frequency (< 0 for event-driven EstimatedState processing)")
      .units(Units::Hertz);

      param("State Report Frequency", m_speriod)
      .defaultValue("1")
      .description("State report frequency")
      .units(Units::Hertz);

      param("Course Control", m_course_ctl)
      .defaultValue("true")
      .description("Enable course control");

      param("Along-track -- Monitor", m_atm.enabled)
      .defaultValue("true")
      .description("Enable along-track error monitoring");

      param("Along-track -- Check Period", m_atm.period)
      .defaultValue("15")
      .description("Period for along-track error check")
      .units(Units::Second);

      param("Along-track -- Minimum Speed", m_atm.min_speed)
      .defaultValue("0.25")
      .description("Minimum speed for along-track progress")
      .units(Units::MeterPerSecond);

      param("Along-track -- Minimum Yaw", m_atm.min_yaw)
      .defaultValue("10")
      .description("Minimum yaw speed for track bearing convergence")
      .units(Units::DegreePerSecond);

      param("Cross-track -- Monitor", m_ctm.enabled)
      .defaultValue("true")
      .description("Enable cross-track error monitoring");

      param("Cross-track -- Distance Limit", m_ctm.distance_limit)
      .defaultValue("15")
      .description("Distance threshold value for cross-track error")
      .units(Units::Meter);

      param("Cross-track -- Time Limit", m_ctm.time_limit)
      .defaultValue("10")
      .description("Time threshold value for cross-track error")
      .units(Units::Second);

      param("Cross-track -- Nav. Unc. Factor", m_ctm.nav_unc_factor)
      .defaultValue("-1")
      .description("");

      param("Position Jump Threshold", m_jump_threshold)
      .defaultValue("7.0")
      .units(Units::Meter)
      .description("Threshold for a jump in EstimatedState to turn monitors off");

      param("Position Jump Time Factor", m_jump_factor)
      .defaultValue("0.3")
      .minimumValue("0.1")
      .units(Units::MeterPerSecond)
      .description("Relation between monitor disabling time and position jump");

      param("ETA Minimum Speed", m_eta_min_speed)
      .defaultValue("1.0")
      .minimumValue("0.1")
      .units(Units::MeterPerSecond)
      .description("ETA minimum admissible speed");

      param("New Reference Timeout", m_new_ref_timeout)
      .defaultValue("5")
      .minimumValue("3")
      .maximumValue("10")
      .units(Units::Second)
      .description("Timeout for new incoming path reference");

      param("Bottom Track -- Enabled", m_btd.enabled)
      .defaultValue("false")
      .description("Enable or disable bottom track control");

      param("Bottom Track -- Forward Samples", m_btd.args.fsamples)
      .defaultValue("5")
      .description("Number of samples for forward range moving average");

      param("Bottom Track -- Safe Pitch", m_btd.args.safe_pitch)
      .defaultValue("15.0")
      .units(Units::Degree)
      .description("Safe pitch angle to perform bottom tracking");

      param("Bottom Track -- Slope Hysteresis", m_btd.args.slope_hyst)
      .defaultValue("1.5")
      .units(Units::Degree)
      .description("Slope hysteresis when recovering from avoidance");

      param("Bottom Track -- Minimum Altitude", m_btd.args.min_alt)
      .defaultValue("1.0")
      .units(Units::Meter)
      .description("Minimum admissible altitude for bottom tracking");

      param("Bottom Track -- Minimum Range", m_btd.args.min_range)
      .defaultValue("4.0")
      .units(Units::Meter)
      .description("Minimum admissible forward range for bottom tracking");

      param("Bottom Track -- Altitude Tolerance", m_btd.args.alt_tol)
      .defaultValue("2.0")
      .units(Units::Meter)
      .description("Altitude tolerance below which altitude is ignored");

      param("Bottom Track -- Depth Tolerance", m_btd.args.depth_tol)
      .defaultValue("1.0")
      .units(Units::Meter)
      .description("Depth tolerance below which altitude is ignored");

      param("Bottom Track -- Check Trend", m_btd.args.check_trend)
      .defaultValue("true")
      .description("Check slope angle trend in unsafe state");

      param("Bottom Track -- Execution Frequency", m_btd.args.control_period)
      .defaultValue("5")
      .units(Units::Hertz)
      .description("Bottom tracker's execution frequency");

      param("Bottom Track -- Depth Avoidance", m_btd.args.depth_avoid)
      .defaultValue("true")
      .description("Enable or disable obstacle avoidance during depth control");

      param("Bottom Track -- Admissible Altitude", m_btd.args.adm_alt)
      .defaultValue("3.0")
      .units(Units::Meter)
      .description("Admissible altitude when doing depth control");

      m_ctx.config.get("General", "Absolute Maximum Depth", "50.0", m_btd.args.depth_limit);
      m_btd.args.depth_limit -= c_depth_margin;

      m_ctx.config.get("General", "Time Of Arrival Factor", "5.0", m_time_factor);

      bind<IMC::Brake>(this);
      bind<IMC::ControlLoops>(this);
      bind<IMC::DesiredPath>(this);
      bind<IMC::EstimatedState>(this);
      bind<IMC::Distance>(this);
      bind<IMC::DesiredZ>(this);
      bind<IMC::DesiredSpeed>(this);
    }

    PathController::~PathController(void)
    { }

    void
    PathController::onUpdateParameters(void)
    {
      if (paramChanged(m_cperiod))
        m_cperiod = 1.0 / m_cperiod;

      if (paramChanged(m_speriod))
        m_speriod = 1.0 / m_speriod;

      m_ts.cc = m_course_ctl ? 1 : 0;
      m_ts.loitering = false;
      m_ts.nearby = false;
      m_ts.end_time = Clock::get();
      m_ts.z_control = false;

      if (m_ctm.enabled && m_ctm.nav_unc_factor > 0)
        bind<IMC::NavigationUncertainty>(this);
      else
        m_ctm.nav_uncertainty = 0;

      if (paramChanged(m_atm.min_yaw))
        m_atm.min_yaw = Angles::radians(m_atm.min_yaw);

      if (paramChanged(m_btd.enabled))
      {
        if (m_btd.enabled)
        {
          if (paramChanged(m_btd.args.safe_pitch))
            m_btd.args.safe_pitch = Angles::radians(m_btd.args.safe_pitch);

          if (paramChanged(m_btd.args.slope_hyst))
            m_btd.args.slope_hyst = Angles::radians(m_btd.args.slope_hyst);

          if (paramChanged(m_btd.args.control_period))
            m_btd.args.control_period = 1.0 / m_btd.args.control_period;
        }
        else
        {
          deactivateBottomTracker();
        }
      }
    }

    void
    PathController::onResourceInitialization(void)
    {
      requestDeactivation();
    }

    void
    PathController::onResourceAcquisition(void)
    {
      if (m_btd.enabled)
      {
        m_btd.args.task = this;
        m_btrack = new BottomTracker(&m_btd.args);
      }
    }

    void
    PathController::onResourceRelease(void)
    {
      Memory::clear(m_btrack);
    }

    void
    PathController::onEntityReservation(void)
    {
      m_bt_entity = reserveEntity<DUNE::Entities::BasicEntity>("Bottom Track");
      m_btd.args.entity = m_bt_entity;
    }

    void
    PathController::onEntityResolution(void)
    {
    }

    void
    PathController::consume(const IMC::Brake* brake)
    {
      if (brake->op == IMC::Brake::OP_START)
        m_braking = true;
      else
        m_braking = false;
    }

    void
    PathController::consume(const IMC::DesiredPath* dpath)
    {
      if (!isActive())
      {
        err(DTR("not active"));
        return;
      }

      double now = Clock::get();
      m_pcs.flags = 0;
      m_pcs.path_ref = dpath->path_ref;
      bool no_start = false;

      if (dpath->flags & IMC::DesiredPath::FL_START)
      {
        m_pcs.start_lat = dpath->start_lat;
        m_pcs.start_lon = dpath->start_lon;
        m_pcs.start_z = dpath->start_z;
        m_pcs.start_z_units = dpath->start_z_units;
      }
      else if ((!m_tracking && now - m_ts.end_time > 1) ||
               (!m_ts.nearby && !m_ts.loitering) ||
               (dpath->flags & IMC::DesiredPath::FL_DIRECT) != 0)
      {
        m_pcs.start_lat = m_estate.lat;
        m_pcs.start_lon = m_estate.lon;

        Coordinates::toWGS84(m_estate, m_pcs.start_lat, m_pcs.start_lon);

        m_pcs.start_z = m_estate.z;

        no_start = true;
      }
      else
      {
        m_pcs.start_lat = m_pcs.end_lat;
        m_pcs.start_lon = m_pcs.end_lon;
        m_pcs.start_z = m_pcs.end_z;
        m_pcs.start_z_units = m_pcs.end_z_units;
      }

      WGS84::displacement(m_estate.lat, m_estate.lon, 0,
                          m_pcs.start_lat, m_pcs.start_lon, 0,
                          &m_ts.start.x, &m_ts.start.y);
      m_ts.start.z = m_pcs.start_z;

      if ((dpath->flags & IMC::DesiredPath::FL_LOITER_CURR) != 0 && dpath->lradius > 0)
      {
        m_pcs.end_lat = m_estate.lat;
        m_pcs.end_lon = m_estate.lon;

        Coordinates::toWGS84(m_estate, m_pcs.end_lat, m_pcs.end_lon);
        m_pcs.end_z = dpath->end_z;
        m_pcs.end_z_units = dpath->end_z_units;
      }
      else
      {
        m_pcs.end_lat = dpath->end_lat;
        m_pcs.end_lon = dpath->end_lon;
        m_pcs.end_z = dpath->end_z;
        m_pcs.end_z_units = dpath->end_z_units;
      }

      WGS84::displacement(m_estate.lat, m_estate.lon, 0,
                          m_pcs.end_lat, m_pcs.end_lon, 0,
                          &m_ts.end.x, &m_ts.end.y);
      m_ts.end.z = m_pcs.end_z;

      Coordinates::getBearingAndRange(m_ts.start, m_ts.end,
                                      &m_ts.track_bearing, &m_ts.track_length);

      // Re-initializing tracking state values
      m_ts.start_time = now;
      m_ts.end_time = -1;
      m_ts.now = m_ts.start_time;
      m_ts.delta = 0;
      m_tracking = true;

      // Reset monitors disable due to navigation jump
      // if current desired path does not have fixed start location
      if (no_start)
        m_jump_monitors = false;

      // Send altitude or depth references, unless NO_Z flag is set
      // or controller wishes to handle depth/altitude in a specific manner
      if (!hasSpecificZControl() && !(dpath->flags & IMC::DesiredPath::FL_NO_Z))
      {
        m_ts.z_control = true;
        if (dpath->end_z_units == IMC::Z_ALTITUDE || dpath->end_z_units == IMC::Z_HEIGHT)
        {
          disableControlLoops(IMC::CL_DEPTH);
          enableControlLoops(IMC::CL_ALTITUDE);
        }
        else if (dpath->end_z_units == IMC::Z_DEPTH)
        {
          disableControlLoops(IMC::CL_ALTITUDE);
          enableControlLoops(IMC::CL_DEPTH);
        }

        m_zref.value = dpath->end_z;
        m_zref.z_units = dpath->end_z_units;

        if (m_btd.enabled)
          m_btrack->onDesiredZ(&m_zref, true);
        else
          dispatch(m_zref);
      }
      else
      {
        m_ts.z_control = false;
        m_pcs.flags |= IMC::PathControlState::FL_NO_Z;
      }

      // Send speed reference
      m_speed.value = dpath->speed;
      m_speed.speed_units = dpath->speed_units;

      enableControlLoops(IMC::CL_SPEED);

      dispatch(m_speed, Tasks::DF_LOOP_BACK);

      // Loiter handling
      m_ts.loiter.radius = dpath->lradius;
      m_ts.loiter.clockwise = (dpath->flags & IMC::DesiredPath::FL_CCLOCKW) == 0;

      if (m_ts.loiter.radius > 0)
      {
        m_ts.loiter.center = m_ts.end;

        double course_err;
        course_err = std::fabs(Angles::normalizeRadian(m_estate.psi - m_ts.track_bearing));
        double sign;

        double range = c_lkeep_distance + 1.0;

        // if we're already loitering
        if (m_ts.loitering)
        {
          double dummy;
          Coordinates::getBearingAndRange(m_ts.end, m_ts.loiter.center, &dummy, &range);
        }

        // loiter's center has not changed much and vehicle is close to circle
        if (range < c_lkeep_distance && m_ts.loitering &&
            m_ts.track_length >= m_ts.loiter.radius * c_lsize_factor &&
            m_ts.track_length <= m_ts.loiter.radius * (2.0 - c_lsize_factor))
        {
          inf(DTR("keep loitering"));
        }
        // avoid singularities (very close to loiter center)
        else if (m_ts.track_length < c_ldistance)
        {
          Coordinates::setBearingAndRange(m_ts.loiter.center, m_estate.psi,
                                          m_ts.loiter.radius, m_ts.end);

          m_ts.loitering = false;
          m_ts.nearby = false;
        }
        else
        {
          // if inside the circle and turned inwards
          if ((m_ts.track_length <= m_ts.loiter.radius * c_lsize_factor) &&
              (course_err < Math::c_half_pi))
            sign = m_ts.loiter.clockwise ? 1.0 : -1.0;
          else
            sign = m_ts.loiter.clockwise ? -1.0 : 1.0;

          Coordinates::setBearingAndRange(m_ts.loiter.center,
                                          m_ts.track_bearing + sign * Math::c_half_pi,
                                          m_ts.loiter.radius,
                                          m_ts.end);

          m_ts.loitering = false;
          m_ts.nearby = false;
        }

        Coordinates::getBearingAndRange(m_ts.start, m_ts.end,
                                        &m_ts.track_bearing, &m_ts.track_length);
      }
      else
      {
        m_ts.loitering = false;
        m_ts.nearby = false;
      }

      updateTrackingState();
      reportPathControlState(true);
      updateEntityState();

      inf(DTR("path (lat/lon): %0.5f %0.5f to %0.5f %0.5f"),
          Angles::degrees(m_pcs.start_lat), Angles::degrees(m_pcs.start_lon),
          Angles::degrees(m_pcs.end_lat), Angles::degrees(m_pcs.end_lon));

      trace("state (lat/lon) %0.5f %0.5f"
            " | path (x,y,z) %0.2f, %0.2f, %0.2f to %0.2f, %0.2f, %0.2f"
            " | length(m) / bearing (dg): %0.2f / %0.2f"
            " | state (x,y,z) %0.2f,%0.2f,%0.2f"
            " | track pos (x,y,z): %0.2f, %0.2f, %0.2f"
            " | course error (dg): %0.2f",
            Angles::degrees(m_estate.lat), Angles::degrees(m_estate.lon),
            m_ts.start.x, m_ts.start.y, m_ts.start.z,
            m_ts.end.x, m_ts.end.y, m_ts.end.z,
            m_ts.track_length, Angles::degrees(m_ts.track_bearing),
            m_estate.x, m_estate.y, m_estate.z,
            m_ts.track_pos.x, m_ts.track_pos.y, m_ts.track_pos.z,
            Angles::degrees(m_ts.course_error));

      if (m_atm.enabled)
      {
        // Initialize along-track monitoring data.
        m_atm.diverging = false;
        m_atm.time = m_ts.now + m_atm.period;
        m_atm.last_err = m_ts.track_pos.x;
        m_atm.last_course_err = std::fabs(m_ts.course_error);
      }

      if (m_ctm.enabled)
      {
        // Initialize cross-track monitoring data.
        m_ctm.diverging = false;
      }

      // Call path startup handler.
      onPathStartup(m_estate, m_ts);
    }

    void
    PathController::consume(const IMC::NavigationUncertainty* nu)
    {
      m_ctm.nav_uncertainty = m_ctm.nav_unc_factor * std::sqrt(std::max(nu->x, nu->y));
    }

    void
    PathController::consume(const IMC::Distance* dist)
    {
      if (m_btd.enabled)
        m_btrack->onDistance(dist);
    }

    void
    PathController::consume(const IMC::DesiredZ* zref)
    {
      if (m_btd.enabled)
        m_btrack->onDesiredZ(zref);
    }

    void
    PathController::consume(const IMC::DesiredSpeed* dspeed)
    {
      if (m_btd.enabled)
        m_btrack->onDesiredSpeed(dspeed);
    }

    void
    PathController::consume(const IMC::EstimatedState* es)
    {
      // Allow only EstimatedState from the same vehicle.
      if (es->getSource() != getSystemId())
        return;

      if (m_btd.enabled)
      {
        try
        {
          m_btrack->onEstimatedState(es);
        }
        catch (std::runtime_error& e)
        {
          // If braking then stop braking
          if (m_braking)
          {
            IMC::Brake brk;
            brk.op = IMC::Brake::OP_STOP;
            dispatch(brk);

            m_braking = false;
          }

          signalError(e.what());
          return;
        }
      }

      if (m_setup)
      {
        m_setup = false;
        updateEntityState();
      }

      bool change_ref = false;
      double lat = 0.0;
      double lon = 0.0;

      // Save different LLH reference.
      if (es->lat != m_estate.lat ||
          es->lon != m_estate.lon ||
          es->height != m_estate.height)
      {
        change_ref = true;
        lat = es->lat;
        lon = es->lon;
      }

      // Save previous EstimatedState values
      IMC::EstimatedState prev_estate = m_estate;

      // Save new EstimatedState values
      m_estate = *es;

      if (!isActive() || m_error || !m_tracking)
        return;

      // If navigation jumped, disable path monitors for an amount time
      // proportional to the size of the navigation jump (by m_jump_factor)
      if (!m_jump_monitors)
      {
        float dist;

        if (navigationJumped(&m_estate, &prev_estate, dist, change_ref))
        {
          m_jump_monitors = true;

          // Limit the distance
          float top = trimValue(dist / m_jump_factor, 0, c_max_jump_time);
          m_jump_timer.setTop(top);

          debug("disabling monitors, navigation jumped %.1f meters", dist);
        }
      }
      else
      {
        if (m_jump_timer.overflow())
        {
          m_jump_monitors = false;

          debug("re-enabling monitors");
        }
      }

      // Apply new LLH reference.
      if (change_ref)
      {
        WGS84::displacement(lat, lon, 0,
                            m_pcs.start_lat, m_pcs.start_lon, 0,
                            &m_ts.start.x, &m_ts.start.y);
        WGS84::displacement(lat, lon, 0,
                            m_pcs.end_lat, m_pcs.end_lon, 0,
                            &m_ts.end.x, &m_ts.end.y);
      }

      double now = Clock::get();

      if (now < m_ts.now + m_cperiod)
        return;

      m_ts.delta = now - m_ts.now;
      m_ts.now = now;

      if (m_ts.nearby && m_ts.now - m_ts.end_time >= m_new_ref_timeout)
      {
        signalError(DTR("expected new path control reference"));
        return;
      }

      bool prev_nearby = m_ts.nearby;

      updateTrackingState();

      reportPathControlState(!prev_nearby && m_ts.nearby);

      if (!m_ts.loitering)
        step(*es, m_ts);
      else
        loiter(*es, m_ts);

      // If we're braking or there has been a jump in the navigation filter
      // then do not check for errors in monitoring
      if (m_braking || m_jump_monitors)
      {
        m_running_monitors = false;
      }
      else
      {
        // if was not monitoring but will monitor now
        if (!m_running_monitors)
        {
          // Reinitialize along track monitoring data
          if (m_atm.enabled && !m_ts.loitering)
          {
            m_atm.diverging = false;
            m_atm.time = m_ts.now + m_atm.period;
            m_atm.last_err = m_ts.track_pos.x;
            m_atm.last_course_err = std::fabs(m_ts.course_error);
          }

          // Reinitialize cross-track monitoring data.
          if (m_ctm.enabled)
            m_ctm.diverging = false;
        }

        m_running_monitors = true;
      }

      if (m_running_monitors)
      {
        if (m_atm.enabled && !m_ts.loitering)
          monitorAlongTrackError();

        if (m_ctm.enabled)
          monitorCrossTrackError();
      }

      if (!m_ts.loitering && m_ts.nearby && m_ts.loiter.radius > 0)
      {
        m_ts.end = m_ts.loiter.center;
        m_ts.loitering = true;
        m_ts.nearby = false;
        inf(DTR("now loitering"));
      }
    }

    void
    PathController::updateTrackingState(void)
    {
      // Range and LOS angle to destination
      getBearingAndRange(m_estate, m_ts.end, &m_ts.los_angle, &m_ts.range);

      // Ground course and speed
      m_ts.course = m_ts.cc ? std::atan2(m_estate.vy, m_estate.vx) : m_estate.psi;
      m_ts.speed = m_ts.cc ? Math::norm(m_estate.vx, m_estate.vy) : m_estate.u;

      if (!m_ts.loitering)
      {
        getTrackPosition(m_estate, &m_ts.track_pos.x, &m_ts.track_pos.y);
        m_ts.course_error = Angles::normalizeRadian(m_ts.course - m_ts.track_bearing);

        float errx = std::abs(m_ts.track_length - m_ts.track_pos.x);
        float erry = std::abs(m_ts.track_pos.y);
        float s = std::max((double)m_eta_min_speed, m_ts.speed);

        if (errx <= erry && erry < c_erry_factor * m_time_factor * s)
          m_ts.eta = errx / s;
        else
          m_ts.eta = Math::norm(errx, erry) / s;

        m_ts.eta = std::min(65535.0, m_ts.eta - m_time_factor);

        bool was_nearby = m_ts.nearby;

        if (!m_ts.nearby && m_ts.eta <= 0)
        {
          m_ts.eta = 0;
          m_ts.nearby = true;
          m_ts.end_time = m_ts.now;
        }

        if (!was_nearby && m_ts.nearby)
          debug("near endpoint");
      }
      else
      {
        m_ts.track_pos.x = 0;
        m_ts.track_pos.y = m_ts.range - m_ts.loiter.radius;

        if (m_ts.loiter.clockwise)
          m_ts.track_pos.y = -m_ts.track_pos.y;

        double ang_increment = (m_ts.loiter.clockwise ?
                                Math::c_half_pi : -Math::c_half_pi);
        m_ts.course_error = m_ts.course - m_ts.los_angle + ang_increment;
        m_ts.course_error = Angles::normalizeRadian(m_ts.course_error);
        m_ts.eta = 0;
        m_ts.nearby = false;
      }

      m_ts.track_pos.z = m_estate.z - m_ts.end.z; // vertical-track
      m_ts.track_vel.x = m_ts.speed * std::cos(m_ts.course_error); // along-track
      m_ts.track_vel.y = m_ts.speed * std::sin(m_ts.course_error); // cross-track
      m_ts.track_vel.z = std::sin(m_estate.theta) * m_estate.vz; // vertical-track
    }

    bool
    PathController::navigationJumped(const IMC::EstimatedState* new_state,
                                     const IMC::EstimatedState* old_state,
                                     float &distance, bool change_ref)
    {
      if (change_ref)
      {
        double new_lat;
        double new_lon;
        float new_hae;
        Coordinates::toWGS84(*new_state, new_lat, new_lon, new_hae);

        double old_lat;
        double old_lon;
        float old_hae;
        Coordinates::toWGS84(*old_state, old_lat, old_lon, old_hae);

        distance = Coordinates::WGS84::distance(new_lat, new_lon, new_hae,
                                                old_lat, old_lon, old_hae);
      }
      else
      {
        distance = Coordinates::getRange(*new_state, *old_state);
      }

      return (distance > m_jump_threshold);
    }

    void
    PathController::monitorAlongTrackError(void)
    {
      if (m_ts.now < m_atm.time)
        return;

      double curr;
      double min_expected;
      double progress;
      double last_err;

      if (std::fabs(m_ts.course_error) < Math::c_half_pi)
      {
        if (m_atm.diverging && (m_atm.last_course_err >= Math::c_half_pi))
          m_atm.diverging = false;

        // use along track position to compute progress
        curr = m_ts.track_pos.x;
        min_expected = m_atm.period * m_atm.min_speed;
        progress = curr - m_atm.last_err;
        last_err = m_atm.last_err;

        trace("along check is on");
      }
      else
      {
        // use course error to compute progress
        curr = std::fabs(m_ts.course_error);
        min_expected = m_atm.period * m_atm.min_yaw;
        progress = std::fabs(m_atm.last_course_err) - curr;
        last_err = m_atm.last_course_err;

        trace("course error check is on");
      }

      std::string along = Utils::String::str("along-track monitor: %0.2f (last) %0.2f (current) %0.2f (progress) %0.2f (min. expected): ", last_err, curr, progress, min_expected);

      if (m_atm.diverging)
      {
        if (progress >= min_expected)
        {
          debug("%s no longer diverging", along.c_str());
          m_atm.diverging = false;
        }
        else
        {
          debug("%s aborting", along.c_str());
          signalError(DTR("along-track divergence error"));
        }
      }
      else if (progress < min_expected)
      {
        debug("%s diverging", along.c_str());
        m_atm.diverging = true;
      }
      else
      {
        trace("%s ok", along.c_str());
      }

      m_atm.time += m_atm.period;
      m_atm.last_err = m_ts.track_pos.x;
      m_atm.last_course_err = std::fabs(m_ts.course_error);
    }

    void
    PathController::monitorCrossTrackError(void)
    {
      double d = std::fabs(m_ts.track_pos.y);

      if (d >= m_ctm.distance_limit + m_ctm.nav_uncertainty)
      {
        if (!m_ctm.diverging)
        {
          debug("cross-track monitor -- %0.1f m from track -- diverging", d);
          m_ctm.diverging = true;
          m_ctm.divergence_started = m_ts.now;
        }
        else if (m_ts.now - m_ctm.divergence_started >= m_ctm.time_limit)
        {
          signalError(DTR("cross-track divergence error"));
          return;
        }
      }
      else if (m_ctm.diverging)
      {
        m_ctm.diverging = false;
        debug("cross-track monitor -- %0.1f m from track -- recovered", d);
      }
    }

    void
    PathController::consume(const IMC::ControlLoops* cloops)
    {
      if (cloops->scope_ref < m_scope_ref)
        return;

      m_scope_ref = cloops->scope_ref;

      if (cloops->enable)
        m_aloops |= cloops->mask;
      else
        m_aloops &= ~cloops->mask;

      if (!(cloops->mask & IMC::CL_PATH))
        return;

      bool was = isActive();
      bool will = cloops->enable == IMC::ControlLoops::CL_ENABLE;

      if (was != will)
      {
        if (will)
          requestActivation();
        else
          requestDeactivation();
      }
    }

    void
    PathController::onActivation(void)
    {
      m_error = false;
      m_tracking = false;
      m_braking = false;
      debug("enabling");
      onPathActivation();
      updateEntityState();

      if (m_btd.enabled)
        m_btrack->activate();
    }

    void
    PathController::onDeactivation(void)
    {
      if (m_ts.z_control)
        disableControlLoops(m_ts.end.z < 0 ? IMC::CL_ALTITUDE : IMC::CL_DEPTH);

      m_ts.end_time = Clock::get();
      m_error = false;
      debug("disabling");
      onPathDeactivation();
      updateEntityState();

      if (m_btd.enabled)
        deactivateBottomTracker();
    }

    void
    PathController::signalError(const std::string& msg)
    {
      m_error = true;
      err("%s", msg.c_str());
      updateEntityState(msg);
    }

    void
    PathController::updateEntityState(const std::string msg)
    {
      if (m_setup)
        setEntityState(IMC::EntityState::ESTA_BOOT, DTR("waiting for position estimate from navigation"));
      else if (m_error)
        setEntityState(IMC::EntityState::ESTA_ERROR, msg);
      else if (isActive())
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      else
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
    }

    void
    PathController::configureControlLoops(uint8_t enable, uint32_t mask)
    {
      if (enable)
      {
        if ((mask & m_aloops) == mask)
          return;

        m_aloops |= mask;
      }
      else
      {
        if ((mask & ~m_aloops) == mask)
          return;

        m_aloops &= ~mask;
      }

      m_cloops.enable = enable;
      m_cloops.mask = mask;
      m_cloops.scope_ref = m_scope_ref;
      dispatch(m_cloops);
    }

    void
    PathController::reportPathControlState(bool force = false)
    {
      if (!force && m_ts.now - m_last_pcs_report < m_speriod)
        return;

      m_last_pcs_report = m_ts.now;

      if (m_ts.loitering)
        m_pcs.x = 0;
      else
        m_pcs.x = m_ts.track_length - m_ts.track_pos.x;

      m_pcs.y = m_ts.track_pos.y;
      m_pcs.z = m_ts.track_pos.z;
      m_pcs.vx = m_ts.track_vel.x;
      m_pcs.vy = m_ts.track_vel.y;
      m_pcs.vz = m_ts.track_vel.z;
      m_pcs.course_error = m_ts.course_error;

      if (m_ts.nearby)
        m_pcs.flags |= IMC::PathControlState::FL_NEAR;
      else
        m_pcs.flags &= ~IMC::PathControlState::FL_NEAR;

      if (m_ts.loitering)
      {
        m_pcs.flags |= IMC::PathControlState::FL_LOITERING;
        m_pcs.lradius = m_ts.loiter.radius;
      }
      else
      {
        m_pcs.flags &= ~IMC::PathControlState::FL_LOITERING;
        m_pcs.lradius = 0;
      }
      m_pcs.eta = (uint16_t) Math::round(m_ts.eta);
      dispatch(m_pcs);
    }

    void
    PathController::loiter(const IMC::EstimatedState& state, const TrackingState& ts)
    {
      TrackingState lts = ts;

      double b = Math::c_pi + ts.los_angle;
      Coordinates::setBearingAndRange(ts.end, b, lts.loiter.radius, lts.start);

      b += lts.loiter.clockwise ? Math::c_half_pi : -Math::c_half_pi;
      Coordinates::setBearingAndRange(lts.start, b, 500, lts.end);

      lts.track_bearing = b;
      lts.track_length = 500;
      lts.track_pos.x = 0;
      lts.los_angle = getBearing(state, lts.end);

      step(state, lts);
    }

    void
    PathController::deactivateBottomTracker(void)
    {
      if (m_btrack == NULL)
        return;

      m_btrack->deactivate();

      // If braking then stop braking
      if (m_braking)
      {
        IMC::Brake brk;
        brk.op = IMC::Brake::OP_STOP;
        dispatch(brk);

        m_braking = false;
      }
    }

    void
    PathController::onMain(void)
    {
      while (!stopping())
      {
        waitForMessages(1.0);
      }
    }
  }
}
