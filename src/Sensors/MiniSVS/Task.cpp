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

namespace Sensors
{
  //! Device driver for Valeport's miniSVS Sound Velocity %Sensors.
  namespace MiniSVS
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
    };

    //! Minimum sound speed value.
    static const double c_min_speed = 1375.0;
    //! Maximum sound speed value.
    static const double c_max_speed = 1900.0;

    struct Task: public DUNE::Tasks::Task
    {
      //! Sound speed message.
      IMC::SoundSpeed m_sspeed;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Task arguments
      Arguments m_args;

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
      }

      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(true);
      }

      void
      onResourceInitialization(void)
      {
        m_uart->write("#");
        m_uart->write("M1\r\n");
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      onMain(void)
      {
        char bfr[16];

        while (!stopping())
        {
          if (m_uart->hasNewData(1.0) != IOMultiplexing::PRES_OK)
            continue;

          int rv = m_uart->readString(bfr, sizeof(bfr));

          if (rv <= 0)
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded("I/O error", 5);
          }

          if (std::sscanf(bfr, "%f", &m_sspeed.value) == 1)
          {
            m_sspeed.value /= 1000.0;
            if ((m_sspeed.value < c_min_speed) || (m_sspeed.value > c_max_speed))
              m_sspeed.value = -1.0;
            dispatch(m_sspeed);
          }
        }
      }
    };
  }
}

DUNE_TASK
