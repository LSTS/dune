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

#ifndef SENSORS_DRIVER_DMS_HPP_INCLUDED_
#define SENSORS_DRIVER_DMS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

#define ERRO1 "Wrong CSUM"
#define ERRO2 "Wrong Mode (E or D)"
#define ERRO3 "Wrong Sample Rate"
#define ERRO4 "Unrecognized Command"
#define ERRO5 "Error Setting Sample Rate(Stop Readings of ADC first)"

namespace Sensors
{
  namespace DMS
  {
    //! Message Parser for DMS.
    //!
    //! @author Pedro Gonçalves
    class DriverDMS
    {
    public:
      struct DMSState
      {
        //! Value read from adc
        long int value;
        //! ADC Channel
        int channel;
      };

      //! State machine.
      enum DMSParserStates
      {
        //! Read preamble
        PS_PREAMBLE,
        //! Data received
        PS_DATA,
        //! Read checksum
        PS_CS
      };

      DriverDMS(void):
        m_dms_state(DriverDMS::PS_PREAMBLE)
      { }

      ~DriverDMS(void)
      { }

      //! Parse message received
      bool
      parse(uint8_t byte)
      {
        switch (m_dms_state)
        {
          case PS_PREAMBLE:
            if (byte == c_preamble)
            {
              m_csum = byte;
              m_dms_state = PS_DATA;
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
              m_dms_state = PS_CS;
            break;

          case PS_CS:
            m_dms_state = PS_PREAMBLE;

            if (m_csum == byte)
              return true;
            break;

          default:
            m_dms_state = PS_PREAMBLE;
            break;
        }

        return false;
      }

      //! Filter data received of DMS board
      bool
      translate(void)
      {
        if (m_bfr[1] == ',' || m_bfr[2] == ',')
        {
          std::sscanf(m_bfr, "%d,%ld,*", &m_dms.channel, &m_dms.value);
          std::memset(&m_bfr, '\0', sizeof(m_bfr));
          return true;
        }
        return false;
      }

      std::string
      translate_feadback(void)
      {
        //! Feadback message
        char feadback_msg[16];
        if (m_bfr[1] != ',')
        {
          std::sscanf(m_bfr, "%s ,*", feadback_msg);
          std::memset(&m_bfr, '\0', sizeof(m_bfr));

          if(std::strcmp(feadback_msg, "ERRO,1") == 0)
            return ERRO1;
          else if(std::strcmp(feadback_msg, "ERRO,2") == 0)
            return ERRO2;
          else if(std::strcmp(feadback_msg, "ERRO,3") == 0)
            return ERRO3;
          else if(std::strcmp(feadback_msg, "ERRO,4") == 0)
            return ERRO4;
          else if(std::strcmp(feadback_msg, "ERRO,5") == 0)
            return ERRO5;
          else if(std::strcmp(feadback_msg, "OK") == 0)
            return feadback_msg;
        }

        return "";
      }

      //! Enable Output data of DMS
      char*
      enable_output(void)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#0,E,*");
        std::sprintf(m_send_bfr, "#0,E,*%c\r\n", Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! Disable Output data of DMS
      char*
      disable_output(void)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#0,D,*");
        std::sprintf(m_send_bfr, "#0,D,*%c\r\n", Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! Set number of channels/second
      char*
      set_sample_ps(int value)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#1,F,%d,*", value);
        std::sprintf(m_send_bfr, "#1,F,%d,*%c\r\n", value, Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! DMS state.
      DMSState m_dms;

    private:
      //! State machine.
      DMSParserStates m_dms_state;
      //! Checksum.
      uint8_t m_csum;
      //! Position in buffer.
      uint8_t m_cnt;
      //! Received buffer.
      char m_bfr[16];
      //! Received buffer.
      char m_send_bfr[32];
      //! Frame preamble.
      static const uint8_t c_preamble = '$';
      //! Frame terminator.
      static const uint8_t c_terminator = '*';
    };
  }
}

#endif
