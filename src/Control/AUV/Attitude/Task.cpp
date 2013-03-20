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
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace AUV
  {
    namespace Attitude
    {
      using DUNE_NAMESPACES;
      using std::sin;
      using std::cos;
      using std::tan;

      //! Depth tolerance to be considered surface
      static const float c_depth_tol = 0.1f;
      //! Controllable loops
      static const uint32_t c_controllable = IMC::CL_YAW | IMC::CL_YAW_RATE | IMC::CL_DEPTH | IMC::CL_PITCH;
      //! Required loops
      static const uint32_t c_required = IMC::CL_TORQUE;
      //! Loops names
      static const std::string c_loop_name[] = {DTR("Roll"), DTR("Pitch"), DTR("Depth"), DTR("Heading"), DTR("Heading Rate")};
      //! Loops units
      static const unsigned c_loop_unit[] = {Units::Degree, Units::Degree, Units::Meter, Units::DegreePerSecond, Units::Degree};

      enum Loops
      {
        //! Roll loop
        LP_ROLL,
        //! Pitch loop
        LP_PITCH,
        //! Depth loop
        LP_DEPTH,
        //! Heading loop
        LP_HEADING,
        //! Heading rate loop
        LP_HRATE,
        //! Number of loops
        LP_MAX_LOOPS
      };

      struct Arguments
      {
        //! PID controller gains
        std::vector<float> gains[LP_MAX_LOOPS];
        //! PID integral limits
        float max_int[LP_MAX_LOOPS];
        //! Maximum fin rotation
        float max_fin_rot;
        //! Enable or disable roll controller
        bool roll_control_enabled;
        //! Maximum pitch actuation
        float max_pitch_act;
        //! Maximum pitch reference for depth controller
        float max_pitch;
        //! Use a fixed depth offset
        bool use_depth_offset;
        //! Depth offset value if set
        float depth_offset;
        //! Force positive pitch while at the surface
        bool force_pitch;
        //! Pitch value when forced at surface
        float surface_pitch;
        //! Enable or disable roll offset
        bool use_roll_offset;
        //! Roll offset value if set
        float roll_offset;
        //! Maximum heading rate reference for heading controller
        float max_hrate;
        //! Heading rate in open loop
        bool hrate_oloop;
        //! Error attitude compensation
        bool error_attitude;
        //! Log PID gain parcels
        bool log_parcels;
        //! Compute angular rates
        bool compute_rates;
      };

      struct Task: public DUNE::Control::BasicAutopilot
      {
        //! PID Controllers
        DiscretePID m_pid[LP_MAX_LOOPS];
        //! Heading controller heading rate reference
        IMC::DesiredHeadingRate m_hrate_ref;
        //! Depth controller pitch reference
        IMC::DesiredPitch m_pitch_ref;
        //! PID parcels
        IMC::ControlParcel m_parcels[LP_MAX_LOOPS];
        //! Previously received estimated state
        IMC::EstimatedState m_prev_estate;
        //! True if braking.
        bool m_braking;
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

            param(c_loop_name[i] + " Integral Limit", m_args.max_int[i])
            .defaultValue("-1.0")
            .units((Units::Types)c_loop_unit[i])
            .description("Integral limit for " + c_loop_name[i] + " controller");
          }

          param(DTR_RT("Maximum Fin Rotation"), m_args.max_fin_rot)
          .defaultValue("25.0")
          .units(Units::Degree)
          .description(DTR("Maximum admissible fin rotation"));

          param(DTR_RT("Enable roll controller"), m_args.roll_control_enabled)
          .defaultValue("false")
          .description(DTR("Enable roll controller"));

          param("Maximum Pitch Actuation", m_args.max_pitch_act)
          .defaultValue("15.0")
          .units(Units::Degree)
          .description("Maximum admissible fin actuation for the pitch controller");

          param("Maximum Pitch Reference", m_args.max_pitch)
          .defaultValue("10.0")
          .units(Units::Degree)
          .description("Maximum pitch reference used by depth controller");

          param("Use Fixed Depth Offset", m_args.use_depth_offset)
          .defaultValue("false")
          .description("Use a fixed depth offset to compensate for steady state error");

          param("Depth Offset", m_args.depth_offset)
          .defaultValue("0.0")
          .units(Units::Meter)
          .description("Depth reference offset value");

          param("Force Pitch At Surface", m_args.force_pitch)
          .defaultValue("false")
          .units(Units::Meter)
          .description("Force pitching up at the surface");

          param("Pitch Angle At Surface", m_args.surface_pitch)
          .defaultValue("15.0")
          .units(Units::Degree)
          .description("Angle at which to force pitch at the surface");

          param("Use Fixed Roll Offset", m_args.use_roll_offset)
          .defaultValue("false")
          .description("Use a fixed roll offset to compensate for steady state error");

          param("Roll Offset", m_args.roll_offset)
          .defaultValue("0.0")
          .units(Units::Degree)
          .description("Roll reference offset value");

          param("Heading Rate Open Loop", m_args.hrate_oloop)
          .defaultValue("false")
          .description("Dispatch heading rate commands directly to servos");

          param("Maximum Heading Rate", m_args.max_hrate)
          .defaultValue("45.0")
          .units(Units::DegreePerSecond)
          .description("Maximum heading rate reference");

          param("Error Attitude Compensation", m_args.error_attitude)
          .defaultValue("false")
          .description("Compensate PID controller errors with vehicle's attitude");

          param("Log PID Parcels", m_args.log_parcels)
          .defaultValue("false")
          .description("Log the size of each PID parcel");

          param("Compute Angular Rates", m_args.compute_rates)
          .defaultValue("false")
          .description("Compute angular rates when the compass is not providing them");

          // Register handler routines.
          bind<IMC::Brake>(this);
        }

        //! Destructor
        ~Task(void)
        {
          BasicAutopilot::onResourceRelease();
        }

        //! Initialize resources and start capturing frames.
        void
        onResourceInitialization(void)
        {
          BasicAutopilot::onResourceInitialization();
        }

        //! Update internal parameters.
        void
        onUpdateParameters(void)
        {
          for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
            m_args.max_int[i] = Angles::radians(m_args.max_int[i]);

          // Pitch control parameters
          m_args.max_pitch_act = Angles::radians(m_args.max_pitch_act);

          // Depth control parameters
          m_args.max_pitch = Angles::radians(m_args.max_pitch);
          m_args.surface_pitch = Angles::radians(m_args.surface_pitch);

          // Roll offset conversion
          m_args.roll_offset = Angles::radians(m_args.roll_offset);

          // Heading rate control parameters
          m_args.max_fin_rot = Angles::radians(m_args.max_fin_rot);
          m_args.max_hrate = Angles::radians(m_args.max_hrate);

          initializePIDs();
        }

        //! Initialize PID related variables
        void
        initializePIDs(void)
        {
          float output_limits[LP_MAX_LOOPS];
          output_limits[LP_ROLL] = m_args.max_fin_rot;
          output_limits[LP_PITCH] = m_args.max_pitch_act;
          output_limits[LP_DEPTH] = m_args.max_pitch;
          output_limits[LP_HEADING] = m_args.max_hrate;
          output_limits[LP_HRATE] = m_args.max_fin_rot;

          // Setting pid gains and integral limits
          for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
          {
            m_pid[i].setGains(m_args.gains[i]);
            m_pid[i].setOutputLimits(-output_limits[i], output_limits[i]);
            m_pid[i].setIntegralLimits(m_args.max_int[i]);

            // Debug parcels
            if (m_args.log_parcels)
              m_pid[i].enableParcels(this, &m_parcels[i]);
          }
        }

        //! Member variable reset function
        void
        reset(void)
        {
          BasicAutopilot::reset();

          for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
            m_pid[i].reset();

          m_braking = false;
        }

        //! Reserve entities for messages
        void
        onEntityReservation(void)
        {
          if (m_args.log_parcels)
            for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
              m_parcels[i].setSourceEntity(reserveEntity(c_loop_name[i] + " Parcel"));
        }

        //! Consume brake message
        void
        consume(const IMC::Brake* msg)
        {
          if (msg->op == IMC::Brake::OP_START)
            m_braking = true;
          else
            m_braking = false;
        }

        //! Computes control values when receiving EstimatedState
        //! @param[in] timestep time interval to use in pid controller
        //! @param[in] msg pointer to EstimatedState message
        void
        onEstimatedState(const double timestep, const IMC::EstimatedState* msg)
        {
          // Desired actuation torque vector.
          IMC::DesiredControl torques;

          // If necessary compute rates
          IMC::EstimatedState temp_estate = *msg;

          if (m_args.compute_rates)
          {
            temp_estate.p = (msg->phi - m_prev_estate.phi) / timestep;
            temp_estate.q = (msg->theta - m_prev_estate.theta) / timestep;
            temp_estate.r = Angles::normalizeRadian(msg->psi - m_prev_estate.psi) / timestep;
            msg = &temp_estate;
          }

          if (!m_args.error_attitude)
          {
            torques.m = depthControl(timestep, msg);

            if (m_args.roll_control_enabled)
              torques.k = rollControl(timestep, msg);
            else
              torques.k = 0;

            torques.n = headingControl(timestep, msg);
          }
          else
          {
            double elements_J2[9] = {1, sin(msg->phi)*tan(msg->theta), cos(msg->phi)*tan(msg->theta),
                                     0, cos(msg->phi), -sin(msg->phi),
                                     0, sin(msg->phi)/cos(msg->theta), cos(msg->phi)*cos(msg->theta)};
            Matrix J2(elements_J2, 3, 3);

            double elements_comdot[3] = {-msg->phi,
                                         depthControl(timestep, msg),
                                         headingControl(timestep, msg)};

            Matrix v = inverse(J2) * Matrix(elements_comdot, 3, 1);

            if (m_args.roll_control_enabled)
              torques.k = trimValue(v(0), -m_args.max_fin_rot, m_args.max_fin_rot);
            else
              torques.k = 0.0;

            torques.m = trimValue(v(1), -m_args.max_pitch_act, m_args.max_pitch_act);
            torques.n = trimValue(v(2), -m_args.max_fin_rot, m_args.max_fin_rot);
          }

          torques.flags = IMC::DesiredControl::FL_K | IMC::DesiredControl::FL_M | IMC::DesiredControl::FL_N;

          if (!m_braking)
            dispatch(torques);

          // Save last estimated state message
          m_prev_estate = *msg;
        }

        //! classical inner pitch/outter depth nested controller
        //! @param[in] timestep time interval to use in pid controller
        //! @param[in] msg pointer to EstimatedState message
        //! @return desired torque about y axis
        float
        depthControl(const double timestep, const IMC::EstimatedState* msg)
        {
          float cmd = 0;
          float z_error = 0;
          bool use_offset = m_args.use_depth_offset;
          bool surface = false;

          if (getVerticalMode() == VERTICAL_MODE_PITCH)
          {
            cmd = getVerticalRef();
          }
          else
          {
            switch (getVerticalMode())
            {
              case VERTICAL_MODE_DEPTH:
                if ((getVerticalRef() < c_depth_tol) && m_args.force_pitch)
                  surface = true;

                z_error = getVerticalRef() - msg->depth;

                if ((getVerticalRef() < c_depth_tol) && (m_args.depth_offset > 0))
                  use_offset = false;

                break;
              case VERTICAL_MODE_ALTITUDE:
                z_error = getBottomFollowDepth() - msg->depth;
                break;
              default:
                signalBadVertical();
                return 0.0;
            }

            if (use_offset)
              z_error += m_args.depth_offset;

            if (!surface)
            {
              // Positive depth implies negative pitch
              cmd = -m_pid[LP_DEPTH].step(timestep, z_error,
                                          -(-sin(msg->theta) * msg->u + cos(msg->theta) * (sin(msg->phi) * msg->v + cos(msg->phi) * msg->w)));
            }
            else
            {
              cmd = m_args.surface_pitch;
            }

            // Log the desired pitch
            m_pitch_ref.value = cmd;
            dispatch(m_pitch_ref);
          }

          //Now, track pitch
          float pitch_err = (cmd - msg->theta);

          // With attitude compensation we use a different approach
          if (m_args.error_attitude)
            return pitch_err;

          cmd = m_pid[LP_PITCH].step(timestep, pitch_err, -(msg->q * cos(msg->phi) - msg->r * sin(msg->phi)));
          return cmd;
        }

        //! Control the roll angle
        //! @param[in] timestep time interval to use in pid controller
        //! @param[in] msg pointer to EstimatedState message
        //! @return desired torque about x axis
        float
        rollControl(const double timestep, const IMC::EstimatedState* msg)
        {
          float ref = 0.0;

          if (m_args.use_roll_offset)
            ref = m_args.roll_offset;

          float cmd;

          cmd = m_pid[LP_ROLL].step(timestep, ref - msg->phi, -(msg->p + tan(msg->theta) * (sin(msg->phi) * msg->q + cos(msg->phi) * msg->r)));
          return cmd;
        }

        //! Control the heading angle
        //! @param[in] timestep time interval to use in pid controller
        //! @param[in] msg pointer to EstimatedState message
        //! @return desired torque about z axis
        float
        headingControl(const double timestep, const IMC::EstimatedState* msg)
        {
          float cmd = 0.0;

          switch (getYawMode())
          {
            case YAW_MODE_HEADING:
              // Outer heading controller
              cmd = m_pid[LP_HEADING].step(timestep, Angles::normalizeRadian(getYawRef() - msg->psi), -(sin(msg->phi) * msg->q + cos(msg->phi) * msg->r) / cos(msg->theta));

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

          // With attitude compensation we use a different approach
          if (m_args.error_attitude)
            return heading_err;

          if (!m_args.hrate_oloop)
            cmd = m_pid[LP_HRATE].step(timestep, heading_err);
          else
            cmd = m_args.gains[LP_HRATE][0] * cmd;

          return cmd;
        }
      };
    }
  }
}

DUNE_TASK
