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
#include <vector>
#include <cmath>
#include <limits>

#include <DUNE/Math/Matrix.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/Navigation/HardIronEstimator.hpp>
#include <DUNE/Navigation/GyroAidedMagCalibration.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! Hard-iron calibration from a compass calibration maneuver (turns).
    //!
    //! Preferred: the attitude-free gyro-aided estimate (GyroAidedMagCalibration),
    //! fed with the same AHRS's angular rates. It gives x, y and z (z when the
    //! pitch/roll changed enough) and is not biased by the accelerometer
    //! attitude errors of a turning, wave-driven loiter, which moved levelled
    //! calibrations by 1-3.5 % of the field.
    //!
    //! Fallback (no rates, or not determined well enough): centre of the circle
    //! the levelled horizontal field traces as the heading changes, fitted to
    //! per-heading-bin means; z: the midpoint of the levelled vertical field.
    class CompassCalibration
    {
    public:
      //! Method behind the last successful getCalibrationParams().
      enum Method
      {
        //! Gyro-aided (attitude-free).
        METHOD_GYRO,
        //! Levelled circle fit.
        METHOD_CIRCLE
      };

      CompassCalibration(void):
        m_est(config()),
        m_bins(0),
        m_method(METHOD_CIRCLE)
      {
        clear();
      }

      void
      clear(void)
      {
        m_est.reset();
        m_phi = m_theta = m_psi = 0.0;
        m_last = 0.0;
        m_gyro.reset();
        m_rate_time = -1.0;
        m_zmax = -std::numeric_limits<double>::max();
        m_zmin = std::numeric_limits<double>::max();
      }

      void
      updateDCM(const IMC::EulerAngles& msg)
      {
        m_phi = msg.phi;
        m_theta = msg.theta;
        m_psi = msg.psi;
      }

      //! Angular velocity of the same sensor (enables the gyro-aided estimate).
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
        double m[3] = {msg.x, msg.y, msg.z};
        double hx, hy;
        HardIronEstimator::level(m, m_phi, m_theta, hx, hy);
        m_last = msg.getTimeStamp();
        m_est.update(m_last, hx, hy, m_psi);
        if (m_rate_time >= 0.0 && std::fabs(m_last - m_rate_time) < c_rate_age)
          m_gyro.add(m_last, m, m_rate);

        double hz = -m[0] * std::sin(m_theta)
                    + m[1] * std::cos(m_theta) * std::sin(m_phi)
                    + m[2] * std::cos(m_theta) * std::cos(m_phi);
        if (hz > m_zmax)
          m_zmax = hz;
        if (hz < m_zmin)
          m_zmin = hz;
      }

      //! Compute the calibration (1x3: x, y, z) and clear the samples.
      //! @return false when the headings covered are too few for a fit (the
      //! samples are kept, so the maneuver can continue).
      bool
      getCalibrationParams(Math::Matrix& params)
      {
        params.resizeAndFill(1, 3, 0.0);

        GyroAidedMagCalibration::Result g;
        if (m_gyro.windows() >= c_min_windows && m_gyro.solve(g)
            && g.sigma[0] < c_max_sigma && g.sigma[1] < c_max_sigma)
        {
          params(0) = g.b[0];
          params(1) = g.b[1];
          params(2) = g.sigma[2] < c_max_sigma ? g.b[2] : (m_zmax + m_zmin) / 2;
          m_gyro_result = g;
          m_method = METHOD_GYRO;
          clear();
          return true;
        }

        HardIronEstimator::Fit f;
        if (!m_est.fit(m_last, f))
        {
          m_bins = f.bins;
          return false;
        }
        params(0) = f.x;
        params(1) = f.y;
        params(2) = (m_zmax + m_zmin) / 2;
        m_fit = f;
        m_method = METHOD_CIRCLE;
        clear();
        return true;
      }

      //! Method behind the last successful getCalibrationParams().
      Method
      lastMethod(void) const
      {
        return m_method;
      }

      //! The gyro-aided result behind the last METHOD_GYRO calibration
      //! (hard iron, gyro bias, their sigmas).
      const GyroAidedMagCalibration::Result&
      lastGyroResult(void) const
      {
        return m_gyro_result;
      }

      //! Whether the z of the last METHOD_GYRO calibration was determined.
      bool
      lastZDetermined(void) const
      {
        return m_method == METHOD_GYRO && m_gyro_result.sigma[2] < c_max_sigma;
      }

      //! The fit behind the last successful getCalibrationParams().
      const HardIronEstimator::Fit&
      lastFit(void) const
      {
        return m_fit;
      }

      //! Heading bins covered when getCalibrationParams() last failed.
      unsigned
      binsCovered(void) const
      {
        return m_bins;
      }

    private:
      //! Largest age of the rate sample paired with a field sample (s).
      static constexpr double c_rate_age = 0.1;
      //! Windows (2 s each) the gyro-aided estimate needs.
      static constexpr unsigned c_min_windows = 60;
      //! Largest sigma of a gyro-aided component that is used (field units;
      //! 0.002 is under 1 % of a 0.25 horizontal field).
      static constexpr double c_max_sigma = 0.002;

      static HardIronEstimator::Config
      config(void)
      {
        HardIronEstimator::Config cfg;
        // A maneuver is one bounded data set: never forget a bin.
        cfg.window = std::numeric_limits<double>::max();
        return cfg;
      }

      HardIronEstimator m_est;
      double m_phi, m_theta, m_psi;
      double m_zmin, m_zmax;
      //! Time of the last field sample.
      double m_last;
      HardIronEstimator::Fit m_fit;
      unsigned m_bins;
      //! Gyro-aided estimate and the latest rate sample.
      GyroAidedMagCalibration m_gyro;
      double m_rate[3];
      double m_rate_time;
      GyroAidedMagCalibration::Result m_gyro_result;
      Method m_method;
    };
  }
}

#endif
