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

using DUNE::Navigation::GyroAidedMagCalibration;

static double
noise(double s)
{
  double u = 0.0;
  for (int i = 0; i < 12; ++i)
    u += std::rand() / (double)RAND_MAX;
  return (u - 6.0) * s;
}

//! Simulate a vehicle turning at yaw rate r (rad/s) with a pitch oscillation
//! of amplitude pa (rad, period 40 s) and roll ra (period 13 s), for T s at 50 Hz;
//! field (Earth) m_ned, hard iron b, gyro bias bg.
static void
simulate(GyroAidedMagCalibration& cal, double T, double r, double pa, double ra,
         const double b[3], const double bg[3], double mag_sd, double gyro_sd)
{
  const double m_ned[3] = {0.25, 0.0, 0.30};
  const double dt = 0.02;
  for (double t = 0.0; t < T; t += dt)
  {
    double psi = r * t;
    double wt = 2.0 * M_PI / 40.0, wr = 2.0 * M_PI / 13.0;
    double th = pa * std::sin(wt * t), thd = pa * wt * std::cos(wt * t);
    double ph = ra * std::sin(wr * t), phd = ra * wr * std::cos(wr * t);
    // Body rates from Euler rates (ZYX).
    double w[3] = {phd - r * std::sin(th),
                   thd * std::cos(ph) + r * std::sin(ph) * std::cos(th),
                   -thd * std::sin(ph) + r * std::cos(ph) * std::cos(th)};
    // Body-to-NED rotation R = Rz(psi) Ry(th) Rx(ph); body field = R' m_ned.
    double cps = std::cos(psi), sps = std::sin(psi), cth = std::cos(th), sth = std::sin(th);
    double cph = std::cos(ph), sph = std::sin(ph);
    double R[3][3] = {{cps * cth, cps * sth * sph - sps * cph, cps * sth * cph + sps * sph},
                      {sps * cth, sps * sth * sph + cps * cph, sps * sth * cph - cps * sph},
                      {-sth, cth * sph, cth * cph}};
    double m[3], wm[3];
    for (unsigned i = 0; i < 3; ++i)
    {
      m[i] = R[0][i] * m_ned[0] + R[1][i] * m_ned[1] + R[2][i] * m_ned[2] + b[i] + noise(mag_sd);
      wm[i] = w[i] + bg[i] + noise(gyro_sd);
    }
    cal.add(t, m, wm);
  }
}

int
main(void)
{
  Test test("Navigation::GyroAidedMagCalibration");
  const double b[3] = {0.017, -0.012, -0.065};
  const double bg[3] = {0.010, 0.007, 0.004};  // 0.6, 0.4, 0.2 deg/s

  {
    // Turns + yoyo pitch + some roll: all of b and b_g observable.
    GyroAidedMagCalibration cal;
    simulate(cal, 600.0, 0.15, 0.25, 0.05, b, bg, 0.002, 0.002);
    GyroAidedMagCalibration::Result r;
    bool ok = cal.solve(r);
    test.boolean("turns + pitch: solved", ok);
    test.boolean("turns + pitch: b within 1e-3",
                 ok && std::fabs(r.b[0] - b[0]) < 1e-3 && std::fabs(r.b[1] - b[1]) < 1e-3
                 && std::fabs(r.b[2] - b[2]) < 1e-3);
    test.boolean("turns + pitch: gyro bias within 1e-3 rad/s",
                 ok && std::fabs(r.bg[0] - bg[0]) < 1e-3 && std::fabs(r.bg[1] - bg[1]) < 1e-3
                 && std::fabs(r.bg[2] - bg[2]) < 1e-3);
    bool honest = ok;
    for (unsigned i = 0; i < 3; ++i)
      honest = honest && std::fabs(r.b[i] - b[i]) < 3.0 * r.sigma[i] + 1e-4;
    test.boolean("turns + pitch: errors within 3 sigma", honest);
    test.boolean("turns + pitch: z sigma < 3e-3 (observable)", ok && r.sigma[2] < 3e-3);
  }

  {
    // Yaw-only turns: b_x, b_y still found; b_z unobservable (large sigma).
    GyroAidedMagCalibration cal;
    simulate(cal, 600.0, 0.15, 0.0, 0.0, b, bg, 0.002, 0.002);
    GyroAidedMagCalibration::Result r;
    bool ok = cal.solve(r);
    test.boolean("yaw only: b_x, b_y within 2e-3",
                 ok && std::fabs(r.b[0] - b[0]) < 2e-3 && std::fabs(r.b[1] - b[1]) < 2e-3);
    test.boolean("yaw only: b_z flagged unobservable", ok && r.sigma[2] > 10.0 * r.sigma[0]);
  }

  {
    // Robust to a burst of disturbed samples (e.g. a powered device switching).
    GyroAidedMagCalibration cal;
    simulate(cal, 300.0, 0.15, 0.25, 0.05, b, bg, 0.002, 0.002);
    // A 2 s burst of a disturbed field (a powered device switching on).
    for (int i = 0; i < 100; ++i)
    {
      double m[3] = {0.4 + 0.1 * (i % 7), 0.4, 0.4}, w[3] = {0.0, 0.0, 0.0};
      cal.add(300.0 + i * 0.02, m, w);
    }
    simulate(cal, 300.0, 0.15, 0.25, 0.05, b, bg, 0.002, 0.002);
    GyroAidedMagCalibration::Result r;
    bool ok = cal.solve(r);
    test.boolean("outliers: b within 1.5e-3",
                 ok && std::fabs(r.b[0] - b[0]) < 1.5e-3 && std::fabs(r.b[1] - b[1]) < 1.5e-3);
  }

  {
    GyroAidedMagCalibration cal;
    GyroAidedMagCalibration::Result r;
    test.boolean("no data: not solved", !cal.solve(r));
  }

  return test.getReturnValue();
}
