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
#include <string>
#include <cstdio>
#include <cstring>

// DUNE headers.
#include <DUNE/Algorithms/XORChecksum.hpp>
#include <DUNE/Hardware/LUCL/Protocol.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Time/Delay.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Utils/String.hpp>

using DUNE::FileSystem::Path;

namespace DUNE
{
  namespace Hardware
  {
    namespace LUCL
    {
      const char* Protocol::c_error_strs[] =
      {
        DTR_RT("invalid command"),
        DTR_RT("lost synchronization"),
        DTR_RT("parser error"),
        DTR_RT("data overrun"),
        DTR_RT("buffer overflow"),
        DTR_RT("invalid checksum"),
        DTR_RT("parser bug"),
        DTR_RT("invalid command arguments"),
        DTR_RT("unknown error")
      };

      const int Protocol::c_error_last = 8;

      Protocol::Protocol(void):
        m_uart(0),
        m_i2c(0),
        m_i2c_read_pend(false),
        m_open(false)
      {
        reset();
      }

      Protocol::~Protocol(void)
      {
        close();
      }

      void
      Protocol::setUART(const std::string& uart_dev)
      {
        m_uart_dev = uart_dev;
      }

      void
      Protocol::setI2C(const std::string& i2c_dev, uint8_t addr)
      {
        m_i2c_dev = i2c_dev;
        m_i2c_addr = addr;
      }

      void
      Protocol::setName(const std::string& name)
      {
        m_name_up = name;
        Utils::String::toUpperCase(m_name_up);
        m_name_lo = name;
        Utils::String::toLowerCase(m_name_lo);
      }

      void
      Protocol::open(int baud)
      {
        if (!m_uart_dev.empty())
        {
          if (!baud || !testBaudRate(m_uart_dev, baud))
            baud = detectBaudRate(m_uart_dev);

          if (baud > 0)
          {
            DUNE_DBG("LUCL Protocol", "baud rate is " << baud);
            if (m_uart)
              delete m_uart;
            m_uart = new SerialPort(m_uart_dev, baud);
            m_open = true;
          }
          else
          {
            DUNE_DBG("LUCL Protocol", "failed to detect baud rate, using default");
            if (m_uart)
              delete m_uart;
            m_uart = new SerialPort(m_uart_dev, c_baud_def);
            m_open = true;
          }

          return;
        }

        if (!m_i2c_dev.empty())
        {
          if (m_i2c)
            delete m_i2c;

          m_i2c = new I2C(m_i2c_dev);
          m_i2c->connect(m_i2c_addr);
          m_open = true;
          return;
        }

        throw std::runtime_error("no UART or I2C device was set");
      }

      bool
      Protocol::isOpen(void)
      {
        return m_open;
      }

      void
      Protocol::close(void)
      {
        if (m_uart)
        {
          delete m_uart;
          m_uart = 0;
        }

        if (m_i2c)
        {
          delete m_i2c;
          m_i2c = 0;
        }

        m_open = false;
      }

      unsigned
      Protocol::read(uint8_t* bfr, unsigned bfr_len)
      {
        if (m_i2c)
        {
          try
          {
            if (m_i2c_read_pend)
            {
              m_i2c_read_pend = false;
              return m_i2c->read(bfr, bfr_len);
            }
            else
              return 0;
          }
          catch (...)
          { }
        }

        if (m_uart)
        {
          int rv = m_uart->read(bfr, bfr_len);
          if (rv <= 0)
            rv = 0;
          return rv;
        }

        return 0;
      }

      unsigned
      Protocol::write(const uint8_t* bfr, unsigned bfr_len)
      {
        if (m_i2c)
        {
          try
          {
            unsigned rv = m_i2c->write(bfr, bfr_len);
            m_i2c_read_pend = true;
            return rv;
          }
          catch (...)
          { }
        }

        if (m_uart)
          return m_uart->write(bfr, bfr_len);

        return 0;
      }

      void
      Protocol::sendCommand(uint8_t cmd, const uint8_t* data, int data_size)
      {
        if (data_size > c_data_max)
          throw std::runtime_error("maximum data size is 64 bytes");

        using Algorithms::XORChecksum;

        int size = 3 + data_size + 1;
        uint8_t msg[32] = {c_sync, (uint8_t)(data_size + 1), cmd};

        std::memcpy(msg + 3, data, data_size);
        msg[size - 1] = XORChecksum::compute(data, data_size, c_sync ^ (data_size + 1) ^ cmd) | c_csum_msk;

        write(msg, size);
      }

      void
      Protocol::requestVersion(void)
      {
        sendCommand(c_cmd_info);
      }

      void
      Protocol::requestReset(void)
      {
        sendCommand(c_cmd_reset);
      }

      void
      Protocol::requestBootJump(void)
      {
        sendCommand(c_cmd_bldr);
      }

      void
      Protocol::requestName(void)
      {
        sendCommand(c_cmd_name);
      }

      int
      Protocol::requestBaud(const std::string& device)
      {
        return detectBaudRate(device);
      }

      const char*
      Protocol::getErrorString(uint8_t error)
      {
        int idx = error - 0xE0;

        if (idx < 0 || idx > c_error_last)
          idx = c_error_last;

        return DTR(c_error_strs[idx]);
      }

      void
      Protocol::reset(void)
      {
        m_sm_state = STA_NONE;
        m_sm_size = 0;
        m_sm_cmd = 0;
        m_sm_data_idx = 0;
        m_sm_csum = 0;
      }

