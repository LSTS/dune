//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Luis Venancio (Based on AUV navigation)                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace General
  {
    namespace Profiler
    {
      using DUNE_NAMESPACES;

      //! Navigation states.
      enum StateIndexes
      {
        //! Vehicle north (m).
        STATE_X = 0,
        //! Vehicle east (m).
        STATE_Y = 1,
        //! Vehicle down (m).
        STATE_Z = 2,
        //! Ground Velocity x (m/s).
        STATE_U = 3,
        //! Ground Velocity y (m/s).
        STATE_V = 4,
        //! Velocity z (m/s).
        STATE_W = 5,
        //! Acceleration x (m/s^2).
        STATE_AX = 6,
        //! Acceleration y (m/s^2).
        STATE_AY = 7,
        //! Acceleration z (m/s^2).
        STATE_AZ = 8,
        //! Acceleration x bias (m/s^2).
        STATE_AX_BIAS = 9,
        //! Acceleration y bias (m/s^2).
        STATE_AY_BIAS = 10,
        //! Acceleration z bias (m/s^2).
        STATE_AZ_BIAS = 11,
        //! Revolutions to speed factor.
        STATE_K = 12,
        //! Number of States.
        NUM_STATE
      };

      //! Navigation Output states.
      enum OutputIndexes
      {
        //! Forward Speed (m/s).
        OUT_U = 0,
        //! Transversal Speed (m/s).
        OUT_V = 1,
        //! Downward Speed (m/s).
        OUT_W = 2,
        //! Forward Acceleration (m/s^2).
        OUT_AX = 3,
        //! Transversal Acceleration (m/s^2).
        OUT_AY = 4,
        //! Downward Acceleration (m/s^2).
        OUT_AZ = 5,
        //! GPS x (m).
        OUT_GPS_X = 6,
        //! GPS y (m).
        OUT_GPS_Y = 7,
        //! Number of Outputs (without LBL).
        NUM_OUT = 8
      };

      //! Process Noise parameters.
      enum ProcessNoiseIndexes
      {
        PN_POSITION = 0,
        PN_SPEED = 1,
        PN_ACCELERATION = 2,
        PN_A_BIAS = 3
      };

      //! Measure Noise parameters.
      enum MeasureNoiseIndexes
      {
        MN_U = 0,
        MN_V = 1,
        MN_W = 2,
        MN_AX = 3,
        MN_AY = 4,
        MN_AZ = 5,
        MN_LBL = 6
      };

      //! State Covariance parameters.
      enum StateCovarianceIndexes
      {
        SC_POSITION = 0,
        SC_SPEED = 1,
        SC_ACCELERATION = 2,
        SC_A_BIAS = 3,
        SC_RPM = 4
      };

      //! GPS accuracy indexes.
      enum GpsAccuracyIndexes
      {
        GPS_BAD_IX = 0,
        GPS_AVG_IX = 1,
        GPS_GOOD_IX = 2,
        GPS_PURE_IX = 3
      };

      //! GPS Horizontal Accuracy (HACC) threshold values.
      enum GpsAccuracyValues
      {
        GPS_BAD = 10,
        GPS_AVG = 8,
        GPS_GOOD = 4
      };

      //! %Task arguments.
      struct Arguments
      {
        //! GPS measurement noise covariance values.
        std::vector<double> gps_noise;
        //! USBL measurement noise covariance value.
        double usbl_noise;
        //! IMU entity label.
        std::string elabel_imu;
        //! Revolutions to speed factor.
        float rpm_ini;
        //! Maximum revolutions to speed variation.
        float rpm_max;
        //! Abort if navigation exceeds maximum uncertainty.
        bool abort;
        //! Activate RPM to m/s estimation
        bool rpm_estimation;
        //!  Activate RPM to m/s % limit on estimation
        bool speed_relation_Limit;
        //!  Value RPM to m/s limit on estimation
        double speed_relation_limit_value;
        //!  Distance of Depth sensor to the vehicle pitch rotation axis 
        float distance_depth_sensor;

      };

      struct Task: public DUNE::Navigation::BasicNavigation
      {
        //! Periodic GPS fix reading check.
        bool m_gps_reading;
        //! USBL fix reading check.
        bool m_usbl_reading;
        //! Task arguments.
        Arguments m_args;
        //! Integrated velocity
        double integrated_velocity[3];
        //! Pointer to speed model for speed conversions
        const Plans::SpeedModel* m_speed_model;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Navigation::BasicNavigation(name, ctx)
        {
          param("Process Noise Covariance", m_process_noise)
          .defaultValue("")
          .size(4)
          .description("Kalman Filter process noise covariance values");

          param("GPS Noise Covariance", m_args.gps_noise)
          .defaultValue("")
          .size(4)
          .description("Kalman Filter GPS noise covariance values");

          param("USBL Noise Covariance", m_args.usbl_noise)
          .defaultValue("100.0")
          .minimumValue("0.0")
          .description("Kalman Filter USBL noise covariance value");

          param("Measure Noise Covariance", m_measure_noise)
          .defaultValue("")
          .size(7)
          .description("Kalman Filter measurement noise covariance values");

          param("State Covariance Initial State", m_state_cov)
          .defaultValue("")
          .size(5)
          .description("Kalman Filter State Covariance initial values");

          param("Revolutions to speed factor", m_args.rpm_ini)
          .defaultValue("1.2e-3")
          .minimumValue("0.8e-3")
          .maximumValue("2.0e-3")
          .description("Kalman Filter initial revolutions to speed factor value");

          param("Revolutions to speed variation", m_args.rpm_max)
          .defaultValue("6e-4")
          .minimumValue("4e-4")
          .maximumValue("8e-4")
          .description("Kalman Filter revolutions to speed maximum allowed variation");

          param("Abort if Uncertainty Exceeded", m_args.abort)
          .defaultValue("true")
          .description("Abort if position uncertainty is exceeded");

          param("Entity Label - IMU", m_args.elabel_imu)
          .description("Entity label of the IMU");

          param("Depth sensor localization in x axis", m_args.distance_depth_sensor)
          .defaultValue("0.0")
          .minimumValue("0.0")
          .maximumValue("2.0")
          .description("Depth sensor localization in x axis in meters- used for depth correction due to pitch");

          param("Rpm to speed estimation", m_args.rpm_estimation)
          .defaultValue("true")
          .description("");

          param("Activate speed to rpm estimation limit", m_args.speed_relation_Limit)
          .defaultValue("false")
          .description("");

          param("speed to rpm estimation percentage limit", m_args.speed_relation_limit_value)
          .defaultValue("15")
          .minimumValue("1")
          .maximumValue("100")
          .description("speed to rpm maximum diference between estimation and speed model");

          // Extended Kalman Filter initialization.
          m_kal.reset(NUM_STATE, NUM_OUT);
          resetKalman();
        }

        void
        onUpdateParameters(void)
        {
          BasicNavigation::onUpdateParameters();

          // Initialize Process and Measure Covariances matrices
          m_kal.setProcessNoise(STATE_X, m_process_noise[PN_POSITION]);
          m_kal.setProcessNoise(STATE_Y, m_process_noise[PN_POSITION]);
          m_kal.setProcessNoise(STATE_Z, m_process_noise[PN_POSITION]);
          m_kal.setProcessNoise(STATE_U, m_process_noise[PN_SPEED]);
          m_kal.setProcessNoise(STATE_V, m_process_noise[PN_SPEED]);
          m_kal.setProcessNoise(STATE_W, m_process_noise[PN_SPEED]);

          //Acceleration
          m_kal.setProcessNoise(STATE_AX, m_process_noise[PN_ACCELERATION]);
          m_kal.setProcessNoise(STATE_AY, m_process_noise[PN_ACCELERATION]);
          m_kal.setProcessNoise(STATE_AZ, m_process_noise[PN_ACCELERATION]);
          m_kal.setProcessNoise(STATE_AX_BIAS, m_process_noise[PN_A_BIAS]);
          m_kal.setProcessNoise(STATE_AY_BIAS, m_process_noise[PN_A_BIAS]);
          m_kal.setProcessNoise(STATE_AZ_BIAS, m_process_noise[PN_A_BIAS]);

          m_kal.setMeasurementNoise(OUT_U, m_measure_noise[MN_U]);
          m_kal.setMeasurementNoise(OUT_V, m_measure_noise[MN_V]);
          m_kal.setMeasurementNoise(OUT_W, m_measure_noise[MN_W]);
          m_kal.setMeasurementNoise(OUT_AX, m_measure_noise[MN_AX]);
          m_kal.setMeasurementNoise(OUT_AY, m_measure_noise[MN_AY]);
          m_kal.setMeasurementNoise(OUT_AZ, m_measure_noise[MN_AZ]);
          m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_GOOD_IX]);
          m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_GOOD_IX]);

          for (unsigned i = 0; i < m_ranging.getSize(); i++)
            m_kal.setMeasurementNoise(NUM_OUT + i, m_measure_noise[MN_LBL]);
        }

        void
        onResourceInitialization(void)
        {
          BasicNavigation::onResourceInitialization();
          startSpeedModel(&m_ctx.config);
        }

        void
        onResourceRelease(void)
        {
          BasicNavigation::onResourceRelease();
          Memory::clear(m_speed_model);
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
            m_imu_eid = std::numeric_limits<unsigned>::max();
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
          if (m_imu_eid == std::numeric_limits<unsigned>::max())
            as.state = IMC::AlignmentState::AS_NOT_SUPPORTED;

          dispatch(as);
        }

        bool
        setup(void)
        {
          BasicNavigation::setup();

          m_kal.setState(STATE_K, m_args.rpm_ini);

          // Initial position covariances (GPS and LBL)
          m_kal.setCovariance(STATE_X, m_state_cov[SC_POSITION]);
          m_kal.setCovariance(STATE_Y, m_state_cov[SC_POSITION]);
          m_kal.setCovariance(STATE_Z, m_state_cov[SC_POSITION]);
          m_kal.setCovariance(STATE_U, m_state_cov[SC_SPEED]);
          m_kal.setCovariance(STATE_V, m_state_cov[SC_SPEED]);
          m_kal.setCovariance(STATE_W, m_state_cov[SC_SPEED]);

          // Acceleration
          m_kal.setCovariance(STATE_AX, m_state_cov[SC_ACCELERATION]);
          m_kal.setCovariance(STATE_AY, m_state_cov[SC_ACCELERATION]);
          m_kal.setCovariance(STATE_AZ, m_state_cov[SC_ACCELERATION]);
          m_kal.setCovariance(STATE_AX_BIAS, m_state_cov[SC_A_BIAS]);
          m_kal.setCovariance(STATE_AY_BIAS, m_state_cov[SC_A_BIAS]);
          m_kal.setCovariance(STATE_AZ_BIAS, m_state_cov[SC_A_BIAS]);

          m_kal.setCovariance(STATE_K, m_state_cov[SC_RPM]);

          integrated_velocity[AXIS_X] = 0;
          integrated_velocity[AXIS_Y] = 0;
          integrated_velocity[AXIS_Z] = 0;

          return true;
        }

        void
        reset(void)
        {
          BasicNavigation::reset();
          m_gps_reading = false;
          m_usbl_reading = false;

          integrated_velocity[AXIS_X] = 0;
          integrated_velocity[AXIS_Y] = 0;
          integrated_velocity[AXIS_Z] = 0;
        }

        void
        onConsumeLblConfig(void)
        {
          if (m_kal.resize(NUM_OUT + m_ranging.getSize()))
            Task::onUpdateParameters();
        }

        void
        updateKalmanGpsParameters(double hacc)
        {
          if (hacc > GPS_BAD)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_BAD_IX]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_BAD_IX]);
          }
          if (hacc > GPS_AVG && hacc <= GPS_BAD)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_AVG_IX]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_AVG_IX]);
          }
          if (hacc > GPS_GOOD && hacc <= GPS_AVG)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_GOOD_IX]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_GOOD_IX]);
          }
          if (hacc <= GPS_GOOD)
          {
            m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_PURE_IX]);
            m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_PURE_IX]);
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
        runKalmanUSBL(double x, double y)
        {
          // if there's gps, ignore usbl.
          if (!m_time_without_gps.overflow())
            return;

          m_usbl_reading = true;

          // set kalman.
          m_kal.setMeasurementNoise(OUT_GPS_X, m_args.usbl_noise);
          m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.usbl_noise);

          m_kal.setOutput(OUT_GPS_X, x);
          m_kal.setOutput(OUT_GPS_Y, y);
        }

        // DVL is not used. This is useless...
        void
        getSpeedOutputStates(unsigned* u, unsigned* v)
        {
          // *u = OUT_U;
          // *v = OUT_V;
        }

        unsigned
        getNumberOutputs(void)
        {
          return NUM_OUT;
        }

        double
        getBiasedAcceleration(uint8_t axis)
        {
          return m_kal.getState(STATE_AX + axis) + m_kal.getState(STATE_AX_BIAS + axis);
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
          m_kal.setCovarianceTransition((a * tstep).expmts());

          // Kalman Prediction.
          m_kal.predict();

          // GPS innovation matrix.
          if (m_gps_reading || m_usbl_reading)
          {
            // Reset GPS counter.
            if (m_gps_reading)
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
          if (!m_time_without_accel.overflow())
          {
            setAccelerationObservation();
            
            m_kal.setOutput(OUT_AX, getAcceleration(AXIS_X));
            m_kal.setOutput(OUT_AY, getAcceleration(AXIS_Y));
            m_kal.setOutput(OUT_AZ, getAcceleration(AXIS_Z));

            m_kal.setInnovation(OUT_AX, m_kal.getOutput(OUT_AX) - getBiasedAcceleration(AXIS_X));
            m_kal.setInnovation(OUT_AY, m_kal.getOutput(OUT_AY) - getBiasedAcceleration(AXIS_Y));
            m_kal.setInnovation(OUT_AZ, m_kal.getOutput(OUT_AZ) - getBiasedAcceleration(AXIS_Z));
          }
          else if (m_time_without_gps.overflow())
          {
            setVelocityObservation();

            double w = 0.0;
            double speed_m  = getRpmToMs(m_rpm);
            if(m_args.rpm_estimation)
            {
              w = m_rpm * m_kal.getState(STATE_K) * std::cos(getEuler(AXIS_Y));
              if(m_args.speed_relation_Limit)
              {
                double speedR = (std::abs(w) - std::abs(speed_m))/ std::abs(speed_m) * 100;
                if (speedR > m_args.speed_relation_limit_value)
                  w = speed_m;
              }
            }
            else
            {
              w = speed_m;
            }
            m_kal.setInnovation(OUT_U, 0 - m_kal.getState(STATE_U));
            m_kal.setInnovation(OUT_V, 0 - m_kal.getState(STATE_V));
            m_kal.setInnovation(OUT_W, w - m_kal.getState(STATE_W));
          }
          else
          {
            setVelocityObservation();

            // Use GPS speed over ground.
            if (m_gps_reading)
            {
              m_kal.setInnovation(OUT_U, m_gps_sog - m_kal.getState(STATE_U));
              m_kal.setInnovation(OUT_V, 0 - m_kal.getState(STATE_V));
              m_kal.setObservation(OUT_W, STATE_W, 0.0);
            }
            else
            {
              m_kal.setObservation(OUT_U, STATE_U, 0.0);
              m_kal.setObservation(OUT_V, STATE_V, 0.0);
              m_kal.setObservation(OUT_W, STATE_W, 0.0);
            }
          }

          // Extended Kalman Filter update with no threshold defined.
          m_kal.update(0.0);

          // Limit revolutions to speed factor.
          float k_lim = trimValue(m_kal.getState(STATE_K),
                                  m_args.rpm_ini - m_args.rpm_max,
                                  m_args.rpm_ini + m_args.rpm_max);

          m_kal.setState(STATE_K, k_lim);

          checkUncertainty(m_args.abort);

          logData();
          reportToBus();

          // Reset variables.
          updateBuffers(c_wma_filter);
          m_gps_reading = false;
          m_usbl_reading = false;
          resetKalman();
        }

        void
        startSpeedModel(Parsers::Config* config)
        {
          try
          {
            m_speed_model = new Plans::SpeedModel(config);
            m_speed_model->validate();
          }
          catch (...)
          {
            Memory::clear(m_speed_model);
            inf(DTR("Nav: speed model invalid"));
          }
        }

        double
        getRpmToMs(double rpm)
        {
          if(m_speed_model != NULL)
            return m_speed_model->toMPS(rpm,IMC::SUNITS_RPM);

          return m_args.rpm_ini*rpm;
        }

        // Reinitialize Extended Kalman Filter transition matrix function.
        void
        setTransition(Matrix& A)
        {
          A.fill(0.0);

          double phi = Angles::normalizeRadian(getEuler(AXIS_X));
          double theta = Angles::normalizeRadian(getEuler(AXIS_Y));
          double yaw = Angles::normalizeRadian(getEuler(AXIS_Z));

          if (m_time_without_accel.overflow() && m_time_without_gps.overflow())
          {
            A(STATE_X, STATE_K) = m_rpm * (std::cos(yaw) * std::cos(phi) * std::sin(theta)
                                            + std::sin(yaw) * std::sin(phi));
            A(STATE_Y, STATE_K) = m_rpm * (std::sin(yaw) * std::cos(phi) * std::sin(theta)
                                            - std::cos(yaw) * std::sin(phi));
            A(STATE_Z, STATE_K) = m_rpm * std::cos(theta) * std::cos(phi);
          }
          else
          {
            A(STATE_X, STATE_U) = std::cos(yaw) * std::cos(theta);
            A(STATE_X, STATE_V) = (std::cos(yaw) * std::sin(theta) * std::sin(phi)
                                   - std::sin(yaw) * std::cos(phi));
            A(STATE_X, STATE_W) = (std::cos(yaw) * std::cos(phi) * std::sin(theta)
                                   + std::sin(yaw) * std::sin(phi));

            A(STATE_Y, STATE_U) = std::sin(yaw) * std::cos(theta);
            A(STATE_Y, STATE_V) = (std::sin(yaw) * std::sin(theta) * std::sin(phi)
                                   + std::cos(yaw) * std::cos(phi));
            A(STATE_Y, STATE_W) = (std::sin(yaw) * std::cos(phi) * std::sin(theta)
                                   - std::cos(yaw) * std::sin(phi));

            A(STATE_Z, STATE_U) = - std::sin(theta);
            A(STATE_Z, STATE_V) = std::cos(theta) * std::sin(phi);
            A(STATE_Z, STATE_W) = std::cos(theta) * std::cos(phi);
          }

          A(STATE_U, STATE_AX) = 1;
          A(STATE_V, STATE_AY) = 1;
          A(STATE_W, STATE_AZ) = 1;
        }

        // Reinitialize Extended Kalman Filter output matrix function.
        void
        resetKalman(void)
        {
          m_kal.resetOutputs();
          m_kal.setObservation(OUT_GPS_X, STATE_X, 1.0);
          m_kal.setObservation(OUT_GPS_Y, STATE_Y, 1.0);

          setAccelerationObservation();
        }

        void
        setVelocityObservation()
        {
          m_kal.setObservation(OUT_AX, STATE_AX, 0.0);
          m_kal.setObservation(OUT_AY, STATE_AY, 0.0);
          m_kal.setObservation(OUT_AZ, STATE_AZ, 0.0);
          m_kal.setObservation(OUT_AX, STATE_AX_BIAS, 0.0);
          m_kal.setObservation(OUT_AY, STATE_AY_BIAS, 0.0);
          m_kal.setObservation(OUT_AZ, STATE_AZ_BIAS, 0.0);

          m_kal.setObservation(OUT_U, STATE_U, 1.0);
          m_kal.setObservation(OUT_V, STATE_V, 1.0);
          m_kal.setObservation(OUT_W, STATE_W, 1.0);
        }

        void
        setAccelerationObservation()
        {
          m_kal.setObservation(OUT_AX, STATE_AX, 1.0);
          m_kal.setObservation(OUT_AY, STATE_AY, 1.0);
          m_kal.setObservation(OUT_AZ, STATE_AZ, 1.0);
          m_kal.setObservation(OUT_AX, STATE_AX_BIAS, 1.0);
          m_kal.setObservation(OUT_AY, STATE_AY_BIAS, 1.0);
          m_kal.setObservation(OUT_AZ, STATE_AZ_BIAS, 1.0);

          m_kal.setObservation(OUT_U, STATE_U, 0.0);
          m_kal.setObservation(OUT_V, STATE_V, 0.0);
          m_kal.setObservation(OUT_W, STATE_W, 0.0);
        }

        void
        logData(void)
        {
          m_estate.psi = Angles::normalizeRadian(getEuler(AXIS_Z));
          m_estate.r = Angles::normalizeRadian(getAngularVelocity(AXIS_Z));
          onDispatchNavigation();

          m_estate.u = m_kal.getState(STATE_U);
          m_estate.v = m_kal.getState(STATE_V);
          m_estate.depth = getDepth() - m_estate.theta * m_args.distance_depth_sensor;
          m_estate.z = m_last_z - m_estate.depth;
          m_estate.w = m_kal.getState(STATE_W);

          // Log Navigation Uncertainty.
          m_uncertainty.u = m_kal.getCovariance(STATE_U);
          m_uncertainty.v = m_kal.getCovariance(STATE_V);
          m_uncertainty.w = m_kal.getCovariance(STATE_W);

          // Log Navigation Data.
          m_navdata.cog = (std::abs(m_kal.getState(STATE_U)) > 0.2 ?
                           std::atan2(m_estate.vy, m_estate.vx) : 0);

          // Navigation error.
          m_navdata.custom_x = m_kal.getState(STATE_AZ);
          m_navdata.custom_y = m_kal.getState(STATE_AZ_BIAS);
          m_navdata.custom_z = m_kal.getCovariance(STATE_AZ_BIAS);
        }
      };
    }
  }
}

DUNE_TASK
