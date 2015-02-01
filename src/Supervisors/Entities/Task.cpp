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
#include <string>
#include <vector>
#include <set>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  namespace Entities
  {
    using DUNE_NAMESPACES;

    enum Modes
    {
      MODE_IDLE = 0,
      MODE_PLAN = 1,
      MODE_MANUAL = 2,
      MODE_COUNT = 3,
      MODE_NONE = 4
    };

    struct Arguments
    {
      std::vector<std::string> elabels[MODE_COUNT];
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! Current system mode.
      Modes m_mode;
      //! New system modem.
      Modes m_new_mode;
      //! All entities names..
      std::set<std::string> m_elabels_all;
      //! Entity names by mode.
      std::set<std::string> m_elabels[MODE_COUNT];

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_mode(MODE_NONE),
        m_new_mode(MODE_NONE)
      {
        // Define configuration parameters.
        param("Idle Mode - Entity Labels", m_args.elabels[MODE_IDLE])
        .defaultValue("")
        .description("List of entity labels that should be enabled on idle mode");

        param("Plan Mode - Entity Labels", m_args.elabels[MODE_PLAN])
        .defaultValue("")
        .description("List of entity labels that should be enabled on plan execution mode");

        param("Manual Mode - Entity Labels", m_args.elabels[MODE_MANUAL])
        .defaultValue("")
        .description("List of entity labels that should be enabled on remote operation mode");

        // Register listeners.
        bind<IMC::VehicleState>(this);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onUpdateParameters(void)
      {
        m_elabels_all.clear();

        for (unsigned i = 0; i < MODE_COUNT; ++i)
        {
          m_elabels[i].clear();
          m_elabels[i].insert(m_args.elabels[i].begin(), m_args.elabels[i].end());
          m_elabels_all.insert(m_elabels[i].begin(), m_elabels[i].end());
        }
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        switch (msg->op_mode)
        {
          case IMC::VehicleState::VS_ERROR:
          case IMC::VehicleState::VS_SERVICE:
            m_new_mode = MODE_IDLE;
            break;
          case IMC::VehicleState::VS_CALIBRATION:
          case IMC::VehicleState::VS_MANEUVER:
          case IMC::VehicleState::VS_EXTERNAL:
            if (msg->maneuver_type == DUNE_IMC_TELEOPERATION)
              m_new_mode = MODE_MANUAL;
            else
              m_new_mode = MODE_PLAN;
            break;
        }
      }

      void
      sendActivation(const std::string& name, const std::string& value)
      {
        IMC::EntityParameter parm;
        parm.name = "Active";
        parm.value = value;

        IMC::SetEntityParameters eparm;
        eparm.name = name;
        eparm.params.push_back(parm);

        dispatch(eparm);
      }

      void
      task(void)
      {
        if (m_new_mode == MODE_NONE)
          return;

        if (m_new_mode == m_mode)
          return;

        std::set<std::string>::const_iterator itr = m_elabels_all.begin();
        for (; itr != m_elabels_all.end(); ++itr)
        {
          if (m_elabels[m_new_mode].find(*itr) == m_elabels[m_new_mode].end())
            sendActivation(*itr, "false");
          else
            sendActivation(*itr, "true");
        }

        m_mode = m_new_mode;
      }
    };
  }
}

DUNE_TASK
