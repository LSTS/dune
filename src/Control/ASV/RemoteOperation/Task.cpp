//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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

      //! Task arguments.
      struct Arguments
      {
        //! Thrust scaling.
        double scale;
      };

      struct Task: public DUNE::Control::BasicRemoteOperation
      {
        //! Motor commands.
        IMC::SetThrusterActuation m_thrust[2];
        //! Task arguments.
        Arguments m_args;

        double m_speed;
        double m_heading;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicRemoteOperation(name, ctx)
        {
          param("Thrust Scale", m_args.scale)
          .defaultValue("1.0");

          // Add remote actions.
          addActionAxis("Port Motor");
          addActionAxis("Starboard Motor");
          addActionButton("Accelerate");
          addActionButton("Decelerate");
          addActionAxis("Heading");
          addActionButton("Stop");

          // Initialize SetThrusterActuation messages.
          m_thrust[0].id = 0;
          m_thrust[1].id = 1;
          m_speed = m_heading = 0;
        }

        void
        onActivation(void)
        {
          m_thrust[0].value = 0;
          m_thrust[1].value = 0;
          m_speed = m_heading = 0;
          actuate();
        }

        void
        onDeactivation(void)
        {
          m_thrust[0].value = 0;
          m_thrust[1].value = 0;
          m_speed = m_heading = 0;
          actuate();
        }

        void
        onConnectionTimeout(void)
        {
          m_thrust[0].value = 0;
          m_thrust[1].value = 0;
          m_speed = m_heading = 0;
          actuate();
        }

        double
        applyScale(int value)
        {
          return Math::trimValue((value / 127.0) * m_args.scale, -1.0, 1.0);
        }

        void
        onRemoteActions(const IMC::RemoteActions* msg)
        {
          TupleList tuples(msg->actions);

          m_thrust[0].value = applyScale(tuples.get("Port Motor", 0));
          m_thrust[1].value = applyScale(tuples.get("Starboard Motor", 0));

          if (m_thrust[0].value == 0 && m_thrust[1].value == 0)
          {
              if (tuples.get("Decelerate", 0))
                m_speed -= 0.05;
              else if (tuples.get("Accelerate", 0))
                m_speed += 0.05;

              m_speed = Math::trimValue(m_speed, -1.0 , 1.0);

              double hdng = (tuples.get("Heading", 0)) / 127.0;
              double leftThrust = m_speed;
              double rightThrust = m_speed;
              leftThrust *= 1+hdng*2;
              rightThrust *= 1-hdng*2;
              m_thrust[0].value = Math::trimValue(leftThrust, -1.0, 1.0);
              m_thrust[1].value = Math::trimValue(rightThrust, -1.0, 1.0);

              if (tuples.get("Stop", 0))
                m_speed = m_thrust[0].value = m_thrust[1].value = 0;
          }
          else
            m_speed = m_heading = 0;
        }

        void
        actuate(void)
        {
          debug("%0.2f %0.2f", m_thrust[0].value, m_thrust[1].value);

          dispatch(m_thrust[0]);
          dispatch(m_thrust[1]);
        }
      };
    }
  }
}

DUNE_TASK
