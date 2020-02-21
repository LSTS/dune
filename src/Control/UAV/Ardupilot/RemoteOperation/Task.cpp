//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Keila Lima                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <sstream>
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// MAVLink headers.
#include <mavlink/ardupilotmega/mavlink.h>

namespace Control
{
  namespace UAV
  {
    namespace Ardupilot
    {
      namespace RemoteOperation
      {
        using DUNE_NAMESPACES;

        struct Arguments
        {
        };

        struct Task: public DUNE::Control::BasicRemoteOperation
        {
          Arguments m_args; // Task arguments.

          Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Control::BasicRemoteOperation(name, ctx)
          {

            // Add remote actions.
            addActionAxis("VerticalRate");
            addActionAxis("Speed");
            addActionAxis("Bank");
          }

          void
          onUpdateParameters(void)
          {
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

            update();
          }

          void
          update(void)
          {

          }

          void
          onRemoteActions(const IMC::RemoteActions* msg)
          {
            TupleList tl(msg->actions);

            tl.get("Forward", 0.0);
            tl.get("Up", 0.0);
            tl.get("Rotate", 0.0);
            tl.get("Starboard", 0.0);
            tl.get("Lights", 0.0);
            tl.get("Camera", 0.0);

            update();
          }
        };
      }
    }
  }
}

DUNE_TASK
