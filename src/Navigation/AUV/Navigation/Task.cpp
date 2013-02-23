//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Aníbal Matos (original LBL filter circa 1999)                    *
// Author: Ricardo Martins (enhancements)                                   *
// Author: Pedro Vaz Teixeira (state machine)                               *
// Author: Jorge Estrela da Silva (port and enhancements, velocity updates) *
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: Task.cpp 12955 2013-02-18 17:02:31Z jbraga                       $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Navigation
{
  namespace AUV
  {
    //! Original AUV navigation filter.
    namespace Navigation
    {
      //! Navigation states.
      enum StateIndexes
      {
        //! Vehicle north (m).
        STATE_X = 0,
        //! Vehicle east (m).
        STATE_Y = 1,
        //! RPM multiplier (m/s/rpm).
        STATE_K = 2,
        //! Water speed north (m/s).
        STATE_WX = 3,
        //! Water speed east (m/s).
        STATE_WY = 4,
        //! Count of state indexes.
        NUM_STATE = 5
      };

      //! Navigation output states.
      enum OutputIndexes
      {
        //! GPS x (m).
        OUT_GPS_X = 0,
        //! GPS y (m).
        OUT_GPS_Y = 1,
        //! LBL (m).
        OUT_LBL = 2,
        //! Number of Outputs (without LBL).
        NUM_OUT = 3
      };

      struct Arguments
      {
        //! Maximum expected currents (m/s).
        float max_current;
        //! Initial RPM to Speed multiplicative factor.
        fp32_t initial_rpm_to_speed;
      };

      struct Task: public DUNE::Navigation::BasicNavigation
      {
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Navigation::BasicNavigation(name, ctx)
        {
          //! Declare configuration parameters.
          param("Maximum expected currents", m_args.max_current)
          .units(Units::MeterPerSecond)
          .defaultValue("0.5")
          .description("Maximum expected ocean currents");

          param("Process Noise Covariance", m_process_noise)
          .defaultValue("")
          .size(2)
          .description("Kalman Filter Process Noise Covariance values");

          param("Measure Noise Covariance", m_measure_noise)
          .defaultValue("10.0")
          .minimumValue("8.0")
          .maximumValue("400.0")
          .size(1)
          .description("Kalman Filter Measurement Noise Covariance values");

          param("State Covariance Initial State", m_state_cov)
          .defaultValue("")
          .size(3)
          .description("Kalman Filter State Covariance initial values");

          param("RPM to Speed multiplicative factor", m_args.initial_rpm_to_speed)
          .defaultValue("1.2e-3")
          .description("Kalman Filter initial RPM to Speed multiplicative factor state value");

          // Extended Kalman Filter initialization.
          m_kal.reset(NUM_STATE, NUM_OUT);
          m_kal.resetOutputs();
        }

        void
        onUpdateParameters(void)
        {
          BasicNavigation::onUpdateParameters();

          // Initialize process noise covariances matrix.
          double tstep = 1.0 / getFrequency();
          m_kal.setProcessNoise(STATE_X, STATE_X, m_process_noise[0] * tstep);
          m_kal.setProcessNoise(STATE_Y, STATE_Y, m_process_noise[0] * tstep);
          m_kal.setProcessNoise(STATE_WX, STATE_WX, m_process_noise[1] * tstep);
          m_kal.setProcessNoise(STATE_WY, STATE_WY, m_process_noise[1] * tstep);

          m_kal.setMeasurementNoise(OUT_GPS_X, OUT_GPS_X, m_measure_noise[0]);
          m_kal.setMeasurementNoise(OUT_GPS_Y, OUT_GPS_Y, m_measure_noise[0]);
          m_kal.setMeasurementNoise(OUT_LBL, OUT_LBL, m_measure_noise[0]);
        }

        ~Task(void)
        {
          Task::onResourceRelease();
        }

        void
        onResourceRelease(void)
        {
          BasicNavigation::onResourceRelease();
        }

        void
        onEntityResolution(void)
        {
          BasicNavigation::onEntityResolution();
        }

        void
        onResourceInitialization(void)
        {
          BasicNavigation::onResourceInitialization();
        }

        bool
        setup(void)
        {
          BasicNavigation::setup();

          // Initialize state and covariance EKF matrices.
          m_kal.setState(STATE_K, m_args.initial_rpm_to_speed);
          m_kal.setCovariance(STATE_X, STATE_X, m_state_cov[0]);
          m_kal.setCovariance(STATE_Y, STATE_Y, m_state_cov[0]);
          m_kal.setCovariance(STATE_K, STATE_K, m_state_cov[1]);
          m_kal.setCovariance(STATE_WX, STATE_WX, m_state_cov[2]);
          m_kal.setCovariance(STATE_WY, STATE_WY, m_state_cov[2]);
          return true;
        }

        void
        reset(void)
        {
          BasicNavigation::reset();
        }

        void
        runKalmanGPS(double x, double y)
        {
          // Call EKF update using GPS fix.
          m_kal.resetOutputs();
          m_kal.setObservation(OUT_GPS_X, STATE_X, 1);
          m_kal.setObservation(OUT_GPS_Y, STATE_Y, 1);
          m_kal.setInnovation(STATE_X, x - m_kal.getState(STATE_X));
          m_kal.setInnovation(STATE_Y, y - m_kal.getState(STATE_Y));

          m_kal.update(0.0);
          m_kal.resetOutputs();
          m_time_without_gps.reset();
        }

        void
        runKalmanLBL(int beacon, float range, double dx, double dy, double exp_range)
        {
          // Call EKF update using LBL range.
          (void)beacon;
          m_kal.resetOutputs();
          m_kal.setObservation(OUT_LBL, STATE_X, dx / exp_range);
          m_kal.setObservation(OUT_LBL, STATE_Y, dy / exp_range);

          double k = (m_kal.getObservation() * m_kal.getCovariance() * transpose (m_kal.getObservation()))(0);
          m_navdata.lbl_rej_level = std::max(BasicNavigation::getLblRejectionValue(exp_range), k);

          m_kal.setMeasurementNoise(OUT_LBL, OUT_LBL, m_navdata.lbl_rej_level);
          m_kal.setInnovation(OUT_LBL, range - exp_range);

          if (m_kal.update(m_lbl_threshold) == -1)
          {
            m_lbl_ac.acceptance = IMC::LblRangeAcceptance::RR_ABOVE_THRESHOLD;
            dispatch(m_lbl_ac, DF_KEEP_TIME);
            return;
          }

          m_kal.resetOutputs();
          m_lbl_ac.acceptance = IMC::LblRangeAcceptance::RR_ACCEPTED;
          dispatch(m_lbl_ac, DF_KEEP_TIME);
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

          // Update estimated state.
          BasicNavigation::onDispatchNavigation();

          m_heading += Angles::minimumSignedAngle(m_heading, BasicNavigation::getYaw());
          m_estate.psi = Angles::normalizeRadian(m_heading);

          // Update Euler Angles derivatives when
          // Angular Velocity readings are not available.
          if (!gotAngularReadings())
          {
            m_drv_yaw.update(m_estate.psi);
            m_estate.r = BasicNavigation::produceAngularVelocity(AXIS_Z);
          }
          else
          {
            m_estate.r = BasicNavigation::getAngularVelocity(AXIS_Z);
          }

          // Some (experimental) sanity checks. This is not standard EKF!
          // If any of this conditions is met, some kind of warning should be raised.
          double wx = Math::trimValue(m_kal.getState(STATE_WX), -m_args.max_current, m_args.max_current);
          double wy = Math::trimValue(m_kal.getState(STATE_WY), -m_args.max_current, m_args.max_current);
          m_kal.setState(STATE_WX, wx);
          m_kal.setState(STATE_WY, wy);

          if (m_kal.getCovariance(STATE_WX, STATE_WX) > std::pow(m_args.max_current, 2))
            m_kal.setProcessNoise(STATE_WX, STATE_WX, 0);
          else
            m_kal.setProcessNoise(STATE_WX, STATE_WX, m_process_noise[1] * tstep);
          if (m_kal.getCovariance(STATE_WY, STATE_WY) > std::pow(m_args.max_current, 2))
            m_kal.setProcessNoise(STATE_WY, STATE_WY, 0);
          else
            m_kal.setProcessNoise(STATE_WY, STATE_WY, m_process_noise[1] * tstep);

          // Reset and discretize transition matrix function.
          Matrix a(NUM_STATE, NUM_STATE, 0.0);

          a(STATE_X, STATE_K) = m_rpm * std::cos(m_estate.theta) * std::cos(m_estate.psi);
          a(STATE_Y, STATE_K) = m_rpm * std::cos(m_estate.theta) * std::sin(m_estate.psi);
          a(STATE_X, STATE_WX) = 1.0;
          a(STATE_Y, STATE_WY) = 1.0;
          m_kal.setTransitions((a * tstep).expmts());

          // Run EKF prediction.
          m_kal.predict();

          BasicNavigation::checkUncertainty();

          // Fill and dispatch data.
          m_estate.u = m_rpm * m_kal.getState(STATE_K) * std::cos(m_estate.theta);

          // Consider water speed to get ground speed
          m_estate.vx += m_kal.getState(STATE_WX);
          m_estate.vy += m_kal.getState(STATE_WY);

          // Log Navigation Uncertainty.
          m_uncertainty.u = m_kal.getCovariance(STATE_K, STATE_K);

          // Log Navigation Data.
          m_navdata.custom_x = m_kal.getCovariance(STATE_WX, STATE_WX);
          m_navdata.custom_y = m_kal.getCovariance(STATE_WY, STATE_WY);
          m_navdata.custom_z = m_kal.getState(STATE_K);
          m_navdata.cog = std::atan2(m_estate.vy, m_estate.vx);

          // Fill and dispatch estimated water velocity message.
          m_ewvel.x = m_kal.getState(STATE_WX);
          m_ewvel.y = m_kal.getState(STATE_WY);
          m_ewvel.z = 0;

          BasicNavigation::reportToBus();
          BasicNavigation::updateBuffers(c_wma_filter);
        }
      };
    }
  }
}

DUNE_TASK
