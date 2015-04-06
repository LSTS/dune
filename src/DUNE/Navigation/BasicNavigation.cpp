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
// Author: José Braga                                                       *
// Author: Pedro Calado (Altitude filter)                                   *
//***************************************************************************

// Local headers.
#include <DUNE/Navigation/BasicNavigation.hpp>

namespace DUNE
{
  namespace Navigation
  {
    using Tasks::DF_KEEP_TIME;

    static std::string
    getUncertaintyMessage(double hpos_var)
    {
      using Utils::String;
      return String::str(DTR("position uncertainty is %0.2f m"),
                         std::sqrt(hpos_var));
    }

    BasicNavigation::BasicNavigation(const std::string& name, Tasks::Context& ctx):
      Tasks::Periodic(name, ctx),
      m_active(false),
      m_origin(NULL),
      m_avg_heave(NULL),
      m_avg_gps(NULL)
    {
      // Declare configuration parameters.
      param("Maximum Distance to Reference", m_max_dis2ref)
      .units(Units::Meter)
      .defaultValue("1000")
      .minimumValue("500")
      .description("Maximum allowed distance to 'EstimatedState' reference");

      param(DTR_RT("Maximum Horizontal Position Variance"), m_max_hpos_var)
      .visibility(Tasks::Parameter::VISIBILITY_USER)
      .units(Units::SquareMeter)
      .defaultValue("500.0")
      .minimumValue("100.0")
      .description("Maximum allowed horizontal position estimation variance");

      param("Reject all LBL ranges", m_reject_all_lbl)
      .defaultValue("false")
      .description("Boolean variable that defines if vehicle rejects all LblRanges");

      param("LBL Expected Range Rejection Constants", m_lbl_reject_constants)
      .defaultValue("")
      .size(2)
      .description("Constants used in current LBL rejection scheme");

      param("GPS timeout", m_without_gps_timeout)
      .units(Units::Second)
      .defaultValue("3.0")
      .minimumValue("2.0")
      .description("No GPS readings timeout");

      param("DVL timeout", m_without_dvl_timeout)
      .units(Units::Second)
      .defaultValue("1.0")
      .minimumValue("1.0")
      .description("No DVL readings timeout");

      param("Altitude timeout", m_without_alt_timeout)
      .units(Units::Second)
      .defaultValue("5.0")
      .minimumValue("3.0")
      .description("No altitude readings timeout");

      param("Euler timeout", m_without_euler_timeout)
      .units(Units::Second)
      .defaultValue("10.0")
      .minimumValue("5.0")
      .description("No EulerAngles readings timeout");

      param("Depth timeout", m_without_depth_timeout)
      .units(Units::Second)
      .defaultValue("3.0")
      .minimumValue("2.0")
      .description("No Depth readings timeout");

      param("Main Depth timeout", m_without_main_depth_timeout)
      .units(Units::Second)
      .defaultValue("1.0")
      .minimumValue("0.5")
      .description("No Depth readings from main provider timeout");

      param("DVL sanity timeout", m_dvl_sanity_timeout)
      .units(Units::Second)
      .defaultValue("10.0")
      .minimumValue("10.0")
      .description("DVL sanity timeout");

      param("Distance Between DVL and CG", m_dist_dvl_cg)
      .units(Units::Meter)
      .defaultValue("0.3")
      .minimumValue("0.0")
      .description("Distance between DVL and vehicle Center of Gravity");

      param("Distance Between GPS and CG", m_dist_gps_cg)
      .units(Units::Meter)
      .defaultValue("0.28")
      .minimumValue("0.0")
      .description("Distance between GPS and vehicle Center of Gravity");

      param("Distance Between LBL and GPS", m_dist_lbl_gps)
      .units(Units::Meter)
      .defaultValue("0.50")
      .minimumValue("0.0")
      .description("Distance between LBL receiver and GPS in the vehicle");

      param("DVL absolute thresholds", m_dvl_abs_thresh)
      .defaultValue("")
      .size(2)
      .description("DVL absolute thresholds");

      param("DVL relative thresholds", m_dvl_rel_thresh)
      .defaultValue("")
      .size(2)
      .description("DVL relative thresholds");

      param("DVL relative threshold time window", m_dvl_time_rel_thresh)
      .units(Units::Second)
      .defaultValue("1.0")
      .minimumValue("0.0")
      .description("DVL relative threshold time window to be applied");

      param("LBL Threshold", m_lbl_threshold)
      .defaultValue("4.0")
      .minimumValue("2.0")
      .description("LBL Threshold value for the LBL level check rejection scheme");

      param("GPS Maximum HDOP", m_max_hdop)
      .defaultValue("5.0")
      .minimumValue("3.0")
      .maximumValue("10.0")
      .description("Maximum Horizontal Dilution of Precision value accepted for GPS fixes");

      param("GPS Maximum HACC", m_max_hacc)
      .defaultValue("14.0")
      .minimumValue("3.0")
      .maximumValue("100.0")
      .description("Maximum Horizontal Accuracy Estimate value accepted for GPS fixes");

      param("GPS Maximum Dynamic HACC factor", m_gps_hacc_factor)
      .defaultValue("2.0")
      .minimumValue("1.5")
      .maximumValue("10.0")
      .description("Maximum Horizontal Accuracy Estimate Moving Average factor");

      param("Heave Moving Average Samples", m_avg_heave_samples)
      .defaultValue("40")
      .minimumValue("10")
      .description("Number of moving average samples to smooth heave");

      param("GPS Moving Average Samples", m_avg_gps_samples)
      .defaultValue("7")
      .minimumValue("5")
      .description("Number of moving average samples to smooth maximum GPS HACC.");

      param("Entity Label - Depth", m_elabel_depth)
      .defaultValue("Depth Sensor")
      .description("Entity label of 'Depth' messages");

      param("Entity Label - Compass", m_elabel_ahrs)
      .defaultValue("AHRS")
      .description("Entity label of 'AHRS' messages");

      param("Entity Label - DVL", m_elabel_dvl)
      .description("Entity label of the DVL device");

      param("Entity Label - Altitude - Hardware", m_elabel_alt_hard)
      .description("Entity label of the 'Distance' message for Hardware profile");

      param("Entity Label - Altitude - Simulation", m_elabel_alt_sim)
      .description("Entity label of the 'Distance' message for Simulation profile");

      param("Altitude Attitude Compensation", m_alt_attitude_compensation)
      .defaultValue("false")
      .description("Enable or disable attitude compensation for altitude");

      param("Altitude EMA gain", m_alt_ema_gain)
      .defaultValue("1.0")
      .description("Exponential moving average filter gain used in altitude");

      // Do not use the declination offset when simulating.
      m_use_declination = !m_ctx.profiles.isSelected("Simulation");
      m_declination_defined = false;
      m_dead_reckoning = false;
      m_sum_euler_inc = false;
      m_alt_sanity = true;
      m_aligned = false;
      m_edelta_ts = 0.1;
      m_rpm = 0;

      m_gvel_val_bits = IMC::GroundVelocity::VAL_VEL_X
                        | IMC::GroundVelocity::VAL_VEL_Y
                        | IMC::GroundVelocity::VAL_VEL_Z;

      m_wvel_val_bits = IMC::WaterVelocity::VAL_VEL_X
                        | IMC::WaterVelocity::VAL_VEL_Y
                        | IMC::WaterVelocity::VAL_VEL_Z;

      // Register callbacks.
      bind<IMC::Acceleration>(this);
      bind<IMC::AngularVelocity>(this);
      bind<IMC::DataSanity>(this);
      bind<IMC::Distance>(this);
      bind<IMC::Depth>(this);
      bind<IMC::DepthOffset>(this);
      bind<IMC::EulerAngles>(this);
      bind<IMC::EulerAnglesDelta>(this);
      bind<IMC::GpsFix>(this);
      bind<IMC::GroundVelocity>(this);
      bind<IMC::LblConfig>(this);
      bind<IMC::LblRange>(this);
      bind<IMC::Rpm>(this);
      bind<IMC::WaterVelocity>(this);
    }

