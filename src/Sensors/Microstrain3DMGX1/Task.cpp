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
#include <stdexcept>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Device driver for the Microstrain 3DM-GX1 AHRS.
  namespace Microstrain3DMGX1
  {
    using DUNE_NAMESPACES;

    // Duration of each clock cycle (seconds).
    static const fp64_t c_tick_duration = 0.0065536;
    // Tick rollover (seconds).
    static const uint16_t c_tick_rollover = 65535;
    // Euler angles conversion factor.
    static const fp64_t c_euler_factor = (360.0 / 65536.0);

    enum CommandByte
    {
      // Null command.
      MSG_NULL = 0x00,
      // Continuous mode.
      MSG_CONTMODE = 0x10,
      // EEPROM Value.
      MSG_EEPROM = 0x28,
      // Gyro-Stabilized Magnetic Field, Acceleration and Angular
      // Rate Vectors.
      MSG_IVECS = 0x02,
      // Instantaneous Magnetic Field, Acceleration and Angular
      // Rate Vectors.
      MSG_RAW_IVECS = 0x03,
      // Gyro-Stabilized Euler Angles.
      MSG_GS_EULER = 0x0E
    };

    // States of the internal FSM.
    enum FSMStates
    {
      FSM_STATE_NONE,
      FSM_STATE_MESSAGE
    };

    struct Arguments
    {
      // UART device.
      std::string uart_dev;
      // UART baud rate.
      unsigned uart_baud;
      // Data timeout.
      double data_tout;
      // True to sample raw inertial vectors, false for compensated.
      bool raw_ivecs;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Serial port.
      SerialPort* m_uart;
      // Euler Angles message.
      IMC::EulerAngles m_euler;
      // Angular velocity.
      IMC::AngularVelocity m_agvel;
      // Acceleration
      IMC::Acceleration m_accel;
      // Current FSM state.
      FSMStates m_state;
      // Count of bytes left to form a complete message.
      int m_togo;
      // Count of parsed bytes from current message.
      int m_done;
      // Command data.
      uint8_t m_data[32];
      // Acceleration vector scale constant.
      fp64_t m_accel_scale;
      // Angular rate scale constant.
      fp64_t m_gyro_scale;
      // Value of the last read EEPROM address.
      int16_t m_eeprom;
      // Device's timer.
      fp64_t m_timer;
      // Value of the last timer tick.
      uint16_t m_last_tick;
      // Task arguments.
      Arguments m_args;
      // Watchdog.
      Counter<double> m_wdog;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_timer(0),
        m_last_tick(0)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Data Timeout", m_args.data_tout)
        .units(Units::Second)
        .defaultValue("2.0")
        .minimumValue("1.0");

        param("Raw Inertial Vectors", m_args.raw_ivecs)
        .defaultValue("false")
        .description("Set to true to enable sampling of raw data");
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      void
      onResourceInitialization(void)
      {
        m_wdog.setTop(m_args.data_tout);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      int8_t
      getCommandDataSize(uint8_t id)
      {
        switch (id)
        {
          case MSG_IVECS:
            return 23;
          case MSG_RAW_IVECS:
            return 23;
          case MSG_CONTMODE:
            return 7;
          case MSG_EEPROM:
            return 7;
          case MSG_GS_EULER:
            return 11;
        }

        return -1;
      }

      bool
      setup(void)
      {
        clear();

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        // Stop continuous mode.
        setContinuousMode();
        Delay::wait(1.0);
        m_uart->flushInput();

        // Stop continuous mode and read answer.
        setContinuousMode();
        if (!getMessage(MSG_CONTMODE))
        {
          setEntityState(IMC::EntityState::ESTA_FAILURE,
                         DTR("failed to stop device"));
          return false;
        }

        // Read GyroGainScale.
        queryEEPROM(130);
        if (!getMessage(MSG_EEPROM))
        {
          setEntityState(IMC::EntityState::ESTA_FAILURE,
                         DTR("failed to read EEPROM#130"));
          return false;
        }
        m_gyro_scale = (32768000.0 / m_eeprom);

        // Read AccelGainScale.
        queryEEPROM(230);
        if (!getMessage(MSG_EEPROM))
        {
          setEntityState(IMC::EntityState::ESTA_FAILURE,
                         DTR("failed to read EEPROM#230"));
          return false;
        }
        m_accel_scale = (32768000.0 / m_eeprom);

        // Set continuous mode for gyro-stabilized euler angles.
        setContinuousMode(MSG_GS_EULER);

        // Device is configured.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        return true;
      }

      bool
      getMessage(CommandByte type, fp64_t maxwait = 1.0)
      {
        char bfr[64];
        bool got = false;

        while (Poll::poll(*m_uart, maxwait) && !got)
        {
          int rv = m_uart->read(bfr, 64);

          for (int i = 0; i < rv; ++i)
            if (parse(bfr[i]) == type)
            {
              got = true;
              break;
            }
        }

        return got;
      }

      void
      clear(void)
      {
        m_state = FSM_STATE_NONE;
        m_togo = 0;
        m_done = 0;
      }

      fp64_t
      updateTimerCount(uint8_t* data)
      {
        uint16_t ticks = 0;
        ByteCopy::fromBE(ticks, data);

        // Check for overflows.
        if (ticks < m_last_tick)
          m_timer += (c_tick_rollover - m_last_tick + ticks) * c_tick_duration;
        else
          m_timer += (ticks - m_last_tick) * c_tick_duration;

        m_last_tick = ticks;

        return m_timer;
      }

      CommandByte
      parse(uint8_t byte)
      {
        int8_t msg_size = 0;

        switch (m_state)
        {
          // Test for synchronization
          case FSM_STATE_NONE:
            m_togo = m_done = 0;
            msg_size = getCommandDataSize(byte);
            if (msg_size > 0)
            {
              m_togo = msg_size - 1;
              m_done = 1;
              m_data[0] = byte;   // Store ID.
              m_state = FSM_STATE_MESSAGE;
            }
            break;

            // Parse message body.
          case FSM_STATE_MESSAGE:
            m_data[m_done] = byte;
            ++m_done;
            --m_togo;
            break;

            // Should never get here.
          default:
            debug("%s: 0x%02x", DTR("unexpected byte"), byte);
            break;
        }

        // Exit if we don't have a complete message.
        if (m_togo != 0 || m_state != FSM_STATE_MESSAGE)
          return MSG_NULL;

        m_state = FSM_STATE_NONE;

        if (!validateCheckSum(m_data, m_done))
        {
          err("%s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
          return MSG_NULL;
        }

        double tstamp = Clock::getSinceEpoch();

        // Interpret parsed data.
        int16_t angle = 0;

        switch (m_data[0])
        {
          case MSG_CONTMODE:
            return MSG_CONTMODE;

          case MSG_EEPROM:
            ByteCopy::fromBE(m_eeprom, m_data + 1);
            return MSG_EEPROM;

          case MSG_GS_EULER:
            m_euler.time = updateTimerCount(m_data + 7);
            ByteCopy::fromBE(angle, m_data + 1);
            m_euler.phi = Angles::radians((fp64_t)angle * c_euler_factor);
            ByteCopy::fromBE(angle, m_data + 3);
            m_euler.theta = Angles::radians((fp64_t)angle * c_euler_factor);
            ByteCopy::fromBE(angle, m_data + 5);
            m_euler.psi = Angles::radians((fp64_t)angle * c_euler_factor);
            m_euler.psi_magnetic = m_euler.psi;
            m_euler.setTimeStamp(tstamp);
            dispatch(m_euler, DF_KEEP_TIME);
            requestMessage(m_args.raw_ivecs ? MSG_RAW_IVECS : MSG_IVECS);
            return MSG_GS_EULER;

          case MSG_IVECS:
            // Acceleration.
            m_accel.time = updateTimerCount(m_data + 19);
            ByteCopy::fromBE(angle, m_data + 7);
            m_accel.x = (fp64_t)angle / m_accel_scale;
            ByteCopy::fromBE(angle, m_data + 9);
            m_accel.y = (fp64_t)angle / m_accel_scale;
            ByteCopy::fromBE(angle, m_data + 11);
            m_accel.z = (fp64_t)angle / m_accel_scale;
            m_accel.setTimeStamp(tstamp);

            // Angular velocity.
            ByteCopy::fromBE(angle, m_data + 13);
            m_agvel.x = (fp64_t)angle / m_gyro_scale;
            ByteCopy::fromBE(angle, m_data + 15);
            m_agvel.y = (fp64_t)angle / m_gyro_scale;
            ByteCopy::fromBE(angle, m_data + 17);
            m_agvel.z = (fp64_t)angle / m_gyro_scale;
            m_agvel.setTimeStamp(tstamp);

            dispatch(m_accel, DF_KEEP_TIME);
            dispatch(m_agvel, DF_KEEP_TIME);
            return MSG_IVECS;

          case MSG_RAW_IVECS:
            // Acceleration.
            m_accel.time = updateTimerCount(m_data + 19);
            ByteCopy::fromBE(angle, m_data + 7);
            m_accel.x = (fp64_t)angle / m_accel_scale;
            ByteCopy::fromBE(angle, m_data + 9);
            m_accel.y = (fp64_t)angle / m_accel_scale;
            ByteCopy::fromBE(angle, m_data + 11);
            m_accel.z = (fp64_t)angle / m_accel_scale;
            m_accel.setTimeStamp(tstamp);

            // Angular velocity.
            ByteCopy::fromBE(angle, m_data + 13);
            m_agvel.x = (fp64_t)angle / m_gyro_scale;
            ByteCopy::fromBE(angle, m_data + 15);
            m_agvel.y = (fp64_t)angle / m_gyro_scale;
            ByteCopy::fromBE(angle, m_data + 17);
            m_agvel.z = (fp64_t)angle / m_gyro_scale;
            m_agvel.setTimeStamp(tstamp);

            dispatch(m_accel, DF_KEEP_TIME);
            dispatch(m_agvel, DF_KEEP_TIME);
            return MSG_RAW_IVECS;
        }

        return MSG_NULL;
      }

      void
      setContinuousMode(CommandByte msg = MSG_NULL)
      {
        uint8_t cmd[3] =
        {
          (uint8_t)MSG_CONTMODE,
          (uint8_t)0x00,
          (uint8_t)msg
        };

        m_uart->write(cmd, 3);
      }

      void
      queryEEPROM(uint16_t address)
      {
        uint8_t cmd[3] =
        {
          MSG_EEPROM,
          (uint8_t)(address >> 8),
          (uint8_t)address
        };

        m_uart->write(cmd, 3);
      }

      void
      requestMessage(CommandByte command)
      {
        uint8_t cmd = command;
        m_uart->write(&cmd, 1);
      }

      bool
      validateCheckSum(const uint8_t* bfr, unsigned int size)
      {
        int16_t rsum = 0;
        int16_t sum = bfr[0];

        ByteCopy::fromBE(rsum, bfr + size - 2);

        for (unsigned int i = 1; i < size - 2; i += 2)
        {
          int16_t val = 0;
          ByteCopy::fromBE(val, bfr + i);
          sum += val;
        }

        return (rsum == sum);
      }

      void
      onMain(void)
      {
        while (!setup())
        {
          Delay::wait(1.0);
        }

        uint8_t bfr[256];

        while (!stopping())
        {
          if (Poll::poll(*m_uart, 0.5))
          {
            size_t rv = m_uart->read(bfr, 256);
            for (size_t i = 0; i < rv; ++i)
            {
              CommandByte cb = parse(bfr[i]);
              if (cb == MSG_GS_EULER)
                m_wdog.reset();
            }

            setEntityState(IMC::EntityState::ESTA_NORMAL,
                           Status::CODE_ACTIVE);
          }

          if (m_wdog.overflow())
            setEntityState(IMC::EntityState::ESTA_ERROR,
                           Status::CODE_COM_ERROR);
        }
      }
    };
  }
}

DUNE_TASK
