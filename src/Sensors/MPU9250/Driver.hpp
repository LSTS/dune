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

#ifndef SENSORS_MPU9250_DRIVER_HPP_INCLUDED_
#define SENSORS_MPU9250_DRIVER_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

#include "RegisterMap.h"
#include "QuaternionFilter.h"

namespace Sensors
{
  namespace MPU9250
  {
    static constexpr uint8_t MPU9250_WHOAMI_DEFAULT_VALUE = 0x71;
    static constexpr uint8_t MPU9255_WHOAMI_DEFAULT_VALUE = 0x73;
    static constexpr uint8_t MPU6500_WHOAMI_DEFAULT_VALUE = 0x70;
    static constexpr uint8_t MPU9250_DEFAULT_ADDRESS = 0x68;
    static constexpr uint8_t AK8963_ADDRESS = 0x0C;
    static constexpr uint8_t AK8963_WHOAMI_DEFAULT_VALUE = 0x48;
    static constexpr uint16_t CALIB_GYRO_SENSITIVITY = 131;
    static constexpr uint16_t CALIB_ACCEL_SENSITIVITY = 16384;
    static constexpr uint8_t MAG_MODE = 0x06;
    static constexpr uint8_t READ_FLAG = 0x80;

    enum class ACCEL_FS_SEL
    {
      A2G,
      A4G,
      A8G,
      A16G
    };

    enum class GYRO_FS_SEL
    {
      G250DPS,
      G500DPS,
      G1000DPS,
      G2000DPS
    };

    enum class MAG_OUTPUT_BITS
    {
      M14BITS,
      M16BITS
    };

    enum class FIFO_SAMPLE_RATE : uint8_t
    {
      SMPL_1000HZ,
      SMPL_500HZ,
      SMPL_333HZ,
      SMPL_250HZ,
      SMPL_200HZ,
      SMPL_167HZ,
      SMPL_143HZ,
      SMPL_125HZ,
    };

    enum class GYRO_DLPF_CFG : uint8_t
    {
      DLPF_250HZ,
      DLPF_184HZ,
      DLPF_92HZ,
      DLPF_41HZ,
      DLPF_20HZ,
      DLPF_10HZ,
      DLPF_5HZ,
      DLPF_3600HZ,
    };

    enum class ACCEL_DLPF_CFG : uint8_t
    {
      DLPF_218HZ_0,
      DLPF_218HZ_1,
      DLPF_99HZ,
      DLPF_45HZ,
      DLPF_21HZ,
      DLPF_10HZ,
      DLPF_5HZ,
      DLPF_420HZ,
    };

    struct MPU9250Setting
    {
      ACCEL_FS_SEL accel_fs_sel {ACCEL_FS_SEL::A16G};
      GYRO_FS_SEL gyro_fs_sel {GYRO_FS_SEL::G2000DPS};
      MAG_OUTPUT_BITS mag_output_bits {MAG_OUTPUT_BITS::M16BITS};
      FIFO_SAMPLE_RATE fifo_sample_rate {FIFO_SAMPLE_RATE::SMPL_200HZ};
      uint8_t gyro_fchoice {0x03};
      GYRO_DLPF_CFG gyro_dlpf_cfg {GYRO_DLPF_CFG::DLPF_41HZ};
      uint8_t accel_fchoice {0x01};
      ACCEL_DLPF_CFG accel_dlpf_cfg {ACCEL_DLPF_CFG::DLPF_45HZ};
    };

    class Driver
    {
    public:
      Driver(DUNE::Tasks::Task* task,
             DUNE::Hardware::I2C* handle,
             const uint8_t addr = MPU9250_DEFAULT_ADDRESS,
             const MPU9250Setting& setting = MPU9250Setting()):
        Driver(task, addr, setting)
      {
        m_i2c = handle;
        m_spi = nullptr;
        m_is_i2c = true;
        m_is_spi = false;
        m_i2c->connect(m_addr);
      }

      Driver(DUNE::Tasks::Task* task,
             DUNE::Hardware::SPI* handle,
             const uint8_t addr = MPU9250_DEFAULT_ADDRESS,
             const MPU9250Setting& setting = MPU9250Setting()):
        Driver(task, addr, setting)
      {
        m_i2c = nullptr;
        m_spi = handle;
        m_is_i2c = false;
        m_is_spi = true;
        m_spi->connect(m_addr);
      }

      Driver(DUNE::Tasks::Task* task,
             const uint8_t addr = MPU9250_DEFAULT_ADDRESS,
             const MPU9250Setting& setting = MPU9250Setting()):
        m_task(task),
        m_addr(addr),
        m_setting(setting),
        m_connected(false),
        m_filter_iter(1),
        m_acc_resolution(0.0f),
        m_gyro_resolution(0.0f),
        m_mag_resolution(0.0f),
        m_acc_bias{0.0f, 0.0f, 0.0f},
        m_gyro_bias{0.0f, 0.0f, 0.0f},
        m_mag_bias{0.0f, 0.0f, 0.0f},
        m_mag_scale{1.0f, 1.0f, 1.0f},
        m_magnetic_declination(-7.51f),
        m_temperature_count(0),
        m_temperature(0.0f),
        m_self_test_result{0, 0, 0, 0, 0, 0},
        m_a{0.0f, 0.0f, 0.0f},
        m_g{0.0f, 0.0f, 0.0f},
        m_m{0.0f, 0.0f, 0.0f},
        m_q{1.0f, 0.0f, 0.0f, 0.0f},
        m_rpy{0.0f, 0.0f, 0.0f},
        m_lin_acc{0.0f, 0.0f, 0.0f}
      {
        if ((m_addr < MPU9250_DEFAULT_ADDRESS) || (m_addr > MPU9250_DEFAULT_ADDRESS + 7))
          throw DUNE::Tasks::RestartNeeded("Invalid I2C address for MPU9250", 5);
      }

