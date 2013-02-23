//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: MT19937.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef DUNE_MATH_RANDOM_MT19937_HPP_INCLUDED_
#define DUNE_MATH_RANDOM_MT19937_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math/Random/Generator.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      // Export DLL Symbol.
      class DUNE_DLL_SYM MT19937;

      //! Mersenne-Twister 19937 RNG - used in Matlab 7.4 onwards.
      //! The 19937 number relates to its period (2^19937 - 1).
      //! See http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/emt.html
      //!
      //! The implementation is a slight adjustment of code
      //! by Takuji Nishimura and Makoto Matsumoto.
      class MT19937: public Generator
      {
      public:
        MT19937(void);

        MT19937(int32_t seed);

        ~MT19937(void);

        int32_t
        random(void);

        double
        uniform(void);

        void
        seed(int32_t);

      private:
        uint32_t
        random32(void);

        void
        regenerate(void);

        static const int N = 694;
        int m_pos;
        uint32_t m_val[N];
      };
    }
  }
}
#endif
