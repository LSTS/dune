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
//********************************************************************SENSORS
#ifndef SENSORS_VANTAGEPRO2_PARSER_HPP_INCLUDED_
#define SENSORS_VANTAGEPRO2_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

/* CCITT table of CRC values */
static uint16_t crc_table[] = {
    0x0,  0x1021, 0x2042,  0x3063, 0x4084,  0x50a5, 0x60c6,  0x70e7, 0x8108,  0x9129, 0xa14a,  0xb16b, 0xc18c,  0xd1ad, 0xe1ce,  0xf1ef, 0x1231,  0x210,  0x3273, 0x2252,  0x52b5, 0x4294,  0x72f7, 0x62d6,  0x9339,
    0x8318, 0xb37b,  0xa35a, 0xd3bd,  0xc39c, 0xf3ff,  0xe3de, 0x2462,  0x3443, 0x420, 0x1401,  0x64e6, 0x74c7,  0x44a4, 0x5485,  0xa56a, 0xb54b,  0x8528, 0x9509,  0xe5ee, 0xf5cf,  0xc5ac, 0xd58d,  0x3653, 0x2672,
    0x1611, 0x630, 0x76d7,  0x66f6, 0x5695,  0x46b4, 0xb75b,  0xa77a, 0x9719,  0x8738, 0xf7df,  0xe7fe, 0xd79d,  0xc7bc, 0x48c4,  0x58e5, 0x6886,  0x78a7, 0x840, 0x1861,  0x2802, 0x3823,  0xc9cc, 0xd9ed,  0xe98e,
    0xf9af, 0x8948,  0x9969, 0xa90a,  0xb92b, 0x5af5,  0x4ad4, 0x7ab7,  0x6a96, 0x1a71,  0xa50,  0x3a33, 0x2a12,  0xdbfd, 0xcbdc,  0xfbbf, 0xeb9e,  0x9b79, 0x8b58,  0xbb3b, 0xab1a,  0x6ca6, 0x7c87,  0x4ce4, 0x5cc5,
    0x2c22, 0x3c03,  0xc60,  0x1c41, 0xedae,  0xfd8f, 0xcdec,  0xddcd, 0xad2a,  0xbd0b, 0x8d68,  0x9d49, 0x7e97,  0x6eb6, 0x5ed5,  0x4ef4, 0x3e13,  0x2e32, 0x1e51,  0xe70,  0xff9f, 0xefbe,  0xdfdd, 0xcffc,  0xbf1b,
    0xaf3a, 0x9f59,  0x8f78, 0x9188,  0x81a9, 0xb1ca,  0xa1eb, 0xd10c,  0xc12d, 0xf14e,  0xe16f, 0x1080,  0xa1, 0x30c2,  0x20e3, 0x5004,  0x4025, 0x7046,  0x6067, 0x83b9,  0x9398, 0xa3fb,  0xb3da, 0xc33d,  0xd31c,
    0xe37f, 0xf35e,  0x2b1,  0x1290, 0x22f3,  0x32d2, 0x4235,  0x5214, 0x6277,  0x7256, 0xb5ea,  0xa5cb, 0x95a8,  0x8589, 0xf56e,  0xe54f, 0xd52c,  0xc50d, 0x34e2,  0x24c3, 0x14a0,  0x481,  0x7466, 0x6447,  0x5424,
    0x4405, 0xa7db,  0xb7fa, 0x8799,  0x97b8, 0xe75f,  0xf77e, 0xc71d,  0xd73c, 0x26d3,  0x36f2, 0x691, 0x16b0,  0x6657, 0x7676,  0x4615, 0x5634,  0xd94c, 0xc96d,  0xf90e, 0xe92f,  0x99c8, 0x89e9,  0xb98a, 0xa9ab,
    0x5844, 0x4865,  0x7806, 0x6827,  0x18c0, 0x8e1, 0x3882,  0x28a3, 0xcb7d,  0xdb5c, 0xeb3f,  0xfb1e, 0x8bf9,  0x9bd8, 0xabbb,  0xbb9a, 0x4a75,  0x5a54, 0x6a37,  0x7a16, 0xaf1, 0x1ad0,  0x2ab3, 0x3a92,  0xfd2e,
    0xed0f, 0xdd6c,  0xcd4d, 0xbdaa,  0xad8b, 0x9de8,  0x8dc9, 0x7c26,  0x6c07, 0x5c64,  0x4c45, 0x3ca2,  0x2c83, 0x1ce0,  0xcc1,  0xef1f, 0xff3e,  0xcf5d, 0xdf7c,  0xaf9b, 0xbfba,  0x8fd9, 0x9ff8,  0x6e17, 0x7e36,
    0x4e55, 0x5e74,  0x2e93, 0x3eb2,  0xed1,  0x1ef0,
};

