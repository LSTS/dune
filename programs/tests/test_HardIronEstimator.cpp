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

using DUNE::Navigation::HardIronEstimator;

//! Horizontal field 0.25, true north along x, plus the offset (ox, oy).
static const double c_field = 0.25;

//! Gaussian-ish noise of standard deviation s.
static double
noise(double s)
{
  double u = 0.0;
  for (int i = 0; i < 12; ++i)
    u += std::rand() / (double)RAND_MAX;
  return (u - 6.0) * s;
}

//! Feed the field seen at heading yaw for n samples at 50 Hz from time t.
static double
feed(HardIronEstimator& est, double t, double yaw, unsigned n, double ox, double oy, double sd)
{
  for (unsigned i = 0; i < n; ++i, t += 0.02)
  {
    // A heading yaw sees north at -yaw in the body: h = R(-yaw) * (B, 0).
    double hx = c_field * std::cos(yaw) + ox + noise(sd);
    double hy = -c_field * std::sin(yaw) + oy + noise(sd);
    est.update(t, hx, hy, yaw);
  }
  return t;
}

int
main(void)
{
  Test test("Navigation::HardIronEstimator");
  const double ox = 0.017, oy = -0.012;

  {
    // Full turns: the fit recovers the offset and the field.
    HardIronEstimator est;
    double t = 0.0;
    for (int k = 0; k < 360; ++k)
      t = feed(est, t, k * M_PI / 180.0, 20, ox, oy, 0.003);
    HardIronEstimator::Fit f;
    bool ok = est.fit(t, f);
    test.boolean("full coverage: fit accepted", ok);
    test.boolean("full coverage: offset within 5e-4", std::fabs(f.x - ox) < 5e-4 && std::fabs(f.y - oy) < 5e-4);
    test.boolean("full coverage: radius within 1e-3", std::fabs(f.radius - c_field) < 1e-3);
    test.boolean("full coverage: zero offset inconsistent", est.offsetInconsistent(t, 0.0, 0.0));
    test.boolean("full coverage: fitted offset consistent", !est.offsetInconsistent(t, f.x, f.y));
  }

  {
    // Two opposite legs (a lawnmower): no fit, but the wrong offset shows.
    HardIronEstimator est;
    double t = 0.0;
    for (int leg = 0; leg < 6; ++leg)
      t = feed(est, t, (leg % 2) ? M_PI / 4 + M_PI : M_PI / 4, 3000, ox, oy, 0.003);
    HardIronEstimator::Fit f;
    test.boolean("opposite legs: no fit", !est.fit(t, f));
    test.boolean("opposite legs: zero offset inconsistent", est.offsetInconsistent(t, 0.0, 0.0));
    test.boolean("opposite legs: true offset consistent", !est.offsetInconsistent(t, ox, oy));
  }

  {
    // Legs perpendicular to the offset can't see it (e . u = 0): no false alarm.
    HardIronEstimator est;
    double t = 0.0;
    // The offset shows along north in the body, (cos yaw, -sin yaw): choose
    // the yaw that makes it perpendicular.
    double yaw = std::atan2(ox, oy);
    for (int leg = 0; leg < 4; ++leg)
      t = feed(est, t, (leg % 2) ? yaw + M_PI : yaw, 3000, ox, oy, 0.003);
    test.boolean("perpendicular legs: offset not detectable", !est.offsetInconsistent(t, 0.0, 0.0));
  }

  {
    // The window forgets old bins: an old full turn no longer counts.
    HardIronEstimator::Config cfg;
    cfg.window = 200.0;
    HardIronEstimator est(cfg);
    double t = 0.0;
    for (int k = 0; k < 360; ++k)
      t = feed(est, t, k * M_PI / 180.0, 20, ox, oy, 0.0);
    HardIronEstimator::Fit f;
    test.boolean("window: fit while fresh", est.fit(t, f));
    test.boolean("window: no fit once stale", !est.fit(t + 300.0, f) && est.validBins(t + 300.0) == 0);
  }

  {
    // process(): legs request a calibration, a full turn applies the fit and
    // clears the request, later legs stay quiet.
    HardIronEstimator est;
    unsigned requests = 0, updates = 0, resolved = 0;
    double t = 0.0;
    struct Sim
    {
      static void
      run(HardIronEstimator& e, double& t, double yaw, unsigned n, double ox, double oy,
          unsigned& req, unsigned& upd, unsigned& res)
      {
        for (unsigned i = 0; i < n; ++i, t += 0.02)
        {
          double hx = c_field * std::cos(yaw) + ox + noise(0.003);
          double hy = -c_field * std::sin(yaw) + oy + noise(0.003);
          switch (e.process(t, hx, hy, yaw, true))
          {
            case HardIronEstimator::EV_CALIBRATION_NEEDED: ++req; break;
            case HardIronEstimator::EV_OFFSET_UPDATED: ++upd; break;
            case HardIronEstimator::EV_CALIBRATION_RESOLVED: ++res; break;
            default: break;
          }
        }
      }
    };
    for (int leg = 0; leg < 4; ++leg)
      Sim::run(est, t, (leg % 2) ? M_PI / 4 + M_PI : M_PI / 4, 3000, ox, oy, requests, updates, resolved);
    test.boolean("process: legs request a calibration", requests == 1 && est.calibrationNeeded() && updates == 0);
    for (int k = 0; k < 360; ++k)
      Sim::run(est, t, k * M_PI / 180.0, 20, ox, oy, requests, updates, resolved);
    test.boolean("process: full turn updates the offset", updates >= 1 && !est.calibrationNeeded());
    test.boolean("process: updated offset within 1e-3",
                 std::fabs(est.offsetX() - ox) < 1e-3 && std::fabs(est.offsetY() - oy) < 1e-3);
    unsigned before = requests;
    for (int leg = 0; leg < 4; ++leg)
      Sim::run(est, t, (leg % 2) ? M_PI / 4 + M_PI : M_PI / 4, 3000, ox, oy, requests, updates, resolved);
    test.boolean("process: no request once calibrated", requests == before);
  }

  {
    // Monitor (apply off): the offset in use never changes, the request fires
    // and carries the fit.
    HardIronEstimator est;
    bool requested = false, updated = false;
    double t = 0.0;
    for (int k = 0; k < 360; ++k)
    {
      double yaw = k * M_PI / 180.0;
      for (int i = 0; i < 20; ++i, t += 0.02)
      {
        HardIronEstimator::Event ev = est.process(t, c_field * std::cos(yaw) + ox,
                                                  -c_field * std::sin(yaw) + oy, yaw, false);
        requested |= ev == HardIronEstimator::EV_CALIBRATION_NEEDED;
        updated |= ev == HardIronEstimator::EV_OFFSET_UPDATED;
      }
    }
    test.boolean("monitor: offset in use unchanged", !updated && est.offsetX() == 0.0 && est.offsetY() == 0.0);
    test.boolean("monitor: calibration requested", requested && est.calibrationNeeded());
    test.boolean("monitor: request carries the fit",
                 est.hasFit() && std::fabs(est.lastFit().x - ox) < 1e-3 && std::fabs(est.lastFit().y - oy) < 1e-3);
  }

  {
    // CompassCalibration (the maneuver's): spikes don't move the circle fit,
    // which the midpoint of the extremes it replaced was sensitive to.
    DUNE::Navigation::CompassCalibration ccal;
    std::vector<std::string> unknown;
    ccal.setMethods({"Circle Fit"}, unknown);
    DUNE::IMC::EulerAngles ea;
    DUNE::IMC::MagneticField mf;
    double t = 0.0;
    for (int k = 0; k < 360 * 3; ++k)
    {
      double yaw = (k % 360) * M_PI / 180.0;
      ea.phi = ea.theta = 0.0;
      ea.psi = yaw;
      ccal.updateDCM(ea);
      for (int i = 0; i < 20; ++i, t += 0.02)
      {
        mf.setTimeStamp(t);
        mf.x = c_field * std::cos(yaw) + ox + noise(0.003);
        mf.y = -c_field * std::sin(yaw) + oy + noise(0.003);
        mf.z = 0.4;
        // A few 0.03 spikes on y, all positive (as a powered device would).
        if (k == 200 && i == 0)
          mf.y += 0.03;
        ccal.updateField(mf);
      }
    }
    DUNE::Math::Matrix p;
    bool ok = ccal.getCalibrationParams(p);
    test.boolean("calibration: fit accepted", ok);
    test.boolean("calibration: spike-free offset within 1e-3",
                 ok && std::fabs(p(0) - ox) < 1e-3 && std::fabs(p(1) - oy) < 1e-3);

    // Half a turn is not a calibration (default methods: no rates for
    // Gyro-Aided, Min-Max needs every heading).
    DUNE::Navigation::CompassCalibration half;
    for (int k = 0; k < 180; ++k)
    {
      ea.psi = k * M_PI / 180.0;
      half.updateDCM(ea);
      for (int i = 0; i < 20; ++i, t += 0.02)
      {
        mf.setTimeStamp(t);
        mf.x = c_field * std::cos(ea.psi) + ox;
        mf.y = -c_field * std::sin(ea.psi) + oy;
        half.updateField(mf);
      }
    }
    test.boolean("calibration: half a turn refused", !half.getCalibrationParams(p));
    test.boolean("calibration: rates named missing",
                 half.failures().find("no angular rates paired") != std::string::npos);

    // No field at all (a simulator without a magnetometer).
    DUNE::Navigation::CompassCalibration none;
    test.boolean("calibration: no field refused", !none.getCalibrationParams(p));
    test.boolean("calibration: field named missing",
                 none.failures().find("no magnetic field samples") != std::string::npos);
  }

  return test.getReturnValue();
}
