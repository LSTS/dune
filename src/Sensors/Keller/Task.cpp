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
// Author: Renato Caldas                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstddef>
#include <limits>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Device driver for %Keller Pressure %Sensors.
  namespace Keller
  {
    using DUNE_NAMESPACES;

    enum Commands
    {
      CMD_CONFIRMATION_FOR_INITIALIZATION = 48,
      CMD_READ_SERIAL_NUMBER = 69,
      CMD_READ_CHANNEL = 73,
      CMD_ZERO_CHANNEL = 95
    };

    enum CommandDataSizes
    {
      CMD_CONFIRMATION_FOR_INITIALIZATION_SIZE = 6,
      CMD_READ_SERIAL_NUMBER_SIZE = 4,
      CMD_READ_CHANNEL_SIZE = 5,
      CMD_ZERO_CHANNEL_SIZE = 1
    };

    enum ParserStates
    {
      STA_ADDR,
      STA_CMD,
      STA_DATA,
      STA_CRC_MSB,
      STA_CRC_LSB
    };

    enum ParserResults
    {
      RES_IN_PROGRESS = 0,
      RES_DONE,
      RES_CRC,
      RES_EXCEPTION
    };

    struct Arguments
    {
      // UART device.
      std::string uart_dev;
      // UART baud rate.
      unsigned uart_baud;
      // True if UART has local echo enabled.
      bool uart_echo;
      // Depth conversion factor.
      float depth_conv;
      // Device address.
      int address;
      //! Number of seconds without data before reporting an error.
      double timeout_error;
      //! Number of seconds without data before reporting a failure and
      //! restarting.
      double timeout_failure;
      //! GPS entity label.
      std::string label_gps;
    };

    // Number of seconds to wait before setting an entity error.
    static const float c_expire_wdog = 2.0f;

    struct Task: public Tasks::Periodic
    {
      static const unsigned c_parser_data_size = 6;
      // Maximum number of consecutive CRC errors before bailing out.
      static const unsigned c_max_crc_err = 10;
      //! Serial port handle.
      IO::Handle* m_handle;
      // True if serial port echoes sent commands.
      bool m_echo;
      // Read Pressure message;
      uint8_t m_msg_read_pressure[5];
      // Read Temperature message;
      uint8_t m_msg_read_temperature[5];
      // Pressure.
      IMC::Pressure m_pressure;
      // Depth.
      IMC::Depth m_depth;
      // Measured temperature.
      IMC::Temperature m_temperature;
      // Sensor is calibrated.
      bool m_calibrated;
      // Entity ID.
      int m_entity_id;
      // Current parser state.
      ParserStates m_parser_state;
      // Current parser command.
      uint8_t m_parser_cmd;
      // Parser data buffer.
      uint8_t m_parser_data[c_parser_data_size];
      // Parser data buffer length.
      uint8_t m_parser_data_len;
      // Parser data CRC.
      uint16_t m_parser_data_crc;
      // Parser packet CRC.
      uint16_t m_parser_packet_crc;
      // Active channel value.
      float m_channel_readout;
      // Entity error reporting expire time checker
      Time::Counter<float> m_wdog;
      // Unsigned CRC error counter.
      unsigned m_crc_err_count;
      //! Entity state timer.
      Counter<double> m_state_timer;
      //! Sample count.
      size_t m_sample_count;
      //! Faults count.
      size_t m_faults_count;
      //! Timeout count.
      size_t m_timeout_count;
      //! GPS source entity.
      unsigned m_gps_eid;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_handle(NULL),
        m_crc_err_count(0),
        m_state_timer(1),
        m_sample_count(0),
        m_faults_count(0),
        m_timeout_count(0)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");

        param("Serial Port - Local Echo", m_args.uart_echo)
        .defaultValue("false")
        .description("Set to true if serial port has local echo enabled");

        param("Device Address", m_args.address)
        .minimumValue("0")
        .maximumValue("250");

        param("Water Density", m_args.depth_conv)
        .units(Units::KilogramPerCubicMeter)
        .defaultValue("1025.0");

        param("Timeout - Error", m_args.timeout_error)
        .defaultValue("4.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before reporting an error");

        param("Timeout - Failure", m_args.timeout_failure)
        .defaultValue("8.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before restarting task");

        param("Entity Label - GPS", m_args.label_gps)
        .defaultValue("GPS")
        .description("Entity label of 'GpsFix' messages");

        m_calibrated = false;

        // Register consumers.
        bind<IMC::GpsFix>(this);
        bind<IMC::VehicleMedium>(this);
      }

      void
      onUpdateParameters(void)
      {
        // Depth conversion (bar to meters of fluid).
        if (paramChanged(m_args.depth_conv))
          m_args.depth_conv = Math::c_pascal_per_bar / (Math::c_gravity * m_args.depth_conv);

        // Initialize serial messages.
        m_msg_read_pressure[0] = m_args.address;
        m_msg_read_pressure[1] = CMD_READ_CHANNEL;
        m_msg_read_pressure[2] = 1;
        uint16_t crc = Algorithms::CRC16::compute(m_msg_read_pressure, 3, 0xFFFF);
        ByteCopy::toBE(crc, &m_msg_read_pressure[3]);

        m_msg_read_temperature[0] = m_args.address;
        m_msg_read_temperature[1] = CMD_READ_CHANNEL;
        m_msg_read_temperature[2] = 4;
        crc = Algorithms::CRC16::compute(m_msg_read_temperature, 3, 0xFFFF);
        ByteCopy::toBE(crc, &m_msg_read_temperature[3]);

        if (paramChanged(m_args.timeout_error))
          m_wdog.setTop(m_args.timeout_error);
      }

      void
      onResourceAcquisition(void)
      {
        onResourceRelease();

        try
        {
          if (openSocket())
            return;

          m_handle = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_handle->flush();
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
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
      onEntityResolution(void)
      {
        try
        {
          m_gps_eid = resolveEntity(m_args.label_gps);
        }
        catch (...)
        {
          m_gps_eid = std::numeric_limits<unsigned>::max();
        }
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_handle);
      }

      void
      onResourceInitialization(void)
      {
        m_crc_err_count = 0;
        initialize();
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->getSourceEntity() != m_gps_eid)
          return;

        if (msg->validity & IMC::GpsFix::GFV_VALID_POS)
          calibrate();
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        if (msg->medium != IMC::VehicleMedium::VM_UNDERWATER)
          calibrate();
      }

      //! Calibrate device.
      void
      calibrate(void)
      {
        if (!m_calibrated)
        {
          zero();
          m_calibrated = true;
        }
      }

      bool
      write(uint8_t* bfr, int len)
      {
        uint8_t rxbfr[10];
        int i = len;
        bool aborted = true;

        m_handle->flush();
        m_handle->write(bfr, len);

        // If no echo is expected, do nothing here.
        if (!m_args.uart_echo)
          return true;

        Time::Counter<double> tout(1.0);

        while (!tout.overflow())
        {
          if (!Poll::poll(*m_handle, tout.getRemaining()))
            continue;

          i -= m_handle->read(rxbfr + (len - i), i);
          if (i == 0)
          {
            aborted = false;
            break;
          }
        }

        if (aborted)
        {
          m_timeout_count++;
          debug("echo handling enabled, but got no RS-485 echo");
          m_handle->flush();
          return false;
        }

        // Check for collisions here.
        for (i = 0; i < len; i++)
        {
          if (rxbfr[i] != bfr[i])
          {
            m_faults_count++;
            debug("received RS-485 echo doesn't match");
            m_handle->flush();
            return false;
          }
        }

        return true;
      }

      bool
      read(void)
      {
        uint8_t bfr[10];

        // Reset the parser whenever a read is asked for.
        m_parser_state = STA_ADDR;

        while (Poll::poll(*m_handle, 0.1))
        {
          int len = m_handle->read(bfr, sizeof(bfr));
          ParserResults result = parse(bfr, len);

          if (result == RES_DONE)
          {
            m_wdog.reset();
            m_crc_err_count = 0;
            return true;
          }
          else if (result == RES_EXCEPTION)
          {
            m_faults_count++;
            m_crc_err_count = 0;
            return false;
          }
          else if (result == RES_CRC)
          {
            m_faults_count++;
            if (++m_crc_err_count > c_max_crc_err)
              throw RestartNeeded(DTR("exceeded maximum consecutive CRC error count"), 5);
            return false;
          }
        }

        // No data received.
        return false;
      }

      ParserResults
      parse(uint8_t* bfr, uint8_t len)
      {
        ParserResults result = RES_IN_PROGRESS;

        while (len > 0)
        {
          switch (m_parser_state)
          {
            case STA_ADDR:
              if (*bfr == m_args.address)
              {
                m_parser_data_crc = Algorithms::CRC16::compute(bfr, 1, 0xFFFF);
                m_parser_state = STA_CMD;
              }
              break;

            case STA_CMD:
              m_parser_cmd = *bfr;
              m_parser_data_crc = Algorithms::CRC16::compute(bfr, 1, m_parser_data_crc);
              m_parser_state = STA_DATA;
              m_parser_data_len = 0;
              break;

            case STA_DATA:
              m_parser_data[m_parser_data_len++] = *bfr;
              if ((m_parser_data_len >= c_parser_data_size) ||
                  // This means we got an exception, so only one data byte to read:
                  (m_parser_cmd & (1 << 7)) ||
                  ((m_parser_cmd == CMD_CONFIRMATION_FOR_INITIALIZATION) && (m_parser_data_len >= CMD_CONFIRMATION_FOR_INITIALIZATION_SIZE)) ||
                  ((m_parser_cmd == CMD_READ_SERIAL_NUMBER) && (m_parser_data_len >= CMD_READ_SERIAL_NUMBER_SIZE)) ||
                  ((m_parser_cmd == CMD_READ_CHANNEL) && (m_parser_data_len >= CMD_READ_CHANNEL_SIZE)) ||
                  ((m_parser_cmd == CMD_ZERO_CHANNEL) && (m_parser_data_len >= CMD_ZERO_CHANNEL_SIZE)))
                m_parser_state = STA_CRC_MSB;
              break;

            case STA_CRC_MSB:
              m_parser_data_crc = Algorithms::CRC16::compute(m_parser_data, m_parser_data_len, m_parser_data_crc);

              m_parser_packet_crc = (*bfr << 8);
              m_parser_state = STA_CRC_LSB;
              break;

            case STA_CRC_LSB:
              m_parser_packet_crc |= *bfr;
              // Handle crc errors properly:
              if (m_parser_packet_crc != m_parser_data_crc)
                result = RES_CRC;
              else if (!interpret())
                result = RES_EXCEPTION;
              else
                result = RES_DONE;
              // Falls through.

            default:
              m_parser_state = STA_ADDR;
              break;
          }

          bfr++;
          len--;
        }

        return result;
      }

      bool
      interpret(void)
      {
        uint32_t tmp = 0;

        if (m_parser_cmd & (1 << 7))
        {
          if (m_parser_data[0] == 32)
          {
            err(DTR("device not initialized, initializing"));
            setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
            initialize();
          }
          else
          {
            err(DTR("got exception %d for command %d"),
                (int)m_parser_data[0], (int)m_parser_cmd);
          }

          // Got an exception don't bother interpreting anything else.
          return false;
        }

        switch (m_parser_cmd)
        {
          case CMD_CONFIRMATION_FOR_INITIALIZATION:
            inf(DTR("initialized device: class=%d.%d firmware=%d"),
                (int)m_parser_data[0], (int)m_parser_data[2], (int)m_parser_data[3]);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            break;
          case CMD_READ_SERIAL_NUMBER:
            ByteCopy::fromBE(tmp, m_parser_data);
            inf(DTR("device serial number=%u"), tmp);
            break;
          case CMD_READ_CHANNEL:
            ByteCopy::fromBE(m_channel_readout, m_parser_data);
            break;
          case CMD_ZERO_CHANNEL:
            inf("%s", DTR(Status::getString(Status::CODE_CALIBRATED)));
        }

        // Everything correctly interpreted, so return true
        return true;
      }

      void
      initialize(void)
      {
        m_handle->flush();

        uint16_t crc = 0;
        uint8_t bfr[10] =
        {
          (uint8_t)m_args.address,
          (uint8_t)CMD_CONFIRMATION_FOR_INITIALIZATION
        };

        crc = Algorithms::CRC16::compute(bfr, 2, 0xFFFF);
        ByteCopy::toBE(crc, &bfr[2]);
        write(bfr, 4);
        if (!read())
          throw RestartNeeded(DTR("unable to initialize the device"), 5.0, false);

        bfr[0] = m_args.address;
        bfr[1] = CMD_READ_SERIAL_NUMBER;
        crc = Algorithms::CRC16::compute(bfr, 2, 0xFFFF);
        ByteCopy::toBE(crc, &bfr[2]);
        write(bfr, 4);
        if (!read())
          throw RestartNeeded(DTR("unable to retrieve the serial number"), 5.0, false);
      }

      void
      zero(void)
      {
        uint16_t crc = 0;
        uint8_t bfr[10] =
        {
          (uint8_t)m_args.address,
          (uint8_t)CMD_ZERO_CHANNEL,
          0
        };

        crc = Algorithms::CRC16::compute(bfr, 3, 0xFFFF);
        ByteCopy::toBE(crc, &bfr[3]);
        write(bfr, 5);
        if (!read())
          throw RestartNeeded(DTR("unable to zero the device"), 5);
      }

      void
      reportEntityState(void)
      {
        if (m_wdog.overflow())
        {
          std::string text = String::str(DTR("%0.1f seconds without valid data"),
                                         m_wdog.getElapsed());

          if (m_wdog.getElapsed() >= m_args.timeout_failure)
            throw RestartNeeded(text, 0);
          else
            setEntityState(IMC::EntityState::ESTA_ERROR, text);

          return;
        }

        if (!m_state_timer.overflow())
          return;

        double time_elapsed = m_state_timer.getElapsed();
        double frequency = Math::round(m_sample_count / time_elapsed);

        std::string text = String::str(DTR("active | timeouts: %u | faults: %u | frequency: %u"),
                                       m_timeout_count,
                                       m_faults_count,
                                       (unsigned)frequency);

        setEntityState(IMC::EntityState::ESTA_NORMAL, text);
        m_state_timer.reset();
        m_sample_count = 0;
      }

      void
      task(void)
      {
        // Query pressure.
        if (write(m_msg_read_pressure, sizeof(m_msg_read_pressure)))
        {
          if (read())
          {
            m_sample_count++;
            m_pressure.value = m_channel_readout * c_pascal_per_bar;
            dispatch(m_pressure);
            m_depth.value = m_channel_readout * m_args.depth_conv;
            dispatch(m_depth);
          }
        }

        // Query temperature.
        if (write(m_msg_read_temperature, sizeof(m_msg_read_temperature)))
        {
          if (read())
          {
            m_temperature.value = m_channel_readout;
            dispatch(m_temperature);
          }
        }

        reportEntityState();
      }
    };
  }
}

DUNE_TASK
