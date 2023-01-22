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
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>
#include <cmath>
#include <vector>

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
        //! State covariance.
        float covariance;
        //! Measurement noise covariance.
        float mnoise;
        //! Process noise covariance.
        float pnoise;
        //! GPS timeout.
        float gps_timeout;
        //! Maximum Valid Horizontal Accuracy index.
        float max_hacc;
        //! Distance between LBL and GPS.
        float offset;
        //! Number of moving average samples.
        unsigned samples;
        //! Minimum error displacement to trigger correction.
        float error;
        //! Standard Deviation of samples must fall below this value.
        float std;
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
        //! North (NED) displacement.
        std::vector<MovingAverage<double> > m_north_avg;
        //! East (NED) displacement.
        std::vector<MovingAverage<double> > m_east_avg;
        //! Kalman Filter matrices.
        KalmanFilter m_kal;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_origin(NULL)
        {
          param("State Covariance Initial State", m_args.covariance)
          .defaultValue("1.0")
          .minimumValue("1.0")
          .description("Kalman Filter State Covariance initial values");

          param("LBL Measure Noise Covariance", m_args.mnoise)
          .defaultValue("10.0")
          .minimumValue("0.1")
          .description("Kalman Filter LBL Measurement Noise Covariance value");

          param("LBL Process Noise Covariance", m_args.pnoise)
          .defaultValue("1e-5")
          .minimumValue("0.0")
          .description("Kalman Filter LBL Process Noise Covariance value");

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

          param("Distance Between LBL and GPS", m_args.offset)
          .units(Units::Meter)
          .defaultValue("0.50")
          .minimumValue("0.0")
          .description("Distance between LBL receiver and GPS in the vehicle");

          param("Number of Moving Average Samples", m_args.samples)
          .defaultValue("5")
          .description("Number of moving average samples");

          param("Displacement Error", m_args.error)
          .units(Units::Meter)
          .defaultValue("5.0")
          .minimumValue("0.0")
          .description("Minimum error displacement to trigger a beacon correction");

          param("Error Standard Deviation", m_args.std)
          .units(Units::Meter)
          .defaultValue("5.0")
          .minimumValue("0.0")
          .description("Maximum error standard deviation to trigger a beacon correction");

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

          for (unsigned i = 0; i < DUNE::Navigation::c_max_transponders; ++i)
            Memory::clear(m_estimate[i]);

          IMC::MessageList<IMC::LblBeacon>::const_iterator itr = msg->beacons.begin();
          for (unsigned i = 0; itr != msg->beacons.end(); ++itr, ++i)
          {
            if (i >= DUNE::Navigation::c_max_transponders)
              return;

            if (*itr == NULL)
              return;

            Memory::replace(m_estimate[i], new IMC::LblEstimate);

            m_estimate[i]->beacon.set(*itr);
          }

          if (isActive())
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

          unsigned xx = msg->id * 2;
          unsigned yy = msg->id * 2 + 1;

          double dx = m_kal.getState(xx) - (m_args.offset * std::cos(m_yaw) + m_last_n);
          double dy = m_kal.getState(yy) - (m_args.offset * std::sin(m_yaw) + m_last_e);
          double dz = m_ranging.getDepth(msg->id) - m_last_depth;
          double exp_range = std::sqrt(dx * dx + dy * dy + dz * dz);

          // Set Kalman parameters.
          m_kal.setObservation(msg->id, xx, dx / exp_range);
          m_kal.setObservation(msg->id, yy, dy / exp_range);
          m_kal.setOutput(msg->id, msg->range);
          m_kal.setInnovation(msg->id, msg->range - exp_range);

          // Run Kalman Filter.
          m_kal.update(0.0);

          // Use displacement to get current position fix.
          double x = m_kal.getState(xx);
          double y = m_kal.getState(yy);

          double lat = m_origin->lat;
          double lon = m_origin->lon;
          Coordinates::WGS84::displace(x, y, &lat, &lon);

          double rlat = m_estimate[msg->id]->beacon->lat;
          double rlon = m_estimate[msg->id]->beacon->lon;
          double n, e;
          Coordinates::WGS84::displacement(rlat, rlon, 0.0, lat, lon, 0.0, &n, &e);

          // Update estimate.
          m_estimate[msg->id]->x = x;
          m_estimate[msg->id]->y = y;
          m_estimate[msg->id]->var_x = m_kal.getCovariance(xx);
          m_estimate[msg->id]->var_y = m_kal.getCovariance(yy);
          m_estimate[msg->id]->distance = std::sqrt(n * n + e * e);
          dispatch(m_estimate[msg->id]);

          double n_avg = m_north_avg[msg->id].update(n);
          double e_avg = m_east_avg[msg->id].update(e);
          double dev = std::sqrt(std::pow(m_north_avg[msg->id].stdev(), 2) +
                                 std::pow(m_east_avg[msg->id].stdev(), 2));

          spew("beacon #%d (%0.1f m): %0.2f, %0.2f (dev: %0.1f | xy: %0.1f, %0.1f)",
               msg->id, msg->range, n_avg, e_avg, dev, x, y);

          if (m_north_avg[msg->id].sampleSize() >= m_args.samples &&
              std::sqrt(n_avg * n_avg + e_avg * e_avg) > m_args.error
              && dev <= m_args.std)
          {
            m_estimate[msg->id]->beacon->lat = lat;
            m_estimate[msg->id]->beacon->lon = lon;

            IMC::LblConfig cfg;
            cfg.op = LblConfig::OP_SET_CFG;
            for (unsigned i = 0; i < m_ranging.getSize(); ++i)
              cfg.beacons.push_back((const IMC::LblBeacon*)m_estimate[i]->beacon->clone());

            war(DTR("corrected beacon #%d (x: %0.2f, y: %0.2f, std dev: %0.2f)"),
                msg->id, n_avg, e_avg, dev);

            dispatch(cfg);
            m_ranging.setup(&cfg);
            reset(msg->id);
          }

          m_kal.resetOutputs();
        }

        //! Setup filter.
        void
        setup(void)
        {
          if (!m_ranging.getSize())
          {
            m_kal.reset(1, 1);
            m_kal.setMeasurementNoise(m_args.mnoise);
            m_kal.setProcessNoise(m_args.pnoise);
            m_kal.setCovariance(m_args.covariance);
            m_kal.resetState();
            return;
          }

          m_kal.reset(m_ranging.getSize() * 2, m_ranging.getSize());

          // Initialize Kalman Filter.
          m_kal.setMeasurementNoise(m_args.mnoise);
          m_kal.setProcessNoise(m_args.pnoise);
          m_kal.setCovariance(m_args.covariance);
          m_kal.resetState();

          m_north_avg.clear();
          m_east_avg.clear();
          Math::MovingAverage<double>* avg = new Math::MovingAverage<double>(m_args.samples);

          for (unsigned i = 0; i < m_ranging.getSize(); i++)
          {
            setState(i);
            m_north_avg.push_back(*avg);
            m_east_avg.push_back(*avg);
          }

          delete avg;

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
          if (!m_ranging.getSize())
            setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_LBL_CFG);

          setup();
        }

        //! Reset moving averages and Kalman state.
        //! @param[in] index state index.
        void
        reset(unsigned index)
        {
          // Reset moving averages and set Kalman state.
          m_north_avg[index].clear();
          m_east_avg[index].clear();

          setState(index);
        }

        //! Reset moving averages and Kalman state.
        //! @param[in] index state index.
        void
        setState(unsigned index)
        {
          double x = 0.0;
          double y = 0.0;
          double z = 0.0;

          m_ranging.getLocation(index, &x, &y, &z);
          m_kal.setState(index * 2, x);
          m_kal.setState(index * 2 + 1, y);
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
