//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Barrier.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/Concurrency/Barrier.hpp>
#include <DUNE/Concurrency/Exceptions.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    //! Constructor.
    Barrier::Barrier(int count)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_BARRIER)
      int rv = 0;

      if ((rv = pthread_barrier_init(&m_barrier, 0, count)) != 0)
        throw BarrierError("initializing", rv);

#elif defined(DUNE_SYS_HAS_PTHREAD_COND) && defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      m_count = 0;
      m_max = count;
      pthread_mutex_init(&m_lock, 0);
      pthread_cond_init(&m_cond, 0);
#endif
    }

    //! Destructor.
    Barrier::~Barrier(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_BARRIER)
      pthread_barrier_destroy(&m_barrier);

#elif defined(DUNE_SYS_HAS_PTHREAD_COND) && defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      pthread_mutex_destroy(&m_lock);
      pthread_cond_destroy(&m_cond);
#endif
    }

    void
    Barrier::wait(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_BARRIER)
      int rv = pthread_barrier_wait(&m_barrier);

      if (rv != 0 && rv != PTHREAD_BARRIER_SERIAL_THREAD)
        throw BarrierError("wait", rv);

#elif defined(DUNE_SYS_HAS_PTHREAD_COND) && defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      pthread_mutex_lock(&m_lock);
      ++m_count;

      // Check if we should wait or not.
      if (m_count < m_max)
        pthread_cond_wait(&m_cond, &m_lock);
      else
        pthread_cond_broadcast(&m_cond);

      pthread_mutex_unlock(&m_lock);
#endif
    }
  }
}
