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
