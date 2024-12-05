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

#ifndef USERINTERFACES_MANTACORE_DRIVER_HPP_INCLUDED_
#define USERINTERFACES_MANTACORE_DRIVER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "MantaUtils.hpp"

namespace UserInterfaces
{
  namespace MantaCore
  {
    using DUNE_NAMESPACES;

    class Driver
    {
    public:
      //! BQ data.
      BQData m_bqData;
      //! LTC data.
      LTCData m_ltcData;
      //! PAC data.
      PACData m_pacData;
      //! Query systems.
      bool m_query_systems;

      Driver(Tasks::Task* task, IO::Handle* handle, int numberCell, std::string system_name):
        m_query_systems(false),
        m_task(task),
        m_handle(handle),
        m_number_cells(numberCell),
        m_sys_name(system_name),
        m_send_cmd_state(CMD_IDLE),
        m_parser_state(PARSER_PREAMBLE),
        m_free_text_state(0),
        m_free_text(task->getEntityLabel()),
        m_treqid(0),
        m_new_modems_config(false)
      {
        querySystems(true);
        m_handle->flush();
      }

      uint16_t
      getLastTreqId(void)
      {
        return m_treqid;
      }

      void
      checkCommandQueue(void)
      {
        switch (m_send_cmd_state)
        {
        case CMD_ACK:
          if (!m_queue.empty())
            m_queue.pop();
          [[fallthrough]];
        case CMD_IDLE:
        case CMD_NACK:
        case CMD_ERROR:
          if (!m_queue.empty())
          {
            auto& cmd = m_queue.front();
            sendCommand(cmd.first, cmd.second, true);
          }
          else
            m_send_cmd_state = CMD_IDLE;
          break;
        case CMD_WAITING:
        default:
          break;
        }
      }

      bool
      emptyQueue(void)
      {
        return m_queue.empty();
      }

      void
      requestConnectionToBoard(void)
      {
        m_task->spew("request connection to board");
        sprintf(m_cmd_text, "%c,%c,%c%c", BYTE_PREAMBLE, BYTE_CPU, BYTE_CPU_OK, '\0');
        sendCommand(m_cmd_text, true);
      }

      void
      notifyBoardAboutDisconnect(void)
      {
        m_task->inf("notify board about disconnect");
        sprintf(m_cmd_text, "%c,%c,%c%c", BYTE_PREAMBLE, BYTE_CPU, BYTE_CPU_DISCONNECT, '\0');
        sendCommand(m_cmd_text, false);
      }


      void
      requestFirmwareVersion(void)
      {
        m_task->spew("request firmware");
        sprintf(m_cmd_text, "%c,%c%c", BYTE_PREAMBLE, BYTE_FIRMWARE, '\0');
        sendCommand(m_cmd_text, true);
      }

      void
      setKnownModems(std::map<std::string, ModemInfo> modems)
      {
        m_task->spew("set known modems");        
        for (auto& modem: modems)
        {
          bool new_modem = false;
          if (m_modems.find(modem.first) == m_modems.end())
          {
            new_modem = true;
            m_modems.emplace(modem);
          }

          if (new_modem || m_modems[modem.first].state != modem.second.state)
          {
            std::string cmd = String::str("%c,%c", BYTE_PREAMBLE, BYTE_KWON_AMODEMS);
            cmd += "," + modem.first + ",";
            cmd += modem.second.state ? "1" : "0";
            sendCommand(cmd, true);
          }
          
          m_modems[modem.first].state = modem.second.state;
          m_new_modems_config = true;
        }
      }

      void
      setNumberCells(void)
      {
        m_task->spew("set number cells");
        sprintf(m_cmd_text, "%c,%c,%d%c", BYTE_PREAMBLE, BYTE_CELL_NUMBER, m_number_cells, '\0');
        sendCommand(m_cmd_text, true);
      }

      void
      setNumberSat(uint8_t sat_number)
      {
        m_task->spew("sending satellite number: %u", sat_number);
        sprintf(m_cmd_text, "%c,%c,%d%c", BYTE_PREAMBLE, BYTE_SAT, sat_number, '\0');
        sendCommand(m_cmd_text, false);
      }

