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
#include "SessionResult.hpp"

namespace Transports
{
  namespace IridiumSBD
  {
    using DUNE_NAMESPACES;

    //! Maximum number of revision lines.
    static const unsigned c_max_rev_lines = 10;

    class Driver: public Concurrency::Thread
    {
    public:
      Driver(Tasks::Task* task, SerialPort* uart):
        m_task(task),
        m_uart(uart),
        m_timeout(2.5),
        m_read_mode(READ_MODE_LINE),
        m_busy(false),
        m_session_result_read(true)
      {
        m_rssi.setDestination(m_task->getSystemId());
        m_rssi.setDestinationEntity(m_task->getEntityId());
        m_uart->flushInput();
      }

      ~Driver(void)
      {
      }

      //! Initialize ISU.
      void
      initialize(void)
      {
        setReadMode(READ_MODE_LINE);
        start();
        setEcho(false);
        setRingAlert(true);
        setIndicatorEventReporting(true);
      }

      //! Query the ISU manufacturer.
      //! @return ISU manufacturer name.
      std::string
      getManufacturer(void)
      {
        return readValue("+CGMI");
      }

      //! Query the ISU model.
      //! @return ISU model name.
      std::string
      getModel(void)
      {
        return readValue("+CGMM");
      }

      //! Query the ISU revision.
      //! @return ISU revision.
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

      //! Query the ISU serial number (IMEI).
      //! @return ISU serial number (IMEI),
      std::string
      getIMEI(void)
      {
        return readValue("+CGSN");
      }

      //! Write SBD binary data to the ISU.
      //! @param[in] data binary data.
      //! @param[in] data_size size of binary data.
      void
      writeSBD(const uint8_t* data, unsigned data_size)
      {
        if (data == NULL || data_size == 0)
        {
          clearMessageBuffer(BFR_TYPE_ORIGINATED);
          return;
        }

        if (data_size > 340)
        {
          throw SBDInvalidSize(data_size);
        }

        // Send command.
        sendAT(String::str("+SBDWB=%u", data_size));
        expectREADY();

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

        expectOK();
      }

      //! Read SBD binary data to the ISU.
      //! @param[in] data buffer to hold binary data.
      //! @param[in] data_size size of binary data buffer.
      //! @return number of bytes read.
      unsigned
      readSBD(uint8_t* data, unsigned data_size)
      {
        ReadMode saved_read_mode = getReadMode();
        Counter<double> timer(getTimeout());
        uint8_t bfr[2] = {0};
        uint8_t ccsum[2] = {0};
        unsigned length = 0;

        try
        {
          // Prepare to read raw data.
          setReadMode(READ_MODE_RAW);

          // Send command.
          sendAT("+SBDRB");

          // Read incoming data length.
          length = readSBDLength(timer);
          m_task->spew("reading %u bytes of SBD binary data", length);

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

          setReadMode(saved_read_mode);
          expectOK();
        }
        catch (...)
        {
          setReadMode(saved_read_mode);
          throw;
        }

        return length;
      }

      //! Enable or disable radio activity.
      //! @param[in] value true to enable, false to disable.
      void
      setRadioActivity(bool value)
      {
        sendAT(value ? "*R1" : "*R0");
        expectOK();
      }

      //! Enable or disable the ISU to echo characters to the DTE.
      //! @param[in] value true to enable, false to disable.
      void
      setEcho(bool value)
      {
        sendAT(value ? "E1" : "E0");
        expectOK();
      }

      //! Enable or disable the ISU to listen for SBD Ring Alerts.
      //! @param[in] value true to enable, false to disable.
      void
      setRingAlert(bool value)
      {
        sendAT(value ? "+SBDMTA=1" : "+SBDMTA=0");
        expectOK();
      }

      void
      sendSBD(const std::vector<uint8_t>& data)
      {
        writeSBD(&data[0], data.size());
        sendAT("+SBDIX");
        setBusy(true);
      }

      bool
      isBusy(void)
      {
        Concurrency::ScopedMutex l(m_mutex);
        return m_busy;
      }

      const SessionResult&
      getSessionResult(void)
      {
        Concurrency::ScopedMutex l(m_mutex);
        m_session_result_read = true;
        return m_session_result;
      }

