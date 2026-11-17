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

#ifndef CONTROL_AUV_DEPTH_MPC_MPC_HPP_INCLUDED_
#define CONTROL_AUV_DEPTH_MPC_MPC_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>
#include <vector>
#include <algorithm>

// Local headers.
#include "Solver.hpp"

namespace Control
{
  namespace AUV
  {
    namespace Depth
    {
      namespace MPC
      {
        //! Depth controller at pitch reference level: offset-free model
        //! predictive control (the pitch loop of the autopilot is kept).
        //!
        //! Prediction model (linear, scheduled with the measured speed u on
        //! a grid of speeds, one model per grid point computed in setup()):
        //!
        //!   pitch loop  theta'' + 2 zeta wn theta' + wn^2 theta
        //!                 = wn^2 (k r(t - tau) + p) [+ b u^2 pKd r'(t - tau)]
        //!               wn^2 = c + b u^2 pKp,  2 zeta wn = a u + b u^2 pKd,
        //!               k = b u^2 pKp / wn^2
        //!   heave       zd' = (-g u theta + H / u - zd) / Tz,  z' = zd
        //!
        //! with r the pitch reference, H the trim (buoyancy) and p a pitch
        //! offset, both constant along the horizon.
        //!
        //! Estimator: steady-state Kalman filter at the control rate on
        //! [z, zd, theta, q, H, p] from depth and pitch. The process noise
        //! of H and p is found by bisection so that their estimates have
        //! the requested time constants. H and p are frozen near the surface.
        //!
        //! Controller: every solve period, blocked moves of the pitch
        //! reference (plus two slack variables) minimise
        //!
        //!   sum qz (z_k - z_ref)^2 + qv zd_k^2 + rd du^2 + slack penalties
        //!
        //! subject to |r| <= maximum pitch, |du| <= move limit and the soft
        //! constraints minimum depth <= z_k <= depth limit. The pitch
        //! reference ramps linearly to the new value during the solve period.
        //!
        //! QP: min 1/2 v'Pv + q'v, l <= A v <= u, solved with ADMM (Solver:
        //! OSQP iteration, scaled, adaptive rho, warm start). When the
        //! unconstrained minimiser is feasible it is used directly. When
        //! ADMM does not converge within the iteration budget, the previous
        //! plan shifted by one solve period is used.
        //!
        //! step() does not allocate memory.
        class MPC
        {
        public:
          //! Parameters.
          struct Arguments
          {
            //! Heave gain g (depth rate per u sin(theta)).
            double heave_gain;
            //! Heave lag Tz (s).
            double heave_lag;
            //! Pitch damping a (pitch rate damping per unit of speed, 1/m).
            double pitch_damping;
            //! Fin effectiveness b (pitch acceleration per rad of fin and (m/s)^2).
            double pitch_fin_gain;
            //! Pitch restoring stiffness c (1/s^2).
            double pitch_stiffness;
            //! Delay of the pitch loop tau (s).
            double pitch_delay;
            //! Proportional gain of the pitch controller of the autopilot.
            double pitch_kp;
            //! Derivative gain of the pitch controller of the autopilot.
            double pitch_kd;
            //! True when the pitch controller of the autopilot differentiates
            //! the pitch reference.
            bool pitch_ref_rate;
            //! Control period (s).
            double timestep;
            //! Lowest speed of the model schedule (m/s).
            double speed_min;
            //! Highest speed of the model schedule (m/s).
            double speed_max;
            //! Speed step of the model schedule (m/s).
            double speed_step;
            //! Prediction horizon (s).
            double horizon;
            //! Solve period (s).
            double solve_period;
            //! Solve periods of the horizon at which the pitch reference may move.
            std::vector<unsigned> moves;
            //! Depth error weight qz (1/m^2).
            double depth_weight;
            //! Depth rate weight qv (1/(m/s)^2).
            double rate_weight;
            //! Move weight rd (1/rad^2).
            double move_weight;
            //! Maximum rate of the pitch reference (rad/s).
            double move_limit;
            //! Time constant of the trim estimate (s).
            double trim_time;
            //! Time constant of the pitch offset estimate (s).
            double offset_time;
            //! Maximum pitch reference (rad).
            double max_pitch;
            //! Depth below which the estimates are frozen (m).
            double surface_depth;
            //! Initial trim H (m^2/s^2).
            double initial_trim;
            //! Depth limit, soft constraint (m).
            double depth_limit;
            //! Weight of the soft constraints, relative to qz times the horizon steps.
            double slack_weight;
            //! Maximum number of solver iterations.
            unsigned max_iterations;
          };

          MPC(void):
            m_valid(false),
            m_ns(1),
            m_np(0),
            m_nm(0),
            m_nd(0),
            m_nz(0),
            m_nc(0),
            m_nv(0),
            m_mc(0),
            m_key_min(0),
            m_key_max(0),
            m_count(0),
            m_ref(0.0),
            m_ref_start(0.0),
            m_ref_target(0.0),
            m_iterations(0),
            m_fallback(false),
            m_solves(0),
            m_solves_admm(0),
            m_budget_hits(0)
          {
            for (unsigned i = 0; i < c_ne; ++i)
              m_xh[i] = 0.0;
          }

