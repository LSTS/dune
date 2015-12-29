//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
    };

    struct Task: public Tasks::Task
    {
      //! Surrogate system id.
      unsigned m_sid;
      //! Surrogate entity id.
      unsigned m_eid;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sid(IMC::AddressResolver::invalid()),
        m_eid(DUNE_IMC_CONST_UNK_EID)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Surrogate System", m_args.system_name)
        .description("Power channel");

        param("Surrogate Entity", m_args.entity_name)
        .description("Name of the slave system");

        // Register handler routines.
        bind<IMC::EntityInfo>(this);
        bind<IMC::EntityActivationState>(this);
        bind<IMC::EntityState>(this);
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

        if (isActivating() && (msg->state == IMC::EntityActivationState::EAS_ACTIVE))
          activate();
        else if (isDeactivating() && (msg->state == IMC::EntityActivationState::EAS_INACTIVE))
          deactivate();
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
