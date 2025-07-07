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

#ifndef SENSORS_MPU9250_QUATERNION_FILTER_HPP_INCLUDED_
#define SENSORS_MPU9250_QUATERNION_FILTER_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace MPU9250
  {
    enum class QuatFilterSel
    {
      NONE,
      MADGWICK,
      MAHONY,
    };

    class QuaternionFilter
    {
      float GyroMeasError = DUNE::Math::c_pi * (40.0f / 180.0f);
      float GyroMeasDrift = DUNE::Math::c_pi * (0.0f / 180.0f);
      float beta = sqrt(3.0f / 4.0f) * GyroMeasError;
      float zeta = sqrt(3.0f / 4.0f) * GyroMeasDrift;
      float Kp = 30.0;
      float Ki = 0.0;
      QuatFilterSel filter_sel{QuatFilterSel::MADGWICK};
      double deltaT{0.};
      uint32_t newTime{0}, oldTime{0};

    public:
      void
      select_filter(QuatFilterSel sel)
      {
        filter_sel = sel;
      }

      void
      update(float ax, float ay, float az, float gx, float gy, float gz, float mx, float my, float mz, float* q)
      {
        newTime = DUNE::Time::Clock::getSinceEpoch();
        deltaT = newTime - oldTime;
        oldTime = newTime;
        deltaT = fabs(deltaT * 0.001 * 0.001);

        switch (filter_sel)
        {
        case QuatFilterSel::MADGWICK:
          madgwick(ax, ay, az, gx, gy, gz, mx, my, mz, q);
          break;
        case QuatFilterSel::MAHONY:
          mahony(ax, ay, az, gx, gy, gz, mx, my, mz, q);
          break;
        default:
          no_filter(ax, ay, az, gx, gy, gz, mx, my, mz, q);
          break;
        }
      }

      void
      no_filter(float ax, float ay, float az, float gx, float gy, float gz, float mx, float my, float mz, float* q)
      {
        (void) ax;
        (void) ay;
        (void) az;
        (void) mx;
        (void) my;
        (void) mz;
        float q0 = q[0], q1 = q[1], q2 = q[2], q3 = q[3];
        q[0] += 0.5f * (-q1 * gx - q2 * gy - q3 * gz) * deltaT;
        q[1] += 0.5f * (q0 * gx + q2 * gz - q3 * gy) * deltaT;
        q[2] += 0.5f * (q0 * gy - q1 * gz + q3 * gx) * deltaT;
        q[3] += 0.5f * (q0 * gz + q1 * gy - q2 * gx) * deltaT;
        float recipNorm = 1.0 / sqrt(q[0] * q[0] + q[1] * q[1] + q[2] * q[2] + q[3] * q[3]);
        q[0] *= recipNorm;
        q[1] *= recipNorm;
        q[2] *= recipNorm;
        q[3] *= recipNorm;
      }

      void
      madgwick(float ax, float ay, float az, float gx, float gy, float gz, float mx, float my, float mz, float* q)
      {
        double q0 = q[0], q1 = q[1], q2 = q[2], q3 = q[3];
        double recipNorm;
        double s0, s1, s2, s3;
        double qDot1, qDot2, qDot3, qDot4;
        double hx, hy;
        double _2q0mx, _2q0my, _2q0mz, _2q1mx, _2bx, _2bz, _4bx, _4bz, _2q0, _2q1, _2q2, _2q3, _2q0q2, _2q2q3, q0q0, q0q1, q0q2, q0q3, q1q1, q1q2, q1q3, q2q2, q2q3, q3q3;
        qDot1 = 0.5f * (-q1 * gx - q2 * gy - q3 * gz);
        qDot2 = 0.5f * (q0 * gx + q2 * gz - q3 * gy);
        qDot3 = 0.5f * (q0 * gy - q1 * gz + q3 * gx);
        qDot4 = 0.5f * (q0 * gz + q1 * gy - q2 * gx);
        double a_norm = ax * ax + ay * ay + az * az;
        if (a_norm == 0.)
          return;
        recipNorm = 1.0 / sqrt(a_norm);
        ax *= recipNorm;
        ay *= recipNorm;
        az *= recipNorm;
        double m_norm = mx * mx + my * my + mz * mz;
        if (m_norm == 0.)
          return;
        recipNorm = 1.0 / sqrt(m_norm);
        mx *= recipNorm;
        my *= recipNorm;
        mz *= recipNorm;
        _2q0mx = 2.0f * q0 * mx;
        _2q0my = 2.0f * q0 * my;
        _2q0mz = 2.0f * q0 * mz;
        _2q1mx = 2.0f * q1 * mx;
        _2q0 = 2.0f * q0;
        _2q1 = 2.0f * q1;
        _2q2 = 2.0f * q2;
        _2q3 = 2.0f * q3;
        _2q0q2 = 2.0f * q0 * q2;
        _2q2q3 = 2.0f * q2 * q3;
        q0q0 = q0 * q0;
        q0q1 = q0 * q1;
        q0q2 = q0 * q2;
        q0q3 = q0 * q3;
        q1q1 = q1 * q1;
        q1q2 = q1 * q2;
        q1q3 = q1 * q3;
        q2q2 = q2 * q2;
        q2q3 = q2 * q3;
        q3q3 = q3 * q3;
        hx = mx * q0q0 - _2q0my * q3 + _2q0mz * q2 + mx * q1q1 + _2q1 * my * q2 + _2q1 * mz * q3 - mx * q2q2 - mx * q3q3;
        hy = _2q0mx * q3 + my * q0q0 - _2q0mz * q1 + _2q1mx * q2 - my * q1q1 + my * q2q2 + _2q2 * mz * q3 - my * q3q3;
        _2bx = sqrt(hx * hx + hy * hy);
        _2bz = -_2q0mx * q2 + _2q0my * q1 + mz * q0q0 + _2q1mx * q3 - mz * q1q1 + _2q2 * my * q3 - mz * q2q2 + mz * q3q3;
        _4bx = 2.0f * _2bx;
        _4bz = 2.0f * _2bz;
        s0 = -_2q2 * (2.0f * q1q3 - _2q0q2 - ax) + _2q1 * (2.0f * q0q1 + _2q2q3 - ay) - _2bz * q2 * (_2bx * (0.5f - q2q2 - q3q3) + _2bz * (q1q3 - q0q2) - mx) + (-_2bx * q3 + _2bz * q1) * (_2bx * (q1q2 - q0q3) + _2bz * (q0q1 + q2q3) - my) + _2bx * q2 * (_2bx * (q0q2 + q1q3) + _2bz * (0.5f - q1q1 - q2q2) - mz);
        s1 = _2q3 * (2.0f * q1q3 - _2q0q2 - ax) + _2q0 * (2.0f * q0q1 + _2q2q3 - ay) - 4.0f * q1 * (1 - 2.0f * q1q1 - 2.0f * q2q2 - az) + _2bz * q3 * (_2bx * (0.5f - q2q2 - q3q3) + _2bz * (q1q3 - q0q2) - mx) + (_2bx * q2 + _2bz * q0) * (_2bx * (q1q2 - q0q3) + _2bz * (q0q1 + q2q3) - my) + (_2bx * q3 - _4bz * q1) * (_2bx * (q0q2 + q1q3) + _2bz * (0.5f - q1q1 - q2q2) - mz);
        s2 = -_2q0 * (2.0f * q1q3 - _2q0q2 - ax) + _2q3 * (2.0f * q0q1 + _2q2q3 - ay) - 4.0f * q2 * (1 - 2.0f * q1q1 - 2.0f * q2q2 - az) + (-_4bx * q2 - _2bz * q0) * (_2bx * (0.5f - q2q2 - q3q3) + _2bz * (q1q3 - q0q2) - mx) + (_2bx * q1 + _2bz * q3) * (_2bx * (q1q2 - q0q3) + _2bz * (q0q1 + q2q3) - my) + (_2bx * q0 - _4bz * q2) * (_2bx * (q0q2 + q1q3) + _2bz * (0.5f - q1q1 - q2q2) - mz);
        s3 = _2q1 * (2.0f * q1q3 - _2q0q2 - ax) + _2q2 * (2.0f * q0q1 + _2q2q3 - ay) + (-_4bx * q3 + _2bz * q1) * (_2bx * (0.5f - q2q2 - q3q3) + _2bz * (q1q3 - q0q2) - mx) + (-_2bx * q0 + _2bz * q2) * (_2bx * (q1q2 - q0q3) + _2bz * (q0q1 + q2q3) - my) + _2bx * q1 * (_2bx * (q0q2 + q1q3) + _2bz * (0.5f - q1q1 - q2q2) - mz);
        recipNorm = 1.0 / sqrt(s0 * s0 + s1 * s1 + s2 * s2 + s3 * s3);
        s0 *= recipNorm;
        s1 *= recipNorm;
        s2 *= recipNorm;
        s3 *= recipNorm;
        qDot1 -= beta * s0;
        qDot2 -= beta * s1;
        qDot3 -= beta * s2;
        qDot4 -= beta * s3;
        q0 += qDot1 * deltaT;
        q1 += qDot2 * deltaT;
        q2 += qDot3 * deltaT;
        q3 += qDot4 * deltaT;
        recipNorm = 1.0 / sqrt(q0 * q0 + q1 * q1 + q2 * q2 + q3 * q3);
        q0 *= recipNorm;
        q1 *= recipNorm;
        q2 *= recipNorm;
        q3 *= recipNorm;
        q[0] = q0;
        q[1] = q1;
        q[2] = q2;
        q[3] = q3;
      }
        
      void
      mahony(float ax, float ay, float az, float gx, float gy, float gz, float mx, float my, float mz, float* q)
      {
        (void) mx;
        (void) my;
        (void) mz;
        float recipNorm;
        float vx, vy, vz;
        float ex, ey, ez;
        float qa, qb, qc;
        static float ix = 0.0, iy = 0.0, iz = 0.0;
        float tmp;
        tmp = ax * ax + ay * ay + az * az;
        if (tmp > 0.0)
        {
          recipNorm = 1.0 / sqrt(tmp);
          ax *= recipNorm;
          ay *= recipNorm;
          az *= recipNorm;
          vx = q[1] * q[3] - q[0] * q[2];
          vy = q[0] * q[1] + q[2] * q[3];
          vz = q[0] * q[0] - 0.5f + q[3] * q[3];
          ex = (ay * vz - az * vy);
          ey = (az * vx - ax * vz);
          ez = (ax * vy - ay * vx);
          if (Ki > 0.0f)
          {
            ix += Ki * ex * deltaT;
            iy += Ki * ey * deltaT;
            iz += Ki * ez * deltaT;
            gx += ix;
            gy += iy;
            gz += iz;
          }

          gx += Kp * ex;
          gy += Kp * ey;
          gz += Kp * ez;
        }

        deltaT = 0.5 * deltaT;
        gx *= deltaT;
        gy *= deltaT;
        gz *= deltaT;
        qa = q[0];
        qb = q[1];
        qc = q[2];
        q[0] += (-qb * gx - qc * gy - q[3] * gz);
        q[1] += (qa * gx + qc * gz - q[3] * gy);
        q[2] += (qa * gy - qb * gz + q[3] * gx);
        q[3] += (qa * gz + qb * gy - qc * gx);
        recipNorm = 1.0 / sqrt(q[0] * q[0] + q[1] * q[1] + q[2] * q[2] + q[3] * q[3]);
        q[0] = q[0] * recipNorm;
        q[1] = q[1] * recipNorm;
        q[2] = q[2] * recipNorm;
        q[3] = q[3] * recipNorm;
      }
    };
  }
}

#endif
