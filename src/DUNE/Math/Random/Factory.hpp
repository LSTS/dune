//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Factory.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef DUNE_MATH_RANDOM_FACTORY_HPP_INCLUDED_
#define DUNE_MATH_RANDOM_FACTORY_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math/Random/Generator.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      // Export DLL Symbol.
      class DUNE_DLL_SYM Factory;

      //! Factory of PRNGS.
      class Factory
      {
      public:
        // Possible arguments to Factory::create()
        static const char* c_drand48;   //!< "drand48"
        static const char* c_fsr256;    //!< "fsr256"
        static const char* c_default;   //!< "fsr256"
        static const char* c_mt19937;   //!< "mt19337"
        static const char* c_krng;      //!< "krng"

        //! Create generator with given seed. If seed is negative and
        //! the generator is not "krng" a random seed will be
        //! generated.
        static Generator*
        create(const std::string& id, int32_t seed = -1);
      };
    }
  }
}

#endif
