//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Alberto Dallolio                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <complex>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//! Wave Estimator from IMU heave measured by GPS.
//!
//! @author Alberto Dallolio
namespace Navigation
{
  namespace General
  {
    namespace Estimator
    {
      using DUNE_NAMESPACES;

      //! %Task arguments.
      struct Arguments
      {
        //! Low-pass filter: cutoff frequency.
        double lpf_ampl_cutoff;
        //! Low-pass filter: cutoff frequency.
        double lpf_est_cutoff;
        //! Low-pass filter taps.
        int lpf_taps;
        //! Heave Sampling Frequency.
        double data_sampl_freq;
        //! Estimator Period.
        float period;
        //! Estimation duration.
        float duration;
        //! Maximum Estimator Gain.
        double gain_max;
        //! Minimum Estimator Gain.
        double gain_min;
        //! Switching Amplitude.
        double a_switch;
        //! Activate Estimator.
        bool active;
        //! WEF Initial Guess.
        double wef_init;
        //! Heave entity label.
        std::string elabel_gnss;
        //! EulerAngles entity label.
        std::string euler;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Task arguments.
        Arguments m_args;
        //! Activate estimation.
        bool m_active;
        //! Estimator Gain.
        double m_gain;
        //! Average factor.
        int m_avg;
        //! Estimation Duration timer.
        Time::Counter<float> m_timer;
        //! Derivative for Estimatore.
        Math::Derivative<double> m_deriv;
        //! Time window between values.
        Time::Delta m_delta;
        //! Estimator parameter 1.
        double m_zeta_1;
        //! Estimator parameter 2.
        double m_zeta_2;
        //! Estimator parameter 2 deriv.
        double m_zeta_2_dot;
        //! m_phi_est;
        std::complex<double> m_phi_est;
        //! Estimated Wave Frequency - Complex.
        std::complex<double> m_wave_cplx;
        //! Parameter Estimate Derivative.
        double m_phi_est_dot;
        //! Parameter Estimate Last.
        std::complex<double> m_phi_est_last;  // double m_phi_est_last;
        //! Lowpass filter for wave freq estimation.
        FilterEstimator lowpass_est;
        //! Average Estimated Wave Frequency - Dispatch.
        IMC::Frequency m_wave_avg;
        //! Last Average Estimated Wave Frequency.
        double m_wave_avg_last;
        //! Estimated Wave Frequency.
        double m_wave;
        //! Heave measured from GPS.
        double m_gps_heave;
        //! Heave measured from GPS, moved to CG.
        IMC::Displacement m_cg_heave;
        //! Euler Angles from GPS.
        IMC::EulerAngles m_euler;
        //! Heave measurement is valid.
        bool m_valid_heave;
        //! Heave entity eid.
        unsigned int m_gnss_eid;
        //! EulerAngles entity eid.
        unsigned int m_euled_eid;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_active(false),
          m_gain(0.0),
          m_avg(0),
          m_zeta_1(0.0),
          m_zeta_2(0.0),
          m_zeta_2_dot(0.0),
          m_phi_est(0.0),
          m_wave_cplx(0.0),
          m_phi_est_dot(0.0),
          m_phi_est_last(0.0),
          m_wave_avg_last(0.0),
          m_wave(0.0),
          m_gps_heave(0.0),
          m_valid_heave(false)
        {
          param("Active", m_args.active)
            .defaultValue("false")
            .description("Activates and deactivates the estimator");

          param("Amplitude LPF cutoff frequency", m_args.lpf_ampl_cutoff)
            .units(Units::Hertz)
            .defaultValue("10.0")
            .description("Low-pass filter cutoff frequency");

          param("Omega_f LPF cutoff frequency", m_args.lpf_est_cutoff)
            .units(Units::Hertz)
            .defaultValue("1.0")
            .description("Low-pass filter cutoff frequency");

          param("LPF taps", m_args.lpf_taps)
            .defaultValue("10.0")
            .minimumValue("1.0")
            .description("Low-pass filter(s) number of taps");

          param("Data sampling frequency", m_args.data_sampl_freq)
            .units(Units::Hertz)
            .defaultValue("2.0")
            .description("Heave sampling frequency");

          param("Estimation period", m_args.period)
            .units(Units::Second)
            .defaultValue("1800.0")
            .description("Estimation period");

          param("Estimation duration", m_args.duration)
            .units(Units::Second)
            .defaultValue("600.0")
            .description("Estimation duration");

          param("Minimum gain", m_args.gain_min)
            .defaultValue("2.0")
            .minimumValue("1.0")
            .description("Estimator Minimum Gain");

          param("Maximum gain", m_args.gain_max)
            .defaultValue("10.0")
            .maximumValue("100.0")
            .description("Estimator Maximum Gain");

          param("Switching amplitude", m_args.a_switch)
            .units(Units::Meter)
            .defaultValue("0.1")
            .description("Amplitude for Gain Switching");

          param("WEF initial guess", m_args.wef_init)
            .units(Units::RadianPerSecond)
            .defaultValue("1")
            .description("Initial guess for estimation of the wave encounter frequency");

          param("Entity Label - Heave", m_args.elabel_gnss)
            .description("Entity label of 'Heave' message");

          param("Entity Label - EulerAngles", m_args.euler)
            .description("Entity label of 'EulerAngles' message");

          // Setup processing of IMC messages
          bind<IMC::Displacement>(this);
          bind<IMC::EulerAngles>(this);
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.duration))
            m_timer.setTop(m_args.period + m_args.duration);

          if (paramChanged(m_args.active))
          {
            m_active = m_args.active;
            if (m_active)
            {
              buildFilters();
              m_timer.setTop(m_args.period + m_args.duration);
            }
          }