    BasicNavigation::~BasicNavigation(void)
    { }

    void
    BasicNavigation::onUpdateParameters(void)
    {
      // Initialize timers.
      m_time_without_gps.setTop(m_without_gps_timeout);
      m_time_without_dvl.setTop(m_without_dvl_timeout);
      m_time_without_alt.setTop(m_without_alt_timeout);
      m_time_without_main_depth.setTop(m_without_main_depth_timeout);
      m_time_without_depth.setTop(m_without_depth_timeout);
      m_time_without_euler.setTop(m_without_euler_timeout);
      m_dvl_sanity_timer.setTop(m_dvl_sanity_timeout);

      // Distance DVL to vehicle Center of Gravity is 0 in Simulation.
      if (m_ctx.profiles.isSelected("Simulation"))
      {
        m_dist_dvl_cg = 0.0;
        m_dist_lbl_gps = 0.0;
      }
    }

    void
    BasicNavigation::onResourceInitialization(void)
    {
      m_avg_heave = new Math::MovingAverage<double>(m_avg_heave_samples);
      m_avg_gps = new Math::MovingAverage<double>(m_avg_gps_samples);
      reset();
    }

    void
    BasicNavigation::onEntityResolution(void)
    {
      // Resolve entities.
      try
      {
        m_depth_eid = resolveEntity(m_elabel_depth);
      }
      catch (...)
      {
        m_depth_eid = 0;
      }

      try
      {
        m_ahrs_eid = resolveEntity(m_elabel_ahrs);
      }
      catch (...)
      {
        m_ahrs_eid = 0;
      }

      m_agvel_eid = m_ahrs_eid;
      m_accel_eid = m_ahrs_eid;

      try
      {
        m_dvl_eid = resolveEntity(m_elabel_dvl);
      }
      catch (...)
      {
        m_dvl_eid = 0;
      }

      try
      {
        if (m_ctx.profiles.isSelected("Simulation"))
          m_alt_eid = resolveEntity(m_elabel_alt_sim);
        else
          m_alt_eid = resolveEntity(m_elabel_alt_hard);
      }
      catch (...)
      {
        m_alt_eid = 0;
      }
    }

