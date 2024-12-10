//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#ifndef ACTUATORS_BROOMV2_PARSER_HPP_INCLUDED_
#define ACTUATORS_BROOMV2_PARSER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Utils.hpp"

namespace Actuators
{
  namespace Broomv2
  {
    using DUNE_NAMESPACES;

    class Parser
    {
    public:
      //! Constructor.
      //! @param[in] name task name.
      Parser(Hardware::BasicDeviceDriver* task):
        m_task(task)
      {
      }
      
      //! Check if data is valid.
      //! @return true if valid, false otherwise.
      bool
      checkDataIn(const std::string& line)
      {
        size_t pos = line.find_last_of(c_data_term);
        if (pos == line.npos || line[pos + 1] == c_line_term)
        {
          m_task->debug(DTR("message has no checksum"));
          return false;
        }

        uint8_t rcsum = line[pos + 1];
        return rcsum == calcCRC8(line);
      }

      //! Interpret incoming data.
      void
      interpretDataIn(const std::string& line)
      {
        std::vector<std::string> data;
        String::split(line, ",", data);
        if (data.size() < 4)
          return;

        char code = data[1].front();
        switch (code)
        {        
        default:
          break;
        }
      }

    private:
      //! Parent task.
      Hardware::BasicDeviceDriver* m_task;
    };
  }
}

#endif /* ACTUATORS_BROOMV2_PARSER_HPP_INCLUDED_ */
