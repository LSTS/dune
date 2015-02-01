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
// Note:                                                                    *
// Professor Edvaldo Assunção (UNESP Brasil) LMI controller design          *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <limits>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace AUV
  {
    namespace LMI
    {
      using DUNE_NAMESPACES;

      //! Depth tolerance to be considered surface
      static const float c_depth_tol = 0.1f;
      //! Controllable loops
      static const uint32_t c_controllable = IMC::CL_YAW | IMC::CL_YAW_RATE | IMC::CL_DEPTH | IMC::CL_PITCH;
      //! Required loops
      static const uint32_t c_required = IMC::CL_TORQUE;

      struct Arguments
      {
        //! Maximum fin rotation
        float max_fin_rot;
        //! Enable or disable roll control
        bool roll_control_enabled;
        //! Maximum pitch actuation
        float max_pitch_act;
        //! Maximum pitch reference
        float max_pitch;
        //! Force pitch at surface
        bool force_pitch;
        //! Use a fixed depth offset
        bool use_depth_offset;
        //! Fixed depth offset
        float depth_offset;
        //! Maximum admissible depth error
        float max_depth_error;
        //! Gain Matrix
        Matrix k_gain;
      };

      struct Task: public DUNE::Control::BasicAutopilot
      {
        //! Desired actuation torque vector.
        IMC::DesiredControl m_torques;
        //! Heading controller heading rate reference
        IMC::DesiredHeadingRate m_hrate_ref;
        //! Depth controller pitch reference
        IMC::DesiredPitch m_pitch_ref;
        //! Task Arguments
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicAutopilot(name, ctx, c_controllable, c_required)
        {
          param(DTR_RT("Maximum Fin Rotation"), m_args.max_fin_rot)
          .defaultValue("15.0")
          .units(Units::Degree)
          .description(DTR("Maximum admissible fin rotation"));

          param("Enable roll controller", m_args.roll_control_enabled)
          .defaultValue("true")
          .description("");

          param("Maximum Pitch Actuation", m_args.max_pitch_act)
          .defaultValue("15.0")
          .units(Units::Degree)
          .description("Maximum admissible fin actuation for the pitch controller");

          //@TODO - what control margin should we reserve for roll?
          //Notice that this would be the absolute minimum, for the case
          //when the depth controller wants maximum actuation

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

          param("Maximum Depth Error", m_args.max_depth_error)
          .defaultValue("2.0")
          .units(Units::Meter)
          .description("Maximum admissible depth error to be given to the controller");

          param("Force Pitch At Surface", m_args.force_pitch)
          .defaultValue("false")
          .units(Units::Meter)
          .description("Force pitching up at the surface");

          param("Gain Matrix", m_args.k_gain)
          .defaultValue("")
          .description("Gain matrix for this LMI controller");
        }

        void
        onResourceInitialization(void)
        {
          BasicAutopilot::onResourceInitialization();
        }

        void
        onUpdateParameters(void)
        {
          // Validate gain matrix
          if ((m_args.k_gain.rows() != 3) || (m_args.k_gain.columns() != 12))
          {
            std::string str = DTR("Gain matrix has invalid dimensions");
            err("%s", str.c_str());
            throw std::runtime_error(str);
          }

          std::stringstream ss;
          ss << m_args.k_gain;
          spew("%s", ss.str().c_str());

          // Pitch control parameters
          m_args.max_pitch_act = Angles::radians(m_args.max_pitch_act);

          // Depth control parameters
          m_args.max_pitch = Angles::radians(m_args.max_pitch);
        }

        void
        reset(void)
        {
          BasicAutopilot::reset();
        }

        void
        onEstimatedState(const double timestep, const IMC::EstimatedState* msg)
        {
          (void)timestep;

          if (getYawMode() != YAW_MODE_HEADING)
          {
            signalBadYaw();
            return;
          }

          bool use_offset = m_args.use_depth_offset;
          bool surface = false;
          double depth_error = 0;
          double pitch_error = 0;

          switch (getVerticalMode())
          {
            case VERTICAL_MODE_DEPTH:
              if ((getVerticalRef() < c_depth_tol) && m_args.force_pitch)
                surface = true;

              depth_error = msg->depth - getVerticalRef();

              if ((getVerticalRef() < c_depth_tol) && (m_args.depth_offset > 0))
                use_offset = false;

              break;
            case VERTICAL_MODE_ALTITUDE:
              depth_error = msg->alt - getBottomFollowDepth();
              break;
            case VERTICAL_MODE_PITCH:
              pitch_error = trimValue(msg->theta - getVerticalRef(),
                                      -m_args.max_pitch,
                                      m_args.max_pitch);
              break;
            default:
              signalBadVertical();
              return;
          }

          //! use depth error offset
          if (use_offset)
            depth_error -= m_args.depth_offset;

          depth_error = trimValue(depth_error, -m_args.max_depth_error, m_args.max_depth_error);

          //! is it at the surface and supposed to force pitch
          if (surface)
          {
            depth_error = 0.0;
            pitch_error = -m_args.max_pitch;
          }

          double heading_error = Angles::normalizeRadian(msg->psi - getYawRef());

          Matrix u(3, 1, 0.0);
          Matrix x(12, 1, 0.0);
          x(0) = msg->u;
          x(1) = msg->v;
          x(2) = msg->w;
          x(3) = msg->p;
          x(4) = msg->q;
          x(5) = msg->r;
          x(6) = msg->x;
          x(7) = msg->y;
          x(8) = depth_error;
          x(9) = -msg->phi;
          x(10) = pitch_error; // msg->theta; // wondering what happens here...
          x(11) = heading_error;

          u = m_args.k_gain * x;

          if (m_args.roll_control_enabled)
            m_torques.k = trimValue(u(0), -m_args.max_fin_rot, m_args.max_fin_rot);

          m_torques.m = trimValue(u(1), -m_args.max_pitch_act, m_args.max_pitch_act);
          m_torques.n = trimValue(u(2), -m_args.max_fin_rot, m_args.max_fin_rot);

          m_torques.flags = IMC::DesiredControl::FL_K | IMC::DesiredControl::FL_M | IMC::DesiredControl::FL_N;

          dispatch(m_torques);
        }
      };
    }
  }
}

DUNE_TASK