    void
    BasicNavigation::onResourceRelease(void)
    {
      Memory::clear(m_origin);
      Memory::clear(m_avg_heave);
      Memory::clear(m_avg_gps);
    }

    void
    BasicNavigation::consume(const IMC::Acceleration* msg)
    {
      if (msg->getSourceEntity() != m_accel_eid)
        return;

      m_accel_bfr[AXIS_X] += msg->x;
      m_accel_bfr[AXIS_Y] += msg->y;
      m_accel_bfr[AXIS_Z] += msg->z;
      ++m_accel_readings;
    }

    void
    BasicNavigation::consume(const IMC::AngularVelocity* msg)
    {
      if (msg->getSourceEntity() != m_agvel_eid)
        return;

      m_agvel_bfr[AXIS_X] += msg->x;
      m_agvel_bfr[AXIS_Y] += msg->y;
      m_agvel_bfr[AXIS_Z] += msg->z;
      ++m_angular_readings;
    }

    void
    BasicNavigation::consume(const IMC::Depth* msg)
    {
      if (msg->getSourceEntity() != m_depth_eid && !m_time_without_main_depth.overflow())
        return;

      if (msg->getSourceEntity() == m_depth_eid)
        m_time_without_main_depth.reset();

      m_depth_bfr += msg->value + m_depth_offset;
      ++m_depth_readings;
      m_time_without_depth.reset();
    }

    void
    BasicNavigation::consume(const IMC::DepthOffset* msg)
    {
      if (msg->getSourceEntity() != m_depth_eid)
        return;

      m_depth_offset = msg->value;
    }

    void
    BasicNavigation::consume(const IMC::DataSanity* msg)
    {
      if (msg->getSourceEntity() != m_dvl_eid)
        return;

      if (msg->sane == IMC::DataSanity::DS_NOT_SANE)
      {
        m_dvl_sanity_timer.reset();
        m_alt_sanity = false;
      }
      else
      {
        m_alt_sanity = true;
      }
    }

    void
    BasicNavigation::consume(const IMC::Distance* msg)
    {
      if (msg->getSourceEntity() != m_alt_eid)
        return;

      if (msg->validity == IMC::Distance::DV_INVALID)
        return;

      // Reset altitude timer.
      m_time_without_alt.reset();

      if (!m_alt_sanity)
        return;

      float value = msg->value;

      if (m_alt_attitude_compensation)
        value *= std::cos(getEuler(AXIS_X)) * std::cos(getEuler(AXIS_Y));

      // Initialize altitude.
      if (m_altitude < 0.0)
        m_altitude = value;
      else
        // Exponential moving average.
        m_altitude += m_alt_ema_gain * (value - m_altitude);
    }

    void
    BasicNavigation::consume(const IMC::EulerAngles* msg)
    {
      if (msg->getSourceEntity() != m_ahrs_eid)
        return;

      m_euler_bfr[AXIS_X] += msg->phi;
      m_euler_bfr[AXIS_Y] += msg->theta;

      // Heading buffer maintains sign.
      m_euler_bfr[AXIS_Z] += getEuler(AXIS_Z) + Math::Angles::minSignedAngle(getEuler(AXIS_Z), msg->psi);
      ++m_euler_readings;

      if (m_declination_defined && m_use_declination)
        m_euler_bfr[AXIS_Z] += m_declination;

      m_time_without_euler.reset();
    }

    void
    BasicNavigation::consume(const IMC::EulerAnglesDelta* msg)
    {
      if (msg->getSourceEntity() != m_imu_eid)
        return;

      m_edelta_bfr[AXIS_X] += msg->x;
      m_edelta_bfr[AXIS_Y] += msg->y;
      m_edelta_bfr[AXIS_Z] += msg->z;

      ++m_edelta_readings;
      m_edelta_ts = msg->timestep;
    }

