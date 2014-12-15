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
#include <DUNE/Navigation/Ranging.hpp>
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

    //! Weighted Moving Average filter value.
    static const float c_wma_filter = 0.1f;
    //! Maximum artificial angular velocity value.
    static const float c_max_av = 0.5f;

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
      consume(const IMC::DataSanity* msg);

      void
      consume(const IMC::Distance* msg);

      void
      consume(const IMC::Depth* msg);

      void
      consume(const IMC::DepthOffset* msg);

      void
      consume(const IMC::EulerAngles* msg);

      void
      consume(const IMC::EulerAnglesDelta* msg);

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
        return m_depth_readings ? (m_depth_bfr / m_depth_readings) : 0.0;
      }

      //! Get vehicle altitude.
      //! Negative value denotes invalid estimate.
      //! @return altitude value.
      inline double
      getAltitude(void)
      {
        if (!m_alt_sanity)
        {
          if (m_dvl_sanity_timer.overflow())
            m_altitude = -1.0;
          else
            m_altitude = 0.0;

          return m_altitude;
        }

        if (m_time_without_alt.overflow())
          m_altitude = -1.0;

        return m_altitude;
      }

      //! Get the acceleration along a specific axis.
      //! @return acceleration value.
      inline double
      getAcceleration(unsigned axis) const
      {
        return m_accel_readings ? (m_accel_bfr[axis] / m_accel_readings) : 0.0;
      }

      //! Get angular velocity value along a specific axis.
      //! @return angular velocity value.
      inline double
      getAngularVelocity(unsigned axis) const
      {
        return m_angular_readings ? (m_agvel_bfr[axis] / m_angular_readings) : 0.0;
      }

      //! Get heading rate value.
      //! @return heading rate.
      inline double
      getHeadingRate(void)
      {
        double pitch = getEuler(AXIS_Y);

        // Avoid division by zero.
        if (!std::cos(pitch))
          return 0;

        double roll = getEuler(AXIS_X);
        double p, q, r;

        if (m_sum_euler_inc)
        {
          if (!m_edelta_readings)
            return 0.0;

          // Make sure the following corresponds to angular velocity in all IMUs.
          p = getEulerDelta(AXIS_X) / getEulerDeltaTimestep();
          q = getEulerDelta(AXIS_Y) / getEulerDeltaTimestep();
          r = getEulerDelta(AXIS_Z) / getEulerDeltaTimestep();
        }
        else
        {
          p = getAngularVelocity(AXIS_X);
          q = getAngularVelocity(AXIS_Y);
          r = getAngularVelocity(AXIS_Z);
        }

        extractEarthRotation(p, q, r);

        return (std::sin(roll) * q + std::cos(roll) * r) / std::cos(pitch);
      }

      //! Get Euler Angle value.
      //! @return euler angle value.
      inline double
      getEuler(unsigned axis) const
      {
        return m_euler_readings ? (m_euler_bfr[axis] / m_euler_readings) : 0.0;
      }

      //! Get Euler Angles increment value along a specific axis.
      //! @return euler angles increment value
      inline double
      getEulerDelta(unsigned axis) const
      {
        return m_edelta_readings ? (m_edelta_bfr[axis] / m_edelta_readings) : 0.0;
      }

      //! Get Euler Angles increment value along a specific axis.
      //! @return euler angles increment value
      inline float
      getEulerDeltaTimestep(void) const
      {
        return m_edelta_ts;
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
        for (unsigned i = 0; i < 3; ++i)
          m_euler_bfr[i] = getEuler(i) * filter;

        m_euler_readings = filter;
      }

      //! Routine to clear euler angles delta buffer.
      //! @param[in] filter filter value.
      inline void
      updateEulerDelta(float filter)
      {
        for (unsigned i = 0; i < 3; ++i)
          m_edelta_bfr[i] =  getEulerDelta(i) * filter;

        m_edelta_readings = filter;
      }

      //! Routine to clear angular velocities buffer.
      //! @param[in] filter filter value.
      inline void
      updateAngularVelocities(float filter)
      {
        for (unsigned i = 0; i < 3; ++i)
          m_agvel_bfr[i] =  getAngularVelocity(i) * filter;

        m_angular_readings = filter;
      }

      //! Routine to clear accelerations buffer.
      //! @param[in] filter filter value.
      inline void
      updateAcceleration(float filter)
      {
        for (unsigned i = 0; i < 3; ++i)
          m_accel_bfr[i] =  getAcceleration(i) * filter;

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

      //! Get EKF output matrix speed indexes.
      //! @param[out] u forward speed state index.
      //! @param[out] v transversal speed state index.
      virtual void
      getSpeedOutputStates(unsigned* u, unsigned* v) = 0;

      //! Get number of EKF outputs.
      //! @return number of outputs.
      virtual unsigned
      getNumberOutputs(void) = 0;

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

      //! Routine to reset euler angles delta buffers.
      void
      resetEulerAnglesDelta(void);

      //! Routine to check navigation uncertainty.
      //! @param[in] abort abort if position uncertainty is exceeded.
      void
      checkUncertainty(bool abort = true);

      //! Routine to check current declination value using WMM.
      //! @param[in] lat vehicle current latitude.
      //! @param[in] lon vehicle current longitude.
      //! @param[in] height vehicle current height.
      void
      checkDeclination(double lat, double lon, double height);

      //! Kalman Filter matrices.
      Navigation::KalmanFilter m_kal;
      //! Ranging data.
      Navigation::Ranging m_ranging;
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
      //! Time without GPS sensor readings deadline.
      Time::Counter<double> m_time_without_gps;
      //! Time without DVL sensor readings deadline.
      Time::Counter<double> m_time_without_dvl;
      //! Time without altitude readings deadline.
      Time::Counter<double> m_time_without_alt;
      //! DVL data sanity timeout.
      Time::Counter<double> m_dvl_sanity_timer;
      //! Time without main depth provider.
      Time::Counter<double> m_time_without_main_depth;
      //! Time without depth readings.
      Time::Counter<double> m_time_without_depth;
      //! Time without euler angles readings.
      Time::Counter<double> m_time_without_euler;
      //! Valid GPS speed over ground.
      double m_gps_sog;
      //! Vertical displacement in the NED frame to the origin height above ellipsoid
      double m_last_z;
      //! Dead reckoning mode.
      bool m_dead_reckoning;
      //! Sum euler increments to get heading.
      bool m_sum_euler_inc;
      //! Vehicle is aligned.
      bool m_aligned;
      //! Angular velocity message entity id.
      unsigned m_agvel_eid;
      //! Accelaration message entity id.
      unsigned m_accel_eid;
      //! IMU entity id.
      unsigned m_imu_eid;
      //! LBL threshold.
      float m_lbl_threshold;
      //! Heading value (rad).
      double m_heading;
      //! Received valid ground velocity message.
      bool m_valid_gv;
      //! Received valid water velocity message.
      bool m_valid_wv;
      //! Derivative for heave.
      Math::Derivative<double> m_deriv_heave;

    private:
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
      std::string m_elabel_ahrs;
      std::string m_elabel_depth;
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
      //! Displacement between LBL and GPS.
      float m_dist_lbl_gps;
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
      //! DVL entity label.
      std::string m_elabel_dvl;
      //! Altitude entity label hardware.
      std::string m_elabel_alt_hard;
      //! Altitude entity label simulation.
      std::string m_elabel_alt_sim;
      //! Altitude attitude compensation.
      bool m_alt_attitude_compensation;
      //! Altitude Exponential Moving Average filter gain.
      float m_alt_ema_gain;
      //! Altitude data sanity;
      bool m_alt_sanity;
      //! Maximum horizontal dilution of precision.
      float m_max_hdop;
      //! Maximum valid horizontal accuracy estimate.
      float m_max_hacc;
      //! Maximum HACC Moving Average factor.
      float m_gps_hacc_factor;
      //! Sum of weights of sensor readings between prediction cycles.
      float m_depth_readings;
      float m_euler_readings;
      float m_edelta_readings;
      float m_angular_readings;
      float m_accel_readings;
      //! "Buffers" for sensors readings.
      double m_depth_bfr;
      double m_euler_bfr[3];
      double m_agvel_bfr[3];
      double m_accel_bfr[3];
      //! Euler Angles Delta.
      double m_edelta_bfr[3];
      //! Euler Angles Delta timestep.
      float m_edelta_ts;
      //! Depth offset value.
      float m_depth_offset;
      //! Moving Average for heave.
      Math::MovingAverage<double>* m_avg_heave;
      //! Moving Average for GpsFix.
      Math::MovingAverage<double>* m_avg_gps;
      //! Number of samples to average heave.
      unsigned m_avg_heave_samples;
      //! Number of samples to average GPS.
      unsigned m_avg_gps_samples;
      //! Entity Ids.
      unsigned m_depth_eid;
      unsigned m_ahrs_eid;
      unsigned m_alt_eid;
      unsigned m_dvl_eid;
      //! Declination value.
      float m_declination;
      //! Declination variables.
      bool m_declination_defined;
      bool m_use_declination;
      //! Sensors timeout.
      float m_without_gps_timeout;
      float m_without_dvl_timeout;
      float m_without_alt_timeout;
      float m_without_main_depth_timeout;
      float m_without_depth_timeout;
      float m_without_euler_timeout;
      float m_dvl_sanity_timeout;
      //! DVL ground velocity validation bits.
      uint8_t m_gvel_val_bits;
      //! DVL water velocity validation bits.
      uint8_t m_wvel_val_bits;
    };
  }
}

#endif
