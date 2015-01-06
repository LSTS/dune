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

#ifndef DUNE_MATH_RANDOM_DRAND48_HPP_INCLUDED_
#define DUNE_MATH_RANDOM_DRAND48_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math/Random/Generator.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      // Export DLL Symbol.
      class DUNE_DLL_SYM DRand48;

      //! The popular lightweight DRand48 PRNG used for instance in java.util.Random
      //! and provided by a number of SVID compatible OSes
      //! through lrand48()/drand48().
      //!
      //! For comparison DRand48.random() provides the same number sequences
      //! as lrand48() in POSIX systems when seeding is done by srand48().
      class DRand48: public Generator
      {
      public:
        DRand48();

        DRand48(int32_t seed_value);

        ~DRand48();

        int32_t
        random(void);

        void
        seed(int32_t value);

      private:
        int64_t m_seed;
        int32_t
        next(int bits);
      };
    }
  }
}
#endif
