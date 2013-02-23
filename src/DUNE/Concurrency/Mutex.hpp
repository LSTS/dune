//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONCURRENCY_MUTEX_HPP_INCLUDED_
#define DUNE_CONCURRENCY_MUTEX_HPP_INCLUDED_

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
    class DUNE_DLL_SYM Mutex;

    class Mutex
    {
    public:
      Mutex(void);

      ~Mutex(void);

      void
      lock(void);

      void
      unlock(void);

      void
      tryLock(void);

      void
      destroy(void);

    private:
#if defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      pthread_mutex_t m_mutex;
      pthread_mutexattr_t m_attr;
#endif

      // Non - copyable.
      Mutex(const Mutex&);

      // Non - assignable
      Mutex&
      operator=(const Mutex&);
    };
  }
}

#endif
