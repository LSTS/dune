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

#ifndef SENSORS_AIR_OS_LISTENER_HPP_INCLUDED_
#define SENSORS_AIR_OS_LISTENER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace AirOS
  {
    using DUNE_NAMESPACES;

    class Listener: public Concurrency::Thread
    {
    public:
      Listener(const Address& addr, unsigned port):
        m_addr(addr),
        m_port(port)
      { }

      bool
      waitForLine(double tout)
      {
        ScopedCondition c(m_cond);

        if (!m_lines.empty())
          return true;

        return m_cond.wait(tout);
      }

      void
      send(const std::string& cmd)
      {
        std::cerr << "OUT: " << sanitize(cmd) << std::endl;
        m_sock.write(cmd.c_str(), cmd.size());
      }

      bool
      sendCommand(const std::string& cmd)
      {
        flush();

        send(cmd);

        // Read prompt.
        if (!waitForLine(1.0))
          return false;
        std::cerr << "Prompt: " << sanitize(getLine()) << std::endl;

        return true;
      }

      void
      flush(void)
      {
        ScopedCondition c(m_cond);
        while (!m_lines.empty())
          m_lines.pop();
      }

      std::string
      getLine(void)
      {
        ScopedCondition c(m_cond);

        std::string line(m_lines.front());
        m_lines.pop();

        return line;
      }

    private:
      // Destination address.
      Address m_addr;
      // Destination port.
      unsigned m_port;
      // Queue of lines.
      std::queue<std::string> m_lines;
      // TCP Socket.
      TCPSocket m_sock;
      // Current line.
      std::string m_line;
      // Condition.
      Condition m_cond;

      void
      run(void)
      {
        IOMultiplexing iom;
        char bfr[256];
        m_sock.addToPoll(iom);

        try
        {
          m_sock.connect(m_addr, m_port);
        }
        catch (...)
        {
          return;
        }

        // Discard Telnet control bytes.
        m_sock.read(bfr, 15);

        while (!isStopping())
        {
          try
          {
            if (!iom.poll(1.0))
              continue;

            int rv = m_sock.read(bfr, sizeof(bfr));
            if (rv <= 0)
              continue;

            for (int i = 0; i < rv; ++i)
            {
              ScopedCondition c(m_cond);
              m_line.push_back(bfr[i]);

              if (bfr[i] == '\n')
              {
                std::cerr << "INP: " << sanitize(m_line) << std::endl;

                m_lines.push(m_line);
                m_line.clear();
                m_cond.broadcast();
              }
            }
          }
          catch (...)
          {
          }
        }
      }
    };
  }
}

#endif
