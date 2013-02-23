//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONTROL_BASIC_REMOTE_OPERATION_HPP_INCLUDED_
#define DUNE_CONTROL_BASIC_REMOTE_OPERATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Tasks/Periodic.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace Control
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM BasicRemoteOperation;

    class BasicRemoteOperation: public Tasks::Periodic
    {
    public:
      BasicRemoteOperation(const std::string& name, Tasks::Context& ctx);

      virtual
      ~BasicRemoteOperation(void)
      { }

      void
      consume(const IMC::RemoteActions* message);

      void
      consume(const IMC::RemoteActionsRequest* message);

      void
      consume(const IMC::ControlLoops* message);

    protected:
      void
      addActionButton(const std::string& action)
      {
        addRemoteAction(action, "Button");
      }

      void
      addActionAxis(const std::string& action)
      {
        addRemoteAction(action, "Axis");
      }

      void
      setConnectionTimeout(const float tout)
      {
        m_connection_timeout = tout;
      }

      virtual void
      onActivation(void)
      { }

      virtual void
      onDeactivation(void)
      { }

      virtual void
      onRemoteActions(const IMC::RemoteActions* message)
      {
        (void)message;
      }

      virtual void
      onConnectionTimeout(void)
      { }

      virtual void
      onConnectionResumed(void)
      { }

      virtual void
      actuate(void)
      { }

      virtual void
      onResourceInitialization(void);

    private:
      void
      task(void);

      void
      updateConnectionState(bool active = true);

      void
      addRemoteAction(const std::string& action, const std::string& type);

      //! True if we are receiving remote action commands.
      bool m_connection;
      //! Connection timeout in seconds.
      fp32_t m_connection_timeout;
      //! Time of the last remote action message received from the CCU.
      fp64_t m_last_action;
      //! Remote actions reply message;
      IMC::RemoteActionsRequest m_actions;
    };
  }
}

#endif
