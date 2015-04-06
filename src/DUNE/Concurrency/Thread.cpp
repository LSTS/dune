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
#include <cassert>
#include <iostream>
#include <limits>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Concurrency/Exceptions.hpp>
#include <DUNE/Concurrency/Thread.hpp>
#include <DUNE/Concurrency/Constants.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>

// System headers.
#if defined(DUNE_SYS_HAS_PTHREAD_H)
#  include <pthread.h>
#endif

#if defined(DUNE_SYS_HAS_SIGNAL_H)
#  include <signal.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_SIGNAL_H)
#  include <sys/signal.h>
#endif

#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_SYSCALL_H)
#  include <sys/syscall.h>
#endif

#if defined(DUNE_OS_LINUX)
//! Number of useful fields in /proc/stat.
static const unsigned c_proc_stat_values = 8;
//! Number of fields to discard /proc/stat
static const unsigned c_proc_stat_skips = 1;
//! Number of useful fields in /proc/self/stat.
static const unsigned c_proc_self_stat_values = 2;
//! Number of fields to discard /proc/self/stat
static const unsigned c_proc_self_stat_skips = 13;
#endif

extern "C" void*
dune_concurrency_thread_entry_point(void* data)
{
  using DUNE::Concurrency::Thread;

  Thread* td = reinterpret_cast<Thread*>(data);
  td->setStateImpl(Thread::StateRunning);

#if defined(DUNE_OS_LINUX)
  td->m_id = syscall(SYS_gettid);
  td->m_proc_file = DUNE::Utils::String::str("/proc/%u/task/%u/stat", getpid(), td->m_id);
#endif

  td->m_start_barrier.wait();
  td->run();

#if defined(DUNE_OS_LINUX)
  td->m_id = -1;
#endif

  td->setStateImpl(Thread::StateDead);

  return NULL;
}

namespace DUNE
{
  namespace Concurrency
  {
    Thread::Thread(void):
      m_start_barrier(2)
    {
#if defined(DUNE_OS_LINUX)
      m_id = -1;
      m_last_proc_time = 0;
      m_last_global_time= 0;
#endif

      int rv = pthread_attr_init(&m_attr);
      if (rv != 0)
        throw ThreadError("failed to initialize attributes", rv);

#if defined(PTHREAD_EXPLICIT_SCHED)
      rv = pthread_attr_setinheritsched(&m_attr, PTHREAD_EXPLICIT_SCHED);
      if (rv != 0)
        throw ThreadError("failed to disable inheritance of scheduler parameters", rv);
#endif

      rv = pthread_attr_setdetachstate(&m_attr, PTHREAD_CREATE_JOINABLE);
      if (rv != 0)
        throw ThreadError("unable to set attribute detachable", rv);

      pthread_attr_setstacksize(&m_attr, c_thread_stack_size);

      setStateImpl(StateUnknown);
    }

    Thread::~Thread(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD)
      pthread_attr_destroy(&m_attr);
#endif
    }

    void
    Thread::startImpl(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD)
      setStateImpl(StateStarting);

      int rv = pthread_create(&m_handle, &m_attr, dune_concurrency_thread_entry_point, this);
      if (rv != 0)
        throw ThreadError("failed to start thread", rv);

      m_start_barrier.wait();
#endif
    }

    void
    Thread::stopImpl(void)
    {
      setStateImpl(StateStopping);
    }

    void
    Thread::joinImpl(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD)
      int rv = pthread_join(m_handle, 0);
      if (rv != 0)
        throw ThreadError("failed to join thread", rv);
#endif
    }

    void
    Thread::setPriorityImpl(Scheduler::Policy policy, unsigned a_priority)
    {
#if defined(DUNE_SYS_HAS_PTHREAD)
      int native_policy = Scheduler::native(policy);
      sched_param sparam;
      std::memset(&sparam, 0, sizeof(sparam));
      sparam.sched_priority = a_priority;

      if (isRunning())
      {
        int rv = pthread_setschedparam(m_handle, native_policy, &sparam);
        if (rv != 0)
          throw ThreadError("unable to set thread priority", rv);
      }
      else
      {
        int rv = pthread_attr_setschedpolicy(&m_attr, native_policy);
        if (rv != 0)
          throw ThreadError("unable to set thread scheduling policy", rv);

        rv = pthread_attr_setschedparam(&m_attr, &sparam);
        if (rv != 0)
          throw ThreadError("unable to set thread priority", rv);
      }
#endif
    }

    Runnable::State
    Thread::getStateImpl(void)
    {
      ScopedMutex m(m_state_mx);
      return m_state;
    }

    void
    Thread::setStateImpl(Runnable::State state)
    {
      ScopedMutex m(m_state_mx);
      m_state = state;
    }

    int
    Thread::getProcessorUsage(void)
    {
      // Linux v2.6 implementation.
#if defined(DUNE_OS_LINUX)
      if (m_id == -1)
        return -1;

      uint64_t global_time = 0;
      uint64_t global_delta = 0;
      uint64_t proc_time = 0;
      uint64_t proc_delta = 0;
      uint64_t tmp;

      // Retrieve global CPU delta.
      {
        std::ifstream ifs("/proc/stat");
        for (unsigned i = 0; i < c_proc_stat_skips; ++i)
          ifs.ignore(std::numeric_limits<std::streamsize>::max(), ' ');

        for (unsigned i = 0; i < c_proc_stat_values; ++i)
        {
          ifs >> tmp;
          global_time = global_time + tmp;
        }
      }

      // Retrieve process's CPU time.
      {
        std::ifstream ifs(m_proc_file.c_str());
        for (unsigned i = 0; i < c_proc_self_stat_skips; ++i)
          ifs.ignore(std::numeric_limits<std::streamsize>::max(), ' ');

        for (unsigned i = 0; i < c_proc_self_stat_values; ++i)
        {
          ifs >> tmp;
          proc_time = proc_time + tmp;
        }
      }

      // Update global delta.
      global_delta = global_time - m_last_global_time;
      m_last_global_time = global_time;

      // Update process delta.
      proc_delta = proc_time - m_last_proc_time;
      m_last_proc_time = proc_time;

      if (global_delta == 0)
        return -1;

      return (proc_delta * 100) / global_delta;

      // Not implemented.
#else
      return -1;
#endif
    }
  }
}
