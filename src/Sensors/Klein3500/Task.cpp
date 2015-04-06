//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda.        *
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
#include <cstring>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Parser.hpp"
#include "CommandLink.hpp"

namespace Sensors
{
  //! Device driver for Klein's UUV3500 sidescan.
  //!
  //! This driver was designed to configure the sidescan to record data
  //! files to an NFS mount.
  namespace Klein3500
  {
    using DUNE_NAMESPACES;

    //! Finite state machine states.
    enum StateMachineStates
    {
      //! Waiting for activation.
      SM_IDLE,
      //! Start activation sequence.
      SM_ACT_BEGIN,
      //! Turn power on.
      SM_ACT_POWER_ON,
      //! Wait for power to be turned on.
      SM_ACT_POWER_WAIT,
      //! Wait for device to become available.
      SM_ACT_SS_WAIT,
      //! Request log file.
      SM_ACT_LOG_REQUEST,
      //! Wait for log file.
      SM_ACT_LOG_WAIT,
      //! Activation sequence is complete.
      SM_ACT_DONE,
      //! Sampling.
      SM_ACT_SAMPLE,
      //! Start deactivation sequence.
      SM_DEACT_BEGIN,
      //! Disconnect from sidescan.
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
      //! IPv4 address.
      Address addr;
      //! TCP command port.
      unsigned port;
      //! True to enable high-frequency channel.
      bool channel_hf;
      //! True to enable low-frequency channel.
      bool channel_lf;
      //! Range.
      unsigned range;
      //! Name of sidescan's power channel.
      std::string power_channel;
      //! Recording path prefix.
      std::string record_path_prefix;
      //! Recording file prefix.
      std::string record_file_prefix;
      //! Pings per file.
      unsigned pings_per_file;
    };

    struct Task: public Tasks::Task
    {
      //! Parser.
      Parser m_parser;
      //! Watchdog timer.
      Counter<double> m_wdog;
      //! Current state machine state.
      StateMachineStates m_sm_state;
      //! State machine state queue.
      std::queue<StateMachineStates> m_sm_state_queue;
      //! True if device is powered on.
      bool m_powered;
      //! Command link.
      CommandLink* m_cmd;
      //! Current log path.
      std::string m_log_path;
      //! Configuration parameters.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sm_state(SM_IDLE),
        m_powered(false),
        m_cmd(NULL)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("IPv4 Address", m_args.addr)
        .defaultValue("192.168.0.81")
        .description("IP address of the sonar");

        param("TCP Port", m_args.port)
        .defaultValue("4660")
        .minimumValue("0")
        .maximumValue("65535")
        .description("TCP command port");

        param(DTR_RT("High-Frequency Channel"), m_args.channel_hf)
        .defaultValue("true")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .description(DTR("Enable high-frequency channel"));

        param(DTR_RT("Low-Frequency Channel"), m_args.channel_lf)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .description(DTR("Enable low-frequency channel"));

        param(DTR_RT("Range"), m_args.range)
        .defaultValue("50")
        .minimumValue("15")
        .maximumValue("200")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Meter)
        .description(DTR("Range"));

        param("Power Channel", m_args.power_channel)
        .defaultValue("")
        .description("Name of sidescan's power channel");

        param("Recording Path Prefix", m_args.record_path_prefix)
        .defaultValue("/mnt/testData")
        .description("Recording path prefix as seen by the sidescan");

        param("Recording File Prefix", m_args.record_file_prefix)
        .defaultValue("Data_")
        .description("Recording file prefix");

        param("Pings Per File", m_args.pings_per_file)
        .minimumValue("100")
        .maximumValue("50000")
        .defaultValue("50000")
        .description("Number of pings per recorded file");

        bind<IMC::EstimatedState>(this);
        bind<IMC::LoggingControl>(this);
        bind<IMC::PowerChannelState>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (m_args.power_channel.empty())
          m_powered = true;

        if (!isConnected())
          return;

        if (paramChanged(m_args.pings_per_file))
          m_cmd->setPingsPerFile(m_args.pings_per_file);

        if (paramChanged(m_args.record_file_prefix))
          m_cmd->setFilePrefix(m_args.record_file_prefix);

