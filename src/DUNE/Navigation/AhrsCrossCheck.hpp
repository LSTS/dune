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

#ifndef DUNE_NAVIGATION_AHRS_CROSS_CHECK_HPP_INCLUDED_
#define DUNE_NAVIGATION_AHRS_CROSS_CHECK_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <DUNE/Math/Angles.hpp>
#include <DUNE/Math/Constants.hpp>
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! Compares two AHRS on the same vehicle over a calibration maneuver:
    //! - the mounting rotation of B relative to A, from their angular rates
    //!   (attitude- and field-free), and how much their roll/pitch disagree
    //!   beyond it (accelerometer misalignment);
    //! - the heading difference B - A of their own headings, as they will be
    //!   once each AHRS applies its new x/y hard iron: with both right it is a
    //!   constant, and a wrong hard iron leaves a first harmonic of A's
    //!   heading. Their own headings, not re-levelled fields: re-levelling
    //!   with roll/pitch that disagree by 2-3 degrees (noptilus-1 2026-07-28)
    //!   leaks the vertical field into a 5 degree harmonic of its own.
    //! Samples are kept in 1 s bins: the mean rates of each AHRS and its last
    //! attitude.
    class AhrsCrossCheck
    {
    public:
      //! Hard iron an AHRS will remove from its x/y field, and its mean
      //! levelled horizontal field (same units).
      struct Correction
      {
        double b[2];
        double horizontal;
      };

      //! Mounting rotation of B relative to A (vector in B = R' vector in A).
      struct Mounting
      {
        //! R maps B's frame to A's: w_A = R w_B.
        double R[3][3];
        //! Roll, pitch and yaw of R (rad, ZYX); sigma of each (rad).
        double rpy[3];
        double sigma[3];
        //! Rms of the rate residual (rad/s).
        double residual;
        //! Mean roll and pitch difference B - A beyond the mounting (rad).
        double tilt[2];
        //! Bins used.
        unsigned bins;
      };

      //! Heading difference B - A as a function of A's heading.
      struct Heading
      {
        //! Constant part (rad).
        double offset;
        //! Amplitude of the first harmonic (rad).
        double harmonic;
        //! Samples used.
        unsigned samples;
      };

      //! Largest sigma of a mounting angle that counts as determined (rad).
      static constexpr double c_max_mount_sigma = 0.25 * 3.14159265358979323846 / 180.0;
      //! Bins needed for either result.
      static constexpr unsigned c_min_bins = 60;
      //! Heading sectors (30 degrees) that must all be visited.
      static constexpr unsigned c_sectors = 12;

      AhrsCrossCheck(void)
      {
        clear();
      }

      void
      clear(void)
      {
        m_bins.clear();
      }

      //! @param[in] k AHRS (0: A, 1: B).
      //! @param[in] t time (s).
      //! @param[in] phi, theta, psi the AHRS's attitude (rad).
      void
      addAttitude(unsigned k, double t, double phi, double theta, double psi)
      {
        Bin& bin = m_bins[binIndex(t)];
        bin.att[k][0] = phi;
        bin.att[k][1] = theta;
        bin.att[k][2] = psi;
        bin.has_att[k] = true;
      }

      //! @param[in] k AHRS (0: A, 1: B).
      //! @param[in] t time (s).
      //! @param[in] w angular rates (rad/s).
      void
      addRates(unsigned k, double t, const double w[3])
      {
        Bin& bin = m_bins[binIndex(t)];
        for (unsigned i = 0; i < 3; ++i)
          bin.w[k][i] += w[i];
        ++bin.nw[k];
      }

      //! Mounting rotation from the rate bins of both AHRS. Each AHRS's mean
      //! rate is removed first, which removes the gyro biases (and leaves the
      //! loiter's yaw-rate changes, pitch and waves as excitation).
      //! @param[out] r mounting.
      //! @param[out] why reason when not determined.
      //! @return true when every angle's sigma is below c_max_mount_sigma.
      bool
      mounting(Mounting& r, std::string& why) const
      {
        std::vector<Vector> a, b;
        Vector ma{}, mb{};
        for (const auto& itr : m_bins)
        {
          const Bin& bin = itr.second;
          if (bin.nw[0] < c_min_rates || bin.nw[1] < c_min_rates)
            continue;
          Vector va, vb;
          for (unsigned i = 0; i < 3; ++i)
          {
            va.v[i] = bin.w[0][i] / bin.nw[0];
            vb.v[i] = bin.w[1][i] / bin.nw[1];
            ma.v[i] += va.v[i];
            mb.v[i] += vb.v[i];
          }
          a.push_back(va);
          b.push_back(vb);
        }

        r.bins = a.size();
        if (r.bins < c_min_bins)
        {
          why = Utils::String::str("%u of %u bins with rates of both", r.bins, c_min_bins);
          return false;
        }

        for (unsigned i = 0; i < 3; ++i)
        {
          ma.v[i] /= r.bins;
          mb.v[i] /= r.bins;
        }
        for (unsigned n = 0; n < r.bins; ++n)
        {
          for (unsigned i = 0; i < 3; ++i)
          {
            a[n].v[i] -= ma.v[i];
            b[n].v[i] -= mb.v[i];
          }
        }

        // Gauss-Newton on R <- exp([d]x) R, from the identity: the drivers
        // already rotate each AHRS to the vehicle frame, so R is small.
        identity(r.R);
        Math::Matrix J(3, 3), g(3, 1);
        double sse = 0.0;
        for (unsigned it = 0; it < c_iterations; ++it)
        {
          J.fill(0.0);
          g.fill(0.0);
          sse = 0.0;
          for (unsigned n = 0; n < r.bins; ++n)
          {
            // Residual e = a - c, c = R b; d(c)/dd = -[c]x.
            double c[3], e[3];
            for (unsigned i = 0; i < 3; ++i)
            {
              c[i] = r.R[i][0] * b[n].v[0] + r.R[i][1] * b[n].v[1] + r.R[i][2] * b[n].v[2];
              e[i] = a[n].v[i] - c[i];
              sse += e[i] * e[i];
            }
            double H[3][3] = {{0.0, c[2], -c[1]}, {-c[2], 0.0, c[0]}, {c[1], -c[0], 0.0}};
            for (unsigned i = 0; i < 3; ++i)
            {
              for (unsigned j = 0; j < 3; ++j)
              {
                double s = 0.0;
                for (unsigned k = 0; k < 3; ++k)
                  s += H[k][i] * H[k][j];
                J(i, j) += s;
              }
              g(i) += H[0][i] * e[0] + H[1][i] * e[1] + H[2][i] * e[2];
            }
          }

          if (J.det() <= 0.0)
          {
            why = "rates of B do not span two axes";
            return false;
          }

          Math::Matrix d = inverse(J) * g;
          rotate(r.R, d(0), d(1), d(2));
        }

        // Sigma from the last linearisation: (J' J)^-1 times the residual
        // variance per component.
        double var = sse / (3.0 * r.bins - 3.0);
        Math::Matrix P = inverse(J) * var;
        r.residual = std::sqrt(sse / (3.0 * r.bins));
        r.rpy[0] = std::atan2(r.R[2][1], r.R[2][2]);
        r.rpy[1] = -std::asin(std::max(-1.0, std::min(1.0, r.R[2][0])));
        r.rpy[2] = std::atan2(r.R[1][0], r.R[0][0]);
        for (unsigned i = 0; i < 3; ++i)
          r.sigma[i] = std::sqrt(P(i, i));

        double tilt[2] = {0.0, 0.0};
        unsigned n_att = 0;
        for (const auto& itr : m_bins)
        {
          const Bin& bin = itr.second;
          if (!bin.has_att[0] || !bin.has_att[1])
            continue;
          for (unsigned i = 0; i < 2; ++i)
            tilt[i] += Math::Angles::normalizeRadian(bin.att[1][i] - bin.att[0][i]);
          ++n_att;
        }
        for (unsigned i = 0; i < 2; ++i)
          r.tilt[i] = n_att ? tilt[i] / n_att - r.rpy[i] : 0.0;

        for (unsigned i = 0; i < 3; ++i)
        {
          if (r.sigma[i] >= c_max_mount_sigma)
          {
            why = Utils::String::str("%s sigma %.2f deg above %.2f deg", c_axes[i],
                                     Math::Angles::degrees(r.sigma[i]),
                                     Math::Angles::degrees(c_max_mount_sigma));
            return false;
          }
        }

        return true;
      }

      //! Heading difference B - A with each AHRS's heading corrected for its
      //! new hard iron, fitted to a constant, the first and the second
      //! harmonic of A's heading.
      //! @param[in] ca correction of A.
      //! @param[in] cb correction of B.
      //! @param[out] r heading difference.
      //! @param[out] why reason when not determined.
      //! @return true when determined.
      bool
      heading(const Correction& ca, const Correction& cb, Heading& r, std::string& why) const
      {
        Math::Matrix N(5, 5, 0.0), y(5, 1, 0.0);
        bool sectors[c_sectors] = {false};
        r.samples = 0;

        for (const auto& itr : m_bins)
        {
          const Bin& bin = itr.second;
          if (!bin.has_att[0] || !bin.has_att[1])
            continue;

          double pa = corrected(ca, bin.att[0][2]);
          double pb = corrected(cb, bin.att[1][2]);
          double d = Math::Angles::normalizeRadian(pb - pa);
          double h[5] = {1.0, std::cos(pa), std::sin(pa), std::cos(2 * pa), std::sin(2 * pa)};
          for (unsigned i = 0; i < 5; ++i)
          {
            for (unsigned j = 0; j < 5; ++j)
              N(i, j) += h[i] * h[j];
            y(i) += h[i] * d;
          }

          double s = Math::Angles::normalizeRadian(pa) + Math::c_pi;
          sectors[std::min(c_sectors - 1, (unsigned)(s / (Math::c_two_pi / c_sectors)))] = true;
          ++r.samples;
        }

        unsigned n = 0;
        for (unsigned i = 0; i < c_sectors; ++i)
          n += sectors[i] ? 1 : 0;

        if (r.samples < c_min_bins || n < c_sectors)
        {
          why = Utils::String::str("%u samples, %u of %u heading sectors", r.samples, n,
                                   c_sectors);
          return false;
        }

        Math::Matrix x = inverse(N) * y;
        r.offset = x(0);
        r.harmonic = std::sqrt(x(1) * x(1) + x(2) * x(2));
        return true;
      }

      //! Correction that leaves the heading as the AHRS gives it.
      static Correction
      none(void)
      {
        Correction c;
        c.b[0] = c.b[1] = 0.0;
        c.horizontal = 1.0;
        return c;
      }

    private:
      //! Bin length (s).
      static constexpr double c_bin = 1.0;
      //! Rate samples of each AHRS needed in a bin.
      static constexpr unsigned c_min_rates = 2;
      //! Gauss-Newton iterations.
      static constexpr unsigned c_iterations = 6;
      //! Names of the mounting angles.
      static constexpr const char* c_axes[3] = {"roll", "pitch", "yaw"};

      struct Bin
      {
        double w[2][3] = {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}};
        unsigned nw[2] = {0, 0};
        //! Last roll, pitch and heading of each AHRS.
        double att[2][3];
        bool has_att[2] = {false, false};
      };

      struct Vector
      {
        double v[3];
      };

      static int64_t
      binIndex(double t)
      {
        return (int64_t)std::floor(t / c_bin);
      }

      static void
      identity(double m[3][3])
      {
        for (unsigned i = 0; i < 3; ++i)
          for (unsigned j = 0; j < 3; ++j)
            m[i][j] = i == j ? 1.0 : 0.0;
      }

      //! R <- exp([d]x) R (Rodrigues).
      static void
      rotate(double R[3][3], double dx, double dy, double dz)
      {
        double th = std::sqrt(dx * dx + dy * dy + dz * dz);
        double E[3][3];
        identity(E);
        if (th > 0.0)
        {
          double k[3] = {dx / th, dy / th, dz / th};
          double K[3][3] = {{0.0, -k[2], k[1]}, {k[2], 0.0, -k[0]}, {-k[1], k[0], 0.0}};
          double s = std::sin(th), c = 1.0 - std::cos(th);
          for (unsigned i = 0; i < 3; ++i)
          {
            for (unsigned j = 0; j < 3; ++j)
            {
              double kk = 0.0;
              for (unsigned l = 0; l < 3; ++l)
                kk += K[i][l] * K[l][j];
              E[i][j] += s * K[i][j] + c * kk;
            }
          }
        }

        double T[3][3];
        for (unsigned i = 0; i < 3; ++i)
          for (unsigned j = 0; j < 3; ++j)
            T[i][j] = E[i][0] * R[0][j] + E[i][1] * R[1][j] + E[i][2] * R[2][j];
        for (unsigned i = 0; i < 3; ++i)
          for (unsigned j = 0; j < 3; ++j)
            R[i][j] = T[i][j];
      }

      //! Heading once b is removed from the levelled field the heading psi
      //! came from (yaw = atan2(-hy, hx), field (H cos psi, -H sin psi)).
      static double
      corrected(const Correction& c, double psi)
      {
        return std::atan2(c.horizontal * std::sin(psi) + c.b[1],
                          c.horizontal * std::cos(psi) - c.b[0]);
      }

      std::map<int64_t, Bin> m_bins;
    };
  }
}

#endif
