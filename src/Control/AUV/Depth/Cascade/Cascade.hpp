//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

#ifndef CONTROL_AUV_DEPTH_CASCADE_CASCADE_HPP_INCLUDED_
#define CONTROL_AUV_DEPTH_CASCADE_CASCADE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>
#include <vector>
#include <algorithm>

namespace Control
{
  namespace AUV
  {
    namespace Depth
    {
      namespace Cascade
      {
        //! Depth controller at pitch reference level: depth error to depth
        //! rate reference, then inversion of the heave model
        //!
        //!   depth_rate = -g u sin(theta) + H / u
        //!
        //! with H (trim, buoyancy) estimated online.
        //!
        //!   rate_ref   = sat(Kz (z_ref - depth))
        //!   sin(theta_des) = -(rate_ref - H / u) / (g u)
        //!   H'         = Lh u (depth_rate - Nav{-g u sin(theta)} - H / u)
        //!   pitch_ref  = theta_des + LPF{kappa (theta_des - theta)} + delta
        //!   delta'     = Ld (theta_des - theta)
        //!
        //! Nav{} applies the lags of the navigation depth rate (first order
        //! heave lag and moving average) to the model rate, so that the
        //! trim estimate does not see them. The trim estimate is driven by
        //! the measured pitch, not by the command, and so it does not wind
        //! up when the pitch reference saturates.
        //!
        //! Alternative trim estimate (disturbance observer): with the
        //! nominal heave plant Tz z'' + z' = -g u sin(theta) + d and d the
        //! lumped disturbance (H / u, heave disturbance, model error),
        //!
        //!   d_hat = Q(s) (Tz s^2 + s) z + Q(s) g u sin(theta),
        //!   Q(s) = 1 / (tq s + 1)^3,  H / u = d_hat
        //!
        //! from the measured depth and pitch (not the navigation depth rate).
        //! d_hat is held near the surface.
        class Cascade
        {
        public:
          //! Parameters.
          struct Arguments
          {
            //! Heave gain g (depth rate per u sin(theta)).
            double heave_gain;
            //! Heave lag (s).
            double heave_lag;
            //! Samples of the depth rate moving average of the navigation
            //! (0 or 1 when the depth rate is not averaged).
            unsigned heave_samples;
            //! Depth gain Kz (1/s).
            double depth_gain;
            //! Trim estimator gain Lh (1/s).
            double trim_gain;
            //! Pitch error lead kappa.
            double lead_gain;
            //! Time constant of the low-pass filter of the lead term (s, 0 to disable).
            double lead_filter;
            //! Pitch tracking trim gain Ld (1/s).
            double pitch_trim_gain;
            //! Pitch tracking trim limit (rad).
            double pitch_trim_limit;
            //! Pitch error above which the pitch tracking trim is frozen (rad).
            double pitch_trim_freeze;
            //! Maximum pitch reference (rad).
            double max_pitch;
            //! Desired pitch allowed beyond the maximum pitch reference (rad).
            double extra_desired_pitch;
            //! Nose down pitch reached with the maximum pitch reference (rad).
            double reach_down;
            //! Nose up pitch reached with the maximum pitch reference (rad).
            double reach_up;
            //! Fraction of the reachable depth rate used.
            double rate_margin;
            //! Depth below which the estimates are frozen (m).
            double surface_depth;
            //! Minimum speed used in the model (m/s).
            double min_speed;
            //! Initial trim H (m^2/s^2).
            double initial_trim;
            //! Estimate the trim with the disturbance observer instead of
            //! the integrator.
            bool disturbance_observer;
            //! Time constant tq of the filter of the disturbance observer (s).
            double observer_filter;
          };

          //! Internal values of the last step, for logging.
          struct Debug
          {
            //! Depth rate reference (m/s).
            double rate_ref;
            //! Desired pitch (rad).
            double theta_des;
            //! Lead term (rad).
            double lead;
          };

          Cascade(void):
            m_trim(0.0),
            m_delta(0.0),
            m_rate_lpf(0.0),
            m_ma_idx(0),
            m_primed(false),
            m_lead(0.0),
            m_lead_primed(false),
            m_dob_h(0.0),
            m_dob_dt(-1.0),
            m_dob_tq(-1.0)
          {
            for (unsigned i = 0; i < 3; ++i)
            {
              m_dob_z[i] = 0.0;
              m_dob_s[i] = 0.0;
            }
          }

          //! Set parameters. The estimates are kept.
          //! @param[in] args parameters.
          //! @param[in] reset_trim true to restart the trim estimates.
          void
          setup(const Arguments& args, bool reset_trim)
          {
            m_args = args;

            if (reset_trim)
            {
              m_trim = m_args.initial_trim;
              m_delta = 0.0;
            }

            m_primed = false;
            m_lead_primed = false;
          }

