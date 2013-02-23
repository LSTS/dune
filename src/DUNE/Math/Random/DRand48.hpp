//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: DRand48.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
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
