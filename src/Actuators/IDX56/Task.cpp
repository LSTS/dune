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

    //! .
    enum OperationMode : uint8_t
    {
      //!! Invalid mode.
      MODE_INVALID = 0x00,
      //! Position mode.
      MODE_POSITION = 0x01,
      //! Velocity mode.
      MODE_VELOCITY = 0x02
    };

    //! Maximum stack size for the task thread.
    constexpr const size_t c_stack_size = 2 * 1024 * 1024;
    //! Supported Operation Modes.
    constexpr const char* c_modes = "Velocity";
    //! Mode default value.
    constexpr const char* c_mode_default = "Velocity";
    //! Mode dictionary: OperationMode to string.
    const std::map<OperationMode, std::string> c_mode_dict = {{MODE_POSITION, "Position"},
                                                              {MODE_VELOCITY, "Velocity"}};
    //! Mode dictionary: string to OperationMode.
    const std::map<std::string, OperationMode> c_mode_dict_rev = {{"Position", MODE_POSITION},
                                                                  {"Velocity", MODE_VELOCITY}};

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
      //! Mode.
      std::string mode;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Arguments.
      Arguments m_args;
      //! Device handle.
      void* m_handle;
      //! Device enabled flag.
      bool m_enabled;
      //! Error code.
      unsigned int m_error;
      //! Mode.
      OperationMode m_mode;
      //! Comand consumer.
      AbstractConsumer* m_consumer;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx, c_stack_size),
        m_handle(nullptr),
        m_enabled(false),
        m_error(0),
        m_mode(MODE_INVALID),
        m_consumer(nullptr)
      {
        param("Node Id", m_args.node_id)
        .editable(false)
        .defaultValue("1")
        .description("Node ID of the device.");

        param("Device", m_args.device)
        .editable(false)
        .defaultValue("EPOS4")
        .description("Device name.");

        param("Protocol", m_args.protocol)
        .editable(false)
        .defaultValue("MAXON SERIAL V2")
        .description("Protocol stack name.");

        param("Interface", m_args.interface)
        .editable(false)
        .defaultValue("USB")
        .description("Interface name.");

        param("Port", m_args.port)
        .editable(false)
        .defaultValue("USB0")
        .description("Port name.");

        param("Baudrate", m_args.baudrate)
        .editable(false)
        .defaultValue("1000000")
        .description("Baudrate.");

        param("Mode", m_args.mode)
        .values(c_modes)
        .defaultValue(c_mode_default)
        .description("Mode of operation (Position or Velocity).");
      }

      void
      onUpdateParameters(void) override
      {
        if (paramChanged(m_args.mode))
        {
          OperationMode old_mode = m_mode;
          m_mode = c_mode_dict_rev.at(m_args.mode);

          if (isActive())
          {
            if (old_mode != m_mode && old_mode != MODE_INVALID)
              disabledMode(old_mode);

            enabledMode(m_mode);
          }
        }
      }

      void
      onResourceRelease(void) override
      {
        if (m_enabled)
        {
          if (m_mode != MODE_INVALID)
            disabledMode(m_mode);

          if (disableDevice())
            debug("device disabled successfully");
          else
            war("failed to disable device");
        }

        if (closeDevice())
          debug("device closed successfully");
        else if (m_handle != nullptr)
          war("failed to close device");

        m_handle = nullptr;
      }

      void
      onResourceAcquisition(void) override
      {
        if (!openDevice())
        {
          war("failed to open device");
          requestDeactivation();
          setEntityState(EntityState::ESTA_ERROR, "failed to open device");
          return;
        }
        else
          debug("device opened successfully");

        if (enableDevice() && enabledMode(m_mode))
        {
          m_enabled = true;
          debug("device enabled successfully");
        }
        else
        {
          m_enabled = false;
          requestDeactivation();
          setEntityState(EntityState::ESTA_ERROR, "failed to enable device");
          war("failed to enable device");
          return;
        }

        requestActivation();
        setEntityState(EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      bool
      openDevice(void)
      {
        bool result = true;
        char* device = new char[255];
        char* protocol = new char[255];
        char* interface = new char[255];
        char* port = new char[255];
        strcpy(device, m_args.device.c_str());
        strcpy(protocol, m_args.protocol.c_str());
        strcpy(interface, m_args.interface.c_str());
        strcpy(port, m_args.port.c_str());

        m_handle = VCS_OpenDevice(device, protocol, interface, port, &m_error);

        if (m_handle != nullptr && m_error == 0)
        {
          unsigned int baudrate = 0;
          unsigned int timeout = 0;

          if (VCS_GetProtocolStackSettings(m_handle, &baudrate, &timeout, &m_error) == 0)
            result = false;

          if (VCS_SetProtocolStackSettings(m_handle, m_args.baudrate, timeout, &m_error) == 0)
            result = false;

          if (VCS_GetProtocolStackSettings(m_handle, &baudrate, &timeout, &m_error) == 0 || m_args.baudrate != (int)baudrate)
            result = false;
        }
        else
        {
          m_handle = nullptr;
          result = false;
        }

        delete []device;
        delete []protocol;
        delete []interface;
        delete []port;

        return result;
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
        if (m_handle == nullptr)
          return false;

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
        if (m_handle == nullptr)
          return false;

        m_error = 0;
        m_enabled = false;
        return VCS_SetDisableState(m_handle, m_args.node_id, &m_error) != 0 && m_error == 0;
      }

      bool
      enabledMode(OperationMode mode)
      {
        if (m_handle == nullptr)
          return false;

        switch (mode)
        {
        case MODE_POSITION:
          debug("enabling position mode");
          if (enablePositionMode())
          {
            m_consumer = bind<IMC::SetServoPosition>(this);
            debug("position mode enabled successfully");
            return true;
          }
          else
          {
            war("failed to enable position mode");
            return false;
          }

        case MODE_VELOCITY:
          debug("enabling velocity mode");
          if (enableVelocityMode())
          {
            m_consumer = bind<IMC::DesiredSpeed>(this);
            debug("velocity mode enabled successfully");
            return true;
          }
          else
          {
            war("failed to enable velocity mode");
            return false;
          }

        default:
          return false;
        }
      }

      bool
      disabledMode(OperationMode mode)
      {
        if (m_handle == nullptr)
          return false;

        switch (mode)
        {
        case MODE_POSITION:
          debug("disabling position mode");
          unbind(IMC::SetServoPosition::getIdStatic(), m_consumer);
          return disablePositionMode();

        case MODE_VELOCITY:
          debug("disabling velocity mode");
          unbind(IMC::DesiredSpeed::getIdStatic(), m_consumer);
          return disableVelocityMode();

        default:
          return false;
        }
      }

      bool
      enablePositionMode(void)
      {
        if (m_handle == nullptr)
          return false;

        m_error = 0;
        return VCS_ActivateProfilePositionMode(m_handle, m_args.node_id, &m_error) != 0 && m_error == 0;
      }

      bool
      disablePositionMode(void)
      {
        if (m_handle == nullptr)
          return false;

        m_error = 0;
        return VCS_HaltPositionMovement(m_handle, m_args.node_id, &m_error) != 0 && m_error == 0;
      }

      bool
      setPosition(long pos)
      {
        if (m_handle == nullptr)
          return false;

        m_error = 0;
        return VCS_MoveToPosition(m_handle, m_args.node_id, pos, 0, 1, &m_error) != 0 && m_error == 0;
      }

      bool
      enableVelocityMode(void)
      {
        if (m_handle == nullptr)
          return false;

        m_error = 0;
        return VCS_ActivateProfileVelocityMode(m_handle, m_args.node_id, &m_error) != 0 && m_error == 0;
      }

      bool
      disableVelocityMode(void)
      {
        if (m_handle == nullptr)
          return false;

        m_error = 0;
        return VCS_HaltVelocityMovement(m_handle, m_args.node_id, &m_error) != 0 && m_error == 0;
      }

      bool
      setVelocity(long vel)
      {
        if (m_handle == nullptr)
          return false;

        m_error = 0;
        return VCS_MoveWithVelocity(m_handle, m_args.node_id, vel, &m_error) != 0 && m_error == 0;
      }

      void
      consume(const IMC::DesiredSpeed* msg)
      {
        if (!isActive() || m_mode != MODE_VELOCITY)
          return;

        if (msg->speed_units != IMC::SpeedUnits::SUNITS_RPM)
          return;

        if (msg->getDestination() != getSystemId() ||
            msg->getDestinationEntity() != getEntityId())
          return;

        trace("received DesiredSpeed message with value: %f", msg->value);
        setVelocity(msg->value);
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        if (!isActive() || m_mode != MODE_POSITION)
          return;

        if (msg->getDestination() != getSystemId() ||
            msg->getDestinationEntity() != getEntityId())
          return;

        trace("received SetServoPosition message with value: %f", msg->value);
        setPosition(msg->value);
      }

      void
      onMain(void) override
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
