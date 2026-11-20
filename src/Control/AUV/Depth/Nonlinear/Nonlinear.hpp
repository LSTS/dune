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

#ifndef CONTROL_AUV_DEPTH_NONLINEAR_NONLINEAR_HPP_INCLUDED_
#define CONTROL_AUV_DEPTH_NONLINEAR_NONLINEAR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// Local headers.
#include "Observer.hpp"

namespace Control
{
  namespace AUV
  {
    namespace Depth
    {
      namespace Nonlinear
      {
        //! Nonlinear depth controllers at pitch reference level (the pitch
        //! loop of the autopilot is kept). All act on the states predicted
        //! by the Observer (z, w, h = H / u, theta, p, tau ahead) and on the
        //! heave model
        //!
        //!   Tz w' = -w + h - g u sin(theta)
        //!
        //! Reachable depth rates (as the cascade): v_down = margin (g u
        //! sin(-lo) + h), v_up = margin (g u sin(hi) - h), at least 0.03 m/s,
        //! with [lo, hi] the pitch the nominal pitch loop reaches.
        //!
        //! Backstepping (e1 = z - z_ref):
        //!   alpha1 = -v tanh(k1 e1 / v)  (v = v_up for e1 > 0, else v_down)
        //!   e2 = w - alpha1
        //!   sin(theta_d) = [h - w - Tz (alpha1' - k2 e2)] / (g u)
        //!
        //! Sliding mode (boundary layer):
        //!   w_r = sat(-lam e1, -v_up, v_down),  sigma = w - w_r
        //!   sin(theta_d) = [h - w - Tz w_r' + Tz K sat(sigma / Phi)] / (g u)
        //!
        //! Super-twisting (on the residual of the observer):
        //!   sin(theta_d) = [h - w - Tz w_r' + Tz (k1 phi(sigma) + v)] / (g u)
        //!   v' = k2 sat(sigma / eps)  (frozen near the surface and when it
        //!   pushes sin(theta_d) further into its limit)
        //!   phi(sigma) = |sigma|^1/2 sign(sigma) for |sigma| >= eps,
        //!   sigma / sqrt(eps) inside.
        //!
        //! sin(theta_d) goes through a second order command filter (bandwidth
        //! wf, damping 1, magnitude and rate limits) that gives the commanded
        //! pitch theta_c and its derivatives, and the pitch interface of the
        //! Observer turns them into the pitch reference.
        //!
        //! Units: rad, m, s. Only setup() allocates memory.
        class Nonlinear
        {
        public:
          //! Control laws.
          enum Law
          {
            //! Backstepping.
            LAW_BACKSTEPPING,
            //! Sliding mode with a boundary layer.
            LAW_SLIDING_MODE,
            //! Super-twisting sliding mode.
            LAW_SUPER_TWISTING
          };

          //! Parameters.
          struct Arguments
          {
            //! Model and observers.
            Observer::Arguments obs;
            //! Control law.
            Law law;
            //! Backstepping gains k1, k2 (1/s).
            double bs_k1;
            double bs_k2;
            //! Sliding mode: depth gain lambda (1/s).
            double sm_lambda;
            //! Sliding mode: switching gain K (m/s^2).
            double sm_gain;
            //! Sliding mode: boundary layer Phi (m/s).
            double sm_layer;
            //! Super-twisting: gains k1 (m^1/2/s^3/2... see class) and k2 (m/s^3).
            double st_k1;
            double st_k2;
            //! Super-twisting: boundary layer eps (m/s).
            double st_layer;
            //! Command filter bandwidth (rad/s).
            double filter_bandwidth;
            //! Command filter rate limit (rad/s).
            double filter_rate;
            //! Fraction of the reachable depth rate used.
            double rate_margin;
            //! Initial trim H (m^2/s^2).
            double initial_trim;
          };

          //! Internal values of the last step, for logging.
          struct Debug
          {
            //! Commanded pitch (rad).
            double theta_c;
            //! Backstepping: rate error e2; sliding mode: sigma (m/s).
            double error;
            //! Super-twisting integral v (m/s^2).
            double integral;
          };

          Nonlinear(void):
            m_valid(false),
            m_trim(0.0),
            m_offset(0.0),
            m_v(0.0)
          {
            m_cf[0] = 0.0;
            m_cf[1] = 0.0;
            m_debug.theta_c = 0.0;
            m_debug.error = 0.0;
            m_debug.integral = 0.0;
          }

          //! Set parameters. The estimates are kept.
          //! @param[in] args parameters.
          //! @param[in] reset_trim true to restart the trim and pitch offset
          //! estimates.
          //! @return false if the parameters are not valid: step() then
          //! returns the pitch it is given.
          bool
          setup(const Arguments& args, bool reset_trim)
          {
            m_args = args;

            if (reset_trim)
            {
              m_trim = m_args.initial_trim;
              m_offset = 0.0;
            }

            m_valid = m_obs.setup(m_args.obs);

            if (m_valid && reset_trim)
              m_obs.resetTrimVariance();

            return m_valid;
          }

          //! Start a period of depth control. The trim and pitch offset
          //! estimates are kept.
          //! @param[in] depth depth (m).
          //! @param[in] theta pitch (rad).
          //! @param[in] speed forward speed (m/s).
          void
          activate(double depth, double theta, double speed)
          {
            if (!m_valid)
              return;

            m_obs.reset(depth, theta, speed, m_trim, m_offset);
            m_cf[0] = std::sin(theta);
            m_cf[1] = 0.0;
            m_v = 0.0;
            m_debug.theta_c = 0.0;
            m_debug.error = 0.0;
            m_debug.integral = 0.0;
          }

