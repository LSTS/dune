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

#ifndef DUNE_NAVIGATION_GYRO_AIDED_MAG_CALIBRATION_HPP_INCLUDED_
#define DUNE_NAVIGATION_GYRO_AIDED_MAG_CALIBRATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>

namespace DUNE
{
  namespace Navigation
  {
    //! Attitude-free magnetometer hard-iron (3-axis), soft-iron and gyro bias
    //! estimate.
    //!
    //! The true field in the body frame, h = C (m - b), only rotates. For a
    //! hard-iron offset b, a soft-iron correction C and a gyro bias b_g (rates
    //! measured as w = w_true + b_g), with d = C b:
    //!
    //!   C dm/dt + (w - b_g) x (C m - d) = 0
    //!
    //! Integrated over short windows [t0, t1] (length T) to avoid
    //! differentiating the field (dM = m(t1) - m(t0), W = int w, M = int m,
    //! Q = int w m', rows Q_a):
    //!
    //!   C dM + sum_a e_a x (C Q_a) - W x d + (C M - T d) x b_g = 0
    //!
    //! Every window adds three equations. C = I + E with E symmetric and
    //! trace-free (5 unknowns): the scale of C is unobservable and its
    //! antisymmetric part is a frame rotation (about the yaw axis, a heading
    //! offset no rotation reveals). Without soft iron C = I (6 unknowns: b,
    //! b_g). The bilinear b_g terms are taken from the previous iterate (not
    //! negligible with MEMS gyro biases of 0.1-0.6 deg/s); each iteration also
    //! reweights (Huber). No roll, pitch or heading is used, so accelerations
    //! (waves, turns) that corrupt an accelerometer attitude do not bias the
    //! result, unlike fitting the levelled field. b_z and the E terms that mix
    //! z need rotation about a horizontal axis (pitch or roll changes); with
    //! yaw-only motion they are unobservable and their sigma stays large.
    //!
    //! After Troni & Whitcomb (IEEE/ASME T-Mech 2019), Spielvogel, Shah &
    //! Whitcomb (Field Robotics 2021) and Rodriguez-Martinez & Troni (IEEE JOE
    //! 2024).
    class GyroAidedMagCalibration
    {
    public:
      //! Unknowns with soft iron: d (3), b_g (3), E00, E11, E01, E02, E12.
      static const unsigned c_max_unknowns = 11;

      struct Config
      {
        //! Integration window (s).
        double window;
        //! Samples a window needs.
        unsigned min_samples;
        //! Largest gap between samples inside a window (s); a gap restarts it.
        double max_gap;
        //! Huber threshold, in robust standard deviations.
        double huber;
        //! Iterations (bilinear term update + reweighting).
        unsigned iterations;
        //! Prior standard deviation of every unknown (keeps the system
        //! solvable when an axis is not excited; it then shows as sigma).
        double prior_sigma;
        //! Estimate the soft iron by default (solve(r)).
        bool soft_iron;

        Config(void):
          window(2.0),
          min_samples(5),
          max_gap(0.5),
          huber(1.5),
          iterations(20),
          prior_sigma(100.0),
          soft_iron(false)
        { }
      };

      struct Result
      {
        //! Hard-iron offset (field units), body x, y, z.
        double b[3];
        //! Gyro bias (rad/s), body x, y, z.
        double bg[3];
        //! Soft-iron correction C (identity without soft iron): h = C (m - b).
        double C[3][3];
        //! Standard deviations of d = C b (0..2; about those of b), b_g
        //! (3..5) and, with soft iron, E00, E11, E01, E02, E12 (6..10; zero
        //! without).
        double sigma[c_max_unknowns];
        //! Whether C was estimated.
        bool soft_iron;
        //! Windows used.
        unsigned windows;
      };

      GyroAidedMagCalibration(const Config& cfg = Config()):
        m_cfg(cfg)
      {
        reset();
      }

      //! Forget every sample.
      void
      reset(void)
      {
        m_rows.clear();
        m_open = false;
      }

