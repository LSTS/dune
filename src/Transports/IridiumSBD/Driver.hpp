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

#ifndef TRANSPORTS_IRIDIUM_SBD_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_IRIDIUM_SBD_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <sstream>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Exceptions.hpp"

namespace Transports
{
  namespace IridiumSBD
  {
    using DUNE_NAMESPACES;

    //! Maximum number of revision lines.
    static const unsigned c_max_rev_lines = 10;

    class Driver
    {
    public:
      Driver(Tasks::Task* task, SerialPort* uart):
        m_task(task),
        m_uart(uart),
        m_timeout(2.5)
      {
        setEcho(false);
      }

      ~Driver(void)
      { }

      std::string
      getManufacturer(void)
      {
        return readValue("+CGMI");
      }

      std::string
      getModel(void)
      {
        return readValue("+CGMM");
      }

      std::string
      getRevision(void)
      {
        sendAT("+CGMR");
        std::vector<std::string> rev;

        for (unsigned i = 0; i < c_max_rev_lines; ++i)
        {
          std::string line = readLine();
          if (line == "OK")
            break;
          rev.push_back(line);
        }

        return String::join(rev.begin(), rev.end(), " / ");
      }

      std::string
      getIMEI(void)
      {
        return readValue("+CGSN");
      }

      unsigned
      getRSSI(void)
      {
        std::string value = readValue("+CSQ");
        std::cerr << "value: " << value << std::endl;

        return 0;
      }

      void
      writeSBD(const uint8_t* data, unsigned data_size)
      {
        if ((data_size < 1) || (data_size > 340))
          throw SBDInvalidSize(data_size);

        // Send command.
        sendAT(String::str("+SBDWB=%u", data_size));
        readReady();

        // Send data.
        sendRaw(data, data_size);

        // Send checksum.
        uint8_t csum[2] = {0};
        computeChecksum(data, data_size, csum);
        sendRaw(csum, sizeof(csum));

        // Read response.
        std::string line = readLine();
        if (line != "0")
          throw SBDInvalidWrite(line);

        readOK();
      }

      unsigned
      readSBD(uint8_t* data, unsigned data_size)
      {
        Counter<double> timer(m_timeout);
        uint8_t bfr[2] = {0};
        uint8_t ccsum[2] = {0};

        sendAT("+SBDRB");

        // Read length.
        readRaw(timer, bfr, 2);
        unsigned length = (bfr[0] << 8) | bfr[1];

        // Read data.
        if (length > data_size)
          throw BufferTooSmall(data_size, length);

        if (length > 0)
        {
          readRaw(timer, data, length);
          computeChecksum(data, length, ccsum);
        }

        // Read and validate.
        readRaw(timer, bfr, 2);
        if ((bfr[0] != ccsum[0]) || (bfr[1] != ccsum[1]))
          throw InvalidChecksum(bfr, ccsum);

        readOK();

        return length;
      }

      void
      setRadioActivity(bool value)
      {
        sendAT(value ? "*R1" : "*R0");
        readOK();
      }

      void
      setEcho(bool value)
      {
        sendAT(value ? "E1" : "E0");
        readOK();
      }

    private:
      //! Parent task.
      Tasks::Task* m_task;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Read timeout.
      double m_timeout;
      //! Read buffer.
      char m_buffer[512];
      //! Character queue.
      std::queue<char> m_queue;
      //! Line buffer.
      std::string m_line;
      //! Last command.
      std::string m_last_cmd;

      void
      computeChecksum(const uint8_t* data, unsigned data_size, uint8_t* bfr) const
      {
        uint16_t csum = 0;
        for (unsigned i = 0; i < data_size; ++i)
          csum += data[i];

        bfr[0] = csum >> 8;
        bfr[1] = csum & 0xff;
      }

      std::string
      readValue(const std::string& cmd)
      {
        sendAT(cmd);
        std::string str = readLine();
        readOK();
        return str;
      }

      void
      sendAT(const std::string& str)
      {
        std::string cmd("AT");
        cmd.append(str);
        m_last_cmd = cmd;
        cmd.append("\r\n");
        m_task->debug("W %s", m_last_cmd.c_str());
        sendRaw((const uint8_t*)cmd.c_str(), cmd.size());
      }

      void
      sendRaw(const uint8_t* data, unsigned data_size)
      {
        m_uart->write(data, data_size);
      }

      void
      setTimeout(double timeout)
      {
        m_timeout = timeout;
      }

      double
      getTimeout(void) const
      {
        return m_timeout;
      }

      void
      readOK(void)
      {
        std::string rv = readLine();
        if (rv != "OK")
          throw UnexpectedReply("OK", rv);
      }

      void
      readReady(void)
      {
        std::string rv = readLine();
        if (rv != "READY")
          throw UnexpectedReply("READY", rv);
      }

      std::string
      readLine(void)
      {
        Counter<double> timer(m_timeout);
        return readLine(timer);
      }

      void
      readRaw(Counter<double>& timer, uint8_t* data, unsigned data_size)
      {
        unsigned bytes_read = 0;

        while (!timer.overflow())
        {
          if (m_uart->hasNewData(timer.getRemaining()) != IOMultiplexing::PRES_OK)
            throw ReadTimeout();

          int rv = m_uart->read(data + bytes_read, data_size - bytes_read);
          if (rv <= 0)
            throw std::runtime_error("short read");

          std::cerr << "READ: " << bytes_read << ", " << (data_size - bytes_read) << std::endl;
          for (int i = 0; i < rv; ++i)
            fprintf(stderr, "BYTE %02X\n", data[i]);

          bytes_read += rv;
          if (bytes_read == data_size)
            return;
        }

        throw ReadTimeout();
      }

      bool
      processQueue(std::string& str)
      {
        bool got_line = false;

        while (!m_queue.empty())
        {
          char c = m_queue.front();
          m_queue.pop();
          if (c == '\n')
          {
            if (!m_line.empty())
            {
              got_line = true;
              break;
            }
          }
          else
          {
            m_line.push_back(c);
          }
        }

        if (got_line)
        {
          str = String::trim(m_line);

          if (!str.empty())
          {
            m_line.clear();

            if (str == m_last_cmd)
              return false;

            m_task->debug("LINE: %s", sanitize(str).c_str());

            return true;
          }
        }

        return false;
      }

      std::string
      readLine(Counter<double>& timer)
      {
        std::string str;

        if (processQueue(str))
          return str;

        //! FIXME: check unsolicited messages.
        while (!timer.overflow())
        {
          if (m_uart->hasNewData(timer.getRemaining()) != IOMultiplexing::PRES_OK)
            throw ReadTimeout();

          int rv = m_uart->readString(m_buffer, sizeof(m_buffer));
          if (rv <= 0)
            throw std::runtime_error("short read");

          m_task->debug("READ: %s", sanitize(m_buffer).c_str());

          for (int i = 0; i < rv; ++i)
            m_queue.push(m_buffer[i]);

          if (processQueue(str))
            break;
        }

        return str;
      }
    };
  }
}

#endif