          //! Compute the pitch reference. To be called at the control period.
          //! @param[in] zref depth reference (m).
          //! @param[in] depth depth (m).
          //! @param[in] theta pitch (rad).
          //! @param[in] speed forward speed (m/s).
          //! @return pitch reference (rad).
          double
          step(double zref, double depth, double theta, double speed)
          {
            if (!m_valid)
              return theta;

            m_obs.correct(depth, theta, speed);

            double z, w, h, th, p;
            m_obs.predict(z, w, h, th, p);

            const Observer::Matrices& mx = m_obs.matrices();
            const double gu = m_args.obs.heave_gain * mx.speed;
            const double tz = m_args.obs.heave_lag;
            double lo, hi;
            m_obs.reach(p, lo, hi);
            const double margin = m_args.rate_margin;
            const double v_dn = std::max(margin * (gu * std::sin(-lo) + h), 0.03);
            const double v_up = std::max(margin * (gu * std::sin(hi) - h), 0.03);
            const double slo = std::sin(lo);
            const double shi = std::sin(hi);
            const double e1 = z - zref;
            double s = 0.0;

            if (m_args.law == LAW_BACKSTEPPING)
            {
              const double k1 = m_args.bs_k1;
              const double v = (e1 > 0.0) ? v_up : v_dn;
              const double x = std::tanh(k1 * e1 / v);
              const double a1 = -v * x;
              const double a1d = -k1 * (1.0 - x * x) * w;
              const double e2 = w - a1;
              s = (h - w - tz * (a1d - m_args.bs_k2 * e2)) / gu;
              m_debug.error = e2;
            }
            else
            {
              double wr = -m_args.sm_lambda * e1;
              double wrd = -m_args.sm_lambda * w;
              if (wr > v_dn || wr < -v_up)
              {
                wr = Observer::clamp(wr, -v_up, v_dn);
                wrd = 0.0;
              }

              const double sg = w - wr;
              m_debug.error = sg;

              if (m_args.law == LAW_SLIDING_MODE)
              {
                const double x = sg / m_args.sm_layer;
                s = (h - w - tz * wrd + tz * m_args.sm_gain * Observer::clamp(x, -1.0, 1.0)) / gu;
              }
              else
              {
                const double e = m_args.st_layer;
                const double phi = (std::fabs(sg) >= e) ? std::copysign(std::sqrt(std::fabs(sg)), sg) : sg / std::sqrt(e);
                s = (h - w - tz * wrd + tz * (m_args.st_k1 * phi + m_v)) / gu;
                const double x = sg / e;
                // Conditional integration: not when it drives sin(theta_c)
                // further into its limit.
                if (depth > m_args.obs.surface_depth && !(s >= shi && x > 0.0) && !(s <= slo && x < 0.0))
                  m_v += m_args.obs.timestep * m_args.st_k2 * Observer::clamp(x, -1.0, 1.0);
                m_debug.integral = m_v;
              }
            }

            const double sdd = filter(s, slo, shi, m_args.filter_rate * std::cos(th));
            const double sc = Observer::clamp(m_cf[0], -0.99, 0.99);
            const double sd = m_cf[1];
            const double thc = std::asin(sc);
            const double c = std::cos(thc);
            const double thd = sd / c;
            const double thdd = (sdd + sc * thd * thd) / c;
            m_debug.theta_c = thc;

            const double ref = m_obs.pitchReference(thc, thd, thdd, th, p);
            m_trim = m_obs.getTrim();
            m_offset = m_obs.getPitchOffset();
            return ref;
          }

          //! Trim estimate H (m^2/s^2).
          double
          getTrim(void) const
          {
            return m_trim;
          }

          //! Pitch offset estimate (rad).
          double
          getPitchOffset(void) const
          {
            return m_offset;
          }

          //! Internal values of the last step.
          const Debug&
          getDebug(void) const
          {
            return m_debug;
          }

          //! True if the parameters are valid.
          bool
          isValid(void) const
          {
            return m_valid;
          }

        private:
          //! Second order command filter of sin(theta_c), two Euler substeps.
          //! @param[in] a input.
          //! @param[in] lo lower magnitude limit.
          //! @param[in] hi upper magnitude limit.
          //! @param[in] rmax rate limit.
          //! @return second derivative of the output.
          double
          filter(double a, double lo, double hi, double rmax)
          {
            const double w = m_args.filter_bandwidth;
            const double h = m_args.obs.timestep / 2.0;
            double acc = 0.0;

            for (unsigned i = 0; i < 2; ++i)
            {
              const double tgt = Observer::clamp(a, lo, hi);
              double v = (w / 2.0) * (tgt - m_cf[0]);
              v = Observer::clamp(v, -rmax, rmax);
              acc = 2.0 * w * (v - m_cf[1]);
              m_cf[0] += h * m_cf[1];
              m_cf[1] += h * acc;
            }

            return acc;
          }

          //! Parameters.
          Arguments m_args;
          //! True if the parameters are valid.
          bool m_valid;
          //! Observers.
          Observer m_obs;
          //! Trim estimate kept between periods of depth control.
          double m_trim;
          //! Pitch offset estimate kept between periods of depth control.
          double m_offset;
          //! Command filter state: sin(theta_c) and its derivative.
          double m_cf[2];
          //! Super-twisting integral.
          double m_v;
          //! Internal values.
          Debug m_debug;
        };
      }
    }
  }
}

#endif
