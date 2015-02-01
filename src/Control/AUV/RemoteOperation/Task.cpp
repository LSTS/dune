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
// Author: Renato Caldas                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace AUV
  {
    namespace RemoteOperation
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Pitch reference
        float pitch_ref;
        //! Maximum heading rate;
        float max_hrate;
        //! Fixed position of horizontal fins. (for torque control)
        float horfin_pos;
        //! Debug variable remove asap
        bool force_torque_control;
        //! EstimatedState timeout to enable torque control
        float estate_tout;
        //! Disable the analog thrust axis
        bool disable_analog_thrust;
        //! Maximum thruster actuation
        float max_thrust;
      };

      struct Task: public DUNE::Control::BasicRemoteOperation
      {
        //! Heading rate reference
        float m_hrate;
        //! Forward thrust reference
        float m_thrust;
        //! Acceleration.
        int m_acceleration;
        //! Position of the vertical fins. (for torque control)
        float m_verfin;
        //! Position of the horizontal fins. (for torque control)
        float m_horfin;
        //! Control the fins directly
        bool m_torque_control;
        //! Last received EstimatedState
        Counter<float> m_last_estate;
        //! Task arguments.
        Arguments m_args;
        //! The analog axis is being used for thrust
        bool m_analog_thrust;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicRemoteOperation(name, ctx),
          m_hrate(0),
          m_thrust(0),
          m_acceleration(0),
          m_verfin(0),
          m_horfin(0),
          m_torque_control(false),
          m_analog_thrust(false)
        {
          param("Pitch Reference", m_args.pitch_ref)
          .defaultValue("15.0")
          .units(Units::Degree)
          .description("Desired pitch while remotely operating the vehicle");

          param("Maximum Heading Rate", m_args.max_hrate)
          .defaultValue("40.0")
          .units(Units::DegreePerSecond)
          .description("Maximum admissible heading rate to be commanded");

          // Torque control parameters.
          param("Position of Horizontal Fins", m_args.horfin_pos)
          .defaultValue("0.0")
          .units(Units::Degree)
          .description("Fixed position for the horizontal fins while remotely operating");

          param("EstimatedState Timeout", m_args.estate_tout)
          .defaultValue("1.0")
          .units(Units::Second)
          .description("Timeout for the estimated state in case navigation fails");

          param("Force Torque Control", m_args.force_torque_control)
          .defaultValue("false")
          .description("Force direct torque control instead of desired heading rate");

          param("Disable Analog Thrust", m_args.disable_analog_thrust)
          .defaultValue("true")
          .description("Enable or disable analog thrust over fixed increments");

          param("Maximum Thruster Actuation", m_args.max_thrust)
          .defaultValue("1.0")
          .description("Maximum admissible thruster actuation while remotely operating");

          // Add remote actions.
          addActionButton("Accelerate");
          addActionButton("Decelerate");
          addActionButton("Stop");
          addActionAxis("Heading");
          addActionAxis("Thrust");

          // Register handler routines.
          bind<IMC::EstimatedState>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.pitch_ref))
            m_args.pitch_ref = Angles::radians(m_args.pitch_ref);

          if (paramChanged(m_args.max_hrate))
            m_args.max_hrate = Angles::radians(m_args.max_hrate);

          if (paramChanged(m_args.horfin_pos))
            m_args.horfin_pos = Angles::radians(m_args.horfin_pos);

          if (paramChanged(m_args.force_torque_control))
          {
            if (!m_args.force_torque_control && m_torque_control)
            {
              debug("disabling torque control");
              deactivateTorqueControl();
            }
          }

          m_args.max_thrust = Math::trimValue(m_args.max_thrust, 0.0, 1.0);

          if (paramChanged(m_args.estate_tout))
            m_last_estate.setTop(m_args.estate_tout);
        }

        void
        onActivation(void)
        {
          if (!m_torque_control)
            enableControlLoops(IMC::CL_YAW_RATE | IMC::CL_PITCH | IMC::CL_SPEED);
          else
            enableControlLoops(IMC::CL_SPEED | IMC::CL_TORQUE);

          // for torque control
          m_verfin = 0;
          m_horfin = m_args.horfin_pos;

          m_thrust = 0;
          m_hrate = 0;
          m_acceleration = 0;
          actuate();
        }

        void
        onDeactivation(void)
        {
          // for torque control
          m_verfin = 0;
          m_horfin = 0;

          m_thrust = 0;
          m_hrate = 0;
          m_acceleration = 0;
        }

        void
        onRemoteActions(const IMC::RemoteActions* msg)
        {
          TupleList tuples(msg->actions);

          if (tuples.get("Stop", 0))
            m_thrust = 0;
          else if (tuples.get("Decelerate", 0))
            m_acceleration = -1;
          else if (tuples.get("Accelerate", 0))
            m_acceleration = 1;
          else
            m_acceleration = 0;

          if (!m_args.disable_analog_thrust)
          {
            int thrust = tuples.get("Thrust", 0);
            if (thrust != 0)
            {
              // The user is inputing throuth the analog axis
              m_thrust = thrust / 127.0;
              m_analog_thrust = true;
            }
            else if (m_analog_thrust)
            {
              // The stick went to zero:
              m_thrust = 0;
              // Allow the accelerate/decelerate buttons to change the thrust
              m_analog_thrust = false;
            }
          }

          if (!m_torque_control)
          {
            int hdng = tuples.get("Heading", 0);
            float val = hdng / 127.0;
            m_hrate = val * m_args.max_hrate;
          }
          else
          {
            int hdng = tuples.get("Heading", 0) * -1;
            float val = hdng / 127.0;
            m_verfin = val * Math::c_pi / 4;
            m_verfin = Math::trimValue(m_verfin, -Math::c_pi / 4, Math::c_pi / 4);
          }
        }

        void
        onConnectionTimeout(void)
        {
          // for torque control
          m_verfin = 0.0;

          m_hrate = 0;
          m_thrust = 0;

          actuate();
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          m_last_estate.reset();
        }

        //! Activate direct torque control
        void
        activateTorqueControl(void)
        {
          // Change active controllers to torque and speed control.
          disableControlLoops(IMC::CL_PITCH | IMC::CL_YAW_RATE);

          enableControlLoops(IMC::CL_TORQUE);

          m_verfin = 0;
          m_horfin = m_args.horfin_pos;

          m_torque_control = true;
        }

        //! Deactivate direct torque control
        void
        deactivateTorqueControl(void)
        {
          // Change active controllers
          disableControlLoops(IMC::CL_TORQUE);

          enableControlLoops(IMC::CL_PITCH | IMC::CL_YAW_RATE);

          m_hrate = 0;

          m_torque_control = false;
        }

        //! Compute and dispatch control commands
        void
        actuate(void)
        {
          if (m_args.force_torque_control && !m_torque_control)
          {
            debug("forcing torque control");
            activateTorqueControl();
          }

          // check if there is a timeout on the EstimatedState
          if (m_last_estate.overflow() && !m_torque_control)
          {
            debug("timedout on EstimatedState, falling back to torque control");
            activateTorqueControl();
          }

          // Check mode.
          m_thrust += (0.01 * m_acceleration);
          m_thrust = Math::trimValue(m_thrust, -1.0, 1.0);

          // Set thruster actuation.
          IMC::DesiredSpeed s;
          s.speed_units = IMC::SUNITS_PERCENTAGE;

          s.value = Math::trimValue(m_thrust * m_args.max_thrust * 100, -100, 100);
          dispatch(s);

          if (!m_torque_control)
          {
            // Set desired heading rate.
            IMC::DesiredHeadingRate r;
            r.value = m_hrate;
            dispatch(r);

            // Set desired pitch.
            IMC::DesiredPitch p;
            p.value = m_args.pitch_ref;
            dispatch(p);
          }
          else
          {
            // Set the fin torques.
            IMC::DesiredControl t;
            t.k = 0;
            // Torques are oposite to the fin angles
            t.m = -m_horfin;
            t.n = -m_verfin;

            t.flags = IMC::DesiredControl::FL_K | IMC::DesiredControl::FL_M | IMC::DesiredControl::FL_N;
            dispatch(t);
          }
        }
      };
    }
  }
}

DUNE_TASK
