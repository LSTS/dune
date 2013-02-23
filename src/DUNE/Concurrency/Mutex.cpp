//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/Concurrency/Exceptions.hpp>
#include <DUNE/Concurrency/Mutex.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    Mutex::Mutex(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      int rv = 0;

      if ((rv = pthread_mutexattr_init(&m_attr)) != 0)
        throw MutexError(rv);

      // Enable priority inheritance if supported.
#  if (_POSIX_THREAD_PRIO_INHERIT != -1) && defined(PTHREAD_PRIO_INHERIT)
      if ((rv = pthread_mutexattr_setprotocol(&m_attr, PTHREAD_PRIO_INHERIT)) != 0)
        throw MutexError(rv);
#  endif

      if ((rv = pthread_mutex_init(&m_mutex, &m_attr)) != 0)
        throw MutexError(rv);
#endif
    }

    Mutex::~Mutex(void)
    {
      try
      {
        destroy();
      }
      catch (...)
      { }
    }

    void
    Mutex::lock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      int rv = pthread_mutex_lock(&m_mutex);

      if (rv != 0)
        throw MutexError("lock", rv);
#endif
    }

    void
    Mutex::unlock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      int rv = pthread_mutex_unlock(&m_mutex);

      if (rv != 0)
        throw MutexError("unlock", rv);
#endif
    }

    void
    Mutex::tryLock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      int rv = pthread_mutex_trylock(&m_mutex);

      if (rv != 0)
        throw MutexError("tryLock", rv);
#endif
    }

    void
    Mutex::destroy(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      int rv = pthread_mutex_destroy(&m_mutex);

      if (rv != 0)
        throw MutexError("destroy", rv);
#endif
    }
  }
}
