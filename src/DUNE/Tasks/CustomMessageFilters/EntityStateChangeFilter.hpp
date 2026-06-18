//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#ifndef DUNE_TASKS_CUSTOM_MESSAGE_FILTERS_ENTITY_STATE_CHANGE_FILTER_HPP_INCLUDED_
#define DUNE_TASKS_CUSTOM_MESSAGE_FILTERS_ENTITY_STATE_CHANGE_FILTER_HPP_INCLUDED_

#include "CustomMessageFilter.hpp"

#include <unordered_map>
#include <unordered_set>

#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Tasks/Task.hpp>

namespace DUNE
{
  namespace Tasks
  {
    class EntityStateChangeFilter : public CustomMessageFilter
    {
    public:
      EntityStateChangeFilter(DUNE::Tasks::Task* task, const std::string& spec = ""):
        CustomMessageFilter(DUNE::IMC::EntityState::getIdStatic())
      {
        if (spec.empty())
          return;

        std::vector<std::string> parts;
        DUNE::Utils::String::split(spec, "+", parts);
        for (auto& part : parts)
        {
          try
          {
            auto id = task->resolveEntity(part);
            m_monitored_entities.insert(id);
          }
          catch(const std::exception& e)
          {
            DUNE_WRN("EntityStateChangeFilter", "invalid entity label in filter specification: " << part);
            continue;
          }
        }
      }

      bool
      filter(const DUNE::IMC::Message* msg) override
      {
        const auto entity_state_msg = dynamic_cast<const DUNE::IMC::EntityState*>(msg);
        if (entity_state_msg == nullptr)
          return false;

        auto id = entity_state_msg->getSourceEntity();
        if (!m_monitored_entities.empty() && m_monitored_entities.find(id) == m_monitored_entities.end())
          return false;

        auto state = entity_state_msg->state;
        auto it = m_entity_states.find(id);
        if (it == m_entity_states.end())
        {
          m_entity_states[id] = state;
          return false;
        }

        if (it->second == state)
          return true;

        it->second = state;
        return false;
      }

    private:
      //! Map of entity id to last known state.
      std::unordered_map<uint16_t, uint8_t> m_entity_states;
      //! Set of entity ids to monitor.
      std::unordered_set<uint16_t> m_monitored_entities;
    };
  }
}

#endif