          //! Set parameters and compute the models. The estimates are kept.
          //! This is the expensive call (one Kalman gain bisection per speed
          //! of the schedule) and it allocates memory. When only the
          //! iteration budget or the initial trim change, the models are
          //! kept.
          //! @param[in] args parameters.
          //! @param[in] reset_trim true to restart the trim and pitch
          //! offset estimates.
          //! @return false if the parameters are not valid: step() then
          //! returns the pitch it is given.
          bool
          setup(const Arguments& args, bool reset_trim)
          {
            if (reset_trim)
            {
              m_xh[4] = args.initial_trim;
              m_xh[5] = 0.0;
            }

            if (m_valid && sameModels(args, m_args))
            {
              m_args = args;
              return true;
            }

            m_args = args;
            m_valid = false;
            m_solves = 0;
            m_solves_admm = 0;
            m_budget_hits = 0;

            if (!(m_args.timestep > 0.0) || !(m_args.solve_period > 0.0) || !(m_args.horizon > 0.0)
                || !(m_args.speed_step > 0.0) || !(m_args.speed_min > 0.0) || !(m_args.speed_max >= m_args.speed_min)
                || !(m_args.heave_lag > 0.0) || !(m_args.pitch_delay >= 0.0))
              return false;

            m_ns = static_cast<unsigned>(
              std::max(Solver::roundEven(m_args.solve_period / m_args.timestep), 1L));
            m_np = static_cast<unsigned>(
              std::max(Solver::roundEven(m_args.horizon / m_args.solve_period), 1L));
            m_nd = static_cast<unsigned>(Solver::roundEven(m_args.pitch_delay / m_args.timestep));

            m_moves.clear();
            for (unsigned i = 0; i < m_args.moves.size(); ++i)
            {
              if (m_args.moves[i] < m_np)
                m_moves.push_back(m_args.moves[i]);
            }
            std::sort(m_moves.begin(), m_moves.end());
            m_moves.erase(std::unique(m_moves.begin(), m_moves.end()), m_moves.end());

            if (m_moves.empty())
              return false;

            m_nm = static_cast<unsigned>(m_moves.size());
            m_nz = c_nx + m_nd + 1;
            m_nv = m_nm + 2;

            // Steps of the horizon with the soft depth constraints.
            m_kc.clear();
            for (unsigned k = 1; k < m_np; k += 2)
              m_kc.push_back(k);
            m_nc = static_cast<unsigned>(m_kc.size());
            m_mc = 2 * m_nm + 2 * m_nc + 2;

            // Plan shifted by one solve period: move i takes the value of
            // the move one period later, if there is one.
            m_shift.assign(m_nm, -1);
            for (unsigned i = 0; i < m_nm; ++i)
            {
              for (unsigned j = 0; j < m_nm; ++j)
              {
                if (m_moves[j] == m_moves[i] + 1)
                  m_shift[i] = static_cast<int>(j);
              }
            }

            m_key_min = Solver::roundEven(m_args.speed_min / m_args.speed_step);
            m_key_max = Solver::roundEven(m_args.speed_max / m_args.speed_step);
            if (m_key_min < 1)
              m_key_min = 1;
            if (m_key_max < m_key_min)
              m_key_max = m_key_min;

            m_models.assign(static_cast<size_t>(m_key_max - m_key_min + 1), Model());
            for (size_t i = 0; i < m_models.size(); ++i)
            {
              if (!build(static_cast<double>(m_key_min + static_cast<long>(i)) * m_args.speed_step, m_models[i]))
              {
                m_models.clear();
                return false;
              }
            }

            m_buf.assign(m_nd, 0.0);
            m_z0.assign(m_nz, 0.0);
            m_free_z.assign(m_np, 0.0);
            m_free_v.assign(m_np, 0.0);
            m_g.assign(m_nm, 0.0);
            m_du.assign(m_nm, 0.0);
            m_plan.assign(m_nm, 0.0);
            m_q.assign(m_nv, 0.0);
            m_lb.assign(m_mc, 0.0);
            m_ub.assign(m_mc, 0.0);
            m_solver.resize(m_nv, m_mc);

            m_valid = true;
            restart(m_xh[0], m_xh[1], m_xh[2]);

            return true;
          }