        if (paramChanged(m_args.range))
          m_cmd->setRange(m_args.range);

        if (paramChanged(m_args.channel_hf) || paramChanged(m_args.channel_lf))
          setFramingMode();

        if (paramChanged(m_args.addr))
          throw RestartNeeded(DTR("restarting to change IPv4 address"), 1);

        if (paramChanged(m_args.port))
          throw RestartNeeded(DTR("restarting to change TCP command port"), 1);
      }

      void
      onResourceRelease(void)
      {
        if (isConnected())
          disconnect();
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Push a new state to the state queue.
      //! @param[in] state state machine state.
      void
      queueState(StateMachineStates state)
      {
        m_sm_state_queue.push(state);
      }

      //! Test if state queue has pending state transitions.
      //! @return true if state queue has pending states, false otherwise.
      bool
      hasQueuedStates(void) const
      {
        return !m_sm_state_queue.empty();
      }

      StateMachineStates
      getCurrentState(void) const
      {
        return m_sm_state;
      }

      StateMachineStates
      dequeueState(void)
      {
        if (hasQueuedStates())
        {
          m_sm_state = m_sm_state_queue.front();
          m_sm_state_queue.pop();
        }

        return m_sm_state;
      }

      void
      onRequestActivation(void)
      {
        queueState(SM_ACT_BEGIN);
      }

      //! Try to connect to the sidescan.
      //! @return true if connection was established, false otherwise.
      bool
      tryConnect(void)
      {
        Counter<double> timer(1.0);
        try
        {
          m_cmd = new CommandLink(this, m_args.addr, m_args.port);
          initConfig();
          debug("connected to sidescan");
          return true;
        }
        catch (...)
        {
          double delay = timer.getRemaining();
          if (delay > 0.0)
            Delay::wait(delay);
        }

        return false;
      }

      //! Test if a connection exists to the sidescan.
      //! @return true if a connection exists, false otherwise.
      bool
      isConnected(void)
      {
        return m_cmd != NULL;
      }

      void
      failActivation(const std::string& message)
      {
        activationFailed(message);
        controlPower(IMC::PowerChannelControl::PCC_OP_TURN_OFF);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onRequestDeactivation(void)
      {
        queueState(SM_DEACT_BEGIN);
      }

      void
      disconnect(void)
      {
        debug("disconnecting");
        m_cmd->setRecordingMode(false);
        m_cmd->setStandBy(true);
        Memory::clear(m_cmd);
        debug("disconnected");
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        debug("deactivation complete");
      }

      void
      onActivation(void)
      {
        debug("activation took %0.2f s", m_wdog.getElapsed());

        m_cmd->setStandBy(false);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      requestLogName(void)
      {
        debug("requesting current log path");
        IMC::LoggingControl lc;
        lc.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
        dispatch(lc);
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->name != m_args.power_channel)
          return;

        bool old_state = m_powered;
        m_powered = (msg->state == IMC::PowerChannelState::PCS_ON);
        if (!old_state && m_powered)
          debug("device is powered");
        else if (old_state && !m_powered)
          debug("device is no longer powered");
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (!isActive())
          return;

        if (isConnected())
          m_cmd->sendNavigationData(*msg);
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        switch (msg->op)
        {
          case IMC::LoggingControl::COP_STARTED:
          case IMC::LoggingControl::COP_CURRENT_NAME:
            if (getCurrentState() == SM_ACT_LOG_WAIT || getCurrentState() == SM_ACT_SAMPLE)
              openLog(msg->name);
            break;

          case IMC::LoggingControl::COP_STOPPED:
            closeLog();
            break;
        }
      }

      std::string
      computeRecordingPath(const std::string& log_name)
      {
        std::string path(m_args.record_path_prefix);
        path += "/";
        path += getSystemName();
        path += "/";
        path += log_name;

        return path;
      }

      void
      openLog(const std::string& name)
      {
        std::string full_path = computeRecordingPath(name);
        if (full_path == m_log_path)
          return;

        debug("recording path: %s", full_path.c_str());

        m_log_path = full_path;
        m_cmd->setRecordingFilePath(m_log_path);
        m_cmd->setRecordingNewFile();
        m_cmd->setRecordingMode(true);
      }

      bool
      logIsOpen(void)
      {
        return !m_log_path.empty();
      }

      void
      closeLog(void)
      {
        if (isConnected())
          m_cmd->setRecordingMode(false);

        m_log_path.clear();
      }

      void
      setFramingMode(void)
      {
        uint32_t framing_mode = 0;
        if (m_args.channel_hf)
          framing_mode |= FM_HFSS;

        if (m_args.channel_lf)
          framing_mode |= FM_LFSS;

        m_cmd->setFramingMode(framing_mode);
      }

      //! Initialize sidescan configuration.
      void
      initConfig(void)
      {
        m_cmd->setStandBy(true);
        setFramingMode();
        m_cmd->setRecordingMode(false);
        m_cmd->setFileFormat(1);
        m_cmd->setFilePrefix(m_args.record_file_prefix);
        m_cmd->setPingsPerFile(m_args.pings_per_file);
        m_cmd->setRange(m_args.range);
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

      void
      turnPowerOn(void)
      {
        trace("turning power on");
        controlPower(IMC::PowerChannelControl::PCC_OP_TURN_ON);
      }

      void
      turnPowerOff(void)
      {
        trace("turning power off");
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
      updateStateMachine(void)
      {
        switch (dequeueState())
        {
          // Wait for activation.
          case SM_IDLE:
            break;

            // Begin activation sequence.
          case SM_ACT_BEGIN:
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
            m_wdog.setTop(getActivationTime());
            queueState(SM_ACT_POWER_ON);
            break;

            // Turn power on.
          case SM_ACT_POWER_ON:
            turnPowerOn();
            queueState(SM_ACT_POWER_WAIT);
            break;

            // Wait for power to be on.
          case SM_ACT_POWER_WAIT:
            if (isPowered())
            {
              queueState(SM_ACT_SS_WAIT);
            }
            else if (m_wdog.overflow())
            {
              failActivation(DTR("failed to turn power on"));
              queueState(SM_IDLE);
            }
            break;

            // Connect to sidescan.
          case SM_ACT_SS_WAIT:
            if (m_wdog.overflow())
            {
              failActivation(DTR("failed to connect to device"));
              queueState(SM_IDLE);
            }
            else if (tryConnect())
            {
              queueState(SM_ACT_LOG_REQUEST);
            }
            break;

            // Request log name.
          case SM_ACT_LOG_REQUEST:
            closeLog();
            requestLogName();
            queueState(SM_ACT_LOG_WAIT);
            break;

            // Wait for log name.
          case SM_ACT_LOG_WAIT:
            if (logIsOpen())
              queueState(SM_ACT_DONE);
            break;

            // Activation procedure is complete.
          case SM_ACT_DONE:
            queueState(SM_ACT_SAMPLE);
            activate();
            break;

            // Read samples and continuously estimate time difference.
          case SM_ACT_SAMPLE:
            break;

            // Start deactivation procedure.
          case SM_DEACT_BEGIN:
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_DEACTIVATING);
            m_wdog.setTop(getDeactivationTime());
            queueState(SM_DEACT_DISCONNECT);
            break;

            // Disconnect and shutdown sidescan.
          case SM_DEACT_DISCONNECT:
            disconnect();
            queueState(SM_DEACT_POWER_OFF);
            break;

            // Turn power off.
          case SM_DEACT_POWER_OFF:
            if (m_wdog.overflow())
            {
              turnPowerOff();
              queueState(SM_DEACT_POWER_WAIT);
            }
            break;

            // Wait for power to be turned off.
          case SM_DEACT_POWER_WAIT:
            if (!isPowered())
              queueState(SM_DEACT_DONE);
            break;

            // Deactivation is complete.
          case SM_DEACT_DONE:
            deactivate();
            queueState(SM_IDLE);
            break;
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (hasQueuedStates())
            updateStateMachine();
          else
            waitForMessages(1.0);

          try
          {
            updateStateMachine();
          }
          catch (std::runtime_error& e)
          {
            throw RestartNeeded(e.what(), 5);
          }
        }
      }
    };
  }
}

DUNE_TASK
