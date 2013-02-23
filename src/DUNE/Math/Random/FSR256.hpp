//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: FSR256.hpp 12667 2013-01-22 02:44:42Z rasm                       $:*
//***************************************************************************

#ifndef DUNE_MATH_RANDOM_FSR256_HPP_INCLUDED_
#define DUNE_MATH_RANDOM_FSR256_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math/Random/Generator.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      //! Feedback shift register generator with 256-byte table.
      //! This has the same behavior as GLIBC2's random() with default settings.
      class FSR256: public Generator
      {
      public:
        FSR256(void);

        FSR256(int32_t seed);

        ~FSR256();

        int32_t
        random(void);

        void
        seed(int32_t value);

      private:
        void init(int, int32_t);
        static const int c_table_size = 31;
        struct
        {
          int i, j;
          int32_t table[c_table_size];
        } m_state;
      };
    }
  }
}
#endif
