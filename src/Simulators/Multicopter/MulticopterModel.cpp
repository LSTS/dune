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
// Author: Kristian Klausen                                                 *
//***************************************************************************

#include "MulticopterModel.hpp"

namespace Simulators
{
  namespace Multicopter
  {
    MulticopterModel::MulticopterModel(const MulticopterModelParameters& param):
      m_mass(param.mass),
      m_hover_throttle(param.hover_throttle),
      m_k(param.k),
      m_l(param.l),
      m_b(param.b),
      m_linear_actuator_dynamics(param.linear_actuator_dynamics),
      m_frame(param.frame),
      m_configuration(param.configuration),
      m_cog(param.cog),
      m_inertia(param.inertia),
      m_ldrag(param.ldrag),
      m_qdrag(param.qdrag)
    {
      // This does not change.
      m_matrix_mass = computeM();

      // Generate motors
      generateMotors(param.frame, param.configuration);

      // Calculate thrust scale
      // Must be run after generateMOtors, since it calculates m_n_motors.
      if (m_linear_actuator_dynamics)
      {
        m_thrust_scale = (m_mass * Math::c_gravity) / (m_n_motors * m_hover_throttle);
      }
      else
      {
        m_thrust_scale = (m_mass * Math::c_gravity) / (m_n_motors * m_hover_throttle * m_hover_throttle);
      }
    }

    MulticopterModel::~MulticopterModel()
    {
    }

    Matrix
    MulticopterModel::stepInv(const Matrix& servo_speed, const Matrix& nu, const Matrix& eta)
    {

      Matrix tau = computeTau(servo_speed);
      return inverse(m_matrix_mass) * (tau - computeC(nu) * nu - computeD(nu) * nu - computeG(eta));
    }

    //! Compute mass matrix
    Math::Matrix MulticopterModel::computeM(void)
    {
      Matrix cog = -skew(m_cog) * m_mass;
      Matrix Mrb = Matrix(3) * m_mass;
      Mrb.vertCat(-cog);
      Mrb.horzCat(cog.vertCat(m_inertia));
      return Mrb;
    }

    //! Computes linear damping matrix
    Math::Matrix
    MulticopterModel::computeD(const Math::Matrix& nu)
    {
      (void)nu;
      return m_ldrag;
    }

    //! Computes quadratic damping matrix
    Math::Matrix
    MulticopterModel::computeQ(const Math::Matrix& nu)
    {

      Math::Matrix nu_signsquare = Matrix(6, 1);
      for (int i = 0; i < 6; i++)
      {
        nu_signsquare(i) = abs(nu(i)) * nu(i);
      }

      return m_qdrag * nu_signsquare;
    }

    // Compute Gravity
    Math::Matrix
    MulticopterModel::computeG(const Math::Matrix& eta)
    {
      double phi = eta(3);
      double theta = eta(4);
      double W = m_mass * Math::c_gravity;
      double g[6] = { W * sin(theta), -W * cos(theta) * sin(phi), -W * cos(theta)
                                                                  * cos(phi),
                      -m_cog(1) * W * cos(theta) * cos(phi)
                      + m_cog(2) * W * cos(theta) * sin(phi),
                      m_cog(2) * W * sin(theta)
                      + m_cog(0) * W * cos(theta) * cos(phi),
                      -m_cog(0) * W * cos(theta)
                      * sin(phi) - m_cog(1) * W * sin(theta) };
      return Matrix(g, 6, 1);
    }

    // (3.56) i Fossen
    // Coreolis force matrix.
    Math::Matrix
    MulticopterModel::computeC(const Math::Matrix& nu)
    {
      Matrix skew_cog = skew(m_cog);
      Matrix skew_v1 = skew(nu.get(0, 2, 0, 0));
      Matrix skew_v2 = skew(nu.get(3, 5, 0, 0));
      Matrix crb(3, 3, 0.0);
      crb.vertCat(-m_mass * skew_v1 + m_mass * skew_cog * skew_v2);
      Matrix crb2 = -m_mass * skew_v1 - m_mass * skew_v2 * skew_cog;
      crb2.vertCat(-skew(m_inertia * nu.get(3, 5, 0, 0)));
      crb.horzCat(crb2);
      return crb;
    }

    void
    MulticopterModel::generateMotors(Frame frame,
                                     Configuration configuration)
    {
      if (frame == Frame_quad)
      {
        m_n_motors = 4;
        m_motors = (CopterMotor*)malloc(m_n_motors * sizeof(CopterMotor));

        m_motors[0] = CopterMotor(90, false, 1);
        m_motors[1] = CopterMotor(270, false, 2);
        m_motors[2] = CopterMotor(0, true, 3);
        m_motors[3] = CopterMotor(180, true, 4);

        if (configuration == Configuration_x)
        {
          for (int i = 0; i < 4; i++)
          {
            m_motors[i].angle -= 45.0;
          }
        }
      }
      else
      {
        // HEX
        m_n_motors = 6;
        m_motors = (CopterMotor*)malloc(m_n_motors * sizeof(CopterMotor));

        m_motors[0] = CopterMotor(0, true, 1);
        m_motors[1] = CopterMotor(180, false, 2);
        m_motors[2] = CopterMotor(240, true, 3);
        m_motors[3] = CopterMotor(60, false, 4);
        m_motors[4] = CopterMotor(300, false, 5); // 7
        m_motors[5] = CopterMotor(120, true, 6); // 8

        if (configuration == Configuration_x)
        {
          for (int i = 0; i < 6; i++)
          {
            m_motors[i].angle += 90;
          }
        }
      }
    }

    // Compute forces from motors
    Math::Matrix
    MulticopterModel::computeTau(const Math::Matrix& servo_speed)
    {

      double thrust = 0.0;

      if (servo_speed.rows() < (int)m_n_motors)
      {
        throw(Exception("Invalid servo matrix in multicopter:generateTau"));
        return Matrix(6, 1, 0.0);
      }

      for (unsigned int i = 0; i < m_n_motors; i++)
      {
        if (m_linear_actuator_dynamics)
        {

          // Positive thrust negative on NED upwards.
          thrust -= servo_speed(i) * m_thrust_scale;
        }
        else
        {
          thrust -= servo_speed(i) * servo_speed(i) * m_thrust_scale;
        }
      }

      Matrix F = Matrix(3, 1, 0.0);
      F(2) = thrust;

      double m[3] = { 0.0 };
      for (unsigned int i = 0; i < m_n_motors; i++)
      {
        // DID: Reversed yaw rate, switched sin and cos.

        if (m_linear_actuator_dynamics)
        {
          m[0] += m_k * m_l * -sin(Angles::radians(m_motors[i].angle)) * servo_speed(i);
          m[1] += m_k * m_l * cos(Angles::radians(m_motors[i].angle)) * servo_speed(i);
          if (m_motors[i].clockwise)
            m[2] -= m_b * servo_speed(i);
          else
            m[2] += m_b * servo_speed(i);
        }
        else
        {
          m[0] += m_k * m_l * -sin(Angles::radians(m_motors[i].angle)) * servo_speed(i) * servo_speed(i);
          m[1] += m_k * m_l * cos(Angles::radians(m_motors[i].angle)) * servo_speed(i) * servo_speed(i);
          if (m_motors[i].clockwise)
            m[2] -= m_b * servo_speed(i) * servo_speed(i);
          else
            m[2] += m_b * servo_speed(i) * servo_speed(i);
        }
      }

      Matrix M = Matrix(m, 3, 1);

      return F.vertCat(M);
    }
  }
}