    void
    BasicNavigation::consume(const IMC::GpsFix* msg)
    {
      if (msg->type == IMC::GpsFix::GFT_MANUAL_INPUT)
        return;

      // GpsFix validation.
      m_gps_rej.utc_time = msg->utc_time;
      m_gps_rej.setTimeStamp(msg->getTimeStamp());

      // Check fix validity.
      if ((msg->validity & IMC::GpsFix::GFV_VALID_POS) == 0)
      {
        m_gps_rej.reason = IMC::GpsFixRejection::RR_INVALID;
        dispatch(m_gps_rej, DF_KEEP_TIME);
        return;
      }

      double max_hacc = m_avg_gps->mean();

      m_avg_gps->update(msg->hacc);

      if (m_avg_gps->sampleSize() > 2 && msg->hacc > m_gps_hacc_factor * max_hacc)
      {
        m_gps_rej.reason = IMC::GpsFixRejection::RR_ABOVE_THRESHOLD;
        dispatch(m_gps_rej, DF_KEEP_TIME);
        return;
      }

      // Check if we have valid Horizontal Accuracy index.
      if (msg->validity & IMC::GpsFix::GFV_VALID_HACC)
      {
        // Update GPS measurement noise parameters.
        updateKalmanGpsParameters(msg->hacc);

        // Check if it is above Maximum Horizontal Accuracy.
        if (msg->hacc > m_max_hacc)
        {
          m_gps_rej.reason = IMC::GpsFixRejection::RR_ABOVE_MAX_HACC;
          dispatch(m_gps_rej, DF_KEEP_TIME);
          return;
        }
      }
      else
      {
        // Horizontal Dilution of Precision.
        if (msg->hdop > m_max_hdop)
        {
          m_gps_rej.reason = IMC::GpsFixRejection::RR_ABOVE_MAX_HDOP;
          dispatch(m_gps_rej, DF_KEEP_TIME);
          return;
        }
      }

      // Speed over ground.
      if (msg->validity & IMC::GpsFix::GFV_VALID_SOG)
        m_gps_sog = msg->sog;

      // Check current declination value.
      checkDeclination(msg->lat, msg->lon, msg->height);

      m_last_lat = msg->lat;
      m_last_lon = msg->lon;
      m_last_hae = msg->height;

      // Start navigation if filter not active.
      if (!m_active)
      {
        // Navigation self-initialisation.
        startNavigation(msg);
        return;
      }

      // Not sure about altitude.
      double x = 0.0;
      double y = 0.0;
      Coordinates::WGS84::displacement(m_origin->lat, m_origin->lon, m_origin->height,
                                       msg->lat, msg->lon, msg->height,
                                       &x, &y, &m_last_z);

      // Stream Estimator.
      IMC::EstimatedStreamVelocity stream;
      if (m_stream_filter.consume(msg, stream))
        dispatch(stream);

      // Correct for roll angle.
      y += std::sin(getEuler(AXIS_X)) * m_dist_gps_cg;

      // Check distance to current LLH origin.
      if (Math::norm(x, y) > m_max_dis2ref)
      {
        // Redefine origin.
        Memory::replace(m_origin, new IMC::GpsFix(*msg));

        // Recalculate LBL positions.
        m_ranging.updateOrigin(msg);

        // Save message to cache.
        IMC::CacheControl cop;
        cop.op = IMC::CacheControl::COP_STORE;
        cop.message.set(*msg);
        dispatch(cop);

        // Save reference in EstimatedState message.
        m_estate.lat = msg->lat;
        m_estate.lon = msg->lon;
        m_estate.height = msg->height;

        // Set position estimate at the origin.
        m_kal.setState(STATE_X, 0);
        m_kal.setState(STATE_Y, 0);

        spew("defined new navigation reference");
        return;
      }

      // Call GPS EKF functions to assign output values.
      runKalmanGPS(x, y);
    }

