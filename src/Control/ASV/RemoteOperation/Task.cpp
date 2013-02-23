//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
