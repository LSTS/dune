//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef ACTUATORS_AMC_PARSER_HPP_INCLUDED_
#define ACTUATORS_AMC_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Actuators
{
  namespace AMC
  {
    // Auto exposure compensator
    class MessageParse
    {
    public:
      struct AMCMotorState
      {
        //! RPM
        int rpm[4];
        //! Temperature
        float tmp[4];
        //! Voltage
        float volt[4];
        //! Current
        float current[4];
        //! State of motor
        bool state[4];
      };

      enum AMCParserstates
      {
        //! Read preamble
        PS_PREAMBLE,
        //! Data received
        PS_DATA,
        //! Read checksum
        PS_CS
      };

      //! Parse message received
      bool
      ParserAMC(uint8_t byte)
      {
        //printf("HEX: %c\n\r", byte);
        bool result_parser = false;
        switch (m_amc_state)
        {
          case PS_PREAMBLE:
            if (byte == c_preamble)
            {
              m_csum = byte;
              m_amc_state = PS_DATA;
              m_cnt = 0;
              std::memset(&m_message_received, '0', sizeof(m_message_received));
            }
            break;

          case PS_DATA:
            if (byte != c_terminator)
            {
              m_message_received[m_cnt++] = byte;
              m_csum ^= byte;
            }
            else
              m_amc_state = PS_CS;
            break;

          case PS_CS:
            if (m_csum == byte)
              result_parser = true;

            m_amc_state = PS_PREAMBLE;
            break;

          default:
            m_amc_state = PS_PREAMBLE;
            break;
        }
        return result_parser;
      }

      //! split info of message
      bool
      getData(void)
      {
        return FilterData(m_message_received);
      }

      //! filter data received of AMC board
      bool
      FilterData(const char* amc_data)
      {
        result_filter_data = false;
        if (amc_data[0] == c_all_data)
        {
          std::sscanf(amc_data, "AI%d", &m_id);
          std::sscanf(amc_data, "AI%*d,R%d,T%f,V%f,C%f", &m_motor.rpm[m_id], &m_motor.tmp[m_id], &m_motor.volt[m_id], &m_motor.current[m_id]);
          result_filter_data = true;
        }
        else if (amc_data[0] == c_state_motor)
        {
          std::sscanf(amc_data, "SI%d", &m_id);
          int state_motor;
          std::sscanf(amc_data, "SI%*d,S%d", &state_motor);
          m_motor.state[m_id] = (bool)state_motor;
          result_filter_data = true;
        }

        return result_filter_data;
      }

      // Parser variables
      AMCParserstates m_amc_state;
      AMCMotorState m_motor;
      bool result_filter_data;
      uint8_t m_csum;
      uint8_t m_cnt;
      char m_message_received[64];
      int m_id;

    private:
      static const uint8_t c_preamble = '$';
      static const uint8_t c_terminator = '*';
      static const uint8_t c_all_data = 'A';
      static const uint8_t c_state_motor = 'S';
    };
  }
}

#endif
