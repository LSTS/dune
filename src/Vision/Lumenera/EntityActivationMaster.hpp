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
      addEntities(const std::vector<std::string>& labels)
      {
        std::vector<std::string>::const_iterator itr = labels.begin();
        for (; itr != labels.end(); ++itr)
          addEntity(*itr);
      }

      void
      addEntity(const std::string& label)
      {
        std::pair<std::string,EntityActivation> entity(label,EntityActivation(m_owner));
        std::pair<std::map<std::string,EntityActivation>::iterator, bool> rv = m_slave_entities.insert(entity);
        rv.first->second.setName(label);
      }

      void
      activate(void)
      {
        std::map<std::string,EntityActivation>::const_iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          itr->second.activate();
        }
      }

      void
      deactivate(void)
      {
        std::map<std::string,EntityActivation>::const_iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          itr->second.deactivate();
        }
      }

      bool
      checkActivation(void)
      {
        bool rv = true;

        std::map<std::string,EntityActivation>::const_iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          if (!itr->second.checkActivation())
          {
            rv = false;
            m_owner->trace("slave entity is not yet active: %s", itr->first.c_str());
          }
        }
        return rv;
      }

      bool
      checkDeactivation(void)
      {
        bool rv = true;

        std::map<std::string,EntityActivation>::const_iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          if (!itr->second.checkDeactivation())
          {
            rv = false;
            m_owner->trace("slave entity is still active: %s", itr->first.c_str());
          }
        }
        return rv;
      }

      void
      onEntityActivationState(const IMC::EntityActivationState* msg)
      {
        std::string name;
        if (msg->getSource() == m_owner->getSystemId())
        {
          name = m_owner->resolveEntity(msg->getSourceEntity());
        }
        else
        {
          m_owner->err("message from different system");
          return;
        }

        std::map<std::string,EntityActivation>::iterator itr = m_slave_entities.find(name);
        if (itr == m_slave_entities.end())
          return;

        itr->second.entityActivationUpdate((const IMC::EntityActivationState::StateEnum)(msg->state));
      }

    private:
      //! Owner task
      DUNE::Tasks::Task* m_owner;
      //! Slave entity labels.
      std::map<std::string,EntityActivation> m_slave_entities;
    };
  }
}
