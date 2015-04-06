//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Algorithms/UNESCO1983.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    double
    UNESCO1983::computeDepth(double p, double lat, double del)
    {
      // Convert bar to dbar.
      p *= 10;

      double x = std::sin(lat);
      x *= x;

      // Gravity variation with latitude.
      double gr = (9.780318 * (1.0 + (5.2788e-3 + 2.36e-5 * x) * x) + 1.092e-6 * p);

      return ((((-1.82e-15 * p + 2.279e-10) * p - 2.2512e-5) * p + 9.72659) * p) / gr + del / 9.8;
    }

    double
    UNESCO1983::computeSalinity(double c, double p, double t)
    {
      // Convert bar to dbar.
      p *= 10;

      // Conductivity ratio.
      double cr = c / 4.2914;

      // Equation is not defined for conductivity ratios below 5e-4.
      if (cr <= 5e-4)
        return -1.0;

      double dt = t - 15;
      double axt = -3.107e-3 * t + 0.4215;
      // Polynomial corresponds to B3 and B4 constants (Lewis 1980).
      double bxt = (4.464e-4 * t + 3.426e-2) * t + 1.0;
      // Polynomial corresponds to A1-A3 constants (Lewis 1980).
      double cxp = ((3.989e-15 * p - 6.370e-10) * p + 2.070e-5) * p;
      // Variation with temperature.
      double rt35 = (((1.0031e-9 * t - 6.9698e-7) * t + 1.104259e-4) * t + 2.00564e-2) * t + 0.6766097;
      double rt = cr / (rt35 * (1.0 + cxp / (bxt + axt * cr)));
      rt = std::sqrt(std::fabs(rt));
      double salinity = (((((2.7081 * rt - 7.0261) * rt + 14.0941) * rt + 25.3851) * rt - 0.1692)
                         * rt + 0.0080 + (dt / (1.0 + 0.0162 * dt))
                         * (((((-0.0144 * rt + 0.0636) * rt - 0.0375) * rt - 0.0066) * rt - 0.0056)
                            * rt + 0.0005));

      // Check if result is in the validity range of PSS-78.
      if ((salinity < 2) || (salinity > 42))
        return -1;

      return salinity;
    }

    double
    UNESCO1983::computeSoundSpeed(double s, double p, double t)
    {
      p *= 10;

      double sr = std::sqrt(std::fabs(s));

      // S^2 term.
      double d = 1.727e-3 - 7.9836e-6 * p;

      // S^3/2 term.
      double b1 = 7.3637e-5 + 1.7945e-7 * t;
      double b0 = -1.922e-2 - 4.42e-5 * t;
      double b = b0 + b1 * p;

      // S^1 term.
      double a3 = (-3.389e-13 * t + 6.649e-12) * t + 1.100e-10;
      double a2 = ((7.988e-12 * t - 1.6002e-10) * t + 9.1041e-9) * t - 3.9064e-7;
      double a1 = (((-2.0122e-10 * t + 1.0507e-8) * t - 6.4885e-8) * t - 1.2580e-5) * t + 9.4742e-5;
      double a0 = (((-3.21e-8 * t + 2.006e-6) * t + 7.164e-5) * t - 1.262e-2) * t + 1.389;
      double a = ((a3 * p + a2) * p + a1) * p + a0;

      // S^0 term.
      double c3 = (-2.3643e-12 * t + 3.8504e-10) * t - 9.7729e-9;
      double c2 = (((1.0405e-12 * t - 2.5335e-10) * t + 2.5974e-8) * t - 1.7107e-6) * t + 3.1260e-5;
      double c1 = (((-6.1185e-10 * t + 1.3621e-7) * t - 8.1788e-6) * t + 6.8982e-4) * t + 0.153563;
      double c0 = ((((3.1464e-9 * t - 1.47800e-6) * t + 3.3420e-4) * t - 5.80852e-2) * t + 5.03711) * t + 1402.388;
      double c = ((c3 * p + c2) * p + c1) * p + c0;

      return c + (a + b * sr + d * s) * s;
    }
  }
}
