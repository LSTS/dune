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
// Implementation of Madgwick's IMU and AHRS algorithms.                    *
// See: http://www.x-io.co.uk/node/8#open_source_ahrs_and_imu_algorithms    *
//***************************************************************************

// Local headers.
#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace General
  {
    namespace AHRS
    {
      namespace Madgwick
      {
        using DUNE_NAMESPACES;

        //! 2 * proportional gain (Kp).
        constexpr double c_beta = 0.1;

        struct Task: public DUNE::Navigation::BasicAHRS
        {
          //! Acceleration data.
          SensorData m_acc;
          //! Angular Velocity data.
          SensorData m_gyro;
          //! Magnetic field data.
          SensorData m_mag;
          //! Timestamp of last step.
          double m_tstamp_last;
          //! Quaternion components.
          double m_q0, m_q1, m_q2, m_q3;

          Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Navigation::BasicAHRS(name, ctx)
          { }

          void
          onActivation(void) override
          {
            BasicAHRS::onActivation();

            m_acc = {0.0, 0.0, 0.0, false};
            m_gyro = {0.0, 0.0, 0.0, false};
            m_mag = {0.0, 0.0, 0.0, false};

            m_q0 = 1.0;
            m_q1 = 0.0;
            m_q2 = 0.0;
            m_q3 = 0.0;

            m_tstamp_last = Clock::getSinceEpoch();
          }

          void
          onAcceleration(const DUNE::IMC::Acceleration& msg) override
          {
            m_acc.x = -msg.x;
            m_acc.y = -msg.y;
            m_acc.z = -msg.z;
            m_acc.new_data = true;
          }

          void
          onAngularVelocity(const DUNE::IMC::AngularVelocity& msg) override
          {
            m_gyro.x = msg.x;
            m_gyro.y = msg.y;
            m_gyro.z = msg.z;
            m_gyro.new_data = true;
          }

          void
          onMagneticField(const DUNE::IMC::MagneticField& msg) override
          {
            m_mag.x = msg.x;
            m_mag.y = msg.y;
            m_mag.z = msg.z;
            m_mag.new_data = true;
          }

          void
          update(double gx, double gy, double gz, double ax, double ay, double az, double mx, double my, double mz, double deltaT)
          {
            double recipNorm;
            double s0, s1, s2, s3;
            double qDot1, qDot2, qDot3, qDot4;
            double hx, hy;
            double _2q0mx, _2q0my, _2q0mz, _2q1mx, _2bx, _2bz, _4bx, _4bz, _2q0, _2q1, _2q2, _2q3, _2q0q2, _2q2q3, q0q0, q0q1, q0q2, q0q3, q1q1, q1q2, q1q3, q2q2, q2q3, q3q3;

            // Rate of change of quaternion from gyroscope
            qDot1 = 0.5 * (-m_q1 * gx - m_q2 * gy - m_q3 * gz);
            qDot2 = 0.5 * (m_q0 * gx + m_q2 * gz - m_q3 * gy);
            qDot3 = 0.5 * (m_q0 * gy - m_q1 * gz + m_q3 * gx);
            qDot4 = 0.5 * (m_q0 * gz + m_q1 * gy - m_q2 * gx);

            // Compute feedback only if accelerometer measurement valid (avoids NaN in accelerometer normalisation)
            if (!((ax == 0.0) && (ay == 0.0) && (az == 0.0)))
            {
              // Normalise accelerometer measurement
              recipNorm = invSqrt(ax * ax + ay * ay + az * az);
              ax *= recipNorm;
              ay *= recipNorm;
              az *= recipNorm;   

              // Normalise magnetometer measurement
              recipNorm = invSqrt(mx * mx + my * my + mz * mz);
              mx *= recipNorm;
              my *= recipNorm;
              mz *= recipNorm;

              // Auxiliary variables to avoid repeated arithmetic
              _2q0mx = 2.0 * m_q0 * mx;
              _2q0my = 2.0 * m_q0 * my;
              _2q0mz = 2.0 * m_q0 * mz;
              _2q1mx = 2.0 * m_q1 * mx;
              _2q0 = 2.0 * m_q0;
              _2q1 = 2.0 * m_q1;
              _2q2 = 2.0 * m_q2;
              _2q3 = 2.0 * m_q3;
              _2q0q2 = 2.0 * m_q0 * m_q2;
              _2q2q3 = 2.0 * m_q2 * m_q3;
              q0q0 = m_q0 * m_q0;
              q0q1 = m_q0 * m_q1;
              q0q2 = m_q0 * m_q2;
              q0q3 = m_q0 * m_q3;
              q1q1 = m_q1 * m_q1;
              q1q2 = m_q1 * m_q2;
              q1q3 = m_q1 * m_q3;
              q2q2 = m_q2 * m_q2;
              q2q3 = m_q2 * m_q3;
              q3q3 = m_q3 * m_q3;

              // Reference direction of Earth's magnetic field
              hx = mx * q0q0 - _2q0my * m_q3 + _2q0mz * m_q2 + mx * q1q1 + _2q1 * my * m_q2 + _2q1 * mz * m_q3 - mx * q2q2 - mx * q3q3;
              hy = _2q0mx * m_q3 + my * q0q0 - _2q0mz * m_q1 + _2q1mx * m_q2 - my * q1q1 + my * q2q2 + _2q2 * mz * m_q3 - my * q3q3;
              _2bx = sqrt(hx * hx + hy * hy);
              _2bz = -_2q0mx * m_q2 + _2q0my * m_q1 + mz * q0q0 + _2q1mx * m_q3 - mz * q1q1 + _2q2 * my * m_q3 - mz * q2q2 + mz * q3q3;
              _4bx = 2.0f * _2bx;
              _4bz = 2.0f * _2bz;

              // Gradient decent algorithm corrective step
              s0 = -_2q2 * (2.0 * q1q3 - _2q0q2 - ax) + _2q1 * (2.0 * q0q1 + _2q2q3 - ay) - _2bz * m_q2 * (_2bx * (0.5 - q2q2 - q3q3) + _2bz * (q1q3 - q0q2) - mx) + (-_2bx * m_q3 + _2bz * m_q1) * (_2bx * (q1q2 - q0q3) + _2bz * (q0q1 + q2q3) - my) + _2bx * m_q2 * (_2bx * (q0q2 + q1q3) + _2bz * (0.5 - q1q1 - q2q2) - mz);
              s1 = _2q3 * (2.0 * q1q3 - _2q0q2 - ax) + _2q0 * (2.0 * q0q1 + _2q2q3 - ay) - 4.0 * m_q1 * (1 - 2.0 * q1q1 - 2.0 * q2q2 - az) + _2bz * m_q3 * (_2bx * (0.5 - q2q2 - q3q3) + _2bz * (q1q3 - q0q2) - mx) + (_2bx * m_q2 + _2bz * m_q0) * (_2bx * (q1q2 - q0q3) + _2bz * (q0q1 + q2q3) - my) + (_2bx * m_q3 - _4bz * m_q1) * (_2bx * (q0q2 + q1q3) + _2bz * (0.5 - q1q1 - q2q2) - mz);
              s2 = -_2q0 * (2.0 * q1q3 - _2q0q2 - ax) + _2q3 * (2.0 * q0q1 + _2q2q3 - ay) - 4.0 * m_q2 * (1 - 2.0 * q1q1 - 2.0 * q2q2 - az) + (-_4bx * m_q2 - _2bz * m_q0) * (_2bx * (0.5 - q2q2 - q3q3) + _2bz * (q1q3 - q0q2) - mx) + (_2bx * m_q1 + _2bz * m_q3) * (_2bx * (q1q2 - q0q3) + _2bz * (q0q1 + q2q3) - my) + (_2bx * m_q0 - _4bz * m_q2) * (_2bx * (q0q2 + q1q3) + _2bz * (0.5 - q1q1 - q2q2) - mz);
              s3 = _2q1 * (2.0 * q1q3 - _2q0q2 - ax) + _2q2 * (2.0 * q0q1 + _2q2q3 - ay) + (-_4bx * m_q3 + _2bz * m_q1) * (_2bx * (0.5 - q2q2 - q3q3) + _2bz * (q1q3 - q0q2) - mx) + (-_2bx * m_q0 + _2bz * m_q2) * (_2bx * (q1q2 - q0q3) + _2bz * (q0q1 + q2q3) - my) + _2bx * m_q1 * (_2bx * (q0q2 + q1q3) + _2bz * (0.5 - q1q1 - q2q2) - mz);
              recipNorm = invSqrt(s0 * s0 + s1 * s1 + s2 * s2 + s3 * s3); // normalise step magnitude
              s0 *= recipNorm;
              s1 *= recipNorm;
              s2 *= recipNorm;
              s3 *= recipNorm;

              // Apply feedback step
              qDot1 -= c_beta * s0;
              qDot2 -= c_beta * s1;
              qDot3 -= c_beta * s2;
              qDot4 -= c_beta * s3;
            }

            // Integrate rate of change of quaternion to yield quaternion
            m_q0 += qDot1 * deltaT;
            m_q1 += qDot2 * deltaT;
            m_q2 += qDot3 * deltaT;
            m_q3 += qDot4 * deltaT;

            // Normalise quaternion
            recipNorm = invSqrt(m_q0 * m_q0 + m_q1 * m_q1 + m_q2 * m_q2 + m_q3 * m_q3);
            m_q0 *= recipNorm;
            m_q1 *= recipNorm;
            m_q2 *= recipNorm;
            m_q3 *= recipNorm;
          }

          void
          update(double gx, double gy, double gz, double ax, double ay, double az, double deltaT)
          {
            double recipNorm;
            double s0, s1, s2, s3;
            double qDot1, qDot2, qDot3, qDot4;
            double _2q0, _2q1, _2q2, _2q3, _4q0, _4q1, _4q2 ,_8q1, _8q2, q0q0, q1q1, q2q2, q3q3;

            // Rate of change of quaternion from gyroscope
            qDot1 = 0.5 * (-m_q1 * gx - m_q2 * gy - m_q3 * gz);
            qDot2 = 0.5 * (m_q0 * gx + m_q2 * gz - m_q3 * gy);
            qDot3 = 0.5 * (m_q0 * gy - m_q1 * gz + m_q3 * gx);
            qDot4 = 0.5 * (m_q0 * gz + m_q1 * gy - m_q2 * gx);

            // Compute feedback only if accelerometer measurement valid (avoids NaN in accelerometer normalisation)
            if (!((ax == 0.0) && (ay == 0.0) && (az == 0.0)))
            {
              // Normalise accelerometer measurement
              recipNorm = invSqrt(ax * ax + ay * ay + az * az);
              ax *= recipNorm;
              ay *= recipNorm;
              az *= recipNorm;   

              // Auxiliary variables to avoid repeated arithmetic
              _2q0 = 2.0 * m_q0;
              _2q1 = 2.0 * m_q1;
              _2q2 = 2.0 * m_q2;
              _2q3 = 2.0 * m_q3;
              _4q0 = 4.0 * m_q0;
              _4q1 = 4.0 * m_q1;
              _4q2 = 4.0 * m_q2;
              _8q1 = 8.0 * m_q1;
              _8q2 = 8.0 * m_q2;
              q0q0 = m_q0 * m_q0;
              q1q1 = m_q1 * m_q1;
              q2q2 = m_q2 * m_q2;
              q3q3 = m_q3 * m_q3;

              // Gradient decent algorithm corrective step
              s0 = _4q0 * q2q2 + _2q2 * ax + _4q0 * q1q1 - _2q1 * ay;
              s1 = _4q1 * q3q3 - _2q3 * ax + 4.0 * q0q0 * m_q1 - _2q0 * ay - _4q1 + _8q1 * q1q1 + _8q1 * q2q2 + _4q1 * az;
              s2 = 4.0 * q0q0 * m_q2 + _2q0 * ax + _4q2 * q3q3 - _2q3 * ay - _4q2 + _8q2 * q1q1 + _8q2 * q2q2 + _4q2 * az;
              s3 = 4.0 * q1q1 * m_q3 - _2q1 * ax + 4.0 * q2q2 * m_q3 - _2q2 * ay;
              recipNorm = invSqrt(s0 * s0 + s1 * s1 + s2 * s2 + s3 * s3); // normalise step magnitude
              s0 *= recipNorm;
              s1 *= recipNorm;
              s2 *= recipNorm;
              s3 *= recipNorm;

              // Apply feedback step
              qDot1 -= c_beta * s0;
              qDot2 -= c_beta * s1;
              qDot3 -= c_beta * s2;
              qDot4 -= c_beta * s3;
            }

            // Integrate rate of change of quaternion to yield quaternion
            m_q0 += qDot1 * deltaT;
            m_q1 += qDot2 * deltaT;
            m_q2 += qDot3 * deltaT;
            m_q3 += qDot4 * deltaT;

            // Normalise quaternion
            recipNorm = invSqrt(m_q0 * m_q0 + m_q1 * m_q1 + m_q2 * m_q2 + m_q3 * m_q3);
            m_q0 *= recipNorm;
            m_q1 *= recipNorm;
            m_q2 *= recipNorm;
            m_q3 *= recipNorm;
          }

          double
          invSqrt(double x)
          {
            return 1/sqrt(x);
          }

          void
          step(void) override
          {
            if (!m_acc.new_data || !m_gyro.new_data || !m_mag.new_data)
              return;

            double now = Clock::getSinceEpoch();
            double deltaT = now - m_tstamp_last;
            m_tstamp_last = now;

            update(m_gyro.x, m_gyro.y, m_gyro.z, m_acc.x, m_acc.y, m_acc.z, m_mag.x, m_mag.y, m_mag.z, deltaT);

            double roll = std::atan2(m_q0*m_q1 + m_q2*m_q3, 0.5 - m_q1*m_q1 - m_q2*m_q2);
            double pitch = std::asin(-2.0 * (m_q1*m_q3 - m_q0*m_q2));
            double yaw = std::atan2(m_q1*m_q2 + m_q0*m_q3, 0.5 - m_q2*m_q2 - m_q3*m_q3);

            updateData(roll, pitch, yaw);
            dispatchData();

            m_acc.new_data = false;
            m_gyro.new_data = false;
            m_mag.new_data = false;
          }
        };
      }
    }
  }
}

DUNE_TASK
