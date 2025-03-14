//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cassert>
#include <iostream>
#include <limits>

#include <chrono>

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

  std::lock_guard<std::mutex> lk(td->join_mtx);
  td->join_done = true;
  td->join_cv.notify_all();

  return NULL;
}

namespace DUNE
{
  namespace Concurrency
  {
    Thread::Thread(void):
      m_start_barrier(2),
      m_priority(Scheduler::minimumPriority()),
      m_policy(Scheduler::get())
    {
#if defined(DUNE_OS_LINUX)
      m_id = -1;
      m_last_proc_time = 0;
      m_last_global_time = 0;
#endif

      setStateImpl(StateUnknown);
    }

    Thread::~Thread(void)
    { }

    void
    Thread::startImpl(void)
    {
      setStateImpl(StateStarting);

      m_thread = std::thread(dune_concurrency_thread_entry_point, this);
      setPriorityImpl(m_policy, m_priority);

      m_start_barrier.wait();
    }

    void
    Thread::stopImpl(void)
    {
      setStateImpl(StateStopping);
    }

    void
    Thread::joinImpl(unsigned s)
    {
      if (!m_thread.joinable())
        return;

      if (s == 0)
      {
        m_thread.join();
        return;
      }

      std::unique_lock<std::mutex> lk(join_mtx);
      if (!join_cv.wait_for(lk, std::chrono::seconds(s),
                            [this] { return join_done; })) /* isDead() ?? */
      {
        m_thread.detach();
        throw ThreadError("thread join timeout", ETIME);
        return;
      }

      m_thread.join();
    }

    void
    Thread::setPriorityImpl(Scheduler::Policy policy, unsigned a_priority)
    {
      if (a_priority < Scheduler::minimumPriority(policy)
          || a_priority > Scheduler::maximumPriority(policy))
        throw ThreadError("unable to set thread priority", EINVAL);

      m_policy = policy;
      m_priority = a_priority;

      if (!isRunning())
        return;

#if defined(DUNE_SYS_HAS_PTHREAD)
      int native_policy = Scheduler::native(policy);
      sched_param sparam;
      std::memset(&sparam, 0, sizeof(sparam));
      sparam.sched_priority = a_priority;

      int rv = pthread_setschedparam(m_thread.native_handle(), native_policy, &sparam);
      if (rv != 0)
        throw ThreadError("unable to set thread priority", rv);
#endif
    }

    unsigned
    Thread::getPriorityImpl(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD)
      int native_policy;
      sched_param sparam;
      std::memset(&sparam, 0, sizeof(sparam));

      if (isRunning())
      {
        int rv = pthread_getschedparam(m_thread.native_handle(), &native_policy, &sparam);
        if (rv != 0)
          throw ThreadError("unable to get thread priority", rv);

        return sparam.sched_priority;
      }

      return m_priority;
#endif

      return 0;
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