    void
    BasicNavigation::consume(const IMC::GroundVelocity* msg)
    {
      m_gvel = *msg;
      // Correct for the distance between center of gravity and dvl.
      m_gvel.y = msg->y - m_dist_dvl_cg * getAngularVelocity(AXIS_Z);

      if (msg->validity != m_gvel_val_bits)
        return;

      m_dvl_rej.setTimeStamp(msg->getTimeStamp());
      m_dvl_rej.type = IMC::DvlRejection::TYPE_GV;

      double tstep = m_dvl_gv_tstep.getDelta();

      // Check if we have a valid time delta.
      if ((tstep > 0) && (tstep < m_dvl_time_rel_thresh))
      {
        // Innovation threshold checking in the x-axis.
        if (std::abs(m_gvel.x - m_gvel_previous.x) > m_dvl_rel_thresh[0])
        {
          m_dvl_rej.reason = IMC::DvlRejection::RR_INNOV_THRESHOLD_X;
          m_dvl_rej.value = std::abs(m_gvel.x - m_gvel_previous.x);
          m_dvl_rej.timestep = tstep;
          dispatch(m_dvl_rej, DF_KEEP_TIME);
          return;
        }

        // Innovation threshold checking in the y-axis.
        if (std::abs(m_gvel.y - m_gvel_previous.y) > m_dvl_rel_thresh[1])
        {
          m_dvl_rej.reason = IMC::DvlRejection::RR_INNOV_THRESHOLD_Y;
          m_dvl_rej.value = std::abs(m_gvel.y - m_gvel_previous.y);
          m_dvl_rej.timestep = tstep;
          dispatch(m_dvl_rej, DF_KEEP_TIME);
          return;
        }
      }

      // Absolute filter.
      if (std::abs(m_gvel.x) > m_dvl_abs_thresh[0])
      {
        m_dvl_rej.reason = IMC::DvlRejection::RR_ABS_THRESHOLD_X;
        m_dvl_rej.value = std::abs(m_gvel.x);
        m_dvl_rej.timestep = 0.0;
        dispatch(m_dvl_rej, DF_KEEP_TIME);
        return;
      }

      if (std::abs(m_gvel.y) > m_dvl_abs_thresh[1])
      {
        m_dvl_rej.reason = IMC::DvlRejection::RR_ABS_THRESHOLD_Y;
        m_dvl_rej.value = std::abs(m_gvel.y);
        m_dvl_rej.timestep = 0.0;
        dispatch(m_dvl_rej, DF_KEEP_TIME);
        return;
      }

      m_time_without_dvl.reset();
      m_valid_gv = true;

      // Store accepted msg.
      m_gvel_previous = *msg;
      m_gvel_previous.y = m_gvel.y;
    }

    void
    BasicNavigation::consume(const IMC::LblConfig* msg)
    {
      if (msg->op != IMC::LblConfig::OP_SET_CFG)
          return;

      // Save message to cache.
      IMC::CacheControl cop;
      cop.op = IMC::CacheControl::COP_STORE;
      cop.message.set(*msg);
      dispatch(cop);

      m_ranging.setup(msg);

      onConsumeLblConfig();
    }

    void
    BasicNavigation::consume(const IMC::LblRange* msg)
    {
      if (!m_active)
        return;

      // LBL range validation.
      m_lbl_ac.id = msg->id;
      m_lbl_ac.range = msg->range;
      m_lbl_ac.setTimeStamp(msg->getTimeStamp());

      // Get beacon position.
      uint8_t beacon = msg->id;
      float range = msg->range;

      if (!m_ranging.exists(beacon) || (beacon > m_ranging.getSize() - 1) || (rejectLbl()))
      {
        m_lbl_ac.acceptance = IMC::LblRangeAcceptance::RR_NO_INFO;
        dispatch(m_lbl_ac, DF_KEEP_TIME);
        return;
      }

      // Reject LBL ranges when GPS is available.
      if (!m_time_without_gps.overflow())
      {
        m_lbl_ac.acceptance = IMC::LblRangeAcceptance::RR_AT_SURFACE;
        dispatch(m_lbl_ac, DF_KEEP_TIME);
        return;
      }

      double x = 0.0;
      double y = 0.0;
      double z = 0.0;

      m_ranging.getLocation(beacon, &x, &y, &z);

      // Compute expected range.
      double dx = m_kal.getState(STATE_X) + m_dist_lbl_gps * std::cos(getEuler(AXIS_Z)) - x;
      double dy = m_kal.getState(STATE_Y) + m_dist_lbl_gps * std::sin(getEuler(AXIS_Z)) - y;
      double dz = getDepth() - z;
      double exp_range = std::sqrt(dx * dx + dy * dy + dz * dz);

      runKalmanLBL((int)beacon, range, dx, dy, exp_range);
    }

    void
    BasicNavigation::consume(const IMC::Rpm* msg)
    {
      m_rpm = msg->value;
      m_stream_filter.consume(msg);
    }

