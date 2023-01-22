//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  //! This task mimicks the entity state and entity activation state of a
  //! surrogate remote system entity. Moreover, it relays the entity parameters
  //! from the surrogate system, while relaying to it entity parameters queries
  //! and setters.
  //!
  //! This task allows the following parameters to be defined
  //!  - <em>system_name</em>: surrogate system name.
  //!  - <em>entity_name</em>: surrogate system entity name.
  //!  - <em>task_name</em>: surrogate system task name to write xml parameters.
  //!
  //! @author Ricardo Martins
  namespace Delegator
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Surrogate system.
      std::string system_name;
      //! Surrogate entity.
      std::string entity_name;
      //! Surrogate task name.
      std::string task_name;
      //! Surrogate config section.
      std::string config_section;
      //! Surrogate system power channel.
      std::string power_channel;
    };

    struct Task: public Tasks::Task
    {
      //! Surrogate system id.
      unsigned m_sid;
      //! Surrogate entity id.
      unsigned m_eid;
      Counter<double> m_query_info_timer;
      //! Activation/deactivation timer.
      Counter<double> m_countdown;
      //! Power channel control.
      IMC::PowerChannelControl m_pcc;
      //! Power channel state.
      IMC::PowerChannelState m_pcs;
      //! True if task is activating.
      bool m_activating;
      //! True if task is deactivating.
      bool m_deactivating;
      //! PushEntityParameters message.
      IMC::PushEntityParameters m_push;
      //! Entity Parameter message.
      IMC::EntityState m_estate;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sid(IMC::AddressResolver::invalid()),
        m_eid(DUNE_IMC_CONST_UNK_EID),
        m_query_info_timer(5.0),
        m_activating(false),
        m_deactivating(false)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Surrogate System", m_args.system_name)
        .description("Power channel");

        param("Surrogate Entity", m_args.entity_name)
        .description("Name of the slave system");

        param("Surrogate Task", m_args.task_name)
        .description("Name of the slave task");

        param("Surrogate Section", m_args.config_section)
        .description("Name of the surrogate configuration section");

        param("Surrogate Power Channel", m_args.power_channel)
        .defaultValue("None")
        .description("Name of the power channel of the surrogate system. Only use if PCC is for the payload's CPU.");

        // Register handler routines.
        bind<IMC::EntityInfo>(this);
        bind<IMC::EntityActivationState>(this);
        bind<IMC::EntityState>(this);
        bind<IMC::EntityParameters>(this);
        bind<IMC::PowerChannelState>(this);
      }

      bool
      onWriteParamsXML(std::ostream& os) const
      {
        if (m_args.task_name.empty())
          return false;

        Tasks::Task* task = Tasks::Factory::produce(m_args.task_name, m_args.config_section, m_ctx);
        if (task == nullptr)
          throw std::invalid_argument(Utils::String::str(DTR("invalid task name '%s'"), m_args.task_name.c_str()));

        Path cfg_path = (m_ctx.dir_cfg / m_args.system_name + ".ini");
        m_ctx.config.parseFile(cfg_path.c_str());

        try
        {
          task->setEntityLabel(getEntityLabel());
          task->loadConfig();
          task->writeParamsXML(os);
          Memory::clear(task);
        }
        catch (...)
        {
          Memory::clear(task);
          throw;
        }

        return true;
      }

      void
      onUpdateParameters(void)
      {
        m_sid = resolveSystemName(m_args.system_name);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        m_pcc.name = m_args.power_channel;
        m_pcs.name = m_args.power_channel;
        m_countdown.setTop(getActivationTime());

        if(m_args.power_channel != "None")
          queryEntityInfo();
      }

      void
      consume(const IMC::EntityParameters* msg)
      {
        if (msg->name != getEntityLabel())
          return;

        if (!isFromSurrogate(msg))
          return;

        relayFrom(msg);
      }

      void
      onQueryEntityParameters(const IMC::QueryEntityParameters* msg)
      {
        if (msg->name != getEntityLabel())
          return;

        relayTo(msg);
      }

      void
      onSetEntityParameters(const IMC::SetEntityParameters* msg)
      {
        if (msg->name != getEntityLabel())
          return;

        relayTo(msg);

        if(m_args.power_channel == "None")
          return;

        IMC::MessageList<IMC::EntityParameter>::const_iterator itr = msg->params.begin();
        for (; itr != msg->params.end(); ++itr)
          if((*itr)->name == "Active" && (*itr)->value == "true")
            onRequestActivation();
      }

      void
      onPopEntityParameters(const IMC::PopEntityParameters* msg)
      {
        if (msg->name != getEntityLabel())
          return;

        relayTo(msg);
      }

      void
      onPushEntityParameters(const IMC::PushEntityParameters* msg)
      {
        if (msg->name != getEntityLabel())
          return;

        relayTo(msg);
        m_push = *msg;
      }

      void
      sendActiveParameter(const std::string& value)
      {
        IMC::EntityParameter p;
        p.name = "Active";
        p.value = value;

        IMC::SetEntityParameters msg;
        msg.name = m_args.entity_name;
        msg.params.push_back(p);
        dispatch(msg);
      }

      void
      onRequestActivation(void)
      {
        if(m_args.power_channel != "None")
        {
          m_pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
          dispatch(m_pcc);
          m_countdown.reset();
          m_activating = true;
          debug("Power on surrogate PCC.");
        }
        else
          sendActiveParameter("true");
      }

      void
      onRequestDeactivation(void)
      {
        sendActiveParameter("false");

        if(m_args.power_channel != "None")
          m_deactivating = true;
      }

      bool
      isFromSurrogate(const IMC::Message* msg)
      {
        return (msg->getSource() == m_sid) && (msg->getSourceEntity() == m_eid);
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if(msg->name != m_args.power_channel)
          return;

        if(msg->state == IMC::PowerChannelState::PCS_OFF)
          m_eid = DUNE_IMC_CONST_UNK_EID;

        m_pcs = *msg;
      }

      void
      consume(const IMC::EntityInfo* msg)
      {
        if (msg->getSource() != m_sid)
          return;

        if (msg->label != m_args.entity_name)
          return;

        m_eid = msg->getSourceEntity();
        debug("resolved surrogate entity: %d", m_eid);
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (!isFromSurrogate(msg))
          return;

        setEntityState((DUNE::IMC::EntityState::StateEnum)msg->state, msg->description);
        m_estate = *msg;
      }

      void
      consume(const IMC::EntityActivationState* msg)
      {
        if (!isFromSurrogate(msg))
          return;

        // send activation state also.
        relayFrom(msg);

        if (isActivating() && (msg->state == IMC::EntityActivationState::EAS_ACTIVE))
          activate();
        else if (isDeactivating() && (msg->state == IMC::EntityActivationState::EAS_INACTIVE))
          deactivate();

        if(m_args.power_channel != "None" && msg->state == IMC::EntityActivationState::EAS_DEACT_IP)
          onRequestDeactivation();

        if(m_args.power_channel != "None" && msg->state == IMC::EntityActivationState::EAS_ACT_IP &&
           m_estate.state == IMC::EntityState::ESTA_FAILURE)
        {
          activationFailed(DTR("failed activation, device reporting failure state."));
          onRequestDeactivation();
        }
      }

      void
      queryEntityInfo(void)
      {
        IMC::QueryEntityInfo msg;
        msg.setDestination(m_sid);
        dispatch(msg);
      }

      void
      relayFrom(const IMC::Message* msg)
      {
        IMC::Message* clone = msg->clone();
        clone->setSource(getSystemId());
        clone->setSourceEntity(getEntityId());
        dispatch(clone);
        delete clone;
      }

      void
      relayTo(const IMC::Message* msg)
      {
        IMC::Message* clone = msg->clone();
        clone->setDestination(m_sid);
        clone->setDestinationEntity(DUNE_IMC_CONST_UNK_EID);
        dispatch(clone);
        delete clone;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if ((m_eid == DUNE_IMC_CONST_UNK_EID) && (m_query_info_timer.overflow()))
          {
            m_query_info_timer.reset();
            queryEntityInfo();
          }

          if (m_activating)
          {
            if (m_pcs.state == IMC::PowerChannelControl::PCC_OP_TURN_ON && m_eid != DUNE_IMC_CONST_UNK_EID)
            {
              debug("PCC activation took %0.2f s", getActivationTime()-m_countdown.getRemaining());
              dispatch(m_push);
              sendActiveParameter("true");
              m_activating = false;
            }
            else if (m_countdown.overflow())
            {
              activationFailed(DTR("failed to contact device"));
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              m_activating = false;
              onRequestDeactivation();
            }
          }

          if (m_deactivating)
          {
            IMC::PowerOperation pop;
            pop.setDestination(m_sid);
            pop.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
            dispatch(pop);
            debug("Sent PowerOperation to surrogate.");
            Delay::wait(getDeactivationTime());

            m_pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
            dispatch(m_pcc);
            m_deactivating = false;
            m_countdown.setTop(getActivationTime());
            debug("Power off surrogate PCC.");
          }
        }
      }
    };
  }
}

DUNE_TASK
