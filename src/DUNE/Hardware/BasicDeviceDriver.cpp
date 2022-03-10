//***************************************************************************
// Copyright 2007-2021 OceanScan - Marine Systems & Technology, Lda.        *
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

    //! Log file prefix.
    static const char *c_log_prefix = "Data_";

    BasicDeviceDriver::BasicDeviceDriver( const std::string &name, Tasks::Context &ctx ) :
        Tasks::Task(name, ctx),
        m_sm_state(SM_IDLE),
        m_log_opened(false),
        m_log_name_pending(false),
        m_post_power_on_delay(0.0),
        m_power_on_delay(0.0),
        m_power_off_delay(0.0),
        m_fault_count(0),
        m_timeout_count(0),
        m_restart(false),
        m_restart_delay(0.0)
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

    IO::Handle *
    BasicDeviceDriver::openDeviceHandle(const std::string &device)
    {
      IO::Handle *handle = openSocketTCP(device);
      if (handle == nullptr)
        handle = openUART(device);

      if (handle != nullptr)
        handle->flush();

      return handle;
    }

    IO::Handle *
    BasicDeviceDriver::openUART(const std::string &device)
    {
      char uart[128] = {0};
      unsigned baud = 0;

      if (std::sscanf(device.c_str(), "uart://%[^:]:%u", uart, &baud) != 2)
        return nullptr;

      return new SerialPort(uart, baud);
    }

    IO::Handle *
    BasicDeviceDriver::openSocketTCP(const std::string &device)
    {
      char addr[128] = {0};
      unsigned port = 0;

      if (std::sscanf(device.c_str(), "tcp://%[^:]:%u", addr, &port) != 2)
        return nullptr;

      TCPSocket *sock = nullptr;

      try
      {
        sock = new TCPSocket();
        sock->setKeepAlive(true);
        sock->setNoDelay(true);
        sock->setSendTimeout(1.0);
        sock->setReceiveTimeout(1.0);
        sock->connect(addr, port);
      }
      catch (...)
      {
        Memory::clear(sock);
        throw;
      }

      return sock;
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
      if (discardEstimatedState(msg))
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

    FileSystem::Path
    BasicDeviceDriver::getUnusedLogPath(const FileSystem::Path &path, const std::string &extension)
    {
      double now = Clock::getSinceEpoch();

      while (true)
      {
        std::string log_name(c_log_prefix);
        log_name.append(Format::getDateSafe(now) + Format::getTimeSafe(now));
        log_name.append(".");
        log_name.append(extension);

        Path file_path = m_ctx.dir_log / path / log_name;
        if (!file_path.exists())
          return file_path;

        now += 1.0;
      }
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
          if (m_restart)
          {
            m_restart = false;
            m_restart_timer.setTop(m_restart_delay);
            queueState(SM_RESTART_WAIT);
          }
          else
          {
            idle();
          }
          break;

          // Begin activation sequence.
        case SM_ACT_BEGIN:
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
          m_wdog.setTop(getActivationTime());
          if (m_power_channels.empty())
          {
            queueState(SM_ACT_DEV_WAIT);
          }
          else
          {
            if (m_power_on_delay > 0.0)
            {
              m_power_on_timer.setTop(m_power_on_delay);
              queueState(SM_ACT_POWER_ON_DELAY);
            }
            else
            {
              queueState(SM_ACT_POWER_ON);
            }
          }
          break;

          // Delay before turning power on.
        case SM_ACT_POWER_ON_DELAY:
          if ( m_power_on_timer.overflow() )
          {
            queueState( SM_ACT_POWER_ON );
          }
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
            {
              queueState(SM_ACT_DEV_SYNC);
              spew("Connect ok");
            }
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
            {
              queueState(SM_ACT_DONE);
            }
            else
            {
              spew("Log don't open");
            }
          }
          break;

          // Activation procedure is complete.
        case SM_ACT_DONE:
          try
          {
            activate();
          }
          catch(const std::runtime_error& e)
          {
            m_restart = true;
            activationFailed(e.what()); // NOT calling failActivation to move into DEACT_BEGIN
            queueState(SM_DEACT_BEGIN);
            break;
          }

          queueState(SM_ACT_SAMPLE);
          spew("start read sample");
          break;

          // Read samples.
        case SM_ACT_SAMPLE:
          readSample();
          break;

          // Start deactivation procedure.
        case SM_DEACT_BEGIN:
          debug("Setting Entity State DEACTIVATING");
          setEntityState( IMC::EntityState::ESTA_NORMAL, Status::CODE_DEACTIVATING );
          m_wdog.setTop( getDeactivationTime() );
          queueState( SM_DEACT_DISCONNECT );
          break;

          // Gracefully disconnect from device.
        case SM_DEACT_DISCONNECT:
          try
          {
            disconnect();
          }
          catch(const std::runtime_error& e)
          {
            err("failed to disconnect: %s", e.what());
          }

          if (enableLogControl())
            closeLog();

          if (m_power_channels.empty())
          {
            queueState(SM_DEACT_DONE);
          }
          else
          {
            m_power_off_timer.setTop(m_power_off_delay);
            queueState(SM_DEACT_POWER_OFF);
          }

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
          try
          {
            deactivate();
          }
          catch (const std::runtime_error& e)
          {
            err("failed deactivation: %s", e.what());
          }

          queueState(SM_IDLE);
          break;

        case SM_RESTART_WAIT:
          if (m_restart_timer.overflow())
          {
            requestActivation();
            queueState(SM_IDLE);
          }
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
    BasicDeviceDriver::wait(double duration)
    {
      Counter<double> wdog(duration);
      while (!wdog.overflow())
      {
        double delay = wdog.getRemaining();
        if (delay <= 0)
          break;

        waitForMessages(delay);
      }
    }

    void
    BasicDeviceDriver::step()
    {
      if (isActive())
        consumeMessages();
      else
        waitForMessages(1.0);

      updateStateMachine();
    }

    void
    BasicDeviceDriver::onMain()
    {
      while (!stopping())
      {
        try
        {
          step();
        }
        catch (std::runtime_error &e)
        {
          war("%s", e.what());
          setEntityState(IMC::EntityState::ESTA_NORMAL, e.what());
          m_restart = isActive() || isActivating();
          requestDeactivation();
        }
      }
    }
  }
}