      bool
      hasSessionResult(void)
      {
        Concurrency::ScopedMutex l(m_mutex);
        return !m_session_result_read;
      }

    private:
      //! Message buffer types.
      enum BufferType
      {
        //! Mobile originated SBD message buffer.
        BFR_TYPE_ORIGINATED = 0,
        //! Mobile terminated SBD message buffer.
        BFR_TYPE_TERMINATED = 1,
        //! Mobile originated SBD message buffer.
        BFR_TYPE_BOTH = 2
      };

      //! Read mode.
      enum ReadMode
      {
        //! Line oriented input.
        READ_MODE_LINE,
        //! Unprocessed sequence of bytes.
        READ_MODE_RAW
      };

      enum RegistrationStatus
      {
        REG_STATUS_DETACHED,
        REG_STATUS_NOT_REG,
        REG_STATUS_REG,
        REG_STATUS_DENIED
      };

      //! Parent task.
      Tasks::Task* m_task;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Read timeout.
      double m_timeout;
      //! Queue of incoming characters.
      std::queue<char> m_chars;
      //! Current line being parsed.
      std::string m_line;
      //! Last command sent to modem.
      std::string m_last_cmd;
      //! Queue of input lines.
      Concurrency::TSQueue<std::string> m_lines;
      //! Queue of raw input bytes.
      Concurrency::TSQueue<uint8_t> m_bytes;
      //! Read mode.
      ReadMode m_read_mode;
      //! True if ISU is busy.
      bool m_busy;
      //! Result of last SBD session.
      SessionResult m_session_result;
      //! True if last session result was read.
      bool m_session_result_read;
      //! Contents of line to skip once.
      std::string m_skip_line;
      //! Last RSSI value.
      IMC::RSSI m_rssi;
      //! Read mode lock.
      Concurrency::Mutex m_mutex;

      void
      setSkipLine(const std::string& line)
      {
        m_skip_line = line;
      }

      void
      setBusy(bool value)
      {
        Concurrency::ScopedMutex l(m_mutex);
        m_busy = value;
      }

      bool
      handleUnsolicited(const std::string& str)
      {
        if (String::startsWith(str, "+SBDRING"))
          handleSBDRING(str);
        else if (String::startsWith(str, "+CIEV"))
          handleCIEV(str);
        else if (String::startsWith(str, "+AREG"))
          handleAREG(str);
        else if (String::startsWith(str, "+SBDIX"))
          handleSBDIX(str);
        else
          return false;

        return true;
      }

      void
      handleSBDRING(const std::string& str)
      {
        (void)str;
        m_task->debug("SBD ring");
      }

      void
      handleCIEV(const std::string& str)
      {
        unsigned ind = 0;
        unsigned value = 0;

        if (std::sscanf(str.c_str(), "+CIEV:%u,%u", &ind, &value) == 2)
        {
          if (ind == 0)
          {
            m_rssi.value = value * 20;
            m_task->dispatch(m_rssi, DF_LOOP_BACK);
          }
        }
        else
        {
          m_task->war("invalid unsolicited string %s", str.c_str());
        }
      }

      void
      handleAREG(const std::string& str)
      {
        (void)str;
      }

      void
      handleSBDIX(const std::string& str)
      {
        {
          Concurrency::ScopedMutex l(m_mutex);
          if (!m_session_result_read)
            m_task->err("new session result will overwrite previously unread value");
          m_session_result_read = false;
          m_session_result.parse(str);
        }

        setSkipLine("OK");

        setBusy(false);
      }

      void
      setIndicatorEventReporting(bool value)
      {
        sendAT(value ? "+CIER=1,1,0" : "+CIER=0");
        expectOK();
      }

      void
      clearMessageBuffer(BufferType type)
      {
        std::string rv = readValue(String::str("+SBDD%u", type));
        if (rv != "0")
          throw std::runtime_error("error ocurred while clearing buffer");
      }

      void
      clearSequenceNumber(void)
      {
        std::string rv = readValue("+SBDC");
        if (rv != "0")
          throw std::runtime_error("error ocurred while clearing the MOMSN");
      }

      ReadMode
      getReadMode(void)
      {
        Concurrency::ScopedMutex l(m_mutex);
        return m_read_mode;
      }

