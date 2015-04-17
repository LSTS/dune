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
