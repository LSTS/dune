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

#ifndef DUNE_IMC_BUS_HPP_INCLUDED_
#define DUNE_IMC_BUS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>
#include <map>
#include <list>
#include <string>
#include <utility>
#include <vector>
#include <queue>

// DUNE headers.
#include <DUNE/Tasks/AbstractTask.hpp>
#include <DUNE/Concurrency/TSQueue.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/Concurrency/ScopedRWLock.hpp>

namespace DUNE
{
  namespace IMC
  {
    // Forward declarations.
    struct BackLogEntry;
    class TransportBindings;

    // Export DLL Symbol.
    class DUNE_DLL_SYM Bus;

    class Bus
    {
    public:
      //! Constructor.
      Bus(void);

      //! Destructor.
      ~Bus(void);

      //! Register a task as a recipient a given message
      //! identification number.
      //! @param task task object.
      //! @param id message identification number.
      void
      registerRecipient(Tasks::AbstractTask* task, uint16_t id);

      //! Unregister a task as a recipient of a given message
      //! identification number.
      //! @param task task object.
      //! @param id message identification number.
      void
      unregisterRecipient(Tasks::AbstractTask* task, uint16_t id);

      //! Dispatches a message to registered listeners.
      //! @param msg message to dispatch.
      //! @param task do not deliver message to this task.
      void
      dispatch(const Message* msg, Tasks::AbstractTask* task = NULL);

      inline void
      pause(void)
      {
        Concurrency::ScopedMutex lock(m_paused_lock);
        m_paused = true;
      }

      void
      resume(void);

      const std::vector<TransportBindings*>
      getBindings(void);

    private:
      typedef std::list<Tasks::AbstractTask*> TransportList;
      //! Table of recipients.
      std::map<uint16_t, TransportList> m_recipients;
      //! Internal list lock.
      Concurrency::RWLock m_lock;
      //! Bus is paused.
      bool m_paused;
      //! Pause lock.
      Concurrency::Mutex m_paused_lock;
      //! List containing all generated TransportBindings for future logging/reference.
      std::vector<TransportBindings*> m_bind_msgs;
      //! Back log queue. Saves messages when Bus is paused.
      Concurrency::TSQueue<BackLogEntry*> m_back_log;

      //! Non - copyable.
      Bus(Bus const&);

      //! Non - assignable.
      Bus&
      operator=(Bus const&);
    };
  }
}

#endif
