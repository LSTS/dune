//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Recipient.cpp 12667 2013-01-22 02:44:42Z rasm                    $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/IMC/Bus.hpp>
#include <DUNE/IMC/Factory.hpp>
#include <DUNE/Tasks/Context.hpp>
#include <DUNE/Tasks/Recipient.hpp>

namespace DUNE
{
  namespace Tasks
  {
    Recipient::Recipient(AbstractTask* task, Context& ctx):
      m_task(task),
      m_ctx(ctx)
    { }

    Recipient::~Recipient(void)
    {
      unbindAll();

      while (!m_mqueue.empty())
      {
        IMC::Message* msg = m_mqueue.pop();
        if (msg)
          delete msg;
      }
    }

    void
    Recipient::unbindAll(void)
    {
      std::map<uint32_t, AbstractConsumer*>::iterator itr = m_cbacks.begin();

      for (; itr != m_cbacks.end(); ++itr)
      {
        if (itr->second)
        {
          m_ctx.mbus.unregisterRecipient(m_task, itr->first);
          delete itr->second;
          itr->second = NULL;
        }
      }
    }

    void
    Recipient::bind(uint32_t id, AbstractConsumer* consumer)
    {
      std::map<uint32_t, AbstractConsumer*>::iterator itr = m_cbacks.find(id);

      if (itr != m_cbacks.end())
      {
        m_ctx.mbus.unregisterRecipient(m_task, id);
        delete itr->second;
      }

      m_cbacks[id] = consumer;
      m_ctx.mbus.registerRecipient(m_task, id);
    }

    void
    Recipient::waitForMessages(double timeout)
    {
      if (m_mqueue.waitForItems(timeout))
        runCallBacks();
    }

    void
    Recipient::put(const IMC::Message* msg)
    {
      m_mqueue.push(msg->clone());
    }

    void
    Recipient::runCallBacks(void)
    {
      unsigned int size = m_mqueue.size();

      for (unsigned int i = 0; i < size; ++i)
      {
        const IMC::Message* msg = m_mqueue.pop();
        if (msg)
        {
          uint32_t id = msg->getId();
          m_cbacks[id]->consume(msg);
          delete msg;
        }
      }
    }
  }
}
