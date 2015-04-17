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
// Author: Ricardo Martins                                                  *
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
      using DUNE_NAMESPACES;

      struct Task: public DUNE::Control::BasicRemoteOperation
      {
        // Motor commands.
        IMC::SetThrusterActuation m_thrust[2];

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicRemoteOperation(name, ctx)
        {
          // Add remote actions.
          addActionAxis("Port Motor");
          addActionAxis("Starboard Motor");

          // Initialize SetThrusterActuation messages.
          m_thrust[0].id = 0;
          m_thrust[1].id = 1;
        }

        void
        onActivation(void)
        {
          m_thrust[0].value = 0;
          m_thrust[1].value = 0;
          actuate();
        }

        void
        onDeactivation(void)
        {
          m_thrust[0].value = 0;
          m_thrust[1].value = 0;
          actuate();
        }

        void
        onConnectionTimeout(void)
        {
          m_thrust[0].value = 0;
          m_thrust[1].value = 0;
          actuate();
        }

        void
        onRemoteActions(const IMC::RemoteActions* msg)
        {
          TupleList tuples(msg->actions);

          m_thrust[0].value = Math::trimValue(tuples.get("Port Motor", 0) / 127.0, -1.0, 1.0);
          m_thrust[1].value = Math::trimValue(tuples.get("Starboard Motor", 0) / 127.0, -1.0, 1.0);
        }

        void
        actuate(void)
        {
          dispatch(m_thrust[0]);
          dispatch(m_thrust[1]);
        }
      };
    }
  }
}

DUNE_TASK
