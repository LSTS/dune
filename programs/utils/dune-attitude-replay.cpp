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
#include <cstdio>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE::Navigation::AttitudeEskf;

//! Run AttitudeEskf over a dump of filter inputs.
//! In: int64 n, float64 declination, n x (t, gyro xyz, spf xyz, mag xyz).
//! Out: n x (phi, theta, psi, bias xyz, reset flag), float64.
//! --reset-full: re-initialise on a reset (the task's default).
int
main(int argc, char** argv)
{
  bool full = argc == 4 && std::string(argv[3]) == "--reset-full";
  if (argc != 3 && !full)
  {
    std::fprintf(stderr, "Usage: %s <in> <out> [--reset-full]\n", argv[0]);
    return 1;
  }

  std::FILE* in = std::fopen(argv[1], "rb");
  if (!in)
    return 1;
  int64_t n;
  double decl;
  if (std::fread(&n, sizeof(n), 1, in) != 1 || std::fread(&decl, sizeof(decl), 1, in) != 1)
    return 1;
  std::vector<double> x(n * 10);
  if (std::fread(&x[0], sizeof(double), x.size(), in) != x.size())
    return 1;
  std::fclose(in);

  AttitudeEskf::Config cfg;
  cfg.sig_gyro = 0.5e-2;
  cfg.sig_bias = 1e-5;
  cfg.sig_acc_dir = DUNE::Math::Angles::radians(20.0);
  cfg.r_mag = DUNE::Math::Angles::radians(5.0) * DUNE::Math::Angles::radians(5.0);
  cfg.accel_gate = 0.5;
  cfg.gate_inflation = 100.0;
  cfg.reset_angle = DUNE::Math::Angles::radians(60.0);
  cfg.reset_hold = 2.0;
  // Off unless --reset-full: a reset re-levels roll and pitch only.
  cfg.reset_full = full;
  cfg.declination = decl;
  AttitudeEskf filter(cfg);

  const double bias0[3] = { 0.0, 0.0, 0.0 };
  filter.initialize(&x[4], &x[7], bias0);

  std::vector<double> out(n * 7);
  for (int64_t k = 0; k < n; ++k)
  {
    const double* r = &x[k * 10];
    double dt = k == 0 ? 0.02 : r[0] - x[(k - 1) * 10];
    if (dt < 1e-4)
      dt = 1e-4;
    else if (dt > 0.1)
      dt = 0.1;
    double dth[3] = { r[1] * dt, r[2] * dt, r[3] * dt };
    bool fired = filter.step(dt, dth, &r[4], &r[7]);

    double* o = &out[k * 7];
    filter.euler(o[0], o[1], o[2]);
    for (unsigned i = 0; i < 3; ++i)
      o[3 + i] = filter.bias()[i];
    o[6] = fired ? 1.0 : 0.0;
  }

  std::FILE* fo = std::fopen(argv[2], "wb");
  if (!fo)
    return 1;
  std::fwrite(&out[0], sizeof(double), out.size(), fo);
  std::fclose(fo);
  return 0;
}
