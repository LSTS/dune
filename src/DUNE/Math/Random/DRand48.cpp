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
