//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <algorithm>

// DUNE headers.
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/IMC/Factory.hpp>
#include <DUNE/IMC/Bus.hpp>
#include <DUNE/IMC/Message.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace IMC
  {
    struct BackLogEntry
    {
      BackLogEntry(const Message* msg, Tasks::AbstractTask* exc):
        message(msg->clone()),
        exclude(exc)
      {  }

      ~BackLogEntry(void)
      {
        delete message;
      }

      //! Message.
      Message* message;
      //! Exclude this task.
      Tasks::AbstractTask* exclude;
    };

    Bus::Bus(void):
      m_paused(false)
    { }

    Bus::~Bus(void)
    {
      while (!m_back_log.empty())
      {
        BackLogEntry* entry = m_back_log.pop();
        if (entry != NULL)
          delete entry;
      }

      for (unsigned i = 0; i < m_bind_msgs.size(); ++i)
        delete m_bind_msgs[i];
    }

    void
    Bus::registerRecipient(Tasks::AbstractTask* task, uint16_t id)
    {
      TransportBindings* bind = new TransportBindings;
      bind->setSourceEntity(DUNE_IMC_CONST_SYS_EID);
      bind->setTimeStamp();
      bind->consumer = task->getName();
      bind->message_id = id;
      m_bind_msgs.push_back(bind);

      Concurrency::ScopedRWLock l(m_lock, true);
      TransportList::iterator itr = std::find(m_recipients[id].begin(), m_recipients[id].end(), task);
      if (itr == m_recipients[id].end())
        m_recipients[id].push_back(task);
    }

    void
    Bus::unregisterRecipient(Tasks::AbstractTask* task, uint16_t id)
    {
      DUNE_DBG("Message Bus", "unregistering recipient "
               << task->getName()
               << " <=> " << Factory::getAbbrevFromId(id));

      Concurrency::ScopedRWLock l(m_lock, true);
      m_recipients[id].remove(task);
    }

    void
    Bus::dispatch(const Message* msg, Tasks::AbstractTask* task)
    {
      {
        Concurrency::ScopedMutex lock(m_paused_lock);
        if (m_paused)
        {
          m_back_log.push(new BackLogEntry(msg, task));
          return;
        }
      }

      uint16_t id = msg->getId();
      Concurrency::ScopedRWLock l(m_lock);
      TransportList& dlst(m_recipients[id]);
      for (TransportList::iterator itr = dlst.begin(); itr != dlst.end(); ++itr)
      {
        if (*itr != task)
          (*itr)->receive(msg);
      }
    }

    void
    Bus::resume(void)
    {
      m_paused_lock.lock();
      m_paused = false;
      m_paused_lock.unlock();

      while (!m_back_log.empty())
      {
        BackLogEntry* entry = m_back_log.pop();
        if (entry != NULL)
        {
          dispatch(entry->message, entry->exclude);
          delete entry;
        }
      }
    }

    const std::vector<TransportBindings*>
    Bus::getBindings(void)
    {
      return m_bind_msgs;
    }
  }
}
