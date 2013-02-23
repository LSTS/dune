//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Renato Caldas                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace AUV
  {
    namespace Allocator
    {
      using DUNE_NAMESPACES;

      //! Number of fins.
      static const int c_fins = 4;

      struct Arguments
      {
        //! Maximum fin rotation.
        float max_fin_rot;
        //! Angle to torque conversion factor (Nm/rad).
        float conv[3];
        //! When braking, position fins in a pitching up position.
        bool brake_pitch;
        //! ServoPosition label
        std::string spos_label;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Fin commands.
        IMC::SetServoPosition m_fins[c_fins];
        //! Allocated torques feedback message.
        IMC::AllocatedControlTorques m_allocated;
        //! Braking
        bool m_braking;
        //! Entity id for the servo position messages
        unsigned m_spos_ent;
        //! Servo positions
        float m_servo_pos[c_fins];
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_braking(false)
        {
          param(DTR_RT("Maximum Fin Rotation"), m_args.max_fin_rot)
          .defaultValue("25.0")
          .units(Units::Degree)
          .description(DTR("Maximum admissible fin rotation"));

          param("Fin effect K", m_args.conv[0])
          .defaultValue("0.25")
          .units(Units::NewtonMeterPerRadian)
          .description("Fin effect K");

          param("Fin effect M", m_args.conv[1])
          .defaultValue("0.5")
          .units(Units::NewtonMeterPerRadian)
          .description("Fin effect M");

          param("Fin effect N", m_args.conv[2])
          .defaultValue("0.5")
          .units(Units::NewtonMeterPerRadian)
          .description("Fin effect N");

          param("Pitch Up Brake", m_args.brake_pitch)
          .defaultValue("false")
          .description("When braking, position fins in a pitching up position");

          param("Entity Label - Servo Position", m_args.spos_label)
          .defaultValue("")
          .description("Label of the servo position message to compute produced torque");

          // Initialize main entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          // Register handler routines.
          bind<IMC::Brake>(this);
          bind<IMC::DesiredControl>(this);
          bind<IMC::ControlLoops>(this);
          bind<IMC::ServoPosition>(this);
        }

        void
        onUpdateParameters(void)
        {
          m_args.max_fin_rot = Angles::radians(m_args.max_fin_rot);
        }

        void
        reset(void)
        {
          m_braking = false;
          deactivate();
        }

        void
        onResourceInitialization(void)
        {
          reset();

          // Initialize fin commands.
          for (int i = 0; i < c_fins; i++)
          {
            m_fins[i].id = i;
            m_servo_pos[i] = 0.0;
          }
        }

        //! Resolve entities for messages
        void
        onEntityResolution(void)
        {
          try
          {
            m_spos_ent = resolveEntity(m_args.spos_label);
          }
          catch (...)
          {
            m_spos_ent = 0;
          }
        }

        void
        consume(const IMC::Brake* msg)
        {
          if (msg->op == IMC::Brake::OP_START)
          {
            m_braking = true;
            brake();
          }
          else
          {
            m_braking = false;
          }
        }

        void
        consume(const IMC::ServoPosition* msg)
        {
          if (msg->getSourceEntity() == m_spos_ent)
          {
            m_servo_pos[msg->id] = msg->value;

            // assumes messages come in the ordered by id even though they may not
            // will not make much difference
            if (msg->id == 3)
              computeProducedTorque();
          }
        }

        void
        consume(const IMC::DesiredControl* msg)
        {
          if (!isActive())
            return;

          if (m_braking)
            brake();

          uint8_t allocator_flags = IMC::DesiredControl::FL_K | IMC::DesiredControl::FL_M | IMC::DesiredControl::FL_N;

          if ((msg->flags & allocator_flags) == allocator_flags)
            allocate(msg->k, msg->m, msg->n);
        }

        void
        consume(const IMC::ControlLoops* msg)
        {
          if (!(msg->mask & IMC::CL_TORQUE) || msg->enable == isActive())
            return;

          if (msg->enable)
            activate();
          else
            reset();

          debug("%s", isActive() ? "enabling" : "disabling");

          allocate(0, 0, 0);
        }

        //! Allocate desired control torques on the fins
        //! @param[in] k desired control torque in roll
        //! @param[in] m desired control torque in pitch
        //! @param[in] n desired control torque in yaw
        void
        allocate(float k, float m, float n)
        {
          float ang;
          float roll_margin_vfins;
          float roll_margin_hfins;

          // Allocate N
          ang = (n / m_args.conv[2]) * 0.5;
          if (ang > m_args.max_fin_rot)
          {
            ang = m_args.max_fin_rot;
            roll_margin_vfins = 0;
          }
          else if (ang < -m_args.max_fin_rot)
          {
            ang = -m_args.max_fin_rot;
            roll_margin_vfins = 0;
          }
          else
          {
            // Calculate the control margins for roll on the N fins
            roll_margin_vfins = m_args.max_fin_rot - std::abs(ang);
          }

          m_fins[0].value = -ang;
          m_fins[3].value = -ang;
          m_allocated.n = ang * m_args.conv[2] * 2.0;

          // Allocate M
          ang = (m / m_args.conv[1]) * 0.5;
          if (ang > m_args.max_fin_rot)
          {
            ang = m_args.max_fin_rot;
            roll_margin_hfins = 0;
          }
          else if (ang < -m_args.max_fin_rot)
          {
            ang = -m_args.max_fin_rot;
            roll_margin_hfins = 0;
          }
          else
          {
            // Calculate the control margins for roll on the N fins
            roll_margin_hfins = m_args.max_fin_rot - std::abs(ang);
          }

          m_fins[1].value = -ang;
          m_fins[2].value = -ang;
          m_allocated.m = ang * m_args.conv[1] * 2.0;

          // Allocate K
          // Attempt to distribute evenly by the four fins
          ang = (k / m_args.conv[0]) / c_fins;

          // Determine the maximum angle for even distribution
          if (ang > roll_margin_hfins)
            ang = roll_margin_hfins;
          if (ang < -roll_margin_hfins)
            ang = -roll_margin_hfins;
          if (ang > roll_margin_vfins)
            ang = roll_margin_vfins;
          if (ang < -roll_margin_vfins)
            ang = -roll_margin_vfins;

          m_fins[1].value += ang;
          m_fins[2].value -= ang;
          m_fins[0].value -= ang;
          m_fins[3].value += ang;

          // Remove the used up margin from the avaliable margins
          roll_margin_hfins -= std::abs(ang);
          roll_margin_vfins -= std::abs(ang);
          m_allocated.k = ang * m_args.conv[0] * c_fins;

          // Check where to place the remaining roll torque
          ang = ((k - m_allocated.k) / m_args.conv[0]) * 0.5;
          if (roll_margin_hfins > 0)
          {
            if (ang > roll_margin_hfins)
              ang = roll_margin_hfins;
            if (ang < -roll_margin_hfins)
              ang = -roll_margin_hfins;

            m_fins[1].value += ang;
            m_fins[2].value -= ang;
            m_allocated.k += ang * m_args.conv[0] * 2.0;
          }
          else if (roll_margin_vfins > 0)
          {
            if (ang > roll_margin_vfins)
              ang = roll_margin_vfins;
            if (ang < -roll_margin_vfins)
              ang = -roll_margin_vfins;

            m_fins[0].value -= ang;
            m_fins[3].value += ang;
            m_allocated.k += ang * m_args.conv[0] * 2.0;
          }

          for (int i = 0; i < c_fins; i++)
            dispatch(m_fins[i]);

          dispatch(m_allocated);
        }

        // Position the fins in a braking position (neutral or pitching up)
        void
        brake(void)
        {
          if (m_args.brake_pitch)
          {
            m_fins[0].value = 0.0;
            m_fins[3].value = 0.0;

            m_fins[1].value = -m_args.max_fin_rot;
            m_fins[2].value = -m_args.max_fin_rot;
          }
          else
          {
            m_fins[0].value = m_args.max_fin_rot;
            m_fins[3].value = -m_args.max_fin_rot;

            m_fins[1].value = -m_args.max_fin_rot;
            m_fins[2].value = m_args.max_fin_rot;
          }

          for (int i = 0; i < c_fins; i++)
            dispatch(m_fins[i]);
        }

        //! Compute actually produced torque
        void
        computeProducedTorque(void)
        {
          IMC::ControlParcel produced_torque;
          produced_torque.d = - (m_servo_pos[0] + m_servo_pos[3]) / 2.0;
          produced_torque.i = - (m_servo_pos[1] + m_servo_pos[2]) / 2.0;
          produced_torque.p = ((m_servo_pos[3] - m_servo_pos[0]) +
                               (m_servo_pos[1] - m_servo_pos[2])) / 4.0;

          dispatch(produced_torque);
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
