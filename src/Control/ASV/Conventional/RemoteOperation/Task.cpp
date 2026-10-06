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
// Author: João Costa.                                                      *
//***************************************************************************

// ISO C++ 98 headers.
#include <algorithm>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace ASV
  {
    namespace Conventional
    {
      namespace RemoteOperation
      {
        using DUNE_NAMESPACES;

        //! Task arguments.
        struct Arguments
        {
          //! Thruster id.
          uint8_t thruster_id;
          //! Thruster scaling.
          double thruster_scale;
          //! Rudder id.
          uint8_t rudder_id;
          //! Rudder scaling.
          double rudder_scale;
        };

        struct Task: public DUNE::Control::BasicRemoteOperation
        {
          //! Motor commands.
          IMC::SetThrusterActuation m_thruster;
          //! Servo commands.
          IMC::SetServoPosition m_servo;
          //! Task Arguments.
          Arguments m_args;
          //! Log state
          uint8_t m_log_state;
          //! True if using the analog thrust
          bool m_analog_thrust;
          //! Rudder angle scaling factor
          double m_rudder_scale;

          Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Control::BasicRemoteOperation(name, ctx)
          {
            param("Thruster Id", m_args.thruster_id)
            .minimumValue("0")
            .maximumValue("255")
            .defaultValue("0")
            .description("Identifier of the thruster to be controlled.");

            param("Thruster Scale", m_args.thruster_scale)
            .minimumValue("-1.0")
            .maximumValue("1.0")
            .defaultValue("1.0")
            .description("Scaling factor for the thruster actuation.");

            param("Rudder Id", m_args.rudder_id)
            .minimumValue("0")
            .maximumValue("255")
            .defaultValue("0")
            .description("Identifier of the rudder to be controlled.");

            param("Rudder Scale", m_args.rudder_scale)
            .units(Units::Degree)
            .minimumValue("-180.0")
            .maximumValue("180.0")
            .defaultValue("180.0")
            .description("Maximum rudder deflection angle.");

            // Add remote actions.
            addActionButton("Accelerate");
            addActionButton("Decelerate");
            addActionButton("Stop");
            addActionButton("PowerOff");
            addActionAxis("Heading");
            addActionAxis("Thrust");

            // Initialize SetThrusterActuation messages.
            m_thruster.value = m_servo.value = 0;
            m_analog_thrust = true;

            bind<IMC::LoggingControl>(this);
            bind<IMC::RemoteActions>(this, &Task::onAdditionalActions);
          }

          void
          onUpdateParameters(void)
          {
            if (paramChanged(m_args.thruster_id))
              m_thruster.id = m_args.thruster_id;

            if (paramChanged(m_args.thruster_scale))
              m_thruster.value *= m_args.thruster_scale / m_args.thruster_scale;

            if (paramChanged(m_args.rudder_id))
              m_servo.id = m_args.rudder_id;

            if (paramChanged(m_args.rudder_scale))
              m_rudder_scale = Angles::radians(m_args.rudder_scale);
          }

          void
          onActivation(void)
          {
            m_thruster.value = m_servo.value = 0;
            actuate();
          }

          void
          onDeactivation(void)
          {
            m_thruster.value = m_servo.value = 0;
            actuate();
          }

          void
          onConnectionTimeout(void)
          {
            m_thruster.value = m_servo.value = 0;
            actuate();
          }

          void
          onAdditionalActions(const IMC::RemoteActions* msg)
          {
            TupleList tuples(msg->actions);
            spew("received %s", msg->actions.c_str());

            if (tuples.get("PowerOff", 0))
            {
              spew("received power off request");
              sendPowerOff();
            }
          }

          void
          consume(const IMC::LoggingControl* msg)
          {
            m_log_state = msg->op;
          }

          void
          onRemoteActions(const IMC::RemoteActions* msg)
          {
            TupleList tuples(msg->actions);
            spew("received %s", msg->actions.c_str());

            if (tuples.get("Stop", 0))
              m_thruster.value = 0;

            if (tuples.get("Decelerate", 0))
            {
              m_analog_thrust = false;
              m_thruster.value -= 0.05;
              if (m_thruster.value < -1)
                m_thruster.value = -1;
            }
            else if (tuples.get("Accelerate", 0))
            {
              m_analog_thrust = false;
              m_thruster.value += 0.05;
              if (m_thruster.value > 1)
                m_thruster.value = 1;
            }

            int thrust = tuples.get("Thrust", 0);
            if (thrust != 0)
            {
              m_analog_thrust = true;
              m_thruster.value = thrust / 127.0;
            }
            else
            {
              if (m_analog_thrust)
                m_thruster.value = 0;
            }

            m_thruster.value *= m_args.thruster_scale;

            int hdng = tuples.get("Heading", 0);
            double val = hdng / 127.0;
            double max_angle = std::abs(m_args.rudder_scale);
            m_servo.value = Math::trimValue(val * m_rudder_scale, -max_angle, max_angle);

            actuate();
          }

          void
          sendPowerOff(void)
          {
            IMC::PowerOperation po;
            po.setDestination(getSystemId());
            po.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
            dispatch(po);
            requestDeactivation();
          }

          void
          actuate(void)
          {
            trace("Analog Thrust Enabled: %d | Thruster: %0.2f | Servo: %0.2f", m_analog_thrust,
                  m_thruster.value, m_servo.value);

            dispatch(m_thruster);
            dispatch(m_servo);
          }
        };
      }
    }
  }
}

DUNE_TASK
