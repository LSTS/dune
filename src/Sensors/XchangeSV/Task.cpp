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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Sensors
{
  //! Device driver for the AML OEM Xchange Sound Velocimeter.
  namespace XchangeSV
  {
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Input timeout.
      double input_timeout;
    };

    //! Minimum sound speed value.
    static const double c_min_speed = 1375.0;
    //! Maximum sound speed value.
    static const double c_max_speed = 1625.0;

    struct Task: public DUNE::Tasks::Task
    {
      //! Sound speed message.
      IMC::SoundSpeed m_sspeed;
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Task arguments.
      Arguments m_args;
      //! Watchdog.
      Counter<double> m_wdog;
      //! True if IO handle is a SerialPort.
      bool m_uart;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_handle(NULL),
        m_uart(false)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Input Timeout", m_args.input_timeout)
        .defaultValue("4.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");
      }

      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        Delay::wait(getActivationTime());

        try
        {
          if (!openSocket())
          {
              m_handle = new SerialPort (m_args.uart_dev, m_args.uart_baud);
              ((SerialPort*)m_handle)->setCanonicalInput (true);
              m_handle->flush();
              m_uart = true;
          }
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      bool
      openSocket(void)
      {
        char addr[128] = {0};
        unsigned port = 0;

        if (std::sscanf(m_args.uart_dev.c_str(), "tcp://%[^:]:%u", addr, &port) != 2)
          return false;

        TCPSocket* sock = new TCPSocket;
        sock->connect(addr, port);
        m_handle = sock;
        return true;
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_handle);
      }

      bool
      sendCommand(const char* cmd, const char* reply)
      {
        char bfr[128];

        m_handle->writeString(cmd);

        if (Poll::poll(*m_handle, 1.0))
        {
          m_handle->readString(bfr, sizeof(bfr));
          if (std::strcmp(bfr, reply) == 0)
            return true;
        }

        return false;
      }

      void
      onResourceInitialization(void)
      {
        m_handle->writeString("\r");
        Delay::wait(1.0);
        m_handle->flush();

        if (m_uart)
          if (!sendCommand("\r", "\r\n"))
            throw RestartNeeded(DTR("failed to enter command mode"), 5, false);

        if (!sendCommand("SET SAMPLE 1 s\r", ">SET SAMPLE 1 s\r\n"))
          throw RestartNeeded(DTR("failed to set sampling rate"), 5, false);

        if (!sendCommand("MONITOR\r", ">MONITOR\r\n"))
          throw RestartNeeded(DTR("failed to enter monitor mode"), 5, false);

        m_wdog.setTop(m_args.input_timeout);
      }

      void
      onMain(void)
      {
        char bfr[32];

        while (!stopping())
        {
          consumeMessages();

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          if (!Poll::poll(*m_handle, 1.0))
            continue;

          size_t rv = m_handle->readString(bfr, sizeof(bfr));

          if (rv == 0)
            throw RestartNeeded(DTR("I/O error"), 5);

          if (std::sscanf(bfr, "%f", &m_sspeed.value) != 1)
            continue;

          if ((m_sspeed.value < c_min_speed) || (m_sspeed.value > c_max_speed))
            m_sspeed.value = -1;

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_wdog.reset();
          dispatch(m_sspeed);
        }
      }
    };
  }
}

DUNE_TASK