    void
    BasicNavigation::consume(const IMC::WaterVelocity* msg)
    {
      m_wvel = *msg;
      // Correct for the distance between center of gravity and dvl.
      m_wvel.y = msg->y - m_dist_dvl_cg * getAngularVelocity(AXIS_Z);

      if (msg->validity != m_wvel_val_bits)
        return;

      m_dvl_rej.setTimeStamp(msg->getTimeStamp());
      m_dvl_rej.type = IMC::DvlRejection::TYPE_WV;

      double tstep = m_dvl_wv_tstep.getDelta();

      // Check if we have a valid time delta.
      if ((tstep > 0) && (tstep < m_dvl_time_rel_thresh))
      {
        // Innovation threshold checking in the x-axis.
        if (std::abs(m_wvel.x - m_wvel_previous.x) > m_dvl_rel_thresh[0])
        {
          m_dvl_rej.reason = IMC::DvlRejection::RR_INNOV_THRESHOLD_X;
          m_dvl_rej.value = std::abs(m_wvel.x - m_wvel_previous.x);
          m_dvl_rej.timestep = tstep;
          dispatch(m_dvl_rej, DF_KEEP_TIME);
          return;
        }

        // Innovation threshold checking in the y-axis.
        if (std::abs(m_wvel.y - m_wvel_previous.y) > m_dvl_rel_thresh[1])
        {
          m_dvl_rej.reason = IMC::DvlRejection::RR_INNOV_THRESHOLD_Y;
          m_dvl_rej.value = std::abs(m_wvel.y - m_wvel_previous.y);
          m_dvl_rej.timestep = tstep;
          dispatch(m_dvl_rej, DF_KEEP_TIME);
          return;
        }
      }

      // Absolute filter.
      if (std::abs(m_wvel.x) > m_dvl_abs_thresh[0])
      {
        m_dvl_rej.reason = IMC::DvlRejection::RR_ABS_THRESHOLD_X;
        m_dvl_rej.value = std::abs(m_wvel.x);
        m_dvl_rej.timestep = 0.0;
        dispatch(m_dvl_rej, DF_KEEP_TIME);
        return;
      }

      if (std::abs(m_wvel.y) > m_dvl_abs_thresh[1])
      {
        m_dvl_rej.reason = IMC::DvlRejection::RR_ABS_THRESHOLD_Y;
        m_dvl_rej.value = std::abs(m_wvel.y);
        m_dvl_rej.timestep = 0.0;
        dispatch(m_dvl_rej, DF_KEEP_TIME);
        return;
      }

      m_time_without_dvl.reset();
      m_valid_wv = true;

      // Store accepted msg.
      m_wvel_previous = *msg;
      m_wvel_previous.y = m_wvel.y;
    }

    void
    BasicNavigation::startNavigation(const IMC::GpsFix* msg)
    {
      Memory::replace(m_origin, new IMC::GpsFix(*msg));

      // Save message to cache.
      IMC::CacheControl cop;
      cop.op = IMC::CacheControl::COP_STORE;
      cop.message.set(*msg);
      dispatch(cop);

      m_active = setup();

      m_navstate = SM_STATE_BOOT;
      setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_CONVERGE);
    }

    void
    BasicNavigation::reset(void)
    {
      m_last_lat = 0.0;
      m_last_lon = 0.0;
      m_last_hae = 0.0;
      m_last_z = 0.0;

      m_gps_sog = 0.0;
      m_heading = 0.0;
      m_altitude = -1;

      m_navstate = SM_STATE_IDLE;
      setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);

      m_valid_gv = false;
      m_valid_wv = false;

