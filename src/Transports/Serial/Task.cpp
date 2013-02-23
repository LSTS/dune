//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Serial
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      std::string device;
      uint16_t baud_rate;
    };

    struct Task: public Tasks::SimpleTransport
    {
      // Task arguments.
      Arguments m_args;

      // Serial port handle.
      Hardware::SerialPort* m_uart;

      // Parser handle.
      IMC::Parser m_parser;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::SimpleTransport(name, ctx),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.device)
        .defaultValue("")
        .description("Serial port device");

        param("Serial Port - Baud Rate", m_args.baud_rate)
        .defaultValue("9600")
        .description("Serial port baud rate");
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.device, m_args.baud_rate);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);

        m_parser.reset();
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onDataTransmission(const uint8_t* p, unsigned int n)
      {
        m_uart->write(p, n);
      }

      void
      onDataReception(uint8_t* p, unsigned int n, double timeout)
      {
        if (m_uart->hasNewData(timeout) != IOMultiplexing::PRES_OK)
          return;

        int n_r;

        try
        {
          n_r = m_uart->read(p, n);
        }
        catch (std::exception& e)
        {
          err("read error: %s", e.what());
          return;
        }

        if (n_r < 0)
        {
          err("unknown read error");
          return;
        }

        handleData(m_parser, p, n_r);
      }
    };
  }
}

DUNE_TASK
