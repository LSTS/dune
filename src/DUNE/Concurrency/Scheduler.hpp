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
