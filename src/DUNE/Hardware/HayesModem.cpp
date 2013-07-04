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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace DUNE
{
  namespace Hardware
  {
    using DUNE_NAMESPACES;

    //! Default AT command timeout.
    static const double c_timeout = 5.0;
    //! Maximum number of revision lines.
    static const unsigned c_max_rev_lines = 10;

    //! Constructor.
    //! @param[in] task parent task.
    //! @param[in] uart serial port connected to the ISU.
    HayesModem::HayesModem(Tasks::Task* task, SerialPort* uart):
      m_task(task),
      m_uart(uart),
      m_timeout(c_timeout),
      m_read_mode(READ_MODE_LINE),
      m_busy(false),
      m_tx_rate_max(-1.0)
    {
      m_rssi.setDestination(m_task->getSystemId());
      m_rssi.setDestinationEntity(m_task->getEntityId());
      m_uart->flushInput();
    }

    //! Perform ISU initialization, this function must be called
    //! before any other.
    void
    HayesModem::initialize(void)
    {
      // Reset and flush pending input.
      sendReset();
      Delay::wait(2.0);
      m_uart->flushInput();

      // Perform initialization.
      setReadMode(READ_MODE_LINE);
      start();
      setEcho(false);
      //setFlowControl(false);
      sendInitialization();
    }

    //! Query the ISU manufacturer.
    //! @return ISU manufacturer name.
    std::string
    HayesModem::getManufacturer(void)
    {
      return readValue("+CGMI");
    }

    //! Query the ISU model.
    //! @return ISU model name.
    std::string
    HayesModem::getModel(void)
    {
      return readValue("+CGMM");
    }

    //! Query the ISU revision.
    //! @return ISU revision.
    std::string
    HayesModem::getRevision(void)
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
    HayesModem::getIMEI(void)
    {
      return readValue("+CGSN");
    }

    //! Retrieve received signal strength indication (RSSI).
    //! @return RSSI value.
    float
    HayesModem::getRSSI(void)
    {
      queryRSSI();

      ScopedMutex l(m_mutex);
      return (unsigned)m_rssi.value;
    }

    void
    HayesModem::setRSSI(float value)
    {
      ScopedMutex l(m_mutex);
      m_rssi.value = value;
      getTask()->dispatch(m_rssi);
    }

    //! Test if ISU is busy performing an SBD session.
    //! @return true if ISU is busy, false otherwise.
    bool
    HayesModem::isBusy(void)
    {
      ScopedMutex l(m_mutex);
      return m_busy;
    }

    //! Test if ISU is cooling down.
    //! @return true if ISU is cooling down, false otherwise.
    bool
    HayesModem::isCooling(void)
    {
      ScopedMutex l(m_mutex);
      if ((m_tx_rate_max >= 0.0) && (!m_tx_rate_timer.overflow()))
        return true;
      return false;
    }

    //! Set maximum transmission rate.
    //! @param[in] rate transmission rate in second. Negative values
    //! will disable transmission rate cap.
    void
    HayesModem::setTxRateMax(double rate)
    {
      ScopedMutex l(m_mutex);
      m_tx_rate_max = rate;
      m_tx_rate_timer.setTop(rate);
    }

    //! @todo: ^SYSSTART
    bool
    HayesModem::handleUnsolicited(const std::string& str)
    {
      (void)str;
      return false;
    }

    //! Enable or disable RTS/CTS flow control.
    //! @param[in] value true to enable flow control, false otherwise.
    void
    HayesModem::setFlowControl(bool value)
    {
      if (value)
        sendAT("&K3");
      else
        sendAT("&K0");

      expectOK();
    }

    void
    HayesModem::setSkipLine(const std::string& line)
    {
      m_skip_line = line;
    }

    void
    HayesModem::setBusy(bool value)
    {
      ScopedMutex l(m_mutex);
      m_busy = value;
      if (m_busy && (m_tx_rate_max >= 0))
        m_tx_rate_timer.reset();
    }

    //! Enable or disable the ISU to echo characters to the DTE.
    //! @param[in] value true to enable, false to disable.
    void
    HayesModem::setEcho(bool value)
    {
      sendAT(value ? "E1" : "E0");
      expectOK();
    }

    HayesModem::ReadMode
    HayesModem::getReadMode(void)
    {
      ScopedMutex l(m_mutex);
      return m_read_mode;
    }

    void
    HayesModem::setReadMode(HayesModem::ReadMode mode)
    {
      ScopedMutex l(m_mutex);
      m_read_mode = mode;
    }

    std::string
    HayesModem::readValue(const std::string& cmd)
    {
      sendAT(cmd);
      std::string str = readLine();
      expectOK();
      return str;
    }

    void
    HayesModem::sendAT(const std::string& str)
    {
      std::string cmd("AT");
      cmd.append(str);
      m_last_cmd = cmd;
      cmd.append("\r\n");
      m_task->spew("send: %s", m_last_cmd.c_str());
      sendRaw((const uint8_t*)cmd.c_str(), cmd.size());
    }

    void
    HayesModem::sendRaw(const uint8_t* data, unsigned data_size)
    {
      m_uart->write(data, data_size);
    }

    void
    HayesModem::setTimeout(double timeout)
    {
      ScopedMutex l(m_mutex);
      m_timeout = timeout;
    }

    double
    HayesModem::getTimeout(void)
    {
      ScopedMutex l(m_mutex);
      return m_timeout;
    }

    void
    HayesModem::expect(const std::string& str)
    {
      std::string rv = readLine();
      if (rv != str)
        throw UnexpectedReply(str, rv);
    }

    void
    HayesModem::expectOK(void)
    {
      expect("OK");
    }

    void
    HayesModem::expectREADY(void)
    {
      expect("READY");
    }

    std::string
    HayesModem::readLine(void)
    {
      Counter<double> timer(getTimeout());
      return readLine(timer);
    }

    void
    HayesModem::readRaw(Counter<double>& timer, uint8_t* data, unsigned data_size)
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
    HayesModem::processInput(std::string& str)
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

      // No complete line is available.
      if (!got_line)
        return false;

      // Clean line.
      str = String::trim(m_line);

      // Got a complete line, but it's empty.
      if (str.empty())
        return true;

      m_task->spew("recv: %s", sanitize(str).c_str());
      m_line.clear();

      if (!m_skip_line.empty())
      {
        if (m_skip_line == str)
        {
          str.clear();
          m_skip_line.clear();
        }
      }

      return true;
    }

    std::string
    HayesModem::readLine(Counter<double>& timer)
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

    void
    HayesModem::flushInput(void)
    {
      m_uart->flushInput();
    }

    void
    HayesModem::run(void)
    {
      char bfr[512];
      std::string line;

      while (!isStopping())
      {
        if (m_uart->hasNewData(1.0) != IOMultiplexing::PRES_OK)
          continue;

        int rv = m_uart->read(bfr, sizeof(bfr));
        if (rv <= 0)
        {
          IMC::IoEvent iov;
          iov.setSource(getTask()->getSystemId());
          iov.setSourceEntity(getTask()->getEntityId());
          iov.setDestinationEntity(getTask()->getEntityId());
          iov.type = IMC::IoEvent::IOV_TYPE_INPUT_ERROR;
          getTask()->receive(&iov);
          break;
        }

        if (getReadMode() == READ_MODE_RAW)
        {
          for (int i = 0; i < rv; ++i)
            m_bytes.push(bfr[i]);
        }
        else
        {
          bfr[rv] = 0;
          m_task->spew("%s", sanitize(bfr).c_str());

          for (int i = 0; i < rv; ++i)
          {
            m_chars.push(bfr[i]);
          }

          while (processInput(line))
          {
            if (!line.empty())
            {
              if (!handleUnsolicited(line))
                m_lines.push(line);
            }
          }
        }
      }
    }
  }
}
