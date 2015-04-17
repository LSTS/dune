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
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Navigation
{
  namespace General
  {
    //! %LBL position estimator.
    //! This task aims to estimate acoustic transducer horizontal
    //! displacement (online estimation) starting from an a-priori
    //! known location. The correction is only performed when the
    //! vehicle (our reference) is receiving valid GPS fixes.
    //!
    //! @author José Braga
    namespace LBL
    {
      //! %Task arguments.
      struct Arguments
      {
        //! LBL threshold.
        float lbl_threshold;
        //! State covariance.
        float state_cov;
        //! Measurement noise covariance.
        float lbl_mnoise;
        //! Process noise covariance.
        float lbl_pnoise;
        //! GPS timeout.
        float gps_timeout;
        //! Maximum Valid Horizontal Accuracy index.
        float max_hacc;
        //! LBL rejection constants.
        std::vector<float> k_rej;
        //! Distance between LBL and GPS.
        float dist_lbl_gps;
      };

      struct Task: public Tasks::Task
      {
        //! Last North reference displacement.
        double m_last_n;
        //! Last East reference displacement.
        double m_last_e;
        //! Last Vehicle Depth value (m).
        float m_last_depth;
        //! Vehicle heading.
        double m_yaw;
        //! LBL beacon information.
        DUNE::Navigation::Ranging m_ranging;
        //! Navigation origin.
        IMC::GpsFix* m_origin;
        //! LBL position estimates.
        IMC::LblEstimate* m_estimate[DUNE::Navigation::c_max_transponders];
        //! GPS validity bits.
        uint16_t m_gps_val_bits;
        //! Time without GPS sensor readings deadline.
        Time::Counter<double> m_time_without_gps;
        //! Kalman Filter matrices.
        KalmanFilter m_kal;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_origin(NULL)
        {
          param("State Covariance Initial State", m_args.state_cov)
          .defaultValue("1.0")
          .minimumValue("1.0")
          .description("Kalman Filter State Covariance initial values");

          param("LBL Threshold", m_args.lbl_threshold)
          .defaultValue("4.0")
          .minimumValue("2.0")
          .description("LBL Threshold value for the LBL level check rejection scheme");

          param("LBL Measure Noise Covariance", m_args.lbl_mnoise)
          .defaultValue("10.0")
          .minimumValue("0.1")
          .description("Kalman Filter LBL Measurement Noise Covariance value");

          param("LBL Process Noise Covariance", m_args.lbl_pnoise)
          .defaultValue("1e-5")
          .minimumValue("0.0")
          .description("Kalman Filter LBL Process Noise Covariance value");

          param("LBL Expected Range Rejection Constants", m_args.k_rej)
          .size(2)
          .description("Constants used in current LBL rejection scheme");

          param("GPS timeout", m_args.gps_timeout)
          .units(Units::Second)
          .defaultValue("3.0")
          .minimumValue("2.0")
          .description("No GPS readings timeout");

          param("GPS Maximum HACC", m_args.max_hacc)
          .defaultValue("6.0")
          .minimumValue("3.0")
          .maximumValue("20.0")
          .description("Maximum Horizontal Accuracy Estimate value accepted for GPS fixes");

          param("Distance Between LBL and GPS", m_args.dist_lbl_gps)
          .units(Units::Meter)
          .defaultValue("0.50")
          .minimumValue("0.0")
          .description("Distance between LBL receiver and GPS in the vehicle");

          for (unsigned i = 0; i < DUNE::Navigation::c_max_transponders; ++i)
            m_estimate[i] = NULL;

          m_last_n = 0.0;
          m_last_e = 0.0;
          m_last_depth = 0.0;
          m_yaw = 0.0;

          m_gps_val_bits = (IMC::GpsFix::GFV_VALID_POS |
                            IMC::GpsFix::GFV_VALID_HDOP |
                            IMC::GpsFix::GFV_VALID_HACC);

          // Register callbacks.
          bind<IMC::EstimatedState>(this);
          bind<IMC::EulerAngles>(this);
          bind<IMC::LblRange>(this);
          bind<IMC::LblConfig>(this);
          bind<IMC::GpsFix>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.gps_timeout))
            m_time_without_gps.setTop(m_args.gps_timeout);
        }

        void
        onResourceInitialization(void)
        {
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_origin);

          for (unsigned i = 0; i < DUNE::Navigation::c_max_transponders; ++i)
            Memory::clear(m_estimate[i]);
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          m_last_depth = msg->depth;

          // Increment process noise covariance.
          m_kal.predict();
        }

        void
        consume(const IMC::EulerAngles* msg)
        {
          m_yaw = msg->psi;
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          // Check fix validity.
          if ((msg->validity & m_gps_val_bits) == 0)
            return;

          // Check Horizontal Accuracy Threshold.
          if (msg->hacc > m_args.max_hacc)
            return;

          // Reset GPS timeout.
          m_time_without_gps.reset();

          if (!isActive())
          {
            // Navigation self-initialisation.
            startFilter(msg);
            return;
          }

          WGS84::displacement(m_origin->lat, m_origin->lon, m_origin->height,
                              msg->lat, msg->lon, msg->height,
                              &m_last_n, &m_last_e);
        }

        void
        consume(const IMC::LblConfig* msg)
        {
          if (msg->op != IMC::LblConfig::OP_SET_CFG)
            return;

          // Save message to cache.
          IMC::CacheControl cop;
          cop.op = IMC::CacheControl::COP_STORE;
          cop.message.set(*msg);
          dispatch(cop);

          m_ranging.setup(msg);

          IMC::MessageList<IMC::LblBeacon>::const_iterator itr = msg->beacons.begin();
          for (unsigned i = 0; itr != msg->beacons.end(); ++itr, ++i)
          {
            if (i >= DUNE::Navigation::c_max_transponders)
              return;

            Memory::clear(m_estimate[i]);

            if (*itr == NULL)
              return;

            Memory::replace(m_estimate[i], new IMC::LblEstimate);

            m_estimate[i]->beacon.set(*itr);
          }

          setup();
        }

        void
        consume(const IMC::LblRange* msg)
        {
          if (!isActive())
            return;

          if (m_time_without_gps.overflow())
            return;

          if (!m_ranging.exists(msg->id) || (msg->id > m_ranging.getSize() - 1))
            return;

          float range = msg->range;

          double dx = m_args.dist_lbl_gps * std::cos(m_yaw) - m_last_n + m_kal.getState(msg->id * 2);
          double dy = m_args.dist_lbl_gps * std::sin(m_yaw) - m_last_e + m_kal.getState(msg->id * 2 + 1);
          double dz = m_ranging.getDepth(msg->id) - m_last_depth;
          double exp_range = std::sqrt(dx * dx + dy * dy + dz * dz);

          m_kal.setObservation(msg->id, msg->id * 2, dx / exp_range);
          m_kal.setObservation(msg->id, msg->id * 2 + 1, dy / exp_range);

          // Outlier Rejection scheme.
          Matrix H(1, 2, 0.0);
          H(0, 0) = dx / exp_range;
          H(0, 1) = dy / exp_range;
          Matrix P(2, 2, 0.0);
          P = m_kal.getCovariance(msg->id * 2, msg->id * 2 + 1,
                                  msg->id * 2, msg->id * 2 + 1);

          // "Outlier Rejection for Autonomous Acoustic Navigation"
          // Jerome Vaganay, John J. Leonard and James G. Bellingham. MIT
          double reject = m_args.k_rej[0] + m_args.k_rej[1] * std::pow(exp_range, 2);
          double R = std::max(reject, (H * P * transpose (H))(0));
          double d = range - exp_range;
          double level = (d * (1 / ((H * P * transpose (H))(0) + R)) * d);

          if (level < m_args.lbl_threshold)
          {
            // Define Output matrix.
            m_kal.setOutput(msg->id, range);
            m_kal.setInnovation(msg->id, range - exp_range);

            // Run Kalman Filter.
            m_kal.update(0.0);

            // Use displacement to get current position fix.
            double x = m_kal.getState(msg->id * 2);
            double y = m_kal.getState(msg->id * 2 + 1);

            double lat = m_origin->lat;
            double lon = m_origin->lon;
            Coordinates::WGS84::displace(x, y, &lat, &lon);

            // Update estimate.
            m_estimate[msg->id]->beacon->lat = lat;
            m_estimate[msg->id]->beacon->lon = lon;
            m_estimate[msg->id]->var_x = m_kal.getCovariance(msg->id * 2);
            m_estimate[msg->id]->var_y = m_kal.getCovariance(msg->id * 2 + 1);

            dispatch(m_estimate[msg->id]);

            spew("beacon %d WGS: %f | %f", msg->id, lat, lon);
            spew("beacon %d COV: %f | %f", msg->id,
                 std::sqrt(m_estimate[msg->id]->var_x),
                 std::sqrt(m_estimate[msg->id]->var_y));
          }
          else
            spew("rejected range from %d", msg->id);

          m_kal.resetOutputs();
        }

        //! Setup filter.
        //! @return true if successful, false otherwise.
        void
        setup(void)
        {
          if (!m_ranging.getSize())
          {
            m_kal.reset(1, 1);
            m_kal.setMeasurementNoise(m_args.lbl_mnoise);
            m_kal.setProcessNoise(m_args.lbl_pnoise);
            m_kal.setCovariance(m_args.state_cov);
            m_kal.resetState();
            return;
          }

          m_kal.reset(m_ranging.getSize() * 2, m_ranging.getSize());

          // Initialize Kalman Filter.
          m_kal.setMeasurementNoise(m_args.lbl_mnoise);
          m_kal.setProcessNoise(m_args.lbl_pnoise);
          m_kal.setCovariance(m_args.state_cov);
          m_kal.resetState();

          for (unsigned i = 0; i < m_ranging.getSize(); i++)
          {
            double x = 0.0;
            double y = 0.0;
            double z = 0.0;

            m_ranging.getLocation(i, &x, &y, &z);

            m_kal.setState(i * 2, x);
            m_kal.setState(i * 2 + 1, y);
          }

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          spew("setup completed");
        }

        //! Start filtering.
        //! @param[in] msg GPS fix to serve as navigation origin.
        void
        startFilter(const IMC::GpsFix* msg)
        {
          // Save message to cache.
          IMC::CacheControl cop;
          cop.op = IMC::CacheControl::COP_STORE;
          cop.message.set(*msg);
          dispatch(cop);

          requestActivation();

          if (m_origin != NULL)
          {
            // Get vehicle fix.
            double vlat = m_origin->lat;
            double vlon = m_origin->lon;
            Coordinates::WGS84::displace(m_last_n, m_last_e, &vlat, &vlon);

            // Update current vehicle displacement according to new origin.
            WGS84::displacement(msg->lat, msg->lon, 0.0,
                                vlat, vlon, 0.0,
                                &m_last_n, &m_last_e);
          }

          Memory::replace(m_origin, new IMC::GpsFix(*msg));

          m_ranging.updateOrigin(m_origin);

          // Initial state
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_LBL_CFG);
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(1.0);
          }
        }
      };
    }
  }
}

DUNE_TASK
