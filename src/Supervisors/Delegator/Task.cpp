//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
    };

    struct Task: public Tasks::Task
    {
      //! Surrogate system id.
      unsigned m_sid;
      //! Surrogate entity id.
      unsigned m_eid;
      Counter<double> m_query_info_timer;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sid(IMC::AddressResolver::invalid()),
        m_eid(DUNE_IMC_CONST_UNK_EID),
        m_query_info_timer(5.0)
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

        // Register handler routines.
        bind<IMC::EntityInfo>(this);
        bind<IMC::EntityActivationState>(this);
        bind<IMC::EntityState>(this);
        bind<IMC::EntityParameters>(this);
      }

      bool
      onWriteParamsXML(std::ostream& os) const
      {
        if (m_args.task_name.empty())
          return false;

        Tasks::Task* task = Tasks::Factory::produce(m_args.task_name, "Surrogate", m_ctx);
        if (task == NULL)
          throw std::invalid_argument(Utils::String::str(DTR("invalid task name '%s'"), m_args.task_name.c_str()));

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
        sendActiveParameter("true");
      }

      void
      onRequestDeactivation(void)
      {
        sendActiveParameter("false");
      }

      bool
      isFromSurrogate(const IMC::Message* msg)
      {
        return (msg->getSource() == m_sid) && (msg->getSourceEntity() == m_eid);
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
        }
      }
    };
  }
}

DUNE_TASK
