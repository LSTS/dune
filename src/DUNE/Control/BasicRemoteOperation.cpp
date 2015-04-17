//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
#include <vector>

// DUNE headers.
#include <DUNE/IMC/Bus.hpp>
#include <DUNE/Tasks/Periodic.hpp>
#include <DUNE/Tasks/Context.hpp>
#include <DUNE/Utils/TupleList.hpp>
#include <DUNE/Time/Clock.hpp>

// Local headers.
#include <DUNE/Control/BasicRemoteOperation.hpp>

namespace DUNE
{
  namespace Control
  {
    //! Constructor.
    BasicRemoteOperation::BasicRemoteOperation(const std::string& name, Tasks::Context& ctx):
      Tasks::Periodic(name, ctx),
      m_connection(false),
      m_connection_timeout(1.0),
      m_last_action(-1.0),
      m_scope_ref(0)
    {
      // Define configuration parameters.
      paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                  Tasks::Parameter::VISIBILITY_DEVELOPER,
                  false);

      param("Connection Timeout", m_connection_timeout)
      .defaultValue("1.0")
      .units(Units::Second);

      addActionButton("Exit");

      m_actions.op = IMC::RemoteActionsRequest::OP_REPORT;

      // Register handler routines.
      bind<IMC::RemoteActions>(this);
      bind<IMC::RemoteActionsRequest>(this);
      bind<IMC::ControlLoops>(this);
    }

    void
    BasicRemoteOperation::consume(const IMC::RemoteActions* msg)
    {
      updateConnectionState();
      m_last_action = DUNE::Time::Clock::get();

      if (isActive())
      {
        Utils::TupleList tuples(msg->actions);
        if (tuples.get("Exit", 0))
        {
          IMC::TeleoperationDone top;
          dispatch(top);
        }

        onRemoteActions(msg);
      }
    }

    void
    BasicRemoteOperation::consume(const IMC::RemoteActionsRequest* msg)
    {
      if (msg->op != IMC::RemoteActionsRequest::OP_QUERY)
        return;

      dispatch(m_actions);
    }

    void
    BasicRemoteOperation::consume(const IMC::ControlLoops* msg)
    {
      if (!(msg->mask & IMC::CL_TELEOPERATION))
        return;

      // If this scope is obsolete, ignore message
      if (msg->scope_ref < m_scope_ref)
        return;

      m_scope_ref = msg->scope_ref;

      if (msg->enable == isActive())
        return;

      if (msg->enable == IMC::ControlLoops::CL_ENABLE)
      {
        requestActivation();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }
      else
      {
        requestDeactivation();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }
    }

    void
    BasicRemoteOperation::onResourceInitialization(void)
    {
      setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
    }

    void
    BasicRemoteOperation::updateConnectionState(bool state)
    {
      if (!isActive())
        return;

      if (state)
      {
        if (!m_connection && (m_last_action > 0.0))
        {
          debug("connection resumed");
          onConnectionResumed();
        }

        m_connection = true;
        m_last_action = DUNE::Time::Clock::get();
      }
      else
      {
        if (m_connection)
        {
          debug("connection timeout");
          onConnectionTimeout();
        }

        m_connection = false;
      }
    }

    void
    BasicRemoteOperation::configureControlLoops(uint8_t enable, uint32_t mask)
    {
      IMC::ControlLoops cloops;
      cloops.enable = enable;
      cloops.mask = mask;
      cloops.scope_ref = m_scope_ref;
      dispatch(cloops);
    }

    void
    BasicRemoteOperation::addRemoteAction(const std::string& action, const std::string& type)
    {
      std::string tuple = action + "=" + type;

      if (m_actions.actions.size() != 0)
        m_actions.actions.append(";");

      m_actions.actions.append(tuple);
    }

    void
    BasicRemoteOperation::task(void)
    {
      fp64_t delta = Time::Clock::get() - m_last_action;

      // Check for connection timeouts.
      if (delta > m_connection_timeout)
        updateConnectionState(false);

      if (isActive() && m_connection)
        actuate();
    }
  }
}
