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

#ifndef ACTUATORS_SCRTV4_LISTENER_HPP_INCLUDED_
#define ACTUATORS_SCRTV4_LISTENER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace SCRTv4
  {
    using DUNE_NAMESPACES;

    class Listener: public Concurrency::Thread
    {
    public:
      Listener(SerialPort* uart):
        m_uart(uart)
      {
      }

      ~Listener(void)
      {
      }

      LUCL::Command*
      pop(void)
      {
        return m_queue.pop();
      }

      void
      run(void)
      {
        uint8_t bfr[128];
        LUCL::ProtocolParser parser;
        LUCL::Command cmd;

        while (!isStopping())
        {
          if (!Poll::poll(*m_uart, 1.0))
            continue;

          int rv = m_uart->read(bfr, sizeof(bfr));
          for (int i = 0; i < rv; ++i)
          {
            LUCL::CommandType type = parser.parse(cmd, bfr[i]);
            if (type == LUCL::CommandTypeNone)
              continue;

            m_queue.push(new LUCL::Command(cmd));
          }
        }
      }

    private:
      SerialPort* m_uart;
      TSQueue<LUCL::Command*> m_queue;
    };
  }
}

#endif
