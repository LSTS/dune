//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
    //! Message Parser for AMC motor controller.
    //!
    //! @author Pedro Gonçalves
    class Parser
    {
    public:
      //! Motor data.
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

      //! State machine states.
      enum AMCParserStates
      {
        //! Read preamble
        PS_PREAMBLE,
        //! Data received
        PS_DATA,
        //! Read checksum
        PS_CS
      };

      Parser(void):
        m_amc_state(Parser::PS_PREAMBLE)
      { }

      ~Parser(void)
      { }

      //! Parse message received
      bool
      parse(uint8_t byte)
      {
        switch (m_amc_state)
        {
          case PS_PREAMBLE:
            if (byte == c_preamble)
            {
              m_csum = byte;
              m_amc_state = PS_DATA;
              m_cnt = 0;
              std::memset(&m_bfr, '0', sizeof(m_bfr));
            }
            break;

          case PS_DATA:
            if (byte != c_terminator)
            {
              m_bfr[m_cnt++] = byte;
              m_csum ^= byte;
            }
            else
              m_amc_state = PS_CS;
            break;

          case PS_CS:
            m_amc_state = PS_PREAMBLE;

            if (m_csum == byte)
              return true;
            break;

          default:
            m_amc_state = PS_PREAMBLE;
            break;
        }

        return false;
      }

      //! Filter data received of AMC board
      bool
      translate(void)
      {
        int id;

        if (m_bfr[0] == c_all_data)
        {
          std::sscanf(m_bfr, "AI%d", &id);
          std::sscanf(m_bfr, "AI%*d,R%d,T%f,V%f,C%f",
                      &m_motor.rpm[id],&m_motor.tmp[id],
                      &m_motor.volt[id], &m_motor.current[id]);
          return true;
        }
        else if (m_bfr[0] == c_state_motor)
        {
          std::sscanf(m_bfr, "SI%d", &id);
          int state_motor;
          std::sscanf(m_bfr, "SI%*d,S%d", &state_motor);
          m_motor.state[id] = (bool)state_motor;
          return true;
        }

        return false;
      }

      //! Motor state.
      AMCMotorState m_motor;

    private:
      //! State machine state.
      AMCParserStates m_amc_state;
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
      //! Frame all data identifier.
      static const uint8_t c_all_data = 'A';
      //! Frame state identifier.
      static const uint8_t c_state_motor = 'S';
    };
  }
}

#endif
