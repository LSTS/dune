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
#include <vector>

namespace DUNE
{
  namespace Navigation
  {
    //! Attitude-free magnetometer hard-iron (3-axis) and gyro bias estimate.
    //!
    //! In the body frame the external field only rotates, so for a hard-iron
    //! offset b and a gyro bias b_g (rates measured as w = w_true + b_g):
    //!
    //!   dm/dt + w x m = [w]x b - [m]x b_g - b_g x b
    //!
    //! Integrated over short windows [t0, t1] (length T) to avoid
    //! differentiating the field:
    //!
    //!   m(t1) - m(t0) + int(w x m) + T b_g x b = [int w]x b - [int m]x b_g
    //!
    //! Every window adds three equations in (b, b_g). The bilinear term (not
    //! negligible with MEMS gyro biases of 0.1-0.6 deg/s) is taken from the
    //! previous iterate; each iteration also reweights (Huber). No roll, pitch or heading is
    //! used, so accelerations (waves, turns) that corrupt an accelerometer
    //! attitude do not bias the result, unlike fitting the levelled field.
    //! b_z needs rotation about a horizontal axis (pitch or roll changes); with
    //! yaw-only motion it is unobservable and its sigma stays large.
    //!
    //! After Troni & Whitcomb (IEEE/ASME T-Mech 2019) and Spielvogel, Shah &
    //! Whitcomb (Field Robotics 2021); hard iron and gyro bias only (no soft iron).
    class GyroAidedMagCalibration
    {
    public:
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

        Config(void):
          window(2.0),
          min_samples(5),
          max_gap(0.5),
          huber(1.5),
          iterations(20),
          prior_sigma(100.0)
        { }
      };

