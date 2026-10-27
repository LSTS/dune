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
// Author: José Braga                                                       *
//***************************************************************************


#ifndef DUNE_NAVIGATION_COMPASS_CALIBRATION_HPP_INCLUDED_
#define DUNE_NAVIGATION_COMPASS_CALIBRATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <limits>
#include <memory>
#include <string>
#include <vector>

#include <DUNE/Math/Angles.hpp>
#include <DUNE/Math/Constants.hpp>
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Navigation/HardIronEstimator.hpp>
#include <DUNE/Navigation/GyroAidedMagCalibration.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! One magnetic field sample of a compass calibration, with the attitude
    //! and angular rates of the same sensor at that time.
    struct CalibrationSample
    {
      //! Time (s).
      double t;
      //! Body magnetic field.
      double m[3];
      //! Roll, pitch and heading (rad).
      double phi, theta, psi;
      //! Angular rates (rad/s), valid when rates is true.
      double w[3];
      bool rates;
    };

    //! Hard-iron calibration computed by a method.
    struct CalibrationResult
    {
      //! Hard-iron offset (field units), body x, y, z. z is zero when not determined.
      double b[3];
      //! Whether b[2] was determined.
      bool z_determined;
      //! Gyro bias (rad/s), when the method estimates it.
      double gyro_bias[3];
      bool has_gyro_bias;
      //! Soft-iron correction (true field = C (m - b)); identity when not
      //! determined. b was estimated with this C, so the two go together.
      double soft_iron[3][3];
      //! Whether soft_iron was determined (otherwise identity).
      bool soft_iron_determined;
      //! Method-specific quality figures, for the log.
      std::string details;
      //! Mean levelled horizontal field over the samples (field units).
      double horizontal;
    };

    //! Set a 3x3 matrix to the identity.
    inline void
    identity(double m[3][3])
    {
      for (unsigned i = 0; i < 3; ++i)
        for (unsigned j = 0; j < 3; ++j)
          m[i][j] = i == j ? 1.0 : 0.0;
    }

    //! A hard-iron calibration method fed with the samples of a maneuver.
    class CalibrationMethod
    {
    public:
      virtual
      ~CalibrationMethod(void)
      { }

      virtual const char*
      name(void) const = 0;

      virtual void
      clear(void) = 0;

      virtual void
      update(const CalibrationSample& s) = 0;

      //! @param[out] r calibration.
      //! @param[out] why reason when the calibration is not determined.
      //! @return true when determined.
      virtual bool
      solve(CalibrationResult& r, std::string& why) = 0;
    };

    //! Attitude-free hard iron, soft iron and gyro bias from the field
    //! kinematics (GyroAidedMagCalibration). Not biased by the accelerometer
    //! attitude errors of a turning, wave-driven loiter, which moved levelled
    //! calibrations by 1-3.5 % of the field. z when pitch/roll changed enough;
    //! soft iron when every term is determined (else hard iron alone).
    class GyroAidedCalibration: public CalibrationMethod
    {
    public:
      const char*
      name(void) const override
      {
        return "Gyro-Aided";
      }

      void
      clear(void) override
      {
        m_gyro.reset();
        m_fields = 0;
        m_paired = 0;
      }

      void
      update(const CalibrationSample& s) override
      {
        ++m_fields;
        if (s.rates)
        {
          ++m_paired;
          m_gyro.add(s.t, s.m, s.w);
        }
      }

      bool
      solve(CalibrationResult& r, std::string& why) override
      {
        GyroAidedMagCalibration::Result g;
        if (m_gyro.windows() < c_min_windows)
        {
          if (m_fields == 0)
            why = "no magnetic field samples";
          else if (m_paired == 0)
            why = "no angular rates paired with the field";
          else
            why = Utils::String::str("%u of %u windows", m_gyro.windows(), c_min_windows);
          return false;
        }

        // Soft iron first; hard iron alone when a soft-iron term is not
        // determined (b then assumes no soft iron).
        std::string soft;
        if (!m_gyro.solve(g, true))
        {
          soft = "no solution";
        }
        else
        {
          unsigned worst = 6;
          for (unsigned i = 7; i < GyroAidedMagCalibration::c_max_unknowns; ++i)
            if (g.sigma[i] > g.sigma[worst])
              worst = i;
          if (g.sigma[worst] >= c_max_soft_sigma)
            soft = Utils::String::str("%s sigma %.2f%% above %.2f%%", c_soft_names[worst - 6],
                                      100.0 * g.sigma[worst], 100.0 * c_max_soft_sigma);
        }
        if (!soft.empty() && !m_gyro.solve(g, false))
        {
          why = "no solution";
          return false;
        }

        if (g.sigma[0] >= c_max_sigma || g.sigma[1] >= c_max_sigma)
        {
          why = Utils::String::str("sigma x/y %.4f/%.4f above %.4f", g.sigma[0],
                                   g.sigma[1], c_max_sigma);
          return false;
        }

        r.z_determined = g.sigma[2] < c_max_sigma;
        r.b[0] = g.b[0];
        r.b[1] = g.b[1];
        r.b[2] = r.z_determined ? g.b[2] : 0.0;
        r.has_gyro_bias = true;
        for (unsigned i = 0; i < 3; ++i)
          r.gyro_bias[i] = g.bg[i];
        r.soft_iron_determined = g.soft_iron;
        for (unsigned i = 0; i < 3; ++i)
          for (unsigned j = 0; j < 3; ++j)
            r.soft_iron[i][j] = g.C[i][j];

        r.details = Utils::String::str("sigma %.4f, %.4f, %.4f; gyro bias %.3f, %.3f, "
                                       "%.3f deg/s; %u windows; ", g.sigma[0], g.sigma[1],
                                       g.sigma[2], Math::Angles::degrees(g.bg[0]),
                                       Math::Angles::degrees(g.bg[1]),
                                       Math::Angles::degrees(g.bg[2]), g.windows);
        if (g.soft_iron)
          r.details += Utils::String::str("soft iron E00 %+.2f%%, E11 %+.2f%%, E01 %+.2f%%, "
                                          "E02 %+.2f%%, E12 %+.2f%% (largest sigma %.2f%%)",
                                          100.0 * (g.C[0][0] - 1.0), 100.0 * (g.C[1][1] - 1.0),
                                          100.0 * g.C[0][1], 100.0 * g.C[0][2],
                                          100.0 * g.C[1][2], 100.0 * maxSoftSigma(g));
        else
          r.details += "soft iron not determined (" + soft + ")";
        return true;
      }

    private:
      //! Windows (2 s each) needed.
      static constexpr unsigned c_min_windows = 60;
      //! Largest sigma of a component that is used (field units; 0.002 is
      //! under 1 % of a 0.25 horizontal field).
      static constexpr double c_max_sigma = 0.002;
      //! Largest sigma of a soft-iron term that is used (fraction; on surface
      //! calibration loiters every term was 0.03-0.07 %).
      static constexpr double c_max_soft_sigma = 0.003;
      //! Soft-iron terms, as in the result's sigma[6..10].
      static constexpr const char* c_soft_names[5] = {"E00", "E11", "E01", "E02", "E12"};

      static double
      maxSoftSigma(const GyroAidedMagCalibration::Result& g)
      {
        double s = 0.0;
        for (unsigned i = 6; i < GyroAidedMagCalibration::c_max_unknowns; ++i)
          s = std::max(s, g.sigma[i]);
        return s;
      }

      GyroAidedMagCalibration m_gyro;
      //! Field samples, and those paired with angular rates.
      unsigned m_fields = 0;
      unsigned m_paired = 0;
    };

    //! Midpoint of the extremes of the field levelled with the sensor's
    //! roll/pitch (the original maneuver method). x/y only: the levelled
    //! vertical field is the Earth's field plus z and does not give z.
    class MinMaxCalibration: public CalibrationMethod
    {
    public:
      const char*
      name(void) const override
      {
        return "Min-Max";
      }

      void
      clear(void) override
      {
        for (unsigned i = 0; i < 2; ++i)
        {
          m_max[i] = -std::numeric_limits<double>::max();
          m_min[i] = std::numeric_limits<double>::max();
        }
        for (unsigned i = 0; i < c_bins; ++i)
          m_bins[i] = false;
      }

      void
      update(const CalibrationSample& s) override
      {
        double h[2];
        HardIronEstimator::level(s.m, s.phi, s.theta, h[0], h[1]);
        for (unsigned i = 0; i < 2; ++i)
        {
          m_max[i] = std::max(m_max[i], h[i]);
          m_min[i] = std::min(m_min[i], h[i]);
        }
        double a = Math::Angles::normalizeRadian(s.psi) + Math::c_pi;
        m_bins[std::min(c_bins - 1, (unsigned)(a / (Math::c_two_pi / c_bins)))] = true;
      }

      bool
      solve(CalibrationResult& r, std::string& why) override
      {
        unsigned n = 0;
        for (unsigned i = 0; i < c_bins; ++i)
          n += m_bins[i] ? 1 : 0;
        if (n < c_bins)
        {
          why = Utils::String::str("%u of %u heading bins covered", n, c_bins);
          return false;
        }

        r.b[0] = (m_max[0] + m_min[0]) / 2;
        r.b[1] = (m_max[1] + m_min[1]) / 2;
        r.b[2] = 0.0;
        r.z_determined = false;
        r.has_gyro_bias = false;
        identity(r.soft_iron);
        r.soft_iron_determined = false;
        r.details = Utils::String::str("levelled x %.4f..%.4f, y %.4f..%.4f", m_min[0],
                                       m_max[0], m_min[1], m_max[1]);
        return true;
      }

    private:
      //! Heading bins (15 degrees) that must all be visited: a full turn.
      static constexpr unsigned c_bins = 24;

      double m_max[2], m_min[2];
      bool m_bins[c_bins];
    };

    //! Centre of the circle the levelled horizontal field traces as the
    //! heading changes, fitted to per-heading-bin means. x/y only.
    class CircleFitCalibration: public CalibrationMethod
    {
    public:
      CircleFitCalibration(void):
        m_est(config()),
        m_last(0.0)
      { }

      const char*
      name(void) const override
      {
        return "Circle Fit";
      }

      void
      clear(void) override
      {
        m_est.reset();
      }

      void
      update(const CalibrationSample& s) override
      {
        double hx, hy;
        HardIronEstimator::level(s.m, s.phi, s.theta, hx, hy);
        m_last = s.t;
        m_est.update(m_last, hx, hy, s.psi);
      }

      bool
      solve(CalibrationResult& r, std::string& why) override
      {
        HardIronEstimator::Fit f;
        if (!m_est.fit(m_last, f))
        {
          why = Utils::String::str("%u of 24 heading bins covered", f.bins);
          return false;
        }

        r.b[0] = f.x;
        r.b[1] = f.y;
        r.b[2] = 0.0;
        r.z_determined = false;
        r.has_gyro_bias = false;
        identity(r.soft_iron);
        r.soft_iron_determined = false;
        r.details = Utils::String::str("%u heading bins, residual %.1f%%", f.bins,
                                       100.0 * f.rms);
        return true;
      }

    private:
      static HardIronEstimator::Config
      config(void)
      {
        HardIronEstimator::Config cfg;
        // A maneuver is one bounded data set: never forget a bin.
        cfg.window = std::numeric_limits<double>::max();
        return cfg;
      }

      HardIronEstimator m_est;
      double m_last;
    };

    //! Age of a calibration stamped "YYYY-MM-DD HH:MM" (the sensor drivers'
    //! 'Last Calibration Time'), at day resolution.
    //! @param[in] stamp calibration time.
    //! @param[in] now current time (s since the epoch).
    //! @param[out] days age.
    //! @return false when stamp is not a date (e.g. "N/A").
    inline bool
    calibrationAge(const std::string& stamp, double now, double& days)
    {
      int y, m, d;
      if (std::sscanf(stamp.c_str(), "%d-%d-%d", &y, &m, &d) != 3
          || m < 1 || m > 12 || d < 1 || d > 31)
        return false;

      // Days since 1970-01-01 of a civil date (H. Hinnant's algorithm).
      y -= m <= 2;
      int era = (y >= 0 ? y : y - 399) / 400;
      int yoe = y - era * 400;
      int doy = (153 * (m + (m > 2 ? -3 : 9)) + 2) / 5 + d - 1;
      int doe = yoe * 365 + yoe / 4 - yoe / 100 + doy;
      double epoch_days = era * 146097.0 + doe - 719468.0;

      days = now / 86400.0 - epoch_days;
      return true;
    }

    //! Hard-iron calibration from a compass calibration maneuver: every
    //! configured method sees every sample, and the first one (in the
    //! configured order) that determines a calibration gives it.
    class CompassCalibration
    {
    public:
      CompassCalibration(void):
        m_rate_time(-1.0),
        m_phi(0.0),
        m_theta(0.0),
        m_psi(0.0)
      {
        std::vector<std::string> unknown;
        setMethods(defaultMethods(), unknown);
      }

      //! Methods by priority, as named in configuration.
      static std::vector<std::string>
      defaultMethods(void)
      {
        return {"Gyro-Aided", "Min-Max"};
      }

      //! @return new method by name, or null when unknown.
      static std::unique_ptr<CalibrationMethod>
      create(const std::string& name)
      {
        if (name == "Gyro-Aided")
          return std::unique_ptr<CalibrationMethod>(new GyroAidedCalibration);
        if (name == "Min-Max")
          return std::unique_ptr<CalibrationMethod>(new MinMaxCalibration);
        if (name == "Circle Fit")
          return std::unique_ptr<CalibrationMethod>(new CircleFitCalibration);
        return nullptr;
      }

      //! Replace the methods (and clear the samples).
      //! @param[in] names methods by priority.
      //! @param[out] unknown names that are not methods (skipped).
      void
      setMethods(const std::vector<std::string>& names, std::vector<std::string>& unknown)
      {
        m_methods.clear();
        for (const std::string& n : names)
        {
          std::unique_ptr<CalibrationMethod> m = create(n);
          if (m)
            m_methods.push_back(std::move(m));
          else
            unknown.push_back(n);
        }
        clear();
      }

      void
      clear(void)
      {
        for (auto& m : m_methods)
          m->clear();
        m_rate_time = -1.0;
        m_h_sum = 0.0;
        m_h_count = 0;
      }

      void
      updateDCM(const IMC::EulerAngles& msg)
      {
        m_phi = msg.phi;
        m_theta = msg.theta;
        m_psi = msg.psi;
      }

      //! Angular velocity of the same sensor.
      void
      updateRates(const IMC::AngularVelocity& msg)
      {
        m_rate[0] = msg.x;
        m_rate[1] = msg.y;
        m_rate[2] = msg.z;
        m_rate_time = msg.getTimeStamp();
      }

      void
      updateField(const IMC::MagneticField& msg)
      {
        CalibrationSample s;
        s.t = msg.getTimeStamp();
        s.m[0] = msg.x;
        s.m[1] = msg.y;
        s.m[2] = msg.z;
        s.phi = m_phi;
        s.theta = m_theta;
        s.psi = m_psi;
        s.rates = m_rate_time >= 0.0 && std::fabs(s.t - m_rate_time) < c_rate_age;
        for (unsigned i = 0; i < 3; ++i)
          s.w[i] = m_rate[i];

        for (auto& m : m_methods)
          m->update(s);

        double hx, hy;
        HardIronEstimator::level(s.m, s.phi, s.theta, hx, hy);
        m_h_sum += std::sqrt(hx * hx + hy * hy);
        ++m_h_count;
      }

      //! Compute the calibration (1x3: x, y, z) and clear the samples.
      //! @return false when no method determined one (the samples are kept,
      //! so the maneuver can continue; failures() says why).
      bool
      getCalibrationParams(Math::Matrix& params)
      {
        params.resizeAndFill(1, 3, 0.0);
        m_failures.clear();

        for (auto& m : m_methods)
        {
          std::string why;
          if (m->solve(m_result, why))
          {
            m_method = m->name();
            m_result.horizontal = m_h_count ? m_h_sum / m_h_count : 0.0;
            for (unsigned i = 0; i < 3; ++i)
              params(i) = m_result.b[i];
            clear();
            return true;
          }
          m_failures += (m_failures.empty() ? "" : "; ") + std::string(m->name()) + ": " + why;
        }

        if (m_methods.empty())
          m_failures = "no calibration methods";
        return false;
      }

      //! Method behind the last successful getCalibrationParams().
      const std::string&
      lastMethod(void) const
      {
        return m_method;
      }

      //! Result of the last successful getCalibrationParams().
      const CalibrationResult&
      lastResult(void) const
      {
        return m_result;
      }

      //! Whether the z of the last calibration was determined (zero otherwise).
      bool
      lastZDetermined(void) const
      {
        return m_result.z_determined;
      }

      //! Why each method failed in the last unsuccessful getCalibrationParams().
      const std::string&
      failures(void) const
      {
        return m_failures;
      }

    private:
      //! Largest age of the rate sample paired with a field sample (s).
      static constexpr double c_rate_age = 0.1;

      std::vector<std::unique_ptr<CalibrationMethod>> m_methods;
      CalibrationResult m_result{};
      std::string m_method;
      std::string m_failures;
      double m_rate[3] = {0.0, 0.0, 0.0};
      double m_rate_time;
      double m_phi, m_theta, m_psi;
      //! Sum and count of the levelled horizontal field magnitudes.
      double m_h_sum = 0.0;
      unsigned m_h_count = 0;
    };
  }
}

#endif
