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
// Author: João Bogas                                                       *
//***************************************************************************

#include <DUNE/DUNE.hpp>
#include <map>

using DUNE_NAMESPACES;

namespace Transports
{
  namespace IridiumOperation
  {

    class PersistentMessage
    {
    public:
      //! Constructor.
      //! @param[in] msg Message to be sent.
      explicit PersistentMessage(const IMC::Message* msg):
        m_msg(msg->clone())
      { }

      ~PersistentMessage(void)
      {
        static unsigned deleted = 0;
        deleted++;
        clear();
      }

      //! Check if all messages were sent.
      //! @param[in] id Transmission ID.
      //! @return true if all messages were sent.
      bool
      onSuccess(uint16_t id)
      {
        m_waiting_ids.erase(id);
        if (m_waiting_ids.empty())
          return true;

        return false;
      }

      //! Check if message should be resent.
      //! @param[in] id Transmission ID.
      //! @return true if message should be resent.
      const IMC::Message*
      onFailure(uint16_t id)
      {
        auto itr = m_msgs.find(id);
        if (itr == m_msgs.end())
          return nullptr;

        Msg& msg = itr->second;
        if (msg.retries >= 3)
          return nullptr;

        msg.retries++;
        return msg.msg;
      }

      const IMC::Message*
      getMessage(uint16_t id)
      {
        auto itr = m_msgs.find(id);
        if (itr == m_msgs.end())
          return nullptr;

        return itr->second.msg;
      }

      void
      addMessage(uint16_t id, const IMC::Message* msg)
      {
        m_msgs.emplace(id, msg->clone());

        m_waiting_ids.insert(id);
        m_ids.insert(id);
      }

      std::set<uint16_t>
      getIDs(void)
      {
        return m_ids;
      }

    private:
      struct Msg
      {
        explicit Msg(const IMC::Message* _msg):
          msg(_msg),
          retries(0)
        { }

        ~Msg(void)
        {
          if (msg != nullptr)
            delete msg;
        }

        //! Delete constructors.
        Msg(void) = delete;
        Msg(const Msg& other) = delete;

        //! Message sent.
        const IMC::Message* msg;
        //! Number of retries.
        unsigned retries;
      };

      //! Clear all messages.
      void
      clear(void)
      {
        m_msgs.clear();
        delete m_msg;
      }

      //! Copy Constructor.
      PersistentMessage(const PersistentMessage& other) = delete;
      //! Assignment Operator.
      PersistentMessage&
      operator=(const PersistentMessage& other) = delete;

      //! Messages sent map.
      std::map<uint16_t, Msg> m_msgs;
      //! Original Message.
      const IMC::Message* m_msg;
      //! Set of IDs waiting for confirmation.
      std::set<uint16_t> m_waiting_ids;
      //! Set of all IDs.
      std::set<uint16_t> m_ids;
    };
  }
}