      //! Add a magnetometer sample with the angular rate at the same time.
      //! @param[in] t time (s).
      //! @param[in] m magnetic field, body frame.
      //! @param[in] w angular velocity (rad/s), body frame, as measured.
      void
      add(double t, const double m[3], const double w[3])
      {
        if (m_open)
        {
          double dt = t - m_t;
          if (dt <= 0.0 || dt > m_cfg.max_gap)
          {
            m_open = false;
          }
          else
          {
            for (unsigned i = 0; i < 3; ++i)
            {
              m_int_w[i] += 0.5 * (m_w[i] + w[i]) * dt;
              m_int_m[i] += 0.5 * (m_m[i] + m[i]) * dt;
              for (unsigned j = 0; j < 3; ++j)
                m_int_wm[i][j] += 0.5 * (m_w[i] * m_m[j] + w[i] * m[j]) * dt;
            }
            ++m_n;
            set(t, m, w);
            if (t - m_t0 >= m_cfg.window)
            {
              if (m_n >= m_cfg.min_samples)
                close();
              m_open = false;
            }
          }
        }

        if (!m_open)
          open(t, m, w);
      }

      //! Forget the windows that ended before t (sliding window).
      //! @param[in] t time (s).
      void
      forget(double t)
      {
        while (!m_rows.empty() && m_rows.front().t1 < t)
          m_rows.pop_front();
      }

      //! Windows collected so far.
      unsigned
      windows(void) const
      {
        return m_rows.size();
      }

      //! Solve for the hard iron, gyro bias and, when configured, soft iron.
      //! @return false without any window.
      bool
      solve(Result& r) const
      {
        return solve(r, m_cfg.soft_iron);
      }

      //! Solve for the hard iron and gyro bias, with or without soft iron.
      //! @param[out] r result.
      //! @param[in] soft_iron estimate the soft iron too.
      //! @return false without any window.
      bool
      solve(Result& r, bool soft_iron) const
      {
        r.windows = m_rows.size();
        r.soft_iron = soft_iron;
        if (m_rows.empty())
          return false;

        const unsigned nx = soft_iron ? c_max_unknowns : 6;
        unsigned n = m_rows.size() * 3;
        std::vector<double> wgt(n, 1.0);
        std::vector<double> res(n);
        double x[c_max_unknowns] = {0.0};
        double scale = 1.0;
        double inv[c_max_unknowns][c_max_unknowns];

        for (unsigned it = 0; it <= m_cfg.iterations; ++it)
        {
          // Linearisation point: C and d of the current iterate.
          double C[3][3], d[3];
          softIron(x, soft_iron, C);
          for (unsigned i = 0; i < 3; ++i)
            d[i] = x[i];

          // Normal equations with the prior: (A'WA + I/p^2) x = A'Wy.
          double N[c_max_unknowns][c_max_unknowns + 1] = {{0.0}};
          for (unsigned k = 0; k < m_rows.size(); ++k)
          {
            double a[3][c_max_unknowns], y[3];
            equations(m_rows[k], C, d, soft_iron, a, y);
            for (unsigned e = 0; e < 3; ++e)
            {
              double w = wgt[3 * k + e];
              for (unsigned i = 0; i < nx; ++i)
              {
                for (unsigned j = 0; j < nx; ++j)
                  N[i][j] += w * a[e][i] * a[e][j];
                N[i][nx] += w * a[e][i] * y[e];
              }
            }
          }
          double prior = 1.0 / (m_cfg.prior_sigma * m_cfg.prior_sigma);
          for (unsigned i = 0; i < nx; ++i)
            N[i][i] += prior;

          if (!invert(N, nx, inv))
            return false;
          for (unsigned i = 0; i < nx; ++i)
          {
            x[i] = 0.0;
            for (unsigned j = 0; j < nx; ++j)
              x[i] += inv[i][j] * N[j][nx];
          }

          // Residuals (same linearisation), robust scale, Huber weights.
          for (unsigned k = 0; k < m_rows.size(); ++k)
          {
            double a[3][c_max_unknowns], y[3];
            equations(m_rows[k], C, d, soft_iron, a, y);
            for (unsigned e = 0; e < 3; ++e)
            {
              double p = 0.0;
              for (unsigned i = 0; i < nx; ++i)
                p += a[e][i] * x[i];
              res[3 * k + e] = y[e] - p;
            }
          }
          std::vector<double> mad(n);
          for (unsigned k = 0; k < n; ++k)
            mad[k] = std::fabs(res[k]);
          std::nth_element(mad.begin(), mad.begin() + n / 2, mad.end());
          scale = 1.4826 * mad[n / 2] + 1e-15;
          double h = m_cfg.huber * scale;
          for (unsigned k = 0; k < n; ++k)
            wgt[k] = std::fabs(res[k]) <= h ? 1.0 : h / std::fabs(res[k]);
        }

        softIron(x, soft_iron, r.C);
        // b = C^-1 d.
        double Ci[3][3];
        if (!invert3(r.C, Ci))
          return false;
        for (unsigned i = 0; i < 3; ++i)
        {
          r.b[i] = Ci[i][0] * x[0] + Ci[i][1] * x[1] + Ci[i][2] * x[2];
          r.bg[i] = x[3 + i];
        }
        for (unsigned i = 0; i < c_max_unknowns; ++i)
          r.sigma[i] = i < nx ? scale * std::sqrt(std::max(inv[i][i], 0.0)) : 0.0;
        return true;
      }

