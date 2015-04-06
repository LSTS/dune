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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "MessageMonitor.hpp"

namespace Transports
{
  namespace HTTP
  {
    using DUNE_NAMESPACES;

    MessageMonitor::MessageMonitor(const std::string& system, uint64_t uid):
      m_uid(uid),
      m_last_msgs_json(0)
    {
      // Initialize meta information.
      std::ostringstream os;
      os << "var data = {\n"
         << "  'dune_version': '" << getFullVersion() << " - " << getCompileDate() << "',\n"
         << "  'dune_uid': '" << m_uid << "',\n"
         << "  'dune_time_start': '" << std::setprecision(12) << Clock::getSinceEpoch() << "',\n"
         << "  'dune_system': '" << system << "',\n";
      m_meta = os.str();
    }

    MessageMonitor::~MessageMonitor(void)
    {
      ScopedMutex l(m_mutex);

      {
        std::map<unsigned, IMC::Message*>::iterator itr = m_msgs.begin();
        for (; itr != m_msgs.end(); ++itr)
          delete itr->second;
      }

      {
        for (PowerChannelMap::iterator itr = m_power_channels.begin(); itr != m_power_channels.end(); ++itr)
          delete itr->second;
      }
    }

    void
    MessageMonitor::setEntities(const std::map<unsigned, std::string>& entities)
    {
      ScopedMutex l(m_mutex);
      m_entities = entities;
    }

    ByteBuffer*
    MessageMonitor::messagesJSON(void)
    {
      ScopedMutex l(m_mutex);

      uint64_t now = Clock::getMsec();

      if ((now - m_last_msgs_json) > 2000)
        m_last_msgs_json = now;
      else
        return &m_msgs_json;

      if (m_msgs.empty())
        return &m_msgs_json;

      std::ostringstream os;
      os << m_meta
         << "  'dune_time_current': '" << std::setprecision(12) << Clock::getSinceEpoch() << "',\n";

      if (m_entities.empty())
      {
        os << "  'dune_entities': { },\n";
      }
      else
      {
        os << "  'dune_entities': {\n";
        EntityMap::iterator itr = m_entities.begin();
        os << itr->first << " : {" << "\"label\": \"" << itr->second << "\"}";
        ++itr;
        for (; itr != m_entities.end(); ++itr)
          os << ",\n" << itr->first << " : {" << "\"label\": \"" << itr->second << "\"}";
        os << "\n},";
      }

      os << "  'dune_messages': [\n";

      std::map<unsigned, IMC::Message*>::iterator itr = m_msgs.begin();
      itr->second->toJSON(os);
      ++itr;

      for (; itr != m_msgs.end(); ++itr)
      {
        os << ",\n";
        itr->second->toJSON(os);
      }

      for (PowerChannelMap::iterator pitr = m_power_channels.begin(); pitr != m_power_channels.end(); ++pitr)
      {
        os << ",\n";
        pitr->second->toJSON(os);
      }

      os << "\n]"
         << "\n};";

      GzipCompressor cmp;
      std::string str = os.str();
      cmp.compress(m_msgs_json, (char*)str.c_str(), (unsigned long)str.size());

      return &m_msgs_json;
    }

    void
    MessageMonitor::updateMessage(const IMC::Message* msg)
    {
      ScopedMutex l(m_mutex);

      if (msg->getId() == DUNE_IMC_POWERCHANNELSTATE)
        updatePowerChannel(static_cast<const IMC::PowerChannelState*>(msg));

      IMC::Message* tmsg = msg->clone();
      unsigned key = tmsg->getId() << 24 | tmsg->getSubId() << 8 | tmsg->getSourceEntity();

      if (m_msgs[key])
        delete m_msgs[key];

      m_msgs[key] = tmsg;
    }

    void
    MessageMonitor::updatePowerChannel(const IMC::PowerChannelState* msg)
    {
      std::map<std::string, IMC::PowerChannelState*>::iterator itr = m_power_channels.find(msg->name);
      if (itr != m_power_channels.end())
        *itr->second = *msg;
      else
        m_power_channels[msg->name] = new IMC::PowerChannelState(*msg);
    }
  }
}
