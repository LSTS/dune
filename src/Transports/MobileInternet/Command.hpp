//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef TRANSPORTS_MOBILE_INTERNET_COMMAND_HPP_INCLUDED_
#define TRANSPORTS_MOBILE_INTERNET_COMMAND_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdlib>
#include <string>

// POSIX headers.
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace MobileInternet
  {
    using DUNE_NAMESPACES;

    class Command
    {
    public:
      Command(const Path& script, const std::string& arg):
        m_pid(-1),
        m_script(script),
        m_arg(arg)
      {
      }

      void
      stop(void)
      {
        if (m_pid != -1)
          kill(m_pid, SIGKILL);
      }

      void
      start(void)
      {
        m_pid = fork();
        if (m_pid == 0)
        {
          close(STDIN_FILENO);
          close(STDOUT_FILENO);
          close(STDERR_FILENO);
          execl("/bin/sh", "/bin/sh", m_script.c_str(), m_arg.c_str(), NULL);
        }
      }

      bool
      ended(int& status)
      {
        return waitpid(m_pid, &status, WNOHANG) > 0;
      }

      void
      wait(void)
      {
        int status = 0;
        waitpid(m_pid, &status, 0);
      }

    private:
      pid_t m_pid;
      Path m_script;
      std::string m_arg;
    };
  }
}

#endif