      struct Result
      {
        //! Hard-iron offset (field units), body x, y, z.
        double b[3];
        //! Gyro bias (rad/s), body x, y, z.
        double bg[3];
        //! Standard deviations of b[0..2], bg[0..2].
        double sigma[6];
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
            double c0[3], c1[3];
            cross(m_w, m_m, c0);
            cross(w, m, c1);
            for (unsigned i = 0; i < 3; ++i)
            {
              m_int_cross[i] += 0.5 * (c0[i] + c1[i]) * dt;
              m_int_w[i] += 0.5 * (m_w[i] + w[i]) * dt;
              m_int_m[i] += 0.5 * (m_m[i] + m[i]) * dt;
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

      //! Windows collected so far.
      unsigned
      windows(void) const
      {
        return m_rows.size();
      }

      //! Solve for the hard iron and gyro bias.
      //! @return false without any window.
      bool
      solve(Result& r) const
      {
        r.windows = m_rows.size();
        if (m_rows.empty())
          return false;

        unsigned n = m_rows.size() * 3;
        std::vector<double> wgt(n, 1.0);
        double x[6] = {0.0};
        double scale = 1.0;
        double inv[6][6];

        for (unsigned it = 0; it <= m_cfg.iterations; ++it)
        {
          // Bilinear term from the current iterate: T (b_g x b).
          double bgxb[3];
          cross(x + 3, x, bgxb);

          // Normal equations with the prior: (A'WA + I/p^2) x = A'Wy.
          double N[6][7] = {{0.0}};
          for (unsigned k = 0; k < n; ++k)
          {
            const double* a = m_rows[k / 3].a[k % 3];
            double y = m_rows[k / 3].y[k % 3] + m_rows[k / 3].T * bgxb[k % 3];
            for (unsigned i = 0; i < 6; ++i)
            {
              for (unsigned j = 0; j < 6; ++j)
                N[i][j] += wgt[k] * a[i] * a[j];
              N[i][6] += wgt[k] * a[i] * y;
            }
          }
          double prior = 1.0 / (m_cfg.prior_sigma * m_cfg.prior_sigma);
          for (unsigned i = 0; i < 6; ++i)
            N[i][i] += prior;

          if (!invert(N, inv))
            return false;
          for (unsigned i = 0; i < 6; ++i)
          {
            x[i] = 0.0;
            for (unsigned j = 0; j < 6; ++j)
              x[i] += inv[i][j] * N[j][6];
          }

          // Residuals, robust scale, Huber weights.
          std::vector<double> res(n);
          for (unsigned k = 0; k < n; ++k)
          {
            const double* a = m_rows[k / 3].a[k % 3];
            double p = 0.0;
            for (unsigned i = 0; i < 6; ++i)
              p += a[i] * x[i];
            res[k] = m_rows[k / 3].y[k % 3] + m_rows[k / 3].T * bgxb[k % 3] - p;
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

        for (unsigned i = 0; i < 3; ++i)
        {
          r.b[i] = x[i];
          r.bg[i] = x[3 + i];
        }
        for (unsigned i = 0; i < 6; ++i)
          r.sigma[i] = scale * std::sqrt(std::max(inv[i][i], 0.0));
        return true;
      }

    private:
      struct Row
      {
        double a[3][6];
        double y[3];
        //! Window length (s).
        double T;
      };

      static void
      cross(const double a[3], const double b[3], double c[3])
      {
        c[0] = a[1] * b[2] - a[2] * b[1];
        c[1] = a[2] * b[0] - a[0] * b[2];
        c[2] = a[0] * b[1] - a[1] * b[0];
      }

      //! [v]x as a 3x3 block at column c of the 3x6 row block.
      static void
      skew(const double v[3], double sign, double a[3][6], unsigned c)
      {
        a[0][c + 0] = 0.0;           a[0][c + 1] = -sign * v[2]; a[0][c + 2] = sign * v[1];
        a[1][c + 0] = sign * v[2];   a[1][c + 1] = 0.0;          a[1][c + 2] = -sign * v[0];
        a[2][c + 0] = -sign * v[1];  a[2][c + 1] = sign * v[0];  a[2][c + 2] = 0.0;
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
          m_int_cross[i] = m_int_w[i] = m_int_m[i] = 0.0;
        }
        m_n = 1;
        m_open = true;
      }

      void
      close(void)
      {
        Row r;
        skew(m_int_w, 1.0, r.a, 0);
        skew(m_int_m, -1.0, r.a, 3);
        for (unsigned i = 0; i < 3; ++i)
          r.y[i] = m_m[i] - m_m0[i] + m_int_cross[i];
        r.T = m_t - m_t0;
        m_rows.push_back(r);
      }

      //! Inverse of the 6x6 block of N (Gauss-Jordan, partial pivoting).
      static bool
      invert(const double N[6][7], double out[6][6])
      {
        double a[6][12];
        for (unsigned i = 0; i < 6; ++i)
          for (unsigned j = 0; j < 12; ++j)
            a[i][j] = j < 6 ? N[i][j] : (j - 6 == i ? 1.0 : 0.0);
        for (unsigned c = 0; c < 6; ++c)
        {
          unsigned p = c;
          for (unsigned r = c + 1; r < 6; ++r)
            if (std::fabs(a[r][c]) > std::fabs(a[p][c]))
              p = r;
          if (std::fabs(a[p][c]) < 1e-300)
            return false;
          for (unsigned k = 0; k < 12; ++k)
            std::swap(a[c][k], a[p][k]);
          double d = a[c][c];
          for (unsigned k = 0; k < 12; ++k)
            a[c][k] /= d;
          for (unsigned r = 0; r < 6; ++r)
          {
            if (r == c)
              continue;
            double f = a[r][c];
            for (unsigned k = 0; k < 12; ++k)
              a[r][k] -= f * a[c][k];
          }
        }
        for (unsigned i = 0; i < 6; ++i)
          for (unsigned j = 0; j < 6; ++j)
            out[i][j] = a[i][6 + j];
        return true;
      }

      Config m_cfg;
      std::vector<Row> m_rows;
      //! Window being integrated.
      bool m_open;
      double m_t0, m_t;
      double m_m0[3], m_m[3], m_w[3];
      double m_int_cross[3], m_int_w[3], m_int_m[3];
      unsigned m_n;
    };
  }
}

#endif
