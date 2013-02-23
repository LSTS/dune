//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Barrier.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef DUNE_CONCURRENCY_BARRIER_HPP_INCLUDED_
#define DUNE_CONCURRENCY_BARRIER_HPP_INCLUDED_

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
    //! Barrier.
    class Barrier
    {
    public:
      //! Constructor.
      //! @param count number of parties required to trip the barrier.
      Barrier(int count);

      //! Destructor.
      ~Barrier(void);

      void
      wait(void);

    private:
#if defined(DUNE_SYS_HAS_PTHREAD_BARRIER)
      pthread_barrier_t m_barrier;

#elif defined(DUNE_SYS_HAS_PTHREAD_COND) && defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      int m_count;
      int m_max;
      pthread_cond_t m_cond;
      pthread_mutex_t m_lock;
#endif

      // Non - copyable.
      Barrier(Barrier const&);

      // Non - assignable
      Barrier&
      operator=(Barrier const&);
    };
  }
}

#endif
