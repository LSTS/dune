//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
