//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: MT19937.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/Math/Random/MT19937.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      static const int c_m = 397;
      static const uint32_t c_matrix_a = 0x9908b0dfUL;
      static const uint32_t c_upper_mask = 0x80000000UL;
      static const uint32_t c_lower_mask = 0x7fffffffUL;
      static const uint32_t c_mag01[2] = {0x0UL, c_matrix_a};

      MT19937::MT19937(void)
      {
        seed(arbitrarySeed());
      }

      MT19937::MT19937(int32_t seed_value)
      {
        seed(seed_value);
      }

      MT19937::~MT19937(void)
      { }

      uint32_t
      MT19937::random32(void)
      {
        if (m_pos == N)
          regenerate();

        uint32_t r;

        r = m_val[m_pos++];
        r ^= (r >> 11);
        r ^= (r << 7) & 0x9d2c5680UL;
        r ^= (r << 15) & 0xefc60000UL;
        r ^= (r >> 18);

        return r;
      }

      int32_t
      MT19937::random(void)
      {
        return random32() >> 1;
      }

      double
      MT19937::uniform(void)
      {
        // 53-bit precision
        uint32_t a = random32() >> 5;
        uint32_t b = random32() >> 6;
        return (a * 67108864.0 + b) * (1.0 / 9007199254740992.0);
      }

      void
      MT19937::seed(int32_t value)
      {
        // In constrast to original we allow only signed 32-bit values
        value &= Generator::c_max_random;
        m_val[0] = value;
        for (int pos = 1; pos < N; pos++)
        {
          m_val[pos] =
            1812433253UL * (m_val[pos - 1] ^ (m_val[pos - 1] >> 30)) + pos;
        }
        regenerate();
      }

      void
      MT19937::regenerate(void)
      {
        // Generate new N words
        int i;
        uint32_t y;

        for (i = 0; i < N - c_m; i++)
        {
          y = (m_val[i] & c_upper_mask) | (m_val[i + 1] & c_lower_mask);
          m_val[i] = m_val[i + c_m] ^ (y >> 1) ^ c_mag01[y & 0x1UL];
        }

        for (; i < N - 1; i++)
        {
          y = (m_val[i] & c_upper_mask) | (m_val[i + 1] & c_lower_mask);
          m_val[i] = m_val[i + (c_m - N)] ^ (y >> 1) ^ c_mag01[y & 0x1UL];
        }

        y = (m_val[N - 1] & c_upper_mask) | (m_val[0] & c_lower_mask);
        m_val[N - 1] = m_val[c_m - 1] ^ (y >> 1) ^ c_mag01[y & 0x1UL];
        m_pos = 0;
      }
    }
  }
}
