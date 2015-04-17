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
#include <cstdio>
#include <cctype>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"

namespace Sensors
{
  namespace SW100
  {
    using DUNE_NAMESPACES;

    static const char* CMD_SET_OUTPUT_RATE = "$%02dOR#0001\r";
    static const char* CMD_CONTINUOUS_COMP = "$%02dCC\r";
    static const char* CMD_STOP_CONTINUOUS = "\x03";
    static const char* CMD_WHO_IS_THERE = "$?\r";
    static const char* RES_CONTINUOUS_COMP = "!%02d#%%lf,%%lf,%%lf,%%lf\r";
    static const int READ_RETRIES = 10;
    static const double READ_DELAY = 0.1;

    bool
    Driver::setup(void)
    {
      using namespace std;

      char bfr[64];
      bool passed = false;

      // Reset sentence index.
      m_sentence_idx = 0;

      // Stop continuous mode.
      m_stream.write(CMD_STOP_CONTINUOUS, 1);

      // The  SW100 protocol sheet is wrong, the device does not
      // reply with ACK to the "Break Continuous" command, so we try to
      // read from the device a number of times, if we have 10 reads
      // without data then the continuous mode should have stopped.
      int count = 0;
      for (int i = 0; i < READ_RETRIES * 5; ++i)
      {
        int rv = m_stream.read(bfr, sizeof(bfr));

        if (rv == 0 && count++ == READ_RETRIES)
        {
          passed = true;
          break;
        }
      }

      if (!passed)
      {
        m_task->debug("error setting up device (unable to stop continuous mode)");
        return false;
      }
      passed = false;

      // Ask who is there.
      Delay::wait(READ_DELAY);
      m_stream.write(CMD_WHO_IS_THERE, 3);

      // Read answer
      for (int i = 0; i < READ_RETRIES; ++i)
      {
        int rv = m_stream.read(bfr, sizeof(bfr));

        if (rv > 0)
        {
          bfr[rv] = 0;
          if (sscanf((char*)bfr, "!%02d\r", &m_id) == 1)
            passed = true;
          else
            m_task->debug("received garbage: %s", Streams::sanitize(bfr).c_str());
          break;
        }

        Delay::wait(READ_DELAY);
      }

      if (!passed)
      {
        m_task->debug("error setting up device (unable to request id)");
        return false;
      }
      passed = false;

      // Set output rate.
      Delay::wait(READ_DELAY);
      char orate[16];
      sprintf(orate, CMD_SET_OUTPUT_RATE, m_id);
      m_stream.write(orate, strlen(orate));

      // Read answer
      for (int i = 0; i < READ_RETRIES; ++i)
      {
        int rv = m_stream.read(bfr, sizeof(bfr));

        if (rv > 0)
        {
          if (memcmp(bfr, "\x06\x0d", 2) == 0)
            passed = true;
          break;
        }

        Delay::wait(READ_DELAY);
      }

      if (!passed)
      {
        m_task->debug("error setting up device (unable to set output rate)");
        return false;
      }
      passed = false;

      // Request continuous output.
      Delay::wait(READ_DELAY);
      char contm[16];
      sprintf(contm, CMD_CONTINUOUS_COMP, m_id);
      m_stream.write(contm, strlen(contm));

      // Read answer
      for (int i = 0; i < READ_RETRIES; ++i)
      {
        int rv = m_stream.read(bfr, sizeof(bfr));

        if (rv > 0)
        {
          rv = 0;
          sprintf(m_expr, RES_CONTINUOUS_COMP, m_id);
          double data[4];

          if (sscanf((char*)bfr, m_expr, &data[0], &data[1], &data[2], &data[3]) == 4)
            passed = true;
          break;
        }

        Delay::wait(READ_DELAY);
      }

      if (!passed)
      {
        m_task->debug("error setting up device (unable to request continuous mode)");
        return false;
      }

      return true;
    }

    bool
    Driver::read(void)
    {
      bool result = false;
      char bfr[64];
      int rv = m_stream.read(bfr, sizeof(bfr));

      for (int i = 0; i < rv; ++i)
      {
        if (bfr[i] == '\r')
        {
          m_sentence[m_sentence_idx] = 0;
          m_sentence_idx = 0;

          if (std::sscanf(m_sentence, m_expr, &m_data[0], &m_data[1], &m_data[2], &m_data[3]) == 4)
            result = true;
        }
        else
        {
          m_sentence[m_sentence_idx] = bfr[i];
          ++m_sentence_idx;

          if (m_sentence_idx >= (int)sizeof(m_sentence))
            m_sentence_idx = 0;
        }
      }

      return result;
    }
  }
}
