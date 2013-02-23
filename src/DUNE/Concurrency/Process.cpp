//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Process.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <iostream>
#include <cstdlib>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Process.hpp>
#include <DUNE/Concurrency/ScopedSemaphore.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_WAIT_H)
#  include <sys/wait.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_SIGNAL_H)
#  include <signal.h>
#endif

namespace DUNE
{
  namespace Concurrency
  {
    struct ProcessPrivate
    {
      Runnable::State state;
      Semaphore state_sem;
      Semaphore start_sem;
      int handle;
    };

    Process::Process(void):
      m_smem(sizeof(ProcessPrivate))
    {
#if defined(DUNE_SYS_HAS_FORK)
      m_smem.create();
      m_pvt = new (*m_smem)ProcessPrivate;
      m_pvt->state = StateUnknown;
      m_pvt->start_sem.lock();
#endif
    }

    Process::~Process(void)
    {
#if defined(DUNE_SYS_HAS_FORK)
      stopImpl();
      joinImpl();
      m_pvt->~ProcessPrivate();
#endif
    }

    void
    Process::startImpl(void)
    {
#if defined(DUNE_SYS_HAS_FORK)
      pid_t pid = fork();

      if (pid == 0)
      {
        setStateImpl(StateRunning);
        m_pvt->start_sem.unlock();
        run();
        setStateImpl(StateDead);
        std::exit(0);
      }
      else
      {
        m_pvt->handle = pid;
        m_pvt->start_sem.lock();
      }
#endif
    }

    void
    Process::stopImpl(void)
    {
#if defined(DUNE_SYS_HAS_FORK)
      setStateImpl(StateStopping);
#endif
    }

    void
    Process::joinImpl(void)
    {
#if defined(DUNE_SYS_HAS_FORK)
      waitpid(m_pvt->handle, 0, 0);
#endif
    }

    void
    Process::setStateImpl(Runnable::State state)
    {
#if defined(DUNE_SYS_HAS_FORK)
      ScopedSemaphore m(m_pvt->state_sem);
      m_pvt->state = state;
#else
      (void)state;
#endif
    }

    Runnable::State
    Process::getStateImpl(void)
    {
      // POSIX implementation.
#if defined(DUNE_SYS_HAS_FORK)
      ScopedSemaphore m(m_pvt->state_sem);
      return m_pvt->state;

      // Not implemented.
#else
      return StateUnknown;
#endif
    }

    void
    Process::setPriorityImpl(Scheduler::Policy policy, unsigned priority)
    {
      (void)policy;
      (void)priority;
    }
  }
}
