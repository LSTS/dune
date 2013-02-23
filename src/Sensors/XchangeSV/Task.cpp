//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Task.cpp 12721 2013-01-25 02:01:06Z jbraga                       $:*
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
      SerialPort* m_uart;
      //! Task arguments
      Arguments m_args;
      //! Watchdog.
      Counter<double> m_wdog;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Input Timeout", m_args.input_timeout)
        .defaultValue("4.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");
      }

      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(true);
        m_uart->flush();
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      bool
      sendCommand(const char* cmd, const char* reply)
      {
        char bfr[128];

        m_uart->write(cmd);

        if (m_uart->hasNewData(1.0) == IOMultiplexing::PRES_OK)
        {
          m_uart->readString(bfr, sizeof(bfr));
          if (std::strcmp(bfr, reply) == 0)
            return true;
        }

        return false;
      }

      void
      onResourceInitialization(void)
      {
        m_uart->write("\r");
        Delay::wait(1.0);
        m_uart->flush();

        if (!sendCommand("\r", "\r\n"))
          throw RestartNeeded(DTR("failed to enter command mode"), 5);

        if (!sendCommand("SET SAMPLE 1 s\r", ">SET SAMPLE 1 s\r\n"))
          throw RestartNeeded(DTR("failed to set sampling rate"), 5);

        if (!sendCommand("MONITOR\r", ">MONITOR\r\n"))
          throw RestartNeeded(DTR("failed to enter monitor mode"), 5);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
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
            throw RestartNeeded(DTR("input timeout"), 5);
          }

          if (m_uart->hasNewData(1.0) != IOMultiplexing::PRES_OK)
            continue;

          int rv = m_uart->readString(bfr, sizeof(bfr));

          if (rv <= 0)
            throw RestartNeeded(DTR("I/O error"), 5);

          if (std::sscanf(bfr, "%f", &m_sspeed.value) != 1)
            continue;

          if ((m_sspeed.value < c_min_speed) || (m_sspeed.value > c_max_speed))
            m_sspeed.value = -1;

          m_wdog.reset();
          dispatch(m_sspeed);
        }
      }
    };
  }
}

DUNE_TASK