// Import namespaces.
using DUNE_NAMESPACES;

namespace Sensors
{
  namespace VantagePro2
  {
    //! Message Parser for WeatherStation.
    //!
    //! @author João Costa
    class Parser
    {
    public:
      //! State machine states.
      enum ParserStates
      {
        PS_ACK,
        //! Read preamble 1
        PS_PREAMBLE_1,
        //! Read preamble 2
        PS_PREAMBLE_2,
        //! Read preamble 3
        PS_PREAMBLE_3,
        //! Data received 1
        PS_DATA_1,
        //! Data received 2
        PS_DATA_2,
        //! Read middle preamble 4
        PS_PREAMBLE_4,
        //! Read middle preamble 2
        PS_PREAMBLE_5,
        //! Read terminator 2
        PS_TERMINATOR_1,
        //! Read preamble 2
        PS_TERMINATOR_2,
        //! Csum
        PS_CSUM
      };

      //! Received buffer.
      char m_bfr[256];
      //! Message byte counter.
      uint8_t m_rx_byte_size;
      //! Console's ersion
      float m_console_version;

      //! Definition of Davis LOOP data packet
      struct __attribute__((__packed__)) LOOPData
      {
        uint8_t Ack;          // Acknowledge char
        char L;               // "L"
        char O1;              // "O"
        char O2;              // "O"
        char P;               // Barometer trend
        uint8_t PacketType;   // Always zero for current firmware release
        uint16_t NextRec;     // Loc in archive memory for next data packet
        uint16_t Barometer;   // Current barometer (Hg / 1000)
        int16_t InsideTemp;   // Inside Temperature (DegF / 10)
        uint8_t InsideHum;    // Inside Humidity (%)
        int16_t OutsideTemp;  // Outside Temperature (DegF / 10)
        uint8_t WindSpeed;    // Wind Speed
        uint8_t AvgWindSpeed; // 10-Minute Avg Wind Speed
        uint16_t WindDir;     // Wind Direction in degress
        int8_t XtraTemps[7];  // Extra Temperatures
        int8_t SoilTemps[4];  // Soil Temperatures
        int8_t LeafTemps[4];  // Leaf Temperatures
        uint8_t OutsideHum;   // Outside Humidity
        uint8_t XtraHums[7];  // Extra Humidities
        uint16_t RainRate;    // Rain Rate
        uint8_t UVLevel;      // UV Level
        uint16_t SolarRad;    // Solar Radiation
        uint16_t StormRain;   // Total Storm Rain
        uint16_t StormStart;  // Start date of current storm
        uint16_t RainDay;     // Rain Today
        uint16_t RainMonth;   // Rain this Month
        uint16_t RainYear;    // Rain this Year
        uint16_t ETDay;       // Day ET
        uint16_t ETMonth;     // Month ET
        uint16_t ETYear;      // Year ET
        uint32_t SoilMoist;   // Soil Moistures
        uint32_t LeafWet;     // Leaf Wetness
        uint8_t AlarmInside;  // Inside Alarm bits
        uint8_t AlarmRain;    // Rain Alarm bits
        uint16_t AlarmOut;    // Outside Temperature Alarm bits
        uint8_t AlarmXtra[8]; // Extra Temp/Hum Alarms
        uint32_t AlarmSL;     // Soil and Leaf Alarms
        uint8_t XmitBatt;     // Transmitter battery status
        uint16_t BattLevel;   // Console Battery Level: Voltage = ((wBattLevel * 300)/512)/100.0
        uint8_t ForeIcon;     // Forecast Icon
        uint8_t Rule;         // Forecast rule number
        uint16_t Sunrise;     // Sunrise time (BCD encoded, 24hr)
        uint16_t Sunset;      // Sunset time  (BCD encoded, 24hr)
        uint8_t LF;           // '\n' 0x0a
        uint8_t CR;           // '\r' 0x0d
        uint16_t WCRC;        // CRC check bytes (CCITT-16 standard) 2bytes
      };

