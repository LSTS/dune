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
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Scheduler.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>

// System headers.
#if defined(DUNE_SYS_HAS_SCHED_H)
#  include <sched.h>
#endif

#if defined(DUNE_SYS_HAS_PTHREAD_H)
#  include <pthread.h>
#endif

namespace DUNE
{
  namespace Concurrency
  {
    //! Default scheduling policy.
    static Scheduler::Policy g_policy = Scheduler::POLICY_OTHER;
    //! Lock for default scheduling policy.
    static Mutex g_policy_mtx;

    void
    Scheduler::set(Scheduler::Policy policy)
    {
      ScopedMutex m(g_policy_mtx);
      g_policy = policy;
    }

    Scheduler::Policy
    Scheduler::get(void)
    {
      ScopedMutex m(g_policy_mtx);
      return g_policy;
    }

    unsigned
    Scheduler::native(void)
    {
      ScopedMutex m(g_policy_mtx);
      return native(g_policy);
    }

    unsigned
    Scheduler::native(Scheduler::Policy policy)
    {
      switch (policy)
      {
        case POLICY_RR:
          return SCHED_RR;
        case POLICY_FIFO:
          return SCHED_FIFO;
        case POLICY_OTHER:
          return SCHED_OTHER;
      }

      return SCHED_OTHER;
    }

    unsigned
    Scheduler::minimumPriority(void)
    {
#if defined(DUNE_SYS_HAS_SCHED_GET_PRIORITY_MIN)
      int policy = native();
      return sched_get_priority_min(policy);
#endif

      return 0;
    }

    unsigned
    Scheduler::maximumPriority(void)
    {
#if defined(DUNE_SYS_HAS_SCHED_GET_PRIORITY_MAX)
      int policy = native();
      return sched_get_priority_max(policy);
#endif

      return 0;
    }

    void
    Scheduler::yield(void)
    {
#if defined(DUNE_SYS_HAS_SCHED_YIELD)
      sched_yield();
#endif
    }
  }
}
