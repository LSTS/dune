//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