      bool
      setup(void)
      {
        if (isConnectedMPU9250())
        {
          initMPU9250();
          if (isConnectedAK8963())
            initAK8963();
          else
          {
            m_task->war("Could not connect to AK8963");
            m_connected = false;
            return false;
          }
        }
        else
        {
          m_task->war("Could not connect to MPU9250");
          m_connected = false;
          return false;
        }

        m_connected = true;
        return true;
      }

      void
      sleep(bool b)
      {
        uint8_t c = readByte(PWR_MGMT_1);
        if (b)
          c = c | 0x40;
        else
          c = c & 0xBF;
        writeByte(PWR_MGMT_1, c);
      }

      void
      calibrateAccelGyro(void)
      {
        calibrate_acc_gyro_impl();
      }

      void
      calibrateMag(void)
      {
        calibrate_mag_impl();
      }

      bool isConnected(void)
      {
        m_connected = isConnectedMPU9250() && isConnectedAK8963();
        return m_connected;
      }

      bool
      isConnectedMPU9250(void)
      {
        uint8_t c = readByte(WHO_AM_I_MPU9250);
        bool b = (c == MPU9250_WHOAMI_DEFAULT_VALUE);
        return b;
      }

      bool
      isConnectedAK8963(void)
      {
        if (m_is_i2c)
        {
          writeByte(INT_PIN_CFG, 0x02);
        }
        else if (m_is_spi)
        {
          writeByte(USER_CTRL, 0x20);
          writeByte(I2C_MST_CTRL, 0x0D);
        }
        uint8_t c = readByteAK8963(AK8963_WHO_AM_I);
        return (c == AK8963_WHOAMI_DEFAULT_VALUE);
      }

      bool
      isSleeping(void)
      {
        uint8_t c = readByte(PWR_MGMT_1);
        return (c & 0x40) == 0x40;
      }

      bool
      available(void)
      {
        return m_connected && (readByte(INT_STATUS) & 0x01);
      }

      bool
      update(void)
      {
        if (!available())
          return false;

        update_accel_gyro();
        update_mag();

        float an = -m_a[0];
        float ae = +m_a[1];
        float ad = +m_a[2];
        float gn = Angles::radians(+m_g[0]);
        float ge = Angles::radians(-m_g[1]);
        float gd = Angles::radians(-m_g[2]);
        float mn = +m_m[1];
        float me = -m_m[0];
        float md = +m_m[2];

        for (size_t i = 0; i < m_filter_iter; ++i)
          m_quat_filter.update(an, ae, ad, gn, ge, gd, mn, me, md, m_q);

        m_temperature_count = read_temperature_data();
        m_temperature = ((float)m_temperature_count) / 333.87 + 21.0;
        update_rpy(m_q[0], m_q[1], m_q[2], m_q[3]);

        return true;
      }

      float getRoll(void) const { return m_rpy[0]; }
      float getPitch(void) const { return m_rpy[1]; }
      float getYaw(void) const { return m_rpy[2]; }

      float getEulerX(void) const { return m_rpy[0]; }
      float getEulerY(void) const { return -m_rpy[1]; }
      float getEulerZ(void) const { return -m_rpy[2]; }

      float getQuaternionX(void) const { return m_q[1]; }
      float getQuaternionY(void) const { return m_q[2]; }
      float getQuaternionZ(void) const { return m_q[3]; }
      float getQuaternionW(void) const { return m_q[0]; }

      float getAcc(const uint8_t i) const { return (i < 3) ? m_a[i] : 0.f; }
      float getGyro(const uint8_t i) const { return (i < 3) ? m_g[i] : 0.f; }
      float getMag(const uint8_t i) const { return (i < 3) ? m_m[i] : 0.f; }
      float getLinearAcc(const uint8_t i) const { return (i < 3) ? m_lin_acc[i] : 0.f; }

      float getAccX(void) const { return m_a[0]; }
      float getAccY(void) const { return m_a[1]; }
      float getAccZ(void) const { return m_a[2]; }
      float getGyroX(void) const { return m_g[0]; }
      float getGyroY(void) const { return m_g[1]; }
      float getGyroZ(void) const { return m_g[2]; }
      float getMagX(void) const { return m_m[0]; }
      float getMagY(void) const { return m_m[1]; }
      float getMagZ(void) const { return m_m[2]; }
      float getLinearAccX(void) const { return m_lin_acc[0]; }
      float getLinearAccY(void) const { return m_lin_acc[1]; }
      float getLinearAccZ(void) const { return m_lin_acc[2]; }

