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
    static const char* c_log_prefix = "Data_";
    //! Sample Time Duration.
    static const char* c_sample_time_duration = "Sample Time Duration";
    //! Periodicity of Data Sampling.
    static const char* c_periodicity_data_sampling = "Periodicity of Data Sampling";
    //! Continuous Sampling description.
    static const char* c_continuous_sampling_desc = "<td>Continuous sampling</td>";
    //! Periodic Single Sample description.
    static const char* c_periodic_single_sample_desc = "<td>"
                                                         "Periodic single sample"
                                                         "<pre style='font-family: Monospaced'>"
                                                         "[P][=====][=====]<br>"
                                                         "[S]|------|------"
                                                         "</pre>"
                                                       "</td>";
    //! Periodic Sampling description.
    static const char* c_periodic_sampling_desc = "<td>"
                                                    "Periodic sampling"
                                                    "<pre style='font-family: Monospaced'>"
                                                    "[P][=====][=====]<br>"
                                                    "[S][==---][==---]"
                                                    "</pre>"
                                                  "</td>";
    //! Invalid Sampling description.
    static const char* c_invalid_sampling_desc = "<td>Invalid</td>";
    //! Not supported Sampling description.
    static const char* c_not_supported_sampling_desc = "<td>Not supported</td>";
    //! Entity state dispatch period (s).
    static constexpr uint8_t c_entity_state_dispatch_period = 5; 

    BasicDeviceDriver::BasicDeviceDriver( const std::string &name, Tasks::Context &ctx ):
      Tasks::Task(name, ctx),
      m_sm_state(SM_IDLE),
      m_wait_msg_timeout(0.0),
      m_log_opened(false),
      m_log_name_pending(false),
      m_post_power_on_delay(0.0),
      m_power_on_delay(0.0),
      m_power_off_delay(0.0),
      m_fault_count(0),
      m_timeout_count(0),
      m_restart(false),
      m_restart_delay(0.0),
      m_uri(),
      m_honours_conf_samp(false),
      m_is_sampling(false),
      m_periodicity_timer(0.0f),
      m_conf_samp_modes(CSM_NO_CONF_SAMP),
      m_conf_samp_mode(CSM_NO_CONF_SAMP),
      m_honours_vp(false),
      m_vp_timer(0.0f),
      m_state_timer(c_entity_state_dispatch_period)
    {
      paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                  Tasks::Parameter::VISIBILITY_DEVELOPER, 
                  true);

      param("Power Channel - Names", m_bdd_args.pwr_channels)
      .defaultValue("")
      .description("Device's power channels");

      param("Power On Delay", m_bdd_args.pwr_on_delay)
      .minimumValue("0.0")
      .defaultValue("0.0")
      .description("Delay before powering on the device");

      param("Power Off Delay", m_bdd_args.pwr_off_delay)
      .minimumValue("0.0")
      .defaultValue("0.0")
      .description("Delay before powering off the device");

      param("Post Power On Delay", m_bdd_args.post_pwr_on_delay)
      .minimumValue("0.0")
      .defaultValue("0.0")
      .description("Delay after powering up the device");

      m_restart_needed = true;
      bind<IMC::EstimatedState>(this);
      bind<IMC::LoggingControl>(this);
      bind<IMC::PowerChannelState>(this);
      bind<IMC::SoundSpeed>(this);
    }

    void
    BasicDeviceDriver::onUpdateParameters(void)
    {
      if (paramChanged(m_bdd_args.pwr_channels))
      {
        clearPowerChannelNames();
        for (const auto& pc : m_bdd_args.pwr_channels)
          addPowerChannelName(pc);
      }

      if (paramChanged(m_bdd_args.pwr_on_delay))
        setPowerOnDelay(m_bdd_args.pwr_on_delay);

      if (paramChanged(m_bdd_args.pwr_off_delay))
        setPowerOffDelay(m_bdd_args.pwr_off_delay);

      if (paramChanged(m_bdd_args.post_pwr_on_delay))
        setPostPowerOnDelay(m_bdd_args.post_pwr_on_delay);

      if (m_honours_conf_samp)
      {
        if (paramChanged(m_bdd_args.sample_time_duration) ||
          paramChanged(m_bdd_args.periodicity_data_sampling))
        {
          if (m_bdd_args.sample_time_duration > m_bdd_args.periodicity_data_sampling)
          {
            err("%s is greater than %s -> Deactivating", c_sample_time_duration, c_periodicity_data_sampling);
            requestDeactivation();
            return;
          }
          else if (m_bdd_args.sample_time_duration == m_bdd_args.periodicity_data_sampling)
          {
            if (!(m_conf_samp_modes & ConfigurableSamplingSupportedModes::CSM_CONTINUOUS_SAMPLING))
            {
              err("Continuous Sampling not supported -> Deactivating");
              requestDeactivation();
              return;
            }

            m_conf_samp_mode = ConfigurableSamplingSupportedModes::CSM_CONTINUOUS_SAMPLING;
          }
          else if (m_bdd_args.sample_time_duration == 0.0f)
          {
            if (!(m_conf_samp_modes & ConfigurableSamplingSupportedModes::CSM_PERIODIC_SINGLE_SAMPLING))
            {
              err("Periodic Single Sampling not supported -> Deactivating");
              requestDeactivation();
              return;
            }

            m_conf_samp_mode = ConfigurableSamplingSupportedModes::CSM_PERIODIC_SINGLE_SAMPLING;
          }
          else
          {
            if (!(m_conf_samp_modes & ConfigurableSamplingSupportedModes::CSM_PERIODIC_SAMPLING))
            {
              err("Periodic Sampling not supported -> Deactivating");
              requestDeactivation();
              return;
            }

            m_conf_samp_mode = ConfigurableSamplingSupportedModes::CSM_PERIODIC_SAMPLING;
          }

          if (isActive() && (m_conf_samp_mode == ConfigurableSamplingSupportedModes::CSM_CONTINUOUS_SAMPLING))
            startSampling();
          else
            m_periodicity_timer.setTop(0.0f);
        }

        if (paramChanged(m_bdd_args.sample_time_duration_visibility))
          setParameterVisibility(c_sample_time_duration, m_bdd_args.sample_time_duration_visibility);

        if (paramChanged(m_bdd_args.sample_time_duration_scope))
          setParameterScope(c_sample_time_duration, m_bdd_args.sample_time_duration_scope);

        if (paramChanged(m_bdd_args.periodicity_data_sampling_visibility))
          setParameterVisibility(c_periodicity_data_sampling, m_bdd_args.periodicity_data_sampling_visibility);

        if (paramChanged(m_bdd_args.periodicity_data_sampling_scope))
          setParameterScope(c_periodicity_data_sampling, m_bdd_args.periodicity_data_sampling_scope);
      }

      if (m_honours_vp)
      {
        if (paramChanged(m_bdd_args.vp_periodicity) && m_vp_timer.getTop() > 0.0f)
        {
          m_vp_timer.setTop(trimValue(m_bdd_args.vp_periodicity - m_vp_timer.getElapsed(),
                                      0.0f,
                                      m_bdd_args.vp_periodicity));
        }
      }
    }

    void
    BasicDeviceDriver::paramConfigurableSampling(ConfigurableSamplingSupportedModes supported_modes,
                                                 Parameter::Scope def_scope,
                                                 Parameter::Visibility def_visibility,
                                                 double def_sampling,
                                                 double def_periodicity)
    {
      m_honours_conf_samp = true;
      std::string scope_str = Parameter::scopeToString(def_scope);
      std::string visibility_str = Parameter::visibilityToString(def_visibility);
      m_conf_samp_modes = supported_modes;

      std::ostringstream samp_dur_description;
      samp_dur_description << c_sample_time_duration << " (S) in seconds. "
                           << "This value must not be greater than "
                           << c_periodicity_data_sampling << " (P), otherwise, "
                           << "task will be deactivated."
                           << "<table border=\"1\">"
                           <<   "<thead>"
                           <<     "<tr>"
                           <<       "<th>[S]</th>"
                           <<       "<th>[P]</th>"
                           <<       "<th>Description</th>"
                           <<     "</tr>"
                           <<   "</thead>"
                           <<   "<tbody>"
                           <<     "<tr>"
                           <<       "<td>=P</td>"
                           <<       "<td>=S</td>"
                           <<       ((m_conf_samp_modes & ConfigurableSamplingSupportedModes::CSM_CONTINUOUS_SAMPLING) ?
                                     c_continuous_sampling_desc :
                                     c_not_supported_sampling_desc)
                           <<     "</tr>"
                           <<     "<tr>"
                           <<       "<td>=0</td>"
                           <<       "<td>&gt;0</td>"
                           <<       ((m_conf_samp_modes & ConfigurableSamplingSupportedModes::CSM_PERIODIC_SINGLE_SAMPLING) ?
                                     c_periodic_single_sample_desc :
                                     c_not_supported_sampling_desc)
                           <<     "</tr>"
                           <<     "<tr>"
                           <<       "<td>&lt;P</td>"
                           <<       "<td>&gt;S</td>"
                           <<       ((m_conf_samp_modes & ConfigurableSamplingSupportedModes::CSM_PERIODIC_SAMPLING) ?
                                     c_periodic_sampling_desc :
                                     c_not_supported_sampling_desc)
                           <<     "</tr>"
                           <<     "<tr>"
                           <<       "<td>&gt;P</td>"
                           <<       "<td>&lt;S</td>"
                           <<       c_invalid_sampling_desc
                           <<     "</tr>"
                           <<   "</tbody>"
                           << "</table>";

      param(c_sample_time_duration, m_bdd_args.sample_time_duration)
      .scope(def_scope)
      .visibility(def_visibility)
      .minimumValue("0.0")
      .defaultValue(uncastLexical(def_sampling))
      .units(Units::Second)
      .description(samp_dur_description.str());

      param(std::string(c_sample_time_duration) + " - Visibility", m_bdd_args.sample_time_duration_visibility)
      .visibility(Parameter::VISIBILITY_DEVELOPER)
      .scope(Parameter::SCOPE_GLOBAL)
      .defaultValue("developer")
      .values(Parameter::visibilityValues())
      .description("Visibility of the '" + std::string(c_sample_time_duration) + "' parameter");

      param(std::string(c_sample_time_duration) + " - Scope", m_bdd_args.sample_time_duration_scope)
      .visibility(Parameter::VISIBILITY_DEVELOPER)
      .scope(Parameter::SCOPE_GLOBAL)
      .defaultValue("global")
      .values(Parameter::scopeValues())
      .description("Scoped of the '" + std::string(c_sample_time_duration) + "' parameter");

      std::ostringstream perioditicity_description;
      perioditicity_description << c_periodicity_data_sampling << " (P) in seconds. "
                                << "This value must not be lower than "
                                << c_sample_time_duration << " (S), otherwise, "
                                << "task will be deactivated."
                                << "<table border=\"1\">"
                                <<   "<thead>"
                                <<     "<tr>"
                                <<       "<th>[S]</th>"
                                <<       "<th>[P]</th>"
                                <<       "<th>Description</th>"
                                <<     "</tr>"
                                <<   "</thead>"
                                <<   "<tbody>"
                                <<     "<tr>"
                                <<       "<td>=P</td>"
                                <<       "<td>=S</td>"
                                <<       ((m_conf_samp_modes & ConfigurableSamplingSupportedModes::CSM_CONTINUOUS_SAMPLING) ?
                                          c_continuous_sampling_desc :
                                          c_not_supported_sampling_desc)
                                <<     "</tr>"
                                <<     "<tr>"
                                <<       "<td>=0</td>"
                                <<       "<td>&gt;0</td>"
                                <<       ((m_conf_samp_modes & ConfigurableSamplingSupportedModes::CSM_PERIODIC_SINGLE_SAMPLING) ?
                                          c_periodic_single_sample_desc :
                                          c_not_supported_sampling_desc)
                                <<     "</tr>"
                                <<     "<tr>"
                                <<       "<td>&lt;P</td>"
                                <<       "<td>&gt;S</td>"
                                <<       ((m_conf_samp_modes & ConfigurableSamplingSupportedModes::CSM_PERIODIC_SAMPLING) ?
                                          c_periodic_sampling_desc :
                                          c_not_supported_sampling_desc)
                                <<     "</tr>"
                                <<     "<tr>"
                                <<       "<td>&gt;P</td>"
                                <<       "<td>&lt;S</td>"
                                <<       c_invalid_sampling_desc
                                <<     "</tr>"
                                <<   "</tbody>"
                                << "</table>";

      param(c_periodicity_data_sampling, m_bdd_args.periodicity_data_sampling)
      .scope(Tasks::Parameter::SCOPE_GLOBAL)
      .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
      .minimumValue("0.0")
      .defaultValue(uncastLexical(def_periodicity))
      .units(Units::Second)
      .description(perioditicity_description.str());

      param(std::string(c_periodicity_data_sampling) + " - Visibility", m_bdd_args.periodicity_data_sampling_visibility)
      .visibility(Parameter::VISIBILITY_DEVELOPER)
      .scope(Parameter::SCOPE_GLOBAL)
      .defaultValue("developer")
      .values(Parameter::visibilityValues())
      .description("Visibility of the '" + std::string(c_periodicity_data_sampling) + "' parameter");

      param(std::string(c_periodicity_data_sampling) + " - Scope", m_bdd_args.periodicity_data_sampling_scope)
      .visibility(Parameter::VISIBILITY_DEVELOPER)
      .scope(Parameter::SCOPE_GLOBAL)
      .defaultValue("global")
      .values(Parameter::scopeValues())
      .description("Scoped of the '" + std::string(c_periodicity_data_sampling) + "' parameter");
    }

    void
    BasicDeviceDriver::paramVerticalProfile(void)
    {
      m_honours_vp = true;

      param("Vertical Profile Periodicity", m_bdd_args.vp_periodicity)
      .units(Units::Second)
      .minimumValue("0.0")
      .defaultValue("0.0")
      .description("Periodicity of vertical profiles. 0 means never send.");
    }

    void
    BasicDeviceDriver::onResourceRelease(void)
    {
      requestDeactivation();
    }

    void
    BasicDeviceDriver::setRestartNeeded(bool state)
    {
      m_restart_needed = state;
    }

    void
    BasicDeviceDriver::onResourceInitialization(void)
    {
      setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

      if (getActivationTime() == 0.0)
        throw std::runtime_error("Activation Time set to 0.0! Please set a positive time.");
    }

    IO::Handle*
    BasicDeviceDriver::openDeviceHandle(const std::string &device, bool canonicalInput)
    {
      IO::Handle *handle = openSocketTCP(device);
      if (handle == nullptr)
        handle = openUART(device, canonicalInput);

      if (handle != nullptr)
        handle->flush();

      return handle;
    }

    IO::Handle*
    BasicDeviceDriver::openUART(const std::string &device, bool canonicalInput)
    {
      char uart[128] = {0};
      unsigned baud = 0;

      // Save device URI
      m_uri = device;
      trace("[UART] >> attempting URI: %s", device.c_str());

      if (std::sscanf(device.c_str(), "uart://%[^:]:%u", uart, &baud) != 2)
        return nullptr;

      SerialPort* uri = new SerialPort(uart, baud);
      uri->setCanonicalInput(canonicalInput);
      return uri;
    }

    IO::Handle *
    BasicDeviceDriver::openSocketTCP(const std::string &device)
    {
      char addr[128] = {0};
      unsigned port = 0;

      // Save device URI
      m_uri = device;
      trace("[TCP] >> attempting URI: %s", device.c_str());

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
        if (m_sm_state == SM_ACT_SAMPLE && m_is_sampling)
          stopSampling();
        
        m_sm_state = m_sm_state_queue.front();
        m_sm_state_queue.pop();
      }

      return m_sm_state;
    }

    void
    BasicDeviceDriver::onRequestActivation(void)
    {
      debug("activating");
      if (getEntityState() <= IMC::EntityState::ESTA_NORMAL)
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
      queueState(SM_ACT_BEGIN);
    }

    bool
    BasicDeviceDriver::connect(void)
    {
      Counter<double> timer(1.0);
      bool rv = false;
      try
      {
        trace("connecting...");
        rv = onConnect();
      }
      catch (...)
      {
        double delay = timer.getRemaining();
        if (delay > 0.0)
          Delay::wait(delay);

        return false;
      }

      if (rv)
        trace("connected");

      return rv;
    }

    bool
    BasicDeviceDriver::synchronize(void)
    {
      bool rv = false;
      try
      {
        trace("synchronizing...");
        rv = onSynchronize();
      }
      catch(const std::runtime_error& e)
      {
        err("synchronization failure: %s", e.what());
        return false;
      }

      if (rv)
        trace("synchronized");

      return rv;
    }

    void
    BasicDeviceDriver::failActivation(const std::string& message)
    {
      activationFailed(message);
      turnPowerOff();
      err("%s", message.c_str());
      setEntityState(IMC::EntityState::ESTA_FAILURE, message);
    }

    void
    BasicDeviceDriver::restart(void)
    {
      m_restart_timer.setTop(m_restart_delay);
      queueState(SM_RESTART_WAIT);
    }

    void
    BasicDeviceDriver::requestRestart()
    {
      spew("restart requested");
      m_restart = true;
      if (getCurrentState() >= SM_ACT_DONE)
        requestDeactivation();
      else
        restart();
    }

    void
    BasicDeviceDriver::onRequestDeactivation(void)
    {
      setEntityState(getEntityState(), Status::CODE_DEACTIVATING);
      debug("deactivating");
      queueState(SM_DEACT_BEGIN);
    }

    void
    BasicDeviceDriver::disconnect(void)
    {
      trace("disconnecting...");
      try
      {
        onDisconnect();
        trace("disconnected");
      }
      catch(const std::runtime_error& e)
      {
        err("disconnect failure: %s", e.what());
      }
    }

    void
    BasicDeviceDriver::onDeactivation(void)
    {
      setEntityState(getEntityState(), Status::CODE_IDLE);
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
      trace("initializing...");
      onInitializeDevice();
      trace("initialized");
    }

    //! Request the name of the current log file.
    void
    BasicDeviceDriver::requestLogName(void)
    {
      if (!enableLogControl())
        return;

      trace("requesting current log path");
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

      if (discardLoggingControl(msg))
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
      if (onReadData())
      {
        if (m_honours_vp && m_vp_timer.overflow())
        {
          onVerticalProfile();
          m_vp_timer.setTop(m_bdd_args.vp_periodicity);
        }

        return true;
      }

      return false;
    }

    void
    BasicDeviceDriver::openLog(const Path& path)
    {
      if (!enableLogControl())
        return;

      if (!isActive() && !isActivating())
        return;

      closeLog();

      trace("opening log file");
      onOpenLog(path);
      trace("log file opened");

      m_log_opened = true;
    }

    void
    BasicDeviceDriver::closeLog(void)
    {
      if (!enableLogControl())
        return;

      if (!m_log_opened)
        return;

      trace("closing log file");
      onCloseLog();
      trace("log file closed");
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
        trace("device %s is powered", msg->name.c_str());
      else if (old_state && !itr->second)
      {
        trace("device %s is no longer powered", msg->name.c_str());
        if (isActive())
          requestDeactivation();
      }
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
    BasicDeviceDriver::startSampling(void)
    {
      if (m_is_sampling)
        return;
      
      spew("start sampling");
      onStartSampling();
      m_is_sampling = true;
    }

    void
    BasicDeviceDriver::stopSampling(void)
    {
      if (!m_is_sampling)
        return;
        
      spew("stop sampling");
      onStopSampling();
      m_is_sampling = false;
    }

    void
    BasicDeviceDriver::onStartSampling(void)
    { }

    void
    BasicDeviceDriver::onStopSampling(void)
    { }

    void
    BasicDeviceDriver::setEntityStateSampling(bool state)
    {
      std::ostringstream description;
      description << "active";

      switch (m_conf_samp_mode)
      {
      case ConfigurableSamplingSupportedModes::CSM_PERIODIC_SAMPLING:
      {
        description << " | sampling: " << (state ? "on" : "off");
        const auto time = Format::getTimeDHMS(state ? getSamplePeriodRemaining() : getSamplePeriodicityRemaining());
        if (!time.empty())
          description << " (r: " << time << ")";
        break;
      }

      case ConfigurableSamplingSupportedModes::CSM_PERIODIC_SINGLE_SAMPLING:
      {
        const auto time = Format::getTimeDHMS(getSamplePeriodicity());
        if (!time.empty())
          description << " | doing a periodic sample every " << time;
        break;
      }
        
      case ConfigurableSamplingSupportedModes::CSM_CONTINUOUS_SAMPLING:
      default:
        break;
      }

      setEntityState(IMC::EntityState::ESTA_NORMAL, description.str());
    }

    void
    BasicDeviceDriver::updateStateMachine(void)
    {
      switch (dequeueState())
      {
        // Wait for activation.
        case SM_IDLE:
            idle();
          break;

        // Begin activation sequence.
        case SM_ACT_BEGIN:
          m_wdog.setTop(getActivationTime());
          if (m_power_channels.empty())
          {
            m_power_on_timer.setTop(m_post_power_on_delay);
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
          if (m_power_on_timer.overflow())
          {
            queueState(SM_ACT_POWER_ON);
          }
          break;

        // Turn power on.
        case SM_ACT_POWER_ON:
          if (isPowered())
          {
            queueState(SM_ACT_DEV_WAIT);
          }
          else
          {
            turnPowerOn();
            queueState(SM_ACT_POWER_WAIT);
          }
          break;

        // Wait for power to be on.
        case SM_ACT_POWER_WAIT:
          if (isPowered())
          {
            m_power_on_timer.setTop(m_post_power_on_delay);
            queueState(SM_ACT_DEV_WAIT);
          }

          if (m_wdog.overflow())
          {
            std::string msg = "Activation timeout - turn power on: ";
            for (auto p : m_power_channels)
              if (!p.second)
                msg += p.first + " ";

            failActivation(DTR(msg.c_str()));
            if(m_restart_needed)
              requestRestart();
            else
              queueState(SM_IDLE);
          }
          break;

        // Connect to device.
        case SM_ACT_DEV_WAIT:
          if (m_wdog.overflow())
          {
            std::string msg = "Activation timeout - connect to device: ";
            msg += m_uri;
            failActivation(DTR(msg.c_str()));
            if(m_restart_needed)
              requestRestart();
            else
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
            failActivation(DTR("Activation timeout - synchronize with device"));
            if(m_restart_needed)
              requestRestart();
            else
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
            failActivation(DTR("Activation timeout - request current log name"));
            if(m_restart_needed)
              requestRestart();
            else
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
            failActivation(DTR("Activation timeout - retrieve current log name"));
            if(m_restart_needed)
              requestRestart();
            else
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
          try
          {
            activate();
          }
          catch(const std::runtime_error& e)
          {
            activationFailed(e.what()); // NOT calling failActivation to move into DEACT_BEGIN
            requestRestart();
            break;
          }

          queueState(SM_ACT_SAMPLE);

          if (!m_honours_conf_samp ||
              (m_conf_samp_mode == ConfigurableSamplingSupportedModes::CSM_CONTINUOUS_SAMPLING))
            startSampling();
          else
            m_periodicity_timer.setTop(0.0f);

          break;

        // Read samples.
        case SM_ACT_SAMPLE:
          if (!m_honours_conf_samp ||
              (m_conf_samp_mode == ConfigurableSamplingSupportedModes::CSM_CONTINUOUS_SAMPLING))
          {
            readSample();
          }
          else if (m_periodicity_timer.overflow())
          {
            m_periodicity_timer.setTop(m_bdd_args.periodicity_data_sampling);
            startSampling();
            readSample();

            if (m_conf_samp_mode == ConfigurableSamplingSupportedModes::CSM_PERIODIC_SINGLE_SAMPLING)
              stopSampling();
          }
          else if (m_is_sampling)
          {
            if (m_periodicity_timer.getElapsed() < m_bdd_args.sample_time_duration)
              readSample();
            else
              stopSampling();
          }

          break;

        // Start deactivation procedure.
        case SM_DEACT_BEGIN:
          m_wdog.setTop(getDeactivationTime());
          queueState(SM_DEACT_DISCONNECT);
          break;

        // Gracefully disconnect from device.
        case SM_DEACT_DISCONNECT:
          disconnect();

          if (enableLogControl())
            closeLog();

          if (isPowered(false))
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

          if (m_restart)
            restart();
          else
            queueState(SM_IDLE);
          break;

        case SM_RESTART_WAIT:
          if (m_restart_timer.overflow())
          {
            m_restart = false;
            requestActivation();
          }
          break;
      }
    }

    void
    BasicDeviceDriver::onVerticalProfile(void)
    { }

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
    BasicDeviceDriver::step(void)
    {
      if (!isActive())
        waitForMessages(1.0);
      else if (m_honours_conf_samp && !m_is_sampling)
        waitForMessages(getSamplePeriodicityRemaining());
      else if (m_wait_msg_timeout > 0.0)
        waitForMessages(m_wait_msg_timeout);
      else
        consumeMessages();
      
      updateStateMachine();

      if (m_honours_conf_samp && m_state_timer.overflow())
      {
        setEntityStateSampling(m_is_sampling);
        m_state_timer.reset();
      }
    }

    void
    BasicDeviceDriver::onMain(void)
    {
      while (!stopping())
      {
        try
        {
          step();
        }
        catch(RestartNeeded& e)
        {
          requestRestart();
          throw e;
        }
        catch(std::runtime_error& e)
        {
          war("%s", e.what());
          setEntityState(IMC::EntityState::ESTA_ERROR, e.what());
          requestRestart();
        }
      }
    }
  }
}
