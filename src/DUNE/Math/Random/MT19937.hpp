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