      float getAccBias(const uint8_t i) const { return (i < 3) ? m_acc_bias[i] : 0.f; }
      float getGyroBias(const uint8_t i) const { return (i < 3) ? m_gyro_bias[i] : 0.f; }
      float getMagBias(const uint8_t i) const { return (i < 3) ? m_mag_bias[i] : 0.f; }
      float getMagScale(const uint8_t i) const { return (i < 3) ? m_mag_scale[i] : 0.f; }

      float getAccBiasX(void) const { return m_acc_bias[0]; }
      float getAccBiasY(void) const { return m_acc_bias[1]; }
      float getAccBiasZ(void) const { return m_acc_bias[2]; }
      float getGyroBiasX(void) const { return m_gyro_bias[0]; }
      float getGyroBiasY(void) const { return m_gyro_bias[1]; }
      float getGyroBiasZ(void) const { return m_gyro_bias[2]; }
      float getMagBiasX(void) const { return m_mag_bias[0]; }
      float getMagBiasY(void) const { return m_mag_bias[1]; }
      float getMagBiasZ(void) const { return m_mag_bias[2]; }
      float getMagScaleX(void) const { return m_mag_scale[0]; }
      float getMagScaleY(void) const { return m_mag_scale[1]; }
      float getMagScaleZ(void) const { return m_mag_scale[2]; }

      float getTemperature(void) const { return m_temperature; }

      void
      setAccBias(const float x, const float y, const float z)
      {
        m_acc_bias[0] = x;
        m_acc_bias[1] = y;
        m_acc_bias[2] = z;
        write_accel_offset();
      }

      void
      setGyroBias(const float x, const float y, const float z)
      {
        m_gyro_bias[0] = x;
        m_gyro_bias[1] = y;
        m_gyro_bias[2] = z;
        write_gyro_offset();
      }

      void
      setMagBias(const float x, const float y, const float z)
      {
        m_mag_bias[0] = x;
        m_mag_bias[1] = y;
        m_mag_bias[2] = z;
      }

      void
      setMagScale(const float x, const float y, const float z)
      {
        m_mag_scale[0] = x;
        m_mag_scale[1] = y;
        m_mag_scale[2] = z;
      }

      void setMagneticDeclination(const float d) { m_magnetic_declination = d; }

      void selectFilter(QuatFilterSel sel)
      {
        m_quat_filter.select_filter(sel);
      }

      void
      setFilterIterations(const size_t n)
      {
        if (n > 0)
          m_filter_iter = n;
      }

      bool
      selftest(void)
      {
        return self_test_impl();
      }

    private:
      void
      initMPU9250(void)
      {
        m_acc_resolution = get_acc_resolution(m_setting.accel_fs_sel);
        m_gyro_resolution = get_gyro_resolution(m_setting.gyro_fs_sel);
        m_mag_resolution = get_mag_resolution(m_setting.mag_output_bits);
        writeByte(PWR_MGMT_1, 0x80);
        DUNE::Time::Delay::waitUsec(100);
        writeByte(PWR_MGMT_1, 0x00);
        DUNE::Time::Delay::waitUsec(100);
        writeByte(PWR_MGMT_1, 0x01);
        DUNE::Time::Delay::waitUsec(200);
        uint8_t mpu_config = (uint8_t)m_setting.gyro_dlpf_cfg;
        writeByte(MPU_CONFIG, mpu_config);
        uint8_t sample_rate = (uint8_t)m_setting.fifo_sample_rate;
        writeByte(SMPLRT_DIV, sample_rate);
        uint8_t c = readByte(GYRO_CONFIG);
        c = c & ~0xE0;
        c = c & ~0x03;
        c = c & ~0x18;
        c = c | (uint8_t(m_setting.gyro_fs_sel) << 3);
        c = c | (uint8_t(~m_setting.gyro_fchoice) & 0x03);
        writeByte(GYRO_CONFIG, c);
        c = readByte(ACCEL_CONFIG);
        c = c & ~0xE0;
        c = c & ~0x18;
        c = c | (uint8_t(m_setting.accel_fs_sel) << 3);
        writeByte(ACCEL_CONFIG, c);
        c = readByte(ACCEL_CONFIG2);
        c = c & ~0x0F;
        c = c | (~(m_setting.accel_fchoice << 3) & 0x08);
        c = c | (uint8_t(m_setting.accel_dlpf_cfg) & 0x07);
        writeByte(ACCEL_CONFIG2, c);
        writeByte(INT_PIN_CFG, 0x22);
        writeByte(INT_ENABLE, 0x01);
        DUNE::Time::Delay::waitUsec(100);
      }

      void
      initAK8963(void)
      {
        uint8_t raw_data[3];
        writeByteAK8963(AK8963_CNTL, 0x00);
        DUNE::Time::Delay::waitUsec(10);
        writeByteAK8963(AK8963_CNTL, 0x0F);
        DUNE::Time::Delay::waitUsec(10);
        readBytesAK8963(AK8963_ASAX, 3, &raw_data[0]);
        m_mag_bias_factory[0] = (float)(raw_data[0] - 128) / 256. + 1.;
        m_mag_bias_factory[1] = (float)(raw_data[1] - 128) / 256. + 1.;
        m_mag_bias_factory[2] = (float)(raw_data[2] - 128) / 256. + 1.;
        writeByteAK8963(AK8963_CNTL, 0x00);
        DUNE::Time::Delay::waitUsec(10);
        writeByteAK8963(AK8963_CNTL, (uint8_t)m_setting.mag_output_bits << 4 | MAG_MODE);
        DUNE::Time::Delay::waitUsec(10);
      }