          //! Start a period of depth control. The trim and pitch offset
          //! estimates are kept.
          //! @param[in] depth depth (m).
          //! @param[in] rate depth rate (m/s).
          //! @param[in] theta pitch (rad).
          void
          activate(double depth, double rate, double theta)
          {
            restart(depth, rate, theta);
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

            long key = Solver::roundEven(speed / m_args.speed_step);
            key = std::min(std::max(key, m_key_min), m_key_max);
            Model& md = m_models[static_cast<size_t>(key - m_key_min)];

            // Kalman update.
            const double inn_z = depth - m_xh[0];
            const double inn_t = theta - m_xh[2];
            const unsigned n_upd = (depth < m_args.surface_depth) ? c_nx : c_ne;
            for (unsigned i = 0; i < n_upd; ++i)
              m_xh[i] += md.k[i][0] * inn_z + md.k[i][1] * inn_t;

            if (m_count == 0)
              solve(md, zref);

            m_count = (m_count + 1) % m_ns;

            // Ramp to the target.
            const unsigned j = (m_count != 0) ? m_count : m_ns;
            const double ref = m_ref_start
                               + (static_cast<double>(j) / static_cast<double>(m_ns)) * (m_ref_target - m_ref_start);

            // Predict.
            const double delayed = (m_nd > 0) ? m_buf[0] : ref;
            double x[c_nx];
            for (unsigned i = 0; i < c_nx; ++i)
            {
              double s = 0.0;
              for (unsigned k = 0; k < c_nx; ++k)
                s += md.a[i][k] * m_xh[k];
              x[i] = s + md.b[i] * delayed + (md.e[i][0] * m_xh[4] + md.e[i][1] * m_xh[5]);
            }
            for (unsigned i = 0; i < c_nx; ++i)
              m_xh[i] = x[i];

            if (m_nd > 0)
            {
              for (unsigned i = 0; i + 1 < m_nd; ++i)
                m_buf[i] = m_buf[i + 1];
              m_buf[m_nd - 1] = ref;
            }

            m_ref = ref;

            return ref;
          }

          //! Trim estimate H (m^2/s^2).
          double
          getTrim(void) const
          {
            return m_xh[4];
          }

          //! Pitch offset estimate (rad).
          double
          getPitchOffset(void) const
          {
            return m_xh[5];
          }

          //! Pitch reference the ramp is heading to (rad).
          double
          getTarget(void) const
          {
            return m_ref_target;
          }

          //! Solver iterations of the last solve (0 when the unconstrained
          //! minimiser was feasible).
          unsigned
          getIterations(void) const
          {
            return m_iterations;
          }

          //! True if the last solve did not converge within the iteration
          //! budget and the shifted previous plan was used.
          bool
          isFallback(void) const
          {
            return m_fallback;
          }

          //! Number of solves since the last setup().
          unsigned
          getSolves(void) const
          {
            return m_solves;
          }

          //! Number of solves that needed the iterative solver since the
          //! last setup().
          unsigned
          getIterativeSolves(void) const
          {
            return m_solves_admm;
          }

          //! Number of solves that did not converge within the iteration
          //! budget since the last setup().
          unsigned
          getBudgetHits(void) const
          {
            return m_budget_hits;
          }

          //! Number of models of the speed schedule.
          unsigned
          getModelCount(void) const
          {
            return static_cast<unsigned>(m_models.size());
          }

          //! True if the parameters are valid.
          bool
          isValid(void) const
          {
            return m_valid;
          }

        private:
          //! States of the pitch and heave model: z, zd, theta, q.
          static const unsigned c_nx = 4;
          //! States of the estimator: model states, H and p.
          static const unsigned c_ne = 6;

          //! Model and QP data of one speed.
          struct Model
          {
            //! Discrete model at the control period: x+ = a x + b r + e [H, p].
            double a[c_nx][c_nx];
            double b[c_nx];
            double e[c_nx][2];
            //! Kalman gain (depth, pitch).
            double k[c_ne][2];
            //! Predicted depth and depth rate along the horizon from the
            //! initial state, the moves and the disturbances.
            Matrix sxz, sxv, suz, suv, sdz, sdv;
            //! Cholesky factor of the Hessian of the moves.
            Matrix hc;
            //! Slack weight.
            double ws;
            //! Scaled QP and solver state.
            Qp qp;
          };

          //! Matrix exponential: scaling and squaring with a Taylor series.
          static Matrix
          exponential(const Matrix& m)
          {
            const unsigned n = m.rows;

            double norm = 0.0;
            for (unsigned j = 0; j < n; ++j)
            {
              double s = 0.0;
              for (unsigned i = 0; i < n; ++i)
                s += std::fabs(m(i, j));
              norm = std::max(norm, s);
            }

            unsigned squarings = 0;
            double scale = 1.0;
            while (norm * scale > 0.25 && squarings < 60)
            {
              scale *= 0.5;
              ++squarings;
            }

            Matrix ms(n, n);
            for (size_t i = 0; i < ms.data.size(); ++i)
              ms.data[i] = m.data[i] * scale;

            Matrix result = Solver::identity(n);
            Matrix term = Solver::identity(n);
            for (unsigned k = 1; k <= 24; ++k)
            {
              term = Solver::multiply(term, ms);
              for (size_t i = 0; i < term.data.size(); ++i)
              {
                term.data[i] /= static_cast<double>(k);
                result.data[i] += term.data[i];
              }
            }

            for (unsigned k = 0; k < squarings; ++k)
              result = Solver::multiply(result, result);

            return result;
          }

