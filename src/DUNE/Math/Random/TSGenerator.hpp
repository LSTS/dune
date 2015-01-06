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

#ifndef DUNE_MATH_RANDOM_TS_GENERATOR_HPP_INCLUDED_
#define DUNE_MATH_RANDOM_TS_GENERATOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math/Random/Generator.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      //! Thread-safe wrapper for a Generator class.
      //! Use this if the generator is going to be accessed by multiple threads.
      template <typename G>
      class TSGenerator: public Generator
      {
      public:
        TSGenerator(void):
          m_rng()
        { }

        TSGenerator(int32_t seed_value):
          m_rng(seed_value)
        { }

        void
        seed(int32_t seed_value)
        {
          Concurrency::ScopedMutex lock(m_mtx);
          m_rng.seed(seed_value);
        }

        int32_t
        random(void)
        {
          Concurrency::ScopedMutex lock(m_mtx);
          return m_rng.random();
        }

        double
        uniform(void)
        {
          Concurrency::ScopedMutex lock(m_mtx);
          return m_rng.uniform();
        }

      private:
        G m_rng;
        DUNE::Concurrency::Mutex m_mtx;
      };
    }
  }
}
#endif
