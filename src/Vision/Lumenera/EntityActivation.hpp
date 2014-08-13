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
        m_owner(task)
      {
        m_act_state = IMC::EntityActivationState::EAS_INACTIVE;
      }

      void
      setName(const std::string& label)
      {
        m_name = label;
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
      //! Last activation state
      IMC::EntityActivationState::StateEnum m_act_state;

      void
      setActiveParameter(bool value) const
      {
        IMC::SetEntityParameters ep;
        ep.name = m_name;
        IMC::EntityParameter ea;
        ea.name = "Active";
        ea.value = value ? "true" : "false";
        ep.params.push_back(ea);
        m_owner->dispatch(ep);
      }
    };
  }
}