      void
      setPowerChannelState(std::string pwr_ch, uint8_t pin_state, unsigned id)
      {
        m_task->inf("power channel %s | %s", pwr_ch.c_str(), pin_state ? "ON" : "OFF");
        sprintf(m_cmd_text, "%c,%c,%d,%c%c", BYTE_PREAMBLE,
                                             BYTE_CHANNEL_DATA,
                                             id,
                                             pin_state ? '1' : '0',
                                             '\0');
        sendCommand(m_cmd_text, true);
      }

      void
      requestDataPower(bool on)
      {
        m_task->spew("request power data");
        sprintf(m_cmd_text, "%c,%c,%s%c",
                             BYTE_PREAMBLE,
                             BYTE_DATA_POWER,
                             on ? "on" : "off",
                            '\0');
        sendCommand(m_cmd_text, true);
      }

      void
      requestDataHeading(bool on)
      {
        m_task->spew("request heading data");
        sprintf(m_cmd_text, "%c,%c,%s%c",
                             BYTE_PREAMBLE,
                             BYTE_HEADING,
                             on ? "on" : "off",
                            '\0');
        sendCommand(m_cmd_text, true);
      }

      void
      sendStatus(char code, char type, std::string info)
      {
        m_task->debug("sending status");
        char bfr[64];
        sprintf(bfr, "%c,%c,%c,%s%c", BYTE_PREAMBLE, code, type, info.c_str(), '\0');
        sendCommand(bfr, false);
      }

      void
      updateFreeText(void)
      {
        switch (m_free_text_state)
        {
          case 0:
            m_free_text = String::str("System: %s%c", m_sys_name.c_str(), '\0');
            break;

          case 1:
            if(getInterfaceIP("eth0", m_sys_ip))
              m_free_text = String::str("Int IP: %s%c", m_sys_ip.c_str(), '\0');
            else
              m_free_text = String::str("Int IP: Fail%c", '\0');
            break;

          case 2:
            if(getInterfaceIP("ztcfw4jwt3", m_sys_ip))
              m_free_text = String::str("Zero IP: %s%c", m_sys_ip.c_str(), '\0');
            else
              m_free_text = String::str("Zero IP: Fail%c", '\0');
            break;

          case 3:
            if(getInterfaceIP("wwan0", m_sys_ip))
              m_free_text = String::str("GPRS IP: %s%c", m_sys_ip.c_str(), '\0');
            else
              m_free_text = String::str("GPRS IP: Fail%c", '\0');
            break;

          default:
            break;
        }
        sendFreeText(m_free_text);
        m_free_text_state++;
        if(m_free_text_state >= MAX_LINE_FREE_TEXT)
          m_free_text_state = 0;
      }

      void
      setTargetAddress(std::string name)
      {
        if (name == "reset")
          m_task->debug("reseting known addresses");
        else
          m_task->debug("sending known address: %s", name.c_str());

        sprintf(m_cmd_text, "%c,%c,%s%c", BYTE_PREAMBLE, BYTE_AMODEM, name.c_str(), '\0');
        sendCommand(m_cmd_text, true);
      }

