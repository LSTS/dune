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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdarg>
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Hardware/SerialPort.hpp>
#include <DUNE/Hardware/Modem.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Time/Clock.hpp>

namespace DUNE
{
  namespace Hardware
  {
    using namespace DUNE::System;

    Modem::Modem(std::string device, int baudrate):
      m_io(new DUNE::Hardware::SerialPort(device, baudrate))
    { }

    Modem::~Modem(void)
    {
      if (m_io)
        delete m_io;
    }

    Modem::Result
    Modem::send(const char* data, uint16_t length)
    {
      Result r;

      if ((r = setMode(MM_DATA)) == MR_OK
          && m_io->write(data, length) != length)
        r = MR_IO_ERROR;

      return r;
    }

    Modem::Result
    Modem::receive(char* data, uint16_t* length, double timeout)
    {
      Result r;
      uint16_t len = *length;
      uint16_t idx = 0;
      int retries = 0;
      const int max_retries = 5;

      DUNE_DBG("Modem", "start read " << *length << ' ' << timeout);

      if ((r = setMode(MM_DATA)) != MR_OK || (r = poll(timeout)) != MR_OK)
        return r;

      while (1)
      {
        int n = m_io->read(data + idx, len - idx);

        DUNE_DBG("Modem", "read " << n << " bytes");

        if (n < 0)
        {
          r = MR_IO_ERROR;
          break;
        }

        if (n > 0)
        {
          idx += n;
          retries = 0;
          continue;
        }

        if (++retries == max_retries)
        {
          DUNE_DBG("Modem", "enough retries");
          r = idx > 0 ? MR_OK : MR_TIMEOUT;
          break;
        }

        if (poll(0.2) != MR_OK)
        {
          DUNE_DBG("Modem", "poll error");
          r = idx > 0 ? MR_OK : MR_TIMEOUT;
          break;
        }
      }

      *length = idx;
      return r;
    }

    Modem::Result
    Modem::poll(double timeout)
    {
      IOMultiplexing::Result pr = m_io->hasNewData(timeout);
      Result r;
      switch (pr)
      {
        case IOMultiplexing::PRES_OK:
          r = MR_OK;      break;
        case IOMultiplexing::PRES_NONE:
          r = MR_TIMEOUT; break;
        default:
          r = MR_IO_ERROR; break;
      }
      return r;
    }

    Modem::Result
    Modem::command(double timeout, const char* expected_reply, const char* fmt, ...)
    {
      std::va_list ap;
      va_start(ap, fmt);
      Result r = command(timeout, expected_reply, fmt, ap);
      va_end(ap);
      return r;
    }

    Modem::Result
    Modem::command(double timeout, const char* expected_reply, const char* fmt, std::va_list ap)
    {
      if (setMode(MM_COMMAND) != Modem::MR_OK)
        return Modem::MR_IO_ERROR;

      int n = std::vsprintf(m_wbuf, fmt, ap);
      m_wbuf[n] = 0;

      DUNE_DBG("Modem", "Sending Command: '"
               << Streams::sanitize((const char*)m_wbuf)
               << '\'');

      if (m_io->write(m_wbuf, n) != n)
        return MR_IO_ERROR;

      return expected_reply ?
             expect(timeout, expected_reply)
             :
             MR_OK;
    }

    Modem::Result
    Modem::expect(double timeout, const char* estring)
    {
      DUNE_DBG("Modem", "Awaiting reply '"
               << Streams::sanitize(estring)
               << "' in " << timeout << " seconds");

      Result r;
      double now = Time::Clock::get();
      double until = now + timeout;
      uint16_t idx = 0;
      int n;

      do
      {
        r = poll(until - now);

        if (r != MR_OK)
          break;

        n = m_io->read(m_wbuf + idx, sizeof(m_wbuf) - 1 - idx);

        if (n <= 0)
        {
          r = MR_IO_ERROR;
          break;
        }

        idx += n;
        m_wbuf[idx] = 0;

        DUNE_DBG("Modem", "Reply '"
                 << Streams::sanitize((const char*)m_wbuf)
                 << '\'');

        if (std::strstr(m_wbuf, estring))
        {
          r = MR_OK;
          DUNE_DBG("Modem", "Expected reply has been read");
          break;
        }

        now = Time::Clock::get();
      }
      while (now <= until && idx < sizeof(m_wbuf));

      return r;
    }
  }
}
