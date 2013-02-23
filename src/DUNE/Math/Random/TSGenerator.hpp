//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_MATH_RANDOM_TSGENERATOR_HPP_INCLUDED_
#define DUNE_MATH_RANDOM_TSGENERATOR_HPP_INCLUDED_

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
