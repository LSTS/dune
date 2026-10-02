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

#ifndef DUNE_NAVIGATION_HARD_IRON_ESTIMATOR_HPP_INCLUDED_
#define DUNE_NAVIGATION_HARD_IRON_ESTIMATOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <algorithm>
#include <cmath>
#include <vector>

namespace DUNE
{
  namespace Navigation
  {
    //! Online estimate of the horizontal hard-iron offset of a magnetometer.
    //!
    //! The levelled horizontal field (body field rotated by roll and pitch)
    //! traces a circle as the heading changes; a hard-iron offset moves its
    //! centre away from the origin. Samples are averaged per heading bin
    //! (bins forget samples older than a time window, so the estimate follows
    //! slow changes in the magnetic environment), and:
    //! - with enough bins covered, a circle fit of the bin means gives the
    //!   offset (its centre);
    //! - with partial coverage, opposite bins already reveal a wrong offset:
    //!   an offset error e makes |h(psi) - o| - |h(psi + pi) - o| = 2 e . u(psi),
    //!   so straight legs in opposite directions are enough to detect it.
    //!
    //! For small roll and pitch the levelled centre equals the body x/y
    //! offset to subtract from the measured field.
    class HardIronEstimator
    {
    public:
      //! Estimator parameters.
      struct Config
      {
        //! Number of heading bins over 360 degrees (even).
        unsigned bins;
        //! Samples a bin needs before it counts.
        unsigned min_samples;
        //! Bins needed for a circle fit.
        unsigned min_bins;
        //! A bin unused for longer than this is cleared (s).
        double window;
        //! Effective number of samples averaged per bin (exponential mean).
        unsigned memory;
        //! Median opposite-bin magnitude mismatch, relative to the field, above
        //! which the current offset is wrong (an offset error e gives about
        //! 1.4 e: 0.04 flags errors from ~3 % of the field, ~1.6 deg).
        double threshold;
        //! Largest RMS radial residual of a fit, relative to the field. Soft
        //! iron turns the circle into an ellipse (2-3 % on noptilus LIMUs)
        //! without moving its centre, so this only rejects nonsense fits.
        double max_fit_rms;
        //! Smallest change of the fitted offset, relative to the field, that
        //! replaces the current one.
        double min_change;
        //! Period between evaluations in process() (s).
        double eval_period;
        //! Period between repeated calibration requests (s).
        double remind_period;
        //! Consecutive evaluations above the threshold before a request.
        unsigned persist;
        //! Smallest change, relative to the field, since the last reported
        //! offset that is reported again (smaller refits apply silently).
        double report_change;

        Config(void):
          bins(24),
          min_samples(250),
          min_bins(18),
          window(3600.0),
          memory(500),
          threshold(0.04),
          max_fit_rms(0.05),
          min_change(0.005),
          eval_period(5.0),
          remind_period(300.0),
          persist(2),
          report_change(0.01)
        { }
      };

      //! What process() concluded.
      enum Event
      {
        //! Nothing new.
        EV_NONE,
        //! A fit replaced the offset (see offsetX(), offsetY(), lastFit()).
        EV_OFFSET_UPDATED,
        //! Opposite headings disagree and the coverage is too small to fit:
        //! a calibration maneuver is needed (repeated every remind_period).
        EV_CALIBRATION_NEEDED,
        //! The offset is consistent again.
        EV_CALIBRATION_RESOLVED
      };

      //! Result of a circle fit.
      struct Fit
      {
        //! Centre (offset) and radius (horizontal field).
        double x, y, radius;
        //! RMS radial residual, relative to the radius.
        double rms;
        //! Bins used.
        unsigned bins;
      };

      HardIronEstimator(const Config& cfg = Config()):
        m_cfg(cfg),
        m_ox(0.0),
        m_oy(0.0),
        m_last_eval(-1e9),
        m_last_request(-1e9),
        m_needed(false),
        m_mismatch(-1.0),
        m_rx(0.0),
        m_ry(0.0),
        m_above(0),
        m_has_fit(false)
      {
        if (m_cfg.bins < 4)
          m_cfg.bins = 4;
        if (m_cfg.bins % 2)
          ++m_cfg.bins;
        reset();
      }

      //! Forget every sample.
      void
      reset(void)
      {
        m_bins.assign(m_cfg.bins, Bin());
        m_needed = false;
        m_mismatch = -1.0;
        m_above = 0;
        m_has_fit = false;
      }

      //! Levelled horizontal field of a body-frame field m for roll phi and
      //! pitch theta (the same convention as a tilt-compensated heading,
      //! yaw = atan2(-hy, hx)).
      static void
      level(const double m[3], double phi, double theta, double& hx, double& hy)
      {
        double c_phi = std::cos(phi), s_phi = std::sin(phi);
        double c_th = std::cos(theta), s_th = std::sin(theta);
        hx = m[0] * c_th + m[1] * s_th * s_phi + m[2] * s_th * c_phi;
        hy = m[1] * c_phi - m[2] * s_phi;
      }

