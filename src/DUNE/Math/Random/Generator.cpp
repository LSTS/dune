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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Math/Random/Generator.hpp>
#include <DUNE/Math/Random/KernelDevice.hpp>
#include <DUNE/Time/Clock.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      static double c_max_random_d = (double)Generator::c_max_random;

      int32_t
      Generator::arbitrarySeed(void)
      {
        int32_t seed;

        if (KernelDevice::available())
        {
          // Short lived access to /dev/urandom
          // to get a "really" random seed or close to it.
          // Similar to what sranddev() does when defined.
          KernelDevice kd;
          seed = kd.random();
        }
        else
        {
          // Alternatively ...
          double t = Time::Clock::get();
          int32_t v0 = (int32_t)t;

          t -= v0;
          t *= 1e+09;
          v0 /= 10;

          int32_t v1 = (int32_t)t;

          seed = (v0 ^ v1) & Generator::c_max_random;
        }
        return seed;
      }

      double
      Generator::uniform(void)
      {
        return random() / c_max_random_d;
      }

      double
      Generator::gaussian(void)
      {
        // Classic Box-Muller method
        double x, y, r2;
        do
        {
          x = -1 + 2 * uniform();
          y = -1 + 2 * uniform();
          r2 = x * x + y * y;
        }
        while (r2 > 1.0 || r2 == 0);

        return y * std::sqrt(-2.0 * std::log(r2) / r2);
      }

      void
      Generator::ballU(double radius, double* x, double* y)
      {
        double r = uniform() * radius;
        double a = uniform() * c_two_pi;
        *x = std::cos(a) * r;
        *y = std::sin(a) * r;
      }

      void
      Generator::ballG(double sigma, double* x, double* y)
      {
        double r = sigma * gaussian();  // range
        double a = uniform() * c_two_pi; // angle
        *x = std::cos(a) * r;
        *y = std::sin(a) * r;
      }
    }
  }
}
