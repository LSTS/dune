//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Task.cpp 12721 2013-01-25 02:01:06Z jbraga                       $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace GillWindObserverII
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // UART device.
      std::string uart_dev;
      // UART baud rate.
      unsigned uart_baud;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Serial port handle.
      SerialPort* m_uart;
      // Wind speed message.
      IMC::WindSpeed m_wind;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(true);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      onMain(void)
      {
        char line[128];
        int rv = 0;
        int wind_dir;

        inf("%s", DTR(Status::getString(Status::CODE_ACTIVE)));

        while (!stopping())
        {
          rv = m_uart->read(line, 128);

          if (rv <= 0)
            continue;

          // Terminate string.
          line[rv] = 0;

          std::vector<std::string> parts;
          String::split(line, ",", parts);

          if (parts.size() != 6)
            continue;

          std::sscanf(parts[1].c_str(), "%d", &wind_dir);
          m_wind.direction = DUNE::Math::Angles::radians(wind_dir);
          std::sscanf(parts[2].c_str(), "%f", &m_wind.speed);

          dispatch(m_wind);
        }
      }
    };
  }
}

DUNE_TASK
