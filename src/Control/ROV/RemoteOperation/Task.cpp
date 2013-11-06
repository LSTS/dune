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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace ROV
  {
    namespace RemoteOperation
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        Matrix actuat;
        double max_speed;
        bool dh_control;
        float depth_rate;
        float heading_rate;
      };

      struct Task: public DUNE::Control::BasicRemoteOperation
      {
        //! Thruster actuation vector.
        Matrix m_thruster;
        //! Vector of forces to apply.
        Matrix m_forces;
        //! Desired Velocity message.
        IMC::DesiredVelocity m_dvel;
        //! Starting depth
        float m_start_depth;
        //! Starting heading
        float m_start_heading;
        //! Current vehicle depth.
        float m_depth;
        //! Current vehicle heading.
        float m_heading;
        //! Flag is true if we have depth and heading data
        bool m_dh_data;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicRemoteOperation(name, ctx),
          m_thruster(5, 1, 0.0),
          m_forces(6, 1, 0.0),
          m_dh_data(false)
        {
          param("Actuation Inverse Matrix", m_args.actuat)
          .defaultValue("")
          .size(30)
          .description("Actuation Inverse Matrix");

          param("Maximum Speed Allowed", m_args.max_speed)
          .defaultValue("1.5")
          .units(Units::MeterPerSecond)
          .description("Maximum speed allowed for remote operation");

          param("Depth and Heading Control", m_args.dh_control)
          .defaultValue("false")
          .description("Turn on actively control of depth and heading");

          param("Depth Rate", m_args.depth_rate)
          .defaultValue("0.1")
          .units(Units::MeterPerSecond)
          .description("Rate of increase or decrease of depth with control enabled.");

          param("Heading Rate", m_args.heading_rate)
          .defaultValue("0.05")
          .units(Units::RadianPerSecond)
          .description("Rate of increase or decrease of heading with control enabled.");

          // Add remote actions.
          addActionAxis("Forward");
          addActionAxis("Starboard");
          addActionAxis("Up");
          addActionAxis("Rotate");
          addActionButton("Stop");

          bind<IMC::EstimatedState>(this);
        }

        void
        onActivation(void)
        {
          m_thruster.fill(0);

          if (m_args.dh_control)
          {
            enableControlLoops(IMC::CL_SPEED | IMC::CL_DEPTH | IMC::CL_YAW);
            m_depth = m_start_depth;
            m_heading = m_start_heading;
          }
          else
          {
            disableControlLoops(IMC::CL_DEPTH | IMC::CL_YAW);
          }

          actuate();
        }

        void
        onDeactivation(void)
        {
          if (m_args.dh_control)
            disableControlLoops(IMC::CL_DEPTH | IMC::CL_YAW | IMC::CL_SPEED);

          m_thruster.fill(0);

          actuate();
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          m_dh_data = true;
          m_start_depth = msg->depth;
          m_start_heading = msg->psi;
        }

        void
        onRemoteActions(const IMC::RemoteActions* msg)
        {
          TupleList tuples(msg->actions);

          if (m_args.dh_control)
          {
            m_forces(0, 0) = tuples.get("Forward", 0) / 127.0;   // X
            m_forces(1, 0) = tuples.get("Starboard", 0) / 127.0; // Y

            m_depth += tuples.get("Up", 0) / 127.0 * m_args.depth_rate;
            m_depth = std::max(0.0f, m_depth);

            m_heading += tuples.get("Rotate", 0) / 127.0 * m_args.heading_rate;
            m_heading = Math::Angles::normalizeRadian(m_heading);

            if (tuples.get("Stop", 1))
            {
              m_depth = m_start_depth;
              m_heading = m_start_heading;
            }

            debug("desired depth: %.1f", m_depth);
            debug("desired heading: %.1f", m_heading * 180.0 / DUNE::Math::c_pi);
          }
          else
          {
            m_forces(0, 0) = tuples.get("Forward", 0) / 127.0;   // X
            m_forces(1, 0) = tuples.get("Starboard", 0) / 127.0; // Y
            m_forces(3, 0) = 0.0;                                // K
            m_forces(4, 0) = 0.0;                                // M
            m_forces(2, 0) = tuples.get("Up", 0) / 127.0;      // Z
            m_forces(5, 0) = tuples.get("Rotate", 0) / 127.0;    // N
          }
        }

        void
        onConnectionTimeout(void)
        {
          m_thruster.fill(0);

          if (m_args.dh_control)
          {
            disableControlLoops(IMC::CL_DEPTH | IMC::CL_YAW);
            m_depth = m_start_depth;
            m_heading = m_start_heading;
          }

          actuate();
        }

        void
        actuateThruster(unsigned i)
        {
          IMC::SetThrusterActuation sta;
          sta.id = i;
          sta.value = trimValue(m_thruster(i, 0), -1.0, 1.0);
          dispatch(sta);
        }

        void
        actuate(void)
        {
          if (m_args.dh_control && m_dh_data)
          {
            IMC::DesiredVelocity dvel;
            dvel.flags = IMC::DesiredVelocity::FL_SURGE | IMC::DesiredVelocity::FL_SWAY;
            dvel.u = m_forces(0, 0);
            dvel.v = m_forces(1, 0);
            dispatch(dvel);

            IMC::DesiredHeading d_heading;
            d_heading.value = m_heading;
            dispatch(d_heading);

            IMC::DesiredZ d_z;
            d_z.z_units = IMC::Z_DEPTH;
            d_z.value = m_depth;
            dispatch(d_z);
          }
          else
          {
            m_thruster = m_args.actuat * m_forces;

            for (int i = 0; i < 5; i++)
              actuateThruster(i);
          }
        }
      };
    }
  }
}

DUNE_TASK
