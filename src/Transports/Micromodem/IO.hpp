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

#ifndef TRANSPORTS_MICROMODEM_IO_HPP_INCLUDED_
#define TRANSPORTS_MICROMODEM_IO_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Micromodem
  {
    using DUNE_NAMESPACES;

    class IO: public Concurrency::Thread
    {
    public:
      IO(Tasks::Task& task, const std::string uart_dev, unsigned uart_baud):
        m_task(task)
      {
        m_uart = new SerialPort(uart_dev, uart_baud);
        m_uart->setCanonicalInput(true);
      }

      void
      write(const std::string& data)
      {
        unsigned csum = Algorithms::XORChecksum::compute((uint8_t*)data.c_str(), data.size());
        std::string cmd = String::str("$%s*%02X\r\n", data.c_str(), csum);
        m_task.debug("writing: %s", sanitize(cmd).c_str());
        m_uart->write(cmd.c_str(), cmd.size());
      }

    private:
      //! Parent task.
      Tasks::Task& m_task;
      //! Serial port handle.
      SerialPort* m_uart;

      void
      run(void)
      {
        char bfr[256];
        IMC::DevDataText data;

        while (!isStopping())
        {
          if (m_uart->hasNewData(1.0) != IOMultiplexing::PRES_OK)
            continue;

          int rv = m_uart->readString(bfr, sizeof(bfr));
          if (rv <= 0)
            continue;

          m_task.spew("read: %s", sanitize(bfr).c_str());

          if (bfr[0] != '$')
            continue;

          if (bfr[rv - 5] != '*')
            continue;

          unsigned rcsum = 0;
          if (std::sscanf(&bfr[rv - 4], "%02X", &rcsum) != 1)
            continue;

          unsigned ccsum = Algorithms::XORChecksum::compute((uint8_t*)bfr + 1, rv - 6);
          if (rcsum != ccsum)
            continue;

          data.value.assign(bfr + 1, rv - 6);
          m_task.dispatch(data, DF_LOOP_BACK);
        }
      }
    };
  }
}

#endif
