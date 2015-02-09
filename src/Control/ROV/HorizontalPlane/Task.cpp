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
      //! Minimum speed reference
      static const float c_min_speed = 0.01;
      //! Loop names
      static const std::string c_loop_name[] = {DTR_RT("Heading Rate"), DTR_RT("Heading"),
                                                DTR_RT("Surge"), DTR_RT("Sway")};

      enum Loops
      {
        //! Heading Rate Loop
        LP_HRATE,
        //! Heading Loop
        LP_HEADING,
        //! Surge Loop
        LP_SURGE,
        //! Sway Loop
        LP_SWAY,
        //! Number of loops
        LP_MAX_LOOPS
      };

      //! Task arguments
      struct Arguments
      {
        std::vector<float> gains[LP_MAX_LOOPS];
        bool hrate_bypass;
        unsigned n_thrusters;
        float int_heading_limit;
        float int_hrate_limit;
        float max_hrate;
        float max_surge;
        float max_sway;
        float max_thrust;
        Matrix tmat;
        bool stabilize_ground;
        bool log_parcels;
      };

      struct Task: public DUNE::Control::BasicAutopilot
      {
        //! PID controllers
        DiscretePID m_pid[LP_MAX_LOOPS];
        //! PID parcels
        IMC::ControlParcel m_parcels[LP_MAX_LOOPS];
        //! Task Arguments
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicAutopilot(name, ctx, c_controllable, c_required)
        {
          // Load controller gains and integral limits
          for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
          {
            param(c_loop_name[i] + " PID Gains", m_args.gains[i])
            .defaultValue("")
            .size(3)
            .description("PID gains for " + c_loop_name[i] + " controller");
          }

          param("Heading Integral Limit", m_args.int_heading_limit)
          .defaultValue("-1.0")
          .units(Units::DegreePerSecond)
          .description("Integral limit for heading controller");

          param("Heading Rate Integral Limit", m_args.int_hrate_limit)
          .defaultValue("-1.0")
          .description("Integral limit for heading rate controller");

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

          param("Heading Rate Bypass", m_args.hrate_bypass)
          .defaultValue("false")
          .description("Bypass heading rate controller and send commands straight to thrusters");

          param("Maximum Surge Reference", m_args.max_surge)
          .defaultValue("1.0")
          .description("Maximum admissible surge speed reference");

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

          param("Stabilize Ground Speeds", m_args.stabilize_ground)
          .defaultValue("false")
          .description("If speed reference is zero, control thrusters to keep it zero");

          param("Log PID Parcels", m_args.log_parcels)
          .defaultValue("true")
          .description("Log the size of each PID parcel");
        }

        void
        reset(void)
        {
          BasicAutopilot::reset();

          for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
            m_pid[i].reset();

          tal(0.0, 0.0, 0.0);
        }

        void
        onResourceInitialization(void)
        {
          BasicAutopilot::onResourceInitialization();
        }

        void
        onUpdateParameters(void)
        {
          reset();

          if (paramChanged(m_args.int_heading_limit))
            m_args.int_heading_limit = Angles::radians(m_args.int_heading_limit);

          if (paramChanged(m_args.int_hrate_limit))
            m_args.int_hrate_limit = Angles::radians(m_args.int_hrate_limit);

          // Heading control parameters.
          if (paramChanged(m_args.max_hrate))
            m_args.max_hrate = Angles::radians(m_args.max_hrate);

          float output_limits[LP_MAX_LOOPS];
          output_limits[LP_HRATE] = m_args.max_thrust;
          output_limits[LP_HEADING] = m_args.max_hrate;
          output_limits[LP_SURGE] = m_args.max_thrust;
          output_limits[LP_SWAY] = m_args.max_thrust;

          // Setting pid gains and integral limits
          for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
          {
            m_pid[i].setGains(m_args.gains[i]);
            m_pid[i].setOutputLimits(-output_limits[i], output_limits[i]);

            // Debug parcels
            if (m_args.log_parcels)
              m_pid[i].enableParcels(this, &m_parcels[i]);
          }

          // Heading control parameters.
          m_pid[LP_HEADING].setIntegralLimits(m_args.int_heading_limit);

          // Heading rate control parameters.
          m_pid[LP_HRATE].setIntegralLimits(m_args.int_hrate_limit);
        }

        void
        onEntityReservation(void)
        {
          if (m_args.log_parcels)
          {
            for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
              m_parcels[i].setSourceEntity(reserveEntity(c_loop_name[i] + " Parcel"));
          }
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
          float ref = getSurgeRef();

          if ((std::abs(ref) < c_min_speed) && (!m_args.stabilize_ground))
            return 0.0;

          float cmd;
          cmd = m_pid[LP_SURGE].step(timestep, ref - msg->u, 0);
          return cmd;
        }

        //! Compute thrust necessary to comply with desired sway speed
        float
        swayControl(const double timestep, const IMC::EstimatedState* msg)
        {
          float ref = getSwayRef();

          if ((std::abs(ref) < c_min_speed) && (!m_args.stabilize_ground))
            return 0.0;

          float cmd;
          cmd = m_pid[LP_SWAY].step(timestep, ref - msg->v, 0);
          return cmd;
        }

        //! Log Desired heading rate
        void
        logDesiredHRate(float value)
        {
          IMC::DesiredHeadingRate hrate_ref;
          hrate_ref.value = value;
          dispatch(hrate_ref);
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
              cmd = m_pid[LP_HEADING].step(timestep,
                                           Angles::normalizeRadian(getYawRef() - msg->psi));

              // Log the desired hrate
              logDesiredHRate(cmd);
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
          float hrate_err = cmd - msg->r;
          cmd = m_pid[LP_HRATE].step(timestep, hrate_err, 0);

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
          dcontrol.flags = (IMC::DesiredControl::FL_X |
                            IMC::DesiredControl::FL_Y |
                            IMC::DesiredControl::FL_N);
          dispatch(dcontrol);
        }
      };
    }
  }
}

DUNE_TASK
