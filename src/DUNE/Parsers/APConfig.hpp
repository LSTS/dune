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

#ifndef DUNE_PARSERS_APCONFIG_HPP_INCLUDED_
#define DUNE_PARSERS_APCONFIG_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <stdexcept>
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Casts.hpp>

#include <map>

namespace DUNE
{
  namespace Parsers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM APConfig;

    //! Parser for Ardupilot config files, with space as separator
    //! Note that leading
    //! and trailing whitespaces are removed from values. Character
    //! case in "option" identifiers is discarded. Lines beginning
    //! with "#" or ";" are ignored and may be used to provide
    //! comments.
    class APConfig
    {
    public:
      //! Default constructor.
      APConfig(void)
      { }

      //! Create the parser and parse a configuration file.
      //! @param fname name of the configuration file to parse.
      APConfig(const char* fname);

      //! Parse a configuration file.
      //! @param fname name of the configuration file to parse.
      void
      parseFile(const char* fname);

      //! Update a configuration file.
      //! @param fname name of the configuration file to parse.
      //! @return 1 on success
      int
      update(const char* fname);

      //! Return a copy of the parameters
      const std::map<std::string, float>& getParams(void) const {return m_params;}
    private:
      //! Representation of the configuration file as a map.
      std::map<std::string, float> m_params;
      //! List of parsed files.
      std::vector<std::string> m_files;

    };
  }
}

#endif