      CommandType
      Protocol::consumeData(Command& cmd)
      {
        cmd.type = CommandTypeNone;

        unsigned rv = read(m_bfr, c_bfr_len);

        for (unsigned i = 0; i < rv; ++i)
          m_queue.push(m_bfr[i]);

        while (!m_queue.empty())
        {
          bool interpret = false;
          uint8_t byte = m_queue.front();
          m_queue.pop();

          switch (m_sm_state)
          {
            case STA_NONE:
              if (byte == c_sync)
              {
                m_sm_state = STA_SIZE;
                m_sm_csum = byte;
              }
              else
                continue;
              break;

            case STA_SIZE:
              m_sm_size = byte;
              m_sm_csum ^= byte;
              m_sm_state = STA_CMD;
              break;

            case STA_CMD:
              m_sm_cmd = byte;
              m_sm_csum ^= byte;
              m_sm_state = STA_DATA;
              break;

            case STA_DATA:
              if (m_sm_data_idx == c_data_max - 1)
              {
                reset();
                break;
              }
              m_sm_data[m_sm_data_idx++] = byte;
              if (m_sm_data_idx == m_sm_size)
              {
                if ((m_sm_csum | c_csum_msk) == m_sm_data[m_sm_data_idx - 1])
                  interpret = true;
                else
                {
                  cmd.type = CommandTypeInvalidChecksum;
                }
              }
              else
                m_sm_csum ^= byte;
              break;

            default:
              continue;
              break;
          }

          if (interpret)
          {
            if ((m_sm_cmd >> 4) == 0x0E)
            {
              cmd.type = CommandTypeError;
              cmd.error.code = m_sm_cmd;
            }
            else if (m_sm_cmd == c_cmd_name)
            {
              cmd.type = CommandTypeName;
              std::memcpy(cmd.name.data, m_sm_data, m_sm_size - 1);
              cmd.name.data[m_sm_size - 1] = 0;
            }
            else if (m_sm_cmd == c_cmd_info)
            {
              cmd.type = CommandTypeVersion;

              if (m_sm_size == 4)
              {
                cmd.version.major = m_sm_data[0];
                cmd.version.minor = m_sm_data[1];
                cmd.version.patch = m_sm_data[2];
              }
              else if (m_sm_size == 3)
              {
                cmd.version.major = m_sm_data[0];
                cmd.version.minor = m_sm_data[1];
                cmd.version.patch = 0;
              }
              else if (m_sm_size == 2)
              {
                cmd.version.major = 0x07 & (m_sm_data[0] >> 5);
                cmd.version.minor = 0x07 & (m_sm_data[0] >> 2);
                cmd.version.patch = 0x03 & (m_sm_data[0] >> 0);
              }
              else
              {
                cmd.type = CommandTypeInvalidVersion;
              }
            }
            else if (m_sm_cmd == c_cmd_reset)
            {
              cmd.type = CommandTypeReset;
            }
            else if (m_sm_cmd == c_cmd_bldr)
            {
              cmd.type = CommandTypeBootJump;
            }
            else
            {
              cmd.type = CommandTypeNormal;
              cmd.command.code = m_sm_cmd;
              cmd.command.size = m_sm_size - 1;
              std::memcpy(cmd.command.data, m_sm_data, m_sm_size);
            }

            reset();
          }
        }

        return cmd.type;
      }

      bool
      Protocol::testBaudRate(const std::string& device, int baudrate)
      {
        uint8_t byte = 0x00;

        DUNE_DBG("LUCL Protocol", "trying " << baudrate << " baud rate");
        SerialPort port(device, baudrate);

        // Try to cleanup device's state machine parser.
        for (unsigned i = 0; i < 10; ++i)
          port.write(&byte, 1);

        // Wait for device to settle.
        Time::Delay::wait(0.1);
        port.flushInput();

        // Write to the device and check sync number.
        port.write(&byte, 1);
        Time::Delay::wait(0.1);
        port.read(&byte, 1);

        port.flushInput();

        return (byte == c_sync);
      }

      int
      Protocol::detectBaudRate(const std::string& device)
      {
        int bauds[] = {115200, 57600, 38400, 19200, 0};
        int* baud_p = bauds;

        while (*baud_p != 0)
        {
          try
          {
            if (testBaudRate(device, *baud_p))
              return *baud_p;
          }
          catch (...)
          {
            return -1;
          }

          ++baud_p;
        }

        return -1;
      }

      bool
      Protocol::getFirmwareInfo(const std::string& file, std::string& name, unsigned& ver, unsigned& rev, unsigned& pat)
      {
        char bfr[16] = {0};
        Path path = Path(file).basename();

        int rv = std::sscanf(path.c_str(), "%16[^-]-firmware-%u.%u.%u.hex",
                             bfr, &ver, &rev, &pat);

        name = bfr;

        return rv == 4;
      }

      std::string
      Protocol::searchNewFirmware(const Path& path, unsigned ver, unsigned rev, unsigned pat, bool ver_fixed)
      {
        if (m_name_lo.empty())
          throw std::runtime_error("device name not set");

        std::vector<Path> files;
        path.contents(files);

        std::string fname;
        unsigned fver = 0;
        unsigned frev = 0;
        unsigned fpat = 0;

        for (unsigned i = 0; i < files.size(); ++i)
        {
          if (getFirmwareInfo(files[i].str(), fname, fver, frev, fpat))
          {
            if (fname != m_name_lo)
              continue;

            if (!ver_fixed)
            {
              if (ver < fver)
                return files[i].str();
            }

            if (ver == fver && rev < frev)
              return files[i].str();

            if (ver == fver && rev == frev && pat < fpat)
              return files[i].str();
          }
        }

        return "";
      }
    }
  }
}
