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

#ifndef SENSORS_DRIVER_SADC_HPP_INCLUDED_
#define SENSORS_DRIVER_SADC_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

#define ERRO1 "Wrong CSUM"
#define ERRO2 "Wrong Mode (E, D, S and O)"
#define ERRO3 "Wrong Sample Rate"
#define ERRO4 "Wrong maximum value"
#define ERRO5 "Wrong minimum value"
#define ERRO6 "Wrong value for auto-switch"
#define ERRO7 "Unrecognized command"
#define ERRO8 "Wrong value of fixed gain"

namespace Sensors
{
  namespace SADC
  {
    //! Message Parser for SADC.
    //!
    //! @author Pedro Gonçalves
    class DriverSADC
    {
    public:
      //! Motor data.
      struct SADCState
      {
        //! Value read from adc
        long int value;
        //! ADC Channel
        int channel;
        //! ADC Gain
        int gain;
      };

      //! State machine.
      enum SADCParserStates
      {
        //! Read preamble
        PS_PREAMBLE,
        //! Data received
        PS_DATA,
        //! Read checksum
        PS_CS
      };

      DriverSADC(void):
        m_sadc_state(DriverSADC::PS_PREAMBLE)
      { }

      ~DriverSADC(void)
      { }

      //! Parse message received
      bool
      parse(uint8_t byte)
      {
        switch (m_sadc_state)
        {
          case PS_PREAMBLE:
            if (byte == c_preamble)
            {
              m_csum = byte;
              m_sadc_state = PS_DATA;
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
              m_sadc_state = PS_CS;
            break;

          case PS_CS:
            m_sadc_state = PS_PREAMBLE;

            if (m_csum == byte)
              return true;
            break;

          default:
            m_sadc_state = PS_PREAMBLE;
            break;
        }

        return false;
      }

      //! Filter data received of SADC board
      bool
      translate(void)
      {
        if (m_bfr[1] == ',')
        {
          std::sscanf(m_bfr, "%d,%ld,%d,*", &m_sadc.channel, &m_sadc.value, &m_sadc.gain);
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
          else if(std::strcmp(feadback_msg, "ERRO,6") == 0)
            return ERRO6;
          else if(std::strcmp(feadback_msg, "ERRO,7") == 0)
            return ERRO7;
          else if(std::strcmp(feadback_msg, "ERRO,8") == 0)
            return ERRO8;
          else if(std::strcmp(feadback_msg, "OK") == 0)
            return feadback_msg;
        }

        return "";
      }

      //! Enable Output data of SADC
      char*
      enable_output(void)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#0,E,*");
        std::sprintf(m_send_bfr, "#0,E,*%c\r\n", Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! Disable Output data of SADC
      char*
      disable_output(void)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#0,D,*");
        std::sprintf(m_send_bfr, "#0,D,*%c\r\n", Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! Disable Channel ADC
      char*
      disable_channel(int channel)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#%d,O,*", channel);
        std::sprintf(m_send_bfr, "#%d,O,*%c\r\n", channel, Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! Enable Channel ADC
      char*
      enable_channel(int channel)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#%d,S,*", channel);
        std::sprintf(m_send_bfr, "#%d,S,*%c\r\n", channel, Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! Enable auto-gain in Channel ADC
      char*
      enable_auto_gain(int channel)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#%d,A,*", channel);
        std::sprintf(m_send_bfr, "#%d,A,*%c\r\n", channel, Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! Set number of sample/second
      char*
      set_sample_ps(int value)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#1,F,%d,*", value);
        std::sprintf(m_send_bfr, "#1,F,%d,*%c\r\n", value, Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! Set number of sample before switch auto-gain
      char*
      set_number_sample_sw(int value)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#1,C,%d,*", value);
        std::sprintf(m_send_bfr, "#1,C,%d,*%c\r\n", value, Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! Set minimum voltage to switch auto-gain
      char*
      set_min_change_gain(int channel, float value)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#%d,-,%f,*", channel, value);
        std::sprintf(m_send_bfr, "#%d,-,%f,*%c\r\n", channel, value, Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! Set maximum voltage to switch auto-gain
      char*
      set_max_change_gain(int channel, float value)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#%d,+,%f,*", channel, value);
        std::sprintf(m_send_bfr, "#%d,+,%f,*%c\r\n", channel, value, Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! Disable auto-gain in channel, define static gain
      char*
      fix_gain(int channel, int value)
      {
        std::memset(&m_send_bfr, '\0', sizeof(m_send_bfr));
        std::sprintf(m_send_bfr, "#%d,G,%d,*", channel, value);
        std::sprintf(m_send_bfr, "#%d,G,%d,*%c\r\n", channel, value, Algorithms::XORChecksum::compute((uint8_t*)m_send_bfr, strlen(m_send_bfr) - 1));

        return m_send_bfr;
      }

      //! SADC state.
      SADCState m_sadc;

    private:
      //! State machine.
      SADCParserStates m_sadc_state;
      //! Checksum.
      uint8_t m_csum;
      //! Position in buffer.
      uint8_t m_cnt;
      //! Received buffer.
      char m_bfr[64];
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
