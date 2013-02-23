//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Command.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
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
        m_done(false),
        m_cmd(cmd)
      { }

      bool
      isDone(void)
      {
        ScopedMutex l(m_done_mx);
        return m_done;
      }

      void
      run(void)
      {
        while (!isStopping())
        {
          int rv = std::system(m_cmd.c_str());
          if (rv == 0)
          {
            ScopedMutex l(m_done_mx);
            m_done = true;
            break;
          }
        }
      }

    private:
      Mutex m_done_mx;
      bool m_done;
      std::string m_cmd;
    };
  }
}

#endif
