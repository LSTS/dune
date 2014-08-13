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

    class EntityActivation
    {
    public:
      EntityActivation(DUNE::Tasks::Task* task):
        m_owner(task),
        m_id(DUNE_IMC_CONST_UNK_EID),
        m_sys_id(DUNE_IMC_CONST_NULL_ID),
        m_act_state(IMC::EntityActivationState::EAS_INACTIVE)
      { }

      void
      setEntity(unsigned int id)
      {
        m_id = id;
        m_name = "";
      }

      void
      setEntity(const std::string& name)
      {
        m_name = name;
        m_id = DUNE_IMC_CONST_UNK_EID;
      }

      void
      setSystem(const std::string& system)
      {
        m_system = system;
        m_sys_id = DUNE_IMC_CONST_NULL_ID;
      }

      void
      setSystem(unsigned int id)
      {
        m_sys_id = id;
        m_system = "";
      }

      unsigned int
      getSystemId(void) const
      {
        if (m_sys_id != DUNE_IMC_CONST_NULL_ID)
          return m_sys_id;
        else if (m_system != "")
          return m_owner->resolveSystemName(m_system.c_str());
        else
          return DUNE_IMC_CONST_NULL_ID;
      }

      const std::string
      getSystemName(void) const
      {
        if (m_system != "")
          return m_system;
        else if (m_sys_id != DUNE_IMC_CONST_NULL_ID)
          return std::string(m_owner->resolveSystemId(m_sys_id));
        else
          return std::string("");
      }

      unsigned int
      getEntityId(void) const
      {
        if (m_id != DUNE_IMC_CONST_UNK_EID)
          return m_id;
        else if (m_name != "")
          return m_owner->resolveEntity(m_name.c_str());
        else
          return DUNE_IMC_CONST_UNK_EID;
      }

      const std::string
      getEntityLabel(void) const
      {
        if (m_name != "")
          return m_name;
        else if (m_id != DUNE_IMC_CONST_UNK_EID)
          return std::string(m_owner->resolveEntity(m_id));
        else
          return std::string("");
      }

      void
      activate(void) const
      {
        setActiveParameter(true);
      }

      void
      deactivate(void) const
      {
        setActiveParameter(false);
      }

      bool
      checkActivation(void) const
      {
        if (m_act_state == IMC::EntityActivationState::EAS_ACTIVE)
          return true;

        if (m_act_state == IMC::EntityActivationState::EAS_INACTIVE)
          setActiveParameter(true);

        return false;
      }

      bool
      checkDeactivation(void) const
      {
        if (m_act_state == IMC::EntityActivationState::EAS_INACTIVE)
          return true;

        if (m_act_state == IMC::EntityActivationState::EAS_ACTIVE)
          setActiveParameter(false);

        return false;
      }

      void
      entityActivationUpdate(IMC::EntityActivationState::StateEnum state)
      {
        m_act_state = state;
      }

    private:
      //! Owner task
      DUNE::Tasks::Task* m_owner;
      //! Slave entity label.
      std::string m_name;
      //! Slave entity id.
      unsigned int m_id;
      //! Slave system name.
      std::string m_system;
      //! Slave system id.
      unsigned int m_sys_id;
      //! Last activation state
      IMC::EntityActivationState::StateEnum m_act_state;

      void
      setActiveParameter(bool value) const
      {
        IMC::SetEntityParameters ep;
        ep.name = getEntityLabel();
        IMC::EntityParameter ea;
        ea.name = "Active";
        ea.value = value ? "true" : "false";
        ep.params.push_back(ea);
        m_owner->dispatch(ep);
      }
    };
  }
}
