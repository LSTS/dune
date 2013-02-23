//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
