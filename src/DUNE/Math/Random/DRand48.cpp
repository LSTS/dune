//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: DRand48.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/Math/Random/DRand48.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      // ISO C++ does not stricly accept C99 long long constants (i.e. <n>LL)
      // hence the use of some "funny" stuff here.
      static const int64_t c_one = 1;
      static const int64_t c_a = ((5 * c_one) << 32) | (int64_t)0xDEECE66DL;
      static const int64_t c_b = 0xBL;
      static const int64_t c_m = (c_one << 48) - 1;

      DRand48::DRand48(void)
      {
        seed(Generator::arbitrarySeed());
      }

      DRand48::DRand48(int32_t seed_value)
      {
        seed(seed_value);
      }

      DRand48::~DRand48(void)
      { }

      int32_t
      DRand48::next(int bits)
      {
        m_seed = (c_a * m_seed + c_b) & c_m;
        return m_seed >> (48 - bits);
      }

      int32_t
      DRand48::random(void)
      {
        int32_t v, b;
        do
        {
          b = next(31);
          v = b & c_max_random;
        }
        while (b - v + (c_max_random - 1) < 0);
        return v;
      }

      void
      DRand48::seed(int32_t seed_value)
      {
        // In line with traditional implementation of srand48()
        m_seed = seed_value;
        m_seed = (m_seed << 16) | 0x330e;
      }
    }
  }
}