          //! Steady-state Kalman gain by iteration of the Riccati equation,
          //! measurements: states 0 (depth) and 2 (pitch).
          //! @param[in] a state matrix.
          //! @param[in] q process noise variances.
          //! @param[in] r measurement noise variances.
          //! @param[in] iterations maximum number of iterations.
          //! @param[out] k gain.
          static void
          kalmanGain(const double a[c_ne][c_ne], const double q[c_ne], const double r[2], unsigned iterations,
                     double k[c_ne][2])
          {
            double p[c_ne][c_ne];
            double pp[c_ne][c_ne];
            double t[c_ne][c_ne];

            for (unsigned i = 0; i < c_ne; ++i)
            {
              for (unsigned j = 0; j < c_ne; ++j)
                p[i][j] = (i == j) ? q[i] : 0.0;
              k[i][0] = 0.0;
              k[i][1] = 0.0;
            }

            for (unsigned it = 0; it < iterations; ++it)
            {
              // pp = a p a' + q.
              for (unsigned i = 0; i < c_ne; ++i)
              {
                for (unsigned j = 0; j < c_ne; ++j)
                {
                  double s = 0.0;
                  for (unsigned l = 0; l < c_ne; ++l)
                    s += a[i][l] * p[l][j];
                  t[i][j] = s;
                }
              }

              for (unsigned i = 0; i < c_ne; ++i)
              {
                for (unsigned j = 0; j < c_ne; ++j)
                {
                  double s = 0.0;
                  for (unsigned l = 0; l < c_ne; ++l)
                    s += t[i][l] * a[j][l];
                  pp[i][j] = s + ((i == j) ? q[i] : 0.0);
                }
              }

              // k = pp c' (c pp c' + r)^-1.
              const double s00 = pp[0][0] + r[0];
              const double s01 = pp[0][2];
              const double s10 = pp[2][0];
              const double s11 = pp[2][2] + r[1];
              const double det = s00 * s11 - s01 * s10;

              for (unsigned i = 0; i < c_ne; ++i)
              {
                k[i][0] = (pp[i][0] * s11 - pp[i][2] * s10) / det;
                k[i][1] = (pp[i][2] * s00 - pp[i][0] * s01) / det;
              }

              // p = (I - k c) pp.
              double change = 0.0;
              double size = 0.0;
              for (unsigned i = 0; i < c_ne; ++i)
              {
                for (unsigned j = 0; j < c_ne; ++j)
                {
                  const double v = pp[i][j] - (k[i][0] * pp[0][j] + k[i][1] * pp[2][j]);
                  change = std::max(change, std::fabs(v - p[i][j]));
                  size = std::max(size, std::fabs(p[i][j]));
                  p[i][j] = v;
                }
              }

              if (change < 1e-13 * (1.0 + size))
                break;
            }
          }

          //! Time for the estimate of a unit step of a disturbance to reach 63 %.
          //! @param[in] a state matrix.
          //! @param[in] k Kalman gain.
          //! @param[in] idx disturbance state.
          //! @return time (s).
          double
          responseTime(const double a[c_ne][c_ne], const double k[c_ne][2], unsigned idx) const
          {
            double x[c_ne];
            double xt[c_ne];
            double xn[c_ne];

            for (unsigned i = 0; i < c_ne; ++i)
            {
              x[i] = 0.0;
              xt[i] = (i == idx) ? 1.0 : 0.0;
            }

            const int steps = static_cast<int>(60.0 / m_args.timestep);
            for (int n = 0; n < steps; ++n)
            {
              const double inn_z = xt[0] - x[0];
              const double inn_t = xt[2] - x[2];
              for (unsigned i = 0; i < c_ne; ++i)
                x[i] += k[i][0] * inn_z + k[i][1] * inn_t;

              if (x[idx] >= 0.632)
                return n * m_args.timestep;

              for (unsigned i = 0; i < c_ne; ++i)
              {
                double s = 0.0;
                for (unsigned l = 0; l < c_ne; ++l)
                  s += a[i][l] * x[l];
                xn[i] = s;
              }
              for (unsigned i = 0; i < c_ne; ++i)
                x[i] = xn[i];

              for (unsigned i = 0; i < c_ne; ++i)
              {
                double s = 0.0;
                for (unsigned l = 0; l < c_ne; ++l)
                  s += a[i][l] * xt[l];
                xn[i] = s;
              }
              for (unsigned i = 0; i < c_ne; ++i)
                xt[i] = xn[i];
            }

            return 60.0;
          }

          //! Kalman gain with the process noise of H and p set so that their
          //! estimates have the requested time constants (bisection).
          void
          estimatorGain(const double a[c_ne][c_ne], double k[c_ne][2]) const
          {
            // Measurement noise: depth 0.02 m, pitch 0.3 degrees.
            const double pitch_noise = 0.3 * 3.14159265358979323846 / 180.0;
            const double r[2] = {0.02 * 0.02, pitch_noise * pitch_noise};
            double q[c_ne] = {1e-8, 1e-6, 1e-8, 1e-6, 0.0, 0.0};
            double lq[2] = {-9.0, -9.0};
            const double target[2] = {m_args.trim_time, m_args.offset_time};

            for (unsigned j = 0; j < 2; ++j)
            {
              double lo = -12.0;
              double hi = -2.0;

              for (unsigned n = 0; n < 14; ++n)
              {
                const double mid = 0.5 * (lo + hi);
                lq[j] = mid;
                q[4] = std::pow(10.0, lq[0]);
                q[5] = std::pow(10.0, lq[1]);
                kalmanGain(a, q, r, 1500, k);

                if (responseTime(a, k, c_nx + j) > target[j])
                  lo = mid;
                else
                  hi = mid;
              }

              lq[j] = 0.5 * (lo + hi);
            }

            q[4] = std::pow(10.0, lq[0]);
            q[5] = std::pow(10.0, lq[1]);
            kalmanGain(a, q, r, 1500, k);
          }

