//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Exceptions.hpp>
#include <DUNE/Concurrency/RWLock.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    RWLock::RWLock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_RWLOCK)
      int rv = pthread_rwlock_init(&m_lock, 0);

      if (rv != 0)
        throw RWLockError(rv);
#endif
    }

    RWLock::~RWLock(void)
    {
      try
      {
        destroy();
      }
      catch (...)
      { }
    }

    //! Apply a read lock.
    void
    RWLock::lockRead(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_RWLOCK)
      int rv = pthread_rwlock_rdlock(&m_lock);

      if (rv != 0)
        throw RWLockError(rv);
#endif
    }

    //! Apply a write lock.
    void
    RWLock::lockWrite(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_RWLOCK)
      int rv = pthread_rwlock_wrlock(&m_lock);

      if (rv != 0)
        throw RWLockError(rv);
#endif
    }

    //! Release the lock held.
    void
    RWLock::unlock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_RWLOCK)
      int rv = pthread_rwlock_unlock(&m_lock);

      if (rv != 0)
        throw RWLockError(rv);
#endif
    }

    //! Release the lock held.
    void
    RWLock::destroy(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_RWLOCK)
      int rv = pthread_rwlock_destroy(&m_lock);

      if (rv != 0)
        throw RWLockError(rv);
#endif
    }
  }
}
