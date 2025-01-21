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
      //! Map of arrow directions to LED matrix.
      std::map<int, uint16_t[8][8]> m_dirs;
      //! IMC Message timestamp.
      double m_ts;
      //! IMC Euler Angles message.
      IMC::EulerAngles euler;
      //! IMC Angular Velocity message.
      IMC::AngularVelocity av;
      //! IMC Acceleration message.
      IMC::Acceleration acc;
      //! IMC Magnetic Field message.
      IMC::MagneticField mag;
      //! IMC Pressure message.
      IMC::Pressure press;
      //! IMC Temperature message.
      IMC::Temperature temp;
      //! IMC Relative Humidity message.
      IMC::RelativeHumidity rh;
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
        m_humidity(nullptr)
      {
        param("RTIMU lib config", m_args.m_lib_config)
          .defaultValue("/root/RTEllipsoidFit/RTIMULib.ini")
          .description("RTIMU lib config file");

        param("LED matrix device", m_args.m_led_dev)
          .defaultValue("/dev/fb0")
          .description("LED matrix device file");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      { }

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
        m_led = new LEDMatrix(m_args.m_led_dev.c_str());

        m_settings = new RTIMUSettings(m_args.m_lib_config.c_str());

        m_imu = RTIMU::createIMU(m_settings);
        m_imu->IMUInit();

        m_pressure = RTPressure::createPressure(m_settings);
        m_pressure->pressureInit();

        m_humidity = RTHumidity::createHumidity(m_settings);
        m_humidity->humidityInit();
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
        // Extract yaw, pitch, and roll
        euler.psi = fusionPose.z();
        euler.theta = fusionPose.x();
        euler.phi = fusionPose.y();

        dispatch(euler);

        spew("Yaw: %.2f°, Pitch: %.2f°, Roll: %.2f°", Angles::degrees(euler.psi),
             Angles::degrees(euler.theta), Angles::degrees(euler.phi));
      }

      //! Read Gyroscope data.
      void
      readGyro(const RTVector3& gyro)
      {
        av.x = gyro.x();
        av.y = gyro.y();
        av.z = gyro.z();

        dispatch(av);

        spew("Gyro: X: %.2f, Y: %.2f, Z: %.2f", av.x, av.y, av.z);
      }

      //! Read Accelerometer data.
      void
      readAccel(const RTVector3& accel)
      {
        acc.x = accel.x();
        acc.y = accel.y();
        acc.z = accel.z();

        dispatch(acc);

        spew("Accel: X: %.2f, Y: %.2f, Z: %.2f", acc.x, acc.y, acc.z);
      }

      //! Read Compass data.
      void
      readCompass(const RTVector3& compass)
      {
        // convert uT to Gauss
        mag.x = compass.x() * 0.01;
        mag.y = compass.y() * 0.01;
        mag.z = compass.z() * 0.01;

        dispatch(mag);
      }

      //! Read IMU data.
      void
      readIMUData(void)
      {
        if (!m_imu->IMURead())
          return;

        m_ts = m_imu->getIMUData().timestamp;

        euler.setTimeStamp(m_ts);
        av.setTimeStamp(m_ts);
        acc.setTimeStamp(m_ts);
        mag.setTimeStamp(m_ts);

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

        press.value = data.pressure;

        spew("Pressure: %.2f", press.value);
        dispatch(press);

        temp.value = data.temperature;

        spew("Temperature: %.2f", temp.value);
        dispatch(temp);
      }

      //! Read Humidity sensor data.
      void
      readHumidity(void)
      {
        RTIMU_DATA data;
        if (!m_humidity->humidityRead(data))
          return;

        IMC::RelativeHumidity hum;
        hum.value = data.humidity;

        spew("Humidity: %.2f", hum.value);

        dispatch(hum);
      }

      //! Update LED matrix.
      //! @param[in] dir arrow direction.
      void
      updateScreen(int dir)
      {
        m_led->setMatrix(m_dirs[dir]);
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

          if (!wdog.overflow())
            continue;

          readIMUData();
          readPressure();
          readHumidity();

          // Display arrow on LED matrix
          double hd = Angles::degrees(atan2(mag.y, mag.x));  // from -180 to 180

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
