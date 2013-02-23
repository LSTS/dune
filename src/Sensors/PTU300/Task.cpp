//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace PTU300
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // Serial port device.
      std::string uart_dev;
      // Serial port baud rate.
      unsigned uart_baud;
      // True if device has humidity sensor.
      bool has_humidity;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Temperature message.
      IMC::Temperature m_temp;
      // Pressure message.
      IMC::Pressure m_press;
      // Relative Humidity.
      IMC::RelativeHumidity m_humidity;
      // Serial port handle.
      SerialPort* m_uart;
      // Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("4800")
        .description("Serial port baud rate");

        param("Device Has Humidity Sensor", m_args.has_humidity)
        .defaultValue("false")
        .description("Device Has Humidity Sensor");
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud,
                                SerialPort::SP_PARITY_EVEN,
                                SerialPort::SP_STOPBITS_1,
                                SerialPort::SP_DATABITS_7);
      }

      void
      onResourceInitialization(void)
      {
        if (!sendCommand("S\r\nECHO OFF\r\n", "Echo           : OFF\r\n"))
        {
          err(DTR("unable to stop continuous output"));
          return;
        }

        if (!sendCommand("FTIME OFF\r\n", "Form. time     : OFF\r\n"))
        {
          err(DTR("unable to configure time output"));
          return;
        }

        if (!sendCommand("FDATE OFF\r\n", "Form. date     : OFF\r\n"))
        {
          err(DTR("unable to configure date output"));
          return;
        }

        if (m_args.has_humidity)
        {
          if (!sendCommand("FORM 6.4 P " " 3.4 T " " 3.4 RH\\r\\n\r\n", "OK\r\n"))
          {
            err(DTR("unable to set output format"));
            return;
          }
        }
        else
        {
          if (!sendCommand("FORM 6.4 P " " 3.4 T\\r\\n\r\n", "OK\r\n"))
          {
            err(DTR("unable to set output format"));
            return;
          }
        }

        if (!sendCommand("R\r\n"))
        {
          err(DTR("unable to request continuous output"));
          return;
        }

        inf("%s", DTR(Status::getString(Status::CODE_ACTIVE)));
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      bool
      sendCommand(const char* cmd, const char* ack = 0, double timeout = 2.0)
      {
        int size = std::strlen(cmd);

        // Send command to device.
        int rv = m_uart->write(cmd, size);
        if (rv != size)
        {
          err(DTR("unable to write full command to device"));
          return false;
        }

        if (ack == 0)
          return true;

        fp64_t time_start = Clock::get();
        fp64_t time_remaining = timeout;

        // Parsing buffer.
        char pbfr[256];
        // Parsing buffer index.
        int pbfr_i = 0;

        while (time_remaining > 0.0)
        {
          IOMultiplexing::Result res = m_uart->hasNewData(time_remaining);

          // Timeout
          if (res == IOMultiplexing::PRES_NONE)
            break;

          // Error.
          if (res == IOMultiplexing::PRES_ERROR)
          {
            err("%s", DTR(Status::getString(Status::CODE_IO_ERROR)));
            return false;
          }

          rv = m_uart->read(pbfr + pbfr_i, 64);

          if (rv > 0)
          {
            pbfr_i += rv;
            if (pbfr_i > 255)
              pbfr_i = 255;
            pbfr[pbfr_i] = 0;
            if (std::strstr(pbfr, ack))
              return true;
          }

          time_remaining = timeout - (Clock::get() - time_start);
        }

        err(DTR("timeout waiting for device response"));
        return false;
      }

      void
      onMain(void)
      {
        char rbfr[32];
        char pbfr[256];
        char* pbfr_p = pbfr;

        while (!stopping())
        {
          if (m_uart->hasNewData(1.0) == IOMultiplexing::PRES_OK)
          {
            int rv = m_uart->read(rbfr, 32);

            for (int i = 0; i < rv; ++i)
            {
              if (rbfr[i] == '\n')
              {
                *pbfr_p = 0;
                pbfr_p = pbfr;

                if (m_args.has_humidity)
                {
                  if (std::sscanf(pbfr, "%lf %f %f", &m_press.value, &m_temp.value, &m_humidity.value) == 3)
                  {
                    fp64_t tstamp = m_temp.setTimeStamp();
                    m_press.setTimeStamp(tstamp);
                    m_humidity.setTimeStamp(tstamp);

                    dispatch(m_press, DF_KEEP_TIME);
                    dispatch(m_temp, DF_KEEP_TIME);
                    dispatch(m_humidity, DF_KEEP_TIME);
                  }
                }
                else
                {
                  if (std::sscanf(pbfr, "%lf %f", &m_press.value, &m_temp.value) == 2)
                  {
                    fp64_t tstamp = m_temp.setTimeStamp();
                    m_press.setTimeStamp(tstamp);
                    dispatch(m_press, DF_KEEP_TIME);
                    dispatch(m_temp, DF_KEEP_TIME);
                  }
                }
              }
              else
              {
                if (rbfr[i] != '\r')
                {
                  *pbfr_p = rbfr[i];
                  ++pbfr_p;
                }
              }
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
