//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
// Author: Eduardo Marques (original maneuver implementation)               *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Goto.hpp"
#include "Loiter.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    enum ManeuverType
    {
      //! Type Goto
      TYPE_GOTO,
      //! Type Loiter
      TYPE_LOITER
    };

    struct Arguments
    {
      //! Loiter Arguments
      Loiter::LoiterArgs loiter;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Loiter
      Loiter* m_loiter;
      //! Goto
      Goto* m_goto;
      //! Type of maneuver to perform
      ManeuverType m_type;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_loiter(NULL)
      {
        param("Loiter -- Minimum Radius", m_args.loiter.min_radius)
        .defaultValue("10.0")
        .description("Minimum radius to prevent incompatibility with path controller");

        bindToManeuver<Task, IMC::Goto>();
        bindToManeuver<Task, IMC::Loiter>();
      }

      void
      onResourceAcquisition(void)
      {
        m_goto = new Goto(static_cast<Maneuvers::Maneuver*>(this));
        m_loiter = new Loiter(static_cast<Maneuvers::Maneuver*>(this), &m_args.loiter);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_goto);
        Memory::clear(m_loiter);
      }

      void
      consume(const IMC::Goto* maneuver)
      {
        m_type = TYPE_GOTO;
        m_goto->start(maneuver);
      }

      void
      consume(const IMC::Loiter* maneuver)
      {
        m_type = TYPE_LOITER;
        m_loiter->start(maneuver);
      }

      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        switch (m_type)
        {
          case TYPE_GOTO:
            m_goto->onPathControlState(pcs);
            break;
          case TYPE_LOITER:
            m_loiter->onPathControlState(pcs);
            break;
        }
      }
    };
  }
}

DUNE_TASK
