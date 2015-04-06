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

      //! Enable control loops.
      //! @param mask control loop mask
      void
      enableControlLoops(uint32_t mask)
      {
        configureControlLoops(IMC::ControlLoops::CL_ENABLE, mask);
      }

      //! Disable control loops (need to use only if
      //! control mode changes during path control, not on deactivation).
      //! @param mask control loop mask
      inline void
      disableControlLoops(uint32_t mask)
      {
        configureControlLoops(IMC::ControlLoops::CL_DISABLE, mask);
      }

    private:
      void
      task(void);

      void
      updateConnectionState(bool active = true);

      void
      addRemoteAction(const std::string& action, const std::string& type);

      void
      configureControlLoops(uint8_t enable, uint32_t mask);

      //! True if we are receiving remote action commands.
      bool m_connection;
      //! Connection timeout in seconds.
      fp32_t m_connection_timeout;
      //! Time of the last remote action message received from the CCU.
      fp64_t m_last_action;
      //! Remote actions reply message;
      IMC::RemoteActionsRequest m_actions;
      //! Control loops last reference
      uint32_t m_scope_ref;
    };
  }
}

#endif
