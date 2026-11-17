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

#ifndef CONTROL_AUV_DEPTH_MPC_SOLVER_HPP_INCLUDED_
#define CONTROL_AUV_DEPTH_MPC_SOLVER_HPP_INCLUDED_

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
      namespace MPC
      {
        //! Dense matrix, row major.
        struct Matrix
        {
          Matrix(void):
            rows(0),
            cols(0)
          { }

          Matrix(unsigned r, unsigned c):
            rows(r),
            cols(c),
            data(static_cast<size_t>(r) * c, 0.0)
          { }

          double&
          operator()(unsigned i, unsigned j)
          {
            return data[static_cast<size_t>(i) * cols + j];
          }

          double
          operator()(unsigned i, unsigned j) const
          {
            return data[static_cast<size_t>(i) * cols + j];
          }

          //! Rows.
          unsigned rows;
          //! Columns.
          unsigned cols;
          //! Elements.
          std::vector<double> data;
        };

        //! Scaled QP for ADMM and the solver state.
        struct Qp
        {
          //! Hessian, constraints, A'A, factor of the KKT matrix.
          Matrix p, am, ata, kkt;
          //! Scaling of the variables.
          std::vector<double> d;
          //! Scaling of the constraints.
          std::vector<double> rn;
          //! Solver state (scaled primal and dual variables), for the warm start.
          std::vector<double> x, y;
          //! Solver step size.
          double rho;
        };

        //! Dense linear algebra and the QP solver of the model predictive
        //! depth controllers.
        //!
        //! QP: min 1/2 v'Pv + q'v, l <= A v <= u, solved with ADMM (OSQP
        //! iteration on the scaled problem, adaptive step size, warm start
        //! from the solver state of the QP).
        //!
        //! iterate() does not allocate memory.
        class Solver
        {
        public:
          //! Initial step size.
          static constexpr double c_rho = 0.1;
          //! Regularisation.
          static constexpr double c_sigma = 1e-8;
          //! Relaxation.
          static constexpr double c_alpha = 1.6;
          //! Tolerance of the residuals (scaled problem).
          static constexpr double c_eps = 1e-4;

          //! Clamp a value to an interval.
          static double
          trim(double value, double lower, double upper)
          {
            return std::min(std::max(value, lower), upper);
          }

          //! Round to nearest, ties to even.
          static long
          roundEven(double value)
          {
            return static_cast<long>(std::nearbyint(value));
          }

          //! Identity matrix.
          static Matrix
          identity(unsigned n)
          {
            Matrix m(n, n);
            for (unsigned i = 0; i < n; ++i)
              m(i, i) = 1.0;
            return m;
          }

          //! Matrix product.
          static Matrix
          multiply(const Matrix& a, const Matrix& b)
          {
            Matrix m(a.rows, b.cols);
            for (unsigned i = 0; i < a.rows; ++i)
            {
              for (unsigned k = 0; k < a.cols; ++k)
              {
                const double v = a(i, k);
                if (v == 0.0)
                  continue;
                for (unsigned j = 0; j < b.cols; ++j)
                  m(i, j) += v * b(k, j);
              }
            }
            return m;
          }

          //! Cholesky factorisation of the n x n leading block of a
          //! symmetric matrix (lower triangle read), to the lower triangle
          //! of l.
          //! @return false if the matrix is not positive definite.
          static bool
          factorize(const Matrix& a, Matrix& l, unsigned n)
          {
            for (unsigned j = 0; j < n; ++j)
            {
              double s = a(j, j);
              for (unsigned k = 0; k < j; ++k)
                s -= l(j, k) * l(j, k);

              if (!(s > 0.0))
                return false;

              const double ljj = std::sqrt(s);
              l(j, j) = ljj;

              for (unsigned i = j + 1; i < n; ++i)
              {
                double t = a(i, j);
                for (unsigned k = 0; k < j; ++k)
                  t -= l(i, k) * l(j, k);
                l(i, j) = t / ljj;
              }
            }

            return true;
          }

          //! Solve l l' x = b in place.
          static void
          substitute(const Matrix& l, unsigned n, double* b)
          {
            for (unsigned i = 0; i < n; ++i)
            {
              double s = b[i];
              for (unsigned k = 0; k < i; ++k)
                s -= l(i, k) * b[k];
              b[i] = s / l(i, i);
            }

            for (unsigned i = n; i-- > 0;)
            {
              double s = b[i];
              for (unsigned k = i + 1; k < n; ++k)
                s -= l(k, i) * b[k];
              b[i] = s / l(i, i);
            }
          }

          //! Factorise P + sigma I + rho A'A.
          //! @param[in,out] qp QP.
          //! @param[in] rho step size.
          //! @return false if the matrix is not positive definite.
          static bool
          factorizeKKT(Qp& qp, double rho)
          {
            const unsigned n = qp.p.rows;
            qp.rho = rho;

            for (unsigned j = 0; j < n; ++j)
            {
              double s = qp.p(j, j) + c_sigma + rho * qp.ata(j, j);
              for (unsigned k = 0; k < j; ++k)
                s -= qp.kkt(j, k) * qp.kkt(j, k);

              if (!(s > 0.0))
                return false;

              const double ljj = std::sqrt(s);
              qp.kkt(j, j) = ljj;

              for (unsigned i = j + 1; i < n; ++i)
              {
                double t = qp.p(i, j) + rho * qp.ata(i, j);
                for (unsigned k = 0; k < j; ++k)
                  t -= qp.kkt(i, k) * qp.kkt(j, k);
                qp.kkt(i, j) = t / ljj;
              }
            }

            return true;
          }

          //! Allocate the work memory.
          //! @param[in] n number of variables.
          //! @param[in] m largest number of constraints.
          void
          resize(unsigned n, unsigned m)
          {
            m_xt.assign(n, 0.0);
            m_px.assign(n, 0.0);
            m_aty.assign(n, 0.0);
            m_z.assign(m, 0.0);
            m_zt.assign(m, 0.0);
            m_wm.assign(m, 0.0);
          }

          //! ADMM iterations on the scaled QP, warm started from the solver
          //! state of the QP. The linear term and the bounds are given
          //! unscaled and are scaled in place.
          //! @param[in,out] qp QP and solver state.
          //! @param[in] m number of constraints.
          //! @param[in] max_iterations iteration budget.
          //! @param[in,out] q linear term (qp.p.rows elements).
          //! @param[in,out] lb lower bounds (m elements).
          //! @param[in,out] ub upper bounds (m elements).
          //! @param[out] iterations iterations done.
          //! @return true if converged within the iteration budget.
          bool
          iterate(Qp& qp, unsigned m, unsigned max_iterations, double* q, double* lb, double* ub,
                  unsigned& iterations)
          {
            const unsigned n = qp.p.rows;
            const double* a = &qp.am.data[0];
            const double* p = &qp.p.data[0];
            double* x = &qp.x[0];
            double* y = &qp.y[0];
            double* z = &m_z[0];
            double* xt = &m_xt[0];
            double* zt = &m_zt[0];
            double* wm = &m_wm[0];
            double* px = &m_px[0];
            double* aty = &m_aty[0];

            for (unsigned i = 0; i < n; ++i)
              q[i] *= qp.d[i];

            for (unsigned i = 0; i < m; ++i)
            {
              lb[i] /= qp.rn[i];
              ub[i] /= qp.rn[i];
            }

            for (unsigned i = 0; i < m; ++i)
            {
              double s = 0.0;
              for (unsigned j = 0; j < n; ++j)
                s += a[i * n + j] * x[j];
              z[i] = trim(s, lb[i], ub[i]);
            }

            for (unsigned it = 1; it <= max_iterations; ++it)
            {
              iterations = it;
              const double rho = qp.rho;

              // xt = K^-1 (sigma x - q + A'(rho z - y)).
              for (unsigned i = 0; i < m; ++i)
                wm[i] = rho * z[i] - y[i];

              for (unsigned j = 0; j < n; ++j)
                xt[j] = c_sigma * x[j] - q[j];

              for (unsigned i = 0; i < m; ++i)
              {
                const double v = wm[i];
                for (unsigned j = 0; j < n; ++j)
                  xt[j] += a[i * n + j] * v;
              }

              substitute(qp.kkt, n, xt);

              for (unsigned i = 0; i < m; ++i)
              {
                double s = 0.0;
                for (unsigned j = 0; j < n; ++j)
                  s += a[i * n + j] * xt[j];
                zt[i] = s;
              }

              for (unsigned j = 0; j < n; ++j)
                x[j] = c_alpha * xt[j] + (1.0 - c_alpha) * x[j];

              for (unsigned i = 0; i < m; ++i)
              {
                const double zh = c_alpha * zt[i] + (1.0 - c_alpha) * z[i];
                const double zn = trim(zh + y[i] / rho, lb[i], ub[i]);
                y[i] += rho * (zh - zn);
                z[i] = zn;
              }

              if (it % 5 != 0)
                continue;

              // Residuals.
              double rp = 0.0;
              double sp = 1e-9;
              for (unsigned i = 0; i < m; ++i)
              {
                double s = 0.0;
                for (unsigned j = 0; j < n; ++j)
                  s += a[i * n + j] * x[j];
                rp = std::max(rp, std::fabs(s - z[i]));
                sp = std::max(sp, std::max(std::fabs(s), std::fabs(z[i])));
              }

              for (unsigned j = 0; j < n; ++j)
              {
                double s = 0.0;
                for (unsigned k = 0; k < n; ++k)
                  s += p[j * n + k] * x[k];
                px[j] = s;
                aty[j] = 0.0;
              }

              for (unsigned i = 0; i < m; ++i)
              {
                const double v = y[i];
                for (unsigned j = 0; j < n; ++j)
                  aty[j] += a[i * n + j] * v;
              }

              double rd = 0.0;
              double sd = 1e-9;
              for (unsigned j = 0; j < n; ++j)
              {
                rd = std::max(rd, std::fabs(px[j] + q[j] + aty[j]));
                sd = std::max(sd, std::max(std::fabs(px[j]), std::max(std::fabs(q[j]), std::fabs(aty[j]))));
              }

              if (rp <= c_eps * (1.0 + sp) && rd <= c_eps * (1.0 + sd))
                return true;

              if (it % 20 == 0)
              {
                const double r = std::sqrt((rp / sp) / std::max(rd / sd, 1e-12));
                if (r > 3.0 || r < 0.33)
                  factorizeKKT(qp, trim(rho * r, 1e-5, 1e5));
              }
            }

            return false;
          }

        private:
          //! Work vectors.
          std::vector<double> m_xt, m_px, m_aty, m_z, m_zt, m_wm;
        };
      }
    }
  }
}

#endif
