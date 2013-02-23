//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: LogManager.hpp 12667 2013-01-22 02:44:42Z rasm                   $:*
//***************************************************************************

#ifndef TRANSPORTS_HTTP_LOG_MANAGER_HPP_INCLUDED_
#define TRANSPORTS_HTTP_LOG_MANAGER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Concurrency/ScopedRWLock.hpp>

namespace Transports
{
  namespace HTTP
  {
    struct Entry
    {
      //! File's base name.
      DUNE::FileSystem::Path base;
      //! Path to log file.
      DUNE::FileSystem::Path path;
      //! File size.
      uint64_t size;

      Entry(const DUNE::FileSystem::Path& a_path, uint64_t a_size):
        path(a_path),
        size(a_size)
      {
        base = path.basename();
      }
    };

    class LogManager
    {
    public:
      LogManager(const DUNE::FileSystem::Path& base);

      //! Set current log. This log will not be visible in the plain text
      //! and XML documents.
      //! @param name log name.
      void
      current(const std::string& name);

      //! Remove log from list.
      //! @param name log name.
      void
      remove(const std::string& name);

      //! Retrieve plain text document with list of logs.
      //! @return list of logs in plain text format.
      const std::string&
      txt(void)
      {
        return m_text;
      }

      //! Retrieve XML document with list of logs.
      //! @return list of logs in XML format.
      const std::string&
      xml(void)
      {
        return m_xml;
      }

      uint64_t
      uid(void)
      {
        return m_uid;
      }

      //! Retrieve JSON document with list of logs.
      //! @return list of logs in JSON format.
      const std::string&
      toJSON(void)
      {
        return m_json;
      }

      void
      readLock(void)
      {
        m_mutex.lockRead();
      }

      void
      readUnlock(void)
      {
        m_mutex.unlock();
      }

    private:
      // Convenience type definition for a list of log files.
      typedef std::vector<Entry> LogEntries;
      // Convenience type definition for a map of logs.
      typedef std::map<DUNE::FileSystem::Path, LogEntries> LogMap;
      // Base directory of logs.
      DUNE::FileSystem::Path m_base;
      // Name of current log.
      DUNE::FileSystem::Path m_current;
      // Label of current log.
      std::string m_current_label;
      // Map of log directories.
      LogMap m_logs;
      // Brief list of logs (plaintext).
      std::string m_text;
      // Detailed list of logs (XML).
      std::string m_xml;
      // List of logs (JSON).
      std::string m_json;
      // Logs UID.
      uint64_t m_uid;
      // Concurrency mutex.
      DUNE::Concurrency::RWLock m_mutex;

      void
      createMap(void);

      void
      writeDocuments(void);

      void
      insertLog(const DUNE::FileSystem::Path& path);
    };
  }
}

#endif
