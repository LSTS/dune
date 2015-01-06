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
