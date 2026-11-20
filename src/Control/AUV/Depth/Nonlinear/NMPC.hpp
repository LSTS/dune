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


#ifndef CONTROL_AUV_DEPTH_NONLINEAR_NMPC_HPP_INCLUDED_
#define CONTROL_AUV_DEPTH_NONLINEAR_NMPC_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>
#include <vector>
#include <algorithm>

// DUNE headers.
#include <Control/AUV/Depth/MPC/Solver.hpp>

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
        //! Nonlinear model predictive depth controller at pitch reference
        //! level (the pitch loop of the autopilot is kept).
        //!
        //! Prediction model: the pitch loop of the Observer and the heave
        //! model with sin(theta),
        //!
        //!   Tz zd' = -zd + H / u - g u sin(theta),  z' = zd,
        //!
        //! with the estimates of the Observer (heave observer with the trim
        //! H, pitch observer with the pitch offset p, the sine of the
        //! measured pitch as the heave input), scheduled with the measured
        //! speed u. The depth reference is held along the horizon.
        //!
        //! Controller: every solve period, blocked moves du of the pitch
        //! reference (plus two slack variables) minimise
        //!
        //!   sum qz (z_k - z_ref)^2 + qv zd_k^2 + rd du^2 + slack penalties
        //!
        //! subject to |r| <= maximum pitch, |du| <= move limit, |theta_k| <=
        //! maximum pitch + 5 degrees at the solve periods and the soft
        //! constraints minimum depth <= z_k <= depth limit. The pitch
        //! reference ramps linearly to the new value during the solve period.
        //!
        //! The pitch along the horizon is affine in the moves, theta = theta0
        //! + S du, so the depth and depth rate are Y0 + R sin(theta), with R
        //! the heave impulse response, and their Jacobian is
        //! R diag(cos(theta)) S. The moves are found by Gauss-Newton SQP: at
        //! most "SQP iterations" QPs, stopping when the largest step is below
        //! 1e-5 rad. When the unconstrained step is feasible it is used
        //! directly; otherwise the QP is solved cold by the ADMM solver of
        //! the linear model predictive controller (MPC::Solver). When ADMM
        //! does not converge within the iteration budget, its last iterate is
        //! used (the shifted previous plan would discard the progress of the
        //! SQP iterations).
        //!
        //! step() does not allocate memory.
        class NMPC
        {
        public:
          //! Parameters.
          struct Arguments
          {
            //! Model and observers (the natural frequency of the pitch
            //! interface is not used).
            Observer::Arguments obs;
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
            //! Depth limit, soft constraint (m).
            double depth_limit;
            //! Weight of the soft constraints, relative to qz times the horizon steps.
            double slack_weight;
            //! Maximum number of solver iterations of one QP.
            unsigned max_iterations;
            //! Maximum number of SQP iterations.
            unsigned sqp_iterations;
            //! Initial trim H (m^2/s^2).
            double initial_trim;
          };

          NMPC(void):
            m_valid(false),
            m_ns(1),
            m_np(0),
            m_nm(0),
            m_nd(0),
            m_nv(0),
            m_nt(0),
            m_n0(0),
            m_mn(0),
            m_trim(0.0),
            m_offset(0.0),
            m_count(0),
            m_ref(0.0),
            m_ref_start(0.0),
            m_ref_target(0.0),
            m_iterations(0),
            m_fallback(false),
            m_solves(0),
            m_solves_admm(0),
            m_budget_hits(0),
            m_sqp(0)
          { }

          //! Set parameters and compute the prediction models of the speed
          //! schedule. The trim and pitch offset estimates are kept. It
          //! allocates memory.
          //! @param[in] args parameters.
          //! @param[in] reset_trim true to restart the trim and pitch
          //! offset estimates.
          //! @return false if the parameters are not valid: step() then
          //! returns the pitch it is given.
          bool
          setup(const Arguments& args, bool reset_trim)
          {
            m_args = args;
            m_valid = false;
            m_solves = 0;
            m_solves_admm = 0;
            m_budget_hits = 0;

            if (reset_trim)
            {
              m_trim = m_args.initial_trim;
              m_offset = 0.0;
            }

            if (!(m_args.obs.timestep > 0.0) || !(m_args.solve_period > 0.0) || !(m_args.horizon > 0.0))
              return false;

            if (!m_obs.setup(m_args.obs))
              return false;

            if (reset_trim)
              m_obs.resetTrimVariance();

            m_ns = static_cast<unsigned>(
              std::max(Solver::roundEven(m_args.solve_period / m_args.obs.timestep), 1L));
            m_np = static_cast<unsigned>(
              std::max(Solver::roundEven(m_args.horizon / m_args.solve_period), 1L));
            m_nd = m_obs.delaySteps();

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
            m_nv = m_nm + 2;

            if (!(m_args.slack_weight * m_args.depth_weight * static_cast<double>(m_np) > 0.0))
              return false;

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

            build();

            m_plan.assign(m_nm, 0.0);
            m_du.assign(m_nm, 0.0);
            m_q.assign(m_nv, 0.0);
            m_lb.assign(m_mn, 0.0);
            m_ub.assign(m_mn, 0.0);
            m_solver.resize(m_nv, m_mn);

            m_valid = true;
            return true;
          }

          //! Start a period of depth control. The trim and pitch offset
          //! estimates are kept.
          //! @param[in] depth depth (m).
          //! @param[in] theta pitch (rad).
          //! @param[in] speed forward speed (m/s).
          void
          activate(double depth, double theta, double speed)
          {
            std::fill(m_plan.begin(), m_plan.end(), 0.0);
            m_count = 0;
            m_iterations = 0;
            m_fallback = false;
            m_ref = theta;
            m_ref_start = theta;
            m_ref_target = theta;

            if (!m_valid)
              return;

            m_obs.reset(depth, theta, speed, m_trim, m_offset);
            const double u0 = (theta - m_offset) / m_obs.matrices().k;
            m_ref = u0;
            m_ref_start = u0;
            m_ref_target = u0;
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

            if (m_count == 0)
              solve(m_models[m_obs.index()], zref, theta);

            m_count = (m_count + 1) % m_ns;

            // Ramp to the target.
            const unsigned j = (m_count != 0) ? m_count : m_ns;
            const double ref = m_ref_start
                               + (static_cast<double>(j) / static_cast<double>(m_ns))
                                 * (m_ref_target - m_ref_start);

            m_obs.advance(ref);
            m_ref = ref;
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

          //! Pitch reference the ramp is heading to (rad).
          double
          getTarget(void) const
          {
            return m_ref_target;
          }

          //! Solver iterations of the last solve, all QPs (0 when the
          //! unconstrained steps were feasible).
          unsigned
          getIterations(void) const
          {
            return m_iterations;
          }

          //! True if a QP of the last solve did not converge within the
          //! iteration budget (its last iterate was used).
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

          //! SQP iterations of the last solve.
          unsigned
          getSqpIterations(void) const
          {
            return m_sqp;
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
          typedef MPC::Matrix Matrix;
          typedef MPC::Qp Qp;
          typedef MPC::Solver Solver;

          //! Prediction model of one speed.
          struct Model
          {
            //! Pitch at the control periods of the horizon (theta_1 to
            //! theta_N) from [pitch observer, delay register, reference] with
            //! no moves (th0) and from the moves (su).
            Matrix th0, su;
            //! Depth and depth rate at the solve periods from the heave
            //! observer state with zero input.
            Matrix hz0;
            //! Response of [depth, depth rate] to sin(theta) k periods earlier
            //! (heave impulse response, k = 0 to N - 1).
            Matrix imp;
          };

          //! Compute the prediction models of the speed schedule of the
          //! observer and allocate the work memory.
          void
          build(void)
          {
            const unsigned ns = m_ns;
            const unsigned np = m_np;
            const unsigned nm = m_nm;
            const unsigned nd = m_nd;
            const unsigned nt = np * ns;
            m_nt = nt;
            m_n0 = 3 + nd + 1;
            m_mn = 2 * nm + 3 * np + 2;

            // Reference at each control period per move: cumulative moves at
            // the solve periods, linear ramps in between.
            Matrix ui(np, nm);
            for (unsigned j = 0; j < nm; ++j)
            {
              for (unsigned i = m_moves[j]; i < np; ++i)
                ui(i, j) = 1.0;
            }

            m_tmap = Matrix(nt, nm);
            for (unsigned i = 0; i < np; ++i)
            {
              for (unsigned mm = 1; mm <= ns; ++mm)
              {
                const double w = static_cast<double>(mm) / static_cast<double>(ns);
                for (unsigned j = 0; j < nm; ++j)
                {
                  const double prev = (i > 0) ? ui(i - 1, j) : 0.0;
                  m_tmap(i * ns + mm - 1, j) = prev + w * (ui(i, j) - prev);
                }
              }
            }

            const std::vector<Observer::Matrices>& sched = m_obs.schedule();
            m_models.assign(sched.size(), Model());

            for (size_t q = 0; q < sched.size(); ++q)
            {
              const Observer::Matrices& mx = sched[q];
              Model& md = m_models[q];

              // Pitch from each element of [xp, delay register, reference].
              md.th0 = Matrix(nt, m_n0);
              for (unsigned c = 0; c < m_n0; ++c)
              {
                double x[3] = {(c == 0) ? 1.0 : 0.0, (c == 1) ? 1.0 : 0.0, (c == 2) ? 1.0 : 0.0};
                for (unsigned k = 0; k < nt; ++k)
                {
                  const double ud = (k < nd) ? ((c == 3 + k) ? 1.0 : 0.0) : ((c == m_n0 - 1) ? 1.0 : 0.0);
                  propagate(mx.ap, mx.bp, ud, x);
                  md.th0(k, c) = x[0];
                }
              }

              // Pitch from each move.
              md.su = Matrix(nt, nm);
              for (unsigned j = 0; j < nm; ++j)
              {
                double x[3] = {0.0, 0.0, 0.0};
                for (unsigned k = 0; k < nt; ++k)
                {
                  const double ud = (k < nd) ? 0.0 : m_tmap(k - nd, j);
                  propagate(mx.ap, mx.bp, ud, x);
                  md.su(k, j) = x[0];
                }
              }

              // Heave: powers of the state matrix.
              md.hz0 = Matrix(2 * np, 3);
              md.imp = Matrix(nt, 2);
              double pw[3][3] = {{1.0, 0.0, 0.0}, {0.0, 1.0, 0.0}, {0.0, 0.0, 1.0}};
              for (unsigned k = 0; k <= nt; ++k)
              {
                if (k < nt)
                {
                  for (unsigned r = 0; r < 2; ++r)
                    md.imp(k, r) = pw[r][0] * mx.bh[0] + pw[r][1] * mx.bh[1] + pw[r][2] * mx.bh[2];
                }

                if (k > 0 && k % ns == 0)
                {
                  const unsigned i = k / ns - 1;
                  for (unsigned c = 0; c < 3; ++c)
                  {
                    md.hz0(i, c) = pw[0][c];
                    md.hz0(np + i, c) = pw[1][c];
                  }
                }

                double t[3][3];
                for (unsigned r = 0; r < 3; ++r)
                {
                  for (unsigned c = 0; c < 3; ++c)
                    t[r][c] = mx.ah[r][0] * pw[0][c] + mx.ah[r][1] * pw[1][c] + mx.ah[r][2] * pw[2][c];
                }
                for (unsigned r = 0; r < 3; ++r)
                  for (unsigned c = 0; c < 3; ++c)
                    pw[r][c] = t[r][c];
              }
            }

            // Work memory.
            m_qp.p = Matrix(m_nv, m_nv);
            m_qp.am = Matrix(m_mn, m_nv);
            m_qp.ata = Matrix(m_nv, m_nv);
            m_qp.kkt = Matrix(m_nv, m_nv);
            m_qp.d.assign(m_nv, 0.0);
            m_qp.rn.assign(m_mn, 0.0);
            m_qp.x.assign(m_nv, 0.0);
            m_qp.y.assign(m_mn, 0.0);
            m_qp.rho = Solver::c_rho;
            m_n_a = Matrix(m_mn, m_nv);
            m_n_j = Matrix(2 * np, nm);
            m_n_h = Matrix(nm, nm);
            m_n_hc = Matrix(nm, nm);
            m_n_z0.assign(m_n0, 0.0);
            m_n_thf.assign(nt, 0.0);
            m_n_th.assign(nt, 0.0);
            m_n_s.assign(nt, 0.0);
            m_n_c.assign(nt, 0.0);
            m_n_y0.assign(2 * np, 0.0);
            m_n_y.assign(2 * np, 0.0);
            m_n_g.assign(nm, 0.0);
            m_n_d.assign(nm, 0.0);
            m_n_dn.assign(nm, 0.0);
            m_n_cu.assign(nm, 0.0);
            m_sqp = 0;
          }

          //! x = a x + b u (3 states).
          static void
          propagate(const double a[3][3], const double b[3], double u, double* x)
          {
            double y[3];
            for (unsigned i = 0; i < 3; ++i)
              y[i] = (a[i][0] * x[0] + a[i][1] * x[1] + a[i][2] * x[2]) + b[i] * u;
            for (unsigned i = 0; i < 3; ++i)
              x[i] = y[i];
          }

          //! Compute the moves (Gauss-Newton SQP) and set the target of the
          //! pitch reference.
          //! @param[in] md model of the current speed.
          //! @param[in] zref depth reference (m).
          //! @param[in] theta measured pitch (rad).
          void
          solve(const Model& md, double zref, double theta)
          {
            const unsigned np = m_np;
            const unsigned nm = m_nm;
            const unsigned nt = m_nt;
            const unsigned ns = m_ns;
            const double* xp = m_obs.pitch();
            const double* xh = m_obs.heave();
            const std::vector<double>& buf = m_obs.delayed();

            // Pitch without moves, theta_1 to theta_N.
            for (unsigned i = 0; i < 3; ++i)
              m_n_z0[i] = xp[i];
            for (unsigned i = 0; i < m_nd; ++i)
              m_n_z0[3 + i] = buf[i];
            m_n_z0[m_n0 - 1] = m_ref;

            for (unsigned k = 0; k < nt; ++k)
            {
              double s = 0.0;
              for (unsigned i = 0; i < m_n0; ++i)
                s += md.th0(k, i) * m_n_z0[i];
              m_n_thf[k] = s;
            }

            // Depth and depth rate with zero input.
            for (unsigned r = 0; r < 2 * np; ++r)
              m_n_y0[r] = md.hz0(r, 0) * xh[0] + md.hz0(r, 1) * xh[1] + md.hz0(r, 2) * xh[2];

            const double lim = m_args.move_limit * m_args.solve_period;
            const double umax = m_args.obs.max_pitch;
            const double th_lim = m_args.obs.max_pitch + c_pitch_margin;
            const double ws = m_args.slack_weight * m_args.depth_weight * static_cast<double>(np);
            const double rd = m_args.move_weight;

            std::fill(m_du.begin(), m_du.end(), 0.0);
            m_iterations = 0;
            m_fallback = false;
            m_sqp = 0;
            bool admm = false;
            bool failed = false;

            for (unsigned it = 1; it <= m_args.sqp_iterations; ++it)
            {
              m_sqp = it;

              // Pitch along the horizon (heave inputs theta_0 to theta_N-1).
              m_n_th[0] = xp[0];
              for (unsigned k = 1; k < nt; ++k)
              {
                double s = 0.0;
                for (unsigned j = 0; j < nm; ++j)
                  s += md.su(k - 1, j) * m_du[j];
                m_n_th[k] = m_n_thf[k - 1] + s;
              }

              for (unsigned k = 0; k < nt; ++k)
              {
                m_n_s[k] = std::sin(m_n_th[k]);
                m_n_c[k] = std::cos(m_n_th[k]);
              }
              // The first heave input is the measured pitch, as in the observer.
              m_n_s[0] = std::sin(theta);

              // Depth and depth rate at the solve periods, and the Jacobian.
              for (unsigned i = 0; i < np; ++i)
              {
                const unsigned kk = ns * (i + 1);
                for (unsigned r = 0; r < 2; ++r)
                {
                  const unsigned row = r * np + i;
                  double y = 0.0;
                  for (unsigned m = 0; m < kk; ++m)
                    y += md.imp(kk - 1 - m, r) * m_n_s[m];
                  m_n_y[row] = m_n_y0[row] + y;

                  for (unsigned j = 0; j < nm; ++j)
                  {
                    double sj = 0.0;
                    for (unsigned m = 1; m < kk; ++m)
                      sj += md.imp(kk - 1 - m, r) * (m_n_c[m] * md.su(m - 1, j));
                    m_n_j(row, j) = sj;
                  }
                }
              }

              // Gauss-Newton Hessian and gradient.
              for (unsigned a = 0; a < nm; ++a)
              {
                double g = 0.0;
                for (unsigned r = 0; r < 2 * np; ++r)
                {
                  const double w = (r < np) ? m_args.depth_weight : m_args.rate_weight;
                  const double res = m_n_y[r] - ((r < np) ? zref : 0.0);
                  g += m_n_j(r, a) * (w * res);
                }
                m_n_g[a] = g + rd * m_du[a];

                for (unsigned b = 0; b < nm; ++b)
                {
                  double h = 0.0;
                  for (unsigned r = 0; r < 2 * np; ++r)
                  {
                    const double w = (r < np) ? m_args.depth_weight : m_args.rate_weight;
                    h += m_n_j(r, a) * (w * m_n_j(r, b));
                  }
                  m_n_h(a, b) = h + ((a == b) ? rd : 0.0);
                }
              }

              if (!Solver::factorize(m_n_h, m_n_hc, nm))
              {
                failed = true;
                break;
              }

              for (unsigned a = 0; a < nm; ++a)
                m_n_d[a] = -m_n_g[a];
              Solver::substitute(m_n_hc, nm, &m_n_d[0]);

              // Feasibility of the unconstrained step.
              bool ok = true;
              double cum = 0.0;
              for (unsigned a = 0; a < nm && ok; ++a)
              {
                m_n_dn[a] = m_du[a] + m_n_d[a];
                cum += m_n_dn[a];
                ok = std::fabs(m_n_dn[a]) <= lim + 1e-12 && std::fabs(m_ref + cum) <= umax + 1e-12;
              }

              for (unsigned i = 0; i < np && ok; ++i)
              {
                const unsigned kc = ns * (i + 1) - 1;
                double t = 0.0;
                double z = 0.0;
                for (unsigned j = 0; j < nm; ++j)
                {
                  t += md.su(kc, j) * m_n_dn[j];
                  z += m_n_j(i, j) * m_n_d[j];
                }
                const double zp = m_n_y[i] + z;
                ok = std::fabs(m_n_thf[kc] + t) <= th_lim && zp <= m_args.depth_limit && zp >= c_min_depth;
              }

              if (!ok)
              {
                // When ADMM does not converge within the iteration budget,
                // its last iterate is used.
                admm = true;
                if (!solveQp(md, ws, lim, umax, th_lim))
                  m_fallback = true;

                for (unsigned a = 0; a < nm; ++a)
                  m_n_d[a] = m_qp.x[a] * m_qp.d[a];
              }

              double step = 0.0;
              for (unsigned a = 0; a < nm; ++a)
              {
                m_du[a] += m_n_d[a];
                step = std::max(step, std::fabs(m_n_d[a]));
              }

              if (step < 1e-5)
                break;
            }

            if (failed)
            {
              // Previous plan, one solve period later.
              for (unsigned i = 0; i < nm; ++i)
                m_du[i] = (m_shift[i] >= 0) ? m_plan[static_cast<size_t>(m_shift[i])] : 0.0;
            }

            if (m_fallback)
              ++m_budget_hits;

            if (admm)
              ++m_solves_admm;

            for (unsigned i = 0; i < nm; ++i)
              m_plan[i] = m_du[i];

            const double d0 = (m_moves[0] == 0) ? Solver::trim(m_du[0], -lim, lim) : 0.0;
            m_ref_start = m_ref;
            m_ref_target = Solver::trim(m_ref + d0, -umax, umax);
            ++m_solves;
          }

          //! QP of one SQP iteration (cold started ADMM): step d of the moves
          //! and two slacks, cost 1/2 d'Hd + g'd + slack penalties.
          //! @return true if converged within the iteration budget.
          bool
          solveQp(const Model& md, double ws, double lim, double umax, double th_lim)
          {
            const unsigned np = m_np;
            const unsigned nm = m_nm;
            const unsigned nv = m_nv;
            const unsigned mn = m_mn;
            const unsigned ns = m_ns;
            Matrix& a = m_n_a;
            Qp& qp = m_qp;

            std::fill(a.data.begin(), a.data.end(), 0.0);
            for (unsigned i = 0; i < nm; ++i)
            {
              a(i, i) = 1.0;
              for (unsigned j = 0; j <= i; ++j)
                a(nm + i, j) = 1.0;
            }

            for (unsigned i = 0; i < np; ++i)
            {
              const unsigned kc = ns * (i + 1) - 1;
              for (unsigned j = 0; j < nm; ++j)
              {
                a(2 * nm + i, j) = md.su(kc, j);
                a(2 * nm + np + i, j) = m_n_j(i, j);
                a(2 * nm + 2 * np + i, j) = m_n_j(i, j);
              }
              a(2 * nm + np + i, nm) = -1.0;
              a(2 * nm + 2 * np + i, nm + 1) = 1.0;
            }
            a(mn - 2, nm) = 1.0;
            a(mn - 1, nm + 1) = 1.0;

            // Bounds, relative to the current moves.
            double cum = 0.0;
            for (unsigned i = 0; i < nm; ++i)
            {
              cum += m_du[i];
              m_n_cu[i] = m_ref + cum;
              m_lb[i] = -lim - m_du[i];
              m_ub[i] = lim - m_du[i];
              m_lb[nm + i] = -umax - m_n_cu[i];
              m_ub[nm + i] = umax - m_n_cu[i];
              m_q[i] = m_n_g[i];
            }

            for (unsigned i = 0; i < np; ++i)
            {
              const unsigned kc = ns * (i + 1) - 1;
              double t = 0.0;
              for (unsigned j = 0; j < nm; ++j)
                t += md.su(kc, j) * m_du[j];
              const double th = m_n_thf[kc] + t;
              m_lb[2 * nm + i] = -th_lim - th;
              m_ub[2 * nm + i] = th_lim - th;
              m_lb[2 * nm + np + i] = -c_big;
              m_ub[2 * nm + np + i] = m_args.depth_limit - m_n_y[i];
              m_lb[2 * nm + 2 * np + i] = c_min_depth - m_n_y[i];
              m_ub[2 * nm + 2 * np + i] = c_big;
            }

            m_lb[mn - 2] = 0.0;
            m_ub[mn - 2] = c_big;
            m_lb[mn - 1] = 0.0;
            m_ub[mn - 1] = c_big;
            m_q[nm] = 0.2 * ws;
            m_q[nm + 1] = 0.2 * ws;

            // Scaling: variables by 1 / sqrt(P_ii), constraints to unit norm.
            for (unsigned i = 0; i < nv; ++i)
            {
              const double pii = (i < nm) ? m_n_h(i, i) : 2.0 * ws;
              qp.d[i] = 1.0 / std::sqrt(pii);
            }

            for (unsigned i = 0; i < nv; ++i)
            {
              for (unsigned j = 0; j < nv; ++j)
              {
                double pij = 0.0;
                if (i < nm && j < nm)
                  pij = m_n_h(i, j);
                else if (i == j)
                  pij = 2.0 * ws;
                qp.p(i, j) = pij * qp.d[i] * qp.d[j];
              }
            }

            for (unsigned i = 0; i < mn; ++i)
            {
              double s = 0.0;
              for (unsigned j = 0; j < nv; ++j)
              {
                qp.am(i, j) = a(i, j) * qp.d[j];
                s += qp.am(i, j) * qp.am(i, j);
              }

              s = std::sqrt(s);
              if (s == 0.0)
                s = 1.0;

              qp.rn[i] = s;
              for (unsigned j = 0; j < nv; ++j)
                qp.am(i, j) /= s;
            }

            for (unsigned i = 0; i < nv; ++i)
            {
              for (unsigned j = 0; j < nv; ++j)
              {
                double s = 0.0;
                for (unsigned k = 0; k < mn; ++k)
                  s += qp.am(k, i) * qp.am(k, j);
                qp.ata(i, j) = s;
              }
            }

            std::fill(qp.x.begin(), qp.x.end(), 0.0);
            std::fill(qp.y.begin(), qp.y.end(), 0.0);

            if (!Solver::factorizeKKT(qp, Solver::c_rho))
              return false;

            unsigned iterations = 0;
            const bool converged = m_solver.iterate(qp, mn, m_args.max_iterations, &m_q[0], &m_lb[0], &m_ub[0],
                                                   iterations);
            m_iterations += iterations;
            return converged;
          }

          //! Bound of the constraints without limit.
          static constexpr double c_big = 1e6;
          //! Minimum depth, soft constraint (m).
          static constexpr double c_min_depth = 0.0;
          //! Pitch allowed beyond the maximum pitch reference along the
          //! horizon (rad).
          static constexpr double c_pitch_margin = 5.0 * 3.14159265358979323846 / 180.0;

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
          //! QP variables.
          unsigned m_nv;
          //! Control periods of the horizon.
          unsigned m_nt;
          //! Initial state of the pitch prediction.
          unsigned m_n0;
          //! QP constraints.
          unsigned m_mn;
          //! Solve periods of the moves, ascending.
          std::vector<unsigned> m_moves;
          //! Move that takes the place of each move one solve period later (-1: none).
          std::vector<int> m_shift;
          //! Estimator.
          Observer m_obs;
          //! Models of the speed schedule (as the observer's).
          std::vector<Model> m_models;
          //! Trim estimate kept between periods of depth control.
          double m_trim;
          //! Pitch offset estimate kept between periods of depth control.
          double m_offset;
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
          //! A QP of the last solve did not converge within the iteration budget.
          bool m_fallback;
          //! Solve counters.
          unsigned m_solves;
          unsigned m_solves_admm;
          unsigned m_budget_hits;
          //! SQP iterations of the last solve.
          unsigned m_sqp;
          //! Last plan (moves).
          std::vector<double> m_plan;
          //! Reference at each control period of the horizon per move (ramps
          //! and blocking).
          Matrix m_tmap;
          //! QP of the current SQP iteration.
          Qp m_qp;
          //! QP solver.
          Solver m_solver;
          //! Work vectors.
          std::vector<double> m_du, m_q, m_lb, m_ub;
          std::vector<double> m_n_z0, m_n_thf, m_n_th, m_n_s, m_n_c, m_n_y0, m_n_y, m_n_g, m_n_d, m_n_dn, m_n_cu;
          //! Work matrices (Jacobian, Hessian, its factor, constraints).
          Matrix m_n_j, m_n_h, m_n_hc, m_n_a;
        };
      }
    }
  }
}

#endif
