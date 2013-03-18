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
    namespace SGNavigation
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
        //! RPM to Speed multiplicative factor.
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

      //! GPS accuracy parameters.
      enum GpsAccuracyIndexes
      {
        GPS_ACC_BAD = 0,
        GPS_ACC_AVERAGE = 1,
        GPS_ACC_GOOD = 2,
        GPS_ACC_PERFECT = 3
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
        int avg_speed_samples;
        //! Initial RPM to Speed multiplicative factor.
        float initial_rpm_to_speed;
        //! Use RPM information.
        bool use_rpm;
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
          .description("Position process noise covariance value when IMU is available");

          param("LBL Noise Covariance with IMU", m_args.lbl_noise_with_imu)
          .defaultValue("0.1")
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
          .description("Number of moving average samples to smooth forward speed");

          param("RPM to Speed multiplicative factor", m_args.initial_rpm_to_speed)
          .defaultValue("1.2e-3")
          .description("Kalman Filter initial RPM to Speed multiplicative factor state value");

          param("Use RPM Data", m_args.use_rpm)
          .defaultValue("false")
          .description("Use propeller's revolutions per minute information in the filter");

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
          m_kal.setProcessNoise(STATE_PSI_BIAS, m_process_noise[PN_PSI_BIAS]);

          m_kal.setMeasurementNoise(OUT_U, m_measure_noise[MN_U]);
          m_kal.setMeasurementNoise(OUT_V, m_measure_noise[MN_V]);
          m_kal.setMeasurementNoise(OUT_PSI, m_measure_noise[MN_PSI]);
          m_kal.setMeasurementNoise(OUT_R, m_measure_noise[MN_YAWRATE]);
          m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_ACC_GOOD]);
          m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_ACC_GOOD]);

          for (unsigned i = 0; i < m_num_beacons; i++)
            m_kal.setMeasurementNoise(NUM_OUT + i, m_measure_noise[MN_LBL]);
        }

        void
        onResourceInitialization(void)
        {
          BasicNavigation::onResourceInitialization();
          m_avg_speed = new MovingAverage<double>(m_args.avg_speed_samples);
        }

        ~Task(void)
        {
          Task::onResourceRelease();
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
          catch (std::runtime_error& e)
          {
            war(DTR("failed to resolve entity '%s': %s"), m_args.elabel_imu.c_str(), e.what());
            m_imu_eid = UINT_MAX;
          }
        }

        void
        consume(const IMC::EntityActivationState* msg)
        {
          if (msg->getSourceEntity() != m_imu_eid)
            return;

          if (msg->state == IMC::EntityActivationState::EAS_ACTIVE)
          {
            // IMU already activated.
            if (m_integ_yrate)
              return;

            // Start integrating heading rates from IMU data.
            m_integ_yrate = true;
            m_agvel_eid = m_imu_eid;
            debug("activating IMU");

            // Reinitialize state covariance matrix value.
            m_kal.resetCovariance(STATE_PSI_BIAS);
            m_kal.setCovariance(STATE_PSI_BIAS, m_state_cov[SC_BIASES]);

            // Position process noise covariance value if IMU is available.
            m_kal.setProcessNoise(STATE_X, m_args.position_noise_with_imu);
            m_kal.setProcessNoise(STATE_Y, m_args.position_noise_with_imu);

            // LBL noise.
            for (unsigned i = 0; i < m_num_beacons; i++)
              m_kal.setMeasurementNoise(NUM_OUT + i, m_args.lbl_noise_with_imu);
          }
          else if (msg->state == IMC::EntityActivationState::EAS_INACTIVE)
          {
            // Stop integrate heading rates and use AHRS data.
            m_integ_yrate = false;
            m_agvel_eid = BasicNavigation::getAhrsId();
            debug("deactivating IMU");

            // No heading offset estimation without IMU.
            m_kal.resetCovariance(STATE_PSI_BIAS);

            // Reinitialize EKF variances.
            m_kal.setProcessNoise(STATE_X, m_process_noise[PN_POSITION]);
            m_kal.setProcessNoise(STATE_Y, m_process_noise[PN_POSITION]);

            for (unsigned i = 0; i < m_num_beacons; i++)
              m_kal.setMeasurementNoise(NUM_OUT + i, m_measure_noise[MN_LBL]);
          }
        }

        bool
        setup(void)
        {
          BasicNavigation::setup();

          m_kal.setState(STATE_K, m_args.initial_rpm_to_speed);

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

        void
        onConsumeLblConfig(void)
        {
          if (m_kal.resize(NUM_OUT + m_num_beacons))
            Task::onUpdateParameters();
        }

        void
        updateKalmanParametersGps(double hacc)
        {
          if (hacc > 10)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_ACC_BAD]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_ACC_BAD]);
          }
          if (hacc > 8 && hacc <= 10)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_ACC_AVERAGE]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_ACC_AVERAGE]);
          }
          if (hacc > 4 && hacc <= 8)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_ACC_GOOD]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_ACC_GOOD]);
          }
          if (hacc <= 4)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_ACC_PERFECT]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_ACC_PERFECT]);
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
        runKalmanLBL(int beacon, float range, double dx, double dy, double exp_range)
        {
          // "Outlier Rejection for Autonomous Acoustic Navigation"
          // Jerome Vaganay, John J. Leonard and James G. Bellingham. MIT
          Matrix H(1, 2, 0.0);
          H(0, 0) = dx / exp_range;
          H(0, 1) = dy / exp_range;
          Matrix P(2, 2, 0.0);
          P = m_kal.getCovariance(STATE_X, STATE_Y, STATE_X, STATE_Y);

          double k = BasicNavigation::getLblRejectionValue(exp_range);
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
            // Define measurements matrix.
            m_kal.setObservation(NUM_OUT + beacon, STATE_X, dx / exp_range);
            m_kal.setObservation(NUM_OUT + beacon, STATE_Y, dy / exp_range);

            // Define Output matrix.
            m_kal.setOutput(NUM_OUT + beacon, range);
            m_kal.setInnovation(NUM_OUT + beacon, range - exp_range);
            m_lbl_ac.acceptance = IMC::LblRangeAcceptance::RR_ACCEPTED;
            dispatch(m_lbl_ac, DF_KEEP_TIME);
          }
        }

        void
        runKalmanDVL(void)
        {
          // Use Ground Velocity messages if they are valid.
          // Water Velocity messages otherwise.
          if (m_valid_gv)
          {
            m_kal.setOutput(OUT_U, m_gvel.x);
            m_kal.setOutput(OUT_V, m_gvel.y);
          }
          else if (m_valid_wv)
          {
            m_kal.setOutput(OUT_U, m_wvel.x);
            m_kal.setOutput(OUT_V, m_wvel.y);
          }
        }

        void
        correctAlignment(double psi)
        {
          // Vehicle has orientation calibrated.
          m_kal.setState(STATE_PSI, psi);
          m_kal.setState(STATE_PSI_BIAS, m_heading - psi);
          m_kal.resetCovariance(STATE_PSI_BIAS);
          m_kal.setCovariance(STATE_PSI_BIAS, m_state_cov[SC_BIASES]);
        }

        void
        task(void)
        {
          if(!BasicNavigation::isActive())
            return;

          // Compute time delta.
          double tstep = BasicNavigation::getTimeStep();
          // Check if we have a valid time delta.
          if (tstep < 0)
            return;

          // Kalman Filter
          // Reset and Discretize A matrix
          Matrix ax(NUM_STATE, NUM_STATE, 0.0);
          Matrix ap(NUM_STATE, NUM_STATE, 0.0);
          Matrix x(NUM_STATE, 1, 0.0);
          ax = m_kal.getStateTransition();
          ap = m_kal.getCovarianceTransition();
          x = m_kal.getState();

          resetMatrixA(ax, x);
          resetMatrixA(ap, x);

          ap(STATE_X, STATE_PSI) = (- x(STATE_U) * std::sin(x(STATE_PSI))
                                    - x(STATE_V) * std::cos(x(STATE_PSI)));
          ap(STATE_Y, STATE_PSI) = (x(STATE_U) * std::cos(x(STATE_PSI))
                                    - x(STATE_V) * std::sin(x(STATE_PSI)));

          m_kal.setCovarianceTransition((ap * tstep).expmts());
          m_kal.setStateTransition((ax * tstep).expmts());

          // Kalman Prediction.
          m_kal.predict();

          // Use compass readings or integrate yaw-rate data to compute heading.
          if (m_integ_yrate)
          {
            m_heading += tstep * BasicNavigation::getHeadingRate();
            m_kal.setOutput(OUT_PSI, m_heading);
            double psi = m_kal.getState(STATE_PSI) + m_kal.getState(STATE_PSI_BIAS);
            m_kal.setInnovation(OUT_PSI, m_kal.getOutput(OUT_PSI) - psi);
          }
          else
          {
            m_heading += Angles::minimumSignedAngle(m_heading, BasicNavigation::getYaw());
            m_kal.setOutput(OUT_PSI, m_heading);
            double psi = m_kal.getState(STATE_PSI) + m_kal.getState(STATE_PSI_BIAS);
            m_kal.setInnovation(OUT_PSI, m_kal.getOutput(OUT_PSI) - psi);
          }

          m_kal.setOutput(OUT_R, BasicNavigation::getAngularVelocity(AXIS_Z));
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

          // DVL innovation matrix.
          if ((m_valid_gv || m_valid_wv) && m_time_without_gps.overflow() && !m_args.use_rpm)
          {
            runKalmanDVL();
            m_kal.setInnovation(OUT_U, m_kal.getOutput(OUT_U) - m_kal.getState(STATE_U));
            m_kal.setInnovation(OUT_V, m_kal.getOutput(OUT_V) - m_kal.getState(STATE_V));
          }
          else
          {
            // Use GPS speed over ground.
            if (m_gps_reading)
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

          BasicNavigation::checkUncertainty();

          sendToBus();
          BasicNavigation::reportToBus();

          // Reset variables.
          BasicNavigation::updateBuffers(c_wma_filter);
          m_gps_reading = false;
          m_valid_gv = false;
          m_valid_wv = false;
          resetKalman();
        }

        // Reinitialize Extended Kalman Filter transition matrix function.
        void
        resetMatrixA(Matrix& A, Matrix X)
        {
          A.fill(0.0);

          double phi = getRoll();
          double theta = getPitch();

          A(STATE_PSI, STATE_R) = 1.0;

          if (!m_args.use_rpm)
          {
            A(STATE_X, STATE_U) = std::cos(X(STATE_PSI)) * std::cos(theta);
            A(STATE_X, STATE_V) = (std::cos(X(STATE_PSI)) * std::sin(theta) * std::sin(phi)
                                   - std::sin(X(STATE_PSI)) * std::cos(phi));
            A(STATE_Y, STATE_U) = std::sin(X(STATE_PSI)) * std::cos(theta);
            A(STATE_Y, STATE_V) = (std::sin(X(STATE_PSI)) * std::sin(theta) * std::sin(phi)
                                   + std::cos(X(STATE_PSI)) * std::cos(phi));
          }
          else
          {
            A(STATE_X, STATE_K) = m_rpm * std::cos(X(STATE_PSI)) * std::cos(theta);
            A(STATE_Y, STATE_K) = m_rpm * std::sin(X(STATE_PSI)) * std::cos(theta);
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
        sendToBus(void)
        {
          m_estate.psi = Angles::normalizeRadian(m_kal.getState(STATE_PSI));

          BasicNavigation::onDispatchNavigation();

          // Update Euler Angles derivatives when
          // Angular Velocity readings are not available.
          if (!gotAngularReadings())
            m_estate.r = BasicNavigation::getVirtualAngularVelocity(AXIS_Z);
          else
            m_estate.r = m_kal.getState(STATE_R);

          if (!m_args.use_rpm)
          {
            m_estate.u = m_avg_speed->update(m_kal.getState(STATE_U));
            m_estate.v = m_kal.getState(STATE_V);
          }
          else
          {
            m_estate.u = m_rpm * m_kal.getState(STATE_K) * std::cos(getPitch());
            m_estate.v = 0.0;
          }

          // Water Velocity in the navigation frame.
          if (m_valid_gv && m_valid_wv && !m_time_without_dvl.overflow())
            BodyFixedFrame::toInertialFrame(m_estate.phi, m_estate.theta, m_estate.psi,
                                            (m_gvel.x - m_wvel.x), (m_gvel.y - m_wvel.y), (m_gvel.z - m_wvel.z),
                                            &m_ewvel.x, &m_ewvel.y, &m_ewvel.z);

          // Log Navigation Uncertainty.
          m_uncertainty.psi = m_kal.getCovariance(STATE_PSI, STATE_PSI);
          m_uncertainty.bias_psi = m_kal.getCovariance(STATE_PSI_BIAS,STATE_PSI_BIAS);
          m_uncertainty.r = m_kal.getCovariance(STATE_R, STATE_R);
          m_uncertainty.u = m_kal.getCovariance(STATE_U, STATE_U);
          m_uncertainty.v = m_kal.getCovariance(STATE_V, STATE_V);

          // Log Navigation Data.
          m_navdata.cog = (std::abs(m_kal.getState(STATE_U)) > 0.2 ?
                           std::atan2(m_estate.vy, m_estate.vx) : 0);
          m_navdata.bias_psi = m_kal.getState(STATE_PSI_BIAS);
          m_navdata.bias_r = m_kal.getState(STATE_R_BIAS);

          // Navigation error.
          m_navdata.custom_x = Math::norm(m_kal.getInnovation(OUT_GPS_X),
                                          m_kal.getInnovation(OUT_GPS_Y));
          m_navdata.custom_y = m_kal.getState(STATE_K);
          m_navdata.custom_z = m_kal.getCovariance(STATE_K, STATE_K);
        }
      };
    }
  }
}

DUNE_TASK
