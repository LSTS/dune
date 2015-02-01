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

#ifndef DUNE_CONCURRENCY_THREAD_HPP_INCLUDED_
#define DUNE_CONCURRENCY_THREAD_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>
#include <DUNE/Concurrency/Runnable.hpp>
#include <DUNE/Concurrency/Mutex.hpp>
#include <DUNE/Concurrency/Scheduler.hpp>
#include <DUNE/Concurrency/Barrier.hpp>

extern "C" void*
dune_concurrency_thread_entry_point(void*);

namespace DUNE
{
  namespace Concurrency
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Thread;

    //! Threads are a way for a program to split itself into two or
    //! more simultaneously running tasks.
    class Thread: public Runnable
    {
      friend void*
      ::dune_concurrency_thread_entry_point(void*);

    public:
      // Constructor.
      Thread(void);

      //! Destructor.
      virtual
      ~Thread(void);

      //! Retrieve the percentage of CPU time used by this thread
      //! since the last call to this function or object creation. On
      //! multi CPU systems the CPU time is an average.
      //! @return percentage of the CPU time used or -1 if this value
      //! cannot be computed.
      int
      getProcessorUsage(void);

    protected:
      void
      startImpl(void);

      void
      stopImpl(void);

      void
      joinImpl(void);

      void
      setPriorityImpl(Scheduler::Policy policy, unsigned priority);

    private:
      //! Thread state.
      Runnable::State m_state;
      //! Mutex to protect m_state.
      Mutex m_state_mx;
      //! Barrier used to return from start() when the thread
      //! actually started.
      Barrier m_start_barrier;

#if defined(DUNE_SYS_HAS_PTHREAD)
      //! POSIX thread handle.
      pthread_t m_handle;
      //! POSIX thread attributes.
      pthread_attr_t m_attr;
#endif

#if defined(DUNE_OS_LINUX)
      //! Native identifier.
      int m_id;
      //! Last process's CPU time.
      uint64_t m_last_proc_time;
      //! Last global CPU time.
      uint64_t m_last_global_time;
      //! /proc file.
      std::string m_proc_file;
#endif

      void
      setStateImpl(Runnable::State state);

      Runnable::State
      getStateImpl(void);

      //! Non - copyable.
      Thread(const Thread&);

      //! Non - assignable
      Thread&
      operator=(const Thread&);
    };
  }
}

#endif