      void
      setReadMode(ReadMode mode)
      {
        Concurrency::ScopedMutex l(m_mutex);
        m_read_mode = mode;
      }

      void
      run(void)
      {
        char bfr[512];
        std::string line;

        while (!isStopping())
        {
          if (m_uart->hasNewData(1.0) != IOMultiplexing::PRES_OK)
            continue;

          int rv = m_uart->read(bfr, sizeof(bfr));
          if (rv <= 0)
            throw std::runtime_error("short read");

          if (getReadMode() == READ_MODE_RAW)
          {
            for (int i = 0; i < rv; ++i)
              m_bytes.push(bfr[i]);
          }
          else
          {
            for (int i = 0; i < rv; ++i)
              m_chars.push(bfr[i]);

            while (processQueue(line))
            {
              if (!handleUnsolicited(line))
                m_lines.push(line);
            }
          }
        }
      }

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
        expectOK();
        return str;
      }

      void
      sendAT(const std::string& str)
      {
        std::string cmd("AT");
        cmd.append(str);
        m_last_cmd = cmd;
        cmd.append("\r\n");
        m_task->spew("send: %s", m_last_cmd.c_str());
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
        Concurrency::ScopedMutex l(m_mutex);
        m_timeout = timeout;
      }

      double
      getTimeout(void)
      {
        Concurrency::ScopedMutex l(m_mutex);
        return m_timeout;
      }

      void
      expect(const std::string& str)
      {
        std::string rv = readLine();
        if (rv != str)
          throw UnexpectedReply(str, rv);
      }

      void
      expectOK(void)
      {
        expect("OK");
      }

      void
      expectREADY(void)
      {
        expect("READY");
      }

      std::string
      readLine(void)
      {
        Counter<double> timer(getTimeout());
        return readLine(timer);
      }

      void
      readRaw(Counter<double>& timer, uint8_t* data, unsigned data_size)
      {
        unsigned bytes_read = 0;

        while (!timer.overflow())
        {
          if (m_bytes.waitForItems(timer.getRemaining()))
            data[bytes_read++] = m_bytes.pop();

          if (bytes_read == data_size)
            return;
        }

        throw ReadTimeout();
      }

      bool
      processQueue(std::string& str)
      {
        bool got_line = false;

        while (!m_chars.empty())
        {
          char c = m_chars.front();
          m_chars.pop();
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

        if (!got_line)
          return false;

        str = String::trim(m_line);
        if (str.empty())
          return false;

        m_task->spew("recv: %s", sanitize(str).c_str());
        m_line.clear();

        if (!m_skip_line.empty())
        {
          if (m_skip_line == str)
          {
            m_skip_line.clear();
            return false;
          }
        }

        return true;
      }

      std::string
      readLine(Counter<double>& timer)
      {
        if (m_lines.waitForItems(timer.getRemaining()))
        {
          std::string line = m_lines.pop();
          if (line != m_last_cmd)
            return line;
          else
            return readLine(timer);
        }

        throw ReadTimeout();
      }

      //! Read the length of an SBD message. If unsolicited messages
      //! are enabled they might be issued while sending the "read
      //! SBD binary message", garbling the two bytes of message length.
      //! This function guarantees that unsolicited messages
      //! are properly handled and the length is read correctly.
      unsigned
      readSBDLength(Counter<double>& timer)
      {
        uint8_t bfr[2] = {0};

        // Read first byte.
        readRaw(timer, bfr, 1);

        // Handle start of unsolicited message.
        if (bfr[0] == '+')
        {
          m_task->debug("handling unsolicited message in raw mode");
          std::string line((const char*)bfr, 1);
          while (!timer.overflow())
          {
            readRaw(timer, bfr, 1);
            if (bfr[0] == '\n')
            {
              handleUnsolicited(String::trim(line));
              return readSBDLength(timer);
            }
          }

          throw ReadTimeout();
        }
        // Handle padding of an unsolicited message
        else if ((bfr[0] == '\r') || (bfr[0] == '\n'))
        {
          return readSBDLength(timer);
        }

        // Read second byte and handle SBD length.
        readRaw(timer, bfr + 1, 1);
        return (bfr[0] << 8) | bfr[1];
      }
    };
  }
}

#endif