      resetBuffers();
    }

    bool
    BasicNavigation::setup(void)
    {
      reset();

      if (m_origin == NULL)
        return false;

      m_estate.lat = m_origin->lat;
      m_estate.lon = m_origin->lon;
      m_estate.height = m_origin->height;

      // Set position of the vehicle at the origin and reset filter state.
      m_kal.resetState();

      // Possibly correct LBL locations.
      m_ranging.updateOrigin(m_origin);

      spew("setup completed");
      return true;
    }

    void
    BasicNavigation::onConsumeLblConfig(void)
    {
      // do nothing.
    }

    void
    BasicNavigation::updateKalmanGpsParameters(double hacc)
    {
      // do nothing.
      (void)hacc;
    }

    void
    BasicNavigation::runKalmanGPS(double x, double y)
    {
      // do nothing.
      (void)x;
      (void)y;
    }

    void
    BasicNavigation::runKalmanLBL(int beacon, float range, double dx, double dy, double exp_range)
    {
      // "Outlier Rejection for Autonomous Acoustic Navigation"
      // Jerome Vaganay, John J. Leonard and James G. Bellingham. MIT
      Math::Matrix H(1, 2, 0.0);
      H(0, 0) = dx / exp_range;
      H(0, 1) = dy / exp_range;
      Math::Matrix P(2, 2, 0.0);
      P = m_kal.getCovariance(STATE_X, STATE_Y, STATE_X, STATE_Y);

      double k = getLblRejectionValue(exp_range);
      double R = std::max(k, (H * P * transpose (H))(0));

      double d = range - exp_range;
      m_navdata.lbl_rej_level = (d * (1 / ((H * P * transpose (H))(0) + R)) * d);

      // Is rejection level above maximum threshold?
      if (m_navdata.lbl_rej_level >= m_lbl_threshold)
      {
        m_lbl_ac.acceptance = IMC::LblRangeAcceptance::RR_ABOVE_THRESHOLD;
        dispatch(m_lbl_ac, DF_KEEP_TIME);
        return;
      }
      else
      {
        unsigned states = getNumberOutputs() + beacon;

        // Define measurements matrix.
        m_kal.setObservation(states, STATE_X, dx / exp_range);
        m_kal.setObservation(states, STATE_Y, dy / exp_range);

        // Define Output matrix.
        m_kal.setOutput(states, range);
        m_kal.setInnovation(states, range - exp_range);
        m_lbl_ac.acceptance = IMC::LblRangeAcceptance::RR_ACCEPTED;
        dispatch(m_lbl_ac, DF_KEEP_TIME);
      }
    }

    void
    BasicNavigation::runKalmanDVL(void)
    {
      // Use Ground Velocity messages if they are valid.
      // Water Velocity messages otherwise.
      unsigned u;
      unsigned v;

      getSpeedOutputStates(&u, &v);

      if (m_valid_gv)
      {
        m_kal.setOutput(u, m_gvel.x);
        m_kal.setOutput(v, m_gvel.y);
      }
      else if (m_valid_wv)
      {
        m_kal.setOutput(u, m_wvel.x);
        m_kal.setOutput(v, m_wvel.y);
      }
    }

    void
    BasicNavigation::onDispatchNavigation(void)
    {
      m_estate.x = m_kal.getState(STATE_X);
      m_estate.y = m_kal.getState(STATE_Y);
      m_estate.z = m_last_z + getDepth();
      m_estate.phi = Math::Angles::normalizeRadian(getEuler(AXIS_X));
      m_estate.theta = Math::Angles::normalizeRadian(getEuler(AXIS_Y));
      m_estate.p = getAngularVelocity(AXIS_X);
      m_estate.q = getAngularVelocity(AXIS_Y);
      m_estate.alt = getAltitude();
      m_estate.depth = getDepth();
      m_estate.w = m_avg_heave->update(m_deriv_heave.update(m_estate.depth));

      // Velocity in the navigation frame.
      Coordinates::BodyFixedFrame::toInertialFrame(m_estate.phi, m_estate.theta, m_estate.psi,
                                                   m_estate.u, m_estate.v, m_estate.w,
                                                   &m_estate.vx, &m_estate.vy, &m_estate.vz);

      m_uncertainty.x = m_kal.getCovariance(STATE_X, STATE_X);
      m_uncertainty.y = m_kal.getCovariance(STATE_Y, STATE_Y);
      m_navdata.cyaw = m_heading;
    }

    bool
    BasicNavigation::isActive(void)
    {
      if (m_active)
        return true;

      if (gotEulerReadings())
      {
        IMC::EstimatedState estate;
        estate.lat = m_last_lat;
        estate.lon = m_last_lon;
        estate.height = m_last_hae;
        estate.phi = Math::Angles::normalizeRadian(getEuler(AXIS_X));
        estate.theta = Math::Angles::normalizeRadian(getEuler(AXIS_Y));
        estate.psi = Math::Angles::normalizeRadian(getEuler(AXIS_Z));
        estate.depth = getDepth();
        estate.alt = getAltitude();
        m_heading = estate.psi;
        updateEuler(c_wma_filter);
        updateDepth(c_wma_filter);

        if (gotAngularReadings())
        {
          m_estate.p = getAngularVelocity(AXIS_X);
          m_estate.q = getAngularVelocity(AXIS_Y);
          m_estate.r = getAngularVelocity(AXIS_Z);
          updateAngularVelocities(c_wma_filter);
        }

        dispatch(estate);
      }

      return false;
    }

    void
    BasicNavigation::reportToBus(void)
    {
      double tstamp = Time::Clock::getSinceEpoch();
      m_estate.setTimeStamp(tstamp);
      m_uncertainty.setTimeStamp(tstamp);
      m_navdata.setTimeStamp(tstamp);

      dispatch(m_estate, DF_KEEP_TIME);
      dispatch(m_uncertainty, DF_KEEP_TIME);
      dispatch(m_navdata, DF_KEEP_TIME);
    }

    void
    BasicNavigation::updateBuffers(float filter)
    {
      // Reinitialize buffers.
      updateAcceleration(filter);
      updateAngularVelocities(filter);
      updateDepth(filter);
      updateEuler(filter);
      updateEulerDelta(filter);
    }

    void
    BasicNavigation::resetAcceleration(void)
    {
      m_accel_bfr[AXIS_X] = 0.0;
      m_accel_bfr[AXIS_Y] = 0.0;
      m_accel_bfr[AXIS_Z] = 0.0;
      m_accel_readings = 0.0;
    }

    void
    BasicNavigation::resetAngularVelocity(void)
    {
      m_agvel_bfr[AXIS_X] = 0.0;
      m_agvel_bfr[AXIS_Y] = 0.0;
      m_agvel_bfr[AXIS_Z] = 0.0;
      m_angular_readings = 0.0;
    }

    void
    BasicNavigation::resetDepth(void)
    {
      m_depth_bfr = 0.0;
      m_depth_readings = 0.0;
      m_depth_offset = 0.0;
    }

    void
    BasicNavigation::resetEulerAngles(void)
    {
      m_euler_bfr[AXIS_X] = 0.0;
      m_euler_bfr[AXIS_Y] = 0.0;
      m_euler_bfr[AXIS_Z] = 0.0;
      m_euler_readings = 0.0;
    }

    void
    BasicNavigation::resetEulerAnglesDelta(void)
    {
      m_edelta_bfr[AXIS_X] = 0.0;
      m_edelta_bfr[AXIS_Y] = 0.0;
      m_edelta_bfr[AXIS_Z] = 0.0;
      m_edelta_readings = 0.0;
    }

    void
    BasicNavigation::resetBuffers(void)
    {
      resetAcceleration();
      resetAngularVelocity();
      resetDepth();
      resetEulerAngles();
      resetEulerAnglesDelta();
    }

    void
    BasicNavigation::checkUncertainty(bool abort)
    {
      // Compute maximum horizontal position variance value.
      float hpos_var = std::max(m_kal.getCovariance(STATE_X, STATE_X), m_kal.getCovariance(STATE_Y, STATE_Y));

      // Check if it exceeds the specified threshold value.
      if (hpos_var > m_max_hpos_var)
      {
        switch (m_navstate)
        {
          case SM_STATE_BOOT:
            // do nothing
            break;
          case SM_STATE_NORMAL:
            if (abort)
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, getUncertaintyMessage(hpos_var));
              m_navstate = SM_STATE_UNSAFE; // Change state
            }
            break;
          case SM_STATE_UNSAFE:
            // do nothing;
            break;
          default:
            spew("caught unexpected navigation state transition");
            break;
        }
      }
      else
      {
        switch (m_navstate)
        {
          case SM_STATE_BOOT:
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            break;
          case SM_STATE_NORMAL:
            if (m_time_without_depth.overflow())
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR("no measurements available: %s"), DTR("Depth")));
              return;
            }

            if (m_time_without_euler.overflow())
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR("no measurements available: %s"), DTR("Euler Angles")));
              return;
            }

            if (m_dead_reckoning)
            {
              if (m_aligned)
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ALIGNED);
              else
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_NOT_ALIGNED);
            }
            else
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }
            break;
          case SM_STATE_UNSAFE:
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            break;
          default:
            spew("caught unexpected navigation state transition");
            break;
        }
        m_navstate = SM_STATE_NORMAL;
      }
    }

    void
    BasicNavigation::checkDeclination(double lat, double lon, double height)
    {
      if (!m_declination_defined && m_use_declination)
      {
        // Compute declination value
        // -- note: this is done only once, thus the short-lived wmm object
        Coordinates::WMM wmm(m_ctx.dir_cfg);
        m_declination = wmm.declination(lat, lon, height);
        m_declination_defined = true;
      }
    }

    void
    BasicNavigation::extractEarthRotation(double& p, double& q, double& r)
    {
      // Insert euler angles into row matrix.
      Math::Matrix ea(3,1);
      ea(0) = Math::Angles::normalizeRadian(getEuler(AXIS_X));
      ea(1) = Math::Angles::normalizeRadian(getEuler(AXIS_Y));
      ea(2) = Math::Angles::normalizeRadian(getEuler(AXIS_Z));

      // Earth rotation vector.
      Math::Matrix we(3,1);
      we(0) = Math::c_earth_rotation * std::cos(m_last_lat);
      we(1) = 0.0;
      we(2) = - Math::c_earth_rotation * std::sin(m_last_lat);

      // Sensed angular velocities due to Earth rotation effect.
      Math::Matrix av(3,1);
      av = inverse(ea.toDCM()) * we;

      // Extract from angular velocities measurements.
      p -= av(0);
      q -= av(1);
      r -= av(2);
    }
  }
}
