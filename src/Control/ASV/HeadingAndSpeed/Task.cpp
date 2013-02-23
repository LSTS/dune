//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Gomes                                                    *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
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
        // Maximum Tcom and Tdiff.
        float max_motor;
        // Proportional gain.
        float kp_heading;
        float kp_velocity;
        // Integral gain.
        float ki_heading;
        float ki_velocity;
        // Derivative gain.
        float kd_heading;
        float kd_velocity;
        // Control logic for saturation.
        bool new_saturation;
      };

      struct Task: public Tasks::Task
      {
        // Integral error.
        float m_err_integral;
        float m_err_integralV;
        // Derivative error.
        float m_err_derivative;
        float m_err_derivativeV;
        // Previous error.
        float m_prev_err_heading;
        float m_prev_err_vel;
        // Desired heading.
        float m_dhead;
        // Desired speed.
        float m_dspeed;
        // Desired speed units.
        uint8_t m_speed_units;
        // Controller is active.
        bool m_active;
        // Differential Thrust.
        float m_thrust_diff;
        // Common Thrust.
        float m_thrust_com;
        // Time of last estimated state message.
        Delta m_last_estate;
        // Motor Thrust.
        IMC::SetThrusterActuation m_motor[2];
        // Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_active(false)
        {
          param("Maximum Motor Command", m_args.max_motor)
          .defaultValue("1.0")
          .description("Maximum Motor Command");

          // Heading control parameters.
          param("Heading Proportional Gain", m_args.kp_heading)
          .defaultValue("20.0")
          .description("Heading Proportional Gain");

          param("Heading Integrative Gain", m_args.ki_heading)
          .defaultValue("0.0")
          .description("Heading Integrative Gain");

          param("Heading Derivative Gain", m_args.kd_heading)
          .defaultValue("0.0")
          .description("Heading Derivative Gain");

          // Velocity control parameters.
          param("Velocity Proportional Gain", m_args.kp_velocity)
          .defaultValue("20.0")
          .description("Velocity Proportional Gain");

          param("Velocity Integrative Gain", m_args.ki_velocity)
          .defaultValue("0.0")
          .description("Velocity Integrative Gain");

          param("Velocity Derivative Gain", m_args.kd_velocity)
          .defaultValue("0.0")
          .description("Velocity Derivative Gain");

          param("New Saturation", m_args.new_saturation)
          .defaultValue("false")
          .description("New saturation");

          // Register handler routines.
          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredHeading>(this);
          bind<IMC::DesiredSpeed>(this);
          bind<IMC::ControlLoops>(this);
        }

        void
        reset(void)
        {
          m_err_integral = 0.0;
          m_prev_err_heading = 0.0;
          m_prev_err_vel = 0.0;

          m_motor[0].id = 0;
          m_motor[1].id = 1;
          m_motor[0].value = 0.0;
          m_motor[1].value = 0.0;

          m_dspeed = 0.0;
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
          if (!m_active)
          {
            m_dhead = msg->psi;
            m_dspeed = msg->u;
            return;
          }

          // Compute time delta.
          double delta_heading = m_last_estate.getDelta();

          // Check if we have a valid time delta.
          if (delta_heading < 0.0)
            return;

          // Heading error (Desired - Estimated)
          float err_heading = Angles::normalizeRadian(m_dhead - msg->psi);

          // Speed error (Desired - Estimated)
          float err_vel = m_dspeed - msg->u;

          // Common thrust increment
          float thrust_com_inc = 0;

          // Velocity controller (PID)
          switch (m_speed_units)
          {
            case IMC::SUNITS_PERCENTAGE:
              m_thrust_com = (m_dspeed / 100.0);
              break;
            case IMC::SUNITS_METERS_PS:
              m_err_derivativeV = (err_vel - m_prev_err_vel) / delta_heading;
              m_err_integralV += err_vel * delta_heading;
              m_prev_err_vel = err_vel;

              thrust_com_inc = m_args.kp_velocity * err_vel + m_args.kd_velocity * m_err_derivativeV;
              m_thrust_com = thrust_com_inc + m_args.ki_velocity * m_err_integralV;
              break;
            default:
              break;
          }

          // Saturation and anti-windup.
          saturationAntiWindup(thrust_com_inc, m_args.ki_velocity,
                               &m_thrust_com, &m_err_integralV);

          // Heading controller (PID)
          m_err_derivative = (err_heading - m_prev_err_heading) / delta_heading;
          m_err_integral += err_heading * delta_heading;
          m_prev_err_heading = err_heading;

          float thrust_diff_inc = m_args.kp_heading * err_heading + m_args.kd_heading * m_err_derivative;
          m_thrust_diff = thrust_diff_inc + m_args.ki_heading * m_err_integral;

          // Saturation and anti-windup
          saturationAntiWindup(thrust_diff_inc, m_args.ki_heading,
                               &m_thrust_diff, &m_err_integral);

          m_motor[0].value = m_thrust_com + m_thrust_diff;
          m_motor[1].value = m_thrust_com - m_thrust_diff;

          // New control logic when saturation occurs
          if (m_args.new_saturation)
          {
            if (m_motor[0].value > m_args.max_motor)
            {
              float delta_motor = m_motor[0].value - m_args.max_motor;
              m_motor[0].value = m_args.max_motor;
              m_motor[1].value = m_motor[1].value - delta_motor;
            }
            else if (m_motor[0].value < -m_args.max_motor)
            {
              float delta_motor = m_motor[0].value + m_args.max_motor;
              m_motor[0].value = -m_args.max_motor;
              m_motor[1].value = m_motor[1].value + delta_motor;
            }

            if (m_motor[1].value > m_args.max_motor)
            {
              float delta_motor = m_motor[1].value - m_args.max_motor;
              m_motor[1].value = m_args.max_motor;
              m_motor[0].value = m_motor[0].value - delta_motor;
            }
            else if (m_motor[1].value < -m_args.max_motor)
            {
              float delta_motor = m_motor[1].value + m_args.max_motor;
              m_motor[1].value = -m_args.max_motor;
              m_motor[0].value = m_motor[0].value + delta_motor;
            }
          }
          dispatch(m_motor[0]);
          dispatch(m_motor[1]);
        }

        void
        saturationAntiWindup(float thrust_inc, float ki_gain, float* thrust, float* err_integral)
        {
          // Saturation and anti-windup.
          if (*thrust > m_args.max_motor)
          {
            *thrust = m_args.max_motor;
            if (thrust_inc > m_args.max_motor)
              *err_integral = 0;
            else
              *err_integral = (m_args.max_motor - thrust_inc) / ki_gain;
          }
          else if (*thrust < -m_args.max_motor)
          {
            *thrust = -m_args.max_motor;
            if (thrust_inc < -m_args.max_motor)
              *err_integral = 0;
            else
              *err_integral = (-m_args.max_motor - thrust_inc) / ki_gain;
          }
        }

        void
        consume(const IMC::DesiredHeading* msg)
        {
          if (!m_active)
            return;
          m_dhead = msg->value;
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          if (!m_active)
            return;
          m_dspeed = msg->value;
          m_speed_units = msg->speed_units;
        }

        void
        consume(const IMC::ControlLoops* msg)
        {
          if (!(msg->mask & (IMC::CL_YAW | IMC::CL_SPEED)) || m_active == msg->enable)
            return;

          m_active = (msg->enable != 0);
          inf(m_active ? "enabling" : "disabling");

          if (!m_active)
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