          //! Compute the model and the QP of one speed.
          //! @param[in] speed speed (m/s).
          //! @param[out] md model.
          //! @return false if the QP is not strictly convex.
          bool
          build(double speed, Model& md) const
          {
            const double dt = m_args.timestep;
            const double tz = m_args.heave_lag;
            const double bu = m_args.pitch_fin_gain * speed * speed;
            const double wn2 = m_args.pitch_stiffness + bu * m_args.pitch_kp;
            const double two_zw = m_args.pitch_damping * speed + bu * m_args.pitch_kd;
            const double k_dc = bu * m_args.pitch_kp / wn2;
            const double gu = m_args.heave_gain * speed;
            const double beta = m_args.pitch_ref_rate ? bu * m_args.pitch_kd : 0.0;

            // Continuous model [x, r, H, p], discretised with r, H and p
            // constant along the control period.
            Matrix mc(c_nx + 3, c_nx + 3);
            mc(0, 1) = 1.0;
            mc(1, 1) = -1.0 / tz;
            mc(1, 2) = -gu / tz;
            mc(2, 3) = 1.0;
            mc(3, 2) = -wn2;
            mc(3, 3) = -two_zw;
            mc(2, 4) = beta;
            mc(3, 4) = wn2 * k_dc - two_zw * beta;
            mc(1, 5) = 1.0 / (tz * speed);
            mc(3, 6) = wn2;

            for (size_t i = 0; i < mc.data.size(); ++i)
              mc.data[i] *= dt;

            const Matrix mdis = exponential(mc);

            for (unsigned i = 0; i < c_nx; ++i)
            {
              for (unsigned j = 0; j < c_nx; ++j)
                md.a[i][j] = mdis(i, j);
              md.b[i] = mdis(i, c_nx);
              md.e[i][0] = mdis(i, c_nx + 1);
              md.e[i][1] = mdis(i, c_nx + 2);
            }

            // Kalman filter on [x, H, p].
            double aa[c_ne][c_ne];
            for (unsigned i = 0; i < c_ne; ++i)
            {
              for (unsigned j = 0; j < c_ne; ++j)
                aa[i][j] = (i == j) ? 1.0 : 0.0;
            }
            for (unsigned i = 0; i < c_nx; ++i)
            {
              for (unsigned j = 0; j < c_nx; ++j)
                aa[i][j] = md.a[i][j];
              aa[i][4] = md.e[i][0];
              aa[i][5] = md.e[i][1];
            }

            estimatorGain(aa, md.k);

            // Model at the control period with the delay register, lifted to
            // the solve period with the ramped input.
            const unsigned nd = m_nd;
            const unsigned nf = c_nx + nd;
            const unsigned ns = m_ns;
            const unsigned nz = m_nz;
            const unsigned np = m_np;
            const unsigned nm = m_nm;

            Matrix f(nf, nf);
            Matrix g(nf, 1);
            Matrix ed(nf, 2);
            for (unsigned i = 0; i < c_nx; ++i)
            {
              for (unsigned j = 0; j < c_nx; ++j)
                f(i, j) = md.a[i][j];
              ed(i, 0) = md.e[i][0];
              ed(i, 1) = md.e[i][1];
            }

            if (nd > 0)
            {
              for (unsigned i = 0; i < c_nx; ++i)
                f(i, c_nx) = md.b[i];
              for (unsigned i = 0; i + 1 < nd; ++i)
                f(c_nx + i, c_nx + 1 + i) = 1.0;
              g(nf - 1, 0) = 1.0;
            }
            else
            {
              for (unsigned i = 0; i < c_nx; ++i)
                g(i, 0) = md.b[i];
            }

            std::vector<Matrix> fp(ns + 1);
            fp[0] = Solver::identity(nf);
            for (unsigned i = 1; i <= ns; ++i)
              fp[i] = Solver::multiply(fp[i - 1], f);

            Matrix g0(nf, 1);
            Matrix g1(nf, 1);
            for (unsigned j = 1; j <= ns; ++j)
            {
              const Matrix t = Solver::multiply(fp[ns - j], g);
              const double w = static_cast<double>(j) / static_cast<double>(ns);
              for (unsigned i = 0; i < nf; ++i)
              {
                g0(i, 0) += t(i, 0);
                g1(i, 0) += w * t(i, 0);
              }
            }

            Matrix es(nf, 2);
            for (unsigned j = 0; j < ns; ++j)
            {
              const Matrix t = Solver::multiply(fp[ns - 1 - j], ed);
              for (size_t i = 0; i < es.data.size(); ++i)
                es.data[i] += t.data[i];
            }

            // State [x, delay register, reference at the start of the period].
            Matrix az(nz, nz);
            Matrix bz(nz, 1);
            Matrix ez(nz, 2);
            for (unsigned i = 0; i < nf; ++i)
            {
              for (unsigned j = 0; j < nf; ++j)
                az(i, j) = fp[ns](i, j);
              az(i, nf) = g0(i, 0);
              bz(i, 0) = g1(i, 0);
              ez(i, 0) = es(i, 0);
              ez(i, 1) = es(i, 1);
            }
            az(nf, nf) = 1.0;
            bz(nf, 0) = 1.0;

            // Depth and depth rate along the horizon.
            md.sxz = Matrix(np, nz);
            md.sxv = Matrix(np, nz);
            md.suz = Matrix(np, nm);
            md.suv = Matrix(np, nm);
            md.sdz = Matrix(np, 2);
            md.sdv = Matrix(np, 2);

            Matrix xz = Solver::identity(nz);
            Matrix xu(nz, nm);
            Matrix xd(nz, 2);
            for (unsigned k = 0; k < np; ++k)
            {
              xz = Solver::multiply(az, xz);
              xu = Solver::multiply(az, xu);
              xd = Solver::multiply(az, xd);
              for (size_t i = 0; i < xd.data.size(); ++i)
                xd.data[i] += ez.data[i];

              for (unsigned i = 0; i < nm; ++i)
              {
                if (m_moves[i] != k)
                  continue;
                for (unsigned l = 0; l < nz; ++l)
                  xu(l, i) += bz(l, 0);
              }

              for (unsigned j = 0; j < nz; ++j)
              {
                md.sxz(k, j) = xz(0, j);
                md.sxv(k, j) = xz(1, j);
              }
              for (unsigned j = 0; j < nm; ++j)
              {
                md.suz(k, j) = xu(0, j);
                md.suv(k, j) = xu(1, j);
              }
              for (unsigned j = 0; j < 2; ++j)
              {
                md.sdz(k, j) = xd(0, j);
                md.sdv(k, j) = xd(1, j);
              }
            }

            // Hessian of the moves.
            Matrix hm(nm, nm);
            for (unsigned i = 0; i < nm; ++i)
            {
              for (unsigned j = 0; j < nm; ++j)
              {
                double sz = 0.0;
                double sv = 0.0;
                for (unsigned k = 0; k < np; ++k)
                {
                  sz += md.suz(k, i) * md.suz(k, j);
                  sv += md.suv(k, i) * md.suv(k, j);
                }
                hm(i, j) = m_args.depth_weight * sz + m_args.rate_weight * sv + ((i == j) ? m_args.move_weight : 0.0);
              }
            }

            md.hc = Matrix(nm, nm);
            if (!Solver::factorize(hm, md.hc, nm))
              return false;

            // QP in the moves and two slack variables.
            const unsigned nv = m_nv;
            const unsigned mc_rows = m_mc;
            const unsigned nc = m_nc;

            md.ws = m_args.slack_weight * m_args.depth_weight * static_cast<double>(np);
            if (!(md.ws > 0.0))
              return false;

            Matrix p(nv, nv);
            for (unsigned i = 0; i < nm; ++i)
            {
              for (unsigned j = 0; j < nm; ++j)
                p(i, j) = 2.0 * hm(i, j);
            }
            p(nm, nm) = 2.0 * md.ws;
            p(nm + 1, nm + 1) = 2.0 * md.ws;

            // Constraints: moves, pitch reference (cumulative moves), depth
            // limit (soft), minimum depth (soft), slacks.
            Matrix ac(mc_rows, nv);
            for (unsigned i = 0; i < nm; ++i)
            {
              ac(i, i) = 1.0;
              for (unsigned j = 0; j <= i; ++j)
                ac(nm + i, j) = 1.0;
            }
            for (unsigned i = 0; i < nc; ++i)
            {
              for (unsigned j = 0; j < nm; ++j)
              {
                ac(2 * nm + i, j) = md.suz(m_kc[i], j);
                ac(2 * nm + nc + i, j) = md.suz(m_kc[i], j);
              }
              ac(2 * nm + i, nm) = -1.0;
              ac(2 * nm + nc + i, nm + 1) = 1.0;
            }
            ac(mc_rows - 2, nm) = 1.0;
            ac(mc_rows - 1, nm + 1) = 1.0;

            // Scaling: variables by 1 / sqrt(P_ii), constraints to unit norm.
            md.qp.d.assign(nv, 0.0);
            for (unsigned i = 0; i < nv; ++i)
              md.qp.d[i] = 1.0 / std::sqrt(p(i, i));

            md.qp.p = Matrix(nv, nv);
            for (unsigned i = 0; i < nv; ++i)
            {
              for (unsigned j = 0; j < nv; ++j)
                md.qp.p(i, j) = p(i, j) * md.qp.d[i] * md.qp.d[j];
            }

            md.qp.am = Matrix(mc_rows, nv);
            md.qp.rn.assign(mc_rows, 1.0);
            for (unsigned i = 0; i < mc_rows; ++i)
            {
              double s = 0.0;
              for (unsigned j = 0; j < nv; ++j)
              {
                md.qp.am(i, j) = ac(i, j) * md.qp.d[j];
                s += md.qp.am(i, j) * md.qp.am(i, j);
              }

              s = std::sqrt(s);
              if (s == 0.0)
                s = 1.0;

              md.qp.rn[i] = s;
              for (unsigned j = 0; j < nv; ++j)
                md.qp.am(i, j) /= s;
            }

            md.qp.ata = Matrix(nv, nv);
            for (unsigned i = 0; i < nv; ++i)
            {
              for (unsigned j = 0; j < nv; ++j)
              {
                double s = 0.0;
                for (unsigned k = 0; k < mc_rows; ++k)
                  s += md.qp.am(k, i) * md.qp.am(k, j);
                md.qp.ata(i, j) = s;
              }
            }

            md.qp.kkt = Matrix(nv, nv);
            md.qp.x.assign(nv, 0.0);
            md.qp.y.assign(mc_rows, 0.0);

            return Solver::factorizeKKT(md.qp, Solver::c_rho);
          }

