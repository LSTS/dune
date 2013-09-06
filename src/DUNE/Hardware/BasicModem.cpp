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

    //! Default command timeout.
    static const double c_timeout = 5.0;

    BasicModem::BasicModem(Tasks::Task* task, IO::Handle* handle):
      m_handle(handle),
      m_task(task),
      m_timeout(c_timeout),
      m_read_mode(READ_MODE_LINE),
      m_busy(false),
      m_tx_rate_max(-1.0)
    {
      m_handle->flushInput();
    }

    void
    BasicModem::initialize(void)
    {
      // Reset and flush pending input.
      sendReset();
      Delay::wait(2.0);
      m_handle->flushInput();

      // Perform initialization.
      setReadMode(READ_MODE_LINE);
      start();
      sendInitialization();
    }

    //! Test if ISU is busy performing an SBD session.
    //! @return true if ISU is busy, false otherwise.
    bool
    BasicModem::isBusy(void)
    {
      ScopedMutex l(m_mutex);
      return m_busy;
    }

    void
    BasicModem::setBusy(bool value)
    {
      ScopedMutex l(m_mutex);
      m_busy = value;
      if (m_busy && (m_tx_rate_max >= 0))
        m_tx_rate_timer.reset();
    }

    //! Test if ISU is cooling down.
    //! @return true if ISU is cooling down, false otherwise.
    bool
    BasicModem::isCooling(void)
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
    BasicModem::setTxRateMax(double rate)
    {
      ScopedMutex l(m_mutex);
      m_tx_rate_max = rate;
      m_tx_rate_timer.setTop(rate);
    }

    void
    BasicModem::setSkipLine(const std::string& line)
    {
      m_skip_line = line;
    }

    BasicModem::ReadMode
    BasicModem::getReadMode(void)
    {
      ScopedMutex l(m_mutex);
      return m_read_mode;
    }

    void
    BasicModem::setReadMode(BasicModem::ReadMode mode)
    {
      ScopedMutex l(m_mutex);
      m_read_mode = mode;
    }

    void
    BasicModem::sendRaw(const uint8_t* data, unsigned data_size)
    {
      m_handle->write(data, data_size);
    }

    void
    BasicModem::send(const std::string& str)
    {
      getTask()->inf("send: %s", sanitize(str).c_str());
      sendRaw((uint8_t*)str.c_str(), str.size());
    }

    double
    BasicModem::getTimeout(void)
    {
      ScopedMutex l(m_mutex);
      return m_timeout;
    }

    void
    BasicModem::setTimeout(double timeout)
    {
      ScopedMutex l(m_mutex);
      m_timeout = timeout;
    }

    void
    BasicModem::expect(const std::string& str)
    {
      std::string rv = readLine();
      if (rv != str)
        throw UnexpectedReply(str, rv);
    }

    std::string
    BasicModem::readLine(void)
    {
      Counter<double> timer(getTimeout());
      return readLine(timer);
    }

    void
    BasicModem::readRaw(Counter<double>& timer, uint8_t* data, unsigned data_size)
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
    BasicModem::processInput(std::string& str)
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
    BasicModem::readLine(Time::Counter<double>& timer)
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
    BasicModem::flushInput(void)
    {
      m_handle->flushInput();
    }

    void
    BasicModem::run(void)
    {
      char bfr[512];
      std::string line;

      while (!isStopping())
      {
        if (!Poll::poll(*m_handle, 1.0))
          continue;

        size_t rv = m_handle->read(bfr, sizeof(bfr));
        if (rv == 0)
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
          for (size_t i = 0; i < rv; ++i)
            m_bytes.push(bfr[i]);
        }
        else
        {
          bfr[rv] = 0;
          m_task->spew("%s", sanitize(bfr).c_str());

          for (size_t i = 0; i < rv; ++i)
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
