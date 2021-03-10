//***************************************************************************
// Copyright 2007-2020 OceanScan - Marine Systems & Technology, Lda.        *
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
#include <cstring>
#include <string>

// DUNE headers.
#include <DUNE/Hardware/BasicDeviceDriver.hpp>

namespace DUNE
{
  namespace Hardware
  {
    using DUNE_NAMESPACES;

    BasicDeviceDriver::BasicDeviceDriver(const std::string& name, Tasks::Context& ctx):
      Tasks::Task(name, ctx),
      m_sm_state(SM_IDLE),
      m_log_opened(false),
      m_log_name_pending(false),
      m_post_power_on_delay(0.0),
      m_power_off_delay(0.0),
      m_fault_count(0),
      m_timeout_count(0)
    {
      bind<IMC::EstimatedState>(this);
      bind<IMC::LoggingControl>(this);
      bind<IMC::PowerChannelState>(this);
      bind<IMC::SoundSpeed>(this);
    }

    void
    BasicDeviceDriver::onResourceRelease(void)
    {
      requestDeactivation();
    }

    void
    BasicDeviceDriver::onResourceInitialization(void)
    {
      setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
    }

    void
    BasicDeviceDriver::queueState(StateMachineStates state)
    {
      m_sm_state_queue.push(state);
    }

    bool
    BasicDeviceDriver::hasQueuedStates(void) const
    {
      return !m_sm_state_queue.empty();
    }

    BasicDeviceDriver::StateMachineStates
    BasicDeviceDriver::getCurrentState(void) const
    {
      return m_sm_state;
    }

    BasicDeviceDriver::StateMachineStates
    BasicDeviceDriver::dequeueState(void)
    {
      if (hasQueuedStates())
      {
        m_sm_state = m_sm_state_queue.front();
        m_sm_state_queue.pop();
      }

      return m_sm_state;
    }

    void
    BasicDeviceDriver::onRequestActivation(void)
    {
      queueState(SM_ACT_BEGIN);
    }

    bool
    BasicDeviceDriver::connect(void)
    {
      Counter<double> timer(1.0);
      try
      {
        trace("connecting...");
        return onConnect();
      }
      catch (...)
      {
        double delay = timer.getRemaining();
        if (delay > 0.0)
          Delay::wait(delay);
      }

      return false;
    }

    void
    BasicDeviceDriver::failActivation(const std::string& message)
    {
      activationFailed(message);
      turnPowerOff();
      setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
    }

    void
    BasicDeviceDriver::onRequestDeactivation(void)
    {
      queueState(SM_DEACT_BEGIN);
    }

    void
    BasicDeviceDriver::disconnect(void)
    {
      debug("disconnecting");
      onDisconnect();
      debug("disconnected");
    }

    void
    BasicDeviceDriver::onDeactivation(void)
    {
      setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      debug("deactivation complete");
    }

    void
    BasicDeviceDriver::onActivation(void)
    {
      initializeDevice();
      setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      debug("activation took %0.2f s", m_wdog.getElapsed());
    }

    void
    BasicDeviceDriver::initializeDevice(void)
    {
      debug("initializing device");
      onInitializeDevice();
    }

    //! Request the name of the current log file.
    void
    BasicDeviceDriver::requestLogName(void)
    {
      if (!enableLogControl())
        return;

      debug("requesting current log path");
      IMC::LoggingControl lc;
      lc.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
      dispatch(lc);
      m_log_name_pending = true;
    }

    void
    BasicDeviceDriver::consume(const IMC::EstimatedState* msg)
    {
      if (msg->getSource() != getSystemId())
        return;

      if (!isActive())
        return;

      onEstimatedState(*msg);
    }

    void
    BasicDeviceDriver::consume(const IMC::LoggingControl* msg)
    {
      if (!enableLogControl())
        return;

      switch (msg->op)
      {
        case IMC::LoggingControl::COP_CURRENT_NAME:
          if (m_log_name_pending)
          {
            m_log_name_pending = false;
            openLog(msg->name);
          }
          break;

        case IMC::LoggingControl::COP_STARTED:
          openLog(msg->name);
          break;

        case IMC::LoggingControl::COP_STOPPED:
          closeLog();
          break;
      }
    }

    void
    BasicDeviceDriver::consume(const IMC::SoundSpeed* msg)
    {
      if (msg->value <= 0 || !isActive())
        return;

      onSoundSpeed(msg->value);
    }

    bool
    BasicDeviceDriver::readSample(void)
    {
      return onReadData();
    }

    void
    BasicDeviceDriver::openLog(const Path& path)
    {
      if (!enableLogControl())
        return;

      if (!isActive() && !isActivating())
        return;

      closeLog();

      onOpenLog(path);

      m_log_opened = true;
    }

    void
    BasicDeviceDriver::closeLog(void)
    {
      if (!enableLogControl())
        return;

      if (!m_log_opened)
        return;

      debug("closing log file");
      onCloseLog();
      debug("log file closed");
      m_log_opened = false;
    }

    //! Consume power channel state messages.
    //! @param[in] msg power channel state.
    void
    BasicDeviceDriver::consume(const IMC::PowerChannelState* msg)
    {
      std::map<std::string, bool>::iterator itr = m_power_channels.find(msg->name);

      if (itr == m_power_channels.end())
        return;

      bool old_state = itr->second;
      itr->second = (msg->state == IMC::PowerChannelState::PCS_ON);
      if (!old_state && itr->second)
        debug("device %s is powered", msg->name.c_str());
      else if (old_state && !itr->second)
        debug("device %s is no longer powered", msg->name.c_str());
    }