    public:
      void
      update_rpy(float qw, float qx, float qy, float qz)
      {
        float a12, a22, a31, a32, a33;
        a12 = 2.0f * (qx * qy + qw * qz);
        a22 = qw * qw + qx * qx - qy * qy - qz * qz;
        a31 = 2.0f * (qw * qx + qy * qz);
        a32 = 2.0f * (qx * qz - qw * qy);
        a33 = qw * qw - qx * qx - qy * qy + qz * qz;
        m_rpy[0] = Angles::degrees(atan2f(a31, a33));
        m_rpy[1] = Angles::degrees(-asinf(a32));
        m_rpy[2] = Angles::degrees(atan2f(a12, a22));
        m_rpy[2] += m_magnetic_declination;
        if (m_rpy[2] >= +180.f)
          m_rpy[2] -= 360.f;
        else if (m_rpy[2] < -180.f)
          m_rpy[2] += 360.f;

        m_lin_acc[0] = m_a[0] + a31;
        m_lin_acc[1] = m_a[1] + a32;
        m_lin_acc[2] = m_a[2] - a33;
      }

      void
      update_accel_gyro(void)
      {
        int16_t raw_acc_gyro_data[7];
        read_accel_gyro(raw_acc_gyro_data);
        m_a[0] = (float)raw_acc_gyro_data[0] * m_acc_resolution;
        m_a[1] = (float)raw_acc_gyro_data[1] * m_acc_resolution;
        m_a[2] = (float)raw_acc_gyro_data[2] * m_acc_resolution;
        m_temperature_count = raw_acc_gyro_data[3];
        m_temperature = ((float)m_temperature_count) / 333.87 + 21.0;
        m_g[0] = (float)raw_acc_gyro_data[4] * m_gyro_resolution;
        m_g[1] = (float)raw_acc_gyro_data[5] * m_gyro_resolution;
        m_g[2] = (float)raw_acc_gyro_data[6] * m_gyro_resolution;
      }

    private:
      void read_accel_gyro(int16_t* destination)
      {
        uint8_t raw_data[14];
        readBytes(ACCEL_XOUT_H, 14, &raw_data[0]);
        destination[0] = ((int16_t)raw_data[0] << 8) | (int16_t)raw_data[1];
        destination[1] = ((int16_t)raw_data[2] << 8) | (int16_t)raw_data[3];
        destination[2] = ((int16_t)raw_data[4] << 8) | (int16_t)raw_data[5];
        destination[3] = ((int16_t)raw_data[6] << 8) | (int16_t)raw_data[7];
        destination[4] = ((int16_t)raw_data[8] << 8) | (int16_t)raw_data[9];
        destination[5] = ((int16_t)raw_data[10] << 8) | (int16_t)raw_data[11];
        destination[6] = ((int16_t)raw_data[12] << 8) | (int16_t)raw_data[13];
      }

    public:
      void
      update_mag(void)
      {
        int16_t mag_count[3] = {0, 0, 0};

        if (read_mag(mag_count))
        {
          float bias_to_current_bits = m_mag_resolution / get_mag_resolution(MAG_OUTPUT_BITS::M16BITS);
          m_m[0] = (float)(mag_count[0] * m_mag_resolution * m_mag_bias_factory[0] - m_mag_bias[0] * bias_to_current_bits) * m_mag_scale[0];
          m_m[1] = (float)(mag_count[1] * m_mag_resolution * m_mag_bias_factory[1] - m_mag_bias[1] * bias_to_current_bits) * m_mag_scale[1];
          m_m[2] = (float)(mag_count[2] * m_mag_resolution * m_mag_bias_factory[2] - m_mag_bias[2] * bias_to_current_bits) * m_mag_scale[2];
        }
      }

    private:
      bool
      read_mag(int16_t* destination)
      {
        const uint8_t st1 = readByteAK8963(AK8963_ST1);
        if (st1 & 0x01)
        {
          uint8_t raw_data[7];
          readBytesAK8963(AK8963_XOUT_L, 7, &raw_data[0]);
          if (MAG_MODE == 0x02 || MAG_MODE == 0x04 || MAG_MODE == 0x06)
          {
            if ((st1 & 0x02) != 0)
              return false;
          }

          uint8_t c = raw_data[6];
          if (!(c & 0x08))
          {
            destination[0] = ((int16_t)raw_data[1] << 8) | raw_data[0];
            destination[1] = ((int16_t)raw_data[3] << 8) | raw_data[2];
            destination[2] = ((int16_t)raw_data[5] << 8) | raw_data[4];
            return true;
          }
        }

        return false;
      }
public:
      int16_t
      read_temperature_data(void)
      {
        uint8_t raw_data[2];
        readBytes(TEMP_OUT_H, 2, &raw_data[0]);
        return ((int16_t)raw_data[0] << 8) | raw_data[1];
      }
private:
      void
      calibrate_acc_gyro_impl(void)
      {
        set_acc_gyro_to_calibration();
        collect_acc_gyro_data_to(m_acc_bias, m_gyro_bias);
        write_accel_offset();
        write_gyro_offset();
        DUNE::Time::Delay::waitUsec(100);
        initMPU9250();
        DUNE::Time::Delay::waitUsec(1000);
      }

