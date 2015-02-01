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

#ifndef TRANSPORTS_HTTP_MESSAGE_MONITOR_HPP_INCLUDED_
#define TRANSPORTS_HTTP_MESSAGE_MONITOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace HTTP
  {
    class MessageMonitor
    {
    public:
      MessageMonitor(const std::string& system, uint64_t uid);

      ~MessageMonitor(void);

      void
      setEntities(const std::map<unsigned, std::string>& entities);

      DUNE::Utils::ByteBuffer*
      messagesJSON(void);

      void
      updateMessage(const DUNE::IMC::Message* msg);

      void
      readLock(void)
      {
        m_mutex.lock();
      }

      void
      readUnlock(void)
      {
        m_mutex.unlock();
      }

    private:
      //! Convenience type definition for a map of power channels.
      typedef std::map<std::string, DUNE::IMC::PowerChannelState*> PowerChannelMap;
      // Convenience type definition for a map of entity labels.
      typedef std::map<unsigned, std::string> EntityMap;
      // Software meta information.
      std::string m_meta;
      // Table of messages.
      std::map<unsigned, DUNE::IMC::Message*> m_msgs;
      // Entity map.
      EntityMap m_entities;
      // Concurrency mutex.
      DUNE::Concurrency::Mutex m_mutex;
      // DUNE's UID.
      uint64_t m_uid;
      // JSON messages.
      DUNE::Utils::ByteBuffer m_msgs_json;
      // Last JSON messages refresh.
      uint64_t m_last_msgs_json;
      //! Power channels.
      PowerChannelMap m_power_channels;

      void
      updatePowerChannel(const DUNE::IMC::PowerChannelState* msg);
    };
  }
}

#endif
