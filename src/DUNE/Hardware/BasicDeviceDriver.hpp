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

#ifndef DUNE_HARDWARE_BASIC_DEVICE_DRIVER_HPP_INCLUDED_
#define DUNE_HARDWARE_BASIC_DEVICE_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <string>
#include <map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace DUNE
{
  namespace Hardware
  {
    using DUNE::Tasks::Parameter;
    
    struct BDDArguments
    {
      //! Restart needed upon activation fail.
      bool restart_needed;
      //! Power channels.
      std::vector<std::string> pwr_channels;
      //! Delay before powering on the device.
      double pwr_on_delay;
      //! Delay before powering off the device.
      double pwr_off_delay;
      //! Delay after powering on the device.
      double post_pwr_on_delay;
      //! Sample Time Duration.
      double sample_time_duration;
      //! Sample Time Duration visibility.
      std::string sample_time_duration_visibility;
      //! Sample Time Duration scope.
      std::string sample_time_duration_scope;
      //! Periodicity of Data Sampling.
      double periodicity_data_sampling;
      //! Periodicity of Data Sampling visibility.
      std::string periodicity_data_sampling_visibility;
      //! Periodicity of Data Sampling scope.
      std::string periodicity_data_sampling_scope;
      //! Vertical Profile Periodicity.
      double vp_periodicity;
    };

    class BasicDeviceDriver: public DUNE::Tasks::Task
    {
    public:
      BasicDeviceDriver(const std::string& name, DUNE::Tasks::Context& ctx);

      //! Consume estimated state messages.
      //! @param[in] msg EstimatedState message.
      void
      consume(const IMC::EstimatedState* msg);

      //! Consume logging control messages.
      //! @param[in] msg LoggingControl message.
      void
      consume(const IMC::LoggingControl* msg);

      //! Consume sound speed messages.
      //! @param[in] msg SoundSpeed message.
      void
      consume(const IMC::SoundSpeed* msg);

      //! Consume power channel state messages.
      //! @param[in] msg PowerChannelState message.
      void
      consume(const IMC::PowerChannelState* msg);

    protected:
      //! Configurable Sampling Supported Modes.
      enum ConfigurableSamplingSupportedModes : uint8_t
      {
        //! No Configurable Sampling.
        CSM_NO_CONF_SAMP = 0x0,
        //! Periodic Single Sampling.
        CSM_PERIODIC_SINGLE_SAMPLING = 0x1,
        //! Periodic Sampling.
        CSM_PERIODIC_SAMPLING = 0x2,
        //! Continuous Sampling.
        CSM_CONTINUOUS_SAMPLING = 0x4,
        //! All.
        CSM_ALL = 0x7
      };

      //! Create an I/O handle given an URI.
      //!
      //! @param[in] uri URI.
      //!
      //! @return I/O handle.
      IO::Handle*
      openDeviceHandle(const std::string& uri, bool canonicalInput = false);

      //! Create an I/O handle given a serial port URI.
      //!
      //! @param[in] uri URI of the form: uart://DEVICE:BAUD
      //!
      //! @return I/O handle.
      IO::Handle*
      openUART(const std::string& uri, bool canonicalInput = false);

      //! Create an I/O handle given a TCP port URI.
      //!
      //! @param[in] uri URI of the form: tcp://HOST:PORT
      //!
      //! @return I/O handle.
      IO::Handle*
      openSocketTCP(const std::string& uri);

      //! Set the amount of time to wait before powering up the device.
      //! @param[in] value delay in second.
      void
      setPowerOnDelay(double value)
      {
        if (value < 0)
          value = 0;

        m_power_on_delay = value;
      }

      //! Set the amount of time to wait before powering down the device.
      //! @param[in] value delay in second.
      void
      setPowerOffDelay(double value)
      {
        if (value < 0)
          value = 0;

        m_power_off_delay = value;
      }

      //! Set post power-on delay.
      //! @param[in] value delay in second.
      void
      setPostPowerOnDelay(double value)
      {
        if (value < 0)
          value = 0;

        m_post_power_on_delay = value;
      }

      void
      clearPowerChannelNames(void)
      {
        m_power_channels.clear();
      }

      void
      addPowerChannelName(const std::string& name)
      {
        if (!name.empty())
          m_power_channels.insert(std::make_pair(name, false));
      }

      virtual void
      onIdle(void)
      { }

      virtual bool
      onConnect(void) = 0;

      virtual void
      onDisconnect(void) = 0;

      virtual bool
      enableLogControl(void)
      {
        return false;
      }

      inline double
      getSamplePeriodicity(void)
      {
        return m_bdd_args.periodicity_data_sampling;
      }

      inline double
      getSamplePeriod(void)
      {
        return m_bdd_args.sample_time_duration;
      }

      inline double
      getSamplePeriodicityRemaining(void)
      {
        return m_periodicity_timer.getRemaining();
      }

      inline double
      getSamplePeriodRemaining(void)
      {
        return std::max(0.0, m_bdd_args.sample_time_duration - m_periodicity_timer.getElapsed());
      }

      inline double
      getSamplePeriodicityElapsed(void)
      {
        return m_periodicity_timer.getElapsed();
      }

      inline double
      getSamplePeriodElapsed(void)
      {
        return std::min(m_bdd_args.sample_time_duration, m_periodicity_timer.getElapsed());
      }

      virtual bool
      onReadData(void) = 0;

      virtual void
      onVerticalProfile(void);

      virtual bool
      onSynchronize(void);

      virtual void
      onEstimatedState(const DUNE::IMC::EstimatedState& msg);

      virtual void
      onSoundSpeed(double value);

      virtual void
      onOpenLog(const DUNE::FileSystem::Path& path);

      virtual void
      onCloseLog(void);

      FileSystem::Path
      getUnusedLogPath(const FileSystem::Path& path, const std::string& extension);

      virtual void
      onInitializeDevice(void) = 0;

      virtual void
      onStartSampling(void);

      virtual void
      onStopSampling(void);

      virtual void
      setEntityStateSampling(bool state);

      //! Test if the estimated state message should be discarded.
      //! @param[in] msg estimated state message.
      //! @return true to discard message, false otherwise.
      virtual bool
      discardEstimatedState(const IMC::EstimatedState* msg)
      {
        return msg->getSource() != getSystemId();
      }

      //! Test if the logging control message should be discarded.
      //! @param[in] msg logging control message.
      //! @return true to discard message, false otherwise.
      virtual bool
      discardLoggingControl(const IMC::LoggingControl* msg)
      {
        (void)msg;
        
        return false;
      }

      void
      clearFaultCount(void)
      {
        m_fault_count = 0;
      }

      void
      clearTimeoutCount(void)
      {
        m_timeout_count = 0;
      }

      //! Suspend execution for a given amount of time while only consume
      //! messages.
      //!
      //! @param[in] duration amount of time to wait in second.
      void
      wait(double duration);

      void
      setRestartDelay(double seconds)
      {
        m_restart_delay = seconds;
      }

      // Set state machine to restart
      void
      restart(void);

      // Request a restart
      void
      requestRestart();

      //! If set, task uses waitForMessages with specified timeout 
      //! insted of consumeMessages.
      //! @param[in] timeout waitForMessages timeout.
      void
      setWaitForMessages(double timeout)
      {
        if (timeout < 0.0)
          return;
        
        m_wait_msg_timeout = timeout;
      }

      void
      onUpdateParameters(void) override;

      void
      paramConfigurableSampling(ConfigurableSamplingSupportedModes supported_modes = CSM_ALL,
                                Parameter::Scope def_scope = Parameter::SCOPE_GLOBAL,
                                Parameter::Visibility def_visibility = Parameter::VISIBILITY_DEVELOPER,
                                double def_sampling = 0.0f,
                                double def_periodicity = 0.0f);

      void
      paramVerticalProfile(void);

      //! Test if all device's power channel states are equal to state.
      //! @param[in] state desired power state.
      //! @return true if all device's power channel states are equal to state,
      //! false otherwise or if power channels list is empty.
      bool
      isPowered(bool state = true);

      void
      onRequestActivation(void) override;

      void
      onRequestDeactivation(void) override;

      void
      onActivation(void) override;

      void
      onDeactivation(void) override;

    private:
      //! Finite state machine states.
      enum StateMachineStates
      {
        //! Waiting for activation.
        SM_IDLE,
        //! Start activation sequence.
        SM_ACT_BEGIN,
        //! Delay before turning power on.
        SM_ACT_POWER_ON_DELAY,
        //! Turn power on.
        SM_ACT_POWER_ON,
        //! Wait for power to be turned on.
        SM_ACT_POWER_WAIT,
        //! Wait for device to become available.
        SM_ACT_DEV_WAIT,
        //! Synchronize time.
        SM_ACT_DEV_SYNC,
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
        //! Disconnect from device.
        SM_DEACT_DISCONNECT,
        //! Switch power off.
        SM_DEACT_POWER_OFF,
        //! Wait for power to be turned off.
        SM_DEACT_POWER_WAIT,
        //! Deactivation sequence is complete.
        SM_DEACT_DONE,
        //! Wait for restart delay.
        SM_RESTART_WAIT
      };

      //! Basic Device Driver Arguments.
      BDDArguments m_bdd_args;
      //! Watchdog timer.
      DUNE::Time::Counter<double> m_wdog;
      //! Current state machine state.
      StateMachineStates m_sm_state;
      //! State machine state queue.
      std::queue<StateMachineStates> m_sm_state_queue;
      //! Timeout used when forcing waitForMessage.
      double m_wait_msg_timeout;
      //! Power channel names and states.
      std::map<std::string, bool> m_power_channels;
      //! True if log is opened.
      bool m_log_opened;
      //! True if log name request is pending.
      bool m_log_name_pending;
      //! Power-on timer.
      DUNE::Time::Counter<double> m_power_on_timer;
      //! Post power-on delay.
      double m_post_power_on_delay;
      //! Power-off timer.
      DUNE::Time::Counter<double> m_power_off_timer;
      //! Power-on delay.
      double m_power_on_delay;
      //! Power-off delay.
      double m_power_off_delay;
      //! Fault count.
      unsigned m_fault_count;
      //! Timeout count.
      unsigned m_timeout_count;
      //! True to restart activation when idle.
      bool m_restart;
      //! Restart delay in seconds.
      double m_restart_delay;
      //! Restart timer.
      DUNE::Time::Counter<double> m_restart_timer;
      //! Device URI.
      std::string m_uri;
      //! Honours configurable sampling.
      bool m_honours_conf_samp;
      //! Is sampling.
      bool m_is_sampling;
      //! Periodicity timer.
      DUNE::Time::Counter<double> m_periodicity_timer;
      //! Configurable Sampling Supported Modes.
      uint8_t m_conf_samp_modes;
      //! Current Configurable Sampling Mode.
      uint8_t m_conf_samp_mode;
      //! Honours vertical profiles.
      bool m_honours_vp;
      //! Timer for Vertical Profiles.
      DUNE::Time::Counter<double> m_vp_timer;
      //! Entity state dispatch timer.
      DUNE::Time::Counter<uint8_t> m_state_timer;

      void
      onResourceRelease(void) override;

      void
      onResourceInitialization(void) override;

      //! Push a new state to the state queue.
      //! @param[in] state state machine state.
      void
      queueState(StateMachineStates state);

      //! Test if state queue has pending state transitions.
      //! @return true if state queue has pending states, false otherwise.
      bool
      hasQueuedStates(void) const;

      //! Retrieve the current finite state machine state.
      //! @return current finite state machine state.
      StateMachineStates
      getCurrentState(void) const;

      //! Dequeue the current finite state machine state.
      //! @return dequeued finite state machine state.
      StateMachineStates
      dequeueState(void);

      void
      idle(void)
      {
        onIdle();
      }

      void
      initializeDevice(void);

      bool
      connect(void);

      void
      failActivation(const std::string& message);

      void
      disconnect(void);

      //! Request the name of the current log file.
      void
      requestLogName(void);

      bool
      readSample(void);

      bool
      synchronize(void);

      void
      openLog(const DUNE::FileSystem::Path& path);

      void
      closeLog(void);

      //! Power-on device.
      void
      turnPowerOn(void);

      //! Power-off device.
      void
      turnPowerOff(void);

      //! Control device power.
      //! @param[in] op desired power channel operation.
      void
      controlPower(IMC::PowerChannelControl::OperationEnum op);

      void
      startSampling(void);

      void
      stopSampling(void);

      //! Update state machine.
      void
      updateStateMachine(void);

      void
      step(void);

      void
      onMain(void) override;
    };
  }
}

#endif
