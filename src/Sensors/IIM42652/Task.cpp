//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "RegisterAddressMap.hpp"

namespace Sensors
{
  //! @author Bernardo Gabriel
  namespace IIM42652
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Get temperature period.
      int8_t temp_period;
      //! Accelerometer full scale.
      uint8_t accel_fs;
      //! Gyroscope full scale.
      uint8_t gyro_fs;
      //! Accelerometer output data rate.
      uint8_t accel_odr;
      //! Gyroscope output data rate.
      uint8_t gyro_odr;
    };

    //! Chip id.
    constexpr uint8_t c_id = 0x6f;
    //! Default PWR_MGMT_0 value.
    constexpr uint8_t c_dft_pwr_mgmt_0 = 0x00;
    //! Default GYRO_CONFIG_0 value.
    constexpr uint8_t c_dft_gyro_config_0 = 0x06;
    //! Default ACCEL_CONFIG_0 value.
    constexpr uint8_t c_dft_accel_config_0 = 0x06;
    //! Default TMST_CONFIG value.
    constexpr uint8_t c_dft_tmst_cfg = 0x23;
    //! Accelerometer full scale to sensitivity map (G/LSB).
    const std::map<uint8_t, float> c_accel_sens_map = {{0x0, 1 / 2048.0f}, {0x1, 1 / 4096.0f}, {0x2, 1 / 8192.0f}, {0x3, 1 / 16384.0f}};
    //! Gyroscope full scale to sensitivity map (dps/LSB).
    const std::map<uint8_t, float> c_gyro_sens_map = {{0x0, 1 / 16.4f}, {0x1, 1 / 32.8f}, {0x2, 1 / 65.5f}, {0x3, 1 / 131.0f},
                                                      {0x4, 1 / 262.0f}, {0x5, 1 / 524.3f}, {0x6, 1 / 1048.6f}, {0x7, 1 / 2097.2f}};
    //! Temperature factory offset.
    constexpr float c_temp_factory_offset = 25.0f;
    //! Temperature sensitivity.
    constexpr float c_temp_sensitivity = 1 / 132.48f;

    struct Task: public DUNE::Hardware::BasicI2CDriver
    {
      //! Task arguments.
      Arguments m_args;
      //! PWR_MGMT_0 register.
      uint8_t m_pwr_mgmt_0;
      //! GYRO_CONFIG_0 register.
      uint8_t m_gyro_config_0;
      //! ACCEL_CONFIG_0 register.
      uint8_t m_accel_config_0;
      //! Accelerometer sensitivity.
      float m_accel_sensitivity;
      //! Gyroscope sensitivity.
      float m_gyro_sensitivity;
      //! Buffer for last read operation data.
      std::vector<uint8_t> m_read_buffer;
      //! Get temperature timer.
      Counter<int8_t> m_temp_timer;
      //! Temperature message.
      IMC::Temperature m_temp;
      //! Acceleration message.
      IMC::Acceleration m_accel;
      //! Angular velocity message.
      IMC::AngularVelocity m_ang_vel;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Hardware::BasicI2CDriver(name, ctx),
        m_pwr_mgmt_0(c_dft_pwr_mgmt_0),
        m_gyro_config_0(c_dft_gyro_config_0),
        m_accel_config_0(c_dft_accel_config_0),
        m_accel_sensitivity(1 / 2048.0f),
        m_gyro_sensitivity(1 / 16.4f)
      {
        param("Get temperature period", m_args.temp_period)
        .minimumValue("-1")
        .maximumValue("127")
        .defaultValue("0")
        .units(Units::Second)
        .description("Period between temperature readings. Set to -1 to disable temperature readings.");

        param("Accelerometer full scale", m_args.accel_fs)
        .values("0x0, 0x1, 0x2, 0x3")
        .defaultValue("0x0")
        .description("Accelerometer full scale. 0x0: +/-16g, 0x1: +/-8g, 0x2: +/-4g, 0x3: +/-2g.");

        param("Gyroscope full scale", m_args.gyro_fs)
        .values("0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7")
        .defaultValue("0x0")
        .description("Gyroscope full scale. 0x0: +/-2000dps, 0x1: +/-1000dps, 0x2: +/-500dps, 0x3: +/-250dps, "
                     "0x4: +/-125dps, 0x5: +/-62.5dps, 0x6: +/-31.25dps, 0x7: +/-15.625dps.");

        param("Accelerometer output data rate", m_args.accel_odr)
        .values("0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xf")
        .defaultValue("0x6")
        .description("Accelerometer output data rate. 0x1: 32kHz, 0x2: 16kHz, 0x3: 8kHz, 0x4: 4kHz, 0x5: 2kHz, "
                     "0x6: 1kHz, 0x7: 200Hz, 0x8: 100Hz, 0x9: 50Hz, 0xa: 25Hz, 0xb: 12.5Hz, 0xf: 500Hz.");

        param("Gyroscope output data rate", m_args.gyro_odr)
        .values("0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xf")
        .defaultValue("0x6")
        .description("Gyroscope output data rate. 0x1: 32kHz, 0x2: 16kHz, 0x3: 8kHz, 0x4: 4kHz, 0x5: 2kHz, "
                     "0x6: 1kHz, 0x7: 200Hz, 0x8: 100Hz, 0x9: 50Hz, 0xa: 25Hz, 0xb: 12.5Hz, 0xf: 500Hz.");
      }

      void
      onUpdateParameters(void) override
      {
        if (!isActive())
          return;

        if (paramChanged(m_args.temp_period))
        {
          enableTemperatureSensor(m_args.temp_period >= 0);
          m_temp_timer.setTop(0);
        }

        const auto accel_fs_changed = paramChanged(m_args.accel_fs);
        const auto gyro_fs_changed = paramChanged(m_args.gyro_fs);
        const auto accel_odr_changed = paramChanged(m_args.accel_odr);
        const auto gyro_odr_changed = paramChanged(m_args.gyro_odr);

        if (!accel_fs_changed && !gyro_fs_changed &&
            !accel_odr_changed && !gyro_odr_changed)
          return;
        
        deinit();

        if (accel_fs_changed)
        {
          if (setAccelerometerFullScale())
            m_accel_sensitivity = c_accel_sens_map.at(m_args.accel_fs);
          else
            war("failed to update accelerometer full scale");
        }
        
        if (gyro_fs_changed)
        {
          if (setGyroscopeFullScale())
            m_gyro_sensitivity = c_gyro_sens_map.at(m_args.gyro_fs);
          else
            war("failed to update gyroscope full scale");
        }

        if (accel_odr_changed)
        {
          if (!setAccelerometerOutputDataRate())
            war("failed to update accelerometer output data rate");
        }

        if (gyro_odr_changed)
        {
          if (!setGyroscopeOutputDataRate())
            war("failed to update gyroscope output data rate");
        }

        init();
      }

      void
      init(void)
      {
        if (!selectBank(0))
          throw RestartNeeded("failed to select bank 0", 5);

        if (!verifyIdentity())
        {
          err("failed to verify device identity");
          requestDeactivation();
          return;
        }

        while (!softReset() && !stopping())
        {
          war("failed to perform soft reset, retrying...");
          Time::Delay::waitMsec(100);
        }

        Time::Delay::waitMsec(1);

        if (!enableTimestamp(false))
          war("failed to disable timestamp");

        if (setAccelerometerFullScale())
          m_accel_sensitivity = c_accel_sens_map.at(m_args.accel_fs);
        else
          war("failed to update accelerometer full scale");

        if (setGyroscopeFullScale())
          m_gyro_sensitivity = c_gyro_sens_map.at(m_args.gyro_fs);
        else
          war("failed to update gyroscope full scale");

        if (!setAccelerometerOutputDataRate())
          war("failed to set accelerometer output data rate");

        if (!setGyroscopeOutputDataRate())
          war("failed to set gyroscope output data rate");

        enableTemperatureSensor(m_args.temp_period >= 0);
        enableDevice();
        enableGyro();
        enableAccel();
        if (!write(REGISTER_MAP_0::PWR_MGMT_0, m_pwr_mgmt_0, true))
          throw RestartNeeded("failed to write PWR_MGMT_0 register", 5);

        Time::Delay::waitMsec(100);
      }

      void
      deinit(void)
      {
        enableDevice(false);
        enableGyro(false);
        enableAccel(false);
        write(REGISTER_MAP_0::PWR_MGMT_0, m_pwr_mgmt_0, true);
      }

      void
      onActivation(void) override
      {
        init();
        m_temp_timer.setTop(0);
      }

      void
      onDeactivation(void) override
      {
        deinit();
      }

      bool
      verifyIdentity(void)
      {
        if (!read(REGISTER_MAP_0::WHO_AM_I, 1, true))
          return false;

        if (m_read_buffer.size() != 1)
          return false;

        return m_read_buffer[0] == c_id;
      }

      bool
      selectBank(const uint8_t bank)
      {
        if (bank > 4)
          return false;

        return write(REGISTER_MAP_0::BANK_SEL, bank, true);
      }

      bool
      softReset(void)
      {
        return write(REGISTER_MAP_0::DEVICE_CONFIG, 0x01, true);
      }

      bool
      setAccelerometerFullScale(void)
      {
        if (!read(REGISTER_MAP_0::ACCEL_CONFIG_0, 1, true))
          return false;

        if (m_read_buffer.size() != 1)
          return false;

        m_accel_config_0 = m_read_buffer[0];
        m_accel_config_0 = (m_accel_config_0 & ~(0b111 << 5)) | (m_args.accel_fs << 5);
        return write(REGISTER_MAP_0::ACCEL_CONFIG_0, m_accel_config_0, true);
      }

      bool
      setGyroscopeFullScale(void)
      {
        if (!read(REGISTER_MAP_0::GYRO_CONFIG_0, 1, true))
          return false;

        if (m_read_buffer.size() != 1)
          return false;

        m_gyro_config_0 = m_read_buffer[0];
        m_gyro_config_0 = (m_gyro_config_0 & ~(0b111 << 5)) | (m_args.gyro_fs << 5);
        return write(REGISTER_MAP_0::GYRO_CONFIG_0, m_gyro_config_0, true);
      }

      bool
      setAccelerometerOutputDataRate(void)
      {
        if (!read(REGISTER_MAP_0::ACCEL_CONFIG_1, 1, true))
          return false;

        if (m_read_buffer.size() != 1)
          return false;

        m_accel_config_0 = m_read_buffer[0];
        m_accel_config_0 = (m_accel_config_0 & ~0b1111) | (m_args.accel_odr);
        return write(REGISTER_MAP_0::ACCEL_CONFIG_0, m_accel_config_0, true);
      }

      bool
      setGyroscopeOutputDataRate(void)
      {
        if (!read(REGISTER_MAP_0::GYRO_CONFIG_1, 1, true))
          return false;

        if (m_read_buffer.size() != 1)
          return false;

        m_gyro_config_0 = m_read_buffer[0];
        m_gyro_config_0 = (m_gyro_config_0 & ~0b1111) | (m_args.gyro_odr);
        return write(REGISTER_MAP_0::GYRO_CONFIG_0, m_gyro_config_0, true);
      }

      void
      enableTemperatureSensor(const bool en = true)
      {
        m_pwr_mgmt_0 = (m_pwr_mgmt_0 & ~(0b1 << 5)) | ((en ? 0b0 : 0b1) << 5);
      }

      void
      enableDevice(const bool en = true)
      {
        m_pwr_mgmt_0 = (m_pwr_mgmt_0 & ~(0b1 << 4)) | ((en ? 0b1 : 0b0) << 4);
      }

      void
      enableGyro(const bool en = true)
      {
        m_pwr_mgmt_0 = (m_pwr_mgmt_0 & ~(0b11 << 2)) | ((en ? 0b11 : 0b00) << 2);
      }

      void
      enableAccel(const bool en = true)
      {
        m_pwr_mgmt_0 = (m_pwr_mgmt_0 & ~0b11) | ((en ? 0b11 : 0b00));
      }

      bool
      enableTimestamp(const bool en = true)
      {
        uint8_t tmst_config = (c_dft_tmst_cfg & ~0b1) | ((en ? 0b0 : 0b1));
        return write(REGISTER_MAP_0::TMST_CONFIG, tmst_config, true);
      }

      void
      getData(const bool temperature)
      {
        if (!read(temperature ? REGISTER_MAP_0::TEMP_DATA1 : REGISTER_MAP_0::ACCEL_DATA_X1, temperature ? 14 : 12, true))
          return;

        auto decode = [&](int idx, float sensitivity)
        {
          int16_t t = (int16_t)
          (
            (uint16_t)m_read_buffer[idx] << 8 |
            (uint16_t)m_read_buffer[idx + 1]
          );
          return static_cast<float>(t) * sensitivity;
        };

        uint8_t temp_offset = 0;
        switch (m_read_buffer.size())
        {
        case 14:
          m_temp.value = decode(0, c_temp_sensitivity) + c_temp_factory_offset;
          dispatch(m_temp); // TODO: add timestamp
          spew("temperature > %.2f", m_temp.value);
          temp_offset = 2;
          m_temp_timer.setTop(m_args.temp_period);
#if (DUNE_LEGACY)
          /*FALLTHROUGH*/
#else
          [[fallthrough]];
#endif
        case 12:
          m_accel.x = decode(0 + temp_offset, m_accel_sensitivity) * Math::c_gravity;
          m_accel.y = decode(2 + temp_offset, m_accel_sensitivity) * Math::c_gravity;
          m_accel.z = decode(4 + temp_offset, m_accel_sensitivity) * Math::c_gravity;
          dispatch(m_accel); // TODO: add timestamp
          spew("acceleration > x: %f y: %f z: %f", m_accel.x, m_accel.y, m_accel.z);
          m_ang_vel.x = Angles::radians(decode(6 + temp_offset, m_gyro_sensitivity));
          m_ang_vel.y = Angles::radians(decode(8 + temp_offset, m_gyro_sensitivity));
          m_ang_vel.z = Angles::radians(decode(10 + temp_offset, m_gyro_sensitivity));
          dispatch(m_ang_vel); // TODO: add timestamp
          spew("angular velocity > x: %f y: %f z: %f", m_ang_vel.x, m_ang_vel.y, m_ang_vel.z);
          break;
        
        default:
          return;
        }
      }

      void
      onI2CAction(const IMC::I2CAction& msg)
      {
        switch (msg.status)
        {
        case I2CAction::STAT_SUCCESS:
        {
          switch (msg.op)
          {
          case I2CAction::OP_READ:
          {
            m_read_buffer.assign(msg.data.begin(), msg.data.end());
            break;
          }
          
          default:
            break;
          }

          break;
        }
        
        default:
          break;
        }
      }

      void
      step(void) override
      {
        getData(m_temp_timer.overflow() && m_args.temp_period != -1);
      }
    };
  }
}

DUNE_TASK