      std::string
      firmwareVersion(void)
      {
        return m_version;
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

      bool
      boardBooted(void)
      {
        if (m_wdog_boot.getTop() == 0.0f || !m_wdog_boot.overflow())
          return false;

        m_wdog_boot.setTop(0.0f);
        return true;
      }

      std::map<std::string, bool>
      getModemsConfig(void)
      {
        if (!m_new_modems_config)
          return {};
        
        m_new_modems_config = false;
        return m_modems_config;
      }

      //! TODO: if ((m_send_cmd_state == CMD_WAITING && m_wdog.overflow()), retransmit last -> after 5 attempts, com_error.
      //! TODO: if (m_send_cmd_state == CMD_NACK), retransmit last -> after 5 attempts, com_error.
      //! TODO: if command needs a response, make sure it makes sense
      //! (ex: if DUNE asks for Firmware Version, make sure it receives the Firmware Version,
      //! at this point, any message recognized message other than NACK is accepted as valid response).
      bool
      checkDataIn(std::string line)
      {
        m_task->trace("received: %s", sanitize(line).c_str());
        uint8_t rcsum = line.size() > 2 ? line[line.size() - 2] : 0;
        uint8_t ccsum = calcCRC8(line);
        if(rcsum != ccsum)
        {
          m_task->debug("message with invalid csum | r: %hhu c: %hhu", rcsum, ccsum);
          return false;
        }

        std::vector<std::string> lst;
        String::split(line, ",", lst);
        if (lst[1] == "BOOT")
        {
          if (lst[2] == "SYNC" && lst[3] == "#")
            m_wdog_boot.setTop(2.0f);
          return true;
        }
        else if (lst[1] == "HB")
          return true;

        char mode_info = lst[1].front();
        switch (mode_info)
        {
          case BYTE_ACK:
            m_send_cmd_state = CMD_ACK;
            break;

          case BYTE_NACK:
            m_send_cmd_state = CMD_NACK;
            break;

          case BYTE_FIRMWARE:
          {
            m_version = lst[2];
            m_send_cmd_state = CMD_ACK;
            break;
          }

          case BYTE_DATA_POWER:
          {
            char data_type = lst[2].front();
            switch (data_type)
            {
              case BYTE_BQ_DATA:
                decodeBqData(BQ_GENERAL, lst);
                break;

              case BYTE_BQ_CELL:
                decodeBqData(BQ_CELL, lst);
                break;

              case BYTE_BQ_INFO:
                decodeBqData(BQ_INFO, lst);
                break;

              case BYTE_LTC_DATA:
              {
                m_ltcData.voltage = std::stof(lst[3]);
                m_ltcData.current = std::stof(lst[4]);
                setLTCNewData(true);
                m_task->spew("LTC: volt:%.2fV | curr:%.2fA",
                             m_ltcData.voltage,
                             m_ltcData.current);
                break;
              }

              case BYTE_PAC_DATA:
              {
                int id = std::stof(lst[3]);
                float v = std::stof(lst[4]);
                float a = std::stoi(lst[5]);
                m_pacData.voltage[id - 1] = v;
                m_pacData.current[id - 1] = a / 1000.0;
                setPACNewData(true, id - 1);
                m_task->spew("PAC%d: volt:%.2fV | curr:%.2fA",
                             id,
                             m_pacData.voltage[id - 1],
                             m_pacData.current[id - 1]);
                break;
              }

              default:
                m_task->debug("uncategorized message: %s",
                              line.c_str());
                return false;
            }
            
            break;
          }

          case BYTE_HEADING:
          {
            IMC::EulerAngles euler;
            euler.psi = std::stof(lst[2]);
            euler.theta = std::stof(lst[3]);
            euler.phi = std::stof(lst[4]);
            euler.psi_magnetic = euler.psi;
            m_task->dispatch(euler);
            m_task->spew("HEADING: yaw: %.3f pitch: %.3f roll: %.3f", euler.psi, euler.theta, euler.phi);
            break;
          }

          case BYTE_CPU_OFF:
          {
            IMC::PowerOperation pop;
            pop.setDestination(m_task->getSystemId());
            pop.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
            m_task->dispatch(pop, DF_LOOP_BACK);
            break;
          }

          case BYTE_RANGE:
          case BYTE_ABORT:
          {
            IMC::TransmissionRequest m_treq;
            m_treq.setDestination(m_task->getSystemId());
            m_treq.comm_mean = IMC::TransmissionRequest::CMEAN_ACOUSTIC;
            m_treq.req_id = getInternalId();
            m_treq.destination = lst[2];
            m_treq.data_mode = BYTE_RANGE?
                              IMC::TransmissionRequest::DMODE_RANGE:
                              IMC::TransmissionRequest::DMODE_ABORT;
            m_task->dispatch(m_treq);
            break;
          }

          case BYTE_AMODEM:
          {
            if (lst[2] == "query")
              querySystems(true);
            break;
          }

          case BYTE_KWON_AMODEMS:
          {
            m_modems_config.clear();
            m_new_modems_config = true;
            for (size_t i = 2; i < lst.size() - 1; i += 2)
              m_modems_config[lst[i]] = lst[i + 1] == "1";
            break;
          }
          
          default:
            m_task->debug("Uncategorized message: %s", line.c_str());
            return false;
        }

        return true;
      }

    private:
      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Number of cell to read.
      int m_number_cells;
      //! System name.
      std::string m_sys_name;
      //! System ip.
      std::string m_sys_ip;
      //! Send command state.
      CMD_STATE m_send_cmd_state;
      //! Parser state.
      PARSER_STATE m_parser_state;
      //! Received csum.
      uint8_t m_csum_rx;
      //! String command.
      char m_cmd_text[64];
      //! Firmware version.
      std::string m_version;
      //| Free text state.
      uint8_t m_free_text_state;
      //! Free text to send.
      std::string m_free_text;
      //! Queue of commands to send.
      std::queue<std::pair<std::string, bool>> m_queue;
      //! Id for TransmissionRequest IMC message.
      uint16_t m_treqid;
      //! Boot watchdog.
      Time::Counter<float> m_wdog_boot;
      //! List of modems.
      std::map<std::string, bool> m_modems_config;
      //! Flag of new modems config.
      bool m_new_modems_config;
      //! List of modems.
      std::map<std::string, ModemInfo> m_modems;

      uint16_t
      getInternalId(void)
      {
        m_treqid = (m_treqid + 1) * (m_treqid != UINT16_MAX);

        return m_treqid;
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
      sendCommand(std::string text_cmd, bool wait_ack, bool retry = false)
      {
        if (!retry)
          m_queue.push(std::make_pair(text_cmd, wait_ack));

        if(m_send_cmd_state == CMD_WAITING)
          return;

        std::string bfr_tx;
        bfr_tx = text_cmd + ",*";
        bfr_tx += calcCRC8(bfr_tx.c_str());
        bfr_tx += "\n";
        m_handle->writeString(bfr_tx.c_str());
        m_task->trace("sending command: %s%s", sanitize(bfr_tx).c_str(), wait_ack ? " (needs response)" : "");

        if (!wait_ack)
        {
          m_send_cmd_state = CMD_IDLE;
          m_queue.pop();
        }
        else
          m_send_cmd_state = CMD_WAITING;
        
        return;
      }

      void
      querySystems(bool force = false)
      {
        if (m_query_systems && !force)
          return;
        m_query_systems = true;
        IMC::AcousticSystemsQuery asq;
        asq.setDestination(m_task->getSystemId());
        m_task->dispatch(asq);
      }

      void
      sendFreeText(std::string free_text)
      {
        m_task->spew("sending free text: %s", free_text.c_str());
        sprintf(m_cmd_text, "%c,%c,%s%c",BYTE_PREAMBLE, BYTE_FREE_TEXT, free_text.c_str(), '\0');
        sendCommand(m_cmd_text, false);
      }

      void
      decodeBqData(uint8_t bq_data_type, std::vector<std::string> lst)
      {
        if(bq_data_type == BQ_GENERAL)
        {
          m_bqData.voltage = std::stof(lst[3]);
          m_bqData.current = std::stof(lst[4]);
          m_bqData.temperature = std::stof(lst[5]);
          setBqNewData(POWER_VOLTAGE, true, -1);
          setBqNewData(POWER_CURRENT, true, -1);
          setBqNewData(POWER_TEMPERATURE, true, -1);
          m_task->spew("BQ: volt:%.2fV | curr:%.2fA | temp:%.2fC", m_bqData.voltage,
                        m_bqData.current, m_bqData.temperature);
        }
        else if(bq_data_type == BQ_CELL)
        {
          int cell_id = std::stoi(lst[3]);
          m_bqData.cell_volt[cell_id] = std::stof(lst[4]);
          setBqNewData(POWER_CELLS_INFO, true, cell_id);
          m_task->spew("BQ: cell:%d | volt:%.2fV", cell_id, m_bqData.cell_volt[cell_id]);
        }
        else if(bq_data_type == BQ_INFO)
        {
          m_bqData.time_full = std::stof(lst[3]);
          m_bqData.time_empty = std::stof(lst[4]);
          m_bqData.r_cap = std::stof(lst[5]);
          m_bqData.f_cap = std::stof(lst[6]);
          setBqNewData(POWER_TIME_FULL, true, -1);
          setBqNewData(POWER_TIME_DISCHARGE, true, -1);
          setBqNewData(POWER_REMAINING_CAP, true, -1);
          setBqNewData(POWER_FULL_CAP, true, -1);
          m_task->spew("BQ: TF:%.0f | TD:%.0f | RC:%.2fAh | FC:%.2fAh", m_bqData.time_full,
                        m_bqData.time_empty, m_bqData.r_cap, m_bqData.f_cap);
        }
      }
    };
  }
}

#endif /* USERINTERFACES_MANTACORE_DRIVER_HPP_INCLUDED_ */
