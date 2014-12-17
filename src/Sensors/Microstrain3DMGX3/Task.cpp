//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Device driver for the Microstrain 3DM-GX3 AHRS.
  //!
  //! This task is responsible to extract acceleration, angular rates, magnetic
  //! field and euler angles information from the device.
  //!
  //! This task allows for Hard-Iron calibration when resources are initialized.
  //!
  //! @author Ricardo Martins
  namespace Microstrain3DMGX3
  {
    using DUNE_NAMESPACES;

    //! Hard Iron calibration parameter name.
    static const std::string c_hard_iron_param = "Hard-Iron Calibration";
    //! Time to wait for soft-reset.
    static const float c_reset_tout = 5.0;
    //! Number of axis.
    static const uint8_t c_number_axis = 3;

    //! Commands to device.
    enum Commands
    {
      //! Acceleration, Angular Rates, Magnetometer Vector and the Orientation Matrix.
      CMD_DATA = 0xCC,
      //! Write Word to EEPROM
      CMD_WRITE_EEPROM = 0xE4,
      //! Read Word from EEPROM
      CMD_READ_EEPROM = 0xE5,
      //! Firmware version.
      CMD_FWARE_VERSION = 0xE9,
      //! Device reset.
      CMD_DEVICE_RESET = 0xFE
    };

    //! Response frame sizes.
    enum Sizes
    {
      //! Size of Acceleration, Angular Rates,
      //! Magnetometer Vector and Orientation Matrix frame.
      CMD_DATA_SIZE = 79,
      //! Size of Write Word to EEPROM frame.
      CMD_WRITE_EEPROM_SIZE = 5,
      //! Size of Read Word from EEPROM.
      CMD_READ_EEPROM_SIZE = 5,
      //! Size of Firmware version frame.
      CMD_FWARE_VERSION_SIZE = 7,
      //! Size of Device reset frame.
      CMD_DEVICE_RESET_SIZE = 0
    };

    //! %Task arguments.
    struct Arguments
    {
      //! UART device.
      std::string uart_dev;
      //! UART baud rate.
      unsigned uart_baud;
      //! Input timeout.
      double data_tout;
      //! Calibration threshold.
      double calib_threshold;
      //! Hard iron calibration.
      std::vector<float> hard_iron;
      // Rotation matrix values.
      std::vector<double> rotation_mx;
    };

    //! %Microstrain3DMGX3 software driver.
    struct Task: public DUNE::Tasks::Periodic
    {
      //! Internal read buffer.
      static const unsigned c_bfr_size = 128;
      //! Number of addresses for magnetic calibration.
      static const unsigned c_num_addr = 6;
      //! Magnetic calibration initial address.
      static const uint16_t c_mag_addr = 0x0400;
      //! Rotation Matrix to correct mounting position.
      Math::Matrix m_rotation;
      //! Rotated calibration parameters.
      float m_hard_iron[3];
      //! Serial port.
      SerialPort* m_uart;
      //! Euler angles message.
      IMC::EulerAngles m_euler;
      //! Acceleration message.
      IMC::Acceleration m_accel;
      //! Angular velocity message.
      IMC::AngularVelocity m_agvel;
      //! Magnetometer Vector message.
      IMC::MagneticField m_magfield;
      //! Timer to wait for soft-reset without issuing error.
      Time::Counter<float> m_timer;
      //! Internal read buffer.
      uint8_t m_bfr[c_bfr_size];
      //! Magnetic Calibration addresses.
      uint16_t m_addr[c_num_addr];
      //! Read timestamp.
      double m_tstamp;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_uart(NULL),
        m_tstamp(0)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Data Timeout", m_args.data_tout)
        .defaultValue("2.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before reporting an error");

        param("Calibration Threshold", m_args.calib_threshold)
        .defaultValue("0.1")
        .units(Units::Gauss)
        .minimumValue("0.0")
        .description("Minimum magnetic field calibration values to reset hard iron parameters");

        param(c_hard_iron_param, m_args.hard_iron)
        .units(Units::Gauss)
        .size(c_number_axis)
        .description("Hard-Iron calibration parameters");

        param("IMU Rotation Matrix", m_args.rotation_mx)
        .defaultValue("")
        .size(9)
        .description("IMU rotation matrix which is dependent of the mounting position");

        m_timer.setTop(c_reset_tout);

        // Magnetic calibration addresses.
        for (unsigned i = 0; i <= c_num_addr - 1; i++)
          m_addr[i] = c_mag_addr + (uint16_t)(i * 2);

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

        data = inverse(m_rotation) * data;

        for (unsigned i = 0; i < 3; i++)
          m_hard_iron[i] = data(i);

        if (m_uart == NULL)
          return;

        if (paramChanged(m_args.hard_iron))
          runCalibration();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->flush();
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        while (!stopping())
        {
          // Read firmware version in order to assess if we can communicate
          // with the device.
          m_uart->setMinimumRead(CMD_FWARE_VERSION_SIZE);
          if (poll(CMD_FWARE_VERSION, CMD_FWARE_VERSION_SIZE, 0, 0))
            break;

          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
        }

        // Calibrate sensor.
        runCalibration();

        // Prepare to read data frame.
        m_uart->setMinimumRead(CMD_DATA_SIZE);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_wdog.setTop(2.0);
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

        IMC::SetEntityParameters np;
        np.name = getEntityLabel();
        np.params.push_back(hip);
        dispatch(np, DF_LOOP_BACK);

        IMC::SaveEntityParameters sp;
        sp.name = getEntityLabel();
        dispatch(sp);
      }

      //! Send commands to the device.
      //! @param[in] cmd command char.
      //! @param[in] cmd_size expected frame response size.
      //! @param[in] addr address.
      //! @param[in] value value to be assigned.
      //! @return true if communication successful, false otherwise.
      inline bool
      poll(Commands cmd, Sizes cmd_size, uint16_t addr, uint16_t value)
      {
        if (m_uart == NULL)
          return false;

        // Request data.
        switch (cmd)
        {
          case CMD_DATA:
            m_uart->write((uint8_t*)&cmd, 1);
            break;
          case CMD_WRITE_EEPROM:
            calibrate(addr, value);
            break;
          case CMD_READ_EEPROM:
            requestCalibration(addr);
            break;
          case CMD_FWARE_VERSION:
            m_uart->write((uint8_t*)&cmd, 1);
            break;
          case CMD_DEVICE_RESET:
            resetDevice();
          default:
            break;
        }

        return listen(cmd, cmd_size);
      }

      //! Listen for responses.
      //! @param[in] cmd command char.
      //! @param[in] cmd_size expected frame response size.
      //! @return true if communication successful, false otherwise.
      inline bool
      listen(Commands cmd, Sizes cmd_size)
      {
        // Device reset has no response.
        if (!cmd_size)
          return true;

        if (!Poll::poll(*m_uart, m_args.data_tout))
          return false;

        // Read response.
        size_t rv = m_uart->read(m_bfr, c_bfr_size);
        m_tstamp = Clock::getSinceEpoch();

        if (rv == 0)
          return false;

        if (rv != (size_t)cmd_size)
          return false;

        // Check if we have a response to our query.
        if (m_bfr[0] != cmd)
          return false;

        // Validate checksum.
        if (!validateChecksum(m_bfr, cmd_size))
          return false;

        return true;
      }

      //! Validate response checksum.
      //! @param[in] bfr buffer to be validated.
      //! @param[in] bfr_len length of the buffer.
      //! @return true if checksum validated, false otherwise.
      inline bool
      validateChecksum(const uint8_t* bfr, unsigned bfr_len)
      {
        unsigned frame_size = bfr_len - 2;

        // Compute checksum.
        uint16_t ccks = 0;
        for (unsigned i = 0; i < frame_size; ++i)
          ccks += bfr[i];

        uint16_t rcks = 0;
        ByteCopy::fromBE(rcks, bfr + frame_size);

        // Validate checksum.
        if (ccks == rcks)
          return true;

        return false;
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
            m_timer.reset();
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_CALIBRATING);
            inf(DTR("resetting device"));
            poll(CMD_DEVICE_RESET, CMD_DEVICE_RESET_SIZE, 0, 0);
          }
        }
      }

      //! Check if sensor has the same hard iron calibration parameters.
      //! @return true if the parameters are the same, false otherwise.
      bool
      isCalibrated(void)
      {
        m_uart->setMinimumRead(CMD_READ_EEPROM_SIZE);

        uint16_t hard_iron[c_num_addr] = {0};

        for (unsigned i = 0; i <= c_num_addr - 1; i++)
        {
          if (!poll(CMD_READ_EEPROM, CMD_READ_EEPROM_SIZE, m_addr[i], 0))
          {
            war(DTR("failed to read magnetic calibration parameters from device"));
            return false;
          }

          ByteCopy::fromBE(hard_iron[i], m_bfr + 1);
        }

        // Sensor magnetic calibration.
        uint32_t senCal[c_number_axis] = {0};
        // Magnetic calibration in configuration.
        uint32_t cfgCal[c_number_axis] = {0};

        for (unsigned i = 0; i <= 2; i++)
        {
          senCal[i] = hard_iron[i * 2 + 1] << 16 | hard_iron[i * 2];
          std::memcpy(&cfgCal[i], &m_hard_iron[i], sizeof(uint32_t));

          if (senCal[i] != cfgCal[i])
          {
            war(DTR("different calibration parameters"));
            return false;
          }
        }

        return true;
      }

      //! Soft-reset device.
      void
      resetDevice(void)
      {
        uint8_t bfr[c_number_axis];

        // Fill buffer.
        bfr[0] = CMD_DEVICE_RESET;
        bfr[1] = 0x9E;
        bfr[2] = 0x3A;

        // Reset device.
        m_uart->write((uint8_t*)&bfr, c_number_axis);
      }

      //! Request calibration parameters from device.
      //! @param[in] addr address.
      void
      requestCalibration(uint16_t addr)
      {
        uint8_t bfr[4];

        // Fill buffer.
        bfr[0] = CMD_READ_EEPROM;
        bfr[1] = 0x00;
        bfr[2] = (uint8_t)((addr & 0xff00) >> 8);
        bfr[3] = (uint8_t)(addr & 0x00ff);

        // Request calibration from device.
        m_uart->write((uint8_t*)&bfr, 4);
      }

      //! Set new hard iron calibration parameters.
      //! @return true if successful, false otherwise.
      bool
      setHardIron(void)
      {
        inf(DTR("new hard-iron calibration parameters: %f, %f, 0.0"), m_args.hard_iron[0], m_args.hard_iron[1]);
        m_uart->setMinimumRead(CMD_WRITE_EEPROM_SIZE);

        for (unsigned i = 0; i <= c_num_addr / c_number_axis; i++)
        {
          uint32_t val;
          std::memcpy(&val, &m_hard_iron[i], sizeof(uint32_t));

          if (!poll(CMD_WRITE_EEPROM, CMD_WRITE_EEPROM_SIZE, m_addr[i * 2], (uint16_t)(val & 0x0000ffff)))
            return false;

          if (!poll(CMD_WRITE_EEPROM, CMD_WRITE_EEPROM_SIZE, m_addr[i * 2 + 1], (uint16_t)((val & 0xffff0000) >> 16)))
            return false;
        }

        return true;
      }

      //! Send calibration frame to the device
      //! @param[in] addr EEPROM address.
      //! @param[in] value new calibration value.
      void
      calibrate(uint16_t addr, uint16_t value)
      {
        uint8_t bfr[8];

        // Fill buffer.
        bfr[0] = CMD_WRITE_EEPROM;
        bfr[1] = 0xC1;
        bfr[2] = 0x29;
        bfr[3] = 0x00;
        bfr[4] = (uint8_t)((addr & 0xff00) >> 8);
        bfr[5] = (uint8_t)(addr & 0x00ff);
        bfr[6] = (uint8_t)((value & 0xff00) >> 8);
        bfr[7] = (uint8_t)(value & 0x00ff);

        // Calibrate device.
        m_uart->write((uint8_t*)&bfr, 8);
      }

      //! Correct data according with mounting position.
      void
      rotateData(void)
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

        // Angular Velocity.
        data(0) = m_agvel.x;
        data(1) = m_agvel.y;
        data(2) = m_agvel.z;
        data = m_rotation * data;
        m_agvel.x = data(0);
        m_agvel.y = data(1);
        m_agvel.z = data(2);

        // Magnetic Field.
        data(0) = m_magfield.x;
        data(1) = m_magfield.y;
        data(2) = m_magfield.z;
        data = m_rotation * data;
        m_magfield.x = data(0);
        m_magfield.y = data(1);
        m_magfield.z = data(2);
      }

      //! Main task.
      void
      task(void)
      {
        // Check for incoming messages.
        consumeMessages();

        if (poll(CMD_DATA, CMD_DATA_SIZE, 0, 0))
        {
          // Set timestamps so we have realistic times.
          m_euler.setTimeStamp(m_tstamp);
          m_accel.setTimeStamp(m_tstamp);
          m_agvel.setTimeStamp(m_tstamp);
          m_magfield.setTimeStamp(m_tstamp);

          // Extract acceleration.
          fp32_t accel[c_number_axis] = {0};
          ByteCopy::fromBE(accel[0], m_bfr + 1);
          ByteCopy::fromBE(accel[1], m_bfr + 5);
          ByteCopy::fromBE(accel[2], m_bfr + 9);
          m_accel.x = Math::c_gravity * accel[0];
          m_accel.y = Math::c_gravity * accel[1];
          m_accel.z = Math::c_gravity * accel[2];

          // Extract angular rates.
          fp32_t arate[c_number_axis] = {0};
          ByteCopy::fromBE(arate[0], m_bfr + 13);
          ByteCopy::fromBE(arate[1], m_bfr + 17);
          ByteCopy::fromBE(arate[2], m_bfr + 21);
          m_agvel.x = arate[0];
          m_agvel.y = arate[1];
          m_agvel.z = arate[2];

          // Extract magnetic field.
          fp32_t mfield[c_number_axis] = {0};
          ByteCopy::fromBE(mfield[0], m_bfr + 25);
          ByteCopy::fromBE(mfield[1], m_bfr + 29);
          ByteCopy::fromBE(mfield[2], m_bfr + 33);
          m_magfield.x = mfield[0];
          m_magfield.y = mfield[1];
          m_magfield.z = mfield[2];

          // Extract orientation matrix and compute Euler angles.
          Math::Matrix rmat(3, 3);
          float r[9] = {0};
          double r8[9] = {0};

          for (unsigned i = 0; i < 9; ++i)
          {
            ByteCopy::fromBE(r[i], m_bfr + 37 + 4 * i);
            r8[i] = r[i];
          }

          rmat.fill(3, 3, &r8[0]);
          rmat = transpose(m_rotation * rmat);

          m_euler.phi = std::atan2(rmat(2, 1), rmat(2, 2));
          m_euler.theta = std::asin(-rmat(2, 0));
          m_euler.psi = std::atan2(rmat(1, 0), rmat(0, 0));
          m_euler.psi_magnetic = m_euler.psi;

          // Extract time.
          uint32_t timer = 0;
          ByteCopy::fromBE(timer, m_bfr + CMD_DATA_SIZE - 6);
          m_euler.time = timer / 62500.0;
          m_accel.time = m_euler.time;
          m_agvel.time = m_euler.time;
          m_magfield.time = m_euler.time;

          // Correct mounting position.
          rotateData();

          // Dispatch messages.
          dispatch(m_euler, DF_KEEP_TIME);
          dispatch(m_accel, DF_KEEP_TIME);
          dispatch(m_agvel, DF_KEEP_TIME);
          dispatch(m_magfield, DF_KEEP_TIME);

          // Clear entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_wdog.reset();
        }

        if (m_wdog.overflow() && m_timer.overflow())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(Status::CODE_COM_ERROR)), 5);
        }
      }
    };
  }
}

DUNE_TASK
