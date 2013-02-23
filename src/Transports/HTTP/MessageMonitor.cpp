//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: MessageMonitor.cpp 12667 2013-01-22 02:44:42Z rasm               $:*
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
         << "  'dune_version': '" << DUNE_COMPLETE_VERSION << " - " << DUNE_BUILD_TIME << "',\n"
         << "  'dune_uid': '" << m_uid << "',\n"
         << "  'dune_time_start': '" << std::setprecision(12) << Clock::getSinceEpoch() << "',\n"
         << "  'dune_system': '" << system << "',\n";
      m_meta = os.str();
    }

    MessageMonitor::~MessageMonitor(void)
    {
      ScopedMutex l(m_mutex);

      std::map<unsigned, IMC::Message*>::iterator itr = m_msgs.begin();
      for (; itr != m_msgs.end(); ++itr)
        delete itr->second;
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

      IMC::Message* tmsg = msg->clone();
      unsigned key = tmsg->getId() << 24 | tmsg->getSubId() << 8 | tmsg->getSourceEntity();

      if (m_msgs[key])
        delete m_msgs[key];

      m_msgs[key] = tmsg;
    }
  }
}
