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

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Delay.hpp>
#include <DUNE/Time/Counter.hpp>
#include <DUNE/IO/Poll.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/Hardware/Exceptions.hpp>
#include <DUNE/Hardware/BasicModem.hpp>

namespace DUNE
{
  namespace Hardware
  {
    //! Default command timeout.
    static const double c_timeout = 5.0;
    //! Default input line termination.
    static std::string c_line_term_in = "\r\n";
    //! Default output line termination.
    static std::string c_line_term_out = "\r\n";

    BasicModem::BasicModem(Tasks::Task* task, IO::Handle* handle):
      m_handle(handle),
      m_task(task),
      m_timeout(c_timeout),
      m_read_mode(READ_MODE_LINE),
      m_busy(false),
      m_tx_rate_max(-1.0),
      m_line_term_in(c_line_term_in),
      m_line_term_idx(0),
      m_line_term_out(c_line_term_out),
      m_line_trim(false)
    {
      m_handle->flushInput();
    }

    void
    BasicModem::initialize(void)
    {
      // Reset and flush pending input.
      sendReset();
      Time::Delay::wait(2.0);
      m_handle->flushInput();

      // Perform initialization.
      setReadMode(READ_MODE_LINE);
      start();
      sendInitialization();
    }

    void
    BasicModem::setLineTermIn(const std::string& term)
    {
      Concurrency::ScopedMutex l(m_mutex);
      m_line_term_in = term;
      m_line_term_idx = 0;
    }

    const std::string&
    BasicModem::getLineTermIn(void)
    {
      Concurrency::ScopedMutex l(m_mutex);
      return m_line_term_in;
    }

    void
    BasicModem::setLineTermOut(const std::string& term)
    {
      Concurrency::ScopedMutex l(m_mutex);
      m_line_term_out = term;
    }

    const std::string&
    BasicModem::getLineTermOut(void)
    {
      Concurrency::ScopedMutex l(m_mutex);
      return m_line_term_out;
    }

    void
    BasicModem::setLineTrim(bool enable)
    {
      Concurrency::ScopedMutex l(m_mutex);
      m_line_trim = enable;
    }

    //! Test if ISU is busy performing an SBD session.
    //! @return true if ISU is busy, false otherwise.
    bool
    BasicModem::isBusy(void)
    {
      Concurrency::ScopedMutex l(m_mutex);
      return m_busy;
    }

    void
    BasicModem::setBusy(bool value)
    {
      Concurrency::ScopedMutex l(m_mutex);
      m_busy = value;
      if (m_busy && (m_tx_rate_max >= 0))
        m_tx_rate_timer.reset();
    }

    //! Test if ISU is cooling down.
    //! @return true if ISU is cooling down, false otherwise.
    bool
    BasicModem::isCooling(void)
    {
      Concurrency::ScopedMutex l(m_mutex);
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
      Concurrency::ScopedMutex l(m_mutex);
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
      Concurrency::ScopedMutex l(m_mutex);
      return m_read_mode;
    }

    void
    BasicModem::setReadMode(BasicModem::ReadMode mode)
    {
      Concurrency::ScopedMutex l(m_mutex);
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
      getTask()->trace("send: %s", Streams::sanitize(str).c_str());
      sendRaw((uint8_t*)str.c_str(), str.size());
    }

    double
    BasicModem::getTimeout(void)
    {
      Concurrency::ScopedMutex l(m_mutex);
      return m_timeout;
    }

    void
    BasicModem::setTimeout(double timeout)
    {
      Concurrency::ScopedMutex l(m_mutex);
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
      Time::Counter<double> timer(getTimeout());
      return readLine(timer);
    }

    void
    BasicModem::readRaw(Time::Counter<double>& timer, uint8_t* data, unsigned data_size)
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

          m_line.push_back(c);

        //!@fixme: concurrency hazard.
        if (c == m_line_term_in[m_line_term_idx])
        {
          ++m_line_term_idx;
          if (m_line_term_idx == m_line_term_in.size())
          {
            m_line_term_idx = 0;
            got_line = true;
            break;
          }
        }
        else
        {

        }
      }

      if (isFragment(m_line))
      {
        getTask()->debug(DTR("fragment: %s"), Streams::sanitize(m_line).c_str());
        return false;
      }

      // No complete line is available.
      if (!got_line)
        return false;

      if (m_line.size() <= m_line_term_in.size())
      {
        str = "";
        return true;
      }

      // Remove termination characters.
      str = m_line;
      str.resize(m_line.size() - m_line_term_in.size());

      if (m_line_trim)
        str = Utils::String::trim(str);

      // Got a complete line, but it's empty.
      if (str.empty())
        return true;

      IMC::DevDataText txt;
      txt.value = str;
      txt.setDestination(getTask()->getSystemId());
      getTask()->dispatch(txt);

      m_task->trace("recv: %s", Streams::sanitize(str).c_str());
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
        if (!IO::Poll::poll(*m_handle, 1.0))
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
          m_task->spew("%s", Streams::sanitize(bfr).c_str());

          for (size_t i = 0; i < rv; ++i)
          {
            m_chars.push(bfr[i]);
          }

          while (!m_chars.empty())
          {
            if (!processInput(line))
              continue;

            if (line.empty())
              continue;

            if (!handleUnsolicited(line))
              m_lines.push(line);
          }
        }
      }
    }
  }
}
