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
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

//! Number of servos
static const unsigned c_servo_count = 4;
//! Fixed time for fault duration
static const float c_fault_duration = 60.0;

namespace Simulators
{
  //! %Servos simulator for DUNE.
  //! %Servos is responsible to gather actuation values from
  //! the DUNE control layer and outputs rotation information
  //! in radians (rad).
  //!
  //! @author Pedro Calado
  namespace Servos
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Maximum servo angle
      float max_angle;
      //! Enable or disable limiting rotation rate
      bool limit_rate;
      //! Maximum rotation rate
      float max_rate;
      //! Flag to generate faults
      bool generate_faults;
      //! Time after which a fault will be triggered
      //! (will trigger after the first command to a servo is received)
      float fault_trigger;
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
    };

    //! %Servos simulator task
    struct Task: public Tasks::Task
    {
      //! Message for servo positions
      IMC::ServoPosition m_positions[c_servo_count];
      //! Message for SetServoPosition
      IMC::SetServoPosition m_commands[c_servo_count];
      //! PRNG handle.
      Random::Generator* m_prng;
      //! Last time a setservoposition message was received
      double m_last_time;
      //! Fault timer counter
      double m_fault_timer;
      //! Flag to signal a fault has already been generated
      bool m_faulted;
      //! Number of faulty servo
      int m_servo_in_fault;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_prng(NULL),
        m_fault_timer(-1.0),
        m_faulted(false),
        m_servo_in_fault(-1)
      {
        // Retrieve configuration values.
        param("Maximum Angle", m_args.max_angle)
        .defaultValue("90.0")
        .units(Units::Degree)
        .description("Maximum angle attainable by the servo");

        param("Enable Rotation Rate", m_args.limit_rate)
        .defaultValue("false")
        .description("Enable or disable limiting the servos' rotation rate");

        param("Maximum Rate", m_args.max_rate)
        .defaultValue("333.3")
        .units(Units::DegreePerSecond)
        .description("Maximum angle attainable by the servo");

        param("Generate Faults", m_args.generate_faults)
        .defaultValue("false")
        .description("Flag to generate faults");

        param("Fault Time", m_args.fault_trigger)
        .defaultValue("10.0")
        .units(Units::Second)
        .description("Time after which a fault will be triggered");

        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");

        // Register consumers.
        bind<IMC::SetServoPosition>(this);
        bind<IMC::SimulatedState>(this);
      }

      //! Update parameters
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.max_angle))
          m_args.max_angle = Angles::radians(m_args.max_angle);

        if (paramChanged(m_args.max_rate))
          m_args.max_rate = Angles::radians(m_args.max_rate);
      }

      //! Acquire resources
      void
      onResourceAcquisition(void)
      {
        m_prng = Random::Factory::create(m_args.prng_type, m_args.prng_seed);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_prng);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        // Initialize position values.
        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          m_positions[i].value = 0;
          m_positions[i].id = i;
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        m_last_time = Clock::get();
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        if (!m_args.limit_rate)
        {
          m_positions[msg->id].value = trimValue(msg->value,
                                                 -m_args.max_angle,
                                                 m_args.max_angle);
          dispatch(m_positions[msg->id]);
        }
        else
        {
          m_last_time = Clock::get();

          m_commands[msg->id].value = trimValue(msg->value,
                                                -m_args.max_angle,
                                                m_args.max_angle);
        }

        if (m_args.generate_faults && !m_faulted)
        {
          if (m_fault_timer < 0.0)
          {
            m_fault_timer = Clock::get();
          }
          else if (Clock::get() - m_fault_timer > m_args.fault_trigger)
          {
            m_servo_in_fault = Math::roundToInteger(m_prng->uniform(0, c_servo_count - 1));
            m_faulted = true;
            war(DTR("fault triggered in servo #%d"), m_servo_in_fault);
          }
        }
        else if (m_args.generate_faults && (m_servo_in_fault >= 0))
        {
          if (Clock::get() - m_fault_timer > c_fault_duration)
          {
            war(DTR("servo #%d is no longer in fault"), m_servo_in_fault);
            m_servo_in_fault = -1;
          }
        }
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        (void)msg;

        if (!m_args.limit_rate)
          return;

        float max_rot = (Clock::get() - m_last_time) * m_args.max_rate;

        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          if (m_servo_in_fault != (int)i)
          {
            float diff = m_commands[i].value - m_positions[i].value;

            diff = trimValue(diff, -max_rot, max_rot);

            m_positions[i].value += diff;
          }

          dispatch(m_positions[i]);
        }

        m_last_time = Clock::get();
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

DUNE_TASK