      //! Set the offset in use (e.g. from configuration).
      void
      setOffset(double x, double y)
      {
        m_ox = m_rx = x;
        m_oy = m_ry = y;
      }

      //! Offset in use, to subtract from the body x/y field.
      double
      offsetX(void) const
      {
        return m_ox;
      }

      double
      offsetY(void) const
      {
        return m_oy;
      }

      //! The fit behind the last EV_OFFSET_UPDATED or, when fits are not
      //! applied, the latest fit (see hasFit()).
      const Fit&
      lastFit(void) const
      {
        return m_fit;
      }

      //! The last evaluation produced a fit.
      bool
      hasFit(void) const
      {
        return m_has_fit;
      }

      //! Opposite-bin mismatch found by the last evaluation (negative: none).
      double
      lastMismatch(void) const
      {
        return m_mismatch;
      }

      //! Add a sample and, at most every eval_period, decide: replace the
      //! offset with a full-coverage fit (when apply is true), or request a
      //! calibration when opposite headings disagree with too little coverage
      //! to fit.
      Event
      process(double t, double hx, double hy, double yaw, bool apply)
      {
        update(t, hx, hy, yaw);
        if (t - m_last_eval < m_cfg.eval_period)
          return EV_NONE;
        m_last_eval = t;

        Fit f;
        m_has_fit = fit(t, f);
        if (m_has_fit)
        {
          if (!apply)
            m_fit = f;
          bool changed = std::sqrt((f.x - m_ox) * (f.x - m_ox) + (f.y - m_oy) * (f.y - m_oy))
                         > m_cfg.min_change * f.radius;
          if (apply && changed)
          {
            m_ox = f.x;
            m_oy = f.y;
            m_fit = f;
            m_above = 0;
            m_mismatch = mismatch(t, m_ox, m_oy);
            // A full-coverage fit settles the calibration.
            bool was_needed = m_needed;
            m_needed = false;
            double moved = std::sqrt((m_ox - m_rx) * (m_ox - m_rx) + (m_oy - m_ry) * (m_oy - m_ry));
            if (moved > m_cfg.report_change * f.radius)
            {
              m_rx = m_ox;
              m_ry = m_oy;
              return EV_OFFSET_UPDATED;
            }
            return was_needed ? EV_CALIBRATION_RESOLVED : EV_NONE;
          }
        }

        // Request after `persist` evaluations above the threshold; clear below
        // half of it (hysteresis), so a borderline value doesn't flip-flop.
        m_mismatch = mismatch(t, m_ox, m_oy);
        if (m_mismatch > m_cfg.threshold)
        {
          if (++m_above >= m_cfg.persist
              && (!m_needed || t - m_last_request >= m_cfg.remind_period))
          {
            m_needed = true;
            m_last_request = t;
            return EV_CALIBRATION_NEEDED;
          }
        }
        else
        {
          m_above = 0;
          if (m_needed && m_mismatch >= 0.0 && m_mismatch < 0.5 * m_cfg.threshold)
          {
            m_needed = false;
            return EV_CALIBRATION_RESOLVED;
          }
        }
        return EV_NONE;
      }

      //! Whether a calibration is currently requested.
      bool
      calibrationNeeded(void) const
      {
        return m_needed;
      }

      //! Add a sample.
      //! @param[in] t time (s).
      //! @param[in] hx levelled field, forward component.
      //! @param[in] hy levelled field, right component.
      //! @param[in] yaw heading used to choose the bin (rad).
      void
      update(double t, double hx, double hy, double yaw)
      {
        Bin& b = m_bins[binOf(yaw)];
        if (b.n > 0 && t - b.last > m_cfg.window)
          b = Bin();
        double n = b.n < m_cfg.memory ? b.n + 1.0 : (double)m_cfg.memory;
        b.x += (hx - b.x) / n;
        b.y += (hy - b.y) / n;
        ++b.n;
        b.last = t;
      }

      //! Number of bins that count at time t.
      unsigned
      validBins(double t) const
      {
        unsigned n = 0;
        for (unsigned i = 0; i < m_bins.size(); ++i)
          n += valid(m_bins[i], t);
        return n;
      }

