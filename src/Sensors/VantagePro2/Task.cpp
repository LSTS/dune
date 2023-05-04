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
// Based on: vproweather 1.0 by Joe Jaworski                                *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <cstring>
#include <stdio.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local Headers.
#include "Parser.hpp"

namespace Sensors
{
  //! This task reads data from the Davis Instruments Vantage Pro2 Weather Station.
  //!
  //! Periodicaly is sent a LOOP command to the serial data logger. It returns the 
  //! temperature, humidity, wind and rain values measured by the weather station.
  //! @author Joao Costa
  namespace VantagePro2
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_csum = 2;
    static const unsigned int c_max_buffer = 128;

    enum StateMachineStates
    {
      //! Stopped State.
      SM_STOP,
      ///! Ask FW's version
      SM_ASK_VERSION,
      //! Get for FW's version state
      SM_GET_VERSION,
      //! Init done state
      SM_DONE,
      //! No response error state
      SM_ERROR
    };

    //! Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort *m_uart;
      //! Command to be sent via usart.
      char m_cmd[c_max_buffer];
      //! Serial input buffer.
      char m_buffer[c_max_buffer];
      //! I/O Multiplexer.
      Poll m_poll;
      //! Parser
      Parser *m_parse;
      //! Serial buffer in
      uint8_t m_bfr[c_max_buffer];
      //! Current state machine's state
      StateMachineStates m_sm_state;
      //! Timer used for resend the command to firmware
      Time::Counter<double> m_timer;
      //! LOOP cmd sent flag
      bool m_LOOP_sent;
      //!
      int m_num_bytes;
      //! Initiate station flag
      bool m_init_station;
      //! Ask for loop packages
      bool m_init_loop;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param [in] name task name.
      //! @param [in] ctx context.
      Task(const std::string &name, Tasks::Context &ctx) : DUNE::Tasks::Task(name, ctx),
                                                           m_LOOP_sent(false),
                                                           m_init_station(true),
                                                           m_init_loop(false)
      {
        param("Serial Port - Device", m_args.uart_dev)
            .defaultValue("/dev/ttyUSB0")
            .description("Serial port used to communicate with the meteo station");

        param("Serial Port - Baud Rate", m_args.uart_baud)
            .defaultValue("19200")
            .description("Serial port baudrate");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->setCanonicalInput(false);
          m_uart->flush();

          m_poll.add(*m_uart);
        }
        catch (std::runtime_error &e)
        {
          throw RestartNeeded(e.what(), 10);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_uart->flushInput();
        m_uart->flush();

        m_parse = new Parser(this);

        m_timer.setTop(2);

        // Wake up console
        //m_uart->writeString("\n\r");
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          m_poll.remove(*m_uart);
          Memory::clear(m_uart);
        }
      }

      //! Read data sent by Doris Sampler.
      bool
      hasNewData(void)
      {
        if (m_poll.wasTriggered(*m_uart))
        {
          std::memset(&m_bfr, '\0', sizeof(m_bfr));
          m_num_bytes = 0;
          try
          {
            m_num_bytes = m_uart->read(m_bfr, sizeof(m_bfr));
          }
          catch (std::exception &e)
          {
            err(DTR("read error: %s"), e.what());
            return false;
          }
          if (m_num_bytes <= 0)
          {
            err(DTR("unknown read error"));
            return false;
          }
          else
          {
            for (uint8_t i = 0; i < m_num_bytes; ++i)
            {
              if (m_LOOP_sent)
              {
                if (!m_parse->parseLOOP(m_bfr[i]))
                  continue;
              }
              else
              {
                if (!m_parse->parseOK(m_bfr[i]))
                  continue;
              }
              return true;
            }
          }
        }
        return false;
      }

      //! Creates a Log Book Entry with the VP2's firmware version
      //! @return Returns 1 if got version successfully
      /*void
      getVersion(void)
      {
        // clear channel and delay
        strcpy(m_cmd, "NVER\n"); // make Davis cmd string
        m_uart->writeString(m_cmd);
        war("NVER\n");
      }*/

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // clear channel and delay
          if (m_timer.overflow())
          {
            if (m_init_station)
            {
              m_LOOP_sent = false;
              strcpy(m_cmd, "NVER\n"); // make Davis cmd string
            }
            else
            {
              m_LOOP_sent = true;
              strcpy(m_cmd, "LOOP 1\n"); // make Davis cmd string
            }

            m_uart->writeString(m_cmd);
            m_timer.reset();
            //war("NVER");
          }

          if (m_poll.poll(0.01))
          {
            if (hasNewData())
            {
              if (m_parse->translate(m_LOOP_sent))
              {
                if (m_LOOP_sent)
                {
                  IMC::Temperature m_temp;
                  m_temp.value = ((float)m_parse->m_LOOPData.OutsideTemp / 10 - 32) * 5/9;
                  debug("temperature = %.2f", m_temp.value);
                  
                  IMC::WindSpeed m_windSpd;
                  m_windSpd.speed = m_parse->m_LOOPData.WindSpeed;
                  m_windSpd.direction = Angles::radians(m_parse->m_LOOPData.WindDir);
                  debug("wind speed = %.2f", m_windSpd.speed);
                  debug("wind direction = %.2f", m_windSpd.direction);
                  
                  IMC::RelativeHumidity m_humidity;
                  m_humidity.value = m_parse->m_LOOPData.OutsideHum;
                  debug("outside humidity = %.2f", m_humidity.value);

                  Delay::wait(0.2);

                  dispatch(m_temp);
                  dispatch(m_windSpd);
                  dispatch(m_humidity);
                }
                else
                {
                  m_init_station = false;

                  // Logs the version of the Vantage Pro2 firmware
                  IMC::LogBookEntry m_version;
                  m_version.type = IMC::LogBookEntry::LBET_INFO;
                  m_version.htime = Time::Clock::getSinceEpoch();
                  m_version.context = "Vantage Pro2 Firmware Version";
                  m_version.text = m_parse->m_console_version;
                  Delay::wait(0.2);
                  dispatch(m_version, DF_LOOP_BACK);
                }
              }
            }
          }
        }
        waitForMessages(1.0);
      }
    };
  }
}
DUNE_TASK