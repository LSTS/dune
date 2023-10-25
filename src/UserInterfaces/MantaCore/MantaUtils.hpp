//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef USERINTERFACES_MANTACORE_MANTAUTILS_HPP_INCLUDED_
#define USERINTERFACES_MANTACORE_MANTAUTILS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "Driver.hpp"

namespace UserInterfaces
{
  namespace MantaCore
  {
    using DUNE_NAMESPACES;

    class MantaUtils
    {
    public:

      //! Power Channel data structure.
      struct PowerChannel
      {
        IMC::PowerChannelState state;
        unsigned id;
        double sched_on;
        double sched_off;

        PowerChannel(void)
        {
          resetSchedules();
        }

        void
        resetSchedules(void)
        {
          sched_on = -1;
          sched_off = -1;
        }
      };

      MantaUtils(DUNE::Tasks::Task *task) :
      m_task(task)
      {}

      ~MantaUtils(void) {}

      std::string
      getIOName(const std::string &name_io)
      {
        size_t pos = name_io.find("://");
        if (pos != std::string::npos)
          return name_io.substr(pos + 3);
        else
          return name_io;
      }

      bool
      getInterfaceIP(const std::string &interfaceName, std::string &ipAddress)
      {
        char command[100];
        std::snprintf(command, sizeof(command), "ifconfig %s 2>/dev/null", interfaceName.c_str());
        FILE *fp = popen(command, "r");
        if (fp == nullptr)
        {
          m_task->inf("Failed to execute ifconfig.");
          return false;
        }

        char line[256];
        bool found = false;
        while (fgets(line, sizeof(line), fp) != nullptr)
        {
          if (std::strstr(line, "inet ") != nullptr)
          {
            char *token = strtok(line, " ");
            while (token != nullptr)
            {
              if (strstr(token, "inet") != nullptr)
              {
                token = strtok(NULL, " ");
                ipAddress = token;
                found = true;
                break;
              }
              token = strtok(NULL, " ");
            }
          }
        }
        pclose(fp);
        return found;
      }

    private:
      //! Parent task.
      DUNE::Tasks::Task *m_task;
    };
  }
}

#endif /* USERINTERFACES_MANTACORE_MANTAUTILS_HPP_INCLUDED_ */