      //! DAVIS' LOOP data packet data.
      LOOPData m_LOOPData;

      Parser(DUNE::Tasks::Task *task) : m_task(task),
                                        m_parser_state_OK(Parser::PS_PREAMBLE_1),
                                        m_parser_state_LOOP(Parser::PS_ACK)
      {
      }

      ~Parser(void)
      {
      }

      //! Parse message received
      bool
      parseLOOP(uint8_t byte)
      {
        switch (m_parser_state_LOOP)
        {
        case PS_ACK:
          if (byte == 0x06)
          {
            m_parser_state_LOOP = PS_PREAMBLE_1;
            m_cnt = 0;
            m_rx_byte_size = 0;
            std::memset(&m_bfr, '\0', sizeof(m_bfr));
            m_bfr[m_cnt++] = byte;
          }
          break;
        case PS_PREAMBLE_1:
          if (byte == 'L')
          {
            m_parser_state_LOOP = PS_PREAMBLE_2;
            m_bfr[m_cnt++] = byte;
          }
          else
          {
            m_parser_state_LOOP = PS_ACK;
          }
          break;
        case PS_PREAMBLE_2:
          if (byte == 'O')
          {
            m_parser_state_LOOP = PS_PREAMBLE_3;
            m_bfr[m_cnt++] = byte;
          }
          else
          {
            m_parser_state_LOOP = PS_ACK;
          }
          break;
        case PS_PREAMBLE_3:
          if (byte == 'O')
          {
            m_parser_state_LOOP = PS_DATA_1;
            m_bfr[m_cnt++] = byte;
          }
          else
          {
            m_parser_state_LOOP = PS_ACK;
          }
          break;
        case PS_DATA_1:
          if (byte != '\n')
          {
            m_bfr[m_cnt++] = byte;
          }
          else
          {
            m_parser_state_LOOP = PS_TERMINATOR_1;
            m_bfr[m_cnt++] = byte;
          }
          break;
        case PS_TERMINATOR_1:
          if (byte == '\r')
          {
            m_parser_state_LOOP = PS_CSUM;
            m_bfr[m_cnt++] = byte;
            m_rx_byte_size = m_cnt;
          }
          else
          {
            m_parser_state_LOOP = PS_ACK;
          }
          break;
        case PS_CSUM:
          m_bfr[m_cnt++] = byte;
          m_rx_byte_size = m_cnt;

          if (m_cnt == 100)
          {
            m_parser_state_LOOP = PS_ACK;
            int csum_calc = CheckCRC(99, m_bfr + 1);
            if (csum_calc == 0)
            {
              return true;
            }
            else
            {
              m_task->war("Checksum failed.");
              return false;
            }
          }
          else if (m_cnt >= 103)
          {
            m_task->war("Overflow loop message.");
            m_parser_state_LOOP = PS_ACK;
            return false;
          }
          break;
        default:
          m_parser_state_LOOP = PS_ACK;
          break;
        }
        return false;
      }

      //! Parse message received
      bool
      parseOK(uint8_t byte)
      {
        switch (m_parser_state_OK)
        {
        case PS_PREAMBLE_1:
          if (byte == '\n')
          {
            m_parser_state_OK = PS_PREAMBLE_2;
            m_cnt = 0;
            m_rx_byte_size = 0;
            std::memset(&m_bfr, '\0', sizeof(m_bfr));
          }
          break;
        case PS_PREAMBLE_2:
          if (byte == '\r')
          {
            m_parser_state_OK = PS_DATA_1;
          }
          else
          {
            m_parser_state_OK = PS_PREAMBLE_1;
          }
          break;
        case PS_DATA_1:
          if (byte != '\n')
          {
            m_bfr[m_cnt++] = byte;
          }
          else
          {
            m_parser_state_OK = PS_PREAMBLE_4;
            m_bfr[m_cnt++] = ' ';
          }
          break;
        case PS_PREAMBLE_4:
          if (byte == '\r')
          {
            m_parser_state_OK = PS_DATA_2;
          }
          else
          {
            m_parser_state_OK = PS_PREAMBLE_1;
          }
          break;
        case PS_DATA_2:
          if (byte != '\n')
          {
            m_bfr[m_cnt++] = byte;
          }
          else
          {
            m_parser_state_OK = PS_TERMINATOR_1;
          }
          break;
        case PS_TERMINATOR_1:
          if (byte == '\r')
          {
            m_parser_state_OK = PS_PREAMBLE_1;
            return true;
          }
          else
          {
            m_parser_state_OK = PS_PREAMBLE_1;
          }
          break;
        default:
          m_parser_state_OK = PS_PREAMBLE_1;
          break;
        }
        return false;
      }

