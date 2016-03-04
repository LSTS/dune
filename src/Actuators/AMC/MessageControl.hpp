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

#ifndef ACTUATORS_MESSAGECONTROL_HPP_INCLUDED_
#define ACTUATORS_MESSAGECONTROL_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>

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
        struct AMCDataParser
        {
          //!ID motor
          uint8_t id[4];
          //!Func: rpm, tmp, pwr
          uint8_t func[8];
          //!Value of read
          uint8_t value[16];
          //!Voltage
          uint8_t voltage[16];
          //!Current
          uint8_t current[16];
        };

        struct AMCMotorState
        {
          //!RPM
          double rpm[4];
          //!Temperature
          double tmp[4];
          //!Voltage
          double volt[4];
          //!Current
          double current[4];
        };

        enum AMCParserstates
        {
          // Read preamble
          PS_PREAMBLE,
          // ID motor
          PS_ID,
          // Read mode
          PS_MODE,
          // Read data
          PS_VALUE,
          //Read volt and current
          PS_PWR,
          // Read checksum
          PS_CS
        }; 

        uint8_t
        CRC8(unsigned char *data)
        {
          uint8_t csum = 0x00;
          uint8_t t = 0;
          while(data[t] != '*')
          {
            csum ^= data[t];
            t++;
          }

          return csum;
        }

        void
        ParserAMC( uint8_t byte)
        {
          switch(m_amc_state)
          {
            case PS_PREAMBLE:
              if(byte == c_preamble)
              {
                m_csum = byte;
                m_amc_state = PS_ID;
                cnt = 0;
                memset(&m_amc_data.id, '\0', sizeof(m_amc_data.id));
              }
              break;

            case PS_ID:
              if(byte != ',')
              {
                m_amc_data.id[cnt++] = byte;
                m_csum ^= byte;
              }
              else
              {
                m_csum ^= byte;
                m_amc_state = PS_MODE;
                cnt = 0;
                memset(&m_amc_data.func, '\0', sizeof(m_amc_data.func));
              }
              break;

            case PS_MODE:
              if(byte != ',')
              {
                m_amc_data.func[cnt++] = byte;
                m_csum ^= byte;
              }
              else
              {
                m_csum ^= byte;
                if(strstr((char*)m_amc_data.func, "pwr") != NULL)
                  m_amc_state = PS_PWR;
                else
                  m_amc_state = PS_VALUE;
                cnt = 0;
                memset(&m_amc_data.value, '\0', sizeof(m_amc_data.value));
                switch_pwr = 0;
              }
              break;

            case PS_VALUE:
              if(byte != '*')
              {
                m_amc_data.value[cnt++] = byte;
                m_csum ^= byte;
              }
              else
              {
                m_amc_state = PS_CS;
                cnt = 0;
              }
              break;

            case PS_PWR:
              if(byte != '*' && byte != ',')
              {
                m_amc_data.value[cnt++] = byte;
                m_csum ^= byte;
              }
              else
              {
                if(!switch_pwr)
                {
                  sprintf((char*)m_amc_data.voltage, "%s", (char*)m_amc_data.value);
                  switch_pwr = 1;
                  memset(&m_amc_data.value, '\0', sizeof(m_amc_data.value));
                  cnt = 0;
                  m_csum ^= byte;
                }
                else
                {
                  sprintf((char*)m_amc_data.current, "%s", (char*)m_amc_data.value);
                  m_amc_state = PS_CS;
                  cnt = 0;
                }
              }
              break;

            case PS_CS:
              //printf("MEU: %2x REC: %2x\n", m_csum, byte);
              if(m_csum == byte)
              {
                FilterData(m_amc_data);
              }
              m_amc_state = PS_PREAMBLE;
              break;

            default:
              m_amc_state = PS_PREAMBLE;
              break;
          }
        }

        void
        FilterData (struct AMCDataParser _amc_data)
        {
          //printf("ID: %d\n", atoi((const char*)_amc_data.id));
          //printf("FUNC: %s\n", _amc_data.func);
          if(strstr((char*)_amc_data.func, "rpm") != NULL)
          {
            /* RPM */
            m_motor.rpm[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.value);
            //printf("RPM: %.0f\n", m_motor.rpm[atoi((const char*)_amc_data.id)]);
          }
          else if(strstr((char*)_amc_data.func, "tmp") != NULL)
          {
            /* TMP */
            m_motor.tmp[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.value);
            //printf("TEMPERATURE: %.2f\n", m_motor.tmp[atoi((const char*)_amc_data.id)]);
          }
          else if(strstr((char*)_amc_data.func, "pwr") != NULL)
          {
            /* VOLT/CURRENT */
            m_motor.volt[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.voltage);
            //printf("VOLTAGE: %.2f\n", m_motor.volt[atoi((const char*)_amc_data.id)]);
            m_motor.current[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.current);
            //printf("CURRENT: %.2f\n", m_motor.current[atoi((const char*)_amc_data.id)]);
          }
        }
        
        // Parser variables
        AMCParserstates m_amc_state;
        AMCDataParser m_amc_data;
        AMCMotorState m_motor;

        uint8_t m_csum;
        uint8_t cnt;
        bool switch_pwr;

      private:
        static const uint8_t c_preamble = '$';
    };
  }
}

#endif