          //! Start a period of depth control. The trim estimates are kept.
          //! @param[in] depth depth (m).
          //! @param[in] speed forward speed (m/s).
          void
          activate(double depth, double speed)
          {
            m_primed = false;
            m_lead_primed = false;

            // Disturbance observer: filter states at rest, the disturbance
            // estimate at the trim estimate.
            const double u = std::max(speed, m_args.min_speed);
            m_dob_z[0] = depth;
            m_dob_s[0] = m_trim / u;
            for (unsigned i = 1; i < 3; ++i)
            {
              m_dob_z[i] = 0.0;
              m_dob_s[i] = 0.0;
            }
            m_dob_h = m_trim / u;
          }

          //! Compute the pitch reference.
          //! @param[in] dt time step (s).
          //! @param[in] zref depth reference (m).
          //! @param[in] depth depth (m).
          //! @param[in] rate depth rate from navigation (m/s).
          //! @param[in] theta pitch (rad).
          //! @param[in] speed forward speed (m/s).
          //! @return pitch reference (rad).
          double
          step(double dt, double zref, double depth, double rate, double theta, double speed)
          {
            const double u = std::max(speed, m_args.min_speed);
            const double gu = m_args.heave_gain * u;

            const bool submerged = depth > m_args.surface_depth;
            double h = 0.0;

            if (m_args.disturbance_observer)
            {
              // Disturbance observer.
              if (dt != m_dob_dt || m_args.observer_filter != m_dob_tq)
                discretiseObserver(dt);

              filterObserver(m_dob_z, depth);
              filterObserver(m_dob_s, gu * std::sin(theta));
              const double d = m_args.heave_lag * m_dob_z[2] + m_dob_z[1] + m_dob_s[0];

              if (submerged)
                m_dob_h = d;

              h = m_dob_h;
              m_trim = h * u;
            }
            else
            {
              // Model depth rate through the same lags as the navigation depth rate.
              const double rate_model = -gu * std::sin(theta);
              const unsigned n = std::max(m_args.heave_samples, 1u);

              if (!m_primed || m_ma.size() != n)
              {
                m_rate_lpf = rate_model;
                m_ma.assign(n, rate_model);
                m_ma_idx = 0;
                m_primed = true;
              }

              m_rate_lpf += (1.0 - std::exp(-dt / m_args.heave_lag)) * (rate_model - m_rate_lpf);
              m_ma[m_ma_idx] = m_rate_lpf;
              m_ma_idx = (m_ma_idx + 1) % n;

              double rate_aligned = 0.0;
              for (unsigned i = 0; i < n; ++i)
                rate_aligned += m_ma[i];
              rate_aligned /= n;

              // Trim estimator.
              h = m_trim / u;

              if (submerged)
              {
                const double trim_max = 1.5 * gu * u * std::sin(m_args.max_pitch);
                m_trim += m_args.trim_gain * u * (rate - rate_aligned - h) * dt;
                m_trim = trim(m_trim, -trim_max, trim_max);
                h = m_trim / u;
              }
            }

            // Reachable depth rates.
            const double v_down = std::max(m_args.rate_margin * (gu * std::sin(m_args.reach_down) + h), 0.03);
            const double v_up = std::max(m_args.rate_margin * (gu * std::sin(m_args.reach_up) - h), 0.03);

            const double error = zref - depth;
            const double rate_ref = trim(m_args.depth_gain * error, -v_up, v_down);

            // Model inversion.
            const double sin_max = std::sin(m_args.max_pitch + m_args.extra_desired_pitch);
            const double sin_des = trim(-(rate_ref - h) / gu, -sin_max, sin_max);
            const double theta_des = std::asin(trim(sin_des, -0.99, 0.99));
            const double pitch_error = theta_des - theta;

            // Lead term, low-pass filtered: it carries the noise of the measured
            // pitch and the pitch loop may differentiate the pitch reference.
            const double lead_raw = m_args.lead_gain * pitch_error;
            if (!m_lead_primed || m_args.lead_filter <= 0.0)
            {
              m_lead = lead_raw;
              m_lead_primed = true;
            }
            else
            {
              m_lead += (1.0 - std::exp(-dt / m_args.lead_filter)) * (lead_raw - m_lead);
            }
            const double lead = m_lead;

            const double cmd = theta_des + lead + m_delta;
            const double cmd_sat = trim(cmd, -m_args.max_pitch, m_args.max_pitch);

            // Pitch tracking trim.
            if (cmd_sat == cmd && std::fabs(pitch_error) < m_args.pitch_trim_freeze && submerged)
            {
              m_delta += m_args.pitch_trim_gain * pitch_error * dt;
              m_delta = trim(m_delta, -m_args.pitch_trim_limit, m_args.pitch_trim_limit);
            }

            m_debug.rate_ref = rate_ref;
            m_debug.theta_des = theta_des;
            m_debug.lead = lead;

            return cmd_sat;
          }

