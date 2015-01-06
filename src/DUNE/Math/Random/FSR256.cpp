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
#include <DUNE/Math/Random/FSR256.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      FSR256::FSR256(void)
      {
        seed(Generator::arbitrarySeed());
      }

      FSR256::FSR256(int32_t value)
      {
        seed(value);
      }

      FSR256::~FSR256(void)
      { }

      int32_t
      FSR256::random(void)
      {
        int32_t* table = m_state.table;
        int* i = &m_state.i;
        int* j = &m_state.j;
        int32_t value;

        table[*i] += table[*j];
        value = (table[*i] >> 1) & 0x7FFFFFFF;

        (*i)++;
        if (*i == c_table_size)
          *i = 0;

        (*j)++;
        if (*j == c_table_size)
          *j = 0;

        return value;
      }

      void
      FSR256::seed(int32_t value)
      {
        int32_t* table = m_state.table;

        if (value == 0)
          value = 1;

        table[0] = value;

        for (int i = 1; i < c_table_size; i++)
        {
          int32_t hi = value / 127773;
          int32_t lo = value % 127773;
          value = 16807 * lo - 2836 * hi;
          if (value < 0)
            value += 2147483647;
          table[i] = value;
        }

        m_state.i = 3;
        m_state.j = 0;

        for (int i = 0; i < 10 * c_table_size; i++)
          (void)random();
      }
    }
  }
}
