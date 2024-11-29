//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef USERINTERFACES_MANTACORE_MANTAUTILS_HPP_INCLUDED_
#define USERINTERFACES_MANTACORE_MANTAUTILS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace UserInterfaces
{
  namespace MantaCore
  {
    using DUNE_NAMESPACES;

    //! Read buffer size.
    constexpr size_t c_read_buffer_size         = 4096;
    //! Line initial character.
    static const char c_line_init = '$';
    //! Line termination character.
    static const char c_line_term = '\n';

    constexpr int c_max_values_voltage          = 12;
    constexpr int c_max_values_current          = 7;
    constexpr int c_max_number_pac_sensors      = 3;

    constexpr float c_delay_next_free_text_line = 3.5f;

    constexpr int c_max_power_channels          = 9;
    constexpr float c_timeout_data_in           = 1.0f;

    constexpr int MAX_SIZE_SERIAL_DATA          = 256;

    constexpr float TIME_TO_RX_DATA             = 10.0f;
    constexpr int MAX_LINE_FREE_TEXT            = 4;
    constexpr int MAX_BQ_INPUT_DATA             = 16;
    constexpr int MAX_PAC_INPUT_DATA            = 3;

    constexpr char BYTE_PREAMBLE                = '$';
    constexpr char BYTE_CSUM                    = '*';
    constexpr char BYTE_ACK                     = 'A';
    constexpr char BYTE_BQ_DATA                 = 'B';
    constexpr char BYTE_BQ_CELL                 = 'c';
    constexpr char BYTE_CHANNEL_DATA            = 'C';
    constexpr char BYTE_DATA_POWER              = 'D';
    constexpr char BYTE_FIRMWARE                = 'f';
    constexpr char BYTE_HEADING                 = 'h';
    constexpr char BYTE_BQ_INFO                 = 'i';
    constexpr char BYTE_KWON_AMODEMS            = 'K';
    constexpr char BYTE_STATUS                  = 'k';
    constexpr char BYTE_LAST                    = 'L';
    constexpr char BYTE_LTC_DATA                = 'l';
    constexpr char BYTE_AMODEM                  = 'm';
    constexpr char BYTE_CPU                     = 'M';
    constexpr char BYTE_CELL_NUMBER             = 'n';
    constexpr char BYTE_NACK                    = 'N';
    constexpr char BYTE_CPU_OFF                 = 'o';
    constexpr char BYTE_PAC_DATA                = 'p';
    constexpr char BYTE_SAT                     = 'S';
    constexpr char BYTE_FREE_TEXT               = 'T';
    constexpr char BYTE_CPU_OK                  = 'V';
    constexpr char BYTE_CPU_DISCONNECT          = 'v';
    constexpr char BYTE_RANGE                   = 'R';
    constexpr char BYTE_ABORT                   = 'X';

    enum BQ_DATA_TYPE
    {
      BQ_GENERAL = 0,
      BQ_CELL,
      BQ_INFO,
    };

    enum DATA_POWER
    {
      POWER_VOLTAGE = 0,
      POWER_CURRENT,
      POWER_TEMPERATURE,
      POWER_REMAINING_CAP,
      POWER_FULL_CAP,
      POWER_CELLS_INFO,
      POWER_TIME_FULL,
      POWER_TIME_DISCHARGE,
    };

    enum IMC_TYPE_MESSAGE_VOLTAGE
    {
      IMC_TYPE_BAT_VOLT = 0,
      IMC_TYPE_PAC1_VOLT,
      IMC_TYPE_PAC2_VOLT,
      IMC_TYPE_PAC3_VOLT,
      IMC_TYPE_BQ_VOLT,
      IMC_TYPE_BQ_CELL1_VOLT,
      IMC_TYPE_BQ_CELL2_VOLT,
      IMC_TYPE_BQ_CELL3_VOLT,
      IMC_TYPE_BQ_CELL4_VOLT,
      IMC_TYPE_BQ_CELL5_VOLT,
      IMC_TYPE_BQ_CELL6_VOLT,
      IMC_TYPE_BQ_CELL7_VOLT,
    };

    enum IMC_TYPE_MESSAGE_CURRENT
    {
      IMC_TYPE_BAT_AMP = 0,
      IMC_TYPE_PAC1_AMP,
      IMC_TYPE_PAC2_AMP,
      IMC_TYPE_PAC3_AMP,
      IMC_TYPE_BQ_AMP,
      IMC_TYPE_BQ_FULL_CAP_AMP,
      IMC_TYPE_BQ_REM_CAP_AMP,
    };

    enum CMD_STATE
    {
      CMD_WAITING = 0,
      CMD_NACK,
      CMD_ACK,
      CMD_IDLE,
      CMD_ERROR
    };

    enum PARSER_STATE
    {
      PARSER_PREAMBLE = 0,
      PARSER_DATA,
      PARSER_CSUM,
      PARSER_CHECK
    };

    struct Arguments
    {
      //! IO device (URI).
      std::string io_dev;
      //! Input timeout in seconds.
      float inp_tout;
      //! Compatible Firmware Version.
      std::string firm_version;
      //! UAN entity label.
      std::string uan_elabel;
      //! PAC entity labels.
      std::string pac_elabels[c_max_number_pac_sensors];
      //! Remaining Capacity entity label.
      std::string rcap_elabel;
      //! Full Capacity entity label.
      std::string fcap_elabel;
      //! BQMonitor entity label.
      std::string bq_elabel;
      //! Input number cell.
      unsigned int number_cell;
      //! Dispatch Fuel Level.
      bool dispatch_fuel_level;
      //! Level of battery percentage below which a warning will be thrown.
      float war_lvl;
      //! Level of battery percentage below which an error will be thrown.
      float err_lvl;
      //! Level of battery voltage below which an error will be thrown.
      float err_volt_lvl;
      //! Power Channels names.
      std::string power_channels_names[c_max_power_channels];
      //! Power Channels states.
      bool power_channels_states[c_max_power_channels];
      //! Get data.
      bool get_data;
    };

    struct ModemInfo
    {
      std::string address;
      bool state;
    };

    struct BQData
    {
      //! Voltage
      float voltage;
      //! Current
      float current;
      //! Temperature
      float temperature;
      //! Remaining capacity
      float r_cap;
      //! Full Charge Capacity
      float f_cap;
      //! Cell Voltage
      float cell_volt[MAX_BQ_INPUT_DATA];
      //! State of new data received
      bool state_new_data[MAX_BQ_INPUT_DATA];
      //! State of new data received from cells
      bool state_new_data_cells[MAX_BQ_INPUT_DATA];
      //! Time, in min to full empty battery
      float time_empty;
      //! Time, in min, to full charge of battery
      float time_full;
    };

    struct EntityInfo
    {
      IMC::EntityState::StateEnum state;
      Status::Code code;
      std::string text;
    };

    struct IMCData
    {
      //! Temperature message
      IMC::Temperature m_temp;
      //! Voltage messages
      IMC::Voltage m_volt[c_max_values_voltage];
      //! Current messages
      IMC::Current m_amp[c_max_values_current];
      //! Fuel Level message
      IMC::FuelLevel m_fuel;
    };

    struct LTCData
    {
      //! Voltage
      float voltage;
      //! Current
      float current;
      //! Flag new ltc data
      bool new_data_ltc;
    };

    struct PACData
    {
      //! Voltage
      float voltage[MAX_PAC_INPUT_DATA];
      //! Current
      float current[MAX_PAC_INPUT_DATA];
      //! Flag new pac data
      bool new_data_pac[MAX_PAC_INPUT_DATA];
    };

    //! Power Channel data structure.
    struct PowerChannel
    {
      IMC::PowerChannelState state;
      unsigned id;
      double sched_on;
      double sched_off;

      PowerChannel(void)
      {
        resetSchedules();
      }

      void
      resetSchedules(void)
      {
        sched_on = -1;
        sched_off = -1;
      }
    };

    //! Convenience type definition for a table of power channels.
    typedef std::map<std::string, PowerChannel*> PowerChannelMantaCore;

    uint8_t
    calcCRC8(const std::string data)
    {
      uint8_t csum = 0x00;
      size_t total = data.size();
      for (unsigned i = 0; i < total - 1; i++)
      {
        char c = data[i];
        if (c == BYTE_CSUM)
          break;
        csum ^= c;
      }
      return (csum | 0x80);
    }

    std::string
    getIOName(const std::string &name_io)
    {
      size_t pos = name_io.find("://");
      if (pos != std::string::npos)
        return name_io.substr(pos + 3);
      else
        return name_io;
    }

    bool
    getInterfaceIP(const std::string& interfaceName, std::string& ipAddress)
    {
      char command[100];
      std::snprintf(command, sizeof(command), "ifconfig %s 2>/dev/null", interfaceName.c_str());
      FILE *fp = popen(command, "r");
      if (fp == nullptr)
        return false;

      char line[256];
      bool found = false;
      while (fgets(line, sizeof(line), fp) != nullptr)
      {
        if (std::strstr(line, "inet ") != nullptr)
        {
          char *token = strtok(line, " ");
          while (token != nullptr)
          {
            if (strstr(token, "inet") != nullptr)
            {
              token = strtok(NULL, " ");
              ipAddress = token;
              found = true;
              break;
            }
            token = strtok(NULL, " ");
          }
        }
      }
      pclose(fp);
      return found;
    }
  }
}

#endif /* USERINTERFACES_MANTACORE_MANTAUTILS_HPP_INCLUDED_ */