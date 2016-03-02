//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro_Gonçalves                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace AMC
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      /* data */
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Serial port device.
      SerialPort* m_uart;
      // I/O Multiplexer.
      Poll m_poll;
      //! Scratch buffer.
      uint8_t m_buffer[128];
      //CSUM
      uint8_t m_csum[2];
      //! const string's for test/debug
      std::vector<std::string> test;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("57600")
        .description("Serial port baud rate");

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_poll.add(*m_uart);
        //!@MODE,ID,VALUE/INFO,
        test.push_back("@S,0,100,*");
        test.push_back("@R,0,rpm,*");
        test.push_back("@S,0,1000,*");
        test.push_back("@R,0,rpm,*");
        test.push_back("@S,1,100,*");
        test.push_back("@S,2,100,*");
        test.push_back("@S,3,100,*");
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          m_poll.remove(*m_uart);
          delete m_uart;
          m_uart = NULL;
        }
      }

      //! Read input from arduino.
      void
      checkSerialPort(void)
      {
        if (m_poll.wasTriggered(*m_uart))
        {
          memset(&m_buffer, '\0', sizeof(m_buffer));
          int rv = 0;

          try
          {
            rv = m_uart->read(m_buffer, sizeof(m_buffer));
          }
          catch (std::exception& e)
          {
            err(DTR("read error: %s"), e.what());
            return;
          }

          if (rv < 0)
          {
            err(DTR("unknown read error"));
            return;
          }

          war("SIZE RECEIVED: %d", rv);
          err("DATA RECEIVED: %s", m_buffer);
        }
      }

      uint8_t
      CRC8(unsigned char *data)
      {
        uint8_t csum = 0x00;
        uint8_t t = 0;
        while(data[t] != '*')
        {
          csum ^= data[t];
          t++;
        }
          //(csum | 0x80)
        return csum;
      }

      //! Main loop.
      void
      onMain(void)
      {
        int i = 0;
        int t = 0;
        while (!stopping())
        {

          if (m_poll.poll(0.5))
          {
            checkSerialPort();
          }
          else
          {
            m_csum[0] = CRC8((unsigned char *)test[i].c_str());
            t = m_uart->write(test[i].c_str(), test[i].size());
            m_uart->write(m_csum, 1);
            inf("SEND: %s%c   SIZE: %d", test[i].c_str(), m_csum[0], t + 1);
            
            i++;
            if(i > 3)
              i = 0;

            waitForMessages(1.0);
          }
        }
      }
    };
  }
}

DUNE_TASK
