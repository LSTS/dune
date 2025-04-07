//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef POWER_BATMAN_DRIVER_HPP_INCLUDED_
#define POWER_BATMAN_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>


namespace Power
{
  namespace BATMANv2
    {
      using DUNE_NAMESPACES;

      class DriverBatMan
      {
        public:

          struct BatManData
          {
            //! Firmware version
            std::string firmVersion;
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
            //! Design Capacity
            float d_cap;
            //! Health
            int health;
            //! Cell Voltage
            float cell_volt[16];
            //! State of new data received
            bool state_new_data[9];
            //! Time, in min to full empty battery
            float time_empty;
            //! Time, in min, to full charge of battery
            float time_full;
          };

          DriverBatMan(DUNE::Tasks::Task* task, IO::Handle* handle, int numberCell):
            m_task(task)
          {
            m_handle = handle;
            m_timeout_uart = 1.0f;
            m_numberCell = numberCell;
            resetStateNewData();
            std::memset(&bfr_rx, '\0', sizeof(bfr_rx));
            cnt_bfr_rx = 0;
            m_state_data_in = STATE_DATA_IN_PREAMBLE;
            m_new_data_in = false;
          }

          ~DriverBatMan(void){}

          void
          resetStateNewData(void)
          {
            for(uint8_t t = 0; t < 8; t++)
              m_batManData.state_new_data[t] = false;
          }

          bool
          getVersionFirmware(void)
          {
            if(sendCommand("@VERS,*", "$VERS,"))
              return true;

            return false;
          }

          bool
          initBatMan(int cellNumber, float scale)
          {
            // Smaller by 2 otherwise compiler complains of
            // format overflow inside 'sendCommand'.
            char textCmd[30];
            std::sprintf(textCmd, "@CELL,%d,*", cellNumber);
            if(sendCommand(textCmd, "$RSP,ACK,,*"))
            {
              std::memset(&textCmd, '\0', sizeof(textCmd));
              std::sprintf(textCmd, "@SCALE,%.2f,*", scale);
              if(sendCommand(textCmd, "$RSP,ACK,,*"))
                return true;
            }

            return false;
          }

          bool
          startAcquisition(void)
          {
            if(sendCommand("@START,*", "$RSP,ACK,,*"))
              return true;

            return false;
          }

          bool
          stopAcquisition(bool wait_reply = true)
          {
            if (wait_reply)
            {
              if (sendCommand("@STOP,*", "$RSP,ACK,,*"))
                return true;
            }
            else
            {
              sendCommandNoRsp("@STOP,*");
              return true;
            }
            return false;
          }

          bool
          sendCommand(const char* cmd, const char* reply)
          {
            char cmdText[32];
            char cmdReplyText[32];
            std::sprintf(cmdText, "%s%c\n", cmd, (Algorithms::XORChecksum::compute((uint8_t*)cmd, strlen(cmd) - 1) | 0x80));
            std::sprintf(cmdReplyText, "%s", reply);
            char bfrUart[128];
            m_task->trace("Command TX: %s", cmdText);
            m_handle->flush();
            m_handle->writeString(cmdText);
            char buf_rx[128];
            std::memset(&buf_rx, '\0', sizeof(buf_rx));
            uint8_t cnt_rx = 0;
            uint16_t number_rx_received = 0;
            bool exit_loop = false;
            char csum_rx = 0x00;
            while (Poll::poll(*m_handle, m_timeout_uart) && !exit_loop)
            {
              number_rx_received = m_handle->read(bfrUart, sizeof(bfrUart));
              for(uint8_t i = 0; i < number_rx_received; i++)
              {
                buf_rx[cnt_rx++] = bfrUart[i];

                if (cnt_rx >= 127 || bfrUart[i] == '*')
                {
                  exit_loop = true;
                  if((i + 1) < number_rx_received)
                    csum_rx = bfrUart[i + 1];
                  break;
                }
              }
              if (exit_loop)
                break;
            }

            m_handle->flush();

            if (cnt_rx < 3)
            {
              m_task->trace("SendCommand: Invalid buffer length: %d | %s", cnt_rx, buf_rx);
              return false;
            }

            m_task->trace("Command Reply: %s", buf_rx);

            if(!verify_CRC8(buf_rx, csum_rx))
            {
              m_task->war("SendCommand: Invalid CRC8: %s", buf_rx);
              return false;
            }

            if (std::strstr(reply, "$VERS,") != NULL)
            {
              m_batManData.firmVersion = extractBetweenCommas(buf_rx);
              return true;
            }
            else if (std::strstr(buf_rx, cmdReplyText) != NULL)
            {
              return true;
            }
            else
            {
              m_task->war("Command failed: cmd: %s | reply: %s", cmdReplyText, buf_rx);
            }
            return false;
          }

