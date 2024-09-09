//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef USERINTERFACES_MANTACORE_DRIVER_HPP_INCLUDED_
#define USERINTERFACES_MANTACORE_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "MantaUtils.hpp"

namespace UserInterfaces
{
  namespace MantaCore
  {
    using DUNE_NAMESPACES;
    static const int c_max_power_channels = 8;
    static const float c_timeout_data_in = 1.0;

    class DriverMantaCore
    {
    public:
      #define TIME_TO_RX_DATA       (2)
      #define MAX_LINE_FREE_TEXT    (4)
      #define MAX_BQ_INPUT_DATA     (16)
      #define MAX_PAC_INPUT_DATA    (3)
      #define BYTE_PREAMBLE         '$'
      #define BYTE_CSUM             '*'
      #define BYTE_MAG              'a'
      #define BYTE_ACK              'A'
      #define BYTE_BQ_DATA          'B'
      #define BYTE_BQ_CELL          'c'
      #define BYTE_CHANNEL_DATA     'C'
      #define BYTE_SEND_DATA        'd'
      #define BYTE_DATA_POWER       'D'
      #define BYTE_FIRMWARE         'f'
      #define BYTE_CHANNEL_OFF      'F'
      #define BYTE_BQ_INFO          'i'
      #define BYTE_LTC_DATA         'l'
      #define BYTE_AMODEM           'm'
      #define BYTE_CPU              'M'
      #define BYTE_CELL_NUMBER      'n'
      #define BYTE_NACK             'N'
      #define BYTE_CPU_OFF          'o'
      #define BYTE_CHANNEL_ON       'O'
      #define BYTE_PAC_DATA         'p'
      #define BYTE_STOP_DATA        's'
      #define BYTE_SAT              'S'
      #define BYTE_FREE_TEXT        'T'
      #define BYTE_CPU_OK           'V'

      enum PARSER_STATE {
        CMD_WAITING = 0,
        CMD_NACK,
        CMD_ACK,
        CMD_IDLE
      };

      enum DATA_POWER {
        POWER_VOLTAGE = 0,
        POWER_CURRENT,
        POWER_TEMPERATURE,
        POWER_REMAINING_CAP,
        POWER_FULL_CAP,
        POWER_CELLS_INFO,
        POWER_TIME_FULL,
        POWER_TIME_DISCHARGE,
      };

      enum POWER_CHANNEL {
        POWER_CHANNEL_GSM = 0,
        POWER_CHANNEL_IRIDIUM,
        POWER_CHANNEL_GNSS,
        POWER_CHANNEL_ETH,
        POWER_CHANNEL_WIFI,
        POWER_CHANNEL_AM1,
        POWER_CHANNEL_AM2,
        POWER_CHANNEL_SEATRAC
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

      struct PowerChannelData
      {
        //! Channel Label
        std::string label;
        //! Channel state
        bool is_on;
      };

      DriverMantaCore(DUNE::Tasks::Task *task, SerialPort *uart, int numberCell, std::string system_name) :
      m_task(task)
      {
        m_uart = uart;
        m_uart->flush();
        m_number_cells = numberCell;
        m_byte_in_state = BYTE_IN_PREAMBLE;
        m_new_rx_string = false;
        m_cnt_rx = 0;
        m_wdog.setTop(TIME_TO_RX_DATA);
        m_send_cmd_state = CMD_IDLE;
        m_task->inf("System Internal IP:%s", m_sys_ip.c_str());
        m_sys_name = system_name;
        m_task->inf("System Name:%s", m_sys_name.c_str());
        m_free_text_state = 0;
        m_com_error = false;
        m_is_to_turn_off_cpu = false;
        m_mutil = new MantaUtils(m_task);
        m_wdog_data_simulated.setTop(c_timeout_data_in);
        m_modem_number = 0;
        std::sprintf(m_free_text, "Manta Core");
      }

      ~DriverMantaCore(void) {}

