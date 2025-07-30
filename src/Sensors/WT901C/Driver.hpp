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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef POWER_WT901_DRIVER_HPP_INCLUDED_
#define POWER_WT901_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace WT901C
  {
    using DUNE_NAMESPACES;
    static const uint8_t c_packet_header = 0x55;
    static const uint8_t c_max_data_angle_size = 8;

    class Driver
    {
    public:

      enum IMU_STEPS{
        IMU_HEADER = 0,
        IMU_TYPE,
        IMU_DATA,
        IMU_CSUM,
        IMU_IDEL
      };

      enum PacketType
      {
        PACKET_ACCELEROMETER = 0x51,
        PACKET_GYROSCOPE = 0x52,
        PACKET_ANGLE = 0x53,
        PACKET_MAGNETOMETER = 0x54,
        PACKET_QUATERNION = 0x59
      };

      Driver(DUNE::Tasks::Task *task, IO::Handle* handle) :
        m_task(task),
        m_handle(handle)
      {
        m_step = IMU_HEADER;
        m_rx_counter = 0;
        m_new_valid_data = false;
      }

      ~Driver(void) {}

      void
      addByte(uint8_t data)
      {
        switch(m_step)
        {
          case IMU_HEADER:
            if(data == c_packet_header)
            {
              m_rx_counter = 1;
              data_in[0] = data;
              m_step = IMU_TYPE;
            }
            break;

          case IMU_TYPE:
            if(data == PACKET_ACCELEROMETER || data == PACKET_GYROSCOPE ||
               data == PACKET_ANGLE || data == PACKET_MAGNETOMETER)
            {
              data_in[m_rx_counter++] = data;
              m_cnt_data = 0;
              m_step = IMU_DATA;
            }
            else
            {
              m_rx_counter = 0;
              m_step = IMU_HEADER;
            }
            break;

          case IMU_DATA:
            m_cnt_data++;
            data_in[m_rx_counter++] = data;
            if(m_cnt_data >= c_max_data_angle_size)
            {
              m_step = IMU_CSUM;
            }
            break;

          case IMU_CSUM:
            data_in[m_rx_counter++] = data;
            processData(data_in);
            m_rx_counter = 0;
            m_step = IMU_HEADER;
            break;

          default:
            m_rx_counter = 0;
            m_step = IMU_HEADER;
            break;
        }
      }

      bool
      newValidData(void)
      {
        if(m_new_valid_data)
        {
          m_new_valid_data = false;
          return true;
        }

        return false;
      }


    private:
      //! Parent task.
      DUNE::Tasks::Task *m_task;
      //! IO handle.
      IO::Handle* m_handle;
      //! Parser Step;
      uint8_t m_step;
      //! Buffer for data
      uint8_t data_in[16];
      //! Buffer counter
      uint8_t m_rx_counter;
      //! counter of data in
      uint8_t m_cnt_data;
      //! Timestamp of last packet received.
      double m_ts;
      //! Flag to store new valid data from imu
      bool m_new_valid_data;

      void
      processData(uint8_t *data)
      {
        char temp[64];
        sprintf(temp, "%02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x",
          data_in[0], data_in[1],
          data_in[2], data_in[3],
          data_in[4], data_in[5],
          data_in[6], data_in[7],
          data_in[8], data_in[9],
          data_in[10]);
        m_task->spew("[Driver]: %s", temp);

        if(data_in[1] == PACKET_ANGLE)
        {
          if(checkSumOk(data))
            onEulerAngles(data);
        }
        else if(data_in[1] == PACKET_ACCELEROMETER)
        {
          if(checkSumOk(data))
            onAcceleration(data);
        }
        else if(data_in[1] == PACKET_GYROSCOPE)
        {
          if(checkSumOk(data))
            onGyroscope(data);
        }
        else if(data_in[1] == PACKET_MAGNETOMETER)
        {
          if(checkSumOk(data))
            onMagnetometer(data);
        }
      }

      void
      dispatchMessage(IMC::Message& msg)
      {
        //msg.setTimeStamp(m_ts);
        m_task->dispatch(msg, DF_KEEP_TIME);
      }

      void
      onEulerAngles(uint8_t * data)
      {
        uint16_t roll_raw  = (data[3] << 8) | data[2];   // Roll_H << 8 | Roll_L
        uint16_t pitch_raw = (data[5] << 8) | data[4];
        uint16_t yaw_raw   = (data[7] << 8) | data[6];
        uint16_t temp_raw  = (data[9] << 8) | data[8];
        float f_roll = roll_raw / 32768.0f * 180.0f;
        float f_pitch = pitch_raw / 32768.0f * 180.0f;
        float f_yaw = yaw_raw / 32768.0f * 180.0f;
        float f_temp = temp_raw / 32768.0f * 180.0f;
        m_task->debug("[Driver]: roll: %d | %.2f", roll_raw, f_roll);
        m_task->debug("[Driver]: pitch: %d | %.2f", pitch_raw, f_pitch);
        m_task->debug("[Driver]: yaw: %d | %.2f", yaw_raw, f_yaw);
        m_task-> debug("[Driver]: temp: %d | %.2f", temp_raw, f_temp);
        EulerAngles euler;
        euler.phi = Angles::normalizeRadian(Angles::radians(f_roll));
        euler.theta = Angles::normalizeRadian(Angles::radians(f_pitch));
        euler.psi = Angles::normalizeRadian(Angles::radians(f_yaw));
        euler.psi_magnetic = euler.psi;
        dispatchMessage(euler);
        m_task->trace("[Driver]:angles: roll=%f, pitch=%f, yaw=%f", Angles::degrees(euler.phi), Angles::degrees(euler.theta), Angles::degrees(euler.psi));
        m_new_valid_data = true;
      }

      void
      onAcceleration(uint8_t * data)
      {
        uint16_t ax, ay, az;
        ax = (data[3] << 8) | data[2];
        ay = (data[5] << 8) | data[4];
        az = (data[7] << 8) | data[6];

        float f_ax = ax / 32768.0f * 16.0f;
        float f_ay = ay / 32768.0f * 16.0f;
        float f_az = az / 32768.0f * 16.0f;

        Acceleration acc;
        acc.x = Angles::normalizeRadian(Angles::radians(f_ax));
        acc.y = Angles::normalizeRadian(Angles::radians(f_ay));
        acc.z = Angles::normalizeRadian(Angles::radians(f_az));

        dispatchMessage(acc);

        m_task->trace("[Driver]:acceleration: roll=%f, pitch=%f, yaw=%f", Angles::degrees(acc.x), Angles::degrees(acc.y),
              Angles::degrees(acc.z));
      }

      void
      onGyroscope(uint8_t * data)
      {
        uint16_t gx, gy, gz;
        gx = (data[3] << 8) | data[2];
        gy = (data[5] << 8) | data[4];
        gz = (data[7] << 8) | data[6];

        float f_gx = gx / 32768.0f * 2000.0f;  // Scale factor for gyroscope
        float f_gy = gy / 32768.0f * 2000.0f;
        float f_gz = gz / 32768.0f * 2000.0f;

        AngularVelocity gyro;
        gyro.x = Angles::normalizeRadian(Angles::radians(f_gx));
        gyro.y = Angles::normalizeRadian(Angles::radians(f_gy));
        gyro.z = Angles::normalizeRadian(Angles::radians(f_gz));

        dispatchMessage(gyro);

        m_task->trace("[Driver]:gyroscope: x=%f, y=%f, z=%f", Angles::degrees(gyro.x), Angles::degrees(gyro.y),
              Angles::degrees(gyro.z));
      }

      void
      onMagnetometer(uint8_t * data)
      {
        uint16_t mx, my, mz;
        mx = (data[3] << 8) | data[2];
        my = (data[5] << 8) | data[4];
        mz = (data[7] << 8) | data[6];

        MagneticField mag;
        mag.x = mx;
        mag.y = my;
        mag.z = mz;

        dispatchMessage(mag);

        m_task->trace("[Driver]:magnetometer: x=%f, y=%f, z=%f (uT)", mag.x, mag.y, mag.z);
      }

      bool
      checkSumOk(uint8_t *data)
      {
        uint32_t checksum = data[0] + data[1];
        for (size_t i = 0; i < c_max_data_angle_size; ++i)
          checksum += data[i + 2];


        checksum = checksum % 256;
        if(checksum != data[10])
          m_task->err("[Driver]:CSUM %02x | %02x", checksum, data[10]);

        return (checksum == data[10]);
      }
    };
  }
}

#endif /* POWER_CPC_DRIVER_HPP_INCLUDED_ */