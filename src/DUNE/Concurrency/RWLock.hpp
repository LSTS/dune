//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONCURRENCY_RW_LOCK_HPP_INCLUDED_
#define DUNE_CONCURRENCY_RW_LOCK_HPP_INCLUDED_

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
    class DUNE_DLL_SYM RWLock;

    class RWLock
    {
    public:
      RWLock(void);

      ~RWLock(void);

      //! Apply a read lock.
      void
      lockRead(void);

      //! Apply a write lock.
      void
      lockWrite(void);

      //! Release the lock held.
      void
      unlock(void);

      //! Release the lock held.
      void
      destroy(void);

    private:
#if defined(DUNE_SYS_HAS_PTHREAD_RWLOCK)
      pthread_rwlock_t m_lock;
#endif

      // Non - copyable.
      RWLock(RWLock const&);

      // Non - assignable
      RWLock&
      operator=(RWLock const&);
    };
  }
}

#endif
