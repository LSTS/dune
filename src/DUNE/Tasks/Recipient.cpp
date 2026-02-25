//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
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
      std::map<uint16_t, ConsumerList>::iterator itr = m_cbacks.begin();

      for (; itr != m_cbacks.end(); ++itr)
      {
        m_ctx.mbus.unregisterRecipient(m_task, itr->first);

        for (ConsumerList::iterator c = itr->second.begin(); c != itr->second.end(); ++c)
          delete *c;

        itr->second.clear();
      }
    }

    void
    Recipient::unbind(uint16_t id, AbstractConsumer* consumer)
    {
      std::map<uint16_t, ConsumerList>::iterator itr = m_cbacks.find(id);
      if (itr == m_cbacks.end())
        return;

      m_cbacks[id].erase(consumer);
      if (m_cbacks[id].empty())
      {
        m_ctx.mbus.unregisterRecipient(m_task, id);
        m_cbacks.erase(id);
      }
      delete consumer;
    }
    
    void
    Recipient::bind(uint16_t id, AbstractConsumer* consumer)
    {
      std::map<uint16_t, ConsumerList>::iterator itr = m_cbacks.find(id);
      if (itr == m_cbacks.end())
        m_ctx.mbus.registerRecipient(m_task, id);

      m_cbacks[id].insert(consumer);
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
          std::map<uint16_t, ConsumerList>::iterator itr = m_cbacks.find(id);
          if (itr != m_cbacks.end())
          {
            for (ConsumerList::iterator c = itr->second.begin(); c != itr->second.end(); ++c)
              (*c)->consume(msg);
          }
          delete msg;
        }
      }
    }
  }
}