      //! Filter data received from doris sampler board.
      bool
      translate(bool waiting_LOOP) // TODO: (Maybe) receive last cmd and do a switch case.
      {
        std::string mbuf;
        if (waiting_LOOP) // TODO:  Check if "waiting_LOOP" is actually needed.
        {
          if (m_bfr[1] == 'L' && m_bfr[2] == 'O' && m_bfr[3] == 'O')
          {
            std::memcpy((char *)&m_LOOPData, &m_bfr, sizeof(LOOPData));
            printData();
            return true;
          }
        }
        else
        {
          if (m_bfr[0] == 'O' && m_bfr[1] == 'K')
          {
            float tempValue = 0;
            std::sscanf(m_bfr, "OK %f", &tempValue);
            m_console_version = tempValue;
            m_task->war("console version = %.02f", m_console_version);

            return true;
          }
        }
        return false;
      }

      void
      printData(void)
      {
        /*int16_t i;
        i = m_LOOPData.P;
        m_task->trace("BaroTrend = ");
        switch (i)
        {
        case -60:
          m_task->trace("Falling Rapidly");
          break;
        case -20:
          m_task->trace("Falling Slowly");
          break;
        case 0:
          m_task->trace("Steady");
          break;
        case 20:
          m_task->trace("Rising Slowly");
          break;
        case 60:
          m_task->trace("Rising Rapidly");
          break;
        default:
          m_task->trace("n/a-P");
        }
        m_task->trace("Baro Trend Img = ");
        switch (i)
        {
        case -60:
          m_task->trace("baro_fr");
          break;
        case -20:
          m_task->trace("baro_fs");
          break;
        case 0:
          m_task->trace("baro_s");
          break;
        case 20:
          m_task->trace("baro_rs");
          break;
        case 60:
          m_task->trace("baro_rr");
          break;
        default:
          m_task->trace("baro_none");
        }*/
        m_task->trace("BaroCurr = %2.2f", m_LOOPData.Barometer / 1000.0);
        m_task->trace("Inside Temp = %.1f", ((int16_t)m_LOOPData.InsideTemp) / 10.0);
        m_task->trace("Inside Hum = %d", m_LOOPData.InsideHum);
        m_task->trace("Outside Temp = %.1f", ((int16_t)m_LOOPData.OutsideTemp) / 10.0);
        m_task->trace("Wind Speed = %d", m_LOOPData.WindSpeed);
        m_task->trace("Wind Avg Speed = %d", m_LOOPData.AvgWindSpeed);
        m_task->trace("Wind Dir = %d", m_LOOPData.WindDir);
        m_task->trace("Wind Dir Rose = ");
        if (m_LOOPData.WindDir >= 347 && m_LOOPData.WindDir < 12)
          m_task->trace("N");
        else if (m_LOOPData.WindDir >= 12 && m_LOOPData.WindDir < 34)
          m_task->trace("NNE");
        else if (m_LOOPData.WindDir >= 34 && m_LOOPData.WindDir < 57)
          m_task->trace("NE");
        else if (m_LOOPData.WindDir >= 57 && m_LOOPData.WindDir < 79)
          m_task->trace("ENE");
        else if (m_LOOPData.WindDir >= 79 && m_LOOPData.WindDir < 102)
          m_task->trace("E");
        else if (m_LOOPData.WindDir >= 102 && m_LOOPData.WindDir < 124)
          m_task->trace("ESE");
        else if (m_LOOPData.WindDir >= 124 && m_LOOPData.WindDir < 147)
          m_task->trace("SE");
        else if (m_LOOPData.WindDir >= 147 && m_LOOPData.WindDir < 170)
          m_task->trace("SSE");
        else if (m_LOOPData.WindDir >= 170 && m_LOOPData.WindDir < 192)
          m_task->trace("S");
        else if (m_LOOPData.WindDir >= 192 && m_LOOPData.WindDir < 214)
          m_task->trace("SSW");
        else if (m_LOOPData.WindDir >= 214 && m_LOOPData.WindDir < 237)
          m_task->trace("SW");
        else if (m_LOOPData.WindDir >= 237 && m_LOOPData.WindDir < 259)
          m_task->trace("WSW");
        else if (m_LOOPData.WindDir >= 259 && m_LOOPData.WindDir < 280)
          m_task->trace("W");
        else if (m_LOOPData.WindDir >= 280 && m_LOOPData.WindDir < 303)
          m_task->trace("WNW");
        else if (m_LOOPData.WindDir >= 303 && m_LOOPData.WindDir < 347)
          m_task->trace("NW");
        else /*  >326 <347 */
          m_task->trace("NNW");

        m_task->trace("Outside Hum = %d", m_LOOPData.OutsideHum);
        //m_task->trace("Rain Rate = %.2f", m_LOOPData.RainRate / 100.0);
        //m_task->trace("Is Raining = %s", m_LOOPData.RainRate ? "yes" : "no");
        /*m_task->trace("UV Levev = ");
        if (m_LOOPData.UVLevel == 0xff)
          m_task->trace("n/a");
        else
          m_task->trace("%.1f", m_LOOPData.UVLevel / 10.0);
        m_task->trace("%s = ", SOLAR_RAD);
        if (m_LOOPData.SolarRad == 32767)
          m_task->trace("n/a");
        else
          m_task->trace("%d", m_LOOPData.SolarRad);*/
        //m_task->trace("Rain Storm = %.2f", m_LOOPData.StormRain / 100.0);
        //m_task->trace("Storm Start Date = 202020");
        //PrintDate(m_LOOPData.wStormStart);
        //m_task->trace("Day Rain= %.2f", m_LOOPData.RainDay / 100.0);
        //m_task->trace("Month Rain = %.2f", m_LOOPData.RainMonth / 100.0);
        //m_task->trace("Year Rain = %.2f", m_LOOPData.RainYear / 100.0);
        //m_task->trace("Day ET = %d", m_LOOPData.ETDay);
        //m_task->trace("Month ET = %d", m_LOOPData.ETMonth);
        //m_task->trace("XmitBat = %d", m_LOOPData.XmitBatt);
        m_task->trace("Battery Voltage = %.1f", ((m_LOOPData.BattLevel * 300) / 512) / 100.0);
        //m_task->trace("Forecast Icon = %d", m_LOOPData.ForeIcon);
        //m_task->trace("Foreast Rule = %d", m_LOOPData.Rule);
        //m_task->trace("Forecast String = 909090"); //, ForecastString(m_LOOPData.yRule));
        //m_task->trace("Sunrise = ", TimeConvert(m_LOOPData.wSunrise));
        //m_task->trace("Sunset = , TimeConvert(m_LOOPData.wSunset));
      }

    private:
      DUNE::Tasks::Task *m_task;
      //! State machine state.
      ParserStates m_parser_state_OK;
      //! State machine state.
      ParserStates m_parser_state_LOOP;
      //! Checksum.
      uint8_t m_csum;
      //! Position in buffer.
      uint8_t m_cnt;

      //! Frame preamble 1.
      static const char c_LF = '\n';
      //! Frame preamble 2.
      static const char c_CR = '\r';

      int CheckCRC(int nCnt, char *pData)
      {
        int i;
        uint16_t wCRC = 0; /* zero checksum to start   */
        uint8_t y;
        for (i = 0; i < nCnt; i++)
        {
          y = *(pData)++;
          wCRC = crc_table[(wCRC >> 8) ^ y] ^ (wCRC << 8); /* CCITT std */
        }
        return wCRC; /* if zero, it passed */
      }
    };
  } // namespace VantagePro2
} // namespace Hardware
#endif