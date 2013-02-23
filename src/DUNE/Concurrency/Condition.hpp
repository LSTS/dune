//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONCURRENCY_CONDITION_HPP_INCLUDED_
#define DUNE_CONCURRENCY_CONDITION_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_PTHREAD_H)
#  include <pthread.h>
#endif

namespace DUNE
{
  namespace Concurrency
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Condition;

    class Condition
    {
    public:
      Condition(void);

      ~Condition(void);

      void
      destroy(void);

      bool
      wait(double t = -1);

      void
      lock(void);

      void
      unlock(void);

      void
      broadcast(void);

      void
      signal(void);

    private:
#if defined(DUNE_SYS_HAS_PTHREAD_COND)
      pthread_cond_t m_cond;
      pthread_condattr_t m_cond_attr;
      pthread_mutex_t m_mutex;
#endif

      // Non - copyable.
      Condition(Condition const&);

      // Non - assignable
      Condition&
      operator=(Condition const&);
    };
  }
}

#endif
