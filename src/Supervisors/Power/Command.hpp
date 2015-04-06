//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SUPERVISORS_POWER_COMMAND_HPP_INCLUDED_
#define SUPERVISORS_POWER_COMMAND_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdlib>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  namespace Power
  {
    using DUNE_NAMESPACES;

    class Command: public Concurrency::Thread
    {
    public:
      Command(const std::string& cmd):
        m_success(false),
        m_cmd(cmd)
      { }

      bool
      success(void)
      {
        ScopedMutex l(m_success_mx);
        return m_success;
      }

      void
      run(void)
      {
        if (std::system(m_cmd.c_str()) == 0)
        {
          ScopedMutex l(m_success_mx);
          m_success = true;
        }
      }

    private:
      Mutex m_success_mx;
      bool m_success;
      std::string m_cmd;
    };
  }
}

#endif
