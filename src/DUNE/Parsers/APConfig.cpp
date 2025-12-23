//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Kristoffer Gryte                                                 *
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
#include <DUNE/Parsers/APConfig.hpp>

namespace DUNE
{
  //! Parses Ardupilot configuration files
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
    getOptionAndValue(const char* line, char* option, float* value)
    {
      //TODO: separation symbols can also be comma
      int rv = std::sscanf(line, " %50s %f ", option, value);
      if (rv != 2)
      {
        return false;
      }

      return true;
    }

    void
    APConfig::parseFile(const char* fname)
    {
      char line[c_max_bfr_size] = {0};
      char option[c_max_bfr_size] = {0};
      float arg = 0.0;
      char tmp[c_max_bfr_size] = {0};
      size_t line_count = 0;
      std::FILE* fd = std::fopen(fname, "r");

      if (fd == 0)
      {
        throw FileOpenError(fname, System::Error::getLastMessage());
      }

      while (std::fscanf(fd, " %1023[^\n] ", line) == 1)
      {
        ++line_count;

        // Ignore comments.
        if (line[0] == '#')
          continue;

        // Option and value.
        if(getOptionAndValue(line, option, &arg))
        {
          //inf("Parsed %s = %f",option, arg);
          String::rtrim(option);
          std::strncpy(tmp, option, c_max_bfr_size);
          m_params[option] = arg;
        }
        // Syntax error.
        else
        {
          //throw SyntaxError(fname, line_count);
          DUNE_WRN("APConfig","SyntaxError in " << fname << "line: " << line_count);
          continue;
        }
      }
      std::fclose(fd);
    }

    int
    APConfig::update(const char* fname)
    {
      try
      {
        parseFile(fname);
      }
      catch (FileOpenError& e)
      {
        DUNE_WRN("APConfig", e.what());
        return 0;
      }
      return 1;
    }


    APConfig::APConfig(const char* fname)
    {
      APConfig::update(fname);
    }
  }
}
