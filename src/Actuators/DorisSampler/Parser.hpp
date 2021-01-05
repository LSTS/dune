//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef ACTUATORS_DORISSAMPLER_PARSER_HPP_INCLUDED_
#define ACTUATORS_DORISSAMPLER_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Actuators
{
  namespace DorisSampler
  {
    //! Message Parser for DORIS Water Sampler.
    //!
    //! @author João Costa
    class Parser
    {
    public:
      //! Bottles' data to be delivered after mission
      struct bottleInfo
      {
        //! Water Sample Input Type
        int sampleType;
        //! Sampling Temperature
        float temp;
        //! New data available from sampler flag
        int newData;
      };

      //! Doris' Water Sampler data.
      struct DorisState
      {
        //! Cleaning State Machine's State
        int cleanState;
        //! Sampling State Machine's State
        int sampleState;
        //! Sampler Bottles Info
        bottleInfo Bottles[12];
        //! Message receipt
        int msg_receipt;
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

      Parser(DUNE::Tasks::Task* task) : 
      m_task(task),
      m_parser_state(Parser::PS_PREAMBLE)
      {
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
            m_bfr[m_cnt++] = byte;
          }
          break;

        case PS_DATA:
          if (byte != c_terminator)
          {
            m_bfr[m_cnt++] = byte;
          }
          else
            m_parser_state = PS_CS;
          break;

        case PS_CS:
          m_parser_state = PS_PREAMBLE;
          m_task->war("text: %s", m_bfr);
          m_csum = Algorithms::XORChecksum::compute((uint8_t *)m_bfr, strlen(m_bfr), 0);
          if (m_csum == byte)
          {
            m_task->war("csum ok");
            return true;
          }
          else
          {
            m_task->war("csum fail");
          }
          break;

        default:
          m_parser_state = PS_PREAMBLE;
          break;
        }

        return false;
      }

      //! Filter data received from doris sampler board
      bool
      translate(void)
      {
        if (m_bfr[0] == c_bottle)
        {
          std::sscanf(m_bfr, "%*c,%d,%f,%d%*s",
                      &m_dorisState.Bottles->sampleType,
                      &m_dorisState.Bottles->temp,
                      &m_dorisState.Bottles->newData
                      );
          return true;
        }
        else if (m_bfr[0] == c_sample_state)
        {
          std::sscanf(m_bfr, "%*c,%d%*s", &m_dorisState.sampleState);
          return true;
        }
        else if (m_bfr[0] == c_clean_state)
        {
          std::sscanf(m_bfr, "%*c,%d%*s", &m_dorisState.cleanState);
          return true;
        }else if (m_bfr[0] == c_msg_receipt)
        {
          std::sscanf(m_bfr, "%*c,%d%*s", &m_dorisState.msg_receipt);
          return true;
        }

        return false;
      }

      void clear_flags(void)
      {
        m_dorisState.Bottles->newData = 0;
      }

      //! Sampling system state.
      DorisState m_dorisState;

    private:
      DUNE::Tasks::Task* m_task;
      //! State machine state.
      ParserStates m_parser_state;
      //! Checksum.
      uint8_t m_csum;
      //! Position in buffer.
      uint8_t m_cnt;
      //! Received buffer.
      char m_bfr[64];
      //! Watchdog.
      Counter<double> m_timer;

      //! Frame preamble.
      static const uint8_t c_preamble = '$';
      //! Frame terminator.
      static const uint8_t c_terminator = '*';
      //! Frame bottle info identifier.
      static const uint8_t c_bottle = 'B';
      //! Frame state update identifier.
      static const uint8_t c_sample_state = 'S';
      //! Frame debug message identifier.
      static const uint8_t c_clean_state = 'C';
      //! Message confirmationreceipt identifier
      static const uint8_t c_msg_receipt = 'M';
    }; 
  } // namespace DorisSampler
} // namespace Actuators
#endif