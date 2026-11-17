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

#ifndef CONTROL_AUV_DEPTH_NONLINEAR_OBSERVER_HPP_INCLUDED_
#define CONTROL_AUV_DEPTH_NONLINEAR_OBSERVER_HPP_INCLUDED_

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
      namespace Nonlinear
      {
        //! Heave and pitch observers of the depth controllers that work on
        //! the nominal vehicle model, with a predictor over the delay of the
        //! pitch loop and an interface that makes the pitch follow a
        //! commanded pitch through the pitch loop of the autopilot.
        //!
        //! Heave observer, x_h = [z, w, H], measurement: depth
        //!
        //!   z' = w,  Tz w' = -w + H / u - g u sin(theta_m),  H' = 0
        //!
        //! H is the trim (buoyancy and heave disturbance, depth rate at zero
        //! pitch times speed). The input is the sine of the MEASURED pitch,
        //! so a pitch sensor offset or an error of g ends up in H.
        //!
        //! Pitch observer, x_p = [theta, r, p], measurement: pitch. The
        //! closed pitch loop of the autopilot
        //!
        //!   theta'' + 2 zeta wn theta' + wn^2 theta
        //!     = wn^2 (k u(t - tau) + p) [+ beta u'(t - tau)]
        //!   wn^2 = c + b u^2 Kp,  2 zeta wn = a u + b u^2 Kd,
        //!   k = b u^2 Kp / wn^2,  beta = b u^2 Kd (0 when the pitch loop
        //!   does not differentiate the reference)
        //!
        //! with r = theta' - beta u and p a pitch tracking offset.
        //!
        //! Both are discretised at the control period (zero-order hold) for
        //! a schedule of speeds, with gains by pole placement: heave poles
        //! w_o (double) and w_h, pitch poles w_po (double) and w_p (rad/s).
        //! H and p are frozen near the surface.
        //!
        //! Predictor: both observers are run tau ahead with the pitch
        //! references already sent, so the control laws act on the state
        //! at the time their output reaches the fins.
        //!
        //! Pitch interface: the pitch reference u that makes the pitch follow
        //! theta_c through the nominal pitch loop,
        //!
        //!   wn^2 k u + beta u' = theta_c'' + 2 zeta wn theta_c' + wd^2 theta_c
        //!                        + (wn^2 - wd^2) theta(t + tau) - wn^2 p
        //!
        //! so that the nominal pitch error obeys e'' + 2 zeta wn e' + wd^2 e = 0.
        //! With beta > 0, u is the output of the filter 1 / (beta s + wn^2 k).
        //!
        //! Units: rad, m, s. Only setup() allocates memory.
        class Observer
        {
        public:
          //! Parameters.
          struct Arguments
          {
            //! Heave gain g (depth rate per u sin(theta)).
            double heave_gain;
            //! Heave lag Tz (s).
            double heave_lag;
            //! Pitch damping a (1/m).
            double pitch_damping;
            //! Fin effectiveness b (rad/m^2).
            double pitch_fin_gain;
            //! Pitch restoring stiffness c (1/s^2).
            double pitch_stiffness;
            //! Delay of the pitch loop tau (s).
            double pitch_delay;
            //! Proportional gain of the pitch controller of the autopilot.
            double pitch_kp;
            //! Derivative gain of the pitch controller of the autopilot.
            double pitch_kd;
            //! True when the pitch controller differentiates the reference.
            bool pitch_ref_rate;
            //! Control period (s).
            double timestep;
            //! Lowest speed of the schedule (m/s).
            double speed_min;
            //! Highest speed of the schedule (m/s).
            double speed_max;
            //! Speed step of the schedule (m/s).
            double speed_step;
            //! Heave observer pole of the depth and depth rate, double (rad/s).
            double depth_pole;
            //! Heave observer pole of the trim (rad/s).
            double trim_pole;
            //! Pitch observer pole of the pitch and pitch rate, double (rad/s).
            double pitch_pole;
            //! Pitch observer pole of the pitch offset (rad/s).
            double offset_pole;
            //! Natural frequency of the pitch error with the pitch interface (rad/s).
            double pitch_stiffness_target;
            //! Maximum pitch reference (rad).
            double max_pitch;
            //! Depth below which the trim and pitch offset are frozen (m).
            double surface_depth;
          };

          //! Observer matrices of one speed.
          struct Matrices
          {
            //! Speed of the model (m/s).
            double speed;
            //! Heave gain times speed.
            double gu;
            //! Heave observer: x+ = ah x + bh sin(theta), gain lh.
            double ah[3][3];
            double bh[3];
            double lh[3];
            //! Pitch observer: x+ = ap x + bp u, gain lp.
            double ap[3][3];
            double bp[3];
            double lp[3];
            //! Pitch loop: wn^2, 2 zeta wn, DC gain k, beta.
            double wn2;
            double two_zw;
            double k;
            double beta;
            //! Filter coefficient of the pitch interface.
            double a_beta;
          };

          Observer(void):
            m_valid(false),
            m_nd(0),
            m_key_min(0),
            m_key_max(0),
            m_mx(0),
            m_sm(0.0),
            m_u(0.0),
            m_uf(0.0)
          {
            for (unsigned i = 0; i < 3; ++i)
            {
              m_xh[i] = 0.0;
              m_xp[i] = 0.0;
            }
          }

          //! Set parameters and compute the matrices of the speed schedule.
          //! The states are kept.
          //! @param[in] args parameters.
          //! @return false if the parameters are not valid.
          bool
          setup(const Arguments& args)
          {
            m_args = args;
            m_valid = false;
            m_mx = 0;

            if (!(m_args.timestep > 0.0) || !(m_args.speed_step > 0.0) || !(m_args.speed_min > 0.0)
                || !(m_args.speed_max >= m_args.speed_min) || !(m_args.heave_lag > 0.0) || !(m_args.pitch_delay >= 0.0))
              return false;

            m_nd = static_cast<unsigned>(roundEven(m_args.pitch_delay / m_args.timestep));
            m_key_min = std::max(roundEven(m_args.speed_min / m_args.speed_step), 1L);
            m_key_max = std::max(roundEven(m_args.speed_max / m_args.speed_step), m_key_min);

            m_sched.assign(static_cast<size_t>(m_key_max - m_key_min + 1), Matrices());
            for (size_t i = 0; i < m_sched.size(); ++i)
            {
              if (!build(static_cast<double>(m_key_min + static_cast<long>(i)) * m_args.speed_step, m_sched[i]))
              {
                m_sched.clear();
                return false;
              }
            }

            m_buf.assign(m_nd, 0.0);
            m_mx = &m_sched[0];
            m_valid = true;
            return true;
          }

          //! Restart the observers.
          //! @param[in] depth depth (m).
          //! @param[in] theta pitch (rad).
          //! @param[in] speed forward speed (m/s).
          //! @param[in] trim initial trim H (m^2/s^2).
          //! @param[in] offset initial pitch offset (rad).
          void
          reset(double depth, double theta, double speed, double trim, double offset)
          {
            m_xh[0] = depth;
            m_xh[1] = 0.0;
            m_xh[2] = trim;
            m_xp[0] = theta;
            m_xp[1] = 0.0;
            m_xp[2] = offset;
            m_mx = &select(speed);
            const double u0 = (theta - offset) / m_mx->k;
            std::fill(m_buf.begin(), m_buf.end(), u0);
            m_u = u0;
            m_uf = u0;
            // r = theta' - beta u with theta' = 0.
            m_xp[1] = -m_mx->beta * u0;
          }

          //! Matrices of the scheduled speed nearest to the given one.
          //! @param[in] speed forward speed (m/s).
          const Matrices&
          select(double speed) const
          {
            long key = roundEven(speed / m_args.speed_step);
            key = std::min(std::max(key, m_key_min), m_key_max);
            return m_sched[static_cast<size_t>(key - m_key_min)];
          }

          //! Index in the schedule of the matrices in use.
          size_t
          index(void) const
          {
            return static_cast<size_t>(m_mx - &m_sched[0]);
          }

          //! Correction with the measured depth and pitch.
          //! @param[in] depth depth (m).
          //! @param[in] theta pitch (rad).
          //! @param[in] speed forward speed (m/s).
          void
          correct(double depth, double theta, double speed)
          {
            m_mx = &select(speed);
            const Matrices& mx = *m_mx;
            const double ih = depth - m_xh[0];
            const double ip = theta - m_xp[0];
            const unsigned n = (depth < m_args.surface_depth) ? 2 : 3;

            for (unsigned i = 0; i < n; ++i)
            {
              m_xh[i] = m_xh[i] + mx.lh[i] * ih;
              m_xp[i] = m_xp[i] + mx.lp[i] * ip;
            }

            m_sm = std::sin(theta);
          }

          //! Prediction over the delay of the pitch loop.
          //! @param[out] z depth (m).
          //! @param[out] w depth rate (m/s).
          //! @param[out] h trim over speed H / u (m/s).
          //! @param[out] theta pitch (rad).
          //! @param[out] offset pitch offset (rad).
          void
          predict(double& z, double& w, double& h, double& theta, double& offset) const
          {
            const Matrices& mx = *m_mx;
            double xh[3] = {m_xh[0], m_xh[1], m_xh[2]};
            double xp[3] = {m_xp[0], m_xp[1], m_xp[2]};
            double s = m_sm;

            for (unsigned j = 0; j < m_nd; ++j)
            {
              propagate(mx.ah, mx.bh, s, xh);
              propagate(mx.ap, mx.bp, m_buf[j], xp);
              s = std::sin(xp[0]);
            }

            z = xh[0];
            w = xh[1];
            h = xh[2] / mx.speed;
            theta = xp[0];
            offset = xp[2];
          }

          //! Pitch reference that makes the pitch follow a commanded pitch
          //! (pitch interface), within the maximum pitch reference. The
          //! observers are advanced with it.
          //! @param[in] thc commanded pitch (rad).
          //! @param[in] thd_c its first derivative (rad/s).
          //! @param[in] thdd_c its second derivative (rad/s^2).
          //! @param[in] th_p predicted pitch (rad).
          //! @param[in] p predicted pitch offset (rad).
          //! @return pitch reference (rad).
          double
          pitchReference(double thc, double thd_c, double thdd_c, double th_p, double p)
          {
            const Matrices& mx = *m_mx;
            const double wd2 = m_args.pitch_stiffness_target * m_args.pitch_stiffness_target;
            const double rhs = thdd_c + mx.two_zw * thd_c + wd2 * thc + (mx.wn2 - wd2) * th_p - mx.wn2 * p;
            const double ut = rhs / (mx.wn2 * mx.k);
            m_uf += mx.a_beta * (ut - m_uf);
            const double u = clamp(m_uf, -m_args.max_pitch, m_args.max_pitch);
            m_uf = clamp(m_uf, -m_args.max_pitch, m_args.max_pitch);
            advance(u);
            return u;
          }

          //! Advance the observers one control period with the pitch
          //! reference sent now.
          //! @param[in] u pitch reference (rad).
          void
          advance(double u)
          {
            const Matrices& mx = *m_mx;
            const double ud = (m_nd > 0) ? m_buf[0] : u;
            propagate(mx.ah, mx.bh, m_sm, m_xh);
            propagate(mx.ap, mx.bp, ud, m_xp);

            if (m_nd > 0)
            {
              for (unsigned i = 0; i + 1 < m_nd; ++i)
                m_buf[i] = m_buf[i + 1];
              m_buf[m_nd - 1] = u;
            }

            m_u = u;
          }

          //! Measured pitch range reached by the nominal pitch loop with the
          //! pitch reference within the maximum, with the pitch offset p.
          //! @param[in] p pitch offset (rad).
          //! @param[out] lo nose down limit (rad).
          //! @param[out] hi nose up limit (rad).
          void
          reach(double p, double& lo, double& hi) const
          {
            const double m = m_args.max_pitch * m_mx->k;
            lo = -m + p;
            hi = m + p;
          }

          //! Matrices in use.
          const Matrices&
          matrices(void) const
          {
            return *m_mx;
          }

          //! Matrices of the schedule.
          const std::vector<Matrices>&
          schedule(void) const
          {
            return m_sched;
          }

          //! Heave observer state [z, w, H].
          const double*
          heave(void) const
          {
            return m_xh;
          }

          //! Pitch observer state [theta, r, p].
          const double*
          pitch(void) const
          {
            return m_xp;
          }

          //! Pitch references in the delay of the pitch loop, oldest first.
          std::vector<double>&
          delayed(void)
          {
            return m_buf;
          }

          //! Control periods of the delay of the pitch loop.
          unsigned
          delaySteps(void) const
          {
            return m_nd;
          }

          //! Trim estimate H (m^2/s^2).
          double
          getTrim(void) const
          {
            return m_xh[2];
          }

          //! Pitch offset estimate (rad).
          double
          getPitchOffset(void) const
          {
            return m_xp[2];
          }

          //! True if the parameters are valid.
          bool
          isValid(void) const
          {
            return m_valid;
          }

          static double
          clamp(double value, double lower, double upper)
          {
            return (value < lower) ? lower : ((value > upper) ? upper : value);
          }

          //! Round to nearest, ties to even.
          static long
          roundEven(double value)
          {
            return static_cast<long>(std::nearbyint(value));
          }

          //! Zero-order hold discretisation of x' = a x + b u over dt.
          //! @param[in] a state matrix (n x n, row major).
          //! @param[in] b input vector (n).
          //! @param[in] n states (at most 4).
          //! @param[in] dt period (s).
          //! @param[out] ad discrete state matrix.
          //! @param[out] bd discrete input vector.
          static void
          discretise(const double* a, const double* b, unsigned n, double dt, double* ad, double* bd)
          {
            double m[25] = {0.0};
            double e[25];
            const unsigned s = n + 1;

            for (unsigned i = 0; i < n; ++i)
            {
              for (unsigned j = 0; j < n; ++j)
                m[i * s + j] = a[i * n + j] * dt;
              m[i * s + n] = b[i] * dt;
            }

            exponential(m, s, e);

            for (unsigned i = 0; i < n; ++i)
            {
              for (unsigned j = 0; j < n; ++j)
                ad[i * n + j] = e[i * s + j];
              bd[i] = e[i * s + n];
            }
          }

          //! Matrix exponential (n at most 5): scaling and squaring with a
          //! Taylor series.
          static void
          exponential(const double* m, unsigned n, double* result)
          {
            double norm = 0.0;
            for (unsigned j = 0; j < n; ++j)
            {
              double s = 0.0;
              for (unsigned i = 0; i < n; ++i)
                s += std::fabs(m[i * n + j]);
              norm = std::max(norm, s);
            }

            unsigned squarings = 0;
            double scale = 1.0;
            while (norm * scale > 0.25 && squarings < 60)
            {
              scale *= 0.5;
              ++squarings;
            }

            double ms[25];
            double term[25];
            double t2[25];
            for (unsigned i = 0; i < n * n; ++i)
            {
              ms[i] = m[i] * scale;
              term[i] = (i % (n + 1) == 0) ? 1.0 : 0.0;
              result[i] = term[i];
            }

            for (unsigned k = 1; k <= 24; ++k)
            {
              multiply(term, ms, n, t2);
              for (unsigned i = 0; i < n * n; ++i)
              {
                term[i] = t2[i] / static_cast<double>(k);
                result[i] += term[i];
              }
            }

            for (unsigned k = 0; k < squarings; ++k)
            {
              multiply(result, result, n, t2);
              for (unsigned i = 0; i < n * n; ++i)
                result[i] = t2[i];
            }
          }

        private:
          static void
          multiply(const double* a, const double* b, unsigned n, double* c)
          {
            for (unsigned i = 0; i < n; ++i)
            {
              for (unsigned j = 0; j < n; ++j)
              {
                double s = 0.0;
                for (unsigned k = 0; k < n; ++k)
                  s += a[i * n + k] * b[k * n + j];
                c[i * n + j] = s;
              }
            }
          }

          //! x = a x + b u.
          static void
          propagate(const double a[3][3], const double b[3], double u, double* x)
          {
            double y[3];
            for (unsigned i = 0; i < 3; ++i)
              y[i] = (a[i][0] * x[0] + a[i][1] * x[1] + a[i][2] * x[2]) + b[i] * u;
            for (unsigned i = 0; i < 3; ++i)
              x[i] = y[i];
          }

          //! Observer gain of a single-output system (Ackermann's formula):
          //! a - l c has the given discrete poles, c = [1, 0, 0].
          static bool
          ackermann(const double a[3][3], const double poles[3], double l[3])
          {
            // Observability matrix: rows c, c a, c a^2.
            double o[3][3];
            double a2[3][3];
            for (unsigned i = 0; i < 3; ++i)
            {
              for (unsigned j = 0; j < 3; ++j)
                a2[i][j] = a[i][0] * a[0][j] + a[i][1] * a[1][j] + a[i][2] * a[2][j];
            }
            for (unsigned j = 0; j < 3; ++j)
            {
              o[0][j] = (j == 0) ? 1.0 : 0.0;
              o[1][j] = a[0][j];
              o[2][j] = a2[0][j];
            }

            // phi = (a - p0 I)(a - p1 I)(a - p2 I).
            double phi[3][3];
            double t[3][3];
            for (unsigned i = 0; i < 3; ++i)
              for (unsigned j = 0; j < 3; ++j)
                phi[i][j] = (i == j) ? 1.0 : 0.0;

            for (unsigned k = 0; k < 3; ++k)
            {
              for (unsigned i = 0; i < 3; ++i)
              {
                for (unsigned j = 0; j < 3; ++j)
                {
                  double s = 0.0;
                  for (unsigned q = 0; q < 3; ++q)
                    s += phi[i][q] * (a[q][j] - ((q == j) ? poles[k] : 0.0));
                  t[i][j] = s;
                }
              }
              for (unsigned i = 0; i < 3; ++i)
                for (unsigned j = 0; j < 3; ++j)
                  phi[i][j] = t[i][j];
            }

            // Solve o v = e3 (Gaussian elimination, partial pivoting).
            double m[3][4];
            for (unsigned i = 0; i < 3; ++i)
            {
              for (unsigned j = 0; j < 3; ++j)
                m[i][j] = o[i][j];
              m[i][3] = (i == 2) ? 1.0 : 0.0;
            }

            for (unsigned c = 0; c < 3; ++c)
            {
              unsigned piv = c;
              for (unsigned i = c + 1; i < 3; ++i)
              {
                if (std::fabs(m[i][c]) > std::fabs(m[piv][c]))
                  piv = i;
              }

              if (!(std::fabs(m[piv][c]) > 0.0))
                return false;

              for (unsigned j = 0; j < 4; ++j)
                std::swap(m[c][j], m[piv][j]);

              for (unsigned i = c + 1; i < 3; ++i)
              {
                const double f = m[i][c] / m[c][c];
                for (unsigned j = c; j < 4; ++j)
                  m[i][j] -= f * m[c][j];
              }
            }

            double v[3];
            for (unsigned i = 3; i-- > 0;)
            {
              double s = m[i][3];
              for (unsigned j = i + 1; j < 3; ++j)
                s -= m[i][j] * v[j];
              v[i] = s / m[i][i];
            }

            for (unsigned i = 0; i < 3; ++i)
              l[i] = phi[i][0] * v[0] + phi[i][1] * v[1] + phi[i][2] * v[2];

            return true;
          }

          //! Matrices of one speed.
          bool
          build(double speed, Matrices& mx) const
          {
            const double dt = m_args.timestep;
            const double tz = m_args.heave_lag;
            mx.speed = speed;
            mx.gu = m_args.heave_gain * speed;

            const double ahc[9] = {0.0, 1.0, 0.0, 0.0, -1.0 / tz, 1.0 / (tz * speed), 0.0, 0.0, 0.0};
            const double bhc[3] = {0.0, -mx.gu / tz, 0.0};
            double ad[9];
            discretise(ahc, bhc, 3, dt, ad, mx.bh);
            for (unsigned i = 0; i < 3; ++i)
              for (unsigned j = 0; j < 3; ++j)
                mx.ah[i][j] = ad[i * 3 + j];

            const double ph[3] = {std::exp(-m_args.depth_pole * dt), std::exp(-m_args.depth_pole * dt),
                                  std::exp(-m_args.trim_pole * dt)};
            if (!ackermann(mx.ah, ph, mx.lh))
              return false;

            const double bu = m_args.pitch_fin_gain * speed * speed;
            mx.wn2 = m_args.pitch_stiffness + bu * m_args.pitch_kp;
            mx.two_zw = m_args.pitch_damping * speed + bu * m_args.pitch_kd;
            mx.k = bu * m_args.pitch_kp / mx.wn2;
            mx.beta = m_args.pitch_ref_rate ? bu * m_args.pitch_kd : 0.0;

            if (!(mx.wn2 > 0.0) || !(mx.k > 0.0))
              return false;

            const double apc[9] = {0.0, 1.0, 0.0, -mx.wn2, -mx.two_zw, mx.wn2, 0.0, 0.0, 0.0};
            const double bpc[3] = {mx.beta, mx.wn2 * mx.k - mx.two_zw * mx.beta, 0.0};
            discretise(apc, bpc, 3, dt, ad, mx.bp);
            for (unsigned i = 0; i < 3; ++i)
              for (unsigned j = 0; j < 3; ++j)
                mx.ap[i][j] = ad[i * 3 + j];

            const double pp[3] = {std::exp(-m_args.pitch_pole * dt), std::exp(-m_args.pitch_pole * dt),
                                  std::exp(-m_args.offset_pole * dt)};
            if (!ackermann(mx.ap, pp, mx.lp))
              return false;

            mx.a_beta = (mx.beta > 0.0) ? 1.0 - std::exp(-dt * mx.wn2 * mx.k / mx.beta) : 1.0;
            return true;
          }

          //! Parameters.
          Arguments m_args;
          //! True if the parameters are valid.
          bool m_valid;
          //! Control periods of the delay of the pitch loop.
          unsigned m_nd;
          //! Speed schedule: first and last index (speed = index x step).
          long m_key_min;
          long m_key_max;
          //! Matrices of the speed schedule.
          std::vector<Matrices> m_sched;
          //! Matrices in use.
          const Matrices* m_mx;
          //! Heave observer state [z, w, H].
          double m_xh[3];
          //! Pitch observer state [theta, r, p].
          double m_xp[3];
          //! Pitch references in the delay, oldest first.
          std::vector<double> m_buf;
          //! Sine of the measured pitch of this control period.
          double m_sm;
          //! Last pitch reference.
          double m_u;
          //! Filtered pitch reference of the pitch interface.
          double m_uf;
        };
      }
    }
  }
}

#endif
