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

#ifndef DUNE_ENTITIES_STATEFUL_ENTITY_HPP_INCLUDED_
#define DUNE_ENTITIES_STATEFUL_ENTITY_HPP_INCLUDED_

// DUNE Headers.
#include <DUNE/Entities/BasicEntity.hpp>
#include <DUNE/Status/Messages.hpp>

namespace DUNE
{
  namespace Entities
  {
    class StatefulEntity : public BasicEntity
    {
    public:
      StatefulEntity(Tasks::Task* task):
        BasicEntity(task),
        m_entity_state_code(-1),
        m_next_act_state(NAS_SAME)
      {
        m_act_state.state = IMC::EntityActivationState::EAS_INACTIVE;
        setState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      void
      setBindings(Tasks::Recipient* recipient)
      {
        BasicEntity::setBindings(recipient);
        bind<IMC::QueryEntityState, StatefulEntity>(recipient, this);
        bind<IMC::QueryEntityActivationState, StatefulEntity>(recipient, this);
      }

      void
      setState(IMC::EntityState::StateEnum state,
                     Status::Code code);

      void
      setState(IMC::EntityState::StateEnum state,
                     const std::string& message);

      //! Retrieve the current entity state.
      //! @return entity state.
      IMC::EntityState::StateEnum
      getState(void) const
      {
        return static_cast<IMC::EntityState::StateEnum>(m_entity_state.state);
      }

      //! Report the entity state.
      void
      reportState(void);

      void
      setActTimes(uint16_t act_time, uint16_t deact_time)
      {
        m_ent_info.act_time = act_time;
        m_ent_info.deact_time = deact_time;
      }

      //! Report the activation state.
      void
      reportActivationState(void);

      //! Test if entity is active.
      //! @return true if entity is active, false otherwise.
      bool
      isActive(void) const
      {
        return m_act_state.state == IMC::EntityActivationState::EAS_ACTIVE;
      }

      //! Test if entity is activating.
      //! @return true if entity is activating, false otherwise.
      bool
      isActivating(void) const
      {
        return m_act_state.state == IMC::EntityActivationState::EAS_ACT_IP;
      }

      //! Test if entity is deactivating.
      //! @return true if entity is deactivating, false otherwise.
      bool
      isDeactivating(void) const
      {
        return m_act_state.state == IMC::EntityActivationState::EAS_DEACT_IP;
      }

      IMC::EntityActivationState::StateEnum
      getActivationState(void) const
      {
        return static_cast<IMC::EntityActivationState::StateEnum>(m_act_state.state);
      }

      //! Request entity activation
      void
      requestActivation(void);

      //! Request entity deactivation
      void
      requestDeactivation(void);

      void
      failActivation(const std::string& reason);

      void
      succeedActivation(void);

      void
      failDeactivation(const std::string& reason);

      void
      succeedDeactivation(void);

      //! Consume QueryEntityState messages andreply accordingly.
      //! @param[in] msg QueryEntityState message.
      void
      consume(const IMC::QueryEntityState* msg);

      //! Consume QueryEntityActivationState messages and replyaccordingly.
      //! @param[in] msg QueryEntityActivationState message.
      void
      consume(const IMC::QueryEntityActivationState* msg);

    private:
      enum NextActivationState
      {
        //! Keep current activation state.
        NAS_SAME,
        //! Request activation.
        NAS_ACTIVE,
        //! Request deactivation.
        NAS_INACTIVE
      };

      //! Entity state.
      IMC::EntityState m_entity_state;
      //! Last entity state description code (-1 means none).
      int m_entity_state_code;
      //! Activation state.
      IMC::EntityActivationState m_act_state;
      //! Next activation state.
      NextActivationState m_next_act_state;
    };
  }
}

#endif