    private:
      //! Integrals of one window.
      struct Row
      {
        //! m(t1) - m(t0).
        double dm[3];
        //! int w, int m.
        double w[3], m[3];
        //! int w m' (row a: int w_a m).
        double wm[3][3];
        //! Window length (s).
        double T;
        //! Window end time (s).
        double t1;
      };

      static void
      cross(const double a[3], const double b[3], double c[3])
      {
        c[0] = a[1] * b[2] - a[2] * b[1];
        c[1] = a[2] * b[0] - a[0] * b[2];
        c[2] = a[0] * b[1] - a[1] * b[0];
      }

      //! v x applied to the unit vectors: column c of [v]x.
      static void
      skew(const double v[3], double a[3][c_max_unknowns], unsigned c, double sign)
      {
        a[0][c + 0] = 0.0;           a[0][c + 1] = -sign * v[2]; a[0][c + 2] = sign * v[1];
        a[1][c + 0] = sign * v[2];   a[1][c + 1] = 0.0;          a[1][c + 2] = -sign * v[0];
        a[2][c + 0] = -sign * v[1];  a[2][c + 1] = sign * v[0];  a[2][c + 2] = 0.0;
      }

      //! Symmetric trace-free basis matrix p (E00, E11, E01, E02, E12).
      static void
      basis(unsigned p, double B[3][3])
      {
        static const unsigned c_ij[5][2] = {{0, 0}, {1, 1}, {0, 1}, {0, 2}, {1, 2}};
        for (unsigned i = 0; i < 3; ++i)
          for (unsigned j = 0; j < 3; ++j)
            B[i][j] = 0.0;
        unsigned i = c_ij[p][0], j = c_ij[p][1];
        B[i][j] = B[j][i] = 1.0;
        if (i == j)
          B[2][2] = -1.0;
      }

      //! C = I + E from the unknowns (identity without soft iron).
      static void
      softIron(const double x[c_max_unknowns], bool soft_iron, double C[3][3])
      {
        for (unsigned i = 0; i < 3; ++i)
          for (unsigned j = 0; j < 3; ++j)
            C[i][j] = i == j ? 1.0 : 0.0;
        if (!soft_iron)
          return;
        for (unsigned p = 0; p < 5; ++p)
        {
          double B[3][3];
          basis(p, B);
          for (unsigned i = 0; i < 3; ++i)
            for (unsigned j = 0; j < 3; ++j)
              C[i][j] += x[6 + p] * B[i][j];
        }
      }

      static void
      mul(const double A[3][3], const double v[3], double out[3])
      {
        for (unsigned i = 0; i < 3; ++i)
          out[i] = A[i][0] * v[0] + A[i][1] * v[1] + A[i][2] * v[2];
      }

      //! The three equations of a window, linearised at (C, d):
      //! a x = y, x = (d, b_g, E terms).
      static void
      equations(const Row& r, const double C[3][3], const double d[3], bool soft_iron,
                double a[3][c_max_unknowns], double y[3])
      {
        // y = -(dM + sum_a e_a x Q_a) = -(dM + int w x m).
        double wxm[3] = {r.wm[1][2] - r.wm[2][1], r.wm[2][0] - r.wm[0][2],
                         r.wm[0][1] - r.wm[1][0]};
        for (unsigned i = 0; i < 3; ++i)
          y[i] = -(r.dm[i] + wxm[i]);

        // d: -[W]x.
        skew(r.w, a, 0, -1.0);
        // b_g: [C M - T d]x.
        double cm[3], v[3];
        mul(C, r.m, cm);
        for (unsigned i = 0; i < 3; ++i)
          v[i] = cm[i] - r.T * d[i];
        skew(v, a, 3, 1.0);

        if (!soft_iron)
          return;

        // E_p: B_p dM + sum_a e_a x (B_p Q_a).
        for (unsigned p = 0; p < 5; ++p)
        {
          double B[3][3], col[3];
          basis(p, B);
          mul(B, r.dm, col);
          for (unsigned k = 0; k < 3; ++k)
          {
            double bq[3], e[3] = {0.0, 0.0, 0.0}, c[3];
            mul(B, r.wm[k], bq);
            e[k] = 1.0;
            cross(e, bq, c);
            for (unsigned i = 0; i < 3; ++i)
              col[i] += c[i];
          }
          for (unsigned i = 0; i < 3; ++i)
            a[i][6 + p] = col[i];
        }
      }

