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
// Author: Renato Caldas                                                    *
//***************************************************************************

#ifndef VISION_LUMENERA_ENTITY_ACTIVATION_MASTER_HPP_INCLUDED_
#define VISION_LUMENERA_ENTITY_ACTIVATION_MASTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "EntityActivation.hpp"

namespace Vision
{
  namespace Lumenera
  {
    using DUNE_NAMESPACES;

    class EntityActivationMaster
    {
    public:
      EntityActivationMaster(DUNE::Tasks::Task* task):
        m_owner(task)
      { }

      void
      clear(void)
      {
        m_slave_entities.clear();
      }

      void
      addEntity(const std::string& entity, const std::string& system = "")
      {
        m_slave_entities.push_back(EntityActivation(m_owner));
        EntityActivation& ea = m_slave_entities.back();

        ea.setEntityLabel(entity);
        if (system == "")
          ea.setSystemName(std::string(m_owner->getSystemName()));
        else
          ea.setSystemName(system);

        m_owner->trace("Added %s:%s", ea.getSystemName().c_str(), ea.getEntityLabel().c_str());
      }

      void
      activate(void)
      {
        std::vector<EntityActivation>::iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          itr->activate();
        }
      }

      void
      deactivate(void)
      {
        std::vector<EntityActivation>::iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          itr->deactivate();
        }
      }

      bool
      checkActivation(void)
      {
        bool rv = true;

        std::vector<EntityActivation>::iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          if (!itr->checkActivation())
          {
            rv = false;
            m_owner->trace("slave entity is not yet active: %s:%s", itr->getSystemName().c_str(), itr->getEntityLabel().c_str());
          }
        }
        return rv;
      }

      bool
      checkDeactivation(void)
      {
        bool rv = true;

        std::vector<EntityActivation>::iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          if (!itr->checkDeactivation())
          {
            rv = false;
            m_owner->trace("slave entity is still active: %s:%s", itr->getSystemName().c_str(), itr->getEntityLabel().c_str());
          }
        }
        return rv;
      }

      void
      onEntityInfo(const IMC::EntityInfo* msg)
      {
        // Only care about remote systems
        if (m_owner->getSystemId() == msg->getSource())
          return;

        std::vector<EntityActivation>::iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          if (itr->getSystemId() != msg->getSource())
            continue;

          if (itr->getEntityId() != DUNE_IMC_CONST_UNK_EID)
            continue;

          if (itr->getEntityLabel() == msg->label)
          {
            itr->setEntityId(msg->getSourceEntity());
            return;
          }
        }
      }

      void
      onEntityActivationState(const IMC::EntityActivationState* msg)
      {
        std::vector<EntityActivation>::iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          try
          {
            if (itr->getSystemId() != msg->getSource())
              continue;

            if (itr->getEntityId() != msg->getSourceEntity())
              continue;
          }
          catch (...)
          {
            continue;
          }

          itr->entityActivationUpdate((const IMC::EntityActivationState::StateEnum)(msg->state));
          break;
        }
      }

    private:
      //! Owner task
      DUNE::Tasks::Task* m_owner;
      //! Slave entity labels.
      std::vector<EntityActivation> m_slave_entities;

    };
  }
}

#endif
