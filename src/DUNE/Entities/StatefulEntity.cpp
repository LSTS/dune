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
// Author: Ricardo Martins                                                  *
// Author: Renato Caldas                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/Entities/StatefulEntity.hpp>
#include <DUNE/Tasks/Task.hpp>

namespace DUNE
{
  namespace Entities
  {
    void
    StatefulEntity::setState(IMC::EntityState::StateEnum state,
                           Status::Code code)
    {
      bool new_state = (state != m_entity_state.state);

      m_entity_state.state = state;
      if (code != m_entity_state_code)
        m_entity_state.description = DTR(Status::getString(code));
      m_entity_state_code = code;

      if (new_state && (getId() != DUNE_IMC_CONST_UNK_EID))
        dispatch(m_entity_state);
    }

    void
    StatefulEntity::setState(IMC::EntityState::StateEnum state,
                           const std::string& message)
    {
      bool new_state = (state != m_entity_state.state);

      m_entity_state.state = state;
      m_entity_state.description = message;
      m_entity_state_code = -1;

      if (new_state && (getId() != DUNE_IMC_CONST_UNK_EID))
        dispatch(m_entity_state);
    }

    void
    StatefulEntity::reportState(void)
    {
      dispatch(m_entity_state);
    }

    void
    StatefulEntity::reportActivationState(void)
    {
      dispatch(m_act_state);
    }

    void
    StatefulEntity::requestActivation(void)
    {
      if (m_act_state.state != IMC::EntityActivationState::EAS_INACTIVE)
      {
        m_owner->spew("entity is not inactive");

        if ((m_act_state.state == IMC::EntityActivationState::EAS_DEACT_IP)
            || (m_act_state.state == IMC::EntityActivationState::EAS_DEACT_DONE)
            || (m_act_state.state == IMC::EntityActivationState::EAS_DEACT_FAIL)
            || (m_act_state.state == IMC::EntityActivationState::EAS_ACT_FAIL))
        {
          m_owner->spew("saving activation request");
          m_next_act_state = NAS_ACTIVE;
        }
        else if (m_act_state.state == IMC::EntityActivationState::EAS_ACT_IP)
        {
          m_owner->spew("activation is in progress");
          m_next_act_state = NAS_ACTIVE;
        }

        dispatch(m_act_state);
        return;
      }

      m_next_act_state = NAS_SAME;
      m_act_state.state = IMC::EntityActivationState::EAS_ACT_IP;
      dispatch(m_act_state);
    }

    void
    StatefulEntity::requestDeactivation(void)
    {
      if (m_act_state.state != IMC::EntityActivationState::EAS_ACTIVE)
      {
        m_owner->spew("entity is not active");

        if ((m_act_state.state == IMC::EntityActivationState::EAS_DEACT_FAIL)
            || (m_act_state.state == IMC::EntityActivationState::EAS_ACT_IP)
            || (m_act_state.state == IMC::EntityActivationState::EAS_ACT_DONE)
            || (m_act_state.state == IMC::EntityActivationState::EAS_ACT_FAIL))
        {
          m_owner->spew("saving deactivation request");
          m_next_act_state = NAS_INACTIVE;
        }
        else if (m_act_state.state == IMC::EntityActivationState::EAS_DEACT_IP)
        {
          m_owner->spew("deactivation is in progress");
          m_next_act_state = NAS_INACTIVE;
        }

        dispatch(m_act_state);
        return;
      }

      m_next_act_state = NAS_SAME;
      m_act_state.state = IMC::EntityActivationState::EAS_DEACT_IP;
      dispatch(m_act_state);
    }

    void
    StatefulEntity::failActivation(const std::string& reason)
    {
      m_act_state.state = IMC::EntityActivationState::EAS_ACT_FAIL;
      m_act_state.error = reason;
      dispatch(m_act_state);

      m_act_state.state = IMC::EntityActivationState::EAS_INACTIVE;
      m_act_state.error.clear();
      dispatch(m_act_state);
    }

    void
    StatefulEntity::succeedActivation(void)
    {
      m_act_state.state = IMC::EntityActivationState::EAS_ACT_DONE;
      dispatch(m_act_state);

      m_act_state.state = IMC::EntityActivationState::EAS_ACTIVE;
      dispatch(m_act_state);

      if (m_next_act_state == NAS_INACTIVE)
        requestDeactivation();
    }

    void
    StatefulEntity::succeedDeactivation(void)
    {
      m_act_state.state = IMC::EntityActivationState::EAS_DEACT_DONE;
      dispatch(m_act_state);

      m_act_state.state = IMC::EntityActivationState::EAS_INACTIVE;
      dispatch(m_act_state);

      if (m_next_act_state == NAS_ACTIVE)
        requestActivation();
    }

    void
    StatefulEntity::failDeactivation(const std::string& reason)
    {
      m_act_state.state = IMC::EntityActivationState::EAS_DEACT_FAIL;
      m_act_state.error = reason;
      dispatch(m_act_state);

      m_act_state.state = IMC::EntityActivationState::EAS_ACTIVE;
      m_act_state.error.clear();
      dispatch(m_act_state);
    }

    void
    StatefulEntity::consume(const IMC::QueryEntityState* msg)
    {
      (void)msg;
      reportState();
    }

    void
    StatefulEntity::consume(const IMC::QueryEntityActivationState* msg)
    {
      if (msg->getDestinationEntity() != getId())
        return;

      reportActivationState();
    }
  }
}
