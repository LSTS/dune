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
// Author: Aníbal Matos (original LBL filter circa 1999)                    *
// Author: Ricardo Martins (enhancements)                                   *
// Author: Pedro Vaz Teixeira (state machine)                               *
// Author: Jorge Estrela da Silva, (port and theory enhancements)           *
// Author: José Braga (new Extended Kalman Filter)                          *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Navigation
{
  namespace AUV
  {
    //! Second Generation Navigation
    namespace Navigation
    {
      //! Navigation states.
      enum StateIndexes
      {
        //! Vehicle north (m).
        STATE_X = 0,
        //! Vehicle east (m).
        STATE_Y = 1,
        //! Heading Angle (rad).
        STATE_PSI = 2,
        //! Heading Rate (rad/s)
        STATE_R = 3,
        //! Ground Velocity x (m/s).
        STATE_U = 4,
        //! Ground Velocity y (m/s).
        STATE_V = 5,
        //! Heading Rate Bias (rad/s).
        STATE_R_BIAS = 6,
        //! Heading Angle Bias (rad).
        STATE_PSI_BIAS = 7,
        //! Revolutions to speed factor.
        STATE_K = 8,
        //! Number of States.
        NUM_STATE = 9
      };

      //! Navigation Output states.
      enum OutputIndexes
      {
        //! DVL Forward Speed (m/s).
        OUT_U = 0,
        //! DVL Transversal Speed (m/s).
        OUT_V = 1,
        //! Heading Angle (rad).
        OUT_PSI = 2,
        //! Heading Rate (rad/s).
        OUT_R = 3,
        //! GPS x (m).
        OUT_GPS_X = 4,
        //! GPS y (m).
        OUT_GPS_Y = 5,
        //! Number of Outputs (without LBL).
        NUM_OUT = 6
      };

      //! Process Noise parameters.
      enum ProcessNoiseIndexes
      {
        PN_POSITION = 0,
        PN_PSI = 1,
        PN_YAWRATE = 2,
        PN_SPEED = 3,
        PN_YRATE_BIAS = 4,
        PN_PSI_BIAS = 5
      };

      //! Measure Noise parameters.
      enum MeasureNoiseIndexes
      {
        MN_U = 0,
        MN_V = 1,
        MN_PSI = 2,
        MN_YAWRATE = 3,
        MN_LBL = 4
      };

      //! State Covariance parameters.
      enum StateCovarianceIndexes
      {
        SC_POSITION = 0,
        SC_ANGLES = 1,
        SC_SPEED = 2,
        SC_BIASES = 3,
        SC_RPM = 4
      };

      //! GPS accuracy indexes.
      enum GpsAccuracyIndexes
      {
        GPS_ACC_BAD_IDX = 0,
        GPS_ACC_AVG_IDX = 1,
        GPS_ACC_GOOD_IDX = 2,
        GPS_ACC_PERFECT_IDX = 3
      };

      //! GPS Horizontal Accuracy (HACC) threshold values.
      enum GpsAccuracyValues
      {
        GPS_ACC_BAD_THRESH = 10,
        GPS_ACC_AVG_THRESH = 8,
        GPS_ACC_GOOD_THRESH = 4
      };

      //! %Task arguments.
      struct Arguments
      {
        //! EKF process noise covariance value
        //! with tactical grade IMU enabled.
        float position_noise_with_imu;
        //! EKF LBL noise covariance value
        //! with tactical grade IMU enabled.
        float lbl_noise_with_imu;
        //! GPS measurement noise covariance values.
        std::vector<double> gps_noise;
        //! IMU entity label.
        std::string elabel_imu;
        //! Number of samples to average forward speed.
        unsigned avg_speed_samples;
        //! Revolutions to speed factor.
        float ini_rev_fac;
        //! Maximum Allowed Variation for revolutions to speed estimation.
        float max_rev_fac;
        //! Heading bias uncertainty alignment threshold.
        double alignment_index;
        //! Increment Euler Angles Delta (true) or integrate yaw rate (false).
        bool increment_euler_delta;
        //! Abort if navigation exceeds maximum uncertainty.
        bool abort;
      };

      struct Task: public DUNE::Navigation::BasicNavigation
      {
        //! Periodic GPS fix reading check.
        bool m_gps_reading;
        //! Moving average for vehicle forward speed.
        MovingAverage<double>* m_avg_speed;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Navigation::BasicNavigation(name, ctx),
          m_avg_speed(NULL)
        {
          // Declare configuration parameters.
          param("Position Noise Covariance with IMU", m_args.position_noise_with_imu)
          .defaultValue("0.0")
          .minimumValue("0.0")
          .description("Position process noise covariance value when IMU is available");

          param("LBL Noise Covariance with IMU", m_args.lbl_noise_with_imu)
          .defaultValue("0.1")
          .minimumValue("0.0")
          .description("LBL measurement noise covariance value when IMU is available");

          param("Process Noise Covariance", m_process_noise)
          .defaultValue("")
          .size(6)
          .description("Kalman Filter Process Noise Covariance values");

          param("GPS Noise Covariance", m_args.gps_noise)
          .defaultValue("")
          .size(4)
          .description("Kalman Filter Gps Noise Covariance values");

          param("Measure Noise Covariance", m_measure_noise)
          .defaultValue("")
          .size(5)
          .description("Kalman Filter Measurement Noise Covariance values");

          param("State Covariance Initial State", m_state_cov)
          .defaultValue("")
          .size(5)
          .description("Kalman Filter State Covariance initial values");

          param("Speed Moving Average Samples", m_args.avg_speed_samples)
          .defaultValue("10")
          .minimumValue("5")
          .maximumValue("20")
          .description("Number of moving average samples to smooth forward speed");

          param("Revolutions to speed factor", m_args.ini_rev_fac)
          .defaultValue("1.2e-3")
          .minimumValue("0.8e-3")
          .maximumValue("2.0e-3")
          .description("Kalman Filter initial revolutions to speed multiplicative factor state value");

          param("Revolutions to speed variation", m_args.max_rev_fac)
          .defaultValue("6e-4")
          .minimumValue("4e-4")
          .maximumValue("8e-4")
          .description("Kalman Filter revolutions to speed maximum allowed variation");

          param("Update Heading with Euler Increments", m_args.increment_euler_delta)
          .defaultValue("false")
          .description("Use 'EulerAnglesDelta' or 'AngularVelocity' to update heading");

          param("Abort if Uncertainty Exceeded", m_args.abort)
          .defaultValue("true")
          .description("Abort if position uncertainty is exceeded");

          param("Heading Bias Alignment Index", m_args.alignment_index)
          .defaultValue("1e-5")
          .minimumValue("1e-6")
          .maximumValue("1e-4")
          .description("Heading bias uncertainty alignment threshold");

          param("Entity Label - IMU", m_args.elabel_imu)
          .description("Entity label of the IMU");

          // Extended Kalman Filter initialization.
          m_kal.reset(NUM_STATE, NUM_OUT);
          resetKalman();

          // Register callbacks
          bind<IMC::EntityActivationState>(this);
        }

        void
        onUpdateParameters(void)
        {
          BasicNavigation::onUpdateParameters();

          // Initialize Process and Measure Covariances matrices
          m_kal.setProcessNoise(STATE_X, m_process_noise[PN_POSITION]);
          m_kal.setProcessNoise(STATE_Y, m_process_noise[PN_POSITION]);
          m_kal.setProcessNoise(STATE_PSI, m_process_noise[PN_PSI]);
          m_kal.setProcessNoise(STATE_R, m_process_noise[PN_YAWRATE]);
          m_kal.setProcessNoise(STATE_U, m_process_noise[PN_SPEED]);
          m_kal.setProcessNoise(STATE_V, m_process_noise[PN_SPEED]);
          m_kal.setProcessNoise(STATE_R_BIAS, m_process_noise[PN_YRATE_BIAS]);
          m_kal.setProcessNoise(STATE_PSI_BIAS, 0.0);

          m_kal.setMeasurementNoise(OUT_U, m_measure_noise[MN_U]);
          m_kal.setMeasurementNoise(OUT_V, m_measure_noise[MN_V]);
          m_kal.setMeasurementNoise(OUT_PSI, m_measure_noise[MN_PSI]);
          m_kal.setMeasurementNoise(OUT_R, m_measure_noise[MN_YAWRATE]);
          m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_ACC_GOOD_IDX]);
          m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_ACC_GOOD_IDX]);

          for (unsigned i = 0; i < m_ranging.getSize(); i++)
            m_kal.setMeasurementNoise(NUM_OUT + i, m_measure_noise[MN_LBL]);

          if (m_dead_reckoning)
          {
            // Position process noise covariance value if IMU is available.
            m_kal.setProcessNoise(STATE_X, m_args.position_noise_with_imu);
            m_kal.setProcessNoise(STATE_Y, m_args.position_noise_with_imu);
            m_kal.setProcessNoise(STATE_PSI_BIAS, m_process_noise[PN_PSI_BIAS]);

            // LBL noise.
            for (unsigned i = 0; i < m_ranging.getSize(); i++)
              m_kal.setMeasurementNoise(NUM_OUT + i, m_args.lbl_noise_with_imu);
          }
        }

        void
        onResourceInitialization(void)
        {
          BasicNavigation::onResourceInitialization();
          m_avg_speed = new MovingAverage<double>(m_args.avg_speed_samples);
        }

        void
        onResourceRelease(void)
        {
          BasicNavigation::onResourceRelease();
          Memory::clear(m_avg_speed);
        }

        void
        onEntityResolution(void)
        {
          BasicNavigation::onEntityResolution();
          try
          {
            m_imu_eid = resolveEntity(m_args.elabel_imu);
          }
          catch (...)
          {
            m_imu_eid = UINT_MAX;
          }
        }

        void
        onReportEntityState(void)
        {
          IMC::AlignmentState as;

          if (m_aligned)
            as.state = IMC::AlignmentState::AS_ALIGNED;
          else
            as.state = IMC::AlignmentState::AS_NOT_ALIGNED;

          // No IMU unit available.
          if (m_imu_eid == UINT_MAX)
            as.state = IMC::AlignmentState::AS_NOT_SUPPORTED;

          dispatch(as);
        }

        void
        consume(const IMC::EntityActivationState* msg)
        {
          if (msg->getSourceEntity() != m_imu_eid)
            return;

          if (msg->state == IMC::EntityActivationState::EAS_ACTIVE)
          {
            // IMU already activated.
            if (m_dead_reckoning)
              return;

            if (m_args.increment_euler_delta)
            {
              m_sum_euler_inc = true;
            }
            else
            {
              m_sum_euler_inc = false;
              m_agvel_eid = m_imu_eid;
            }

            // Dead reckoning mode.
            m_dead_reckoning = true;
            spew("activating IMU");

            // Reinitialize state covariance matrix value.
            m_kal.resetCovariance(STATE_PSI_BIAS);
            m_kal.setCovariance(STATE_PSI_BIAS, m_state_cov[SC_BIASES]);

            // Position process noise covariance value if IMU is available.
            m_kal.setProcessNoise(STATE_X, m_args.position_noise_with_imu);
            m_kal.setProcessNoise(STATE_Y, m_args.position_noise_with_imu);
            m_kal.setProcessNoise(STATE_PSI_BIAS, m_process_noise[PN_PSI_BIAS]);

            // LBL noise.
            for (unsigned i = 0; i < m_ranging.getSize(); i++)
              m_kal.setMeasurementNoise(NUM_OUT + i, m_args.lbl_noise_with_imu);
          }
          else if (msg->state == IMC::EntityActivationState::EAS_INACTIVE)
          {
            // Stop integrate heading rates and use AHRS data.
            m_dead_reckoning = false;
            m_sum_euler_inc = false;

            m_aligned = false;
            m_agvel_eid = getAhrsId();
            spew("deactivating IMU");

            m_kal.setState(STATE_PSI_BIAS, 0.0);

            // No heading offset estimation without IMU.
            m_kal.resetCovariance(STATE_PSI_BIAS);

            // Reinitialize EKF variances.
            m_kal.setProcessNoise(STATE_X, m_process_noise[PN_POSITION]);
            m_kal.setProcessNoise(STATE_Y, m_process_noise[PN_POSITION]);
            m_kal.setProcessNoise(STATE_PSI_BIAS, 0.0);

            for (unsigned i = 0; i < m_ranging.getSize(); i++)
              m_kal.setMeasurementNoise(NUM_OUT + i, m_measure_noise[MN_LBL]);
          }
        }

        bool
        setup(void)
        {
          BasicNavigation::setup();

          m_kal.setState(STATE_K, m_args.ini_rev_fac);

          // Initial position covariances (GPS and LBL)
          m_kal.setCovariance(STATE_X, m_state_cov[SC_POSITION]);
          m_kal.setCovariance(STATE_Y, m_state_cov[SC_POSITION]);
          m_kal.setCovariance(STATE_PSI, m_state_cov[SC_ANGLES]);
          m_kal.setCovariance(STATE_R, m_state_cov[SC_ANGLES]);
          m_kal.setCovariance(STATE_U, m_state_cov[SC_SPEED]);
          m_kal.setCovariance(STATE_V, m_state_cov[SC_SPEED]);
          m_kal.setCovariance(STATE_R_BIAS, m_state_cov[SC_BIASES]);
          m_kal.setCovariance(STATE_K, m_state_cov[SC_RPM]);

          // No heading bias estimation without IMU.
          m_kal.setCovariance(STATE_PSI_BIAS, 0.0);

          return true;
        }

        void
        reset(void)
        {
          BasicNavigation::reset();
          m_gps_reading = false;
        }

        double
        getBiasedHeading(void)
        {
          return m_kal.getState(STATE_PSI) + m_kal.getState(STATE_PSI_BIAS);
        }

        void
        onConsumeLblConfig(void)
        {
          if (m_kal.resize(NUM_OUT + m_ranging.getSize()))
            Task::onUpdateParameters();
        }

        void
        updateKalmanParametersGps(double hacc)
        {
          if (hacc > GPS_ACC_BAD_THRESH)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_ACC_BAD_IDX]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_ACC_BAD_IDX]);
          }
          if (hacc > GPS_ACC_AVG_THRESH && hacc <= GPS_ACC_BAD_THRESH)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_ACC_AVG_IDX]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_ACC_AVG_IDX]);
          }
          if (hacc > GPS_ACC_GOOD_THRESH && hacc <= GPS_ACC_AVG_THRESH)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_ACC_GOOD_IDX]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_ACC_GOOD_IDX]);
          }
          if (hacc <= GPS_ACC_GOOD_THRESH)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_ACC_PERFECT_IDX]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_ACC_PERFECT_IDX]);
          }
        }

        void
        runKalmanGPS(double x, double y)
        {
          m_gps_reading = true;

          // Define Measurements matrix - GPS
          m_kal.setOutput(OUT_GPS_X, x);
          m_kal.setOutput(OUT_GPS_Y, y);
        }

        void
        getSpeedOutputStates(unsigned* u, unsigned* v)
        {
          *u = OUT_U;
          *v = OUT_V;
        }

        unsigned
        getNumberOutputs(void)
        {
          return NUM_OUT;
        }

        void
        task(void)
        {
          if(!BasicNavigation::isActive())
            return;

          // Compute time delta.
          double tstep = getTimeStep();
          // Check if we have a valid time delta.
          if (tstep < 0)
            return;

          // Kalman Filter
          // Reset and Discretize A matrix
          Matrix a(NUM_STATE, NUM_STATE, 0.0);
          setTransition(a);

          Matrix x(NUM_STATE, 1, 0.0);
          x = m_kal.getState();

          m_kal.setStateTransition((a * tstep).expmts());

          // Modify covariance state transition matrix.
          double yaw = m_kal.getState(STATE_PSI);

          a(STATE_X, STATE_PSI) = (- x(STATE_U) * std::sin(yaw)
                                   - x(STATE_V) * std::cos(yaw));
          a(STATE_Y, STATE_PSI) = (x(STATE_U) * std::cos(yaw)
                                   - x(STATE_V) * std::sin(yaw));

          m_kal.setCovarianceTransition((a * tstep).expmts());

          // Kalman Prediction.
          m_kal.predict();

          // Euler Angles update modes.
          double hrate = getHeadingRate();
          m_kal.setOutput(OUT_R, hrate);

          if (m_dead_reckoning)
            m_heading += tstep * hrate;
          else
            m_heading += Angles::minSignedAngle(m_heading, Angles::normalizeRadian(getEuler(AXIS_Z)));

          // Update heading in Kalman filter.
          m_kal.setOutput(OUT_PSI, m_heading);
          m_kal.setInnovation(OUT_PSI, m_kal.getOutput(OUT_PSI) - getBiasedHeading());

          double r = m_kal.getState(STATE_R) + m_kal.getState(STATE_R_BIAS);
          m_kal.setInnovation(OUT_R,  m_kal.getOutput(OUT_R) - r);

          // GPS innovation matrix.
          if (m_gps_reading)
          {
            // Reset GPS counter.
            m_time_without_gps.reset();
            m_kal.setInnovation(OUT_GPS_X, m_kal.getOutput(OUT_GPS_X) - m_kal.getState(STATE_X));
            m_kal.setInnovation(OUT_GPS_Y, m_kal.getOutput(OUT_GPS_Y) - m_kal.getState(STATE_Y));
          }
          else
          {
            m_kal.setObservation(OUT_GPS_X, STATE_X, 0.0);
            m_kal.setObservation(OUT_GPS_Y, STATE_Y, 0.0);
          }

          // Speed innovation matrix.
          if (m_valid_gv || m_valid_wv)
          {
            runKalmanDVL();
            m_kal.setInnovation(OUT_U, m_kal.getOutput(OUT_U) - m_kal.getState(STATE_U));
            m_kal.setInnovation(OUT_V, m_kal.getOutput(OUT_V) - m_kal.getState(STATE_V));
          }
          else if (m_time_without_gps.overflow() && m_time_without_dvl.overflow())
          {
            double u = m_rpm * m_kal.getState(STATE_K) * std::cos(getEuler(AXIS_Y));
            m_kal.setInnovation(OUT_U, u - m_kal.getState(STATE_U));
            m_kal.setInnovation(OUT_V, 0 - m_kal.getState(STATE_V));
          }
          else
          {
            // Use GPS speed over ground.
            if (m_gps_reading && m_time_without_dvl.overflow())
            {
              m_kal.setInnovation(OUT_U, m_gps_sog - m_kal.getState(STATE_U));
              m_kal.setInnovation(OUT_V, 0 - m_kal.getState(STATE_V));
            }
            else
            {
              m_kal.setObservation(OUT_U, STATE_U, 0.0);
              m_kal.setObservation(OUT_V, STATE_V, 0.0);
            }
          }

          // Extended Kalman Filter update with no threshold defined.
          m_kal.update(0.0);

          // Limit revolutions to speed factor.
          float k_lim = trimValue(m_kal.getState(STATE_K),
                                  m_args.ini_rev_fac - m_args.max_rev_fac,
                                  m_args.ini_rev_fac + m_args.max_rev_fac);

          m_kal.setState(STATE_K, k_lim);

          // Check alignment threshold index.
          if (m_dead_reckoning)
          {
            if (m_kal.getCovariance(STATE_PSI_BIAS) < m_args.alignment_index)
              m_aligned = true;
            else
              m_aligned = false;
          }

          checkUncertainty(m_args.abort);

          logData();
          reportToBus();

          // Reset variables.
          updateBuffers(c_wma_filter);
          m_gps_reading = false;
          m_valid_gv = false;
          m_valid_wv = false;
          resetKalman();
        }

        // Reinitialize Extended Kalman Filter transition matrix function.
        void
        setTransition(Matrix& A)
        {
          A.fill(0.0);

          double phi = Angles::normalizeRadian(getEuler(AXIS_X));
          double theta = Angles::normalizeRadian(getEuler(AXIS_Y));

          A(STATE_PSI, STATE_R) = 1.0;

          double yaw = m_kal.getState(STATE_PSI);

          if (m_time_without_dvl.overflow() && m_time_without_gps.overflow())
          {
            A(STATE_X, STATE_K) = m_rpm * std::cos(yaw) * std::cos(theta);
            A(STATE_Y, STATE_K) = m_rpm * std::sin(yaw) * std::cos(theta);
          }
          else
          {
            A(STATE_X, STATE_U) = std::cos(yaw) * std::cos(theta);
            A(STATE_X, STATE_V) = (std::cos(yaw) * std::sin(theta) * std::sin(phi)
                                   - std::sin(yaw) * std::cos(phi));
            A(STATE_Y, STATE_U) = std::sin(yaw) * std::cos(theta);
            A(STATE_Y, STATE_V) = (std::sin(yaw) * std::sin(theta) * std::sin(phi)
                                   + std::cos(yaw) * std::cos(phi));
          }
        }

        // Reinitialize Extended Kalman Filter output matrix function.
        void
        resetKalman(void)
        {
          m_kal.resetOutputs();
          m_kal.setObservation(OUT_U, STATE_U, 1.0);
          m_kal.setObservation(OUT_V, STATE_V, 1.0);
          m_kal.setObservation(OUT_PSI, STATE_PSI, 1.0);
          m_kal.setObservation(OUT_PSI, STATE_PSI_BIAS, 1.0);
          m_kal.setObservation(OUT_R, STATE_R, 1.0);
          m_kal.setObservation(OUT_R, STATE_R_BIAS, 0.0);
          m_kal.setObservation(OUT_GPS_X, STATE_X, 1.0);
          m_kal.setObservation(OUT_GPS_Y, STATE_Y, 1.0);
        }

        void
        logData(void)
        {
          m_estate.psi = Angles::normalizeRadian(m_kal.getState(STATE_PSI));
          m_estate.r = m_kal.getState(STATE_R);
          onDispatchNavigation();

          m_estate.u = m_avg_speed->update(m_kal.getState(STATE_U));
          m_estate.v = m_kal.getState(STATE_V);

          // Log Navigation Uncertainty.
          m_uncertainty.psi = m_kal.getCovariance(STATE_PSI);
          m_uncertainty.bias_psi = m_kal.getCovariance(STATE_PSI_BIAS);
          m_uncertainty.r = m_kal.getCovariance(STATE_R);
          m_uncertainty.u = m_kal.getCovariance(STATE_U);
          m_uncertainty.v = m_kal.getCovariance(STATE_V);

          // Log Navigation Data.
          m_navdata.cog = (std::abs(m_kal.getState(STATE_U)) > 0.2 ?
                           std::atan2(m_estate.vy, m_estate.vx) : 0);
          m_navdata.bias_psi = m_kal.getState(STATE_PSI_BIAS);
          m_navdata.bias_r = m_kal.getState(STATE_R_BIAS);

          // Navigation error.
          m_navdata.custom_x = Math::norm(m_kal.getInnovation(OUT_GPS_X),
                                          m_kal.getInnovation(OUT_GPS_Y));
          m_navdata.custom_y = m_kal.getState(STATE_K);

          double ang = m_estate.psi - Angles::normalizeRadian(getEuler(AXIS_Z));
          m_navdata.custom_z = Angles::degrees(Angles::normalizeRadian(ang));
        }
      };
    }
  }
}

DUNE_TASK
