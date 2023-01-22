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

          //! Serial port
          SerialPort* m_uart;
          //! Interrupt/Poll for serial port
          Poll m_poll;
          //! number of cell to read
          int m_numberCell;


          DriverBatMan(DUNE::Tasks::Task* task, SerialPort* uart, Poll poll, int numberCell):
            m_task(task)
          {
            m_uart = uart;
            m_poll = poll;
            m_timeout_uart = 1.0f;
            m_numberCell = numberCell;
            resetStateNewData();
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
          stopAcquisition(void)
          {
            if (sendCommand("@STOP,*", ""))
              return true;

            return false;
          }

          bool
          sendCommand(const char* cmd, const char* reply)
          {
            char cmdText[32];
            char cmdReplyText[32];
            std::sprintf(cmdText, "%s%c\n", cmd, (Algorithms::XORChecksum::compute((uint8_t*)cmd, strlen(cmd) - 1) | 0x80));
            std::sprintf(cmdReplyText, "%s%c\n", reply, (Algorithms::XORChecksum::compute((uint8_t*)reply, strlen(reply) - 1) | 0x80));
            char bfrUart[128];
            m_task->spew("Command: %s", cmdText);
            m_uart->writeString(cmdText);

            if (Poll::poll(*m_uart, m_timeout_uart))
            {
              m_uart->readString(bfrUart, sizeof(bfrUart));
              m_task->spew("Reply: %s", bfrUart);
              if (std::strcmp(bfrUart, cmdReplyText) == 0)
              {
                return true;
              }
              else if(std::strcmp(reply, "$VERS,") == 0)
              {
                char* vrs = std::strtok(bfrUart, ",");
                vrs = std::strtok(NULL, ",");
                m_batManData.firmVersion = vrs;
                return true;
              }
            }

            return false;
          }

          void
          sendCommandNoRsp(const char* cmd)
          {
            char cmdText[32];
            std::sprintf(cmdText, "%s%c\n", cmd, (Algorithms::XORChecksum::compute((uint8_t*)cmd, strlen(cmd) - 1) | 0x80));
            m_task->spew("Command (no rsp): %s", cmdText);
            m_uart->writeString(cmdText);
          }

          bool
          haveNewData(void)
          {
            std::size_t rv = m_uart->readString(bfr, sizeof(bfr));

            if (rv == 0)
            {
              m_task->err(DTR("I/O error"));
              return false;
            }

            bfr[strlen(bfr) - 3] = '\0';

            char* parameter = std::strtok(bfr, ",");
            if(std::strcmp(parameter, "$VOLT") == 0)
            {
              parameter = std::strtok(NULL, ",");
              std::sscanf(parameter, "%f", &m_batManData.voltage);
              m_task->debug("Volt: %.3f V", m_batManData.voltage);
              m_batManData.state_new_data[0] = true;
            }
            else if(std::strcmp(parameter, "$AMPE") == 0)
            {
              parameter = std::strtok(NULL, ",");
              std::sscanf(parameter, "%f", &m_batManData.current);
              m_task->debug("Ampe: %.3f A", m_batManData.current);
              m_batManData.state_new_data[1] = true;
            }
            else if(std::strcmp(parameter, "$TEMP") == 0)
            {
              parameter = std::strtok(NULL, ",");
              std::sscanf(parameter, "%f", &m_batManData.temperature);
              m_task->debug("Temp: %.3f C", m_batManData.temperature);
              m_batManData.state_new_data[2] = true;
            }
            else if(std::strcmp(parameter, "$RCAP") == 0)
            {
              parameter = std::strtok(NULL, ",");
              std::sscanf(parameter, "%f", &m_batManData.r_cap);
              m_task->debug("RCap: %.3f Ah", m_batManData.r_cap);
              m_batManData.state_new_data[3] = true;
            }
            else if(std::strcmp(parameter, "$FCAP") == 0)
            {
              parameter = std::strtok(NULL, ",");
              std::sscanf(parameter, "%f", &m_batManData.f_cap);
              m_task->debug("FCap: %.3f Ah", m_batManData.f_cap);
              m_batManData.state_new_data[4] = true;
            }
            else if(std::strcmp(parameter, "$DCAP") == 0)
            {
              parameter = std::strtok(NULL, ",");
              std::sscanf(parameter, "%f", &m_batManData.d_cap);
              m_task->debug("DCap: %.3f Ah", m_batManData.d_cap);
              m_batManData.state_new_data[5] = true;
            }
            else if (std::strcmp(parameter, "$HEAL") == 0)
            {
              parameter = std::strtok(NULL, ",");
              std::sscanf(parameter, "%d", &m_batManData.health);
              m_task->debug("Health: %d %%", m_batManData.health);
              m_batManData.state_new_data[6] = true;
            }
            else if (std::strcmp(parameter, "$CELL") == 0)
            {
              parameter = std::strtok(NULL, ",");
              for(int i = 0; i < m_numberCell; i++)
              {
                parameter = std::strtok(NULL, ",");
                std::sscanf(parameter, "%f", &m_batManData.cell_volt[i]);
                m_task->debug("Cell %d: %.3f V", i+1, m_batManData.cell_volt[i]);
              }
              m_batManData.state_new_data[7] = true;
              m_task->debug(" ");
            }
            else if (std::strcmp(parameter, "$BATS") == 0)
            {
              parameter = std::strtok(NULL, ",");
              std::sscanf(parameter, "%f", &m_batManData.time_empty);
              if (m_batManData.time_empty == 65535)
                m_batManData.time_empty = -1;

              m_task->debug("Average Time to Empty: %.0f min", m_batManData.time_empty);
              parameter = std::strtok(NULL, ",");
              std::sscanf(parameter, "%f", &m_batManData.time_full);
              if (m_batManData.time_full == 65535)
                m_batManData.time_full = -1;

              m_task->debug("Average Time to Full: %.0f min", m_batManData.time_full);
              m_batManData.state_new_data[8] = true;
            }

            bool result = true;
            for(uint8_t t = 0; t < 8; t++)
            {
              if(m_batManData.state_new_data[t] == false)
                result = false;
            }

            return result;
          }

          std::string
          getFirmwareVersion(void)
          {
            return m_batManData.firmVersion;
          }

          BatManData m_batManData;

        private:

          //! Parent task.
          DUNE::Tasks::Task* m_task;
          //! Timeout for new data in uart
          float m_timeout_uart;
          //! Buffer of uart
          char bfr[64];
      };
    }
}

#endif /* POWER_BATMAN_DRIVER_HPP_INCLUDED_ */
