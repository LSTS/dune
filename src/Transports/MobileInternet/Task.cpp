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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <memory>
#include <cstring>
#include <algorithm>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace MobileInternet
  {
    using DUNE_NAMESPACES;

    //! Finite state machine states.
    enum StateMachineStates
    {
      //! Waiting for activation.
      SM_IDLE,
      //! Start activation sequence.
      SM_ACT_BEGIN,
      //! Turn modem power on.
      SM_ACT_POWER_ON,
      //! Wait for power to be turned on.
      SM_ACT_POWER_WAIT,
      //! Wait for serial port device to become available.
      SM_ACT_MODEM_WAIT,
      //! Start PPP session.
      SM_ACT_CONNECT,
      //! Activation sequence is complete.
      SM_ACT_DONE,
      //! Task is active but a connection was not yet established.
      SM_ACT_DISCONNECTED,
      //! Task is active and connected to the Internet.
      SM_ACT_CONNECTED,
      //! Start deactivation sequence.
      SM_DEACT_BEGIN,
      //! Disconnect from the Internet.
      SM_DEACT_DISCONNECT,
      //! Switch power off.
      SM_DEACT_POWER_OFF,
      //! Wait for power to be turned off.
      SM_DEACT_POWER_WAIT,
      //! Deactivation sequence is complete.
      SM_DEACT_DONE
    };

    //! Task arguments.
    struct Arguments
    {
      //! GSM username.
      std::string gsm_user;
      //! GSM password.
      std::string gsm_pass;
      //! GSM APN.
      std::string gsm_apn;
      //! GSM pin.
      std::string gsm_pin;
      //! GSM mode.
      std::string gsm_mode;
      //! PPP interface.
      std::string ppp_interface;
      //! UART device.
      std::string uart_dev;
      //! Power channel name.
      std::string power_channel;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Start command.
      std::string m_command_connect;
      //! Stop command.
      std::string m_command_disconnect;
      //! Start NAT command.
      std::string m_command_nat_start;
      //! Stop NAT command.
      std::string m_command_nat_stop;
      //! True if modem is powered on.
      bool m_powered;
      //! Current state machine state.
      StateMachineStates m_sm_state;
      //! Interface IPv4 address.
      Address m_address;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_powered(false),
        m_sm_state(SM_IDLE)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.uart_dev)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("/dev/ttyUSB0")
        .description("Serial port device");

        param("Power Channel", m_args.power_channel)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("")
        .description("Power channel name");

        param("GSM - User", m_args.gsm_user)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("")
        .description(DTR("GSM/GPRS username"));

        param("GSM - Password", m_args.gsm_pass)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("")
        .description(DTR("GSM/GPRS password"));

        param("GSM - APN", m_args.gsm_apn)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("internet.vodafone.pt")
        .description(DTR("GSM/GPRS Access Point Name (APN)"));

        param("GSM - Pin", m_args.gsm_pin)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("")
        .description(DTR("GSM/GPRS pin."));

        param("GSM - Mode", m_args.gsm_mode)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("AT\\^SYSCFG=2,2,3fffffff,0,1")
        .description("GSM/GPRS mode.");

        param("PPP - Interface", m_args.ppp_interface)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("ppp0")
        .description("PPP Interface");

        Path script = m_ctx.dir_scripts / "dune-mobile-inet.sh";
        m_command_connect = String::str("/bin/sh %s start > /dev/null 2>&1", script.c_str());
        m_command_disconnect = String::str("/bin/sh %s stop > /dev/null 2>&1", script.c_str());
        m_command_nat_start = String::str("/bin/sh %s nat_start > /dev/null 2>&1", script.c_str());
        m_command_nat_stop = String::str("/bin/sh %s nat_stop > /dev/null 2>&1", script.c_str());

        bind<IMC::PowerChannelState>(this);
      }

      ~Task(void)
      {
        disconnect();
      }

      void
      onUpdateParameters(void)
      {
        if (m_args.power_channel.empty())
          m_powered = true;
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->name != m_args.power_channel)
          return;

        m_powered = (msg->state == IMC::PowerChannelState::PCS_ON);
      }

      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onRequestActivation(void)
      {
        m_sm_state = SM_ACT_BEGIN;
        updateStateMachine();
      }

      void
      onRequestDeactivation(void)
      {
        m_sm_state = SM_DEACT_BEGIN;
        updateStateMachine();
      }

      void
      controlPower(IMC::PowerChannelControl::OperationEnum op)
      {
        if (m_args.power_channel.empty())
          return;

        IMC::PowerChannelControl pcc;
        pcc.op = op;
        pcc.name = m_args.power_channel;
        dispatch(pcc);
      }

      //! Turn power channel on.
      void
      turnPowerOn(void)
      {
        debug("switching power on");
        controlPower(IMC::PowerChannelControl::PCC_OP_TURN_ON);
      }

      //! Turn power channel off.
      void
      turnPowerOff(void)
      {
        debug("switching power off");
        controlPower(IMC::PowerChannelControl::PCC_OP_TURN_OFF);
      }

      //! Test if power channel is on.
      //! @return true if power channel is on, false otherwise.
      bool
      isPowered(void)
      {
        return m_powered;
      }

      void
      connect(void)
      {
        debug("connecting");
        std::string pin("AT");
        if (m_args.gsm_pin.size() == 4)
        {
          pin.append("+CPIN=");
          pin.append(m_args.gsm_pin);
        }

        Environment::set("GSM_USER", m_args.gsm_user);
        Environment::set("GSM_PASS", m_args.gsm_pass);
        Environment::set("GSM_APN", m_args.gsm_apn);
        Environment::set("GSM_PIN", pin);
        Environment::set("GSM_MODE", m_args.gsm_mode);

        if (std::system(m_command_connect.c_str()) == -1)
          err(DTR("failed to execute connect command"));
      }

      void
      disconnect(void)
      {
        debug("disconnecting");
        if (std::system(m_command_disconnect.c_str()) == -1)
          err(DTR("failed to execute disconnect command"));
      }

      bool
      isConnected(Address* address = NULL)
      {
        std::vector<Interface> interfaces = Interface::get();
        for (size_t i = 0; i < interfaces.size(); ++i)
        {
          if (interfaces[i].name() == m_args.ppp_interface)
          {
            if (address != NULL)
              *address = interfaces[i].address();
            return true;
          }
        }

        return false;
      }

      void
      startNAT(void)
      {
        if (std::system(m_command_nat_start.c_str()) == -1)
          err(DTR("failed to start NAT"));
      }

      void
      stopNAT(void)
      {
        if (std::system(m_command_nat_stop.c_str()) == -1)
          err(DTR("failed to stop NAT"));
      }

      void
      updateStateMachine(void)
      {
        switch (m_sm_state)
        {
          case SM_IDLE:
            break;

          case SM_ACT_BEGIN:
            debug("starting activation sequence");
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
            m_sm_state = SM_ACT_POWER_ON;
            // Fall through.

          case SM_ACT_POWER_ON:
            turnPowerOn();
            m_sm_state = SM_ACT_POWER_WAIT;
            // Fall through.

          case SM_ACT_POWER_WAIT:
            if (isPowered())
            {
              debug("power is on");
              debug("waiting for modem");
              m_sm_state = SM_ACT_MODEM_WAIT;
            }
            else
            {
              break;
            }

          case SM_ACT_MODEM_WAIT:
            if (Path(m_args.uart_dev).isDevice())
            {
              debug("UART detected");
              m_sm_state = SM_ACT_CONNECT;
            }
            else
            {
              break;
            }

          case SM_ACT_CONNECT:
            connect();
            m_sm_state = SM_ACT_DONE;
            // Fall through.

          case SM_ACT_DONE:
            debug("activation complete");
            activate();
            m_sm_state = SM_ACT_DISCONNECTED;
            // Fall through

          case SM_ACT_DISCONNECTED:
            if (isConnected(&m_address))
            {
              debug("connected: %s", m_address.c_str());
              startNAT();
              setEntityState(IMC::EntityState::ESTA_NORMAL,
                             String::str(DTR("connected to the Internet with public address '%s'"), m_address.c_str()));
              m_sm_state = SM_ACT_CONNECTED;
            }
            break;

          case SM_ACT_CONNECTED:
            if (!isConnected())
            {
              stopNAT();
              debug("disconnected");
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_CONNECTING);
              m_sm_state = SM_ACT_DISCONNECTED;
            }
            break;

          case SM_DEACT_BEGIN:
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_DEACTIVATING);
            m_sm_state = SM_DEACT_DISCONNECT;
            // Fall through.

          case SM_DEACT_DISCONNECT:
            disconnect();
            m_sm_state = SM_DEACT_POWER_OFF;
            break;

          case SM_DEACT_POWER_OFF:
            turnPowerOff();
            m_sm_state = SM_DEACT_POWER_WAIT;
            // Fall through.

          case SM_DEACT_POWER_WAIT:
            if (!isPowered())
            {
              debug("device is no longer powered");
              m_sm_state = SM_DEACT_DONE;
            }
            else
            {
              break;
            }

          case SM_DEACT_DONE:
            debug("deactivation complete");
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
            deactivate();
            m_sm_state = SM_IDLE;
            break;
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          updateStateMachine();
        }
      }
    };
  }
}

DUNE_TASK
