//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "EPOS/Definitions.h"

namespace Actuators
{
  namespace IDX56
  {
    using DUNE_NAMESPACES;

    //! Maximum stack size for the task thread.
    constexpr const size_t c_stack_size = 2 * 1024 * 1024;

    struct Arguments
    {
      //! Node ID of the device.
      uint8_t node_id;
      //! Device name.
      std::string device;
      //! Protocol stack name.
      std::string protocol;
      //! Interface name.
      std::string interface;
      //! Port name.
      std::string port;
      //! Baudrate.
      int baudrate;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Arguments.
      Arguments m_args;
      //! Device handle.
      void* m_handle;
      //! Error code.
      unsigned int m_error;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx, c_stack_size),
        m_handle(nullptr)
      {
        param("Node Id", m_args.node_id)
        .editable(false)
        .defaultValue("1");

        param("Device", m_args.device)
        .editable(false)
        .defaultValue("EPOS4");

        param("Protocol", m_args.protocol)
        .editable(false)
        .defaultValue("MAXON SERIAL V2");

        param("Interface", m_args.interface)
        .editable(false)
        .defaultValue("USB");

        param("Port", m_args.port)
        .editable(false)
        .defaultValue("USB0");

        param("Baudrate", m_args.baudrate)
        .editable(false)
        .defaultValue("1000000");
      }

      void
      onResourceRelease(void)
      {
        if (disableDevice())
          debug("Device disabled successfully");
        else
          war("Failed to disable device");

        if (closeDevice())
          debug("Device closed successfully");
        else
          war("Failed to close device");
      }

      void
      onResourceAcquisition(void)
      {
        if (openDevice())
          debug("Device opened successfully");
        else
          war("Failed to open device");

        if (enableDevice())
          debug("Device enabled successfully");
        else
          war("Failed to enable device");
      }

      bool
      openDevice(void)
      {
        char* device = new char[255];
        char* protocol = new char[255];
        char* interface = new char[255];
        char* port = new char[255];
        strcpy(device, m_args.device.c_str());
        strcpy(protocol, m_args.protocol.c_str());
        strcpy(interface, m_args.interface.c_str());
        strcpy(port, m_args.port.c_str());

        m_handle = VCS_OpenDevice(device, protocol, interface, port, &m_error);

        if (m_handle == 0 || m_error != 0)
        {
          m_handle = 0;
          return false;
        }

        unsigned int baudrate = 0;
        unsigned int timeout = 0;

        if (VCS_GetProtocolStackSettings(m_handle, &baudrate, &timeout, &m_error) == 0)
          return false;

        if (VCS_SetProtocolStackSettings(m_handle, m_args.baudrate, timeout, &m_error) == 0)
          return false;

        if (VCS_GetProtocolStackSettings(m_handle, &baudrate, &timeout, &m_error) == 0 || m_args.baudrate != (int)baudrate)
          return false;

        delete []device;
        delete []protocol;
        delete []interface;
        delete []port;

        return true;
      }

      bool
      closeDevice(void)
      {
        m_error = 0;
        return (VCS_CloseDevice(m_handle, &m_error) != 0) && (m_error == 0);
      }

      bool
      enableDevice(void)
      {
        m_error = 0;
        int fault = 0;
        if (VCS_GetFaultState(m_handle, m_args.node_id, &fault, &m_error) == 0 || m_error != 0)
          return false;

        if (fault || VCS_ClearFault(m_handle, m_args.node_id, &m_error) == 0 || m_error != 0)
          return false;

        int enabled = 0;
        if (VCS_GetEnableState(m_handle, m_args.node_id, &enabled, &m_error) == 0 || m_error != 0)
          return false;

        if (enabled)
          return true;

        return VCS_SetEnableState(m_handle, m_args.node_id, &m_error) != 0 && m_error == 0;
      }

      bool
      disableDevice(void)
      {
        m_error = 0;
        return VCS_SetDisableState(m_handle, m_args.node_id, &m_error) != 0 && m_error == 0;
      }

      bool
      enablePositionMode(void)
      {
        m_error = 0;
        return VCS_ActivateProfilePositionMode(m_handle, m_args.node_id, &m_error) != 0 && m_error == 0;
      }

      bool
      disablePositionMode(void)
      {
        m_error = 0;
        return VCS_HaltPositionMovement(m_handle, m_args.node_id, &m_error) != 0 && m_error == 0;
      }

      bool
      setPosition(long pos)
      {
        m_error = 0;
        return VCS_MoveToPosition(m_handle, m_args.node_id, pos, 0, 1, &m_error) != 0 && m_error == 0;
      }

      bool
      enableVelocityMode(void)
      {
        m_error = 0;
        return VCS_ActivateProfileVelocityMode(m_handle, m_args.node_id, &m_error) != 0 && m_error == 0;
      }

      bool
      disableVelocityMode(void)
      {
        m_error = 0;
        return VCS_HaltVelocityMovement(m_handle, m_args.node_id, &m_error) != 0 && m_error == 0;
      }

      bool
      setVelocity(long vel)
      {
        m_error = 0;
        return VCS_MoveWithVelocity(m_handle, m_args.node_id, vel, &m_error) != 0 && m_error == 0;
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