      bool
      pollData(void)
      {
        if(m_send_cmd_state == CMD_WAITING && m_wdog.overflow())
        {
          m_send_cmd_state = CMD_IDLE;
          m_task->war("Fail receiving feedback from board");
          m_com_error = true;
        }

        if (!Poll::poll(*m_uart, 0.2))
          return false;

        size_t rv = m_uart->readString(m_bfr_rx, sizeof(m_bfr_rx));
        if(rv > 0)
        {
          addBytes(m_bfr_rx, rv);
          return true;
        }
        else
        {
          m_task->err("no data");
          return false;
        }
      }

      bool
      majorError(void)
      {
        return m_com_error;
      }

      uint8_t
      commandState(void)
      {
        return m_send_cmd_state;
      }

      void
      setupBoard(void)
      {
        requestConnectionToBoard();
        waitForFeedback();
        if(commandState() != CMD_ACK)
          throw RestartNeeded(DTR("Fail requestConnectionToBoard"), 5);

        requestFirmwareVersion();
        waitForFeedback();
        if(commandState() != CMD_ACK)
          throw RestartNeeded(DTR("Fail requestFirmwareVersion"), 5);

        setNumberCells();
        waitForFeedback();
        if(commandState() != CMD_ACK)
          throw RestartNeeded(DTR("Fail requestFirmwareVersion"), 5);
      }

      void
      requestConnectionToBoard(void)
      {
        m_task->debug("request connection to board");
        sprintf(cmd_text, "%c,%c,%c%c",BYTE_PREAMBLE, BYTE_CPU, BYTE_CPU_OK, '\0');
        sendCommand(cmd_text);
      }

      void
      requestFirmwareVersion(void)
      {
        m_task->debug("request firmware");
        sprintf(cmd_text, "%c,%c%c",BYTE_PREAMBLE, BYTE_FIRMWARE, '\0');
        sendCommand(cmd_text);
      }

      void
      setNumberCells(void)
      {
        m_task->debug("set number cells");
        sprintf(cmd_text, "%c,%c,%d%c",BYTE_PREAMBLE, BYTE_CELL_NUMBER, m_number_cells, '\0');
        sendCommand(cmd_text);
      }

      void
      setNumberSat(uint8_t sat_number)
      {
        m_task->debug("send sat number");
        sprintf(cmd_text, "%c,%c,%d%c",BYTE_PREAMBLE, BYTE_SAT, sat_number, '\0');
        sendCommand(cmd_text);
        waitForFeedback();
        if(commandState() != CMD_ACK)
        {
          m_task->war("Fail send sat number %d", sat_number);
        }
      }

      void
      setPowerChannelName(uint8_t id, std::string name)
      {
        m_power_channel_data[id].label = name;
      }

      bool
      setPowerChannelState(uint8_t power_channel, uint8_t pin_state)
      {
        m_task->debug("set power channel state %d|%s", power_channel, pin_state ? "ON" : "OFF");
        if(pin_state)
          sprintf(cmd_text, "%c,%c,%d,%c%c",BYTE_PREAMBLE, BYTE_CHANNEL_DATA, power_channel, BYTE_CHANNEL_ON, '\0');
        else
          sprintf(cmd_text, "%c,%c,%d,%c%c",BYTE_PREAMBLE, BYTE_CHANNEL_DATA, power_channel, BYTE_CHANNEL_OFF, '\0');
        sendCommand(cmd_text);
        waitForFeedback();
        if(commandState() != CMD_ACK)
        {
          m_task->war("Fail set state of power channel %d", power_channel + 1);
          return false;
        }
        else
        {
          if(pin_state == BYTE_CHANNEL_ON)
            m_power_channel_data[power_channel].is_on = true;
          else
            m_power_channel_data[power_channel].is_on = false;

          return true;
        }
      }

      void
      requestDataPower(void)
      {
        m_task->debug("request data power");
        sprintf(cmd_text, "%c,%c,%c%c",BYTE_PREAMBLE, BYTE_DATA_POWER, BYTE_SEND_DATA, '\0');
        sendCommand(cmd_text);
      }

      bool
      addModemNameDevice(std::string modem_name, uint8_t id)
      {
        m_task->debug("addModemNameDevice");
        sprintf(cmd_text, "%c,%c,%d,%s%c",BYTE_PREAMBLE, BYTE_AMODEM, id, modem_name.c_str(), '\0');
        sendCommand(cmd_text);
        waitForFeedback();
        if(commandState() != CMD_ACK)
        {
          m_task->war("Fail to send modem name %s|%d", modem_name.c_str(), id);
          return false;
        }
        return true;
      }

