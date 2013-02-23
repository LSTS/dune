//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONCURRENCY_SCHEDULER_HPP_INCLUDED_
#define DUNE_CONCURRENCY_SCHEDULER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Scheduler;

    //! Class to manage the default scheduling policy.
    class Scheduler
    {
    public:
      //! Scheduling policies.
      enum Policy
      {
        //! First In-First Out scheduling policy.
        POLICY_FIFO,
        //! Round Robin scheduling policy.
        POLICY_RR,
        //! Platform specific scheduling policy.
        POLICY_OTHER
      };

      //! Set default scheduling policy.
      //! @param policy scheduling policy.
      static void
      set(Policy policy);

      //! Get default scheduling policy.
      //! @return current scheduling policy.
      static Policy
      get(void);

      //! Get the native scheduling policy identifier.
      //! @return scheduling policy identifier.
      static unsigned
      native(void);

      //! Translate a DUNE scheduling policy to a native scheduling
      //! policy identifier.
      //! @param policy scheduling policy.
      //! @return native scheduling policy identifier.
      static unsigned
      native(Policy policy);

      //! Force the running thread to relinquish the processor until
      //! it becomes the head of its thread list.
      static void
      yield(void);

      //! Get the minimum priority value for current default
      //! scheduling policy.
      //! @return minimum priority value for current scheduling
      //! policy.
      static unsigned
      minimumPriority(void);

      //! Get the maximum priority value for current default
      //! scheduling policy.
      //! @return maximum priority value for current scheduling
      //! policy.
      static unsigned
      maximumPriority(void);
    };
  }
}

#endif