          //! Restart the states. The trim and pitch offset estimates are kept.
          void
          restart(double depth, double rate, double theta)
          {
            m_xh[0] = depth;
            m_xh[1] = rate;
            m_xh[2] = theta;
            m_xh[3] = 0.0;

            std::fill(m_buf.begin(), m_buf.end(), theta);
            std::fill(m_plan.begin(), m_plan.end(), 0.0);

            m_ref = theta;
            m_ref_start = theta;
            m_ref_target = theta;
            m_count = 0;
            m_iterations = 0;
            m_fallback = false;

            for (size_t i = 0; i < m_models.size(); ++i)
            {
              Model& md = m_models[i];
              std::fill(md.qp.x.begin(), md.qp.x.end(), 0.0);
              std::fill(md.qp.y.begin(), md.qp.y.end(), 0.0);
              if (md.qp.rho != Solver::c_rho)
                Solver::factorizeKKT(md.qp, Solver::c_rho);
            }
          }

          //! Compute the moves and set the target of the pitch reference.
          void
          solve(Model& md, double zref)
          {
            const unsigned np = m_np;
            const unsigned nm = m_nm;
            const unsigned nc = m_nc;
            const unsigned nz = m_nz;

            // Initial state: model states, delay register, current reference.
            for (unsigned i = 0; i < c_nx; ++i)
              m_z0[i] = m_xh[i];
            for (unsigned i = 0; i < m_nd; ++i)
              m_z0[c_nx + i] = m_buf[i];
            m_z0[nz - 1] = m_ref;

            // Depth and depth rate without moves. The depth reference is
            // held along the horizon, so the rate reference is zero.
            for (unsigned k = 0; k < np; ++k)
            {
              double sz = 0.0;
              double sv = 0.0;
              const double* rz = &md.sxz.data[static_cast<size_t>(k) * nz];
              const double* rv = &md.sxv.data[static_cast<size_t>(k) * nz];
              for (unsigned j = 0; j < nz; ++j)
              {
                sz += rz[j] * m_z0[j];
                sv += rv[j] * m_z0[j];
              }
              m_free_z[k] = sz + (md.sdz(k, 0) * m_xh[4] + md.sdz(k, 1) * m_xh[5]);
              m_free_v[k] = sv + (md.sdv(k, 0) * m_xh[4] + md.sdv(k, 1) * m_xh[5]);
            }

            // Gradient.
            for (unsigned i = 0; i < nm; ++i)
            {
              double sz = 0.0;
              double sv = 0.0;
              for (unsigned k = 0; k < np; ++k)
              {
                sz += md.suz(k, i) * (m_free_z[k] - zref);
                sv += md.suv(k, i) * m_free_v[k];
              }
              m_g[i] = m_args.depth_weight * sz + m_args.rate_weight * sv;
            }

            // Unconstrained minimiser.
            for (unsigned i = 0; i < nm; ++i)
              m_du[i] = -m_g[i];
            Solver::substitute(md.hc, nm, &m_du[0]);

            const double lim = m_args.move_limit * m_args.solve_period;
            const double umax = m_args.max_pitch;

            bool feasible = true;
            double u = m_ref;
            for (unsigned i = 0; i < nm && feasible; ++i)
            {
              u += m_du[i];
              feasible = (std::fabs(m_du[i]) <= lim) && (std::fabs(u) <= umax);
            }

            for (unsigned i = 0; i < nc && feasible; ++i)
            {
              double zp = m_free_z[m_kc[i]];
              for (unsigned j = 0; j < nm; ++j)
                zp += md.suz(m_kc[i], j) * m_du[j];
              feasible = (zp <= m_args.depth_limit) && (zp >= c_min_depth);
            }

            m_iterations = 0;
            m_fallback = false;

            if (!feasible)
            {
              for (unsigned i = 0; i < nm; ++i)
              {
                m_lb[i] = -lim;
                m_ub[i] = lim;
                m_lb[nm + i] = -umax - m_ref;
                m_ub[nm + i] = umax - m_ref;
                m_q[i] = 2.0 * m_g[i];
              }

              for (unsigned i = 0; i < nc; ++i)
              {
                const double zf = m_free_z[m_kc[i]];
                m_lb[2 * nm + i] = -c_big;
                m_ub[2 * nm + i] = m_args.depth_limit - zf;
                m_lb[2 * nm + nc + i] = c_min_depth - zf;
                m_ub[2 * nm + nc + i] = c_big;
              }

              m_lb[m_mc - 2] = 0.0;
              m_ub[m_mc - 2] = c_big;
              m_lb[m_mc - 1] = 0.0;
              m_ub[m_mc - 1] = c_big;
              m_q[nm] = 0.2 * md.ws;
              m_q[nm + 1] = 0.2 * md.ws;

              ++m_solves_admm;

              if (m_solver.iterate(md.qp, m_mc, m_args.max_iterations, &m_q[0], &m_lb[0], &m_ub[0],
                                   m_iterations))
              {
                for (unsigned i = 0; i < nm; ++i)
                  m_du[i] = md.qp.x[i] * md.qp.d[i];
              }
              else
              {
                // Previous plan, one solve period later.
                m_fallback = true;
                ++m_budget_hits;
                for (unsigned i = 0; i < nm; ++i)
                  m_du[i] = (m_shift[i] >= 0) ? m_plan[static_cast<size_t>(m_shift[i])] : 0.0;
              }
            }

            for (unsigned i = 0; i < nm; ++i)
              m_plan[i] = m_du[i];

            const double d0 = (m_moves[0] == 0) ? Solver::trim(m_du[0], -lim, lim) : 0.0;
            m_ref_start = m_ref;
            m_ref_target = Solver::trim(m_ref + d0, -umax, umax);
            ++m_solves;
          }