          void
          sendCommandNoRsp(const char* cmd)
          {
            char cmdText[64];
            std::sprintf(cmdText, "%s%c\n", cmd, (Algorithms::XORChecksum::compute((uint8_t*)cmd, strlen(cmd) - 1) | 0x80));
            m_task->spew("Command (no rsp): %s", cmdText);
            m_handle->flush();
            m_handle->writeString(cmdText);
          }

          bool
          haveNewData(void)
          {
            int number_rx_received = 0;
            char buf_rx[128];
            if (Poll::poll(*m_handle, m_timeout_uart))
            {
              number_rx_received = m_handle->read(buf_rx, 128);
              for(uint8_t i = 0; i < number_rx_received; i++)
              {
                parseDataIn(buf_rx[i]);
              }
            }
            if(m_new_data_in)
            {
              m_new_data_in = false;
              return true;
            }
            return false;
          }

          std::string
          getFirmwareVersion(void)
          {
            return m_batManData.firmVersion;
          }

          BatManData m_batManData;

        private:

          enum StateDataIn
          {
            STATE_DATA_IN_PREAMBLE = 0,
            STATE_DATA_IN_DATA,
            STATE_DATA_IN_CRC,
            STATE_DATA_IN_END
          };

          //! Parent task.
          DUNE::Tasks::Task* m_task;
          //! Timeout for new data in uart
          float m_timeout_uart;
          //! Buffer of uart
          char bfr_rx[256];
          //! Counter of buffer
          uint16_t cnt_bfr_rx;
          //! IO::Handle
          IO::Handle* m_handle;
          //! number of cell to read
          int m_numberCell;
          //! State of message byte data in
          uint8_t m_state_data_in;
          //! Flag to control new DataIn
          bool m_new_data_in;

          bool
          parseFloat(char* parameter, const char* label, float& target, int stateIndex)
          {
            parameter = std::strtok(nullptr, ",");
            if (!parameter)
            {
              m_task->trace(DTR("Invalid input format: %s"), label);
              return false;
            }
            if (std::sscanf(parameter, "%f", &target) != 1)
            {
              m_task->war(DTR("Failed to parse %s"), label);
              return false;
            }
            m_task->debug("%s: %.3f", label, target);
            m_batManData.state_new_data[stateIndex] = true;
            return true;
          };

          bool
          parseInt(char* parameter, const char* label, int& target, int stateIndex)
          {
            parameter = std::strtok(nullptr, ",");
            if (!parameter)
            {
              m_task->trace(DTR("Invalid input format: %s"), label);
              return false;
            }
            if (std::sscanf(parameter, "%d", &target) != 1)
            {
              m_task->war(DTR("Failed to parse %s"), label);
              return false;
            }
            m_task->debug("%s: %d", label, target);
            m_batManData.state_new_data[stateIndex] = true;
            return true;
          };

          std::string
          extractBetweenCommas(const char* str)
          {
            // Find the first comma
            const char* firstComma = strchr(str, ',');
            // Find the second comma after the first one
            const char* secondComma = (firstComma != nullptr) ? strchr(firstComma + 1, ',') : nullptr;
            if (firstComma && secondComma)
            {
              // Extract the part between the commas
              return std::string(firstComma + 1, secondComma - firstComma - 1);
            }
            // Return an empty string if commas are not found correctly
            return "";
          }

          bool
          verify_CRC8(char* data, char received_csum)
          {
            char csum = 0x00;
            uint16_t t = 0;
            while (data[t] != '*' && data[t] != '\0')
            {
              csum ^= data[t];
              t++;
            }

            csum |= 0x80;
            m_task->trace("csum: 0x%02x, received_csum: 0x%02x", (uint8_t)csum, (uint8_t)received_csum);
            if(csum != received_csum)
            {
              m_task->war("Invalid CRC8:Data:%s | 0x%02x (C) != 0x%02x (R)", data, (uint8_t)csum, (uint8_t)received_csum);
              return false;
            }
            return csum == received_csum;
          }

