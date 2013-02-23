//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: MessageMonitor.hpp 12667 2013-01-22 02:44:42Z rasm               $:*
//***************************************************************************

#ifndef TRANSPORTS_HTTP_STATE_MONITOR_HPP_INCLUDED_
#define TRANSPORTS_HTTP_STATE_MONITOR_HPP_INCLUDED_

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
      // Software meta information.
      std::string m_meta;
      // Convenience type definition for a map of entity labels.
      typedef std::map<unsigned, std::string> EntityMap;
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
    };
  }
}

#endif
