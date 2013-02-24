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
      std::vector<std::string> idle_elbs;
      std::vector<std::string> plan_elbs;
      std::vector<std::string> manual_elbs;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      // Task arguments.
      Arguments m_args;
      // Entity control message.
      IMC::EntityControl m_ectl;
      // Entity Ids by mode.
      std::set<unsigned> m_eids[MODE_COUNT];
      // All Entity Ids regardeless of mode.
      std::set<unsigned> m_all_eids;
      // Current system mode.
      Modes m_mode;
      // New system modem.
      Modes m_new_mode;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_mode(MODE_NONE),
        m_new_mode(MODE_NONE)
      {
        // Define configuration parameters.
        param("Idle Mode - Entity Labels", m_args.idle_elbs)
        .defaultValue("")
        .description("List of entity labels that should be enabled on idle mode");

        param("Plan Mode - Entity Labels", m_args.plan_elbs)
        .defaultValue("")
        .description("List of entity labels that should be enabled on plan execution mode");

        param("Manual Mode - Entity Labels", m_args.manual_elbs)
        .defaultValue("")
        .description("List of entity labels that should be enabled on remote operation mode");

        m_ectl.setDestination(getSystemId());

        // Register listeners.
        bind<IMC::VehicleState>(this);
      }

      void
      onResourceInitialization(void)
      {
        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onEntityResolution(void)
      {
        for (unsigned i = 0; i < m_args.idle_elbs.size(); ++i)
        {
          try
          {
            unsigned eid = resolveEntity(m_args.idle_elbs[i]);
            m_eids[MODE_IDLE].insert(eid);
            m_all_eids.insert(eid);
          }
          catch (std::runtime_error& e)
          {
            war("failed to resolve entity '%s': %s",
                m_args.idle_elbs[i].c_str(), e.what());
          }
        }

        for (unsigned i = 0; i < m_args.plan_elbs.size(); ++i)
        {
          try
          {
            unsigned eid = resolveEntity(m_args.plan_elbs[i]);
            m_eids[MODE_PLAN].insert(eid);
            m_all_eids.insert(eid);
          }
          catch (std::runtime_error& e)
          {
            war("failed to resolve entity '%s': %s",
                m_args.plan_elbs[i].c_str(), e.what());
          }
        }

        for (unsigned i = 0; i < m_args.manual_elbs.size(); ++i)
        {
          try
          {
            unsigned eid = resolveEntity(m_args.manual_elbs[i]);
            m_eids[MODE_MANUAL].insert(eid);
            m_all_eids.insert(eid);
          }
          catch (std::runtime_error& e)
          {
            war("failed to resolve entity '%s': %s",
                m_args.manual_elbs[i].c_str(), e.what());
          }
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
      task(void)
      {
        if (m_new_mode == MODE_NONE)
          return;

        if (m_new_mode == m_mode)
          return;

        std::set<unsigned>::iterator itr = m_all_eids.begin();
        for (; itr != m_all_eids.end(); ++itr)
        {
          m_ectl.setDestinationEntity(*itr);

          if (m_eids[m_new_mode].find(*itr) == m_eids[m_new_mode].end())
            m_ectl.op = IMC::EntityControl::ECO_DEACTIVATE;
          else
            m_ectl.op = IMC::EntityControl::ECO_ACTIVATE;

          dispatch(m_ectl);
        }

        m_mode = m_new_mode;
      }
    };
  }
}

DUNE_TASK