      void
      updateFreeText(void)
      {
        switch (m_free_text_state)
        {
          case 0:
            std::sprintf(m_free_text, "System: %s%c", m_sys_name.c_str(), '\0');
            break;

          case 1:
            if(m_mutil->getInterfaceIP("eth0", m_sys_ip))
              std::sprintf(m_free_text, "Int IP: %s%c", m_sys_ip.c_str(), '\0');
            else
              std::sprintf(m_free_text, "Int IP: Fail%c", '\0');
            break;

          case 2:
            if(m_mutil->getInterfaceIP("ztcfw4jwt3", m_sys_ip))
              std::sprintf(m_free_text, "Zero IP: %s%c", m_sys_ip.c_str(), '\0');
            else
              std::sprintf(m_free_text, "Zero IP: Fail%c", '\0');
            break;

          case 3:
            if(m_mutil->getInterfaceIP("wwan0", m_sys_ip))
              std::sprintf(m_free_text, "GPRS IP: %s%c", m_sys_ip.c_str(), '\0');
            else
              std::sprintf(m_free_text, "GPRS IP: Fail%c", '\0');
            break;

          default:
            break;
        }
        sendFreeText(m_free_text);
        m_free_text_state++;
        if(m_free_text_state >= MAX_LINE_FREE_TEXT)
          m_free_text_state = 0;
      }

      bool
      setPowerChannelData(uint8_t channel_id, std::string power_channel_name, uint8_t power_channel_state)
      {
        struct DriverMantaCore::PowerChannelData m_data;
        m_data.label = power_channel_name;
        if(power_channel_state == true)
          m_data.is_on = IMC::PowerChannelState::PCS_ON;
        else
          m_data.is_on = IMC::PowerChannelState::PCS_OFF;

        m_task->inf("Power Channel %s|%s", m_data.label.c_str(), m_data.is_on ? "ON" : "OFF");
        return setPowerChannelState(channel_id, m_data.is_on);
      }

      uint8_t
      getIdOfPowerChannel(std::string power_channel_name)
      {
        struct DriverMantaCore::PowerChannelData data_power;
        for(uint8_t i = 0; i < MantaCore::c_max_power_channels; i++)
        {
          data_power =getPowerChannelData(i);
          m_task->debug("%s | %s", data_power.label.c_str(), power_channel_name.c_str());
          if(data_power.label == power_channel_name)
            return i;
        }

        return 255;
      }

      void
      addModemNameToList(std::string modem_name)
      {
        m_task->debug("Modem: %s|%d", modem_name.c_str(), m_modem_number);
        addModemNameDevice(modem_name, m_modem_number);
        m_modem_names.push_back(modem_name);
        m_modem_number++;
      }

      std::string
      firmwareVersion(void)
      {
        return m_version;
      }

      void
      resetStateNewData(void)
      {
        for (uint8_t t = 0; t < MAX_BQ_INPUT_DATA; t++)
        {
          m_bqData.state_new_data[t] = false;
          m_bqData.state_new_data_cells[t] = false;
        }
      }

      void
      setBqNewData(uint8_t type_data, bool state, int8_t cell_id)
      {
        if(cell_id < 0)
          m_bqData.state_new_data[type_data] = state;
        else
          m_bqData.state_new_data_cells[cell_id] = state;
      }

      bool
      newBqDataType(uint8_t type_data, int8_t cell_id)
      {
        if(cell_id < 0)
          return m_bqData.state_new_data[type_data];
        else
          return m_bqData.state_new_data_cells[cell_id];
      }

      struct BQData
      getBqDataPower(void)
      {
        return m_bqData;
      }

      void
      setLTCNewData(bool state)
      {
        m_ltcData.new_data_ltc = state;
      }

      bool
      newLTCDataType(void)
      {
        return m_ltcData.new_data_ltc;
      }

      struct LTCData
      getLTCDataPower(void)
      {
        return m_ltcData;
      }