      void
      set_acc_gyro_to_calibration(void)
      {
        writeByte(PWR_MGMT_1, 0x80);
        DUNE::Time::Delay::waitUsec(100);
        writeByte(PWR_MGMT_1, 0x01);
        writeByte(PWR_MGMT_2, 0x00);
        DUNE::Time::Delay::waitUsec(200);
        writeByte(INT_ENABLE, 0x00);
        writeByte(FIFO_EN, 0x00);
        writeByte(PWR_MGMT_1, 0x00);
        writeByte(I2C_MST_CTRL, 0x00);
        writeByte(USER_CTRL, 0x00);
        writeByte(USER_CTRL, 0x0C);
        DUNE::Time::Delay::waitUsec(15);
        writeByte(MPU_CONFIG, 0x01);
        writeByte(SMPLRT_DIV, 0x00);
        writeByte(GYRO_CONFIG, 0x00);
        writeByte(ACCEL_CONFIG, 0x00);
        writeByte(USER_CTRL, 0x40);
        writeByte(FIFO_EN, 0x78);
        DUNE::Time::Delay::waitUsec(40);
      }

      void
      collect_acc_gyro_data_to(float* a_bias, float* g_bias)
      {
        uint8_t data[12];
        writeByte(FIFO_EN, 0x00);
        readBytes(FIFO_COUNTH, 2, &data[0]);
        uint16_t fifo_count = ((uint16_t)data[0] << 8) | data[1];
        uint16_t packet_count = fifo_count / 12;

        for (uint16_t ii = 0; ii < packet_count; ii++)
        {
          int16_t accel_temp[3] = {0, 0, 0}, gyro_temp[3] = {0, 0, 0};
          readBytes(FIFO_R_W, 12, &data[0]);
          accel_temp[0] = (int16_t)(((int16_t)data[0] << 8) | data[1]);
          accel_temp[1] = (int16_t)(((int16_t)data[2] << 8) | data[3]);
          accel_temp[2] = (int16_t)(((int16_t)data[4] << 8) | data[5]);
          gyro_temp[0] = (int16_t)(((int16_t)data[6] << 8) | data[7]);
          gyro_temp[1] = (int16_t)(((int16_t)data[8] << 8) | data[9]);
          gyro_temp[2] = (int16_t)(((int16_t)data[10] << 8) | data[11]);

          a_bias[0] += (float)accel_temp[0];
          a_bias[1] += (float)accel_temp[1];
          a_bias[2] += (float)accel_temp[2];
          g_bias[0] += (float)gyro_temp[0];
          g_bias[1] += (float)gyro_temp[1];
          g_bias[2] += (float)gyro_temp[2];
        }

        a_bias[0] /= (float)packet_count;
        a_bias[1] /= (float)packet_count;
        a_bias[2] /= (float)packet_count;
        g_bias[0] /= (float)packet_count;
        g_bias[1] /= (float)packet_count;
        g_bias[2] /= (float)packet_count;

        if (a_bias[2] > 0L)
          a_bias[2] -= (float)CALIB_ACCEL_SENSITIVITY;
        else
          a_bias[2] += (float)CALIB_ACCEL_SENSITIVITY;
      }

      void
      write_accel_offset(void)
      {
        uint8_t read_data[2] = {0};
        int16_t acc_bias_reg[3] = {0, 0, 0};
        readBytes(XA_OFFSET_H, 2, &read_data[0]);
        acc_bias_reg[0] = ((int16_t)read_data[0] << 8) | read_data[1];
        readBytes(YA_OFFSET_H, 2, &read_data[0]);
        acc_bias_reg[1] = ((int16_t)read_data[0] << 8) | read_data[1];
        readBytes(ZA_OFFSET_H, 2, &read_data[0]);
        acc_bias_reg[2] = ((int16_t)read_data[0] << 8) | read_data[1];

        int16_t mask_bit[3] = {1, 1, 1};
        for (int i = 0; i < 3; i++)
        {
          if (acc_bias_reg[i] % 2)
            mask_bit[i] = 0;
          acc_bias_reg[i] -= (int16_t)m_acc_bias[i] >> 3;
          if (mask_bit[i])
            acc_bias_reg[i] = acc_bias_reg[i] & ~mask_bit[i];
          else
            acc_bias_reg[i] = acc_bias_reg[i] | 0x0001;
        }

        uint8_t write_data[6] = {0};
        write_data[0] = (acc_bias_reg[0] >> 8) & 0xFF;
        write_data[1] = (acc_bias_reg[0]) & 0xFF;
        write_data[2] = (acc_bias_reg[1] >> 8) & 0xFF;
        write_data[3] = (acc_bias_reg[1]) & 0xFF;
        write_data[4] = (acc_bias_reg[2] >> 8) & 0xFF;
        write_data[5] = (acc_bias_reg[2]) & 0xFF;

        writeByte(XA_OFFSET_H, write_data[0]);
        writeByte(XA_OFFSET_L, write_data[1]);
        writeByte(YA_OFFSET_H, write_data[2]);
        writeByte(YA_OFFSET_L, write_data[3]);
        writeByte(ZA_OFFSET_H, write_data[4]);
        writeByte(ZA_OFFSET_L, write_data[5]);
      }

