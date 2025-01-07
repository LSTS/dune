//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

#ifndef MONITORS_PAYLOAD_STORAGE_HPP_INCLUDED_
#define MONITORS_PAYLOAD_STORAGE_HPP_INCLUDED_

#include <algorithm>
#include <vector>

#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace Payload
  {
    using DUNE_NAMESPACES;

    class EntityPayload
    {
    public:
      EntityPayload(void)
      { }

      ~EntityPayload(void)
      {
        clear();
      }

      bool
      store(const IMC::Message* msg)
      {
        unsigned msg_id = msg->getId();
        if (m_payload.find(msg_id) == m_payload.end())
          return false;

        if (m_payload[msg->getId()] != nullptr)
        {
          Memory::clear(m_payload[msg->getId()]);
          m_payload[msg->getId()] = msg;
          return false;
        }

        m_payload[msg->getId()] = msg;
        return true;
      }

      void
      addMessageID(unsigned msg_id)
      {
        m_payload[msg_id] = nullptr;
      }

      void
      getMessages(std::list<const IMC::Message*>& lst)
      {
        for (auto it = m_payload.begin(); it != m_payload.end(); ++it)
        {
          if (it->second == nullptr)
            continue;

          lst.push_back(it->second);
        }
      }

      void
      clear(void)
      {
        for (auto it = m_payload.begin(); it != m_payload.end(); ++it)
          Memory::clear(it->second);
      }

    private:
      //! Map for Payload
      std::map<unsigned, const IMC::Message*> m_payload;
    };

    class Storage
    {
    public:
      Storage(Task* owner):
        m_max_msg(0),
        m_msg_count(0),
        m_task(owner)
      { }

      ~Storage(void)
      { }

      void
      addToPayload(unsigned eid, unsigned msg_id)
      {
        m_payload[eid].addMessageID(msg_id);
        m_max_msg++;
      }

      void
      store(const IMC::Message* msg)
      {
        if (m_msg_count == m_max_msg)
          return;

        unsigned eid = msg->getSourceEntity();
        if (m_payload.find(eid) == m_payload.end())
        {
          //m_task->spew("Entity %d not found in payload", eid);
          return;
        }

        if (m_payload[eid].store(msg->clone()))
        {
          m_task->debug("Message %s stored", msg->getName());
          m_msg_count++;
        }
      }

      bool
      getPayload(std::list<const IMC::Message*>& lst)
      {
        for (auto it = m_payload.begin(); it != m_payload.end(); ++it)
          it->second.getMessages(lst);

        return true;
      }

      void
      clear(void)
      {
        for (auto it = m_payload.begin(); it != m_payload.end(); ++it)
          it->second.clear();

        m_msg_count = 0;
      }

      //! Number of total messages
      unsigned m_max_msg;
      //! Number of messages received
      unsigned m_msg_count;

    private:
      Task* m_task;

      //! Map for Payload
      std::map<unsigned, EntityPayload> m_payload;
    };
  }
}

#endif
