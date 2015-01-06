//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <iostream>
#include <cstdio>

// VSIM headers.
#include <VSIM/Object.hpp>
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace VSIM
  {
    Object::Object(void)
    {
      std::memset(m_inertia, 0, sizeof(m_inertia));
      std::memset(m_linear_drag_coef, 0, sizeof(m_linear_drag_coef));
      std::memset(m_quad_drag_coef, 0, sizeof(m_quad_drag_coef));
      std::memset(m_linear_velocity, 0, sizeof(m_linear_velocity));
      std::memset(m_angular_velocity, 0, sizeof(m_angular_velocity));

      for (unsigned i = 0; i < 3; ++i)
      {
        m_position[i] = 0;
        m_orientation[i] = 0;
        m_linear_velocity[i] = 0;
        m_angular_velocity[i] = 0;
        m_forces[i] = 0;
        m_forces[i + 3] = 0;
      }

      m_body_id = 0;
      m_mass = 0;
    }

    void
    Object::setMassProp(double m, double inertia[6])
    {
      for (unsigned i = 0; i < 6; ++i)
        m_inertia[i] = inertia[i];

      m_mass = m;
    }

    void
    Object::setLinearDragCoef(double coefs[10])
    {
      std::memcpy(m_linear_drag_coef, coefs, sizeof(double) * 10);
    }

    void
    Object::setQuadraticDragCoef(double coefs[10])
    {
      std::memcpy(m_quad_drag_coef, coefs, sizeof(double) * 10);
    }

    void
    Object::setPosition(double x, double y, double z)
    {
      m_position[0] = x;
      m_position[1] = y;
      m_position[2] = z;
    }

    void
    Object::setOrientation(double roll, double pitch, double yaw)
    {
      m_orientation[0] = roll;
      m_orientation[1] = pitch;
      m_orientation[2] = yaw;
    }

    void
    Object::insertInWorld(void)
    {
      m_body_id = 0;
      setOrientation(m_orientation[0], m_orientation[1], m_orientation[2]);
      setPosition(m_position[0], m_position[1], m_position[2]);
    }

    void
    Object::applyDragForces(void)
    {
      double xf = m_linear_drag_coef[0] * m_linear_velocity[0];
      double yf = (m_linear_drag_coef[1] * m_linear_velocity[1] +
                   m_linear_drag_coef[6] * m_angular_velocity[2]);
      double zf = (m_linear_drag_coef[2] * m_linear_velocity[2] +
                   m_linear_drag_coef[7] * m_angular_velocity[1]);

      double pf = m_linear_drag_coef[3] * m_angular_velocity[0];
      double qf = (m_linear_drag_coef[4] * m_angular_velocity[1] +
                   m_linear_drag_coef[8] * m_linear_velocity[2]);
      double rf = (m_linear_drag_coef[5] * m_angular_velocity[2] +
                   m_linear_drag_coef[9] * m_linear_velocity[1]);

      addForces(xf, yf, zf, pf, qf, rf);

      xf = m_quad_drag_coef[0] * m_linear_velocity[0] * std::fabs(m_linear_velocity[0]);
      yf = (m_quad_drag_coef[1] * m_linear_velocity[1] * std::fabs(m_linear_velocity[1]) +
            m_quad_drag_coef[6] * m_angular_velocity[2] * std::fabs(m_angular_velocity[2]));
      zf = (m_quad_drag_coef[2] * m_linear_velocity[2] * std::fabs(m_linear_velocity[2]) +
            m_quad_drag_coef[7] * m_angular_velocity[1] * std::fabs(m_angular_velocity[1]));

      pf = m_quad_drag_coef[3] * m_angular_velocity[0] * std::fabs(m_angular_velocity[0]);
      qf = (m_quad_drag_coef[4] * m_angular_velocity[1] * std::fabs(m_angular_velocity[1]) +
            m_quad_drag_coef[8] * m_linear_velocity[2] * std::fabs(m_linear_velocity[2]));
      rf = (m_quad_drag_coef[5] * m_angular_velocity[2] * std::fabs(m_angular_velocity[2]) +
            m_quad_drag_coef[9] * m_linear_velocity[1] * std::fabs(m_linear_velocity[1]));

      addForces(xf, yf, zf, pf, qf, rf);
    }

    void
    Object::applyForces(void)
    {
      applyDragForces();
    }

    void
    Object::addForces(double X, double Y, double Z, double P, double Q, double R)
    {
      m_forces[0] = m_forces[0] + X;
      m_forces[1] = m_forces[1] + Y;
      m_forces[2] = m_forces[2] + Z;
      m_forces[3] = m_forces[3] + P;
      m_forces[4] = m_forces[4] + Q;
      m_forces[5] = m_forces[5] + R;
    }

    void
    Object::resetForces(void)
    {
      for (unsigned i = 0; i < 6; i++)
        m_forces[i] = 0.0;
    }

    void
    Object::update(double ts)
    {
      // Initialize variables.
      double c1 = std::cos(m_orientation[0]);
      double c2 = std::cos(m_orientation[1]);
      double c3 = std::cos(m_orientation[2]);

      double s1 = std::sin(m_orientation[0]);
      double s2 = std::sin(m_orientation[1]);
      double s3 = std::sin(m_orientation[2]);

      double t2 = std::tan(m_orientation[1]);

      double u = m_linear_velocity[0];
      double v = m_linear_velocity[1];
      double w = m_linear_velocity[2];
      double p = m_angular_velocity[0];
      double q = m_angular_velocity[1];
      double r = m_angular_velocity[2];

      double d_pos[6];
      double d_vel[6];

      // Accelerations.
      for (unsigned i = 0; i < 6; ++i)
        d_vel[i] = m_forces[i] / m_inertia[i];

      // Reset forces to zero.
      resetForces();

      // Compute Velocities
      // Transformation Matrix: eta1dot = J1(eta2)*nu1
      //    J1=[ c3*c2   c3*s2*s1-s3*c1  s3*s1+c3*c1*s2
      //         s3*c2   c1*c3+s1*s2*s3  c1*s2*s3-c3*s1
      //          -s2        c2*s1           c1*c2     ];
      d_pos[0] = (c3 * c2) * u + (c3 * s2 * s1 - s3 * c1) * v + (s3 * s1 + c3 * c1 * s2) * w;
      d_pos[1] = (s3 * c2) * u + (c1 * c3 + s1 * s2 * s3) * v + (c1 * s2 * s3 - c3 * s1) * w;
      d_pos[2] = (-s2) * u + (c2 * s1) * v + (c1 * c2) * w;

      // Transformation Matrix: eta2dot = J1(eta2)*nu2
      //   J2=[ 1   s1*t2   c1*t2
      //        0    c1      -s1
      //        0   s1/c2   c1/c2 ];
      d_pos[3] = p + (s1 * t2) * q + (c1 * t2) * r;
      d_pos[4] = c1 * q + (-s1) * r;
      d_pos[5] = (s1 / c2) * q + (c1 / c2) * r;

      // Integrate using Euler's method.
      for (unsigned i = 0; i < 3; i++)
      {
        m_position[i] += d_pos[i] * ts;
        m_orientation[i] += Angles::minSignedAngle(m_orientation[i],
                                                   m_orientation[i] + d_pos[i + 3] * ts);

        if (m_integration_method)
        {
          m_linear_velocity[i] += d_vel[i] * ts;
          m_angular_velocity[i] = m_angular_velocity[i] + d_vel[i + 3] * ts;
        }
        else
        {
          // ASV integration.
          m_linear_velocity[i] = d_vel[i];
          m_angular_velocity[i] = d_vel[i + 3];
        }
      }
    }
  }
}
