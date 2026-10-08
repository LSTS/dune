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


#ifndef DUNE_NAVIGATION_HARD_IRON_MONITOR_HPP_INCLUDED_
#define DUNE_NAVIGATION_HARD_IRON_MONITOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Navigation/GyroAidedMagCalibration.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! In-mission check of the hard-iron calibration in use.
    //!
    //! Fed with the field already corrected by every calibration in use, the
    //! gyro-aided estimate over a sliding window is the residual hard iron:
    //! about zero while the calibration holds. A calibration is requested
    //! when its horizontal part exceeds a fraction of the horizontal field
    //! and is well determined. Works with any motion that turns the vehicle
    //! (no levelling, no heading coverage); z is reported when pitch/roll
    //! changes determine it.
    class HardIronMonitor
    {
    public:
      struct Config
      {
        //! Sliding window (s).
        double window;
        //! Time between evaluations (s).
        double period;
        //! Residual (fraction of the horizontal field) that requests a
        //! calibration.
        double threshold;
        //! Fraction of the threshold below which a request is resolved.
        double resolve;
        //! Gyro-aided windows needed to decide.
        unsigned min_windows;
        //! Repeat a standing request this often (s).
        double remind_period;

        Config(void):
          window(1800.0),
          period(60.0),
          threshold(0.015),
          resolve(0.75),
          min_windows(120),
          remind_period(300.0)
        { }
      };

      //! What add() concluded.
      enum Event
      {
        //! Nothing new.
        EV_NONE,
        //! The residual is above the threshold: a calibration maneuver is
        //! needed (repeated every remind_period).
        EV_CALIBRATION_NEEDED,
        //! The residual is back below the threshold.
        EV_CALIBRATION_RESOLVED
      };

      //! Last evaluation.
      struct Status
      {
        //! Residual hard iron (field units), body x, y, z; z is zero when
        //! not determined.
        double b[3];
        //! Standard deviations of b.
        double sigma[3];
        //! Gyro bias (rad/s).
        double bg[3];
        //! Mean horizontal field over the last period.
        double h;
        //! Horizontal residual, fraction of h.
        double residual;
        //! x/y well determined (the residual is meaningful).
        bool determined;
        //! z well determined.
        bool z_determined;
        //! Gyro-aided windows used.
        unsigned windows;
        //! Time of the evaluation (s), negative before the first.
        double t;
      };

      HardIronMonitor(const Config& cfg = Config()):
        m_cfg(cfg)
      {
        reset();
      }

      //! Forget every sample and any request.
      void
      reset(void)
      {
        m_gyro.reset();
        m_status = Status();
        m_status.t = -1.0;
        m_last_eval = -1.0;
        m_last_request = -1.0;
        m_needed = false;
        m_h_sum = 0.0;
        m_h_n = 0;
      }

      //! Add a sample and, at most every period, decide.
      //! @param[in] t time (s).
      //! @param[in] m magnetic field (body frame) with the calibration in use removed.
      //! @param[in] w angular velocity (rad/s), body frame, as measured.
      //! @param[in] h horizontal field magnitude (m levelled with the attitude).
      Event
      add(double t, const double m[3], const double w[3], double h)
      {
        // The clock went back: the samples' times no longer compare, start
        // over (a standing request stays until an evaluation resolves it).
        if (m_last_eval >= 0.0 && t < m_last_eval)
        {
          m_gyro.reset();
          m_h_sum = 0.0;
          m_h_n = 0;
          m_last_eval = -1.0;
        }

        m_gyro.add(t, m, w);
        m_h_sum += h;
        ++m_h_n;

        if (m_last_eval < 0.0)
          m_last_eval = t;
        if (t - m_last_eval < m_cfg.period)
          return EV_NONE;
        m_last_eval = t;
        return evaluate(t);
      }

      //! Last evaluation.
      const Status&
      status(void) const
      {
        return m_status;
      }

      //! Whether a calibration is currently requested.
      bool
      calibrationNeeded(void) const
      {
        return m_needed;
      }

    private:
      Event
      evaluate(double t)
      {
        if (m_h_n > 0)
          m_status.h = m_h_sum / m_h_n;
        m_h_sum = 0.0;
        m_h_n = 0;

        m_gyro.forget(t - m_cfg.window);
        m_status.t = t;
        m_status.determined = false;
        m_status.windows = m_gyro.windows();
        if (m_status.windows < m_cfg.min_windows || m_status.h <= 0.0)
          return EV_NONE;

        GyroAidedMagCalibration::Result g;
        if (!m_gyro.solve(g))
          return EV_NONE;

        // A third of the threshold: the decision is not noise.
        double max_sigma = m_cfg.threshold * m_status.h / 3.0;
        m_status.determined = g.sigma[0] < max_sigma && g.sigma[1] < max_sigma;
        m_status.z_determined = g.sigma[2] < max_sigma;
        for (unsigned i = 0; i < 3; ++i)
        {
          m_status.b[i] = g.b[i];
          m_status.sigma[i] = g.sigma[i];
          m_status.bg[i] = g.bg[i];
        }
        if (!m_status.z_determined)
          m_status.b[2] = 0.0;
        m_status.residual = std::sqrt(g.b[0] * g.b[0] + g.b[1] * g.b[1]) / m_status.h;

        if (!m_status.determined)
          return EV_NONE;

        if (m_status.residual > m_cfg.threshold)
        {
          if (!m_needed || t - m_last_request >= m_cfg.remind_period)
          {
            m_needed = true;
            m_last_request = t;
            return EV_CALIBRATION_NEEDED;
          }
        }
        else if (m_needed && m_status.residual < m_cfg.resolve * m_cfg.threshold)
        {
          m_needed = false;
          return EV_CALIBRATION_RESOLVED;
        }
        return EV_NONE;
      }

      Config m_cfg;
      GyroAidedMagCalibration m_gyro;
      Status m_status;
      //! Time of the last evaluation, negative before the first sample.
      double m_last_eval;
      //! Time of the last request.
      double m_last_request;
      //! A calibration is requested.
      bool m_needed;
      //! Horizontal field accumulated since the last evaluation.
      double m_h_sum;
      unsigned m_h_n;
    };
  }
}

#endif
