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


// ISO C++ 98 headers.
#include <cmath>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Test.hpp"

using DUNE::Navigation::HardIronMonitor;

static double
noise(double s)
{
  double u = 0.0;
  for (int i = 0; i < 12; ++i)
    u += std::rand() / (double)RAND_MAX;
  return (u - 6.0) * s;
}

//! Events seen while feeding a monitor.
struct Events
{
  unsigned needed = 0, resolved = 0;
  double first_needed = -1.0, last_needed = -1.0, min_gap = 1e9;
};

//! Survey legs: 120 s straight, then a 180 deg turn in 20 s, alternating, with
//! a pitch oscillation of amplitude pa (rad, period 40 s), from t0 to t1 at 50 Hz.
//! Field (Earth, horizontal 0.25) plus residual hard iron b and gyro bias bg;
//! noise as measured on LIMU logs (field 0.0002, gyro 0.004 rad/s).
static void
survey(HardIronMonitor& mon, Events& ev, double t0, double t1, double pa, const double b[3])
{
  const double m_ned[3] = {0.25, 0.0, 0.30};
  const double bg[3] = {0.002, 0.003, -0.001};
  const double dt = 0.02, leg = 120.0, turn = 20.0;
  for (double t = t0; t < t1; t += dt)
  {
    double ph_t = std::fmod(t, leg + turn);
    unsigned k = (unsigned)(t / (leg + turn));
    double r = ph_t < leg ? 0.0 : M_PI / turn;
    double psi = k * M_PI + (ph_t < leg ? 0.0 : (ph_t - leg) * r);
    double wt = 2.0 * M_PI / 40.0;
    double th = pa * std::sin(wt * t), thd = pa * wt * std::cos(wt * t);
    double w[3] = {-r * std::sin(th), thd, r * std::cos(th)};
    double cps = std::cos(psi), sps = std::sin(psi), cth = std::cos(th), sth = std::sin(th);
    // Body field = R' m_ned with R = Rz(psi) Ry(th).
    double R[3][3] = {{cps * cth, -sps, cps * sth},
                      {sps * cth, cps, sps * sth},
                      {-sth, 0.0, cth}};
    double m[3], wm[3];
    for (unsigned i = 0; i < 3; ++i)
    {
      m[i] = R[0][i] * m_ned[0] + R[1][i] * m_ned[1] + R[2][i] * m_ned[2] + b[i] + noise(0.0002);
      wm[i] = w[i] + bg[i] + noise(0.004);
    }
    switch (mon.add(t, m, wm, 0.25))
    {
      case HardIronMonitor::EV_CALIBRATION_NEEDED:
        if (ev.last_needed >= 0.0)
          ev.min_gap = std::min(ev.min_gap, t - ev.last_needed);
        if (ev.first_needed < 0.0)
          ev.first_needed = t;
        ev.last_needed = t;
        ++ev.needed;
        break;
      case HardIronMonitor::EV_CALIBRATION_RESOLVED:
        ++ev.resolved;
        break;
      default:
        break;
    }
  }
}

int
main(void)
{
  Test test("Navigation::HardIronMonitor");
  const double zero[3] = {0.0, 0.0, 0.0};
  // 2.9 % of the horizontal field (threshold 1.5 %).
  const double b[3] = {0.006, -0.004, 0.010};

  {
    // Calibration right: one hour, no request.
    HardIronMonitor mon;
    Events ev;
    survey(mon, ev, 0.0, 3600.0, 0.1, zero);
    test.boolean("calibrated: no request", ev.needed == 0);
    test.boolean("calibrated: decided", mon.status().determined);
    test.boolean("calibrated: residual under 0.5 %", mon.status().residual < 0.005);
  }

  {
    // Stale calibration: requested soon, reminded, then resolved once the
    // calibration is fixed and the window has slid past the old samples.
    HardIronMonitor mon;
    Events ev;
    survey(mon, ev, 0.0, 3600.0, 0.1, b);
    const HardIronMonitor::Status& s = mon.status();
    test.boolean("stale: requested", ev.needed > 0);
    test.boolean("stale: within 10 minutes", ev.first_needed > 0.0 && ev.first_needed < 600.0);
    test.boolean("stale: x/y within 1e-3",
                 std::fabs(s.b[0] - b[0]) < 1e-3 && std::fabs(s.b[1] - b[1]) < 1e-3);
    test.boolean("stale: reminders every 5 min", ev.needed >= 8 && ev.min_gap >= 299.0);
    test.boolean("stale: not resolved while stale", ev.resolved == 0);

    Events fixed;
    survey(mon, fixed, 3600.0, 3600.0 + 2400.0, 0.1, zero);
    test.boolean("fixed: resolved", fixed.resolved == 1);
    test.boolean("fixed: no request after resolving", !mon.calibrationNeeded());
  }

  {
    // Level legs: x/y still checked, z not determined.
    HardIronMonitor mon;
    Events ev;
    survey(mon, ev, 0.0, 1800.0, 0.0, b);
    test.boolean("level: requested", ev.needed > 0);
    test.boolean("level: z not determined", !mon.status().z_determined && mon.status().b[2] == 0.0);
  }

  {
    // Yo-yo pitch (14 deg) determines z too.
    HardIronMonitor mon;
    Events ev;
    survey(mon, ev, 0.0, 1800.0, 0.25, b);
    const HardIronMonitor::Status& s = mon.status();
    test.boolean("yo-yo: z determined", s.z_determined && std::fabs(s.b[2] - b[2]) < 2e-3);
  }

  {
    // A clock that restarts (e.g. a sensor counter) doesn't stall the evaluations.
    HardIronMonitor mon;
    Events ev;
    survey(mon, ev, 1000.0, 2800.0, 0.1, b);
    bool needed = mon.calibrationNeeded();
    Events after;
    survey(mon, after, 0.0, 1200.0, 0.1, zero);
    test.boolean("clock restart: request kept", needed);
    // Only the new samples (calibration fixed) count: resolved, not stuck on the old ones.
    test.boolean("clock restart: evaluates again", mon.status().t > 600.0 && after.resolved == 1);
  }

  {
    // Too little data: no decision.
    HardIronMonitor mon;
    Events ev;
    survey(mon, ev, 0.0, 200.0, 0.1, b);
    test.boolean("short: no decision", ev.needed == 0 && !mon.status().determined);
  }

  return test.getReturnValue();
}
