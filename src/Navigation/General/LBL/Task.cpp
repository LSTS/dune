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
        //! Covariance of the LBL noise.
        float lbl_noise;
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
        //! Sum of weights of depth readings between prediction cycles.
        float m_depth_readings;
        //! "Buffers" for depth readings.
        double m_depth_bfr;
        //! Depth offset value.
        float m_depth_offset;
        //! Vehicle heading.
        double m_yaw;
        //! LBL beacon information.
        DUNE::Navigation::LblBeaconXYZ* m_beacons[DUNE::Navigation::c_max_beacons];
        //! LblConfig data has been logged.
        bool m_lbl_log_beacons;
        //! LblConfig buffer.
        IMC::LblConfig m_lbl_cfg;
        //! Number of beacons.
        unsigned m_num_beacons;
        //! Navigation origin.
        IMC::GpsFix* m_origin;
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
          .description("Kalman Filter State Covariance initial values");

          param("LBL Threshold", m_args.lbl_threshold)
          .defaultValue("4.0")
          .description("LBL Threshold value for the LBL level check rejection scheme");

          param("LBL Measure Noise Covariance", m_args.lbl_noise)
          .defaultValue("10.0")
          .description("Kalman Filter LBL Measurement Noise Covariance value");

          param("LBL Expected Range Rejection Constants", m_args.k_rej)
          .size(2)
          .description("Constants used in current LBL rejection scheme");

          param("GPS timeout", m_args.gps_timeout)
          .units(Units::Second)
          .defaultValue("3.0")
          .description("No GPS readings timeout");

          param("GPS Maximum HACC", m_args.max_hacc)
          .defaultValue("6.0")
          .minimumValue("3.0")
          .maximumValue("20.0")
          .description("Maximum Horizontal Accuracy Estimate value accepted for GPS fixes");

          param("Distance Between LBL and GPS", m_args.dist_lbl_gps)
          .units(Units::Meter)
          .defaultValue("0.50")
          .description("Distance between LBL receiver and GPS in the vehicle");

          // Initialize some variables.
          std::memset(m_beacons, 0, sizeof(m_beacons));
          m_num_beacons = 0;

          m_gps_val_bits = (IMC::GpsFix::GFV_VALID_POS |
                            IMC::GpsFix::GFV_VALID_HDOP |
                            IMC::GpsFix::GFV_VALID_HACC);

          // Register callbacks.
          bind<IMC::Depth>(this);
          bind<IMC::DepthOffset>(this);
          bind<IMC::EulerAngles>(this);
          bind<IMC::LblRange>(this);
          bind<IMC::LblConfig>(this);
          bind<IMC::GpsFix>(this);
        }

        void
        onUpdateParameters(void)
        {
          m_time_without_gps.setTop(m_args.gps_timeout);
        }

        void
        onResourceInitialization(void)
        {
          m_last_n = 0.0;
          m_last_e = 0.0;
          m_last_depth = 0.0;
          m_yaw = 0.0;
          m_depth_bfr = 0.0;
          m_depth_offset = 0.0;
          m_depth_readings = 0;
          m_lbl_log_beacons = false;
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
        }

        ~Task(void)
        {
          Task::onResourceRelease();
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_origin);

          for (unsigned i = 0; i < c_max_beacons; ++i)
            Memory::clear(m_beacons[i]);
        }

        void
        consume(const IMC::Depth* msg)
        {
          m_depth_bfr += msg->value + m_depth_offset;
          ++m_depth_readings;
        }

        void
        consume(const IMC::DepthOffset* msg)
        {
          m_depth_offset = msg->value;
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

          // Update vehicle position and depth.
          if (m_depth_readings)
          {
            m_last_depth = (m_depth_bfr / m_depth_readings);
            m_depth_bfr = m_last_depth * 0.1;
            m_depth_readings = 0.1;
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

          m_lbl_log_beacons = false;

          if (m_origin == NULL)
          {
            debug("No initial GPS fix has been received, storing beacon configuration");
            m_lbl_log_beacons = true;
            m_lbl_cfg = *msg;
            setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
            return;
          }

          m_num_beacons = 0;

          IMC::MessageList<IMC::LblBeacon>::const_iterator itr = msg->beacons.begin();
          for (unsigned i = 0; itr != msg->beacons.end(); ++itr, ++i)
            addBeacon(i, *itr);

          setup();
        }

        void
        consume(const IMC::LblRange* msg)
        {
          if (!isActive())
            return;

          if (m_time_without_gps.overflow())
            return;

          if ((m_beacons[msg->id] == 0) || (msg->id > m_num_beacons - 1))
            return;

          float range = msg->range;

          double dx = m_args.dist_lbl_gps * std::cos(m_yaw) - m_last_n + m_kal.getState(msg->id * 2);
          double dy = m_args.dist_lbl_gps * std::sin(m_yaw) - m_last_e + m_kal.getState(msg->id * 2 + 1);
          double dz = m_beacons[msg->id]->depth - m_last_depth;
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

            // Log data.
            IMC::LblEstimate est;
            est.beacon = String::str("%d", msg->id);
            est.x = m_kal.getState(msg->id * 2);
            est.y = m_kal.getState(msg->id * 2 + 1);
            est.depth = m_beacons[msg->id]->depth;
            est.var_x = m_kal.getCovariance(msg->id * 2);
            est.var_y = m_kal.getCovariance(msg->id * 2 + 1);
            dispatch(est);

            spew("estimation for beacon %d: %f | %f", msg->id,
                 m_kal.getState(msg->id * 2), m_kal.getState(msg->id * 2 + 1));
          }
          else
            spew("rejected range from %d", msg->id);

          m_kal.resetOutputs();
        }

        //! Add beacon.
        //! @param[in] id beacon id number
        //! @param[in] msg beacon information.
        void
        addBeacon(unsigned id, const IMC::LblBeacon* msg)
        {
          if (id >= c_max_beacons)
          {
            err(DTR("beacon id %d is greater than %d"), id, c_max_beacons);
            return;
          }

          Memory::clear(m_beacons[id]);

          if (msg == NULL)
            return;

          if (id + 1 > m_num_beacons)
            m_num_beacons = id + 1;

          LblBeaconXYZ* bp = new LblBeaconXYZ;
          bp->lat = msg->lat;
          bp->lon = msg->lon;
          bp->depth = msg->depth;
          // This is relative to surface thus using 0.0 as height reference.
          WGS84::displacement(m_origin->lat, m_origin->lon, 0.0,
                              msg->lat, msg->lon, msg->depth,
                              &(bp->x), &(bp->y));

          m_beacons[id] = bp;

          debug("setting beacon %s (%0.2f, %0.2f, %0.2f)", msg->beacon.c_str(),
                m_beacons[id]->x, m_beacons[id]->y, m_beacons[id]->depth);
        }

        //! Setup filter.
        //! @return true if successful, false otherwise.
        void
        setup(void)
        {
          if (!m_num_beacons)
          {
            m_kal.reset(1, 1);
            m_kal.setMeasurementNoise(m_args.lbl_noise);
            m_kal.setCovariance(m_args.state_cov);
            m_kal.resetState();
            return;
          }

          m_kal.reset(m_num_beacons * 2, m_num_beacons);

          // Initialize Kalman Filter.
          m_kal.setMeasurementNoise(m_args.lbl_noise);
          m_kal.setCovariance(m_args.state_cov);
          m_kal.resetState();

          for (unsigned i = 0; i < m_num_beacons; i++)
          {
            m_kal.setState(i * 2, m_beacons[i]->x);
            m_kal.setState(i * 2 + 1, m_beacons[i]->y);
          }

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          debug("setup completed");
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

          Memory::replace(m_origin, new IMC::GpsFix(*msg));

          // Set beacons if data is logged.
          if (m_lbl_log_beacons)
          {
            consume(&m_lbl_cfg);
            debug("setting logged beacon configuration");
            return;
          }

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
