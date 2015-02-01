//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace SingleSIMCT01
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // UART device.
      std::string uart_dev;
      // UART baud rate.
      unsigned uart_baud;
      // True if UART has local echo enabled.
      bool uart_echo;
      // Motor identification number.
      int motor_id;
      // Thruster identification number.
      int thruster_id;
      // Actuation scale factor.
      float scale;
    };

    struct Task: public Tasks::Periodic
    {
      // Maximum number of errors.
      static const unsigned c_err_max = 6;
      // UART handle.
      SerialPort* m_uart;
      // Demand value.
      int8_t m_demand;
      // Scratch buffer.
      char m_scratch[15];
      // RPMs
      IMC::Rpm m_rpm;
      // Current.
      IMC::Current m_amp;
      // Query amps command.
      std::string m_cmd_query_amp;
      // Query RPMs command.
      std::string m_cmd_query_rpm;
      // Demand command reply.
      std::string m_rpl_demand;
      // Communication error count.
      unsigned m_err_count;
      // Error watchdog.
      Counter<float> m_err_wdog;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_uart(NULL),
        m_demand(0),
        m_err_count(0),
        m_err_wdog(5)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("57600")
        .description("Serial port baud rate");

        param("Serial Port - Local Echo", m_args.uart_echo)
        .defaultValue("0")
        .description("Set to true if serial port has local echo enabled");

        param("Motor Id", m_args.motor_id)
        .defaultValue("-1")
        .description("Motor identification number, used for low level (RS485) communication");

        param("Thruster Id", m_args.thruster_id)
        .defaultValue("-1")
        .description("Thruster identification number, used to fill IMC messages");

        param("Actuation Scale Factor", m_args.scale)
        .defaultValue("100.0")
        .minimumValue("0.0")
        .maximumValue("100.0")
        .description("Actuation scale factor");

        // Register consumers.
        bind<IMC::SetThrusterActuation>(this);
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(true);
        m_uart->setCanonicalInputTerminator('\r');
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      onUpdateParameters(void)
      {
        if (m_args.motor_id < 0)
          throw std::runtime_error(DTR("invalid value for 'Motor Id'"));

        if (m_args.thruster_id < 0)
          throw std::runtime_error(DTR("invalid value for 'Thruster Id'"));

        // Initialize commands.
        m_cmd_query_amp = String::str("u%d6?C\r", m_args.motor_id);
        m_cmd_query_rpm = String::str("u%d6?R\r", m_args.motor_id);
        m_rpl_demand = String::str("U%d4\r", m_args.motor_id);
      }

      bool
      sendCommand(const char* cmd, char* bfr, unsigned bfr_len)
      {
        m_uart->writeString(cmd);

        if (m_args.uart_echo)
        {
          if (!Poll::poll(*m_uart, 0.2))
            return false;

          m_uart->readString(bfr, bfr_len);
        }

        if (!Poll::poll(*m_uart, 0.2))
          return false;

        m_uart->readString(bfr, bfr_len);

        return true;
      }

      void
      demand(void)
      {
        // Remember that the + eats a digit.
        std::sprintf(m_scratch, "u%d_%+03d\r", m_args.motor_id, m_demand);
        m_scratch[2] = std::strlen(m_scratch) + '0';

        char bfr[32];
        sendCommand(m_scratch, bfr, sizeof(bfr));
        if (m_rpl_demand != bfr)
          ++m_err_count;
      }

      void
      queryCurrent(void)
      {
        char bfr[32];
        if (sendCommand(m_cmd_query_amp.c_str(), bfr, sizeof(bfr)))
        {
          unsigned value = 0;
          if (std::sscanf(bfr, "U%*c%*cC%u\r", &value) != 1)
          {
            ++m_err_count;
            return;
          }

          m_amp.value = value;
          dispatch(m_amp);
        }
      }

      void
      queryRPM(void)
      {
        char bfr[32];
        if (sendCommand(m_cmd_query_rpm.c_str(), bfr, sizeof(bfr)))
        {
          int value = 0;
          if (std::sscanf(bfr, "U%*c%*cR%d\r", &value) != 1)
          {
            ++m_err_count;
            return;
          }

          m_rpm.value = (int16_t)(value / 5.0);
          dispatch(m_rpm);
        }
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        if (msg->id == m_args.thruster_id)
          m_demand = (int8_t)(msg->value * m_args.scale);
      }

      void
      task(void)
      {
        demand();
        queryCurrent();
        queryRPM();

        if (m_err_wdog.overflow())
        {
          if (m_err_count > c_err_max)
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          else
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          m_err_count = 0;
          m_err_wdog.reset();
        }
      }
    };
  }
}

DUNE_TASK