      void
      write_gyro_offset(void)
      {
        uint8_t gyro_offset_data[6] {0};
        gyro_offset_data[0] = (-(int16_t)m_gyro_bias[0] / 4 >> 8) & 0xFF;
        gyro_offset_data[1] = (-(int16_t)m_gyro_bias[0] / 4) & 0xFF;
        gyro_offset_data[2] = (-(int16_t)m_gyro_bias[1] / 4 >> 8) & 0xFF;
        gyro_offset_data[3] = (-(int16_t)m_gyro_bias[1] / 4) & 0xFF;
        gyro_offset_data[4] = (-(int16_t)m_gyro_bias[2] / 4 >> 8) & 0xFF;
        gyro_offset_data[5] = (-(int16_t)m_gyro_bias[2] / 4) & 0xFF;

        writeByte(XG_OFFSET_H, gyro_offset_data[0]);
        writeByte(XG_OFFSET_L, gyro_offset_data[1]);
        writeByte(YG_OFFSET_H, gyro_offset_data[2]);
        writeByte(YG_OFFSET_L, gyro_offset_data[3]);
        writeByte(ZG_OFFSET_H, gyro_offset_data[4]);
        writeByte(ZG_OFFSET_L, gyro_offset_data[5]);
      }

      void
      calibrate_mag_impl(void)
      {
        MAG_OUTPUT_BITS mag_output_bits_cache = m_setting.mag_output_bits;
        m_setting.mag_output_bits = MAG_OUTPUT_BITS::M16BITS;
        initAK8963();
        collect_mag_data_to(m_mag_bias, m_mag_scale);
        m_setting.mag_output_bits = mag_output_bits_cache;
        initAK8963();
      }

      void
      collect_mag_data_to(float* m_bias, float* m_scale)
      {
        m_task->war("Mag Calibration: Wave device in a figure eight until done!");
        DUNE::Time::Delay::waitUsec(4000);

        uint16_t sample_count = 0;
        if (MAG_MODE == 0x02)
          sample_count = 128;
        else if (MAG_MODE == 0x06)
          sample_count = 1500;

        int32_t bias[3] = {0, 0, 0}, scale[3] = {0, 0, 0};
        int16_t mag_max[3] = {-32767, -32767, -32767};
        int16_t mag_min[3] = {32767, 32767, 32767};
        int16_t mag_temp[3] = {0, 0, 0};
        for (uint16_t ii = 0; ii < sample_count; ii++)
        {
            read_mag(mag_temp);
            for (int jj = 0; jj < 3; jj++)
            {
              if (mag_temp[jj] > mag_max[jj])
                mag_max[jj] = mag_temp[jj];
              if (mag_temp[jj] < mag_min[jj])
                mag_min[jj] = mag_temp[jj];
            }

            if (MAG_MODE == 0x02)
              DUNE::Time::Delay::waitUsec(135);
            if (MAG_MODE == 0x06)
              DUNE::Time::Delay::waitUsec(12);
        }

        bias[0] = (mag_max[0] + mag_min[0]) / 2;
        bias[1] = (mag_max[1] + mag_min[1]) / 2;
        bias[2] = (mag_max[2] + mag_min[2]) / 2;

        float bias_resolution = get_mag_resolution(MAG_OUTPUT_BITS::M16BITS);
        m_bias[0] = (float)bias[0] * bias_resolution * m_mag_bias_factory[0];
        m_bias[1] = (float)bias[1] * bias_resolution * m_mag_bias_factory[1];
        m_bias[2] = (float)bias[2] * bias_resolution * m_mag_bias_factory[2];

        scale[0] = (float)(mag_max[0] - mag_min[0]) * m_mag_bias_factory[0] / 2;
        scale[1] = (float)(mag_max[1] - mag_min[1]) * m_mag_bias_factory[1] / 2;
        scale[2] = (float)(mag_max[2] - mag_min[2]) * m_mag_bias_factory[2] / 2;

        float avg_rad = scale[0] + scale[1] + scale[2];
        avg_rad /= 3.0;

        m_scale[0] = avg_rad / ((float)scale[0]);
        m_scale[1] = avg_rad / ((float)scale[1]);
        m_scale[2] = avg_rad / ((float)scale[2]);
      }

