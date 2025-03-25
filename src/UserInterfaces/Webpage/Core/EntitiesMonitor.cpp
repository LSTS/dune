//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins (legacy Transports/HTTP)                         *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "EntitiesMonitor.hpp"

namespace UserInterfaces
{
  namespace Webpage
  {
    using DUNE_NAMESPACES;

    EntitiesMonitor::EntitiesMonitor(DUNE::Tasks::Task* task):
      m_task(task)
    {
    }

    EntitiesMonitor::~EntitiesMonitor(void)
    {
    }

    void
    EntitiesMonitor::setEntities(const std::map<unsigned, std::string>& entities)
    {
      m_entities.clear();
      for (const auto& entity: entities)
        m_entities[entity.first] = {DUNE::IMC::EntityState::ESTA_BOOT, entity.second, ""};
    }

    json
    EntitiesMonitor::entitiesJSON(void)
    {
      json j;
      auto& dune_entities = j["dune_entities"];
      for (const auto& it: m_entities)
      {
        uint8_t state;
        std::string label, description;
        auto& entity = dune_entities[it.first];
        std::tie(state, label, description) = it.second;
        entity["state"] = static_cast<int>(state);
        entity["label"] = label;
        entity["description"] = description;
      }

      return j;
    }

    void
    EntitiesMonitor::updateEntityState(const DUNE::IMC::EntityState* msg)
    {
      const auto& entity = m_entities.find(msg->getSourceEntity());
      if (entity != m_entities.end())
        entity->second = {msg->state, m_task->resolveEntity(msg->getSourceEntity()), msg->description};
      else
        m_entities[msg->getSourceEntity()] = {msg->state, m_task->resolveEntity(msg->getSourceEntity()), msg->description};
    }
  }
}