          //! True if two sets of parameters give the same models (they may
          //! differ in the iteration budget and the initial trim).
          static bool
          sameModels(const Arguments& a, const Arguments& b)
          {
            return a.heave_gain == b.heave_gain && a.heave_lag == b.heave_lag && a.pitch_damping == b.pitch_damping
                   && a.pitch_fin_gain == b.pitch_fin_gain && a.pitch_stiffness == b.pitch_stiffness
                   && a.pitch_delay == b.pitch_delay && a.pitch_kp == b.pitch_kp && a.pitch_kd == b.pitch_kd
                   && a.pitch_ref_rate == b.pitch_ref_rate && a.timestep == b.timestep && a.speed_min == b.speed_min
                   && a.speed_max == b.speed_max && a.speed_step == b.speed_step && a.horizon == b.horizon
                   && a.solve_period == b.solve_period && a.moves == b.moves && a.depth_weight == b.depth_weight
                   && a.rate_weight == b.rate_weight && a.move_weight == b.move_weight && a.move_limit == b.move_limit
                   && a.trim_time == b.trim_time && a.offset_time == b.offset_time && a.max_pitch == b.max_pitch
                   && a.surface_depth == b.surface_depth && a.depth_limit == b.depth_limit
                   && a.slack_weight == b.slack_weight;
          }

