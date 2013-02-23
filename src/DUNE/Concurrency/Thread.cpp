//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Thread.cpp 12667 2013-01-22 02:44:42Z rasm                       $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cassert>
#include <iostream>

// DUNE headers.
#include <DUNE/Config.hpp>
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

extern "C" void*
dune_concurrency_thread_entry_point(void* data)
{
  using DUNE::Concurrency::Thread;

  Thread* td = reinterpret_cast<Thread*>(data);
  td->setStateImpl(Thread::StateRunning);
  td->m_start_barrier.wait();
  td->run();
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
      int rv = pthread_attr_init(&m_attr);
      if (rv != 0)
        throw ThreadError("failed to initialize attributes", rv);

      rv = pthread_attr_setinheritsched(&m_attr, PTHREAD_EXPLICIT_SCHED);
      if (rv != 0)
        throw ThreadError("failed to disable inheritance of scheduler parameters", rv);

      rv = pthread_attr_setdetachstate(&m_attr, PTHREAD_CREATE_JOINABLE);
      if (rv != 0)
        throw ThreadError("unable to set attribute detachable", rv);

      pthread_attr_setstacksize(&m_attr, c_thread_stack_size);

      setStateImpl(StateUnknown);
    }

    Thread::~Thread(void)
    {
      //!@fixme assert errors.
#if defined(DUNE_SYS_HAS_PTHREAD)
      int rv = pthread_attr_destroy(&m_attr);
      if (rv != 0)
        DUNE_ERR("Thread", "failed to destroy attributes: " << System::Error::getMessage(rv));
#endif
    }

    unsigned
    Thread::native(void)
    {
#if defined(DUNE_OS_LINUX)
      return syscall(SYS_gettid);
#else
      return 0;
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
  }
}
