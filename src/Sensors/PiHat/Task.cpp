//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "LEDs.hpp"

#include "RTIMULib/RTIMULib/RTIMULib.h"

#include "LibCalibration.hpp"

namespace Sensors
{
  //! Device driver for RPi Sense HAT.
  //!
  //! @author João Bogas
  namespace PiHat
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! RTIMU lib config.
      std::string m_lib_config;
      //! LED matrix.
      std::string m_led_dev;
      //! Calibration command.
      std::string m_cal_cmd;
      //! Calibration option.
      int m_cal_opt;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! LED matrix.
      LEDMatrix* m_led;
      //! RTIMU library settings.
      RTIMUSettings* m_settings;
      //! IMU sensor.
      RTIMU* m_imu;
      //! Pressure sensor.
      RTPressure* m_pressure;
      //! Humidity sensor.
      RTHumidity* m_humidity;
      //! Calibration handler.
      Calibration* m_calib;
      //! Map of arrow directions to LED matrix.
      std::map<int, uint16_t[8][8]> m_dirs;
      //! IMC Message timestamp.
      double m_ts;
      //! IMC Euler Angles message.
      IMC::EulerAngles m_euler;
      //! IMC Angular Velocity message.
      IMC::AngularVelocity m_av;
      //! IMC Acceleration message.
      IMC::Acceleration m_acc;
      //! IMC Magnetic Field message.
      IMC::MagneticField m_mag;
      //! IMC Pressure message.
      IMC::Pressure m_press;
      //! IMC Temperature message.
      IMC::Temperature m_temp;
      //! IMC Relative Humidity message.
      IMC::RelativeHumidity m_rh;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_led(nullptr),
        m_settings(nullptr),
        m_imu(nullptr),
        m_pressure(nullptr),
        m_humidity(nullptr),
        m_calib(nullptr)
      {
        param("RTIMU lib config", m_args.m_lib_config)
          .defaultValue("/root/RTEllipsoidFit/RTIMULib.ini")
          .description("RTIMU lib config file");

        param("LED matrix device", m_args.m_led_dev)
          .defaultValue("/dev/fb0")
          .description("LED matrix device file");

        param("Calibration option", m_args.m_cal_opt)
          .defaultValue("3")
          .values("0, 1, 2, 3")
          .description("Calibration options: 0 - Magnetometer, 1 - Magnetometer Ellipsoid, 2 - "
                       "Accelerometer, 3 - Exit");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.m_cal_opt))
          onCalibration(m_args.m_cal_opt);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      { }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_led = new LEDMatrix(m_args.m_led_dev.c_str());

          m_settings = new RTIMUSettings(m_args.m_lib_config.c_str());

          m_imu = RTIMU::createIMU(m_settings);
          if (m_imu == nullptr)
            throw RestartNeeded("Failed to create IMU", 5);

          m_imu->IMUInit();

          m_pressure = RTPressure::createPressure(m_settings);
          if (m_pressure == nullptr)
            throw RestartNeeded("Failed to create Pressure sensor", 5);

          m_pressure->pressureInit();

          m_humidity = RTHumidity::createHumidity(m_settings);
          if (m_humidity == nullptr)
            throw RestartNeeded("Failed to create Humidity sensor", 5);
          m_humidity->humidityInit();

          m_calib = new Calibration(*this, *m_settings, *m_imu, "/root/RTEllipsoidFit/");
        }
        catch (const std::exception& e)
        {
          throw RestartNeeded(e.what(), 5);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        // clang-format off
        uint16_t m_diag[8][8] = 
        {
          {0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 1, 1, 1, 1, 0},
          {0, 0, 0, 0, 0, 1, 1, 0},
          {0, 0, 0, 0, 1, 0, 1, 0},
          {0, 0, 0, 1, 0, 0, 1, 0},
          {0, 0, 1, 0, 0, 0, 0, 0},
          {0, 1, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0}
        };

        uint16_t m_normal[8][8] = 
        {
          {0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 1, 0, 0, 0},
          {0, 0, 0, 0, 0, 1, 0, 0},
          {0, 1, 1, 1, 1, 1, 1, 0},
          {0, 1, 1, 1, 1, 1, 1, 0},
          {0, 0, 0, 0, 0, 1, 0, 0},
          {0, 0, 0, 0, 1, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0},
        };
        // clang-format on

        for (size_t i = 0; i < 8; i++)
        {
          uint16_t (&ref)[8][8] = m_dirs[i];
          if ((i % 2) == 0)
          {
            memcpy(ref, m_normal, sizeof(ref));
            rotate90(m_normal, m_normal);
          }
          else
          {
            memcpy(ref, m_diag, sizeof(ref));
            rotate90(m_diag, m_diag);
          }
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_led);
        Memory::clear(m_settings);
        Memory::clear(m_imu);
        Memory::clear(m_pressure);
        Memory::clear(m_humidity);
        Memory::clear(m_calib);
      }

      //! Rotate 8x8 matrix 90 degrees.
      void
      rotate90(uint16_t original[8][8], uint16_t rotated[8][8])
      {
        uint16_t tmp[8][8] = { 0 };
        memcpy(tmp, original, sizeof(tmp));

        for (size_t x = 0; x < 8; x++)
          for (size_t y = 0; y < 8; y++)
            rotated[x][y] = tmp[y][7 - x];  // 90 degrees counter-clockwise
        // rotated[x][y] = tmp[7 - y][x]; // 90 degrees clockwise
      }

      //! Read Angular position.
      void
      readPos(const RTVector3& fusionPose)
      {
        // Extract roll, pitch and yaw
        m_euler.theta = Angles::normalizeRadian(fusionPose.x());
        m_euler.phi = Angles::normalizeRadian(fusionPose.y());
        m_euler.psi = Angles::normalizeRadian(fusionPose.z());
        m_euler.psi_magnetic = m_euler.psi;

        dispatch(m_euler);

        spew("Yaw: %.2f°, Pitch: %.2f°, Roll: %.2f°", Angles::degrees(m_euler.psi),
             Angles::degrees(m_euler.theta), Angles::degrees(m_euler.phi));
      }

      //! Read Gyroscope data.
      void
      readGyro(const RTVector3& gyro)
      {
        m_av.x = gyro.x();
        m_av.y = gyro.y();
        m_av.z = gyro.z();

        dispatch(m_av);

        spew("Gyro: X: %.2f, Y: %.2f, Z: %.2f", m_av.x, m_av.y, m_av.z);
      }

      //! Read Accelerometer data.
      void
      readAccel(const RTVector3& accel)
      {
        m_acc.x = accel.x();
        m_acc.y = accel.y();
        m_acc.z = accel.z();

        dispatch(m_acc);

        spew("Accel: X: %.2f, Y: %.2f, Z: %.2f", m_acc.x, m_acc.y, m_acc.z);
      }

      //! Read Compass data.
      void
      readCompass(const RTVector3& compass)
      {
        // convert uT to Gauss
        m_mag.x = compass.x() * 0.01;
        m_mag.y = compass.y() * 0.01;
        m_mag.z = compass.z() * 0.01;

        dispatch(m_mag);
      }

      //! Read IMU data.
      void
      readIMUData(void)
      {
        if (!m_imu->IMURead())
          return;

        m_ts = m_imu->getIMUData().timestamp;

        m_euler.setTimeStamp(m_ts);
        m_av.setTimeStamp(m_ts);
        m_acc.setTimeStamp(m_ts);
        m_mag.setTimeStamp(m_ts);

        readPos(m_imu->getMeasuredPose());
        readGyro(m_imu->getGyro());
        readAccel(m_imu->getAccel());
        readCompass(m_imu->getCompass());
      }

      //! Read Pressure sensor data.
      void
      readPressure(void)
      {
        RTIMU_DATA data;
        if (!m_pressure->pressureRead(data))
          return;

        m_press.value = data.pressure;

        spew("Pressure: %.2f", m_press.value);
        dispatch(m_press);

        m_temp.value = data.temperature;

        spew("Temperature: %.2f", m_temp.value);
        dispatch(m_temp);
      }

      //! Read Humidity sensor data.
      void
      readHumidity(void)
      {
        RTIMU_DATA data;
        if (!m_humidity->humidityRead(data))
          return;

        m_rh.value = data.humidity;

        spew("Humidity: %.2f", m_rh.value);
        dispatch(m_rh);
      }

      //! Update LED matrix.
      //! @param[in] dir arrow direction.
      void
      updateScreen(int dir)
      {
        m_led->setMatrix(m_dirs[dir]);
      }

      void
      onCalibration(int opt)
      {
        if (opt < 0 || opt > 3)
        {
          war("Invalid calibration option: %d", opt);
          return;
        }

        if (m_calib == nullptr)
          return;

        m_calib->startCalibration((CalCmd)opt);
      }

      //! Main loop.
      void
      onMain(void)
      {
        int delay = m_imu->IMUGetPollInterval();
        Counter<double> wdog(delay);

        while (!stopping())
        {
          waitForMessages(0.01);

          if (m_calib->onCalibration())
            continue;

          if (!wdog.overflow())
            continue;

          readIMUData();
          readPressure();
          readHumidity();

          // Display arrow on LED matrix
          double hd = Angles::degrees(atan2(m_mag.y, m_mag.x));  // from -180 to 180

          // North rotation
          double north = 0 - hd;

          if (north < 0)
            north += 360;

          int dir = Math::roundToInteger(north / 45.0) % 8;

          updateScreen(dir);
        }
      }
    };
  }
}

DUNE_TASK