      //! Circle fit of the valid bin means.
      //! @return true with enough bins and a residual below the limit.
      bool
      fit(double t, Fit& out) const
      {
        // Algebraic fit: x^2 + y^2 = 2 a x + 2 b y + c, normal equations.
        double s[3][4] = {{0.0}};
        unsigned n = 0;
        for (unsigned i = 0; i < m_bins.size(); ++i)
        {
          const Bin& b = m_bins[i];
          if (!valid(b, t))
            continue;
          double row[4] = {2.0 * b.x, 2.0 * b.y, 1.0, b.x * b.x + b.y * b.y};
          for (unsigned r = 0; r < 3; ++r)
            for (unsigned c = 0; c < 4; ++c)
              s[r][c] += row[r] * row[c];
          ++n;
        }
        out.bins = n;
        if (n < m_cfg.min_bins || n < 3)
          return false;

        double sol[3];
        if (!solve3(s, sol))
          return false;
        double r2 = sol[2] + sol[0] * sol[0] + sol[1] * sol[1];
        if (r2 <= 0.0)
          return false;
        out.x = sol[0];
        out.y = sol[1];
        out.radius = std::sqrt(r2);

        double acc = 0.0;
        for (unsigned i = 0; i < m_bins.size(); ++i)
        {
          const Bin& b = m_bins[i];
          if (!valid(b, t))
            continue;
          double e = std::sqrt((b.x - out.x) * (b.x - out.x) + (b.y - out.y) * (b.y - out.y)) - out.radius;
          acc += e * e;
        }
        out.rms = std::sqrt(acc / n) / out.radius;
        return out.rms <= m_cfg.max_fit_rms;
      }

      //! Median magnitude mismatch between opposite valid bins once the
      //! offset (ox, oy) is removed, relative to the mean corrected magnitude.
      //! The median (not the worst pair) keeps one disturbed bin from raising
      //! a request; an offset error e affects most pairs (2 e |cos|).
      //! @return the mismatch, or a negative value without an opposite pair.
      double
      mismatch(double t, double ox, double oy) const
      {
        unsigned half = m_bins.size() / 2;
        std::vector<double> rel;
        for (unsigned i = 0; i < half; ++i)
        {
          const Bin& a = m_bins[i];
          const Bin& b = m_bins[i + half];
          if (!valid(a, t) || !valid(b, t))
            continue;
          double ma = std::sqrt((a.x - ox) * (a.x - ox) + (a.y - oy) * (a.y - oy));
          double mb = std::sqrt((b.x - ox) * (b.x - ox) + (b.y - oy) * (b.y - oy));
          rel.push_back(std::fabs(ma - mb) / (0.5 * (ma + mb)));
        }
        if (rel.empty())
          return -1.0;
        std::sort(rel.begin(), rel.end());
        unsigned n = rel.size();
        return (n % 2) ? rel[n / 2] : 0.5 * (rel[n / 2 - 1] + rel[n / 2]);
      }

      //! True when opposite bins show the offset (ox, oy) is wrong.
      bool
      offsetInconsistent(double t, double ox, double oy) const
      {
        return mismatch(t, ox, oy) > m_cfg.threshold;
      }

      const Config&
      config(void) const
      {
        return m_cfg;
      }

    private:
      struct Bin
      {
        double x, y, last;
        unsigned n;

        Bin(void):
          x(0.0), y(0.0), last(0.0), n(0)
        { }
      };

      unsigned
      binOf(double yaw) const
      {
        double two_pi = 2.0 * M_PI;
        double a = std::fmod(yaw, two_pi);
        if (a < 0.0)
          a += two_pi;
        unsigned i = (unsigned)(a / two_pi * m_bins.size());
        return i < m_bins.size() ? i : 0;
      }

      bool
      valid(const Bin& b, double t) const
      {
        return b.n >= m_cfg.min_samples && t - b.last <= m_cfg.window;
      }

      //! Solve the 3x3 system in s (augmented, column 3) by Gaussian elimination.
      static bool
      solve3(double s[3][4], double x[3])
      {
        for (unsigned c = 0; c < 3; ++c)
        {
          unsigned p = c;
          for (unsigned r = c + 1; r < 3; ++r)
            if (std::fabs(s[r][c]) > std::fabs(s[p][c]))
              p = r;
          if (std::fabs(s[p][c]) < 1e-15)
            return false;
          for (unsigned k = 0; k < 4; ++k)
            std::swap(s[c][k], s[p][k]);
          for (unsigned r = 0; r < 3; ++r)
          {
            if (r == c)
              continue;
            double f = s[r][c] / s[c][c];
            for (unsigned k = c; k < 4; ++k)
              s[r][k] -= f * s[c][k];
          }
        }
        for (unsigned c = 0; c < 3; ++c)
          x[c] = s[c][3] / s[c][c];
        return true;
      }

      Config m_cfg;
      std::vector<Bin> m_bins;
      //! Offset in use.
      double m_ox, m_oy;
      //! Time of the last evaluation and of the last calibration request.
      double m_last_eval, m_last_request;
      //! A calibration is requested.
      bool m_needed;
      //! Mismatch at the last evaluation.
      double m_mismatch;
      //! Fit behind the last offset update.
      Fit m_fit;
      //! Last reported offset.
      double m_rx, m_ry;
      //! Consecutive evaluations above the threshold.
      unsigned m_above;
      //! The last evaluation produced a fit.
      bool m_has_fit;
    };
  }
}

#endif
