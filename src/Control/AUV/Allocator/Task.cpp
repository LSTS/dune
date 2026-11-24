//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Renato Caldas                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "WeightedLeastSquares.hpp"

#define RPM_AVG_SIZE 15

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
        //! Percentage of fin margin to use for braking
        float brake_margin;
        //! Pitch up when braking
        bool pitch_brake;
        //! Maximum rotation rate of the servos
        double max_fin_rate;
        //! ServoPosition label
        std::string spos_label;
        //! Fins effect velocity dependent
        bool velocity_dependent;
        //! Fins effect velocity dependent
        std::string velocity_dependent_unit;
        //! minimum RPM value
        double rpm_minimum;
        //! Minimum Meter Per Second value
        double ms_minimum;
        //! Max RPM value
        double max_rpm;
        //! Max Meter Per Second value
        double max_ms;
        //! K pitch 
        double k_pitch;
        //!  K roll
        double k_roll;
        //!  K yaw
        double k_yaw;
        //!  
        bool roll_not_velocity_dependent;
        //! Allocation method.
        std::string method;
        //! Weights of the torque errors (K, M, N) in the weighted least
        //! squares allocation, per unit of each axis' torque range.
        std::vector<double> wls_weights;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Fin commands.
        IMC::SetServoPosition m_fins[c_fins];
        //! Fin last commands.
        IMC::SetServoPosition m_last[c_fins];
        //! Allocated torques feedback message.
        IMC::AllocatedControlTorques m_allocated;
        //! Last lats EstimatedState
        IMC::EstimatedState * m_last_estimated_state;
        //! Last lats Rpm
        IMC::Rpm * m_last_rpm;
        //! Braking
        bool m_braking;
        //! Entity id for the servo position messages
        unsigned m_spos_ent;
        //! Servo positions
        float m_servo_pos[c_fins];
        //! Control loops last reference
        uint32_t m_scope_ref;
        //! Time Delta
        Time::Delta m_delta;
        //! Task arguments.
        Arguments m_args;
        Math::MovingAverage<double>* m_avg_rpm; 

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_last_estimated_state(NULL),
          m_last_rpm(NULL),
          m_braking(false),
          m_scope_ref(0)
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

          param("Fin effect Velocity dependent", m_args.velocity_dependent)
          .defaultValue("false")
          .description("Fin effect Velocity dependent");

          param("Fin effect Velocity dependent unit", m_args.velocity_dependent_unit)
          .defaultValue("RPM")
          .values("RPM, MeterPerSecond")
          .description("Speed that scales the fin effect: averaged rpm / 1000, or the"
                       " surge speed of the estimated state (m/s)");

          param("Fin effect Rpm minimum value", m_args.rpm_minimum)
          .defaultValue("200")
          .units(Units::RPM)
          .description("Fin effect Rpm Minimum value");

          param("Fin effect minimum Meter Per Second value", m_args.ms_minimum)
          .defaultValue("0.2")
          .units(Units::MeterPerSecond)
          .description("Fin effect Meter Per Second minimum value");

          param("Fin effect maximum Meter Per Second value", m_args.max_ms)
          .defaultValue("2.0")
          .units(Units::MeterPerSecond)
          .description("Surge speed above which the fin effect stops growing. Set it to"
                       " the fastest speed the propeller can drive the vehicle");

          param("Pitch Up Brake", m_args.pitch_brake)
          .defaultValue("false")
          .description("Pitch up when braking");

          param("Brake Margin", m_args.brake_margin)
          .defaultValue("1.0")
          .minimumValue("0.0")
          .maximumValue("1.0")
          .description("Percentage of fin margin to use for braking");

          param("Maximum Rotation Rate", m_args.max_fin_rate)
          .defaultValue("333.3")
          .units(Units::DegreePerSecond)
          .description("Maximum rotation rate allowed by the servo");

          param("k roll", m_args.k_roll)
          .defaultValue("1.0")
          .minimumValue("0.0")
          .description("Square of the speed, in the velocity dependent unit, at which"
                       " the roll fin effect equals its Fin effect value");

          param("k pitch", m_args.k_pitch)
          .defaultValue("1.0")
          .minimumValue("0.0")
          .description("Square of the speed, in the velocity dependent unit, at which"
                       " the pitch fin effect equals its Fin effect value");

          param("k yaw", m_args.k_yaw)
          .defaultValue("1.0")
          .minimumValue("0.0")
          .description("Square of the speed, in the velocity dependent unit, at which"
                       " the yaw fin effect equals its Fin effect value");

          param("Roll not velocity dependent", m_args.roll_not_velocity_dependent)
          .defaultValue("false")
          .description("Roll not velocity dependent");

          param("Allocation Method", m_args.method)
          .defaultValue("Daisy Chain")
          .values("Daisy Chain, Weighted Least Squares")
          .description("Daisy Chain: yaw on the vertical fins, pitch on the horizontal"
                       " fins, roll on the margin left. Weighted Least Squares: the fin"
                       " angles that minimise the weighted torque error within the fin"
                       " angle and rate limits");

          param("Weighted Least Squares -- Torque Weights", m_args.wls_weights)
          .defaultValue("1.0, 1.0, 1.0")
          .size(3)
          .description("Weights of the roll, pitch and yaw torque errors, per unit of"
                       " each axis' torque range. Used when the fins cannot deliver"
                       " every torque");

          param("Entity Label - Servo Position", m_args.spos_label)
          .defaultValue("")
          .description("Label of the servo position message to compute produced torque");
          m_ctx.config.get("General", "Maximum Underwater RPMs", "1700.0", m_args.max_rpm);

          // Initialize main entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          m_avg_rpm = new Math::MovingAverage<double>(10);
          // Register handler routines.
          bind<IMC::Brake>(this);
          bind<IMC::DesiredControl>(this);
          bind<IMC::ControlLoops>(this);
          bind<IMC::ServoPosition>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::Rpm>(this);

        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.max_fin_rot))
            m_args.max_fin_rot = Angles::radians(m_args.max_fin_rot);

          if (paramChanged(m_args.max_fin_rate))
            m_args.max_fin_rate = Angles::radians(m_args.max_fin_rate);
        }

        void
        onActivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        reset(void)
        {
          m_braking = false;
          requestDeactivation();
        }
        //! Release resources.
        void
        onResourceRelease(void)
        {
            Memory::clear(m_last_estimated_state);
            Memory::clear(m_last_rpm);
            Memory::clear(m_avg_rpm);
          
        }
        void
        onResourceInitialization(void)
        {
          reset();

          // Initialize fin commands.
          for (int i = 0; i < c_fins; i++)
          {
            m_fins[i].id = i;
            m_last[i].id = i;
            m_servo_pos[i] = 0.0;
          }
          m_avg_rpm = new Math::MovingAverage<double>(RPM_AVG_SIZE);

          for (int i = 0; i < RPM_AVG_SIZE; i++)
          {
            m_avg_rpm->update(m_args.rpm_minimum/1000);
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

            if (m_args.pitch_brake)
              brakePitch();
            else
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
          {
            if((msg->flags & IMC::DesiredControl::FL_K) &&
               (msg->flags & IMC::DesiredControl::FL_M))
            {
              if (m_args.pitch_brake)
                brakePitch();
              else if (m_args.brake_margin >= 1.0f)
                brake();
              else
                brake(msg->k, msg->m);
            }

            return;
          }

          uint8_t allocator_flags = IMC::DesiredControl::FL_K | IMC::DesiredControl::FL_M | IMC::DesiredControl::FL_N;

          if ((msg->flags & allocator_flags) == allocator_flags)
            allocate(msg->k, msg->m, msg->n);
        }

        void
        consume(const IMC::ControlLoops* msg)
        {
          if (!(msg->mask & IMC::CL_TORQUE))
            return;

          if (msg->scope_ref < m_scope_ref)
            return;

          m_scope_ref = msg->scope_ref;

          if (msg->enable == isActive())
            return;

          if (msg->enable)
            requestActivation();
          else
            reset();

          debug("%s", isActive() ? "enabling" : "disabling");

          allocate(0, 0, 0);
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;
           Memory::clear(m_last_estimated_state);
           m_last_estimated_state =static_cast<IMC::EstimatedState*>(msg->clone());
        }

        void
        consume(const IMC::Rpm* msg)
        {
          if (msg->getSource() != getSystemId())
            return;
          Memory::clear(m_last_rpm);
          m_last_rpm = static_cast<IMC::Rpm*>(msg->clone());
        }

        //! Speed that scales the fin effect, within its minimum and maximum.
        //! @return averaged rpm / 1000, or the surge speed of the last
        //! estimated state (m/s), depending on the velocity dependent unit.
        double
        scalingSpeed(void)
        {
          if (m_args.velocity_dependent_unit == "RPM")
          {
            double rpm = m_args.rpm_minimum / 1000;

            if (m_last_rpm != NULL)
            {
              double rpm_m = (double)m_last_rpm->value;
              trimValueMod(rpm_m, m_args.rpm_minimum, m_args.max_rpm);
              m_avg_rpm->update(rpm_m / 1000);
              rpm = m_avg_rpm->mean();
            }

            return rpm;
          }

          if (m_last_estimated_state == NULL)
            return m_args.ms_minimum;

          return trimValue((double)m_last_estimated_state->u, m_args.ms_minimum, m_args.max_ms);
        }

        //! Torque per unit angle of one fin on one axis.
        //! @param[in] axis 0 roll, 1 pitch, 2 yaw.
        //! @param[in] s speed that scales the fin effect.
        double
        finEffect(int axis, double s) const
        {
          if (!m_args.velocity_dependent || (axis == 0 && m_args.roll_not_velocity_dependent))
            return m_args.conv[axis];

          double kv = (axis == 0) ? m_args.k_roll : ((axis == 1) ? m_args.k_pitch : m_args.k_yaw);
          return m_args.conv[axis] * s * s / kv;
        }

        //! Allocate desired control torques on the fins
        //! @param[in] k desired control torque in roll
        //! @param[in] m desired control torque in pitch
        //! @param[in] n desired control torque in yaw
        void
        allocate(float k, float m, float n)
        {
          const double s = scalingSpeed();
          double e[3];
          for (int i = 0; i < 3; ++i)
            e[i] = finEffect(i, s);

          if (m_args.method == "Weighted Least Squares")
          {
            allocateWeightedLeastSquares(k, m, n, e);
            return;
          }

          float ang;
          float roll_margin_vfins;
          float roll_margin_hfins;

          // Allocate N
          ang = (n / e[2]) * 0.5;

          if (trimValueMod(ang, -m_args.max_fin_rot, m_args.max_fin_rot))
            roll_margin_vfins = 0;
          else
            roll_margin_vfins = m_args.max_fin_rot - std::abs(ang);

          m_fins[0].value = -ang;
          m_fins[3].value = -ang;

          // Allocate M
          ang = (m / e[1]) * 0.5;

          if (trimValueMod(ang, -m_args.max_fin_rot, m_args.max_fin_rot))
            roll_margin_hfins = 0;
          else
            roll_margin_hfins = m_args.max_fin_rot - std::abs(ang);

          m_fins[1].value = -ang;
          m_fins[2].value = -ang;

          // Allocate K
          // Attempt to distribute evenly by the four fins
          ang = (k / e[0]) / c_fins;

          // Determine the maximum angle for even distribution
          ang = trimValue(ang, -roll_margin_hfins, roll_margin_hfins);
          ang = trimValue(ang, -roll_margin_vfins, roll_margin_vfins);

          m_fins[1].value += ang;
          m_fins[2].value -= ang;
          m_fins[0].value -= ang;
          m_fins[3].value += ang;

          // Remove the used up margin from the avaliable margins
          roll_margin_hfins -= std::abs(ang);
          roll_margin_vfins -= std::abs(ang);

          // Place the remaining roll torque on the pair with margin left
          float allocated_k = ang * e[0] * c_fins;
          ang = ((k - allocated_k) / e[0]) * 0.5;

          if (roll_margin_hfins > 0)
          {
            ang = trimValue(ang, -roll_margin_hfins, roll_margin_hfins);

            m_fins[1].value += ang;
            m_fins[2].value -= ang;
          }
          else if (roll_margin_vfins > 0)
          {
            ang = trimValue(ang, -roll_margin_vfins, roll_margin_vfins);

            m_fins[0].value -= ang;
            m_fins[3].value += ang;
          }

          dispatchAllocation(m_delta.getDelta(), e);
        }

        //! Allocate desired control torques by weighted least squares, within
        //! the fin angle and rate limits.
        //! @param[in] e torque per unit angle of one fin (K, M, N).
        void
        allocateWeightedLeastSquares(float k, float m, float n, const double e[3])
        {
          typedef WeightedLeastSquares WLS;
          const double b[WLS::c_torques][WLS::c_fins] = {{-e[0], e[0], -e[0], e[0]},
                                                         {0.0, -e[1], -e[1], 0.0},
                                                         {-e[2], 0.0, 0.0, -e[2]}};
          const double v[WLS::c_torques] = {k, m, n};

          double w[WLS::c_torques];
          for (int i = 0; i < WLS::c_torques; ++i)
          {
            double range = 0.0;
            for (int j = 0; j < WLS::c_fins; ++j)
              range += std::abs(b[i][j]) * m_args.max_fin_rot;
            w[i] = (range > 0.0) ? m_args.wls_weights[i] / range : 0.0;
          }

          double delta = m_delta.getDelta();
          double lo[WLS::c_fins];
          double hi[WLS::c_fins];
          for (int j = 0; j < WLS::c_fins; ++j)
          {
            lo[j] = -m_args.max_fin_rot;
            hi[j] = m_args.max_fin_rot;
            if (delta > 0)
            {
              double step = m_args.max_fin_rate * delta;
              lo[j] = std::max(lo[j], m_last[j].value - step);
              hi[j] = std::min(hi[j], m_last[j].value + step);
            }
          }

          double d[WLS::c_fins];
          WLS::solve(b, w, v, lo, hi, 1e-6, d);

          for (int j = 0; j < WLS::c_fins; ++j)
            m_fins[j].value = d[j];

          dispatchAllocation(delta, e);
        }

        //! Dispatch the fin commands and the torques they deliver.
        //! @param[in] delta time since the last fin commands (s).
        //! @param[in] e torque per unit angle of one fin (K, M, N).
        void
        dispatchAllocation(double delta, const double e[3])
        {
          dispatchFins(delta);

          m_allocated.k = e[0] * (-m_fins[0].value + m_fins[1].value - m_fins[2].value + m_fins[3].value);
          m_allocated.m = -e[1] * (m_fins[1].value + m_fins[2].value);
          m_allocated.n = -e[2] * (m_fins[0].value + m_fins[3].value);
          dispatch(m_allocated);
        }

        // Position the fins in a braking position (neutral or pitching up)
        //! @param[in] k torque about x to apply
        //! @param[in] m torque about y to apply
        void
        brake(float k, float m)
        {
          // compute brake margin in radians
          float ang = m_args.max_fin_rot * m_args.brake_margin;

          m_fins[0].value = ang;
          m_fins[3].value = -ang;

          m_fins[1].value = -ang;
          m_fins[2].value = ang;

          float h_margin_left = m_args.max_fin_rot * (1.0 - m_args.brake_margin);

          // Allocate M
          ang = (m / m_args.conv[1]) * 0.5;

          ang = trimValue(ang, -h_margin_left, h_margin_left);

          m_fins[1].value -= ang;
          m_fins[2].value -= ang;

          // recalculate horizontal margin
          h_margin_left = m_args.max_fin_rot - std::abs(ang);

          // Allocate K
          ang = (k / m_args.conv[0]) / c_fins;

          ang = trimValue(ang, -h_margin_left, h_margin_left);

          m_fins[1].value += ang;
          m_fins[2].value -= ang;

          float v_margin_left = m_args.max_fin_rot * (1.0 - m_args.brake_margin);

          ang = (k / m_args.conv[0]) / c_fins - ang;

          ang = trimValue(ang, -v_margin_left, v_margin_left);

          m_fins[0].value -= ang;
          m_fins[3].value += ang;

          dispatchAllFins();
        }

        //! Brake but ignore desired control
        void
        brake(void)
        {
          m_fins[0].value = m_args.max_fin_rot;
          m_fins[3].value = -m_args.max_fin_rot;
          m_fins[1].value = -m_args.max_fin_rot;
          m_fins[2].value = m_args.max_fin_rot;

          dispatchAllFins();
        }

        //! Change my pitch up
        void
        brakePitch(void)
        {
          m_fins[0].value = 0.0;
          m_fins[3].value = 0.0;

          m_fins[1].value = -m_args.max_fin_rot;
          m_fins[2].value = -m_args.max_fin_rot;

          dispatchAllFins();
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

        //! Dispatch all fins desired positions
        inline void
        dispatchAllFins(void)
        {
          dispatchFins(m_delta.getDelta());
        }

        //! Dispatch all fins desired positions, rate limited over delta seconds
        inline void
        dispatchFins(double delta)
        {
          for (int i = 0; i < c_fins; i++)
          {
            if (delta > 0)
            {
              double max = m_args.max_fin_rate * delta;
              double c = Math::trimValue(m_fins[i].value - m_last[i].value, -max, max);
              m_fins[i].value = m_last[i].value + c;
            }

            dispatch(m_fins[i]);
            m_last[i].value = m_fins[i].value;
          }
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