          void
          parseDataIn(char data)
          {
            switch (m_state_data_in)
            {
              case STATE_DATA_IN_PREAMBLE:
                if (data == '$')
                {
                  m_new_data_in = false;
                  m_state_data_in = STATE_DATA_IN_DATA;
                  cnt_bfr_rx = 0;
                  std::memset(&bfr_rx, '\0', sizeof(bfr_rx));
                  bfr_rx[cnt_bfr_rx++] = data;
                }
                break;
              case STATE_DATA_IN_DATA:
                if (data == '*')
                {
                  m_state_data_in = STATE_DATA_IN_CRC;
                  bfr_rx[cnt_bfr_rx++] = data;
                }
                else if(cnt_bfr_rx >= 255)
                {
                  m_task->war("Buffer overflow on DataIn");
                  m_handle->flush();
                  m_state_data_in = STATE_DATA_IN_PREAMBLE;
                }
                else
                {
                  bfr_rx[cnt_bfr_rx++] = data;
                }
                break;
              case STATE_DATA_IN_CRC:
                bfr_rx[cnt_bfr_rx++] = data;
                if (verify_CRC8(bfr_rx, data))
                {
                  m_state_data_in = STATE_DATA_IN_END;
                }
                else
                {
                  m_state_data_in = STATE_DATA_IN_PREAMBLE;
                }
                break;
              case STATE_DATA_IN_END:
                m_handle->flush();
                m_task->trace("DataIn: %s", bfr_rx);
                m_new_data_in = decodeDataIn(bfr_rx);
                m_state_data_in = STATE_DATA_IN_PREAMBLE;
                break;
            }
          }

          bool
          decodeDataIn(char* bfr)
          {
            char* parameter = std::strtok(bfr, ",");
            if (!parameter)
            {
              m_task->trace(DTR("Invalid input format"));
              return false;
            }

            if (std::strstr(parameter, "$VOLT"))
            {
              if (!parseFloat(parameter, "Voltage", m_batManData.voltage, 0))
                return false;
            }
            else if (std::strstr(parameter, "$AMPE"))
            {
              if (!parseFloat(parameter, "Current", m_batManData.current, 1))
                return false;
            }
            else if (std::strstr(parameter, "$TEMP"))
            {
              if (!parseFloat(parameter, "Temperature", m_batManData.temperature, 2))
                return false;
            }
            else if (std::strstr(parameter, "$RCAP"))
            {
              if (!parseFloat(parameter, "Remaining Capacity", m_batManData.r_cap, 3))
                return false;
            }
            else if (std::strstr(parameter, "$FCAP"))
            {
              if (!parseFloat(parameter, "Full Capacity", m_batManData.f_cap, 4))
                return false;
            }
            else if (std::strstr(parameter, "$DCAP"))
            {
              if (!parseFloat(parameter, "Design Capacity", m_batManData.d_cap, 5))
                return false;
            }
            else if (std::strstr(parameter, "$HEAL"))
            {
              if (!parseInt(parameter, "Health", m_batManData.health, 6))
                return false;
            }
            else if (std::strstr(parameter, "$CELL"))
            {
              //ignore first value (number of cells)
              parameter = std::strtok(nullptr, ",");
              for (int i = 0; i < m_numberCell; ++i)
              {
                parameter = std::strtok(nullptr, ",");
                if (!parameter)
                {
                  m_task->trace(DTR("Invalid input format: Cell Voltage %d"), i + 1);
                  return false;
                }
                if (std::sscanf(parameter, "%f", &m_batManData.cell_volt[i]) != 1)
                {
                  m_task->war(DTR("Failed to parse Cell Voltage %d"), i + 1);
                  return false;
                }
                m_task->debug("Cell %d: %.3f V", i + 1, m_batManData.cell_volt[i]);
              }
              m_batManData.state_new_data[7] = true;
            }
            else if (std::strstr(parameter, "$BATS"))
            {
              if (!parseFloat(parameter, "Time to Empty", m_batManData.time_empty, 8))
                return false;

              if (m_batManData.time_empty == 65535)
                m_batManData.time_empty = -1;

              parameter = std::strtok(nullptr, ",");
              if (!parameter)
              {
                m_task->trace(DTR("Invalid input format: Time to Full"));
                return false;
              }
              if (std::sscanf(parameter, "%f", &m_batManData.time_full) != 1)
              {
                m_task->war(DTR("Failed to parse Time to Full"));
                return false;
              }
              if (m_batManData.time_full == 65535)
                m_batManData.time_full = -1;

              m_task->debug("Time to Full: %.0f min", m_batManData.time_full);
              m_batManData.state_new_data[8] = true;
            }

            return std::all_of(std::begin(m_batManData.state_new_data), std::end(m_batManData.state_new_data), [](bool state) { return state; });
          }
      };
    }
}

#endif /* POWER_BATMAN_DRIVER_HPP_INCLUDED_ */
