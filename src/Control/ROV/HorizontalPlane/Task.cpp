//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jorge Estrela da Silva (original controller implementation)      *
// Author: Renato Caldas                                                    *
// Author: Pedro Calado (adapted to ROVs)                                   *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace ROV
  {
    namespace HorizontalPlane
    {
      using DUNE_NAMESPACES;
      using std::sin;
      using std::cos;
      using std::tan;

      //! Controllable loops
      static const uint32_t c_controllable = IMC::CL_YAW | IMC::CL_YAW_RATE | IMC::CL_SPEED;
      //! Required loops
      static const uint32_t c_required = 0;

      //! Task arguments
      struct Arguments
      {
        bool hrate_bypass;
        unsigned n_thrusters;
        std::vector<float> heading_gains;
        float max_hrate;
        std::vector<float> hrate_gains;
        float max_surge;
        std::vector<float> surge_gains;
        float max_sway;
        std::vector<float> sway_gains;
        float max_thrust;
        Matrix tmat;
      };

      struct Task: public DUNE::Control::BasicAutopilot
      {
        //! Heading rate PID controller
        DiscretePID m_hrate_pid;
        //! Heading PID controller
        DiscretePID m_heading_pid;
        //! Surge PID controller
        DiscretePID m_surge_pid;
        //! Sway PID controller
        DiscretePID m_sway_pid;
        //! Heading controller heading rate reference
        IMC::DesiredHeadingRate m_hrate_ref;
        //! Task Arguments
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicAutopilot(name, ctx, c_controllable, c_required)
        {
          param("Heading PID Gains", m_args.heading_gains)
          .defaultValue("")
          .size(3)
          .description("PID gains for heading controller");

          param("Maximum Thrust Actuation", m_args.max_thrust)
          .defaultValue("1.0")
          .description("Maximum admissible thrust command");

          param("Horizontal Thruster Count", m_args.n_thrusters)
          .defaultValue("4")
          .description("Number of thrusters in the horizontal plane");

          param("Maximum Heading Rate", m_args.max_hrate)
          .defaultValue("45.0")
          .units(Units::DegreePerSecond)
          .description("Maximum admissible heading rate reference for heading controller");

          param("Heading Rate PID Gains", m_args.hrate_gains)
          .defaultValue("")
          .size(3)
          .description("PID gains for heading rate controller");

          param("Heading Rate Bypass", m_args.hrate_bypass)
          .defaultValue("false")
          .description("Bypass heading rate controller and send commands straight to thrusters");

          param("Maximum Surge Reference", m_args.max_surge)
          .defaultValue("1.0")
          .description("Maximum admissible surge speed reference");

          param("Surge PID Gains", m_args.surge_gains)
          .defaultValue("")
          .size(3)
          .description("Surge speed controller PID gains");

          param("Sway PID Gains", m_args.sway_gains)
          .defaultValue("")
          .size(3)
          .description("Sway speed controller PID gains");

          param("Maximum Sway Reference", m_args.max_sway)
          .defaultValue("1.0")
          .description("Maximum admissible sway speed reference");

          // Thrust allocation pseudo inverse matrix
          // PSEUDO INVERSE METHOD NOT IMPLEMENTED
          // Matrix will remain in the configuration file
          param("Thrust Allocation Pinv", m_args.tmat)
          .defaultValue("")
          .size(12)
          .description("Thrust allocation pseudo inverse matrix");
        }

        void
        reset(void)
        {
          BasicAutopilot::reset();

          m_hrate_pid.reset();
          m_heading_pid.reset();
          m_surge_pid.reset();
          m_sway_pid.reset();

          tal(0.0, 0.0, 0.0);
        }

        void
        onResourceInitialization(void)
        {
          BasicAutopilot::onResourceInitialization();

          // Heading control parameters.
          m_heading_pid.setGains(m_args.heading_gains);
          m_heading_pid.setOutputLimits(-m_args.max_hrate, m_args.max_hrate);

          // Heading rate control parameters.
          m_hrate_pid.setGains(m_args.hrate_gains);
          m_hrate_pid.setOutputLimits(-m_args.max_thrust, m_args.max_thrust);

          // Surge control parameters
          m_surge_pid.setGains(m_args.surge_gains);
          m_surge_pid.setOutputLimits(-m_args.max_thrust, m_args.max_thrust);

          // Sway control parameters
          m_sway_pid.setGains(m_args.sway_gains);
          m_sway_pid.setOutputLimits(-m_args.max_thrust, m_args.max_thrust);
        }

        void
        onUpdateParameters(void)
        {
          // Heading control parameters.
          if (paramChanged(m_args.max_hrate))
            m_args.max_hrate = Angles::radians(m_args.max_hrate);
        }

        void
        onEstimatedState(const double timestep, const IMC::EstimatedState* msg)
        {
          double X = surgeControl(timestep, msg);
          double Y = swayControl(timestep, msg);
          double N = headingControl(timestep, msg);

          // Compute the necessary forces for each thruster and send to bus
          tal(X, Y, N);
        }

        //! Compute thrust necessary to comply with desired surge speed
        float
        surgeControl(const double timestep, const IMC::EstimatedState* msg)
        {
          float cmd;
          cmd = m_surge_pid.step(timestep, getSurgeRef() - msg->u, 0);
          return cmd;
        }

        //! Compute thrust necessary to comply with desired sway speed
        float
        swayControl(const double timestep, const IMC::EstimatedState* msg)
        {
          float cmd;
          cmd = m_sway_pid.step(timestep, getSwayRef() - msg->v, 0);
          return cmd;
        }

        //! Compute thrust necessary to comply with desired heading or heading rate
        float
        headingControl(const double timestep, const IMC::EstimatedState* msg)
        {
          float cmd = 0.0;

          switch (getYawMode())
          {
            case YAW_MODE_HEADING:
              // Outer heading controller
              cmd = m_heading_pid.step(timestep, Angles::normalizeRadian(getYawRef() - msg->psi));
              // Log the desired hrate
              m_hrate_ref.value = cmd;
              dispatch(m_hrate_ref);
              break;
            case YAW_MODE_HRATE:
              cmd = getYawRef();
              break;
            case YAW_MODE_BYPASS:
              // Bypass the command directly to the control torques
              return getYawRef();
            default:
              signalBadYaw();
              return 0.0;
          }

          // Inner heading rate controller
          float heading_err = cmd - msg->r;
          cmd = m_hrate_pid.step(timestep, heading_err, 0);

          return cmd;
        }

        //! function for thrust allocation
        //! surge, sway and yaw force (respectively X, Y and N)
        void
        tal(double X, double Y, double N)
        {
          double p[3] = {X, Y, N};
          Matrix tau(p, 3, 1);

          Matrix F = m_args.tmat * tau;

          for (unsigned i = 0; i < m_args.n_thrusters; ++i)
          {
            IMC::SetThrusterActuation msg;
            msg.id = i;
            msg.value = trimValue(F(i), -m_args.max_thrust, m_args.max_thrust);
            dispatch(msg);
          }

          // Log desired control for debug
          IMC::DesiredControl dcontrol;
          dcontrol.x = X;
          dcontrol.y = Y;
          dcontrol.n = N;
          dcontrol.flags = IMC::DesiredControl::FL_X | IMC::DesiredControl::FL_Y | IMC::DesiredControl::FL_N;
          dispatch(dcontrol);
        }
      };
    }
  }
}

DUNE_TASK
