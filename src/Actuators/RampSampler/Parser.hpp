//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Joao Costa                                                       *
//***************************************************************************

#ifndef ACTUATORS_RAMPSAMPLER_PARSER_HPP_INCLUDED_
#define ACTUATORS_RAMPSAMPLER_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Actuators
{
  namespace RampSampler
  {
    //! Message Parser for RAMP Water Sampler.
    //!
    //! @author João Costa
    class Parser
    {
    public:
      //! WASAB's watchdog.
      Time::Counter<double> m_fw_wdog;

      //! WASAB's message receive confirmation
      uint8_t m_msg_receipt;
      //! Sampling done flag
      bool m_sampling_done_FL;

      //! Ramp's Water Sampler data.
      struct RampState
      {
        //! Firmware Version
        float fwVersion = 0;
        //! Sampling State Machine's State
        int sampleState;
      };

      //! State machine states.
      enum ParserStates
      {
        //! Read preamble
        PS_PREAMBLE,
        //! Data received
        PS_DATA,
        //! Read checksum
        PS_CS
      };

      Parser(DUNE::Tasks::Task *task) : m_task(task),
                                        m_parser_state(Parser::PS_PREAMBLE)
      {
        m_sampling_done_FL = false;
      }

      ~Parser(void)
      {
      }

      //! Parse message received
      bool
      parse(uint8_t byte)
      {
        switch (m_parser_state)
        {
        case PS_PREAMBLE:
          if (byte == c_preamble)
          {
            m_parser_state = PS_DATA;
            m_cnt = 0;
            std::memset(&m_bfr, '\0', sizeof(m_bfr));
          }
          break;

        case PS_DATA:
          if (byte != c_terminator)
          {
            m_bfr[m_cnt++] = byte;
          }
          else
          {
            m_bfr[m_cnt++] = byte;
            m_parser_state = PS_CS;
          }
          break;

        case PS_CS:
          m_parser_state = PS_PREAMBLE;
          m_csum = Algorithms::XORChecksum::compute((uint8_t *)m_bfr, strlen(m_bfr) - 1, 0);
          // m_task->spew("csum received: %c || csum calculated: %c", byte, m_csum);
          if (m_csum == byte)
          {
            m_task->spew("csum ok");
            return true;
          }
          else
          {
            m_task->spew("csum fail");
          }
          break;

        default:
          m_parser_state = PS_PREAMBLE;
          break;
        }

        return false;
      }

      //! Filter data received from ramp sampler board
      bool
      translate(void)
      {
        m_task->spew("<< %s", m_bfr);

        if (m_bfr[0] == c_pong)
        {
          m_fw_wdog.reset();
          return true;
        }
        else if (m_bfr[0] == c_msg_receipt)
        {
          m_msg_receipt = 1;
          return true;
        }
        else if (m_bfr[0] == c_sample_state)
        {
          std::sscanf(m_bfr, "%*c,%d%*s", &m_rampState.sampleState);
          if(m_rampState.sampleState > 3)
          {
            m_sampling_done_FL = true;
          }
          return true;
        }
        else if (m_bfr[0] == c_version)
        {
          std::sscanf(m_bfr, "%*c,%f%*s", &m_rampState.fwVersion);
          return true;
        }
        else if (m_bfr[0] == c_done)
        {
          m_sampling_done_FL = true;
          return true;
        }
        return false;
      }

      void
      set_wdog(uint8_t val)
      {
        m_fw_wdog.setTop(val);
      }

      bool
      is_sampling_done(void)
      {
        return m_sampling_done_FL;
      }

      void
      reset_is_sampling_done(void)
      {
        m_sampling_done_FL = false;
      }

      //! Sampling system state.
      RampState m_rampState;

    private:
      DUNE::Tasks::Task *m_task;
      //! State machine state.
      ParserStates m_parser_state;
      //! Checksum.
      uint8_t m_csum;
      //! Position in buffer.
      uint8_t m_cnt;
      //! Received buffer.
      char m_bfr[64];

      //! Frame preamble.
      static const uint8_t c_preamble = '$';
      //! Frame terminator.
      static const uint8_t c_terminator = '*';
      //! Ping answer frame identifier.
      static const uint8_t c_pong = 'P';
      //! Message receipt frame identifier
      static const uint8_t c_msg_receipt = 'R';
      //! Sample state frame identifier.
      static const uint8_t c_sample_state = 'S';
      //! Version state frame identifier.
      static const uint8_t c_version = 'V';
      //! Sampling done frame identifier.
      static const uint8_t c_done = 'O';
    };
  } // namespace DorisSampler
} // namespace Actuators
#endif