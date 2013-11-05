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
        // Actuation Inverse Matrix.
        Matrix actuat;
        double max_speed;
        bool dh_control;
      };

      struct Task: public DUNE::Control::BasicRemoteOperation
      {
        //! Thruster actuation vector.
        Matrix m_thruster;
        //! Vector of forces to apply.
        Matrix m_forces;
        //! Desired Velocity message.
        IMC::DesiredVelocity m_dvel;
        //! Current vehicle depth.
        float m_depth;
        //! Depth control mode active.
        bool m_depth_control;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicRemoteOperation(name, ctx),
          m_thruster(5, 1, 0.0),
          m_forces(6, 1, 0.0)
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

          // Add remote actions.
          addActionAxis("Forward");
          addActionAxis("Starboard");
          addActionAxis("Up");
          addActionAxis("Rotate");
          addActionButton("Stop");

        }

        void
        onActivation(void)
        {
          m_thruster.fill(0);

          actuate();
        }

        void
        onDeactivation(void)
        {
          m_thruster.fill(0);

          actuate();
        }

        void
        processTuples(TupleList& tuples)
        {
          m_forces(0, 0) = tuples.get("Forward", 0) / 127.0;   // X
          m_forces(1, 0) = tuples.get("Starboard", 0) / 127.0; // Y
          m_forces(3, 0) = 0.0;                                // K
          m_forces(4, 0) = 0.0;                                // M
          m_forces(5, 0) = tuples.get("Rotate", 0) / 127.0;    // N

          if (!m_depth_control)
            m_forces(2, 0) = tuples.get("Up", 0) / 127.0;      // Z
        }

        void
        onRemoteActions(const IMC::RemoteActions* msg)
        {
          TupleList tuples(msg->actions);

          processTuples(tuples);

          if (tuples.get("Depth Control", 0))
          {
            if (!m_depth_control)
              return;

            disableControlLoops(IMC::CL_DEPTH);
            m_depth_control = false;

            debug("depth control not active");
          }
          else
          {
            if (m_depth_control)
              return;

            enableControlLoops(IMC::CL_DEPTH);
            m_depth_control = true;

            IMC::DesiredZ z;
            z.value = m_depth;
            z.z_units = IMC::Z_DEPTH;
            dispatch(z);

            debug("depth control active for %0.2f m", z.value);
          }
        }

        void
        onConnectionTimeout(void)
        {
          m_thruster.fill(0);

          actuate();
        }

        void
        actuate(void)
        {
          m_thruster = m_args.actuat * m_forces;

          for (int i = 0; i < 5; i++)
          {
            IMC::SetThrusterActuation sta;
            sta.id = i;
            sta.value = trimValue(m_thruster(i, 0), -1.0, 1.0);
            dispatch(sta);
          }
        }
      };
    }
  }
}

DUNE_TASK
