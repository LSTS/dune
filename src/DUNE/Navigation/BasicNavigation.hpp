//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_NAVIGATION_BASIC_NAVIGATION_HPP_INCLUDED_
#define DUNE_NAVIGATION_BASIC_NAVIGATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Coordinates/BodyFixedFrame.hpp>
#include <DUNE/Coordinates/WGS84.hpp>
#include <DUNE/Coordinates/WMM.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Math/Derivative.hpp>
#include <DUNE/Math/MovingAverage.hpp>
#include <DUNE/Navigation/KalmanFilter.hpp>
#include <DUNE/Time/Clock.hpp>
#include <DUNE/Time/Counter.hpp>
#include <DUNE/Time/Delta.hpp>
#include <DUNE/Tasks/Periodic.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Navigation
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM BasicNavigation;

    //! Maximum number of beacons.
    static const unsigned c_max_beacons = 4;
    //! Weighted Moving Average filter value.
    static const float c_wma_filter = 0.1;
    //! Maximum artificial angular velocity value.
    static const float c_max_av = 0.5;

    //! Navigation task states.
    enum SMStates
    {
      //! Idle state.
      SM_STATE_IDLE,
      //! Booting state.
      SM_STATE_BOOT,
      //! Normal state.
      SM_STATE_NORMAL,
      //! Unsafe state.
      SM_STATE_UNSAFE
    };

    //! Navigation base filter states.
    enum StateIndexes
    {
      //! Vehicle north displacement (m).
      STATE_X = 0,
      //! Vehicle east displacement (m).
      STATE_Y = 1
    };

    //! Device axes.
    enum Axes
    {
      //! X-axis.
      AXIS_X = 0,
      //! Y-axis.
      AXIS_Y = 1,
      //! Z-axis.
      AXIS_Z = 2
    };

    //! Beacon configuration information.
    struct LblBeaconXYZ
    {
      //! WGS-84 latitude.
      double lat;
      //! WGS-84 longitude.
      double lon;
      //! Beacon north displacement relative to reference (m).
      double x;
      //! Beacon east displacement relative to reference (m).
      double y;
      //! Beacon depth (m).
      double depth;
    };

    //! Abstract base class for navigation tasks.
    //!
    //! This task is responsible to gather data from sensors and compute an estimate of
    //! the position of the system.
    //!
    //! The navigation filter uses sensor data from GPS, LBL, DVL, AHRS, IMU and
    //! Pressure sensor.
    //! The state of the system is computed by means of an extended Kalman Filter
    //! algorithm.
    //! The estimated state is stored in the EstimatedState IMC message. The filter
    //! estimates, when possible, the outside stream velocity and stores it in a
    //! EstimatedStreamVelocity IMC message. Some of the state covariance parameters
    //! are stored inside NavigationUncertainty IMC message.
    //!
    //! Some pre-filtering is done by rejecting GPS fixes and LBL ranges as well as
    //! applying a moving average filter to the altitude DVL measurements.
    class BasicNavigation: public Tasks::Periodic
    {
    public:
      //! Constructor.
      //! @param[in] name name.
      //! @param[in] ctx context.
      BasicNavigation(const std::string& name, Tasks::Context& ctx);

      //! Destructor.
      virtual
      ~BasicNavigation(void);

      //! Update internal parameters.
      virtual void
      onUpdateParameters(void);

      //! Resolve entities.
      virtual void
      onEntityResolution(void);

      //! Initialize resources.
      virtual void
      onResourceInitialization(void);

      //! Release allocated resources.
      virtual void
      onResourceRelease(void);

      void
      consume(const IMC::Acceleration* msg);

      void
      consume(const IMC::AngularVelocity* msg);

      void
      consume(const IMC::Distance* msg);

      void
      consume(const IMC::Depth* msg);

      void
      consume(const IMC::DepthOffset* msg);

      void
      consume(const IMC::DesiredZ* msg);

      void
      consume(const IMC::EulerAngles* msg);

      void
      consume(const IMC::GpsFix* msg);

      void
      consume(const IMC::GroundVelocity* msg);

      void
      consume(const IMC::LblConfig* msg);

      void
      consume(const IMC::LblRange* msg);

      void
      consume(const IMC::Rpm* msg);

      void
      consume(const IMC::WaterVelocity* msg);

    protected:
      //! Get depth value.
      //! @return depth value.
      inline double
      getDepth(void) const
      {
        if (m_depth_readings)
          return (m_depth_bfr / m_depth_readings);
        else
          return 0;
      }

      //! Get vehicle altitude.
      //! Negative value denotes invalid estimate.
      //! @return altitude value.
      inline double
      getAltitude(void)
      {
        if (m_time_without_bdist.overflow())
          m_altitude = -1;
        return m_altitude;
      }

      //! Get the acceleration along a specific axis.
      //! @return acceleration value.
      inline double
      getAcceleration(Axes axis) const
      {
        if (!m_accel_readings)
          return 0;

        switch (axis)
        {
          case AXIS_X:
            return (m_accel_x_bfr / m_accel_readings);
          case AXIS_Y:
            return (m_accel_y_bfr / m_accel_readings);
          case AXIS_Z:
            return (m_accel_z_bfr / m_accel_readings);
        }

        return 0;
      }

      //! Get angular velocity value along a specific axis.
      //! @return angular velocity value.
      inline double
      getAngularVelocity(Axes axis) const
      {
        if (!m_angular_readings)
          return 0;

        switch (axis)
        {
          case AXIS_X:
            return (m_p_bfr / m_angular_readings);
          case AXIS_Y:
            return (m_q_bfr / m_angular_readings);
          case AXIS_Z:
            return (m_r_bfr / m_angular_readings);
        }

        return 0;
      }

      //! Get angular velocity value along a specific axis.
      //! @return angular velocity value.
      inline double
      produceAngularVelocity(Axes axis)
      {
        if (!gotAngularReadings())
        {
          if (!gotEulerReadings())
            return 0;

          double pitch = getPitch();
          double cp = std::cos(pitch);

          // Avoid singularity
          if ((1e-2 - std::abs(cp)) > 0.0)
            return 0;

          double roll = getRoll();
          double sr = std::sin(roll);
          double cr = std::cos(roll);
          double tp = std::tan(pitch);

          double j2_elements[9] = {1, sr * tp, cr * tp,
                                   0, cr, -sr,
                                   0, sr / cp, cr / cp};

          Math::Matrix j2 = Math::Matrix(j2_elements, 3, 3);

          double euler[3] = {m_drv_roll.check(),
                             m_drv_pitch.check(),
                             m_drv_yaw.check()};

          Math::Matrix ea = Math::Matrix(euler, 3, 1);

          Math::Matrix av = Math::Matrix(3, 1);
          av = inverse(j2) * ea;

          return Math::trimValue(av(axis), - c_max_av, c_max_av);
        }

        return 0;
      }


      //! Get heading rate value.
      //! @return heading rate.
      inline double
      getHeadingRate(void)
      {
        double pitch = getPitch();

        // Avoid division by zero.
        if (!std::cos(pitch))
          return 0;

        double roll = getRoll();
        double p = getAngularVelocity(AXIS_X);
        double q = getAngularVelocity(AXIS_Y);
        double r = getAngularVelocity(AXIS_Z);
        extractEarthRotation(p, q, r);

        return (std::sin(roll) * q + std::cos(roll) * r) / std::cos(pitch);
      }

      //! Get roll value.
      //! @return roll.
      inline double
      getRoll(void) const
      {
        if (m_euler_readings)
          return Math::Angles::normalizeRadian(m_roll_bfr / m_euler_readings);
        else
          return 0;
      }

      //! Get pitch value.
      //! @return pitch.
      inline double
      getPitch(void) const
      {
        if (m_euler_readings)
          return Math::Angles::normalizeRadian(m_pitch_bfr / m_euler_readings);
        else
          return 0;
      }

      //! Get yaw value.
      //! @return yaw.
      inline double
      getYaw(void) const
      {
        if (m_euler_readings)
          // other navigation tasks are responsible to normalize yaw.
          return m_heading_bfr / m_euler_readings;
        else
          return 0;
      }

      //! Number of depth readings since last cycle plus constant filter gain.
      //! @return true is received, false otherwise.
      inline bool
      gotDepthReadings(void) const
      {
        return m_depth_readings > c_wma_filter;
      }

      //! Number of euler angles readings since last cycle plus constant filter gain.
      //! @return true is received, false otherwise.
      inline bool
      gotEulerReadings(void) const
      {
        return m_euler_readings > c_wma_filter;
      }

      //! Number of angular velocity readings since last cycle plus constant filter gain.
      //! @return true is received, false otherwise.
      inline bool
      gotAngularReadings(void) const
      {
        return m_angular_readings > c_wma_filter;
      }

      //! Number of acceleration readings since last cycle plus constant filter gain.
      //! @return true is received, false otherwise.
      inline bool
      gotAccelerationReadings(void) const
      {
        return m_accel_readings > c_wma_filter;
      }

      //! Get AHRS Entity Id.
      //! @return AHRS entity id.
      inline unsigned
      getAhrsId(void) const
      {
        return m_ahrs_eid;
      }

      //! Routine to compute LBL rejection value.
      //! @param[in] exp_range expected LBL range value.
      //! @return LBL rejection value.
      inline double
      getLblRejectionValue(double exp_range) const
      {
        return m_lbl_reject_constants[0] + m_lbl_reject_constants[1] * exp_range * exp_range;
      }

      //! This function checks if navigation must reject all lbl.
      //! @return true if LBL is to be rejected, false otherwise.
      inline bool
      rejectLbl(void) const
      {
        return m_reject_all_lbl;
      }

      //! Routine to get navigation time step.
      //! @return time step.
      inline double
      getTimeStep(void)
      {
        return m_delta.getDelta();
      }

      //! Routine to clear euler angles buffer.
      //! @param[in] filter filter value.
      inline void
      updateEuler(float filter)
      {
        m_roll_bfr = getRoll() * filter;
        m_pitch_bfr = getPitch() * filter;
        m_heading_bfr = getYaw() * filter;
        m_euler_readings = filter;
      }

      //! Routine to clear angular velocities buffer.
      //! @param[in] filter filter value.
      inline void
      updateAngularVelocities(float filter)
      {
        m_p_bfr = getAngularVelocity(AXIS_X) * filter;
        m_q_bfr = getAngularVelocity(AXIS_Y) * filter;
        m_r_bfr = getAngularVelocity(AXIS_Z) * filter;
        m_angular_readings = filter;
      }

      //! Routine to clear accelerations buffer.
      //! @param[in] filter filter value.
      inline void
      updateAcceleration(float filter)
      {
        m_accel_x_bfr = getAcceleration(AXIS_X) * filter;
        m_accel_y_bfr = getAcceleration(AXIS_Y) * filter;
        m_accel_z_bfr = getAcceleration(AXIS_Z) * filter;
        m_accel_readings = filter;
      }

      //! Routine to clear depth buffer.
      //! @param[in] filter filter value.
      inline void
      updateDepth(float filter)
      {
        m_depth_bfr = getDepth() * filter;
        m_depth_readings = filter;
      }

      //! Routine to reset navigation.
      virtual void
      reset(void);

      //! Routine to setup navigation.
      virtual bool
      setup(void);

      //! Method invoked when LblConfig message is received.
      virtual void
      onConsumeLblConfig(void);

      //! Routine to update navigation filter parameters when a GpsFix message is received.
      //! @param[in] hacc GPS Sensor horizontal accuracy index.
      virtual void
      updateKalmanGpsParameters(double hacc);

      //! Routine to assign EKF filter output variables when a GpsFix message is received.
      //! @param[in] x vehicle north displacement (m).
      //! @param[in] y vehicle east displacement (m).
      virtual void
      runKalmanGPS(double x, double y);

      //! Routine to assign EKF filter output variables when a GpsFix message is received.
      //! @param[in] beacon beacon id.
      //! @param[in] range range to beacon.
      //! @param[in] dx distance along x-axis.
      //! @param[in] dy distance along y-axis.
      //! @param[in] exp_range expected range.
      virtual void
      runKalmanLBL(int beacon, float range, double dx, double dy, double exp_range);

      //! Routine to assign EKF filter output variables when a DVL velocity message is received.
      virtual void
      runKalmanDVL(void);

      //! Routine called when an alignment result is received.
      //! @param[in] psi heading angle.
      virtual void
      correctAlignment(double psi);

      //! Routine called to assign common dispatch messages.
      void
      onDispatchNavigation(void);

      //! Routine to check if navigation task is active.
      //! @return true if active, false otherwise.
      bool
      isActive(void);

      //! Routine to report navigation messages to the bus.
      void
      reportToBus(void);

      //! Routine to update sensor buffers.
      //! @param[in] filter sensor filters gain.
      void
      updateBuffers(float filter);

      //! Routine to reset acceleration buffers.
      void
      resetAcceleration(void);

      //! Routine to reset angular velocity buffers.
      void
      resetAngularVelocity(void);

      //! Routine to reset depth buffers.
      void
      resetDepth(void);

      //! Routine to reset euler angles buffers.
      void
      resetEulerAngles(void);

      //! Routine to check navigation uncertainty.
      void
      checkUncertainty(void);

      //! Routine to check current declination value using WMM.
      //! @param[in] lat vehicle current latitude.
      //! @param[in] lon vehicle current longitude.
      //! @param[in] height vehicle current height.
      void
      checkDeclination(double lat, double lon, double height);

      //! Kalman Filter matrices.
      Navigation::KalmanFilter m_kal;
      //! Propeller speed (RPM)
      int16_t m_rpm;
      //! Kalman Filter process noise covariance matrix parameters.
      std::vector<double> m_process_noise;
      //! Kalman Filter measurement noise covariance matrix parameters.
      std::vector<double> m_measure_noise;
      //! Kalman Filter state covariance matrix parameters.
      std::vector<double> m_state_cov;
      //! Estimated state message.
      IMC::EstimatedState m_estate;
      //! Estimated water velocity message.
      IMC::EstimatedStreamVelocity m_ewvel;
      //! LblConfig buffer.
      IMC::LblConfig m_lbl_cfg;
      //! LBL range acceptance.
      IMC::LblRangeAcceptance m_lbl_ac;
      //! GPS fix rejection.
      IMC::GpsFixRejection m_gps_rej;
      //! DVL measurement rejection.
      IMC::DvlRejection m_dvl_rej;
      //! Navigation Uncertainty log.
      IMC::NavigationUncertainty m_uncertainty;
      //! Navigation Data log.
      IMC::NavigationData m_navdata;
      //! Current velocity relative to ground message.
      IMC::GroundVelocity m_gvel;
      //! Current velocity relative to the water message.
      IMC::WaterVelocity m_wvel;
      //! Number of beacons.
      unsigned m_num_beacons;
      //! Time without GPS sensor readings deadline.
      Time::Counter<double> m_time_without_gps;
      //! Time without DVL sensor readings deadline.
      Time::Counter<double> m_time_without_dvl;
      //! Time without bottom Distance readings deadline.
      Time::Counter<double> m_time_without_bdist;
      //! Valid GPS speed over ground.
      double m_gps_sog;
      //! Vertical displacement in the NED frame to the origin height above ellipsoid
      double m_last_z;
      //! Integrate yaw rate to get heading.
      bool m_integ_yrate;
      //! Angular velocity message entity id.
      unsigned m_agvel_eid;
      //! IMU entity id.
      unsigned m_imu_eid;
      //! Orientation calibration entity id.
      unsigned m_calibration_eid;
      //! LBL threshold.
      float m_lbl_threshold;
      //! Heading value (rad).
      double m_heading;
      //! Received valid ground velocity message.
      bool m_valid_gv;
      //! Received valid water velocity message.
      bool m_valid_wv;
      //! Received coarse alignment output.
      bool m_alignment;
      //! Derivative for roll.
      Math::Derivative<double> m_drv_roll;
      //! Derivative for pitch.
      Math::Derivative<double> m_drv_pitch;
      //! Derivative for yaw.
      Math::Derivative<double> m_drv_yaw;
      //! Derivative for heave.
      Math::Derivative<double> m_drv_heave;

    private:
      //! Routine to add a new beacon.
      //! @param[in] id beacon id.
      //! @param[in] msg inline msg.
      void
      addBeacon(unsigned id, const IMC::LblBeacon* msg);

      //! Routine to filter earth rotation effect from angular velocity values.
      //! @param[out] p angular velocity along the x-axis.
      //! @param[out] q angular velocity along the y-axis.
      //! @param[out] r angular velocity along the z-axis.
      void
      extractEarthRotation(double& p, double& q, double& r);

      //! Routine to reset sensor buffers.
      void
      resetBuffers(void);

      //! Routine to start navigation
      //! @param[in] msg GpsFix IMC message
      void
      startNavigation(const IMC::GpsFix* msg);

      //! Routine to correct LBL positions. This method must be invoked whenever
      //! a new navigation reference is created to correct transducers positions.
      void
      correctLBL(void);

      //! True if this task is active.
      bool m_active;
      //! Last latitude WGS-84.
      double m_last_lat;
      //! Last longitude WGS-84.
      double m_last_lon;
      //! Last GPS WGS-84 height above ellipsoid.
      double m_last_hae;
      //! Entity labels.
      std::string m_label_depth;
      std::string m_label_ahrs;
      std::string m_label_calibration;
      //! Task state machine.
      SMStates m_navstate;
      //! Time step delta.
      Time::Delta m_delta;
      //! Maximum distance to reference.
      float m_max_dis2ref;
      //! Horizontal position variance threshold value.
      float m_max_hpos_var;
      //! Previous velocity relative to ground message measurement.
      IMC::GroundVelocity m_gvel_previous;
      //! Previous velocity relative to water message measurement.
      IMC::WaterVelocity m_wvel_previous;
      //! Navigation Startup point.
      IMC::GpsFix* m_origin;
      //! LBL beacon configuration.
      LblBeaconXYZ* m_beacons[c_max_beacons];
      //! Displacement between LBL and GPS.
      float m_dist_lbl_gps;
      //! LblConfig data has been logged.
      bool m_lbl_log_beacons;
      //! Always reject LblRanges.
      bool m_reject_all_lbl;
      //! LBL rejection constants.
      std::vector<float> m_lbl_reject_constants;
      //! Displacement between DVL and vehicle center of gravity.
      float m_dist_dvl_cg;
      //! Displacement between GPS and vehicle center of gravity.
      float m_dist_gps_cg;
      //! Timestep between consecutive valid ground velocity messages.
      Time::Delta m_dvl_gv_tstep;
      //! Timestep between consecutive valid water velocity messages.
      Time::Delta m_dvl_wv_tstep;
      //! Absolute maximum DVL thresholds.
      std::vector<float> m_dvl_abs_thresh;
      //! Relative DVL thresholds.
      std::vector<float> m_dvl_rel_thresh;
      //! Time window to check relative thresholds.
      float m_dvl_time_rel_thresh;
      //! Altitude value.
      float m_altitude;
      //! Altitude entity label hardware.
      std::string m_elabel_alt_hard;
      //! Altitude entity label simulation.
      std::string m_elabel_alt_sim;
      //! Altitude attitude compensation.
      bool m_alt_attitude_compensation;
      //! Altitude Exponential Moving Average filter gain.
      float m_alt_ema_gain;
      //! Maximum horizontal dilution of precision.
      float m_max_hdop;
      //! Maximum valid horizontal accuracy estimate.
      float m_max_hacc;
      //! Sum of weights of sensor readings between prediction cycles.
      float m_depth_readings;
      float m_euler_readings;
      float m_angular_readings;
      float m_accel_readings;
      //! "Buffers" for sensor readings.
      double m_depth_bfr;
      double m_p_bfr;
      double m_q_bfr;
      double m_r_bfr;
      double m_roll_bfr;
      double m_pitch_bfr;
      double m_heading_bfr;
      double m_accel_x_bfr;
      double m_accel_y_bfr;
      double m_accel_z_bfr;
      //! Depth offset value.
      float m_depth_offset;
      //! Moving Average for heave.
      Math::MovingAverage<double>* m_avg_heave;
      //! Number of samples to average heave.
      int m_avg_heave_samples;
      //! Z reference.
      double m_z_ref;
      //! Reject GPS fixes based on desired depth.
      bool m_reject_gps;
      //! Received DesiredZ message to start diving.
      bool m_diving;
      //! Z units for this maneuver
      IMC::ZUnits m_zunits;
      //! Entity Ids.
      unsigned m_depth_eid;
      unsigned m_ahrs_eid;
      unsigned m_alt_eid;
      //! Declination value.
      float m_declination;
      //! Declination variables.
      bool m_declination_defined;
      bool m_use_declination;
      //! Sensors timeout.
      float m_without_gps_timeout;
      float m_without_dvl_timeout;
      //! DVL ground velocity validation bits.
      uint8_t m_gvel_val_bits;
      //! DVL water velocity validation bits.
      uint8_t m_wvel_val_bits;
      //! GPS validity bits.
      uint16_t m_gps_val_bits;
      //! Euler Angles offset.
      double m_phi_offset;
      double m_theta_offset;
    };
  }
}

#endif
