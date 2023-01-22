//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
#include <map>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <algorithm>

// DUNE headers.
#include <DUNE/Version.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Parsers/Exceptions.hpp>
#include <DUNE/Parsers/Config.hpp>

namespace DUNE
{
  namespace Parsers
  {
    using FileSystem::Path;
    using Utils::String;

    //! Maximum buffer size.
    static const size_t c_max_bfr_size = 1024;

    //! Retrieve option and respective value from a line.
    //! @param[in] line line.
    //! @param[out] option option string.
    //! @param[out] value option value.
    //! @return true if line is an option assignment, false otherwise.
    static bool
    getOptionAndValue(const char* line, char* option, char* value)
    {
      char equal[2] = {0};
      int rv = std::sscanf(line, " %[^=] %1[=] %[^;|#] ", option, equal, value);
      if (rv < 2 || rv > 3)
        return false;

      if (rv == 2)
        value[0] = '\0';

      return true;
    }

    Config::Config(const char* fname)
    {
      parseFile(fname);
    }

    void
    Config::parseFile(const char* fname)
    {
      Concurrency::ScopedRWLock(m_data_lock, false);

      char line[c_max_bfr_size] = {0};
      char section[c_max_bfr_size] = {0};
      char option[c_max_bfr_size] = {0};
      char arg[c_max_bfr_size] = {0};
      char tmp[c_max_bfr_size] = {0};
      char isec[c_max_bfr_size] = {0};
      char iopt[c_max_bfr_size] = {0};
      size_t line_count = 0;
      size_t section_count = 0;
      std::FILE* fd = std::fopen(fname, "r");

      if (fd == 0)
        throw FileOpenError(fname, System::Error::getLastMessage());

      while (std::fscanf(fd, " %1023[^\n] ", line) == 1)
      {
        ++line_count;

        // Ignore comments.
        if (line[0] == ';' || line[0] == '#')
          continue;

        // Section name.
        if (std::sscanf(line, "[%[^]]] ", section) == 1)
        {
          String::rightTrimInPlace(section);

          if (std::strncmp(section, "Include ", 8) == 0)
          {
            Path path = Path(fname).dirname() / String::trim(section + 8);
            try
            {
              parseFile(path.c_str());
            }
            catch (FileOpenError& e)
            {
              DUNE_WRN("Config", e.what());
            }
          }
          else if (std::strncmp(section, "Require ", 8) == 0)
          {
            Path path = Path(fname).dirname() / String::trim(section + 8);
            parseFile(path.c_str());
          }

          ++section_count;
        }
        // Option and value.
        else if (getOptionAndValue(line, option, arg))
        {
          if (section_count == 0)
            throw SyntaxError(fname, line_count);

          String::rightTrimInPlace(option);
          String::rightTrimInPlace(arg);

          bool append = false;
          if (String::endsWith(String::str(option), "+"))
          {
            String::resize(option, -1);
            // append if a previous value already exists
            append = m_data[section].find(option) != m_data[section].end();
          }

          std::strncpy(tmp, option, c_max_bfr_size);
          if (append)
          {
            m_data[section][option] += ", ";
            m_data[section][option] += arg;
          }
          else
            m_data[section][option] = arg;

          if (std::strlen(arg) < 4)
            continue;

          if (std::sscanf(arg, "$(%[^,], %[^)]", isec, iopt) != 2)
            continue;

          Sections::iterator sitr = m_data.find(isec);
          if (sitr == m_data.end())
            throw InvalidReference(arg);

          std::map<std::string, std::string>::iterator oitr = sitr->second.find(iopt);
          if (oitr == sitr->second.end())
            throw InvalidReference(arg);

          m_data[section][option] = m_data[isec][iopt];
        }
        // Multiline argument.
        else if (std::sscanf(line, " %[^;|#] ", arg) == 1)
        {
          if (section_count == 0)
            throw SyntaxError(fname, line_count);

          if (String::endsWith(String::str(option), "+"))
            String::resize(option, -1);

          String::rightTrimInPlace(arg);
          m_data[section][tmp] += " ";
          m_data[section][tmp] += arg;
        }
        // Syntax error.
        else
        {
          throw SyntaxError(fname, line_count);
        }
      }

      std::fclose(fd);

      m_files.push_back(fname);
    }

    void
    Config::writeToFile(const char* file)
    {
      std::ofstream os(file);
      os << *this;
    }

    std::vector<std::string>
    Config::sections(void)
    {
      Concurrency::ScopedRWLock(m_data_lock, false);

      std::vector<std::string> vec;
      for (Sections::iterator itr = m_data.begin(); itr != m_data.end(); ++itr)
        vec.push_back(itr->first);
      return vec;
    }

    std::vector<std::string>
    Config::options(const std::string& section)
    {
      Concurrency::ScopedRWLock(m_data_lock, false);

      Sections::const_iterator sitr = m_data.find(section);

      if (sitr == m_data.end())
        return std::vector<std::string>();

      std::map<std::string, std::string>::const_iterator itr = sitr->second.begin();
      std::map<std::string, std::string>::const_iterator end = sitr->second.end();

      std::vector<std::string> opts;
      for (; itr != end; ++itr)
        opts.push_back(itr->first);
      return opts;
    }

    std::ostream&
    operator<<(std::ostream& os, const Config& cfg)
    {
      Concurrency::ScopedRWLock(cfg.m_data_lock, false);

      Config::Sections::const_iterator sections;
      Config::Section::const_iterator labels;
      std::string banner = String::str("Generated by DUNE v%s", getFullVersion());

      os << std::setfill(';')
         << std::setw(74) << ";" << std::endl
         << String::str("; %-71s;", banner.c_str()) << std::endl
         << std::setw(74) << ";" << std::endl;
      for (sections = cfg.m_data.begin(); sections != cfg.m_data.end(); ++sections)
      {
        os << "[" << (*sections).first << "]" << std::endl;

        for (labels = (*sections).second.begin(); labels != (*sections).second.end(); ++labels)
        {
          if ((*labels).second != "")
            os << (*labels).first << " = " << (*labels).second << std::endl;
        }

        os << std::endl;
      }

      return os;
    }
  }
}
