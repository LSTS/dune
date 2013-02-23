//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONCURRENCY_PROCESS_HPP_INCLUDED_
#define DUNE_CONCURRENCY_PROCESS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Runnable.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/Concurrency/SharedMemory.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_SIGNAL_H)
#  include <signal.h>
#endif

#if defined(DUNE_SYS_HAS_SEMAPHORE_H)
#  include <semaphore.h>
#endif

namespace DUNE
{
  namespace Concurrency
  {
    // Forward declarations.
    struct ProcessPrivate;

    // Export DLL Symbol.
    class DUNE_DLL_SYM Process;

    class Process: public Runnable
    {
    public:
      Process(void);

      virtual
      ~Process(void);

    private:
      ProcessPrivate* m_pvt;
      SharedMemory m_smem;

      void
      startImpl(void);

      void
      stopImpl(void);

      void
      joinImpl(void);

      void
      setPriorityImpl(Scheduler::Policy policy, unsigned priority);

      Runnable::State
      getStateImpl(void);

      void
      setStateImpl(Runnable::State value);
    };
  }
}

#endif
