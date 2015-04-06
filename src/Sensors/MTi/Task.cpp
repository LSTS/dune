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

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace MTi
  {
    using DUNE_NAMESPACES;

    //! States of the internal SM.
    enum ParserStates
    {
      // No message is being parsed.
      PS_NONE,
      // Preamble.
      PS_PRE,
      // Bus identifier.
      PS_BID,
      // Message identifier.
      PS_MID,
      // Data size.
      PS_LEN,
      // Data bytes.
      PS_DATA,
      // Message checksum.
      PS_CS
    };

    struct Arguments
    {
      // Serial port device.
      std::string uart_dev;
      // Serial port baud rate.
      unsigned uart_baud;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Message preamble.
      static const uint8_t c_preamble = 0xFA;
      // Maximum data length.
      static const int c_max_data_len = 255;
      // Scratch buffer capacity.
      static const int c_max_bfr_len = 4096;
      // Current SM state.
      ParserStates m_state;
      // Message identifier.
      uint8_t m_mid;
      // Message data length.
      uint8_t m_data_len;
      // Message data index.
      uint8_t m_data_idx;
      // Message data.
      uint8_t m_data[c_max_data_len];
      // Message checksum.
      unsigned int m_csum;
      // Serial port handle.
      SerialPort* m_uart;
      // Scratch buffer.
      uint8_t* m_bfr;
      // Euler angles message.
      IMC::EulerAngles m_euler;
      // Acceleration message.
      IMC::Acceleration m_accel;
      // Angular velocity message.
      IMC::AngularVelocity m_agvel;
      // Temperature message.
      IMC::Temperature m_temp;
      // Task parameters.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_state(PS_NONE),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port used to connect to Xsens MTi");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        m_bfr = new uint8_t[c_max_bfr_len];

        bind<IMC::Pulse>(this);
      }

      ~Task(void)
      {
        delete [] m_bfr;
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
      consume(const IMC::Pulse* msg)
      {
        unsigned retries = 15;
        uint64_t time_start = Clock::getMsec();

        while (retries--)
        {
          if (!Poll::poll(*m_uart, 0.001))
          {
            Scheduler::yield();
            continue;
          }

          int rv = m_uart->read(m_bfr, c_max_bfr_len);

          for (int i = 0; i < rv; ++i)
          {
            if (parse(m_bfr[i]) == 0x32)
            {
              m_euler.setTimeStamp(msg->getTimeStamp());
              m_accel.setTimeStamp(msg->getTimeStamp());
              m_agvel.setTimeStamp(msg->getTimeStamp());
              m_temp.setTimeStamp(msg->getTimeStamp());

              // Get temperature.
              float tmp;
              ByteCopy::fromBE(tmp, m_data);
              m_temp.value = tmp;

              // Get Accelerations.
              ByteCopy::fromBE(tmp, m_data + 4);
              m_accel.x = tmp;
              ByteCopy::fromBE(tmp, m_data + 8);
              m_accel.y = tmp;
              ByteCopy::fromBE(tmp, m_data + 12);
              m_accel.z = tmp;

              // Get Angular Velocity.
              ByteCopy::fromBE(tmp, m_data + 16);
              m_agvel.x = tmp;
              ByteCopy::fromBE(tmp, m_data + 20);
              m_agvel.y = tmp;
              ByteCopy::fromBE(tmp, m_data + 24);
              m_agvel.z = tmp;

              // Get Euler Angles.
              ByteCopy::fromBE(tmp, m_data + 28);
              m_euler.phi = Angles::radians(tmp);
              ByteCopy::fromBE(tmp, m_data + 32);
              m_euler.theta = Angles::radians(tmp);
              ByteCopy::fromBE(tmp, m_data + 36);
              m_euler.psi = Angles::radians(tmp);
              m_euler.psi_magnetic = m_euler.psi;

              dispatch(m_euler, DF_KEEP_TIME);
              dispatch(m_accel, DF_KEEP_TIME);
              dispatch(m_agvel, DF_KEEP_TIME);
              dispatch(m_temp, DF_KEEP_TIME);

              uint64_t time_diff = Clock::getMsec() - time_start;

              if (time_diff > 10)
                war(DTR("took too long to read data: %lu ms"), (unsigned long)time_diff);

              return;
            }
          }
        }

        war(DTR("overrun of %lu ms"), (unsigned long)(Clock::getMsec() - time_start));
      }

      int
      parse(uint8_t byte)
      {
        switch (m_state)
        {
          // Parse preamble.
          case PS_NONE:
            if (byte == c_preamble)
            {
              m_state = PS_BID;
              m_csum = 0;
              m_data_len = 0;
              m_data_idx = 0;
            }
            break;

            // Parse bus identifier.
          case PS_BID:
            if (byte == 0xFF)
            {
              m_csum += byte;
              m_state = PS_MID;
            }
            break;

            // Parse message identifier.
          case PS_MID:
            m_csum += byte;
            m_state = PS_LEN;
            m_mid = byte;
            break;

            // Parse data length.
          case PS_LEN:
            m_csum += byte;
            m_state = byte ? PS_DATA : PS_CS;
            m_data_len = byte;
            break;

            // Parse data.
          case PS_DATA:
            m_csum += byte;
            m_data[m_data_idx++] = byte;
            if (m_data_idx == m_data_len)
              m_state = PS_CS;
            break;

            // Parse checksum.
          case PS_CS:
            m_csum += byte;
            m_state = PS_NONE;
            if (m_csum & 0xFF)
            {
              err("%s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
              return -1;
            }
            else
            {
              return m_mid;
            }
            break;

            // Should never get here.
          default:
            m_state = PS_NONE;
            break;
        }

        return -2;
      }

      void
      sendMessage(uint8_t mid, const uint8_t* data, unsigned int data_len)
      {
        m_bfr[0] = c_preamble;
        m_bfr[1] = 0xFF;
        m_bfr[2] = mid;
        m_bfr[3] = data_len;

        if (data_len > 0)
          std::memcpy(m_bfr + 4, data, data_len);

        // Compute checksum.
        unsigned int sum = m_bfr[1] + m_bfr[2] + m_bfr[3];
        for (unsigned int i = 0; i < data_len; ++i)
          sum += data[i];
        m_bfr[data_len + 4] = (0xFF + 1) - (sum & 0xFF);
        m_uart->write(m_bfr, data_len + 5);
      }

      bool
      sendMessageWithAck(uint8_t mid, const uint8_t* data, unsigned int data_len)
      {
        sendMessage(mid, data, data_len);
        Delay::wait(0.25);

        uint8_t ack = mid + 1;
        int rv = m_uart->read(m_bfr, c_max_bfr_len);

        for (int i = 0; i < rv; ++i)
        {
          int pmid = parse(m_bfr[i]);

          if (pmid >= 0)
          {
            if ((uint8_t)pmid == ack)
              return true;
          }
        }

        return false;
      }

      bool
      sendGoToConfig(void)
      {
        return sendMessageWithAck(0x30, 0, 0);
      }

      bool
      sendGoToMeasurement(void)
      {
        return sendMessageWithAck(0x10, 0, 0);
      }

      bool
      sendSetOutputMode(void)
      {
        uint8_t settings[2] = {0};

        settings[1] = 0x07;

        return sendMessageWithAck(0xD0, settings, 2);
      }

      bool
      sendSetOutputSettings(void)
      {
        uint8_t settings[] = {0x00, 0x00, 0x04, 0x45};
        return sendMessageWithAck(0xD2, settings, sizeof(settings));
      }

      bool
      sendSyncInSettings(void)
      {
        // SyncIn, Trigger Rising Edge, ADC Sampling.
        uint8_t settings[] = {0x00, 0x00, 0x01};
        return sendMessageWithAck(0xD6, settings, sizeof(settings));
      }

      bool
      setup(void)
      {
        // Stop measurement mode and flush pending data.
        sendGoToConfig();
        Delay::wait(0.5);
        m_uart->flushInput();

        if (!sendGoToConfig())
        {
          err(DTR("unable to enter configuration mode"));
          return false;
        }

        if (!sendSetOutputSettings())
        {
          err(DTR("unable to set output settings"));
          return false;
        }

        if (!sendSetOutputMode())
        {
          err(DTR("unable to set output mode"));
          return false;
        }

        if (!sendSyncInSettings())
        {
          err(DTR("unable to set SyncIn settings"));
          return false;
        }

        if (!sendGoToMeasurement())
        {
          err(DTR("unable to enter measurement mode"));
          return false;
        }

        return true;
      }

      void
      onMain(void)
      {
        while (!setup())
          ;

        Delay::wait(2.0);
        m_uart->flushInput();

        while (!stopping())
        {
          waitForMessages(0.5);
        }
      }
    };
  }
}

DUNE_TASK
