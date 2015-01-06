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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <sstream>
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace UAV
  {
    namespace RemoteOperation
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        double max_bank; // Maximum bank angle.
        double max_vrate; // Maximum vertical rate.
        double min_speed; // Minimum speed.
        double max_speed; // Maximum speed.
      };

      struct Task: public DUNE::Control::BasicRemoteOperation
      {
        Arguments m_args; // Task arguments.
        IMC::DesiredRoll m_bank; // Bank reference.
        IMC::DesiredSpeed m_speed; // Speed reference.
        IMC::DesiredVerticalRate m_vrate; // Vertical rate reference.

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicRemoteOperation(name, ctx)
        {
          param("Maximum Bank", m_args.max_bank)
          .units(Units::Degree)
          .defaultValue("25")
          .description("Maximum value for bank reference");

          param("Maximum Vertical Rate", m_args.max_vrate)
          .units(Units::MeterPerSecond)
          .defaultValue("3")
          .description("Maximum value for vertical rate reference");

          param("Minimum Speed", m_args.min_speed)
          .units(Units::MeterPerSecond)
          .defaultValue("17")
          .description("Minimum value for speed reference");

          param("Maximum Speed", m_args.max_speed)
          .units(Units::MeterPerSecond)
          .defaultValue("24")
          .description("Maximum value for speed reference");

          m_speed.speed_units = IMC::SUNITS_METERS_PS;

          // Add remote actions.
          addActionAxis("VerticalRate");
          addActionAxis("Speed");
          addActionAxis("Bank");
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.max_bank))
            m_args.max_bank = Angles::radians(m_args.max_bank);
        }

        void
        onActivation(void)
        {
          enableControlLoops(IMC::CL_VERTICAL_RATE | IMC::CL_SPEED | IMC::CL_ROLL);
          normalize();
        }

        void
        onDeactivation(void)
        {
          normalize();
        }

        void
        onConnectionTimeout(void)
        {
          normalize();
        }

        void
        normalize()
        {
          m_bank.value = 0;
          m_vrate.value = 0;
          m_speed.value = (m_args.min_speed + m_args.max_speed) * 0.5;
          update();
        }

        void
        update(void)
        {
          trace("%0.2f %0.2f %0.2f", Angles::degrees(m_bank.value), m_speed.value, m_vrate.value);

          dispatch(m_bank);
          dispatch(m_speed);
          dispatch(m_vrate);
        }

        void
        onRemoteActions(const IMC::RemoteActions* msg)
        {
          TupleList tl(msg->actions);

          m_bank.value = tl.get("Bank", 0.0) / 127. * m_args.max_bank;
          m_vrate.value = -tl.get("VerticalRate", 0.0) / 127. * m_args.max_vrate;
          m_speed.value = m_args.min_speed +
          0.5 * (m_args.max_speed - m_args.min_speed) *
          (1 + tl.get("Speed", 0.0) / 127);
          update();
        }
      };
    }
  }
}

DUNE_TASK
