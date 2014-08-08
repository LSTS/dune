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
        m_slave_entities[label] = IMC::EntityActivationState::EAS_INACTIVE;
      }

      void
      activate(void)
      {
        std::map<std::string,IMC::EntityActivationState::StateEnum>::const_iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          setActiveParameter(itr->first, true);
        }
      }

      void
      deactivate(void)
      {
        std::map<std::string, IMC::EntityActivationState::StateEnum>::const_iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          setActiveParameter(itr->first, false);
        }
      }

      bool
      checkActivation(void)
      {
        bool rv = true;

        std::map<std::string, IMC::EntityActivationState::StateEnum>::const_iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          if  (itr->second == IMC::EntityActivationState::EAS_INACTIVE)
          {
            setActiveParameter(itr->first, true);
          }
          if (itr->second != IMC::EntityActivationState::EAS_ACTIVE)
          {
            m_owner->war("entity %s is not active", itr->first.c_str());
            rv = false;
          }
        }
        return rv;
      }

      bool
      checkDeactivation(void)
      {
        bool rv = true;

        std::map<std::string, IMC::EntityActivationState::StateEnum>::const_iterator itr = m_slave_entities.begin();
        for (; itr != m_slave_entities.end(); ++itr)
        {
          if  (itr->second == IMC::EntityActivationState::EAS_ACTIVE)
          {
            setActiveParameter(itr->first, false);
          }
          if (itr->second != IMC::EntityActivationState::EAS_INACTIVE)
          {
            m_owner->war("entity %s is not active", itr->first.c_str());
            rv = false;
          }
        }
        return rv;
      }

      void
      onEntityActivationState(const std::string &name, const IMC::EntityActivationState* msg)
      {
        std::map<std::string, IMC::EntityActivationState::StateEnum>::iterator itr = m_slave_entities.find(name);
        if (itr == m_slave_entities.end())
          return;

        itr->second = (const IMC::EntityActivationState::StateEnum)(msg->state);
      }

    private:
      //! Owner task
      DUNE::Tasks::Task* m_owner;
      //! Slave entity labels.
      std::map<std::string, IMC::EntityActivationState::StateEnum> m_slave_entities;

      void
      setActiveParameter(std::string name, bool value)
      {
        IMC::SetEntityParameters ep;
        ep.name = name;
        IMC::EntityParameter ea;
        ea.name = "Active";
        ea.value = value ? "true" : "false";
        ep.params.push_back(ea);
        m_owner->dispatch(ep);
      }
    };
  }
}