      bool
      self_test_impl(void)
      {
        uint8_t raw_data[6] = {0, 0, 0, 0, 0, 0};
        int32_t gAvg[3] = {0}, aAvg[3] = {0}, aSTAvg[3] = {0}, gSTAvg[3] = {0};
        float factoryTrim[6];
        uint8_t FS = 0;

        writeByte(SMPLRT_DIV, 0x00);
        writeByte(MPU_CONFIG, 0x02);
        writeByte(GYRO_CONFIG, FS << 3);
        writeByte(ACCEL_CONFIG2, 0x02);
        writeByte(ACCEL_CONFIG, FS << 3);

        for (int ii = 0; ii < 200; ii++)
        {
          readBytes(ACCEL_XOUT_H, 6, &raw_data[0]);
          aAvg[0] += (int16_t)(((int16_t)raw_data[0] << 8) | raw_data[1]);
          aAvg[1] += (int16_t)(((int16_t)raw_data[2] << 8) | raw_data[3]);
          aAvg[2] += (int16_t)(((int16_t)raw_data[4] << 8) | raw_data[5]);

          readBytes(GYRO_XOUT_H, 6, &raw_data[0]);
          gAvg[0] += (int16_t)(((int16_t)raw_data[0] << 8) | raw_data[1]);
          gAvg[1] += (int16_t)(((int16_t)raw_data[2] << 8) | raw_data[3]);
          gAvg[2] += (int16_t)(((int16_t)raw_data[4] << 8) | raw_data[5]);
        }

        for (int ii = 0; ii < 3; ii++)
        {
          aAvg[ii] /= 200;
          gAvg[ii] /= 200;
        }

        writeByte(ACCEL_CONFIG, 0xE0);
        writeByte(GYRO_CONFIG, 0xE0);
        DUNE::Time::Delay::waitUsec(25);

        for (int ii = 0; ii < 200; ii++)
        {
          readBytes(ACCEL_XOUT_H, 6, &raw_data[0]);
          aSTAvg[0] += (int16_t)(((int16_t)raw_data[0] << 8) | raw_data[1]);
          aSTAvg[1] += (int16_t)(((int16_t)raw_data[2] << 8) | raw_data[3]);
          aSTAvg[2] += (int16_t)(((int16_t)raw_data[4] << 8) | raw_data[5]);

          readBytes(GYRO_XOUT_H, 6, &raw_data[0]);
          gSTAvg[0] += (int16_t)(((int16_t)raw_data[0] << 8) | raw_data[1]);
          gSTAvg[1] += (int16_t)(((int16_t)raw_data[2] << 8) | raw_data[3]);
          gSTAvg[2] += (int16_t)(((int16_t)raw_data[4] << 8) | raw_data[5]);
        }

        for (int ii = 0; ii < 3; ii++)
        {
          aSTAvg[ii] /= 200;
          gSTAvg[ii] /= 200;
        }

        writeByte(ACCEL_CONFIG, 0x00);
        writeByte(GYRO_CONFIG, 0x00);
        DUNE::Time::Delay::waitUsec(25);

        uint8_t self_test_data[6];
        self_test_data[0] = readByte(SELF_TEST_X_ACCEL);
        self_test_data[1] = readByte(SELF_TEST_Y_ACCEL);
        self_test_data[2] = readByte(SELF_TEST_Z_ACCEL);
        self_test_data[3] = readByte(SELF_TEST_X_GYRO);
        self_test_data[4] = readByte(SELF_TEST_Y_GYRO);
        self_test_data[5] = readByte(SELF_TEST_Z_GYRO);

        factoryTrim[0] = (float)(2620 / 1 << FS) * (pow(1.01, ((float)self_test_data[0] - 1.0)));
        factoryTrim[1] = (float)(2620 / 1 << FS) * (pow(1.01, ((float)self_test_data[1] - 1.0)));
        factoryTrim[2] = (float)(2620 / 1 << FS) * (pow(1.01, ((float)self_test_data[2] - 1.0)));
        factoryTrim[3] = (float)(2620 / 1 << FS) * (pow(1.01, ((float)self_test_data[3] - 1.0)));
        factoryTrim[4] = (float)(2620 / 1 << FS) * (pow(1.01, ((float)self_test_data[4] - 1.0)));
        factoryTrim[5] = (float)(2620 / 1 << FS) * (pow(1.01, ((float)self_test_data[5] - 1.0)));

        for (int i = 0; i < 3; i++)
        {
          m_self_test_result[i] = 100.0 * ((float)(aSTAvg[i] - aAvg[i])) / factoryTrim[i] - 100.;
          m_self_test_result[i + 3] = 100.0 * ((float)(gSTAvg[i] - gAvg[i])) / factoryTrim[i + 3] - 100.;
        }

        bool b = true;
        for (uint8_t i = 0; i < 6; ++i)
        b &= fabs(m_self_test_result[i]) <= 14.f;
        return b;
      }

      float
      get_acc_resolution(const ACCEL_FS_SEL accel_af_sel) const
      {
        switch (accel_af_sel)
        {
          case ACCEL_FS_SEL::A2G:
            return 2.0 / 32768.0;
          case ACCEL_FS_SEL::A4G:
            return 4.0 / 32768.0;
          case ACCEL_FS_SEL::A8G:
            return 8.0 / 32768.0;
          case ACCEL_FS_SEL::A16G:
            return 16.0 / 32768.0;
          default:
            return 0.;
        }
      }

