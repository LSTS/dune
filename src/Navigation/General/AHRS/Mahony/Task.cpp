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
// Implementation of Mahony's IMU and AHRS algorithms.                      *
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
      namespace Mahony
      {
        using DUNE_NAMESPACES;

        //! 2 * proportional gain (Kp).
        constexpr double c_twoKp = 2.0 * 0.5;
        //! 2 * integral gain (Ki).
        constexpr double c_twoKi = 2.0 * 0.0;

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
          //! Integral error terms scaled by Ki.
          double m_integralFBx, m_integralFBy, m_integralFBz;

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

            m_integralFBx = 0.0;
            m_integralFBy = 0.0;
            m_integralFBz = 0.0;

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
            float recipNorm;
            float q0q0, q0q1, q0q2, q0q3, q1q1, q1q2, q1q3, q2q2, q2q3, q3q3;  
            float hx, hy, bx, bz;
            float halfvx, halfvy, halfvz, halfwx, halfwy, halfwz;
            float halfex, halfey, halfez;
            float qa, qb, qc;

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
              hx = 2.0 * (mx * (0.5 - q2q2 - q3q3) + my * (q1q2 - q0q3) + mz * (q1q3 + q0q2));
              hy = 2.0 * (mx * (q1q2 + q0q3) + my * (0.5 - q1q1 - q3q3) + mz * (q2q3 - q0q1));
              bx = sqrt(hx * hx + hy * hy);
              bz = 2.0 * (mx * (q1q3 - q0q2) + my * (q2q3 + q0q1) + mz * (0.5 - q1q1 - q2q2));

              // Estimated direction of gravity and magnetic field
              halfvx = q1q3 - q0q2;
              halfvy = q0q1 + q2q3;
              halfvz = q0q0 - 0.5 + q3q3;
              halfwx = bx * (0.5 - q2q2 - q3q3) + bz * (q1q3 - q0q2);
              halfwy = bx * (q1q2 - q0q3) + bz * (q0q1 + q2q3);
              halfwz = bx * (q0q2 + q1q3) + bz * (0.5 - q1q1 - q2q2);  
            
              // Error is sum of cross product between estimated direction and measured direction of field vectors
              halfex = (ay * halfvz - az * halfvy) + (my * halfwz - mz * halfwy);
              halfey = (az * halfvx - ax * halfvz) + (mz * halfwx - mx * halfwz);
              halfez = (ax * halfvy - ay * halfvx) + (mx * halfwy - my * halfwx);

              // Compute and apply integral feedback if enabled
              if (c_twoKi > 0.0)
              {
                m_integralFBx += c_twoKi * halfex * deltaT;	// integral error scaled by Ki
                m_integralFBy += c_twoKi * halfey * deltaT;
                m_integralFBz += c_twoKi * halfez * deltaT;
                gx += m_integralFBx;	// apply integral feedback
                gy += m_integralFBy;
                gz += m_integralFBz;
              }
              else
              {
                m_integralFBx = 0.0;
                m_integralFBy = 0.0;
                m_integralFBz = 0.0;
              }

              // Apply proportional feedback
              gx += c_twoKp * halfex;
              gy += c_twoKp * halfey;
              gz += c_twoKp * halfez;
            }
            
            // Integrate rate of change of quaternion
            gx *= (0.5 * deltaT);		// pre-multiply common factors
            gy *= (0.5 * deltaT);
            gz *= (0.5 * deltaT);
            qa = m_q0;
            qb = m_q1;
            qc = m_q2;
            m_q0 += (-qb * gx - qc * gy - m_q3 * gz);
            m_q1 += (qa * gx + qc * gz - m_q3 * gy);
            m_q2 += (qa * gy - qb * gz + m_q3 * gx);
            m_q3 += (qa * gz + qb * gy - qc * gx); 
            
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
            float recipNorm;
            float halfvx, halfvy, halfvz;
            float halfex, halfey, halfez;
            float qa, qb, qc;

            // Compute feedback only if accelerometer measurement valid (avoids NaN in accelerometer normalisation)
            if (!((ax == 0.0) && (ay == 0.0) && (az == 0.0)))
            {
              // Normalise accelerometer measurement
              recipNorm = invSqrt(ax * ax + ay * ay + az * az);
              ax *= recipNorm;
              ay *= recipNorm;
              az *= recipNorm;        

              // Estimated direction of gravity and vector perpendicular to magnetic flux
              halfvx = m_q1 * m_q3 - m_q0 * m_q2;
              halfvy = m_q0 * m_q1 + m_q2 * m_q3;
              halfvz = m_q0 * m_q0 - 0.5 + m_q3 * m_q3;
            
              // Error is sum of cross product between estimated and measured direction of gravity
              halfex = (ay * halfvz - az * halfvy);
              halfey = (az * halfvx - ax * halfvz);
              halfez = (ax * halfvy - ay * halfvx);

              // Compute and apply integral feedback if enabled
              if (c_twoKi > 0.0)
              {
                m_integralFBx += c_twoKi * halfex * deltaT;	// integral error scaled by Ki
                m_integralFBy += c_twoKi * halfey * deltaT;
                m_integralFBz += c_twoKi * halfez * deltaT;
                gx += m_integralFBx;	// apply integral feedback
                gy += m_integralFBy;
                gz += m_integralFBz;
              }
              else
              {
                m_integralFBx = 0.0f;	// prevent integral windup
                m_integralFBy = 0.0f;
                m_integralFBz = 0.0f;
              }

              // Apply proportional feedback
              gx += c_twoKp * halfex;
              gy += c_twoKp * halfey;
              gz += c_twoKp * halfez;
            }
            
            // Integrate rate of change of quaternion
            gx *= (0.5 * deltaT);		// pre-multiply common factors
            gy *= (0.5 * deltaT);
            gz *= (0.5 * deltaT);
            qa = m_q0;
            qb = m_q1;
            qc = m_q2;
            m_q0 += (-qb * gx - qc * gy - m_q3 * gz);
            m_q1 += (qa * gx + qc * gz - m_q3 * gy);
            m_q2 += (qa * gy - qb * gz + m_q3 * gx);
            m_q3 += (qa * gz + qb * gy - qc * gx); 
            
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

            // if (m_mag.new_data)
            //   update(m_gyro.x, m_gyro.y, m_gyro.z, m_acc.x, m_acc.y, m_acc.z, m_mag.x, m_mag.y, m_mag.z, deltaT);
            // else
            //   update(m_gyro.x, m_gyro.y, m_gyro.z, m_acc.x, m_acc.y, m_acc.z, deltaT);

            update(m_gyro.x, m_gyro.y, m_gyro.z, m_acc.x, m_acc.y, m_acc.z, m_mag.x, m_mag.y, m_mag.z, deltaT);

            double roll = atan2f(m_q0*m_q1 + m_q2*m_q3, 0.5 - m_q1*m_q1 - m_q2*m_q2);
            double pitch = asinf(-2.0 * (m_q1*m_q3 - m_q0*m_q2));
            double yaw = atan2f(m_q1*m_q2 + m_q0*m_q3, 0.5 - m_q2*m_q2 - m_q3*m_q3);

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