          //! Trim estimate H (m^2/s^2).
          double
          getTrim(void) const
          {
            return m_trim;
          }

          //! Pitch tracking trim (rad).
          double
          getPitchTrim(void) const
          {
            return m_delta;
          }

          //! Internal values of the last step.
          const Debug&
          getDebug(void) const
          {
            return m_debug;
          }

        private:
          static double
          trim(double value, double lower, double upper)
          {
            return std::min(std::max(value, lower), upper);
          }

          //! Discretise the filter Q(s) = 1 / (tq s + 1)^3 of the disturbance
          //! observer (zero-order hold, state: output and its first two
          //! derivatives).
          //! @param[in] dt time step (s).
          void
          discretiseObserver(double dt)
          {
            const double t = m_args.observer_filter;
            const double t3 = t * t * t;

            // Augmented matrix [A b; 0 0] dt, exponential by scaling and
            // squaring with a Taylor series.
            double m[4][4] = {{0.0, 1.0, 0.0, 0.0}, {0.0, 0.0, 1.0, 0.0},
                              {-1.0 / t3, -3.0 / (t * t), -3.0 / t, 1.0 / t3}, {0.0, 0.0, 0.0, 0.0}};

            double norm = 0.0;
            for (unsigned j = 0; j < 4; ++j)
            {
              double s = 0.0;
              for (unsigned i = 0; i < 4; ++i)
              {
                m[i][j] *= dt;
                s += std::fabs(m[i][j]);
              }
              norm = std::max(norm, s);
            }

            unsigned squarings = 0;
            double scale = 1.0;
            while (norm * scale > 0.25 && squarings < 60)
            {
              scale *= 0.5;
              ++squarings;
            }

            double e[4][4];
            double term[4][4];
            double tmp[4][4];
            for (unsigned i = 0; i < 4; ++i)
            {
              for (unsigned j = 0; j < 4; ++j)
              {
                m[i][j] *= scale;
                term[i][j] = (i == j) ? 1.0 : 0.0;
                e[i][j] = term[i][j];
              }
            }

            for (unsigned k = 1; k <= 24; ++k)
            {
              multiply(term, m, tmp);
              for (unsigned i = 0; i < 4; ++i)
              {
                for (unsigned j = 0; j < 4; ++j)
                {
                  term[i][j] = tmp[i][j] / static_cast<double>(k);
                  e[i][j] += term[i][j];
                }
              }
            }

            for (unsigned k = 0; k < squarings; ++k)
            {
              multiply(e, e, tmp);
              for (unsigned i = 0; i < 4; ++i)
                for (unsigned j = 0; j < 4; ++j)
                  e[i][j] = tmp[i][j];
            }

            for (unsigned i = 0; i < 3; ++i)
            {
              for (unsigned j = 0; j < 3; ++j)
                m_dob_a[i][j] = e[i][j];
              m_dob_b[i] = e[i][3];
            }

            m_dob_dt = dt;
            m_dob_tq = t;
          }

          static void
          multiply(const double a[4][4], const double b[4][4], double c[4][4])
          {
            for (unsigned i = 0; i < 4; ++i)
            {
              for (unsigned j = 0; j < 4; ++j)
              {
                double s = 0.0;
                for (unsigned k = 0; k < 4; ++k)
                  s += a[i][k] * b[k][j];
                c[i][j] = s;
              }
            }
          }

          //! One step of the filter Q(s) of the disturbance observer.
          //! @param[in,out] x filter state.
          //! @param[in] input filter input.
          void
          filterObserver(double x[3], double input) const
          {
            double y[3];
            for (unsigned i = 0; i < 3; ++i)
              y[i] = (m_dob_a[i][0] * x[0] + m_dob_a[i][1] * x[1] + m_dob_a[i][2] * x[2]) + m_dob_b[i] * input;
            for (unsigned i = 0; i < 3; ++i)
              x[i] = y[i];
          }

          //! Parameters.
          Arguments m_args;
          //! Trim estimate H.
          double m_trim;
          //! Pitch tracking trim.
          double m_delta;
          //! Model rate after the heave lag.
          double m_rate_lpf;
          //! Moving average of the model rate.
          std::vector<double> m_ma;
          //! Moving average index.
          unsigned m_ma_idx;
          //! True when the filters are initialised.
          bool m_primed;
          //! Filtered lead term.
          double m_lead;
          //! True when the lead filter is initialised.
          bool m_lead_primed;
          //! Disturbance observer: filter of the depth and of g u sin(theta).
          double m_dob_z[3];
          double m_dob_s[3];
          //! Disturbance observer: estimate H / u (m/s).
          double m_dob_h;
          //! Disturbance observer: discrete filter and the time step and time
          //! constant it was computed for.
          double m_dob_a[3][3];
          double m_dob_b[3];
          double m_dob_dt;
          double m_dob_tq;
          //! Internal values.
          Debug m_debug;
        };
      }
    }
  }
}

#endif
