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