    //! Power-on device.
    void
    BasicDeviceDriver::turnPowerOn(void)
    {
      trace("turning power on");
      controlPower(IMC::PowerChannelControl::PCC_OP_TURN_ON);
    }

    //! Power-off device.
    void
    BasicDeviceDriver::turnPowerOff(void)
    {
      trace("turning power off");
      controlPower(IMC::PowerChannelControl::PCC_OP_TURN_OFF);
    }

    //! Control device power.
    //! @param[in] op desired power channel operation.
    void
    BasicDeviceDriver::controlPower(IMC::PowerChannelControl::OperationEnum op)
    {
      if (m_power_channels.empty())
        return;

      std::map<std::string, bool>::iterator itr = m_power_channels.begin();
      for ( ; itr != m_power_channels.end(); ++itr)
      {
        IMC::PowerChannelControl pcc;
        pcc.op = op;
        pcc.name = itr->first;
        dispatch(pcc);
      }
    }

    bool
    BasicDeviceDriver::isPowered(bool state)
    {
      std::map<std::string, bool>::iterator itr = m_power_channels.begin();
      for (; itr != m_power_channels.end(); ++itr)
      {
        if (state == !itr->second)
          return false;
      }

      return true;
    }

    void
    BasicDeviceDriver::updateStateMachine(void)
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
          if (isPowered(true))
          {
            m_power_on_timer.setTop(m_post_power_on_delay);
            queueState(SM_ACT_DEV_WAIT);
          }

          if (m_wdog.overflow())
          {
            failActivation(DTR("failed to turn power on"));
            queueState(SM_IDLE);
          }
          break;

          // Connect to device.
        case SM_ACT_DEV_WAIT:
          if (m_wdog.overflow())
          {
            failActivation(DTR("failed to connect to device"));
            queueState(SM_IDLE);
          }
          else if (m_power_on_timer.overflow())
          {
            if (connect())
              queueState(SM_ACT_DEV_SYNC);
          }

          break;

          // Synchronize with device.
        case SM_ACT_DEV_SYNC:
          if (m_wdog.overflow())
          {
            failActivation(DTR("failed to synchronize with device"));
            queueState(SM_IDLE);
          }
          else
          {
            if (synchronize())
            {
              if (enableLogControl())
                queueState(SM_ACT_LOG_REQUEST);
              else
                queueState(SM_ACT_DONE);
            }
          }
          break;

          // Request log name.
        case SM_ACT_LOG_REQUEST:
          if (m_wdog.overflow())
          {
            failActivation(DTR("failed to request current log name"));
            queueState(SM_IDLE);
          }
          else
          {
            closeLog();
            requestLogName();
            queueState(SM_ACT_LOG_WAIT);
          }
          break;

          // Wait for log name.
        case SM_ACT_LOG_WAIT:
          if (m_wdog.overflow())
          {
            failActivation(DTR("failed to retrieve current log name"));
            queueState(SM_IDLE);
          }
          else
          {
            if (m_log_opened)
              queueState(SM_ACT_DONE);
          }
          break;

          // Activation procedure is complete.
        case SM_ACT_DONE:
          activate();
          queueState(SM_ACT_SAMPLE);
          break;

          // Read samples.
        case SM_ACT_SAMPLE:
          readSample();
          break;

          // Start deactivation procedure.
        case SM_DEACT_BEGIN:
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_DEACTIVATING);
          m_wdog.setTop(getDeactivationTime());
          queueState(SM_DEACT_DISCONNECT);
          break;

          // Gracefully disconnect from device.
        case SM_DEACT_DISCONNECT:
          disconnect();

          if (enableLogControl())
            closeLog();

          m_power_off_timer.setTop(m_power_off_delay);

          queueState(SM_DEACT_POWER_OFF);
          break;

          // Turn power off.
        case SM_DEACT_POWER_OFF:
          if (m_power_off_timer.overflow() || m_wdog.overflow())
          {
            turnPowerOff();
            queueState(SM_DEACT_POWER_WAIT);
          }
          break;

          // Wait for power to be turned off.
        case SM_DEACT_POWER_WAIT:
          if (isPowered(false))
            queueState(SM_DEACT_DONE);
          break;

          // Deactivation is complete.
        case SM_DEACT_DONE:
          deactivate();
          queueState(SM_IDLE);
          break;
      }
    }

    bool
    BasicDeviceDriver::synchronize(void)
    {
      bool rv = onSynchronize();
      if (rv)
        debug("device is synchronized");

      return rv;
    }

    bool
    BasicDeviceDriver::onSynchronize(void)
    {
      return true;
    }

    void
    BasicDeviceDriver::onEstimatedState(const DUNE::IMC::EstimatedState& msg)
    {
      (void)msg;
    }

    void
    BasicDeviceDriver::onSoundSpeed(double value)
    {
      (void)value;
    }

    void
    BasicDeviceDriver::onOpenLog(const DUNE::FileSystem::Path& path)
    {
      trace("handled open log request: '%s'", path.c_str());
    }

    void
    BasicDeviceDriver::onCloseLog(void)
    {
      trace("handled close log request");
    }

    void
    BasicDeviceDriver::onMain(void)
    {
      while (!stopping())
      {
        if (isActive())
          consumeMessages();
        else if (hasQueuedStates())
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
  }
}
