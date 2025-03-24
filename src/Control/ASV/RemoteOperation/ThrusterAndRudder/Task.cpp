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
    namespace RemoteOperation
    {
      namespace ThrusterAndRudder
      {
        using DUNE_NAMESPACES;

        //! Task arguments.
        struct Arguments
        {
          //! Thrust scaling.
          double scale;
          //! Entity label of CAS entity
          std::string cas_label;
        };

        struct Task: public DUNE::Control::BasicRemoteOperation
        {
          //! Motor commands.
          IMC::SetThrusterActuation m_thruster;
          //! Servo commands.
          IMC::SetServoPosition m_servo;
          //! Task Arguments.
          Arguments m_args;
          //! Current Log name.
          std::string m_log_name;
          //! Log state
          uint8_t m_log_state;
          //! True if using the analog thrust
          bool m_analog_thrust;

          Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Control::BasicRemoteOperation(name, ctx)
          {
            param("Thrust Scale", m_args.scale)
              .defaultValue("1.0");

            param("Entity Label - CAS", m_args.cas_label)
              .defaultValue("")
              .description("Entity label of CAS entity");

            // Add remote actions.
            addActionButton("Accelerate");
            addActionButton("Decelerate");
            addActionButton("Stop");
            addActionButton("PowerOff");
            addActionButton("Restart Log");
            addActionButton("Arm");
            addActionButton("Disarm");
            addActionButton("Enable CAS");
            addActionButton("Disable CAS");
            addActionAxis("Heading");
            addActionAxis("Thrust");

            // Initialize SetThrusterActuation messages.
            m_thruster.id = 0;
            m_thruster.value = m_servo.value = 0;
            m_analog_thrust = true;

            bind<IMC::LoggingControl>(this);
            bind<IMC::RemoteActions>(this, &Task::onAdditionalActions);
          }

          void
          onActivation(void)
          {
            m_thruster.id = 0;
            m_thruster.value = m_servo.value = 0;
            actuate();
          }

          void
          onDeactivation(void)
          {
            m_thruster.id = 0;
            m_thruster.value = m_servo.value = 0;
            actuate();
          }

          void
          onConnectionTimeout(void)
          {
            m_thruster.id = 0;
            m_thruster.value = m_servo.value = 0;
            actuate();
          }

          double
          applyScale(int value)
          {
            return Math::trimValue((value / 127.0) * m_args.scale, -1.0, 1.0);
          }

          void
          consume(const IMC::LoggingControl* msg)
          {
            // save current log.
            m_log_name = getLogName(msg->name);
            m_log_state = msg->op;
          }

          void
          onAdditionalActions(const IMC::RemoteActions* msg)
          {
            TupleList tuples(msg->actions);
            spew("received %s", msg->actions.c_str());

            if (tuples.get("PowerOff", 0))
              sendPowerOff();

            else if (tuples.get("Restart Log", 0))
              restartLog();

            else if (tuples.get("Arm", 0))
            {
              IMC::ArmingState as;
              as.state = ArmingState::StateEnum::MOTORS_ARMED;
              dispatch(as);
            }
            else if (tuples.get("Disarm", 0))
            {
              IMC::ArmingState as;
              as.state = ArmingState::StateEnum::MOTORS_DISARMED;
              dispatch(as);
            }

            else if (tuples.get("Enable CAS", 0))
              enableCAS(true);
            else if (tuples.get("Disable CAS", 0))
              enableCAS(false);
          }

          void
          onRemoteActions(const IMC::RemoteActions* msg)
          {
            TupleList tuples(msg->actions);

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

            int hdng = tuples.get("Heading", 0) * -1;
            float val = hdng / 127.0;
            m_servo.value = val * Math::c_pi / 4;
            m_servo.value = Math::trimValue(m_servo.value, -Math::c_pi / 4, Math::c_pi / 4);

            actuate();
          }

          void
          sendPowerOff(void)
          {
            IMC::LoggingControl lc;
            lc.op = LoggingControl::COP_REQUEST_STOP;
            dispatch(lc);

            Counter<double> timer(3);
            while (!stopping())
            {
              if (timer.overflow())
                break;

              if (m_log_state == LoggingControl::COP_STOPPED)
                break;

              waitForMessages(0.1);
            }

            war("PowerOff CPU");
            int result = std::system("/usr/sbin/poweroff");
            while (result == -1)
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
              err(DTR("failed to execute poweroff command"));
              result = std::system("/usr/sbin/poweroff");
            }
          }

          //! Get log name.
          std::string
          getLogName(const std::string& name)
          {
            size_t pos = name.find('_');
            if (pos == std::string::npos)
              return {};  // return empty string

            return name.substr(pos + 1);
          }

          void
          restartLog(void)
          {
            IMC::LoggingControl lc;
            lc.name = m_log_name;
            lc.op = LoggingControl::COP_REQUEST_START;
            dispatch(lc);
          }

          void
          actuate(void)
          {
            trace("Analog Thrust Enabled: %d | Thruster: %0.2f | Servo: %0.2f", m_analog_thrust,
                  m_thruster.value, m_servo.value);

            dispatch(m_thruster);
            dispatch(m_servo);
          }

          void
          enableCAS(bool enable)
          {
            if (m_args.cas_label.empty())
            {
              war("CAS label not set");
              return;
            }

            IMC::SetEntityParameters ep;
            ep.name = m_args.cas_label;
            IMC::EntityParameter ea;
            ea.name = "Enable Collision Avoidance";
            ea.value = enable ? "true" : "false";
            ep.params.push_back(ea);
            dispatch(ep);
          }
        };
      }
    }
  }
}

DUNE_TASK
