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
    //! Number of axis.
    static const uint8_t c_number_axis = 3;
    //! Hard Iron calibration parameter name.
    static const std::string c_hard_iron_param = "Hard-Iron Calibration";
    //! Hard Iron calibration date.
    static const std::string c_calib_time_param = "Last Calibration Time";
    //! Time to wait for soft-reset.
    static const float c_reset_tout = 5.0;

    //todo adicionar matriz de rotação
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
      MSG_GS_EULER = 0x0E,
      //Write EEPROM Value
      MSG_W_EEPROM= 0x29
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
      // Rotation matrix values.
      std::vector<double> rotation_mx;
      //! Hard iron calibration.
      std::vector<float> hard_iron;
      //! Calibration threshold.
      double calib_threshold;
      //! Calibration time stamp
      std::string calib_time;
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
      //! Magnetometer Vector message.
      IMC::MagneticField m_magfield;
      // Current FSM state.
      FSMStates m_state;
      //! Rotation Matrix to correct mounting position.
      Math::Matrix m_rotation;
      //! Rotated calibration parameters.
      float m_hard_iron[3];
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
      // MAg gain scale
      fp64_t m_mag_scale;
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

        param("IMU Rotation Matrix", m_args.rotation_mx)
        .defaultValue("")
        .size(9)
        .description("IMU rotation matrix which is dependent of the mounting position");

         param(c_hard_iron_param, m_args.hard_iron)
        .units(Units::Gauss)
        .size(c_number_axis)
        .description("Hard-Iron calibration parameters");

        param("Calibration Threshold", m_args.calib_threshold)
        .defaultValue("0.1")
        .units(Units::Gauss)
        .minimumValue("0.0")
        .description("Minimum magnetic field calibration values to reset hard iron parameters");

        param(c_calib_time_param, m_args.calib_time)
        .description("Date of last successful calibration")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("N/A");

        bind<IMC::MagneticField>(this);
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        m_rotation.fill(3, 3, &m_args.rotation_mx[0]);

        // Rotate calibration parameters.
        Math::Matrix data(3, 1);

        for (unsigned i = 0; i < 3; i++)
          data(i) = m_args.hard_iron[i];
        data = transpose(m_rotation) * data;
        for (unsigned i = 0; i < 3; i++)
          m_hard_iron[i] = data(i);

        if (m_uart != NULL)
        {
          if (paramChanged(m_args.hard_iron))
            runCalibration();
        }
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
      consume(const IMC::MagneticField* msg)
      {
        if (msg->getDestinationEntity() != getEntityId())
          return;

        // Reject if it is small adjustment.
        if ((std::abs(msg->x) < m_args.calib_threshold) &&
            (std::abs(msg->y) < m_args.calib_threshold))
          return;

        double hi_x = m_args.hard_iron[0] + msg->x;
        double hi_y = m_args.hard_iron[1] + msg->y;

        IMC::EntityParameter hip;
        hip.name = c_hard_iron_param;
        hip.value = String::str("%f, %f, 0.0", hi_x, hi_y);

        IMC::EntityParameter calt;
        Time::BrokenDown bdt(Time::Clock::getSinceEpochMsec() / 1000);
        calt.name = c_calib_time_param;
        calt.value = String::str("%04u-%02u-%02u %02u:%02u", bdt.year, bdt.month,
                                bdt.day, bdt.hour, bdt.minutes);

        IMC::SetEntityParameters np;
        np.name = getEntityLabel();
        np.params.push_back(hip);
        np.params.push_back(calt);
        dispatch(np, DF_LOOP_BACK);

        IMC::SaveEntityParameters sp;
        sp.name = getEntityLabel();
        dispatch(sp);
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
          case MSG_W_EEPROM :
            return 7;
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

        // Read MagGainScale.
        queryEEPROM(232);
        if (!getMessage(MSG_EEPROM))
        {
          setEntityState(IMC::EntityState::ESTA_FAILURE,
                         DTR("failed to read EEPROM#230"));
          return false;
        }
        m_mag_scale = (32768000.0 / m_eeprom);

        runCalibration();
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

            //! Correct data according with mounting position.
      void
      rotateAcceleration(void)
      {
        Math::Matrix data(3, 1);

        // Acceleration.
        data(0) = m_accel.x;
        data(1) = m_accel.y;
        data(2) = m_accel.z;
        data = m_rotation * data;
        m_accel.x = data(0);
        m_accel.y = data(1);
        m_accel.z = data(2);
      }

      void
      rotateAngularVelocity(void)
      {
        Math::Matrix data(3, 1);

        // Angular Velocity.
        data(0) = m_agvel.x;
        data(1) = m_agvel.y;
        data(2) = m_agvel.z;
        data = m_rotation * data;
        m_agvel.x = data(0);
        m_agvel.y = data(1);
        m_agvel.z = data(2);
      }

      void
      rotateMagneticField(void)
      {
        Math::Matrix data(3, 1);
        // Magnetic Field.
        data(0) = m_magfield.x;
        data(1) = m_magfield.y;
        data(2) = m_magfield.z;
        data = m_rotation * data;
        m_magfield.x = data(0);
        m_magfield.y = data(1);
        m_magfield.z = data(2);
      }

      void
      rotateEuler(void)
      {
        Math::Matrix data(3, 1);

        // Acceleration.
        data(0) = m_euler.phi;
        data(1) = m_euler.theta;
        data(2) = m_euler.psi;
        data = m_rotation * data;
        m_euler.phi = data(0);
        m_euler.theta = data(1);
        m_euler.psi = data(2);
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
            rotateEuler();
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
            rotateAcceleration();

            // Angular velocity.
            m_agvel.time = updateTimerCount(m_data + 19);
            ByteCopy::fromBE(angle, m_data + 13);
            m_agvel.x = (fp64_t)angle / m_gyro_scale;
            ByteCopy::fromBE(angle, m_data + 15);
            m_agvel.y = (fp64_t)angle / m_gyro_scale;
            ByteCopy::fromBE(angle, m_data + 17);
            m_agvel.z = (fp64_t)angle / m_gyro_scale;
            m_agvel.setTimeStamp(tstamp);
            rotateAngularVelocity();

            // Extract magnetic field.
            m_magfield.time =  updateTimerCount(m_data + 19);
            ByteCopy::fromBE(angle, m_data + 1);
            m_magfield.x = (fp64_t)angle / m_mag_scale;
            ByteCopy::fromBE(angle, m_data + 3);
            m_magfield.y = (fp64_t)angle / m_mag_scale;
            ByteCopy::fromBE(angle, m_data + 5);
            m_magfield.z = (fp64_t)angle / m_mag_scale;
            m_magfield.setTimeStamp(tstamp);
            rotateMagneticField();

            dispatch(m_magfield, DF_KEEP_TIME);
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
            rotateAcceleration();
            // Angular velocity.
            ByteCopy::fromBE(angle, m_data + 13);
            m_agvel.x = (fp64_t)angle / m_gyro_scale;
            ByteCopy::fromBE(angle, m_data + 15);
            m_agvel.y = (fp64_t)angle / m_gyro_scale;
            ByteCopy::fromBE(angle, m_data + 17);
            m_agvel.z = (fp64_t)angle / m_gyro_scale;
            m_agvel.setTimeStamp(tstamp);
            rotateAngularVelocity();
            dispatch(m_accel, DF_KEEP_TIME);
            dispatch(m_agvel, DF_KEEP_TIME);
            return MSG_RAW_IVECS;

          case MSG_W_EEPROM:
              ByteCopy::fromBE(m_eeprom, m_data + 1);
            return MSG_W_EEPROM;
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
      writeEEPROM(uint16_t address , uint16_t w_data)
      {
        uint8_t cmd[7] =
        {
          (uint8_t)MSG_W_EEPROM,
          (uint8_t)0x71,
          (uint8_t)(address >> 8),
          (uint8_t)address,
          (uint8_t)(w_data >> 8),
          (uint8_t)w_data,
          (uint8_t)0xAA
        };

        m_uart->write(cmd, 7);
      }

      //! Routine to run calibration proceedings.
      void
      runCalibration(void)
      {
        if (m_uart == NULL)
          return;

        // See if vehicle has same hard iron calibration parameters.
        if (!isCalibrated())
        {

          // Set hard iron calibration parameters and reset device.
          if (!setHardIron())
          {
            throw RestartNeeded(DTR("failed to set hard-iron correction factors"), 5);
          }
          else
          {
            // Set continuous mode for gyro-stabilized euler angles.
            setContinuousMode(MSG_GS_EULER);
          }
        }
      }

      //! Check if sensor has the same hard iron calibration parameters.
      //! @return true if the parameters are the same, false otherwise.
      bool
      isCalibrated(void)
      {
        // Sensor magnetic calibration.
        int16_t senCal[c_number_axis] = {0};
        // Magnetic calibration in configuration.
        int16_t cfgCal[c_number_axis] = {0};
        // Stop continuous mode and read answer.
        setContinuousMode();
        if (!getMessage(MSG_CONTMODE))
        {
          setEntityState(IMC::EntityState::ESTA_FAILURE,
                         DTR("failed to stop device"));
          return false;
        }
        for (unsigned i=0; i<c_number_axis ; i++ )
        {
          queryEEPROM(172+i*2);
          if (!getMessage(MSG_EEPROM))
          {
            war(DTR("failed to read magnetic calibration parameters from device"));
            return false;
          }
          senCal[i]=  m_eeprom;
          debug("Calibration parameters:%d=%d\n\r",i,m_eeprom);
        }
        // Set continuous mode for gyro-stabilized euler angles.
        setContinuousMode(MSG_GS_EULER);

        for (unsigned i = 0; i <= 2; i++)
        {
          cfgCal[i] = (int16_t) (m_hard_iron[i] * m_mag_scale) ;
          if (senCal[i] != cfgCal[i])
          {
            war(DTR("different calibration parameters"));
            return false;
          }
        }
        return true;
      }

      //! Set new hard iron calibration parameters.
      //! @return true if successful, false otherwise.
      bool
      setHardIron(void)
      {
        inf(DTR("new hard-iron calibration parameters: %f, %f, %f"), m_args.hard_iron[0], m_args.hard_iron[1],m_args.hard_iron[2]);

        // Stop continuous mode and read answer.
        setContinuousMode();
        if (!getMessage(MSG_CONTMODE))
        {
          setEntityState(IMC::EntityState::ESTA_FAILURE,
                         DTR("failed to stop device"));
          return false;
        }

        for (unsigned i = 0; i < c_number_axis; i++)
        {
          writeEEPROM( 172+i*2 , (uint16_t) (m_args.hard_iron[i] * m_mag_scale));
          if (!getMessage(MSG_W_EEPROM))
          {
            war(DTR("failed to read magnetic calibration change report"));
             return false;
          }
          debug("Write Calibration parameters:%d=%d\n\r",i,m_eeprom);
        }

        return true;
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
