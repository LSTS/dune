//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
        //! Position process noise when tactical grade IMU is enabled.
        float pos_noise;
        //! LBL measurement noise when tactical grade IMU enabled.
        float lbl_noise;
        //! GPS measurement noise covariance values.
        std::vector<double> gps_noise;
        //! USBL measurement noise covariance value.
        double usbl_noise;
        //! IMU entity label.
        std::string elabel_imu;
        //! Number of samples to average forward speed.
        unsigned navg_speed;
        //! Revolutions to speed factor.
        float rpm_ini;
        //! Maximum revolutions to speed variation.
        float rpm_max;
        //! Heading bias uncertainty alignment threshold.
        double alignment_index;
        //! Heading alignment sensor diff threshold
        double alignment_diff;
        //! Diff threshold - buffer of values for threshold validation
        double heading_buffer_value;
        //! Abort if navigation exceeds maximum uncertainty.
        bool abort;
        //! Activate RPM to m/s estimation
        bool rpm_estimation;
        //!  Activate RPM to m/s % limit on estimation
        bool speed_relation_Limit;
        //!  Value RPM to m/s limit on estimation
        double speed_relation_limit_value;
        //!  Distance of Depth sensor to the veicle pitch rotation axis 
        float distance_depth_sensor;

      };

      struct Task: public DUNE::Navigation::BasicNavigation
      {
        //! Periodic GPS fix reading check.
        bool m_gps_reading;
        //! USBL fix reading check.
        bool m_usbl_reading;
        //! Moving average for vehicle forward speed.
        MovingAverage<double>* m_avg_speed;
        //! Task arguments.
        Arguments m_args;
        //! Heading alignment buffer
        int m_heading_buffer;
        //! Pointer to speed model for speed conversions
        const Plans::SpeedModel* m_speed_model;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Navigation::BasicNavigation(name, ctx),
          m_avg_speed(nullptr),
          m_heading_buffer(0),
          m_speed_model(nullptr)
        {
          // Declare configuration parameters.
          param("Position Noise Covariance with IMU", m_args.pos_noise)
          .defaultValue("0.0")
          .minimumValue("0.0")
          .description("Position process noise covariance value when IMU is available");

          param("LBL Noise Covariance with IMU", m_args.lbl_noise)
          .defaultValue("0.1")
          .minimumValue("0.0")
          .description("LBL measurement noise covariance value when IMU is available");

          param("Process Noise Covariance", m_process_noise)
          .defaultValue("")
          .size(6)
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
          .size(5)
          .description("Kalman Filter measurement noise covariance values");

          param("State Covariance Initial State", m_state_cov)
          .defaultValue("")
          .size(5)
          .description("Kalman Filter State Covariance initial values");

          param("Speed Moving Average Samples", m_args.navg_speed)
          .defaultValue("10")
          .minimumValue("5")
          .maximumValue("20")
          .description("Number of moving average samples to smooth forward speed");

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

          param("Heading Bias Alignment Index", m_args.alignment_index)
          .defaultValue("1e-5")
          .minimumValue("1e-6")
          .maximumValue("1e-4")
          .description("Heading bias uncertainty alignment threshold");

          param("Heading alignment sensor diff", m_args.alignment_diff)
          .defaultValue("15")
          .minimumValue("1")
          .maximumValue("180")
          .description("Heading alignment sensor diff threshold");

          param("Heading buffer value", m_args.heading_buffer_value)
          .defaultValue("200")
          .minimumValue("1")
          .description("Heading buffer value - how many repetitions to aligned");

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

          // Register callbacks
          bind<IMC::EntityActivationState>(this);
        }

        void
        onUpdateParameters(void) override
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
          m_kal.setMeasurementNoise(OUT_GPS_X, m_args.gps_noise[GPS_GOOD_IX]);
          m_kal.setMeasurementNoise(OUT_GPS_Y, m_args.gps_noise[GPS_GOOD_IX]);

          for (unsigned i = 0; i < m_ranging.getSize(); i++)
            m_kal.setMeasurementNoise(NUM_OUT + i, m_measure_noise[MN_LBL]);

          if (m_dead_reckoning)
          {
            // Position process noise covariance value if IMU is available.
            m_kal.setProcessNoise(STATE_X, m_args.pos_noise);
            m_kal.setProcessNoise(STATE_Y, m_args.pos_noise);
            m_kal.setProcessNoise(STATE_PSI_BIAS, m_process_noise[PN_PSI_BIAS]);

            // LBL noise.
            for (unsigned i = 0; i < m_ranging.getSize(); i++)
              m_kal.setMeasurementNoise(NUM_OUT + i, m_args.lbl_noise);
          }
        }

        void
        onResourceInitialization(void) override
        {
          BasicNavigation::onResourceInitialization();
          m_avg_speed = new MovingAverage<double>(m_args.navg_speed);
          startSpeedModel(&m_ctx.config);
        }

        void
        onResourceRelease(void) override
        {
          BasicNavigation::onResourceRelease();
          Memory::clear(m_avg_speed);
          Memory::clear(m_speed_model);
        }

        void
        onEntityResolution(void) override
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

          as.state = m_aligned ? IMC::AlignmentState::AS_ALIGNED : IMC::AlignmentState::AS_NOT_ALIGNED;

          // No IMU unit available.
          if (m_imu_eid == std::numeric_limits<unsigned>::max())
            as.state = IMC::AlignmentState::AS_NOT_SUPPORTED;

          dispatch(as);
        }

        void
        consume(const IMC::EntityActivationState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          if (msg->getSourceEntity() != m_imu_eid)
            return;

          if ((msg->state == IMC::EntityActivationState::EAS_ACTIVE ||
               msg->state == IMC::EntityActivationState::EAS_ACT_DONE))
          {
            // IMU already activated.
            if (m_dead_reckoning)
              return;

            // Dead reckoning mode.
            m_dead_reckoning = true;
            debug("start navigation alignment");

            // Reinitialize state covariance matrix value.
            m_kal.resetCovariance(STATE_PSI_BIAS);
            m_kal.setCovariance(STATE_PSI_BIAS, m_state_cov[SC_BIASES]);

            // Position process noise covariance value if IMU is available.
            m_kal.setProcessNoise(STATE_X, m_args.pos_noise);
            m_kal.setProcessNoise(STATE_Y, m_args.pos_noise);
            m_kal.setProcessNoise(STATE_PSI_BIAS, m_process_noise[PN_PSI_BIAS]);

            // LBL noise.
            for (unsigned i = 0; i < m_ranging.getSize(); i++)
              m_kal.setMeasurementNoise(NUM_OUT + i, m_args.lbl_noise);
          }
          else
          {
            if (!m_dead_reckoning)
              return;

            // Stop integrate heading rates and use AHRS data.
            m_dead_reckoning = false;
            m_aligned = false;
            debug("navigation not aligned");

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

          m_kal.setState(STATE_K, m_args.rpm_ini);

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
          m_usbl_reading = false;
        }

        double
        getBiasedHeading(void) const
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
          if (m_valid_gv || m_valid_wv)
          {
            runKalmanDVL();
            m_kal.setInnovation(OUT_U, m_kal.getOutput(OUT_U) - m_kal.getState(STATE_U));
            m_kal.setInnovation(OUT_V, m_kal.getOutput(OUT_V) - m_kal.getState(STATE_V));
          }
          else if (m_time_without_gps.overflow() && m_time_without_dvl.overflow())
          {
            double u = 0.0;
            double speed_m  = getRpmToMs(m_rpm);
            if(m_args.rpm_estimation)
            {
              u = m_rpm * m_kal.getState(STATE_K) * std::cos(getEuler(AXIS_Y));
              if(m_args.speed_relation_Limit)
              {
                double speedR = (std::abs(u) - std::abs(speed_m))/ std::abs(speed_m) * 100;
                if (speedR > m_args.speed_relation_limit_value)
                  u = speed_m;
              }
            }
            else
            {
              u = speed_m;
            }
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


          // Do not estimate bias using LBL fixes.
          double bias = m_kal.getCovariance(STATE_PSI_BIAS);
          if (m_lbl_reading)
            m_kal.resetCovariance(STATE_PSI_BIAS);

          // Extended Kalman Filter update with no threshold defined.
          m_kal.update(0.0);

          // Restore bias estimation.
          if (m_lbl_reading)
          {
            m_kal.setCovariance(STATE_PSI_BIAS, bias + m_process_noise[PN_PSI_BIAS]);
            m_lbl_reading = false;
          }

          // Limit revolutions to speed factor.
          float k_lim = trimValue(m_kal.getState(STATE_K),
                                  m_args.rpm_ini - m_args.rpm_max,
                                  m_args.rpm_ini + m_args.rpm_max);

          m_kal.setState(STATE_K, k_lim);

          // Check alignment threshold index.
          double diff_psi = std::abs(Angles::normalizeRadian(Angles::normalizeRadian(m_kal.getState(STATE_PSI))
                                                             - Angles::normalizeRadian(getEuler(AXIS_Z)) ) );


          if (m_dead_reckoning)
          {
            if (m_kal.getCovariance(STATE_PSI_BIAS) < m_args.alignment_index &&
                diff_psi < Angles::normalizeRadian(Angles::radians(m_args.alignment_diff)) )
            {
              m_aligned = true;
              m_heading_buffer = 0;
            }
            else
            {
              if (m_aligned)
              {
                m_heading_buffer++;
                if (m_heading_buffer > m_args.heading_buffer_value)
                {
                  sendDeActiveIMU();
                  war(DTR("navigation not aligned - Automatic IMU poweroff"));
                  m_aligned  = false;
                  m_heading_buffer=0;
                }
              }
            }
          }

          checkUncertainty(m_args.abort);

          logData();
          reportToBus();

          // Reset variables.
          updateBuffers(c_wma_filter);
          m_gps_reading = false;
          m_usbl_reading = false;
          m_valid_gv = false;
          m_valid_wv = false;
          resetKalman();
        }

        void
        sendDeActiveIMU(void)
        {
          IMC::EntityParameter p;
          p.name = "Active";
          p.value = "false";
          IMC::SetEntityParameters msg;
          msg.name = m_args.elabel_imu ;
          msg.params.push_back(p);
          dispatch(msg);
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
        getRpmToMs(double rpm) const
        {
          if (m_speed_model != nullptr)
            return m_speed_model->toMPS(rpm, IMC::SUNITS_RPM);

          return m_args.rpm_ini * rpm;
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
          m_estate.depth = getDepth() - m_estate.theta * m_args.distance_depth_sensor;
          m_estate.z = m_last_z + m_estate.depth;

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
