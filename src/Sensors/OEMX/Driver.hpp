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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef SENSORS_OEMX_DRIVER_HPP_INCLUDED_
#define SENSORS_OEMX_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>


namespace Sensors
{
  namespace OEMX
  {
    using DUNE_NAMESPACES;

    class DriverOEMX
    {
      public:

      struct CTDData
      {
        //! Data get from CTD
        float dataReceived[8];
        //! CTD Info
        std::string ctdInfo;
        //! Primary Mount Info
        std::string primaryInfo;
        //! Secondary Mount Info
        std::string secondaryInfo;
      };

      //! Serial port
      SerialPort* m_uart;
      //! Interrupt/Poll for serial port
      Poll m_poll;

      DriverOEMX(DUNE::Tasks::Task* task, SerialPort* uart, Poll poll, bool d_all_set):
        m_task(task)
      {
        m_uart = uart;
        m_poll = poll;
        m_timeout_uart = 1.0f;;
        m_d_all_set = d_all_set;
      }

      ~DriverOEMX(void)
      {}

      bool
      initCTD(int numberSamples)
      {
        if(numberSamples > 5 || numberSamples <= 0)
        {
          m_task->war("Incorrect Number of Samples, setting 1 sample/s");
          numberSamples = 1;
        }
        char cmdSample[32];
        char replySample[32];

        std::sprintf(cmdSample, "SET S %d /s\r", numberSamples);
        std::sprintf(replySample, ">SET S %d /s\r\n", numberSamples);

        m_uart->writeString("\r");
        Delay::wait(1.0);
        m_uart->flush();

        if (!sendCommand("\r", "\r\n"))
        {
          m_task->err(DTR("failed to enter command mode"));
          return false;
        }

        if (!sendCommand(cmdSample, replySample))
        {
          m_task->err(DTR("failed to set sampling rate"));
          return false;
        }

        if (!sendCommand("MONITOR\r", ">MONITOR\r\n"))
        {
          m_task->err(DTR("failed to enter monitor mode"));
          return false;
        }

        return true;
      }

      bool
      getInfoOfCTD()
      {
        char usart_rec[2];
        bool result = false;
        sendCommand("\r", "\r\n");
        Delay::wait(2.0);
        m_uart->flush();
        Delay::wait(2.0);

        while(!m_task->isStopping())
        {
          if (sendCommand("\r", "\r\n"))
          {
            result = true;
            break;
          }
          else
          {
            Delay::wait(2.0);
            m_uart->flush();
            break;
          }
        }

        if(result)
        {
          m_uart->writeString("display options\r\r");
          std::string txtRec;
          bool isFristTerminator = true;
          std::string string_line;
          std::string settings_block;

          while(!m_task->isStopping())
          {
            if (m_poll.poll(m_timeout_uart))
              if (m_poll.wasTriggered(*m_uart))
              {
                m_uart->read(usart_rec, 1);
                txtRec += usart_rec[0];
                string_line += usart_rec[0];

                if (usart_rec[0] == '>')
                {
                  if (isFristTerminator)
                    isFristTerminator = false;
                  else
                    break;
                }

                if (usart_rec[0] == '\n' && m_d_all_set)
                {
                  std::replace(string_line.begin(), string_line.end(), '\n', ' ');
                  m_task->inf("%s", string_line.c_str());
                  string_line.clear();
                }

              }
          }

          getFirmwareVersion(txtRec);
        }

        return result;
      }

      void
      getFirmwareVersion(std::string text)
      {
        m_task->spew("%s", text.c_str());
        std::string typeCTD = extractInformation("Type=", text);
        std::string version = extractInformation("Firmware=", text);
        std::string serialCTD = extractInformation("SN=", text);
        m_task->inf("Type=%s", typeCTD.c_str());
        m_task->inf("Firmware=%s", version.c_str());
        m_task->inf("SN=%s", serialCTD.c_str());
        m_ctdData.ctdInfo = typeCTD;

      }

      bool
      sendCommand(const char* cmd, const char* reply)
      {
        char bfrUart[128];
        m_task->debug("Command: %s", cmd);
        m_uart->writeString(cmd);

        if (Poll::poll(*m_uart, m_timeout_uart))
        {
          m_uart->readString(bfrUart, sizeof(bfrUart));
          m_task->debug("Reply: %s", bfr);
          if (std::strcmp(bfrUart, reply) == 0)
            return true;
        }

        return false;
      }

      bool
      haveNewData(int numberSensors)
      {
        std::size_t rv = m_uart->readString(bfr, sizeof(bfr));

        if (rv == 0)
        {
          m_task->err(DTR("I/O error"));
          return false;
        }

        m_task->spew("%s", bfr);

        int total_sensors_read = std::sscanf(bfr, " %f %f %f %f %f %f\r\n", &m_ctdData.dataReceived[0], &m_ctdData.dataReceived[1],
            &m_ctdData.dataReceived[2], &m_ctdData.dataReceived[3],
            &m_ctdData.dataReceived[4], &m_ctdData.dataReceived[5]);

        if(numberSensors == total_sensors_read)
          return true;
        else
          return false;
      }

      CTDData m_ctdData;

      private:

      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Timeout for new data in uart
      float m_timeout_uart;
      //! Buffer of uart
      char bfr[32];
      //! Display all Settings
      bool m_d_all_set;

      std::string
      extractInformation(std::string key, const std::string& theEntireString)
      {
        std::string s = key;
        auto p1 = theEntireString.find(s);
        if (std::string::npos != p1)
          p1 += s.size();
        auto p2 = theEntireString.find_first_of('\n', p1);
        if (std::string::npos != p2)
          return theEntireString.substr(p1, p2 - p1);

        return "";
      }

    };
  }
}

#endif /* SENSORS_OEMX_DRIVER_HPP_INCLUDED_ */
