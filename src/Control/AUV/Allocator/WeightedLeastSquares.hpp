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

#ifndef CONTROL_AUV_ALLOCATOR_WEIGHTED_LEAST_SQUARES_HPP_INCLUDED_
#define CONTROL_AUV_ALLOCATOR_WEIGHTED_LEAST_SQUARES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>
#include <limits>

namespace Control
{
  namespace AUV
  {
    namespace Allocator
    {
      //! Weighted least-squares allocation of three torques (K, M, N) on four fins:
      //!   minimise |W (B d - v)|^2 + eps |d|^2  subject to  lo <= d <= hi.
      //! Solved exactly by enumerating the 3^4 active sets (each fin free, at its
      //! lower or at its upper bound) and keeping the cheapest feasible solution.
      //! With no fin at a bound the solution is the weighted pseudo-inverse.
      class WeightedLeastSquares
      {
      public:
        static const int c_torques = 3;
        static const int c_fins = 4;

        //! @param[in] b torque per unit fin angle, rows K, M, N.
        //! @param[in] w weight of each torque error.
        //! @param[in] v desired torques (K, M, N).
        //! @param[in] lo lower bound of each fin.
        //! @param[in] hi upper bound of each fin.
        //! @param[in] eps weight of the fin angles, relative to the mean
        //!   squared column norm of W B (picks the smallest fins among
        //!   solutions of equal torque error).
        //! @param[out] d fin angles.
        static void
        solve(const double b[c_torques][c_fins], const double w[c_torques],
              const double v[c_torques], const double lo[c_fins],
              const double hi[c_fins], double eps, double d[c_fins])
        {
          // Weighted problem: A = W B, y = W v.
          double a[c_torques][c_fins];
          double y[c_torques];
          double col = 0.0;
          for (int i = 0; i < c_torques; ++i)
          {
            y[i] = w[i] * v[i];
            for (int j = 0; j < c_fins; ++j)
            {
              a[i][j] = w[i] * b[i][j];
              col += a[i][j] * a[i][j];
            }
          }
          const double reg = eps * col / c_fins;

          double best = std::numeric_limits<double>::infinity();
          for (int j = 0; j < c_fins; ++j)
            d[j] = clamp(0.0, lo[j], hi[j]);

          int patterns = 1;
          for (int j = 0; j < c_fins; ++j)
            patterns *= 3;

          for (int p = 0; p < patterns; ++p)
          {
            // Per fin: 0 free, 1 at lower bound, 2 at upper bound.
            double x[c_fins];
            int free_idx[c_fins];
            int nf = 0;
            int code = p;
            for (int j = 0; j < c_fins; ++j)
            {
              int s = code % 3;
              code /= 3;
              if (s == 0)
              {
                free_idx[nf++] = j;
                x[j] = 0.0;
              }
              else
                x[j] = (s == 1) ? lo[j] : hi[j];
            }

            if (nf > 0)
            {
              // Residual of the fixed fins.
              double r[c_torques];
              for (int i = 0; i < c_torques; ++i)
              {
                r[i] = y[i];
                for (int j = 0; j < c_fins; ++j)
                  r[i] -= a[i][j] * x[j];
              }

              // Normal equations of the free fins.
              double m[c_fins][c_fins + 1];
              for (int k = 0; k < nf; ++k)
              {
                for (int l = 0; l < nf; ++l)
                {
                  double s = 0.0;
                  for (int i = 0; i < c_torques; ++i)
                    s += a[i][free_idx[k]] * a[i][free_idx[l]];
                  m[k][l] = s + ((k == l) ? reg : 0.0);
                }

                double s = 0.0;
                for (int i = 0; i < c_torques; ++i)
                  s += a[i][free_idx[k]] * r[i];
                m[k][nf] = s;
              }

              double sol[c_fins];
              if (!gauss(m, nf, sol))
                continue;

              bool feasible = true;
              for (int k = 0; k < nf; ++k)
              {
                int j = free_idx[k];
                if (sol[k] < lo[j] - c_tol || sol[k] > hi[j] + c_tol)
                {
                  feasible = false;
                  break;
                }
                x[j] = clamp(sol[k], lo[j], hi[j]);
              }

              if (!feasible)
                continue;
            }

            double cost = 0.0;
            for (int i = 0; i < c_torques; ++i)
            {
              double e = -y[i];
              for (int j = 0; j < c_fins; ++j)
                e += a[i][j] * x[j];
              cost += e * e;
            }
            for (int j = 0; j < c_fins; ++j)
              cost += reg * x[j] * x[j];

            if (cost < best - c_tol * c_tol)
            {
              best = cost;
              for (int j = 0; j < c_fins; ++j)
                d[j] = x[j];
            }
          }
        }

      private:
        static const double c_tol;

        static double
        clamp(double x, double lo, double hi)
        {
          return x < lo ? lo : (x > hi ? hi : x);
        }

        //! Gaussian elimination with partial pivoting on an n x (n + 1)
        //! augmented matrix. Returns false if the matrix is singular.
        static bool
        gauss(double m[c_fins][c_fins + 1], int n, double x[c_fins])
        {
          for (int c = 0; c < n; ++c)
          {
            int piv = c;
            for (int r = c + 1; r < n; ++r)
            {
              if (std::fabs(m[r][c]) > std::fabs(m[piv][c]))
                piv = r;
            }

            if (std::fabs(m[piv][c]) < 1e-15)
              return false;

            if (piv != c)
            {
              for (int k = c; k <= n; ++k)
              {
                double t = m[c][k];
                m[c][k] = m[piv][k];
                m[piv][k] = t;
              }
            }

            for (int r = c + 1; r < n; ++r)
            {
              double f = m[r][c] / m[c][c];
              for (int k = c; k <= n; ++k)
                m[r][k] -= f * m[c][k];
            }
          }

          for (int r = n - 1; r >= 0; --r)
          {
            double s = m[r][n];
            for (int k = r + 1; k < n; ++k)
              s -= m[r][k] * x[k];
            x[r] = s / m[r][r];
          }

          return true;
        }
      };

      const double WeightedLeastSquares::c_tol = 1e-9;
    }
  }
}

#endif
