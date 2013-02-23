//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: BasicRemoteOperation.cpp 12695 2013-01-23 22:54:41Z rasm         $:*
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
      m_last_action(-1.0)
    {
      param("Connection Timeout", m_connection_timeout)
      .defaultValue("1.0")
      .units(Units::Second);

      addActionButton("Exit");

      m_actions.op = IMC::RemoteActionsRequest::OP_REPORT;

      deactivate();

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
      if (!(msg->mask & IMC::CL_TELEOPERATION) || msg->enable == isActive())
        return;

      if (msg->enable == IMC::ControlLoops::CL_ENABLE)
      {
        activate();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }
      else
      {
        deactivate();
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