      void
      setPACNewData(bool state, uint8_t pac_id)
      {
        m_pacData.new_data_pac[pac_id] = state;
      }

      bool
      newPACDataType(uint8_t pac_id)
      {
        return m_pacData.new_data_pac[pac_id];
      }

      struct PACData
      getPACDataPower(void)
      {
        return m_pacData;
      }

      struct PowerChannelData
      getPowerChannelData(uint8_t channel)
      {
        return m_power_channel_data[channel];
      }

      bool
      isToTurnOffCPU(void)
      {
        return m_is_to_turn_off_cpu;
      }

      void
      simulatedDataUpdate(void)
      {
        if(m_wdog_data_simulated.overflow())
        {
          m_wdog_data_simulated.reset();
          dispatchGpsSimulatedData();
        }
      }

      uint8_t
      getSizeOfListNameModems(void)
      {
        return m_modem_names.size();
      }

      std::string
      getNameOfModemAt(uint8_t id)
      {
        return m_modem_names[id];
      }

      BQData m_bqData;
      LTCData m_ltcData;
      PACData m_pacData;
      PowerChannelData m_power_channel_data[c_max_power_channels];

    private:
      #define MAX_SIZE_SERIAL_DATA  (256)

      enum BYTE_IN_STATE {
          BYTE_IN_PREAMBLE = 0,
          BYTE_IN_DATA,
          BYTE_IN_CSUM,
          BYTE_IN_CHECK
      };

      enum BQ_DATA_TYPE {
          BQ_GENERAL = 0,
          BQ_CELL,
          BQ_INFO,
      };

      //! Parent task.
      DUNE::Tasks::Task *m_task;
      //! Manta Utils
      MantaUtils* m_mutil;
      //! number of cell to read
      int m_number_cells;
      //! Serial port handle.
      SerialPort *m_uart;
      //! System name
      std::string m_sys_name;
      //! System ip
      std::string m_sys_ip;
      //! Buffer uart tx
      char m_bfr_tx[64];
      //! Buffer uart rx
      char m_bfr_rx[MAX_SIZE_SERIAL_DATA];
      //! Buffer parser
      char m_rx_buf_parser[MAX_SIZE_SERIAL_DATA];
      //! Flag to control state of command send.
      uint8_t m_send_cmd_state;
      //! Byte in state
      uint8_t m_byte_in_state;
      //! Flag to control new string input
      bool m_new_rx_string;
      //! counter of data in
      uint16_t m_cnt_rx;
      //! Csum rx
      uint8_t m_csum_rx;
      //! Input watchdog.
      Time::Counter<float> m_wdog;
      //! Data Simulated watchdog.
      Time::Counter<float> m_wdog_data_simulated;
      //! String command
      char cmd_text[64];
      //! Firmware version
      std::string m_version;
      //| Free text state
      uint8_t m_free_text_state;
      //! Free text to send
      char m_free_text[128];
      //! major error in communication
      bool m_com_error;
      //! flag to control poweroff of cpu
      bool m_is_to_turn_off_cpu;
      //! Array of system modems names
      std::vector<std::string> m_modem_names;
      //! Counter of number of modems
      uint8_t m_modem_number;

      uint8_t
      calcCRC8(char *data_in)
      {
        uint8_t csum = 0x00;
        uint16_t t = 0;
        while (data_in[t] != BYTE_CSUM)
        {
          csum ^= data_in[t];
          t++;
        }
        return (csum | 0x80);
      }

