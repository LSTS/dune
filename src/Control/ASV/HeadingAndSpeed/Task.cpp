//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Gomes                                                    *
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <cassert>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace ASV
  {
    namespace HeadingAndSpeed
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        // Maximum Motor thrust.
        float max;
        // Maximum heading error to thrust.
        float max_yaw;
        // Proportional gain.
        float kp_yaw;
        float kp_u;
        // Integral gain.
        float ki_yaw;
        float ki_u;
        // Derivative gain.
        float kd_yaw;
        float kd_u;
        // Control logic for saturation.
        bool share;
      };

      struct Task: public Tasks::Task
      {
        // Integral error.
        float m_err_ki_yaw;
        float m_err_ki_u;
        // Derivative error.
        float m_err_kd_yaw;
        float m_err_kd_u;
        // Previous error.
        float m_prev_err_yaw;
        float m_prev_err_vel;
        // Desired heading.
        float m_desired_yaw;
        // Desired speed.
        float m_desired_speed;
        // Desired speed units.
        uint8_t m_speed_units;
        // Time of last estimated state message.
        Delta m_delta;
        // Motor Thrust.
        IMC::SetThrusterActuation m_motor[2];
        //! Control loops last reference
        uint32_t m_scope_ref;
        // Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_scope_ref(0)
        {
          param("Maximum Motor Command", m_args.max)
          .defaultValue("1.0")
          .description("Maximum Motor Command");

          // Heading control parameters.
          param("Heading Proportional Gain", m_args.kp_yaw)
          .defaultValue("20.0")
          .description("Heading Proportional Gain");

          param("Heading Integrative Gain", m_args.ki_yaw)
          .defaultValue("0.0")
          .description("Heading Integrative Gain");

          param("Heading Derivative Gain", m_args.kd_yaw)
          .defaultValue("0.0")
          .description("Heading Derivative Gain");

          // Velocity control parameters.
          param("Velocity Proportional Gain", m_args.kp_u)
          .defaultValue("20.0")
          .description("Velocity Proportional Gain");

          param("Velocity Integrative Gain", m_args.ki_u)
          .defaultValue("0.0")
          .description("Velocity Integrative Gain");

          param("Velocity Derivative Gain", m_args.kd_u)
          .defaultValue("0.0")
          .description("Velocity Derivative Gain");

          param("Maximum Heading Error to Thrust", m_args.max_yaw)
          .defaultValue("30.0")
          .description("Maximum admissable heading error to thrust");

          param("Share Saturation", m_args.share)
          .defaultValue("false")
          .description("Share saturation");

          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          // Register handler routines.
          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredHeading>(this);
          bind<IMC::DesiredSpeed>(this);
          bind<IMC::ControlLoops>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.max_yaw))
            m_args.max_yaw = Angles::radians(m_args.max_yaw);
        }

        //! On activation
        void
        onActivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        //! On deactivation
        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        reset(void)
        {
          m_err_ki_yaw = 0.0;
          m_prev_err_yaw = 0.0;
          m_prev_err_vel = 0.0;

          m_motor[0].id = 0;
          m_motor[1].id = 1;
          m_motor[0].value = 0.0;
          m_motor[1].value = 0.0;

          m_desired_speed = 0.0;
          dispatch(m_motor[0]);
          dispatch(m_motor[1]);
        }

        void
        onResourceInitialization(void)
        {
          reset();
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          if (!isActive())
          {
            m_desired_yaw = msg->psi;
            m_desired_speed = msg->u;
            return;
          }

          // Compute time delta.
          double tstep = m_delta.getDelta();

          // Check if we have a valid time delta.
          if (tstep < 0.0)
            return;

          // Reference errors.
          float err_yaw = Angles::normalizeRadian(m_desired_yaw - msg->psi);
          float err_vel = m_desired_speed - msg->u;

          // Common thrust increment
          float com_inc = 0;
          float thrust_com = 0;

          // Do not thrust forward if heading error is too large.
          if (std::fabs(err_yaw) < m_args.max_yaw)
          {
            // Velocity controller (PID)
            switch (m_speed_units)
            {
              case IMC::SUNITS_PERCENTAGE:
                thrust_com = (m_desired_speed / 100.0);
                break;
              case IMC::SUNITS_METERS_PS:
                m_err_kd_u = (err_vel - m_prev_err_vel) / tstep;
                m_err_ki_u += err_vel * tstep;
                m_prev_err_vel = err_vel;

                com_inc = m_args.kp_u * err_vel + m_args.kd_u * m_err_kd_u;
                thrust_com = com_inc + m_args.ki_u * m_err_ki_u;
                break;
              default:
                break;
            }

            // Saturation and anti-windup.
            saturationAntiWindup(com_inc, m_args.ki_u, &thrust_com, &m_err_ki_u);
          }

          // Heading controller.
          m_err_kd_yaw = (err_yaw - m_prev_err_yaw) / tstep;
          m_err_ki_yaw += err_yaw * tstep;
          m_prev_err_yaw = err_yaw;

          float diff_inc = m_args.kp_yaw * err_yaw + m_args.kd_yaw * m_err_kd_yaw;
          float thrust_diff = diff_inc + m_args.ki_yaw * m_err_ki_yaw;

          spew("parcels: %f | %f | %f", m_args.kp_yaw * err_yaw,
               m_args.kd_yaw * m_err_kd_yaw,
               m_args.ki_yaw * m_err_ki_yaw);

          // Saturation and anti-windup
          saturationAntiWindup(diff_inc, m_args.ki_yaw,
                               &thrust_diff, &m_err_ki_yaw);

          spew("common: %f | differential: %f", thrust_com, thrust_diff);

          m_motor[0].value = thrust_com + thrust_diff;
          m_motor[1].value = thrust_com - thrust_diff;

          // New control logic when saturation occurs
          if (m_args.share)
          {
            for (uint8_t i = 0; i < 2; i++)
            {
              if (m_motor[i].value > m_args.max)
              {
                float delta_motor = m_motor[i].value - m_args.max;
                m_motor[i].value = m_args.max;
                m_motor[(i + 1) % 2].value = m_motor[(i + 1) % 2].value - delta_motor;
              }
              else if (m_motor[i].value < -m_args.max)
              {
                float delta_motor = m_motor[i].value + m_args.max;
                m_motor[i].value = -m_args.max;
                m_motor[(i + 1) % 2].value = m_motor[(i + 1) % 2].value - delta_motor;
              }
            }
          }

          dispatch(m_motor[0]);
          dispatch(m_motor[1]);
        }

        void
        saturationAntiWindup(float thrust_inc, float ki_gain, float* thrust, float* err_integral)
        {
          // Saturation and anti-windup.
          if (*thrust > m_args.max)
          {
            *thrust = m_args.max;
            if (thrust_inc > m_args.max)
              *err_integral = 0;
            else
              *err_integral = (m_args.max - thrust_inc) / ki_gain;
          }
          else if (*thrust < -m_args.max)
          {
            *thrust = -m_args.max;
            if (thrust_inc < -m_args.max)
              *err_integral = 0;
            else
              *err_integral = (-m_args.max - thrust_inc) / ki_gain;
          }
        }

        void
        consume(const IMC::DesiredHeading* msg)
        {
          if (!isActive())
            return;

          m_desired_yaw = msg->value;
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          if (!isActive())
            return;

          m_desired_speed = msg->value;
          m_speed_units = msg->speed_units;
        }

        void
        consume(const IMC::ControlLoops* msg)
        {
          if (!(msg->mask & (IMC::CL_YAW | IMC::CL_SPEED)))
            return;

          if (msg->scope_ref < m_scope_ref)
            return;

          m_scope_ref = msg->scope_ref;

          if (msg->enable == isActive())
            return;

          if (msg->enable != 0)
            requestActivation();
          else
            requestDeactivation();

          inf(isActive() ? DTR("enabling") : DTR("disabling"));

          if (!isActive())
            reset();
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(1.0);
          }
        }
      };
    }
  }
}

DUNE_TASK
