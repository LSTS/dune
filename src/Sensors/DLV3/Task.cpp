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

// ISO C++ 98 headers.
#include <stdexcept>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace DLV3
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // UART device.
      std::string uart_dev;
      // UART baud rate.
      unsigned uart_baud;
      // True if protocol is binary.
      bool binary;
      // Position entity label.
      std::string elabel_pos;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Maximum line length.
      int m_max_line_len;
      // Serial port device.
      SerialPort* m_uart;
      // Device data.
      IMC::DevDataText m_txt;
      // Device data.
      IMC::DevDataBinary m_bin;
      // Position message.
      IMC::DevDataText m_pos;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Binary", m_args.binary)
        .defaultValue("false")
        .description("Set to true if protocol is binary");

        param("Entity Label - Position", m_args.elabel_pos)
        .description("Entity label of position message");
      }

      void
      onEntityReservation(void)
      {
        int pos_id = reserveEntity(m_args.elabel_pos);
        m_pos.setSourceEntity(pos_id);
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      onResourceInitialization(void)
      {
        m_uart->sendBreak(100);
        Delay::wait(1.0);
        m_uart->writeString("log gprmc ontime 60\r\n");
      }

      void
      onMain(void)
      {
        int no_data = 0;
        std::string line;
        char bfr[1024];

        while (!stopping())
        {
          if (Poll::poll(*m_uart, 1.0))
          {
            no_data = 0;
            int rv = m_uart->read(bfr, 1024);

            if (rv <= 0)
              continue;

            if (m_args.binary)
            {
              m_bin.value.assign(bfr, bfr + rv);
              dispatch(m_bin);
            }
            else
            {
              for (int i = 0; i < rv; ++i)
              {
                line.push_back(bfr[i]);

                if (bfr[i] == '\n')
                {
                  if (line.substr(0, 6).compare("$GPRMC") == 0)
                  {
                    m_pos.value = line;
                    dispatch(m_pos);
                  }
                  else
                  {
                    m_txt.value = line;
                    dispatch(m_txt);
                  }

                  line.clear();
                }
              }
            }
          }
          else
          {
            ++no_data;
          }

          if (no_data == 30)
          {
            inf(DTR("waking up device"));
            onResourceInitialization();
            m_uart->sendBreak(100);
            no_data = 0;
          }
        }
      }
    };
  }
}

DUNE_TASK