      void
      parseDataIn(char byte_in)
      {
        switch (m_byte_in_state)
        {
          case BYTE_IN_PREAMBLE:
            if(byte_in == BYTE_PREAMBLE)
            {
              m_cnt_rx = 1;
              m_rx_buf_parser[0] = byte_in;
              m_rx_buf_parser[m_cnt_rx] = '\0';
              m_new_rx_string = false;
              m_byte_in_state = BYTE_IN_DATA;
            }
            break;

          case BYTE_IN_DATA:
            if(m_cnt_rx < MAX_SIZE_SERIAL_DATA)
            {
              m_rx_buf_parser[m_cnt_rx++] = byte_in;
              m_rx_buf_parser[m_cnt_rx] = '\0';
              if(byte_in == BYTE_CSUM)
                m_byte_in_state = BYTE_IN_CSUM;
            }
            else
            {
              m_cnt_rx = 0;
              m_rx_buf_parser[0] = '\0';
              m_new_rx_string = false;
              m_byte_in_state = BYTE_IN_PREAMBLE;
              m_task->war("[PARSER]:OVERFLOW BUF RX\n");
            }
            break;

          case BYTE_IN_CSUM:
            m_csum_rx = byte_in;
            m_byte_in_state = BYTE_IN_CHECK;
            break;

          case BYTE_IN_CHECK:
            checkDataIn();
            m_cnt_rx = 0;
            m_rx_buf_parser[0] = '\0';
            m_byte_in_state = BYTE_IN_PREAMBLE;
            break;

          default:
            m_cnt_rx = 0;
            m_rx_buf_parser[0] = '\0';
            m_new_rx_string = false;
            m_byte_in_state = BYTE_IN_PREAMBLE;
            break;
        }
      }

      void
      checkDataIn(void)
      {
        if(m_csum_rx == calcCRC8(m_rx_buf_parser))
        {
          char mode_info;
          std::sscanf(m_rx_buf_parser, "$,%c,%*s", &mode_info);
          switch (mode_info)
          {
            case BYTE_ACK:
              m_send_cmd_state = CMD_ACK;
              break;

            case BYTE_NACK:
              m_send_cmd_state = CMD_NACK;
              break;

            case BYTE_FIRMWARE:
              m_version = getStringAt(m_rx_buf_parser, 2, ',');
              break;

            case BYTE_DATA_POWER:
              char data_type;
              std::sscanf(m_rx_buf_parser, "$,D,%c,%*s", &data_type);
              switch (data_type)
              {
                case BYTE_BQ_DATA:
                  decodeBqData(BQ_GENERAL);
                  break;

                case BYTE_BQ_CELL:
                  decodeBqData(BQ_CELL);
                  break;

                case BYTE_BQ_INFO:
                  decodeBqData(BQ_INFO);
                  break;

                case BYTE_LTC_DATA:
                  std::sscanf(m_rx_buf_parser, "$,D,l,%f,%f,%*s", &m_ltcData.voltage, &m_ltcData.current);
                  setLTCNewData(true);
                  m_task->debug("LTC: volt:%.2fV | curr:%.2fA", m_ltcData.voltage, m_ltcData.current);
                  break;

                case BYTE_PAC_DATA:
                  int id;
                  float v, a;
                  std::sscanf(m_rx_buf_parser, "$,D,p,%d,%f,%f,%*s", &id, &v, &a);
                  m_pacData.voltage[id - 1] = v;
                  m_pacData.current[id - 1] = a / 1000.0;
                  setPACNewData(true, id - 1);
                  m_task->debug("PAC%d: volt:%.2fV | curr:%.2fA", id, m_pacData.voltage[id - 1], m_pacData.current[id - 1]);
                  break;

                default:
                  m_task->war("IN:%s", m_rx_buf_parser);
                  break;
                }
              break;

            case BYTE_CPU_OFF:
              m_is_to_turn_off_cpu = true;
              break;

            default:
              m_task->war("IN:%s", m_rx_buf_parser);
              break;
          }
        }
        else
        {
          m_task->inf("Wrong csum message");
        }
      }

      void
      addBytes(char *data_in, uint16_t size_data_in)
      {
        for(uint16_t i = 0; i < size_data_in; i++)
        {
          parseDataIn(data_in[i]);
        }
      }

      bool
      sendCommand(std::string text_cmd)
      {
        if(m_send_cmd_state != CMD_WAITING)
        {
          m_wdog.reset();
          m_new_rx_string = false;
          std::sprintf(m_bfr_tx, "%s,*%c", text_cmd.c_str(), '\0');
          uint8_t csum = calcCRC8(m_bfr_tx);
          std::sprintf(m_bfr_tx, "%s,*%c\n%c", text_cmd.c_str(), csum, '\0');
          m_uart->writeString(m_bfr_tx);
          m_task->debug("CMD:%s", m_bfr_tx);
          m_send_cmd_state = CMD_WAITING;
          return true;
        }

        m_task->inf("Fail send command to board %s", m_bfr_tx);
        return false;
      }