          if (paramChanged(m_args.lpf_est_cutoff) || paramChanged(m_args.lpf_taps)
              || paramChanged(m_args.data_sampl_freq) || paramChanged(m_args.period)
              || paramChanged(m_args.duration) || paramChanged(m_args.gain_min)
              || paramChanged(m_args.gain_max) || paramChanged(m_args.a_switch))
            buildFilters();

          // Skip first paramChanged called (after Constructor)
          if (getEntityState() == EntityState::ESTA_BOOT)
            return;

          // Allow entity label change at runtime?
          if (paramChanged(m_args.elabel_gnss))
            m_gnss_eid = getEid(m_args.elabel_gnss);

          if (paramChanged(m_args.euler))
            m_euled_eid = getEid(m_args.euler);
        }

        void
        onEntityResolution(void)
        {
          m_gnss_eid = getEid(m_args.elabel_gnss);
          m_euled_eid = getEid(m_args.euler);
        }

        //! Get entity id of label
        //! Returns UINT16_MAX in case of missing label
        unsigned int
        getEid(const std::string& label)
        {
          unsigned int id = UINT16_MAX;
          try
          {
            id = resolveEntity(label);
          }
          catch (const std::exception& e)
          {
            err(DTR("can not resolve %s (%s), is there a task failure or a configuration error?"),
                label.c_str(), e.what());
          }

          return id;
        }

        void
        consume(const IMC::EulerAngles* msg)
        {
          if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_euled_eid)
            return;

          // Get Euler Angles from GPS.
          m_euler.theta = msg->theta;
          m_euler.phi = msg->phi;

          trace("ESTIMATOR - EULER ANGLES FROM HemisphereGPS: theta = %f phi = %f",
                Angles::degrees(m_euler.theta), Angles::degrees(m_euler.phi));
        }

        void
        consume(const IMC::Displacement* msg)
        {
          if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_gnss_eid)
            return;

          m_gps_heave = msg->z;
          trace("GPS HEAVE: %f", m_gps_heave);

          // Compute wrt vessel CG: h_cg = h_gps - (0 0 1)*R*r, R=rot matrix between frames,
          // r=vector between frames origins.
          double r_x = 2.0, r_y = 0.0, r_z = -0.25;
          m_cg_heave.z = m_gps_heave + r_x * std::sin(m_euler.theta)
                         - r_z * std::cos(m_euler.theta) * std::cos(m_euler.phi)
                         - r_y * std::cos(m_euler.theta) * std::sin(m_euler.phi);

          trace("CG HEAVE: %f", m_cg_heave.z);

          dispatch(m_cg_heave);  // no loopback.

          m_valid_heave = true;

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
          buildFilters();
          m_timer.setTop(m_args.period + m_args.duration);

          //! m_phi_est is initialized according to initial guess of w_e.
          m_phi_est = -std::pow(m_args.wef_init, 2);
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
          // Could use this to free up memory.
        }

        void
        buildFilters(void)
        {
          lowpass_est.build("LPF", m_args.lpf_taps, m_args.data_sampl_freq, m_args.lpf_est_cutoff);
        }

        void
        estimation(void)
        {
          if (m_avg == 0)  // first iteration, build filters.
            buildFilters();

          spew("Wave Amplitude = Heave Amplitude at CG: %f", m_cg_heave.z);

          if (m_cg_heave.z > m_args.a_switch)
            m_gain = m_args.gain_min;
          else
            m_gain = m_args.gain_max;

          // Compute zeta_2_dot.
          m_zeta_1 = lowpass_est.step(m_cg_heave.z);
          m_zeta_2 = m_deriv.update(m_zeta_1);
          m_zeta_2_dot = -2 * m_args.lpf_est_cutoff * m_zeta_2
                         - std::pow(m_args.lpf_est_cutoff, 2) * m_zeta_1
                         + std::pow(m_args.lpf_est_cutoff, 2) * m_cg_heave.z;

          // Compute phi_dot.
          m_phi_est_dot = m_gain * m_zeta_1 * (m_zeta_2_dot - (std::real(m_phi_est) * m_zeta_1));

          // Compute Time Delta.
          double tstep = m_delta.getDelta();
          // Check if we have a valid time delta.
          if (tstep < 0.0)
            return;

          // Backward Euler Method.
          m_phi_est = m_phi_est_last + tstep * m_phi_est_dot;

          // Post-process data.
          m_wave_cplx = -m_phi_est;
          m_wave_cplx = sqrt(m_wave_cplx);
          // spew("Wave Frequency:%f\n ",m_wave_cplx);

          m_phi_est_last = m_phi_est;

          m_wave = real(m_wave_cplx);
          // spew("Wave Frequency:%f\n",m_wave);

          // Incremental average for the chosen period.
          if (m_avg == 0)
            m_wave_avg.value = m_wave;
          else
            m_wave_avg.value = ((m_wave_avg_last * m_avg + m_wave) / (m_avg + 1));

          m_avg++;
          m_wave_avg_last = m_wave_avg.value;

          debug("Raw WEF: %f - Incrementally averaged WEF: %f", m_wave, m_wave_avg.value);
        }

        //! Main loop.
        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(1.0);

            if (m_active && m_valid_heave)
            {
              if (m_timer.getElapsed() >= m_args.period
                  && m_timer.getElapsed() <= m_args.period + m_args.duration)
                estimation();
            }

            if (m_timer.overflow())
            {
              m_timer.reset();
              if (m_active && m_avg != 0)
              {
                debug("Wave Amplitude: %f - Averaged WEF: %f\n", m_cg_heave.z, m_wave_avg.value);
                dispatch(m_wave_avg);  //*100;
              }
            }
          }
        }
      };
    }
  }
}

DUNE_TASK
