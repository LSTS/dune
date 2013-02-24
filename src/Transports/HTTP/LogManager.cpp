//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <algorithm>
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "LogManager.hpp"

namespace Transports
{
  namespace HTTP
  {
    using DUNE_NAMESPACES;

    LogManager::LogManager(const Path& base):
      m_base(base),
      m_current(base)
    {
      createMap();
      writeDocuments();
    }

    void
    LogManager::current(const std::string& name)
    {
      ScopedRWLock l(m_mutex, true);

      if (name == m_current_label)
        return;

      if (m_current != m_base)
      {
        insertLog(m_current);
        writeDocuments();
      }

      m_current = m_base / name;
      m_current_label = name;
    }

    void
    LogManager::remove(const std::string& name)
    {
      ScopedRWLock l(m_mutex, true);
      Path rpath = name;
      Path apath = m_base / rpath;
      bool is_file = apath.isFile();

      m_uid = Clock::getNsec();

      // Remove from file system.
      apath.remove(Path::MODE_RECURSIVE);

      // Remove from log map.
      if (is_file)
      {
        Path prefix = rpath.dirname(false);
        LogMap::iterator mitr = m_logs.find(prefix);
        if (mitr == m_logs.end())
          return;

        LogEntries& e = mitr->second;
        LogEntries::iterator node = e.end();
        for (LogEntries::iterator eitr = e.begin(); eitr != e.end(); ++eitr)
        {
          if (eitr->path == rpath)
            node = eitr;
        }

        if (node != e.end())
          e.erase(node);
      }
      else
      {
        m_logs.erase(name);
      }

      writeDocuments();
    }

    void
    LogManager::insertLog(const Path& path)
    {
      if (!path.isDirectory())
        return;

      std::string suffix = m_base.suffix(path);
      std::vector<Path> files;

      m_logs[suffix] = LogEntries();
      LogEntries& e = m_logs[suffix];

      path.contents(files);
      std::sort(files.begin(), files.end());

      for (unsigned i = 0; i < files.size(); ++i)
      {
        if (files[i].isDirectory())
        {
          Directory subdir(files[i]);
          const char* subfile = NULL;
          while ((subfile = subdir.readEntry(Directory::RD_FULL_NAME)))
          {
            Path subpath(subfile);
            e.push_back(Entry(m_base.suffix(subpath), subpath.size()));
          }
        }
        else
        {
          e.push_back(Entry(m_base.suffix(files[i]), files[i].size()));
        }
      }
    }

    void
    LogManager::createMap(void)
    {
      std::vector<Path> dirs;
      m_base.contents(dirs, 1, 1);

      for (unsigned i = 0; i < dirs.size(); ++i)
      {
        if (dirs[i] != m_current)
          insertLog(dirs[i]);
      }
    }

    void
    LogManager::writeDocuments(void)
    {
      m_uid = Clock::getNsec();

      std::ostringstream os;
      std::ostringstream os_xml;
      std::ostringstream os_json;

      os_xml << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << "\n"
             << "<?xml-stylesheet type=\"text/xsl\" href=\"/xsl/logs.xsl\"?>" << "\n"
             << "<logs>" << "\n";

      os_json << "var dune_logs = {\n";

      LogMap::reverse_iterator itr = m_logs.rbegin();

      for (; itr != m_logs.rend(); ++itr)
      {
        os << itr->first << "\n";
        os_json << "'" << itr->first << "': [\n";

        for (unsigned i = 0; i < itr->second.size(); ++i)
        {
          os_json << "{\n"
                  << "'file': '" << itr->second[i].base << "',\n"
                  << "'size': '" << itr->second[i].size << "'\n"
                  << "},\n";

          os_xml << "<log link=\"download/" << itr->second[i].path << "\""
                 << " name=\"" << itr->second[i].path << "\""
                 << " size=\"" << itr->second[i].size << "\""
                 << "/>\n";
        }

        os_json << "],\n";
      }

      os_json << "};\n";
      os_xml << "</logs>" << "\n";

      m_text = os.str();
      m_xml = os_xml.str();
      m_json = os_json.str();
    }
  }
}