      float
      get_gyro_resolution(const GYRO_FS_SEL gyro_fs_sel) const
      {
        switch (gyro_fs_sel) 
        {
          case GYRO_FS_SEL::G250DPS:
            return 250.0 / 32768.0;
          case GYRO_FS_SEL::G500DPS:
            return 500.0 / 32768.0;
          case GYRO_FS_SEL::G1000DPS:
            return 1000.0 / 32768.0;
          case GYRO_FS_SEL::G2000DPS:
            return 2000.0 / 32768.0;
          default:
          return 0.;
        }
      }

      float
      get_mag_resolution(const MAG_OUTPUT_BITS mag_output_bits) const
      {
        switch (mag_output_bits)
        {
          case MAG_OUTPUT_BITS::M14BITS:
            return 10. * 4912. / 8190.0;
          case MAG_OUTPUT_BITS::M16BITS:
            return 10. * 4912. / 32760.0;
          default:
            return 0.;
        }
      }

      uint8_t
      readByte(const uint8_t reg)
      {
        uint8_t value = 0;
        if (m_is_i2c)
        {
          m_i2c->write(&reg, 1);
          m_i2c->read(&value, 1);
        }
        else if (m_is_spi)
        {
          uint8_t tx_data[2] = {reg | READ_FLAG, 0};
          uint8_t rx_data[2] = {0, 0};
          m_spi->transfer(tx_data, rx_data, 2);
          value = rx_data[1];
        }
        
        return value;
      }

      void
      readBytes(const uint8_t reg, uint8_t count, uint8_t* dest)
      {
        if (m_is_i2c)
        {
          m_i2c->write(&reg, 1);
          m_i2c->read(dest, count);
        }
        else if (m_is_spi)
        {
          uint8_t tx_data[2] = {reg | READ_FLAG, 0};
          std::vector<uint8_t> rx_data(count);
          m_spi->transfer(tx_data, (uint8_t*) rx_data[0], count);
          dest = &rx_data[1];
        }
      }

      void
      writeByte(uint8_t reg, uint8_t data)
      {
        if (m_is_i2c)
        {
          m_i2c->write(&reg, 1);
          m_i2c->write(&data, 1);
        }
        else if (m_is_spi)
        {
          uint8_t tx_data[2] = {reg, data};
          m_spi->transfer(tx_data, nullptr, 2);
        }
      }

      uint8_t
      readByteAK8963(const uint8_t reg)
      {
        uint8_t value = 0;

        if (m_is_i2c)
        {
          m_i2c->connect(AK8963_ADDRESS);
          value = readByte(reg);
          m_i2c->connect(m_addr);
        }
        else if (m_is_spi)
        {
          writeByte(I2C_SLV0_ADDR, AK8963_ADDRESS | READ_FLAG);
          writeByte(I2C_SLV0_REG, reg);
          writeByte(I2C_SLV0_CTRL, 0x81);
          DUNE::Time::Delay::waitUsec(100);
          value = readByte(EXT_SENS_DATA_00);
        }
        
        return value;
      }

      void
      readBytesAK8963(const uint8_t reg, uint8_t count, uint8_t* dest)
      {
        if (m_is_i2c)
        {
          m_i2c->connect(AK8963_ADDRESS);
          readBytes(reg, count, dest);
          m_i2c->connect(m_addr);
        }
        else if (m_is_spi)
        {
          writeByte(I2C_SLV0_ADDR, AK8963_ADDRESS | READ_FLAG);
          writeByte(I2C_SLV0_REG, reg);
          writeByte(I2C_SLV0_CTRL, 0x80 | count);
          DUNE::Time::Delay::waitUsec(100);
          readBytes(EXT_SENS_DATA_00, count, dest);
        }
      }

      void
      writeByteAK8963(const uint8_t reg, uint8_t data)
      {
        if (m_is_i2c)
        {
          m_i2c->connect(AK8963_ADDRESS);
          writeByte(reg, data);
          m_i2c->connect(m_addr);
        }
        else if (m_is_spi)
        {
          writeByte(I2C_SLV0_ADDR, AK8963_ADDRESS | READ_FLAG);
          writeByte(I2C_SLV0_REG, reg);
          writeByte(I2C_SLV0_CTRL, 1);
          DUNE::Time::Delay::waitUsec(100);
          writeByte(EXT_SENS_DATA_00, data);
        }
      }

    private:
      DUNE::Tasks::Task* m_task;
      DUNE::Hardware::I2C* m_i2c;
      DUNE::Hardware::SPI* m_spi;
      bool m_is_i2c;
      bool m_is_spi;
      uint8_t m_addr;
      MPU9250Setting m_setting;
      bool m_connected;
      QuaternionFilter m_quat_filter;
      size_t m_filter_iter;
      float m_acc_resolution;
      float m_gyro_resolution;
      float m_mag_resolution;
      float m_acc_bias[3];
      float m_gyro_bias[3];
      float m_mag_bias_factory[3];
      float m_mag_bias[3];
      float m_mag_scale[3];
      float m_magnetic_declination;
      int16_t m_temperature_count;
      float m_temperature;
      float m_self_test_result[6];
      float m_a[3];
      float m_g[3];
      float m_m[3];
      float m_q[4];
      float m_rpy[3];
      float m_lin_acc[3];
    };
  }
}

#endif