          //! Bound of the constraints without limit.
          static constexpr double c_big = 1e6;
          //! Minimum depth, soft constraint (m).
          static constexpr double c_min_depth = 0.0;

          //! Parameters.
          Arguments m_args;
          //! True if the models are valid.
          bool m_valid;
          //! Control periods per solve period.
          unsigned m_ns;
          //! Solve periods of the horizon.
          unsigned m_np;
          //! Number of moves.
          unsigned m_nm;
          //! Control periods of the delay of the pitch loop.
          unsigned m_nd;
          //! States of the prediction (model, delay register, reference).
          unsigned m_nz;
          //! Steps of the horizon with depth constraints.
          unsigned m_nc;
          //! QP variables.
          unsigned m_nv;
          //! QP constraints.
          unsigned m_mc;
          //! Solve periods of the moves, ascending.
          std::vector<unsigned> m_moves;
          //! Steps of the horizon with depth constraints.
          std::vector<unsigned> m_kc;
          //! Move that takes the place of each move one solve period later (-1: none).
          std::vector<int> m_shift;
          //! Speed schedule: first and last index (speed = index x step).
          long m_key_min;
          long m_key_max;
          //! Models of the speed schedule.
          std::vector<Model> m_models;
          //! Estimator state: z, zd, theta, q, H, p.
          double m_xh[c_ne];
          //! Delay register of the pitch reference.
          std::vector<double> m_buf;
          //! Control periods since the last solve.
          unsigned m_count;
          //! Pitch reference.
          double m_ref;
          //! Pitch reference at the last solve.
          double m_ref_start;
          //! Pitch reference at the end of the solve period.
          double m_ref_target;
          //! Iterations of the last solve.
          unsigned m_iterations;
          //! Last solve used the shifted previous plan.
          bool m_fallback;
          //! Solve counters.
          unsigned m_solves;
          unsigned m_solves_admm;
          unsigned m_budget_hits;
          //! Last plan (moves).
          std::vector<double> m_plan;
          //! Work vectors.
          std::vector<double> m_z0, m_free_z, m_free_v, m_g, m_du, m_q, m_lb, m_ub;
          //! QP solver.
          Solver m_solver;
        };
      }
    }
  }
}

#endif
