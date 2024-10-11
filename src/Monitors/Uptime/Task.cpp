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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! Task to periodically read CPU uptime.
  //!
  //! @author Bernardo Gabriel
  namespace Uptime
  {
    using DUNE_NAMESPACES;
    
    static const char c_file_name[13] = "/proc/uptime";

    struct Task: public Tasks::Periodic
    {
      char m_message[64];

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      { }

      void
      checkUptime()
      {
        std::ifstream f(c_file_name);

        if (f.is_open())
        {
          double sec;
          f >> sec;
          f.close();

          int days = static_cast<int>(sec / 86400);
          sec -= days * 86400;
          int hours = static_cast<int>(sec / 3600);
          sec -= hours * 3600;
          int mins = static_cast<int>(sec / 60);
          sec -= mins * 60;

          std::memset(&m_message, '\0', sizeof(m_message));
          sprintf(m_message, "active - %2dd:%02dh:%02dm:%02.0fs", days, hours, mins, sec);
          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_message)));          
        }
        else
          throw FileReadError(c_file_name);
      }

      void
      task()
      {
        try
        {
          checkUptime();
        }
        catch(FileReadError& e)
        {
          spew("%s", DTR(e.what()));
        }
      }
    };
  }
}

DUNE_TASK