      void
      waitForFeedback(void)
      {
        while (commandState() != CMD_ACK)
        {
          pollData();
          if (m_wdog.overflow())
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }
      }

      std::string
      getStringAt(char* array, uint8_t frame_split, char delimiter)
      {
        char *ptr = NULL;
        char split[2];
        split[0] = delimiter;
        ptr = std::strtok(array, split);  // delimiter
        uint8_t cnt = 0;
        while (ptr != NULL)
        {
          if(cnt == frame_split)
            return ptr;

          cnt++;
          ptr = std::strtok(NULL, ",");
        }

        return "null";
      }

      void
      sendFreeText(std::string free_text)
      {
        m_task->debug("sendFreeText:%s", free_text.c_str());
        sprintf(cmd_text, "%c,%c,%s%c",BYTE_PREAMBLE, BYTE_FREE_TEXT, free_text.c_str(), '\0');
        sendCommand(cmd_text);
        waitForFeedback();
        if(commandState() != CMD_ACK)
        {
          m_task->war("Fail send free text %s", free_text.c_str());
        }
      }

      void
      decodeBqData(uint8_t bq_data_type)
      {
        float data_values[MAX_BQ_INPUT_DATA];
        if(bq_data_type == BQ_GENERAL)
        {
          std::sscanf(m_rx_buf_parser, "$,D,B,%f,%f,%f,%*s", &data_values[POWER_VOLTAGE],
                      &data_values[POWER_CURRENT], &data_values[POWER_TEMPERATURE]);
          m_bqData.voltage = data_values[POWER_VOLTAGE];
          m_bqData.current = data_values[POWER_CURRENT];
          m_bqData.temperature = data_values[POWER_TEMPERATURE];
          setBqNewData(POWER_VOLTAGE, true, -1);
          setBqNewData(POWER_CURRENT, true, -1);
          setBqNewData(POWER_TEMPERATURE, true, -1);
          m_task->debug("BQ: volt:%.2fV | curr:%.2fA | temp:%.2fC", m_bqData.voltage,
                        m_bqData.current, m_bqData.temperature);

        }
        else if(bq_data_type == BQ_CELL)
        {
          int cell_id;
          std::sscanf(m_rx_buf_parser, "$,D,c,%d,%f,%*s", &cell_id, &data_values[POWER_CELLS_INFO]);

          m_bqData.cell_volt[cell_id] = data_values[POWER_CELLS_INFO];
          setBqNewData(POWER_CELLS_INFO, true, cell_id);
          m_task->debug("BQ: cell:%d | volt:%.2fV", cell_id, m_bqData.cell_volt[cell_id]);
        }
        else if(bq_data_type == BQ_INFO)
        {
          std::sscanf(m_rx_buf_parser, "$,D,i,%f,%f,%f,%f,%*s", &data_values[POWER_TIME_FULL],
                      &data_values[POWER_TIME_DISCHARGE], &data_values[POWER_REMAINING_CAP],
                      &data_values[POWER_FULL_CAP]);

          m_bqData.time_full = data_values[POWER_TIME_FULL];
          m_bqData.time_empty = data_values[POWER_TIME_DISCHARGE];
          m_bqData.r_cap = data_values[POWER_REMAINING_CAP];
          m_bqData.f_cap = data_values[POWER_FULL_CAP];
          setBqNewData(POWER_TIME_FULL, true, -1);
          setBqNewData(POWER_TIME_DISCHARGE, true, -1);
          setBqNewData(POWER_REMAINING_CAP, true, -1);
          setBqNewData(POWER_FULL_CAP, true, -1);
          m_task->debug("BQ: TF:%.0f | TD:%.0f | RC:%.2fAh | FC:%.2fAh", m_bqData.time_full,
                        m_bqData.time_empty, m_bqData.r_cap, m_bqData.f_cap);

        }
      }

      void
      dispatchGpsSimulatedData(void)
      {
        setNumberSat(12);
      }
    };
  }
}

#endif /* USERINTERFACES_MANTACORE_DRIVER_HPP_INCLUDED_ */
