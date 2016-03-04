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
// Author: Pedro_Gonçalves                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

//Local Headers
#include "MessageControl.hpp"

namespace Actuators
{
  namespace AMC
  {
    using DUNE_NAMESPACES;

    enum AMCFunc
    {
      // Read RPM
      RPM,
      // Read TEMPERATURE
      TEMPERATURE,
      // Read Voltage and current
      PWR
      
    };

    struct Arguments
    {
      /* data */
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //!Func read name
      AMCFunc m_func_name;
      //! Serial port device.
      SerialPort* m_uart;
      // I/O Multiplexer.
      Poll m_poll;
      //! Scratch buffer.
      uint8_t m_buffer[16];
      //CSUM
      uint8_t m_csum[2];
      //Buffer msg
      char msg[16];
      //Parser
      MessageParse* m_parse;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("57600")
        .description("Serial port baud rate");

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
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_parse = new MessageParse();
        m_parse->m_amc_state = MessageParse::PS_PREAMBLE;
        m_poll.add(*m_uart);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          m_poll.remove(*m_uart);
          delete m_uart;
          m_uart = NULL;
        }
      }

      //! Read input from arduino.
      void
      checkSerialPort(void)
      {
        if (m_poll.wasTriggered(*m_uart))
        {
          memset(&m_buffer, '\0', sizeof(m_buffer));
          int rv = 0;

          try
          {
            rv = m_uart->read(m_buffer, 1);
          }
          catch (std::exception& e)
          {
            err(DTR("read error: %s"), e.what());
            return;
          }

          if (rv <= 0)
          {
            err(DTR("unknown read error"));
            return;
          }
          else
            m_parse->ParserAMC(m_buffer[0]);
        }
      }

      int
      setRPM( int motor, int rpm )
      {
        memset(&msg, '\0', sizeof(msg));
        sprintf(msg, "@S,%d,%d,*", motor, rpm);
        m_csum[0] = m_parse->CRC8((unsigned char *)msg);
        int t = m_uart->write(msg, strlen(msg));
        m_uart->write(m_csum, 1);
        t++;
        usleep(1000);
        //war("SEND: %s%c   SIZE: %d", msg, m_csum[0], t + 1);

        return t;
      }

      void
      stopAllMotor(void)
      {
        setRPM(0, 0);
        setRPM(1, 0);
        setRPM(2, 0);
        setRPM(3, 0);
      }

      void
      readParameterAMC(int motor, AMCFunc _func_name)
      {
        int t;
        if(_func_name == RPM)
        {
          memset(&msg, '\0', sizeof(msg));
          sprintf(msg, "@R,%d,rpm,*", motor);
          m_csum[0] = m_parse->CRC8((unsigned char *)msg);
          t = m_uart->write(msg, strlen(msg));
          m_uart->write(m_csum, 1);
          t++;
        }
        else if(_func_name == TEMPERATURE)
        {
          memset(&msg, '\0', sizeof(msg));
          sprintf(msg, "@R,%d,tmp,*", motor);
          m_csum[0] = m_parse->CRC8((unsigned char *)msg);
          t = m_uart->write(msg, strlen(msg));
          m_uart->write(m_csum, 1);
          t++;
        }
        else if(_func_name == PWR)
        {
          memset(&msg, '\0', sizeof(msg));
          sprintf(msg, "@R,%d,pwr,*", motor);
          m_csum[0] = m_parse->CRC8((unsigned char *)msg);
          t = m_uart->write(msg, strlen(msg));
          m_uart->write(m_csum, 1);
          t++;
        }
        usleep(1000);
        //war("SEND: %s%c   SIZE: %d", msg, m_csum[0], t + 1);
      }

      //! Main loop.
      void
      onMain(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        int t=0;
        while (!stopping())
        {
          if (m_poll.poll(0.5))
          {
            checkSerialPort();
          }
          else
          {
            setRPM(0, t);
            usleep(250000);
            readParameterAMC(0, RPM);
            readParameterAMC(0, TEMPERATURE);
            readParameterAMC(0, PWR);
            
            printf("RPM: %d SIGNAL_SEND: %d\n", (int)m_parse->m_motor.rpm[0], t);
            printf("TEMPERATURE: %.2f\n", m_parse->m_motor.tmp[0]);
            printf("VOLTAGE: %.2f\n", m_parse->m_motor.volt[0]);
            printf("CURRENT: %.2f\n", m_parse->m_motor.current[0]);
            war(" ");

            t = t + 100;
            if(t > 1800)
              t = 0;
            waitForMessages(1.0);
          }
        }
        stopAllMotor();
      }
    };
  }
}

DUNE_TASK
