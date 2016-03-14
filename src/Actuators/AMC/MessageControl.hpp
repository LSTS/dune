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
          //!RPM
          uint8_t rpm[16];
          //!temperature
          uint8_t tmp[16];
          //!Voltage
          uint8_t volt[16];
          //!Current
          uint8_t current[16];
          //!State
          uint8_t state[16];
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
          //!State of motor
          bool state[4];
        };

        enum AMCParserstates
        {
          // Read preamble
          PS_PREAMBLE,
          // ID motor
          PS_ID,
          // Read mode
          PS_MODE,
          // Read rpm data
          PS_RPM,
          // Read temperature data
          PS_TMP,
          //Read volt and current
          PS_PWR,
          //Read all parameters
          PS_ALL,
          //Read state of motors
          PS_STATE,
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
                m_cnt = 0;
                memset(&m_amc_data.id, '\0', sizeof(m_amc_data.id));
              }
              break;

            case PS_ID:
              if(byte != ',')
              {
                m_amc_data.id[m_cnt++] = byte;
                m_csum ^= byte;
              }
              else
              {
                m_csum ^= byte;
                m_amc_state = PS_MODE;
                m_cnt = 0;
                memset(&m_amc_data.func, '\0', sizeof(m_amc_data.func));
              }
              break;

            case PS_MODE:
              if(byte != ',')
              {
                m_amc_data.func[m_cnt++] = byte;
                m_csum ^= byte;
              }
              else
              {
                m_csum ^= byte;
                if(strstr((char*)m_amc_data.func, "pwr") != NULL)
                {
                  memset(&m_amc_data.volt, '\0', sizeof(m_amc_data.volt));
                  memset(&m_amc_data.current, '\0', sizeof(m_amc_data.current));
                  m_amc_state = PS_PWR;
                  m_switch_pwr = 0;
                }
                else if(strstr((char*)m_amc_data.func, "all") != NULL)
                {
                  memset(&m_amc_data.volt, '\0', sizeof(m_amc_data.volt));
                  memset(&m_amc_data.current, '\0', sizeof(m_amc_data.current));
                  memset(&m_amc_data.rpm, '\0', sizeof(m_amc_data.rpm));
                  memset(&m_amc_data.tmp, '\0', sizeof(m_amc_data.tmp));
                  m_amc_state = PS_ALL;
                  m_switch_all = 0;
                }
                else if(strstr((char*)m_amc_data.func, "rpm") != NULL)
                {
                  m_amc_state = PS_RPM;
                  memset(&m_amc_data.rpm, '\0', sizeof(m_amc_data.rpm));
                }
                else if(strstr((char*)m_amc_data.func, "tmp") != NULL)
                {
                  m_amc_state = PS_TMP;
                  memset(&m_amc_data.tmp, '\0', sizeof(m_amc_data.tmp));
                }
                else if(strstr((char*)m_amc_data.func, "sta") != NULL)
                {
                  m_amc_state = PS_STATE;
                  memset(&m_amc_data.state, '\0', sizeof(m_amc_data.state));
                }
                else
                  m_amc_state = PS_PREAMBLE;
                  
                m_cnt = 0;
              }
              break;

            case PS_RPM:
              if(byte != '*')
              {
                m_amc_data.rpm[m_cnt++] = byte;
                m_csum ^= byte;
              }
              else
              {
                m_amc_state = PS_CS;
                m_cnt = 0;
              }
              break;

            case PS_STATE:
              if(byte != '*')
              {
                m_amc_data.state[m_cnt++] = byte;
                m_csum ^= byte;
              }
              else
              {
                m_amc_state = PS_CS;
                m_cnt = 0;
              }
              break;

            case PS_TMP:
              if(byte != '*')
              {
                m_amc_data.tmp[m_cnt++] = byte;
                m_csum ^= byte;
              }
              else
              {
                m_amc_state = PS_CS;
                m_cnt = 0;
              }
              break;

            case PS_ALL:
              if(byte != '*' && byte != ',')
              {
                if(m_switch_all == 0)
                {
                  m_amc_data.rpm[m_cnt++] = byte;
                  m_csum ^= byte;
                }
                else if(m_switch_all == 1)
                {
                  m_amc_data.tmp[m_cnt++] = byte;
                  m_csum ^= byte;
                }
                else if(m_switch_all == 2)
                {
                  m_amc_data.volt[m_cnt++] = byte;
                  m_csum ^= byte;
                }
                else if(m_switch_all == 3)
                {
                  m_amc_data.current[m_cnt++] = byte;
                  m_csum ^= byte;
                }
              }
              else
              {
                if(m_switch_all <= 2)
                {
                  m_switch_all++;;
                  m_cnt = 0;
                  m_csum ^= byte;
                }
                else
                {
                  m_amc_state = PS_CS;
                  m_cnt = 0;
                }
              }
              break;

            case PS_PWR:
              if(byte != '*' && byte != ',')
              {
                if(!m_switch_pwr)
                {
                  m_amc_data.volt[m_cnt++] = byte;
                  m_csum ^= byte;
                }
                else
                {
                  m_amc_data.current[m_cnt++] = byte;
                  m_csum ^= byte;
                }
                
              }
              else
              {
                if(!m_switch_pwr)
                {
                  m_switch_pwr = 1;
                  m_cnt = 0;
                  m_csum ^= byte;
                }
                else
                {
                  m_amc_state = PS_CS;
                  m_cnt = 0;
                }
              }
              break;

            case PS_CS:
              //printf("MEU: %2x REC: %2x\n", m_csum, byte);
              if(m_csum == byte)
                FilterData(m_amc_data);

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
          if(strstr((char*)_amc_data.func, "rpm") != NULL)
          {
            // RPM 
            memset(&m_motor.rpm[atoi((const char*)_amc_data.id)], '\0', sizeof(m_motor.rpm[atoi((const char*)_amc_data.id)]));
            m_motor.rpm[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.rpm);
          }
          else if(strstr((char*)_amc_data.func, "tmp") != NULL)
          {
            // TMP
            memset(&m_motor.tmp[atoi((const char*)_amc_data.id)], '\0', sizeof(m_motor.tmp[atoi((const char*)_amc_data.id)]));
            m_motor.tmp[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.tmp);
          }
          else if(strstr((char*)_amc_data.func, "pwr") != NULL)
          {
            memset(&m_motor.volt[atoi((const char*)_amc_data.id)], '\0', sizeof(m_motor.volt[atoi((const char*)_amc_data.id)]));
            memset(&m_motor.current[atoi((const char*)_amc_data.id)], '\0', sizeof(m_motor.current[atoi((const char*)_amc_data.id)]));
            // VOLT/CURRENT
            m_motor.volt[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.volt);
            m_motor.current[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.current);
          }
          else if(strstr((char*)_amc_data.func, "sta") != NULL)
          {
            memset(&m_motor.state[atoi((const char*)_amc_data.id)], '\0', sizeof(m_motor.state[atoi((const char*)_amc_data.id)]));
            // State
            m_motor.state[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.state);
          }
          else if(strstr((char*)_amc_data.func, "all") != NULL)
          {
            memset(&m_motor.rpm[atoi((const char*)_amc_data.id)], '\0', sizeof(m_motor.rpm[atoi((const char*)_amc_data.id)]));
            m_motor.rpm[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.rpm);
            memset(&m_motor.tmp[atoi((const char*)_amc_data.id)], '\0', sizeof(m_motor.tmp[atoi((const char*)_amc_data.id)]));
            m_motor.tmp[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.tmp);
            memset(&m_motor.volt[atoi((const char*)_amc_data.id)], '\0', sizeof(m_motor.volt[atoi((const char*)_amc_data.id)]));
            m_motor.volt[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.volt);
            memset(&m_motor.current[atoi((const char*)_amc_data.id)], '\0', sizeof(m_motor.current[atoi((const char*)_amc_data.id)]));
            m_motor.current[atoi((const char*)_amc_data.id)] = atof((const char*)_amc_data.current);
          }
        }

        // Parser variables
        AMCParserstates m_amc_state;
        AMCDataParser m_amc_data;
        AMCMotorState m_motor;

        uint8_t m_csum;
        uint8_t m_cnt;
        bool m_switch_pwr;
        uint8_t m_switch_all;

      private:
        static const uint8_t c_preamble = '$';
    };
  }
}

#endif
