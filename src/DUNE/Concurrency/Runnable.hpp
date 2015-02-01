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

#ifndef DUNE_CONCURRENCY_RUNNABLE_HPP_INCLUDED_
#define DUNE_CONCURRENCY_RUNNABLE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/Concurrency/Scheduler.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Runnable;

    class Runnable
    {
    public:
      enum State
      {
        StateStarting,
        StateRunning,
        StateStopping,
        StateDead,
        StateUnknown
      };

      Runnable(void):
        m_created(false)
      { }

      virtual
      ~Runnable(void)
      { }

      void
      start(void)
      {
        startImpl();
        ScopedMutex m(m_created_lock);
        m_created = true;
      }

      void
      stop(void)
      {
        stopImpl();
      }

      void
      join(void)
      {
        joinImpl();
      }

      void
      stopAndJoin(void)
      {
        stop();
        join();
      }

      void
      setPriority(Scheduler::Policy policy, unsigned priority)
      {
        setPriorityImpl(policy, priority);
      }

      State
      getState(void)
      {
        return getStateImpl();
      }

      bool
      isCreated(void)
      {
        ScopedMutex m(m_created_lock);
        return m_created;
      }

      bool
      isStopping(void)
      {
        return getState() == StateStopping;
      }

      bool
      isRunning(void)
      {
        return getState() == StateRunning;
      }

      bool
      isStarting(void)
      {
        return getState() == StateStarting;
      }

      bool
      isDead(void)
      {
        return getState() == StateDead;
      }

    protected:
      virtual void
      run(void) = 0;

      virtual void
      startImpl(void) = 0;

      virtual void
      stopImpl(void) = 0;

      virtual void
      joinImpl(void) = 0;

      virtual void
      setStateImpl(State value) = 0;

      virtual State
      getStateImpl(void) = 0;

      virtual void
      setPriorityImpl(Scheduler::Policy policy, unsigned priority) = 0;

    private:
      bool m_created;
      Mutex m_created_lock;
    };
  }
}

#endif
