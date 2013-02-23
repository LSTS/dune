//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: FSR256.cpp 12667 2013-01-22 02:44:42Z rasm                       $:*
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