      void
      set(double t, const double m[3], const double w[3])
      {
        m_t = t;
        for (unsigned i = 0; i < 3; ++i)
        {
          m_m[i] = m[i];
          m_w[i] = w[i];
        }
      }

      void
      open(double t, const double m[3], const double w[3])
      {
        set(t, m, w);
        m_t0 = t;
        for (unsigned i = 0; i < 3; ++i)
        {
          m_m0[i] = m[i];
          m_int_w[i] = m_int_m[i] = 0.0;
          for (unsigned j = 0; j < 3; ++j)
            m_int_wm[i][j] = 0.0;
        }
        m_n = 1;
        m_open = true;
      }

      void
      close(void)
      {
        Row r;
        for (unsigned i = 0; i < 3; ++i)
        {
          r.dm[i] = m_m[i] - m_m0[i];
          r.w[i] = m_int_w[i];
          r.m[i] = m_int_m[i];
          for (unsigned j = 0; j < 3; ++j)
            r.wm[i][j] = m_int_wm[i][j];
        }
        r.T = m_t - m_t0;
        r.t1 = m_t;
        m_rows.push_back(r);
      }

      //! Inverse of the n x n block of N (Gauss-Jordan, partial pivoting).
      static bool
      invert(const double N[c_max_unknowns][c_max_unknowns + 1], unsigned n,
             double out[c_max_unknowns][c_max_unknowns])
      {
        double a[c_max_unknowns][2 * c_max_unknowns];
        for (unsigned i = 0; i < n; ++i)
          for (unsigned j = 0; j < 2 * n; ++j)
            a[i][j] = j < n ? N[i][j] : (j - n == i ? 1.0 : 0.0);
        for (unsigned c = 0; c < n; ++c)
        {
          unsigned p = c;
          for (unsigned r = c + 1; r < n; ++r)
            if (std::fabs(a[r][c]) > std::fabs(a[p][c]))
              p = r;
          if (std::fabs(a[p][c]) < 1e-300)
            return false;
          for (unsigned k = 0; k < 2 * n; ++k)
            std::swap(a[c][k], a[p][k]);
          double d = a[c][c];
          for (unsigned k = 0; k < 2 * n; ++k)
            a[c][k] /= d;
          for (unsigned r = 0; r < n; ++r)
          {
            if (r == c)
              continue;
            double f = a[r][c];
            for (unsigned k = 0; k < 2 * n; ++k)
              a[r][k] -= f * a[c][k];
          }
        }
        for (unsigned i = 0; i < n; ++i)
          for (unsigned j = 0; j < n; ++j)
            out[i][j] = a[i][n + j];
        return true;
      }

      //! Inverse of a 3x3 matrix (adjugate).
      static bool
      invert3(const double A[3][3], double out[3][3])
      {
        double c[3][3];
        for (unsigned i = 0; i < 3; ++i)
          for (unsigned j = 0; j < 3; ++j)
          {
            unsigned i1 = (i + 1) % 3, i2 = (i + 2) % 3;
            unsigned j1 = (j + 1) % 3, j2 = (j + 2) % 3;
            c[i][j] = A[i1][j1] * A[i2][j2] - A[i1][j2] * A[i2][j1];
          }
        double det = A[0][0] * c[0][0] + A[0][1] * c[0][1] + A[0][2] * c[0][2];
        if (std::fabs(det) < 1e-12)
          return false;
        for (unsigned i = 0; i < 3; ++i)
          for (unsigned j = 0; j < 3; ++j)
            out[i][j] = c[j][i] / det;
        return true;
      }

      Config m_cfg;
      std::deque<Row> m_rows;
      //! Window being integrated.
      bool m_open;
      double m_t0, m_t;
      double m_m0[3], m_m[3], m_w[3];
      double m_int_w[3], m_int_m[3], m_int_wm[3][3];
      unsigned m_n;
    };
  }
}

#endif
