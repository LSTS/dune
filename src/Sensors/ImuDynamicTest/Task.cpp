//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Teixeira                                                   *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace ImuDynamicTest
  {
    using DUNE_NAMESPACES;

    static const float c_wma_filter = 0.1f;
    static const float c_timestep = 0.01f;

    struct Task: public Tasks::Periodic
    {
      //! Device axes.
      enum Axes
      {
        AXIS_X = 0,
        AXIS_Y = 1,
        AXIS_Z = 2
      };

      /****************************/
      /* Generic member variables */
      bool m_dead_reckoning;
      bool m_dead_reckoning_sync;
      unsigned m_imu_eid;
      unsigned m_ahrs_eid;
      double m_declination;
      double m_last_lat;
      double m_tstep;
      Time::Delta m_delta;

      /*******************************/
      /* Euler Delta message holders */
      double m_edelta_bfr_f[3];          // euler delta buffer using wma filter.
      double m_edelta_bfr_r[3];          // euler delta buffer using a standard average filter.
      double m_edelta_last[3];           // last euler delta message.
      float m_count_delta_f;             // euler delta buffer with wma filter counter.
      unsigned m_count_delta;            // euler delta message counter.

      /*************************/
      /* Euler message holders */
      IMC::EulerAngles m_euler;          // last euler message.
      IMC::EulerAngles m_ang_f;          // computed using 'wma filtered' euler delta.
      IMC::EulerAngles m_ang_r;          // computed with standard average euler delta.
      IMC::EulerAngles m_ang_last;       // uses latest euler delta.
      IMC::EulerAngles m_ang_earth_f;    // earth extracted from 'wma filtered' euler delta.
      IMC::EulerAngles m_ang_earth_r;    // earth extracted from std avg euler delta.
      IMC::EulerAngles m_euler_earth;    // integration of earth effect.

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      {
        // initialize member variables.
        m_dead_reckoning = false;
        m_dead_reckoning_sync = false;
        m_declination = 0.0;
        m_last_lat = 0.0;
        m_tstep = 1 / getFrequency();

        resetBuffer(m_edelta_bfr_f);
        resetBuffer(m_edelta_bfr_r);
        resetBuffer(m_edelta_last);

        m_count_delta_f = 0.0;
        m_count_delta = 0;

        bind<IMC::EntityActivationState>(this);
        bind<IMC::EulerAngles>(this);
        bind<IMC::EulerAnglesDelta>(this);
        bind<IMC::GpsFix>(this);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_ang_f.setSourceEntity(reserveEntity(String::str("%s.filt", getEntityLabel())));
        m_ang_r.setSourceEntity(reserveEntity(String::str("%s.raw", getEntityLabel())));
        m_ang_last.setSourceEntity(reserveEntity(String::str("%s.last", getEntityLabel())));
        m_ang_earth_f.setSourceEntity(reserveEntity(String::str("%s.filt_earth", getEntityLabel())));
        m_ang_earth_r.setSourceEntity(reserveEntity(String::str("%s.raw_earth", getEntityLabel())));
        m_euler_earth.setSourceEntity(reserveEntity(String::str("%s.earth", getEntityLabel())));
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
        try
        {
          m_imu_eid = resolveEntity("IMU");
          m_ahrs_eid = resolveEntity("AHRS");
        }
        catch (...)
        {
          throw RestartNeeded("missing entity labels", 30);
        }
      }

      void
      consume(const IMC::EulerAnglesDelta* msg)
      {
        if (!m_dead_reckoning_sync || msg->getSourceEntity() != m_imu_eid)
          return;

        if (!m_dead_reckoning)
        {
          inf(DTR("IMU Sync and collecting"));
          m_dead_reckoning = true;

          copyTo(m_euler, m_ang_f);
          copyTo(m_euler, m_ang_r);
          copyTo(m_euler, m_ang_last);
          copyTo(m_euler, m_ang_earth_f);
          copyTo(m_euler, m_ang_earth_r);
        }

        m_edelta_bfr_f[AXIS_X] += msg->x;
        m_edelta_bfr_f[AXIS_Y] += msg->y;
        m_edelta_bfr_f[AXIS_Z] += msg->z;
        ++m_count_delta_f;

        m_edelta_bfr_r[AXIS_X] += msg->x;
        m_edelta_bfr_r[AXIS_Y] += msg->y;
        m_edelta_bfr_r[AXIS_Z] += msg->z;
        ++m_count_delta;

        m_edelta_last[AXIS_X] = msg->x;
        m_edelta_last[AXIS_Y] = msg->y;
        m_edelta_last[AXIS_Z] = msg->z;
      }

      void
      consume(const IMC::EntityActivationState* msg)
      {
        if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_imu_eid)
          return;

        if (msg->state == IMC::EntityActivationState::EAS_ACTIVE ||
            msg->state == IMC::EntityActivationState::EAS_ACT_DONE)
        {
          m_dead_reckoning_sync = true;
        }
        else
        {
          m_dead_reckoning_sync = false;
          m_dead_reckoning = false;
        }
      }

      void
      consume(const IMC::EulerAngles* msg)
      {
        if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_ahrs_eid)
          return;

        copyTo(*msg, m_euler);

        if (m_last_lat != 0.0)
          m_euler.psi += m_declination;
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (m_last_lat != 0.0)
          return;

        // Check fix validity.
        if ((msg->validity & IMC::GpsFix::GFV_VALID_POS) == 0)
          return;

        // Check if we have valid Horizontal Accuracy index.
        if (msg->validity & IMC::GpsFix::GFV_VALID_HACC && msg->hacc > 20)
          return;
        else if (msg->hdop > 4)
          return;

        // Check current declination value.
        Coordinates::WMM wmm(m_ctx.dir_cfg);
        m_declination = wmm.declination(msg->lat, msg->lon, msg->height);
        m_last_lat = msg->lat;
      }

      void
      copyTo(const IMC::EulerAngles& from, IMC::EulerAngles& to)
      {
        to.phi = Angles::normalizeRadian(from.phi);
        to.theta = Angles::normalizeRadian(from.theta);
        to.psi = Angles::normalizeRadian(from.psi);
      }

      double
      getReading(double buffer[3], float reads, unsigned axis) const
      {
        return reads ? (buffer[axis] / reads) : 0.0;
      }

      void
      getRates(double* const rate, double delta[3], float reads) const
      {
        for (unsigned i = 0; i < 3; ++i)
          rate[i] = getReading(delta, reads, i) / c_timestep;
      }

      void
      resetBuffer(double (&buffer)[3])
      {
        for (unsigned i = 0; i < 3; ++i)
          buffer[i] = 0.0;
      }

      Math::Matrix
      extractEarthRotationRaw(double buffer[3], float reads, double* const rot_axis)
      {
        // Avoid division by zero.
        if (!std::cos(m_euler.theta))
          throw std::runtime_error(DTR("division by zero"));

        if (!m_count_delta_f)
          throw std::runtime_error(DTR("no readings"));

        // Insert euler angles into row matrix.
        Math::Matrix ea(3, 1);
        ea(0, 0) = m_euler.phi;
        ea(1, 0) = m_euler.theta;
        ea(2, 0) = m_euler.psi;

        // Earth rotation vector.
        Math::Matrix we(3,1);
        we(AXIS_X) = Math::c_earth_rotation * std::cos(m_last_lat);
        we(AXIS_Y) = 0.0;
        we(AXIS_Z) = - Math::c_earth_rotation * std::sin(m_last_lat);

        // Sensed angular velocities due to Earth rotation effect.
        Math::Matrix av(3,1);
        av = transpose(ea.toDCM()) * we;

        // Extract from angular velocities measurements.
        for (unsigned i = 0; i < 3; ++i)
          rot_axis[i] = getReading(buffer, reads, i) / c_timestep - av(i);

        return av;
      }

      void
      toBus(double tstamp, double rate[3], IMC::EulerAngles& msg)
      {
        if (!std::cos(m_euler.theta))
          return;

        // convert rotations from body-frame to navigation-frame.
        double s1 = std::sin(m_euler.phi);
        double c1 = std::cos(m_euler.phi);
        double c2 = std::cos(m_euler.theta);
        double t2 = std::tan(m_euler.theta);

        double p = rate[AXIS_X] + (s1 * t2) * rate[AXIS_Y] + (c1 * t2) * rate[AXIS_Z];
        double q = c1 * rate[AXIS_Y] - s1 * rate[AXIS_Z];
        double r = (s1 * rate[AXIS_Y] + c1 * rate[AXIS_Z]) / c2;

        msg.setTimeStamp(tstamp);
        msg.phi = Angles::normalizeRadian(msg.phi + p * m_tstep);
        msg.theta = Angles::normalizeRadian(msg.theta + q * m_tstep);
        msg.psi = Angles::normalizeRadian(msg.psi + r * m_tstep);
        dispatch(msg, DF_KEEP_TIME);
      }

      //! Main loop.
      void
      task(void)
      {
        m_tstep = m_delta.getDelta();
        if (m_tstep < 0)
          return;

        if (!m_dead_reckoning)
          return;

        // latest euler angles with declination correction.
        double imc_tstamp = Clock::getSinceEpoch();
        m_euler.setTimeStamp(imc_tstamp);
        dispatch(m_euler, DF_KEEP_TIME);

        // integration of wma filtered delta.
        double rates[3] = {0};
        getRates(rates, m_edelta_bfr_f, m_count_delta_f);
        toBus(imc_tstamp, rates, m_ang_f);

        // integation of averaged delta.
        getRates(rates, m_edelta_bfr_r, m_count_delta);
        toBus(imc_tstamp, rates, m_ang_r);

        // integation of last reading delta.
        for (unsigned i = 0; i < 3; ++i)
          m_edelta_last[i] /= c_timestep;
        toBus(imc_tstamp, m_edelta_last, m_ang_last);

        if (m_last_lat != 0.0)
        {
          try
          {
            //! integraton of wma filtered delta with extracted earth rotation.
            Math::Matrix av = extractEarthRotationRaw(m_edelta_bfr_f, m_count_delta_f, rates);
            toBus(imc_tstamp, rates, m_ang_earth_f);

            //! integration of earth rotation effects on body frame.
            m_euler_earth.setTimeStamp(imc_tstamp);
            m_euler_earth.phi -= av(0) * m_tstep;
            m_euler_earth.theta -= av(1) * m_tstep;
            m_euler_earth.psi -= av(2) * m_tstep;
            dispatch(m_euler_earth, DF_KEEP_TIME);

            // integation of averaged delta with extracted earth rotation.
            extractEarthRotationRaw(m_edelta_bfr_r, m_count_delta, rates);
            toBus(imc_tstamp, rates, m_ang_earth_r);
          }
          catch (...)
          { }
        }

        // wma filter.
        for (unsigned i = 0; i < 3; ++i)
          m_edelta_bfr_f[i] =  getReading(m_edelta_bfr_f, m_count_delta_f, i) * c_wma_filter;
        m_count_delta_f = c_wma_filter;

        resetBuffer(m_edelta_bfr_r);
        m_count_delta = 0;
      }
    };
  }
}

DUNE_TASK
