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
#include <stdexcept>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace DLV3
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // UART device.
      std::string uart_dev;
      // UART baud rate.
      unsigned uart_baud;
      // True if protocol is binary.
      bool binary;
      // Position entity label.
      std::string elabel_pos;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Maximum line length.
      int m_max_line_len;
      // Serial port device.
      SerialPort* m_uart;
      // Device data.
      IMC::DevDataText m_txt;
      // Device data.
      IMC::DevDataBinary m_bin;
      // Position message.
      IMC::DevDataText m_pos;
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
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Binary", m_args.binary)
        .defaultValue("false")
        .description("Set to true if protocol is binary");

        param("Entity Label - Position", m_args.elabel_pos)
        .description("Entity label of position message");
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onEntityReservation(void)
      {
        int pos_id = reserveEntity(m_args.elabel_pos);
        m_pos.setSourceEntity(pos_id);
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      onResourceInitialization(void)
      {
        m_uart->sendBreak(100);
        Delay::wait(1.0);
        m_uart->write("log gprmc ontime 60\r\n");
      }

      void
      onMain(void)
      {
        int no_data = 0;
        std::string line;
        char bfr[1024];

        while (!stopping())
        {
          if (m_uart->hasNewData(1.0) == IOMultiplexing::PRES_OK)
          {
            no_data = 0;
            int rv = m_uart->read(bfr, 1024);

            if (rv <= 0)
              continue;

            if (m_args.binary)
            {
              m_bin.value.assign(bfr, bfr + rv);
              dispatch(m_bin);
            }
            else
            {
              for (int i = 0; i < rv; ++i)
              {
                line.push_back(bfr[i]);

                if (bfr[i] == '\n')
                {
                  if (line.substr(0, 6).compare("$GPRMC") == 0)
                  {
                    m_pos.value = line;
                    dispatch(m_pos);
                  }
                  else
                  {
                    m_txt.value = line;
                    dispatch(m_txt);
                  }

                  line.clear();
                }
              }
            }
          }
          else
          {
            ++no_data;
          }

          if (no_data == 30)
          {
            inf(DTR("waking device"));
            onResourceInitialization();
            m_uart->sendBreak(100);
            no_data = 0;
          }
        }
      }
    };
  }
}

DUNE_TASK
