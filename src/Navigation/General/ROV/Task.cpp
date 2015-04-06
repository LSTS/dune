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
// Author: José Braga                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace General
  {
    //! ROV navigation filter.
    namespace ROV
    {
      using DUNE_NAMESPACES;

      //! Navigation state.
      enum StateIndexes
      {
        //! Vehicle North (m).
        STATE_X = 0,
        //! Vehicle East (m).
        STATE_Y = 1,
        //! Ground Velocity x (m/s).
        STATE_U = 2,
        //! Ground Velocity y (m/s).
        STATE_V = 3,
        //! Number of states.
        NUM_STATE = 4
      };

      //! Navigation Output states.
      enum OutputIndexes
      {
        //! DVL Forward Speed (m/s).
        OUT_U = 0,
        //! DVL Transversal Speed (m/s).
        OUT_V = 1,
        //! GPS North (m).
        OUT_GPS_X = 2,
        //! GPS East (m).
        OUT_GPS_Y = 3,
        //! Number of output states.
        NUM_OUT = 4
      };

      //! Process Noise parameters.
      enum ProcessNoiseIndexes
      {
        PN_POSITION = 0,
        PN_SPEED = 1
      };

      //! Measure Noise parameters.
      enum MeasureNoiseIndexes
      {
        MN_U = 0,
        MN_V = 1,
        MN_GPS = 2,
        MN_LBL = 3
      };

      //! State Covariance parameters.
      enum StateCovarianceIndexes
      {
        SC_POSITION = 0,
        SC_SPEED = 1
      };

      struct Task: public DUNE::Navigation::BasicNavigation
      {
        //! Periodic GPS fix reading check.
        bool m_gps_reading;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Navigation::BasicNavigation(name, ctx)
        {
          param("Process Noise Covariance", m_process_noise)
          .defaultValue("")
          .size(2)
          .description("Kalman Filter Process Noise Covariance values");

          param("Measure Noise Covariance", m_measure_noise)
          .defaultValue("")
          .size(4)
          .description("Kalman Filter Measurement Noise Covariance values");

          param("State Covariance Initial State", m_state_cov)
          .defaultValue("")
          .size(2)
          .description("Kalman Filter State Covariance initial values");

          // Extended Kalman Filter initialization.
          m_kal.reset(NUM_STATE, NUM_OUT);
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
          BasicNavigation::onUpdateParameters();

          // Initialize Process and Measure Covariances matrices
          m_kal.setProcessNoise(STATE_X, m_process_noise[PN_POSITION]);
          m_kal.setProcessNoise(STATE_Y, m_process_noise[PN_POSITION]);
          m_kal.setProcessNoise(STATE_U, m_process_noise[PN_SPEED]);
          m_kal.setProcessNoise(STATE_V, m_process_noise[PN_SPEED]);

          m_kal.setMeasurementNoise(OUT_U, m_measure_noise[MN_U]);
          m_kal.setMeasurementNoise(OUT_V, m_measure_noise[MN_V]);
          m_kal.setMeasurementNoise(OUT_GPS_X, m_measure_noise[MN_GPS]);
          m_kal.setMeasurementNoise(OUT_GPS_Y, m_measure_noise[MN_GPS]);

          for (unsigned i = 0; i < m_ranging.getSize(); i++)
            m_kal.setMeasurementNoise(NUM_OUT + i, m_measure_noise[MN_LBL]);
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
          BasicNavigation::onResourceInitialization();
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
          BasicNavigation::onResourceRelease();
        }

        void
        onConsumeLblConfig(void)
        {
          if (m_kal.resize(NUM_OUT + m_ranging.getSize()))
            Task::onUpdateParameters();
        }

        void
        runKalmanGPS(double x, double y)
        {
          m_gps_reading = true;

          // Define Measurements matrix - GPS
          m_kal.setOutput(OUT_GPS_X, x);
          m_kal.setOutput(OUT_GPS_Y, y);
        }

        unsigned
        getNumberOutputs(void)
        {
          return NUM_OUT;
        }

        void
        getSpeedOutputStates(unsigned* u, unsigned* v)
        {
          *u = OUT_U;
          *v = OUT_V;
        }

        bool
        setup(void)
        {
          BasicNavigation::setup();

          // State covariance.
          m_kal.setCovariance(STATE_X, m_state_cov[SC_POSITION]);
          m_kal.setCovariance(STATE_Y, m_state_cov[SC_POSITION]);
          m_kal.setCovariance(STATE_U, m_state_cov[SC_SPEED]);
          m_kal.setCovariance(STATE_V, m_state_cov[SC_SPEED]);
          return true;
        }

        void
        reset(void)
        {
          BasicNavigation::reset();
          m_gps_reading = false;
        }

        // Reinitialize Extended Kalman Filter transition matrix function.
        void
        setTransition(Matrix& A)
        {
          A.fill(0.0);

          double phi = Angles::normalizeRadian(getEuler(AXIS_X));
          double theta = Angles::normalizeRadian(getEuler(AXIS_Y));
          double yaw = Angles::normalizeRadian(getEuler(AXIS_Z));

          A(STATE_X, STATE_U) = std::cos(yaw) * std::cos(theta);
          A(STATE_X, STATE_V) = (std::cos(yaw) * std::sin(theta) * std::sin(phi)
                                 - std::sin(yaw) * std::cos(phi));
          A(STATE_Y, STATE_U) = std::sin(yaw) * std::cos(theta);
          A(STATE_Y, STATE_V) = (std::sin(yaw) * std::sin(theta) * std::sin(phi)
                                 + std::cos(yaw) * std::cos(phi));
        }

        // Reinitialize Extended Kalman Filter output matrix function.
        void
        resetKalman(void)
        {
          m_kal.resetOutputs();
          m_kal.setObservation(OUT_U, STATE_U, 1.0);
          m_kal.setObservation(OUT_V, STATE_V, 1.0);
          m_kal.setObservation(OUT_GPS_X, STATE_X, 1.0);
          m_kal.setObservation(OUT_GPS_Y, STATE_Y, 1.0);
        }

        void
        logData(void)
        {
          m_estate.psi = Angles::normalizeRadian(getEuler(AXIS_Z));
          m_estate.r = Angles::normalizeRadian(getAngularVelocity(AXIS_Z));
          onDispatchNavigation();

          m_estate.u = m_kal.getState(STATE_U);
          m_estate.v = m_kal.getState(STATE_V);

          // Log Navigation Uncertainty.
          m_uncertainty.u = m_kal.getCovariance(STATE_U, STATE_U);
          m_uncertainty.v = m_kal.getCovariance(STATE_V, STATE_V);

          // Log Navigation Data.
          m_navdata.cog = (std::abs(m_kal.getState(STATE_U)) > 0.2 ?
                           std::atan2(m_estate.vy, m_estate.vx) : 0);

          // Navigation error.
          m_navdata.custom_x = Math::norm(m_kal.getInnovation(OUT_GPS_X),
                                          m_kal.getInnovation(OUT_GPS_Y));
        }

        //! Main loop.
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

          m_kal.setCovarianceTransition((a * tstep).expmts());
          m_kal.setStateTransition((a * tstep).expmts());

          // Kalman Prediction.
          m_kal.predict();

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

          checkUncertainty();

          logData();
          reportToBus();

          // Reset variables.
          updateBuffers(c_wma_filter);
          m_gps_reading = false;
          m_valid_gv = false;
          m_valid_wv = false;
          resetKalman();
        }
      };
    }
  }
}

DUNE_TASK
