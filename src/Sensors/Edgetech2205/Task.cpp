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
#include <cstring>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Parser.hpp"
#include "CommandLink.hpp"
#include "SubsystemData.hpp"
#include "Log.hpp"

namespace Sensors
{
  namespace Edgetech2205
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
      //! Synchronize time.
      SM_ACT_SS_SYNC,
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
      //! IPv4 address.
      Address addr;
      //! TCP command port.
      unsigned port_cmd;
      //! TCP data port.
      unsigned port_dat;
      //! Channels of the high-frequency channel.
      std::string channels_hf;
      //! Channels of the low-frequency channel.
      std::string channels_lf;
      //! Range of the high-frequency subsystem.
      unsigned range_hf;
      //! Range of the low-frequency subsystem.
      unsigned range_lf;
      //! Name of sidescan's power channel.
      std::string power_channel;
      //! Pulse auto selection mode.
      unsigned autosel_mode;
      //! Trigger divisor.
      unsigned trg_div;
      //! Number of initial samples to ignore.
      unsigned ignored_sample_count;
      //! Time delta estimation periodicity.
      double time_delta_periodicity;
      //! Maximum allowable latency for time synchronization.
      unsigned time_delta_max_latency;
      //! Initial time delta estimation timeout.
      double time_delta_init_tout;
      //! Number of samples for initial time delta estimatiom.
      unsigned time_delta_init_samples;
    };

    struct Task: public Tasks::Task
    {
      //! Buffer size.
      static const unsigned c_buffer_size = 256 * 1024;
      //! Data socket.
      TCPSocket* m_sock_dat;
      //! Read buffer.
      std::vector<uint8_t> m_bfr;
      //! Parser.
      Parser m_parser;
      //! Command link.
      CommandLink* m_cmd;
      //! Log file.
      Log* m_log;
      //! Watchdog timer.
      Counter<double> m_wdog;
      //! Timer for time delta estimation.
      Counter<double> m_time_delta_timer;
      //! Subsystem specific data.
      SubsystemData m_subsys_data[c_subsys_count];
      //! Current state machine state.
      StateMachineStates m_sm_state;
      //! True if device is powered on.
      bool m_powered;
      //! Current packet being parsed.
      Packet* m_packet;
      //! Configuration parameters.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sock_dat(NULL),
        m_cmd(NULL),
        m_log(NULL),
        m_sm_state(SM_IDLE),
        m_powered(false),
        m_packet(NULL)
      {
        // Define configuration parameters.
        setParamSectionEditor("Edgetech2205");

        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("IPv4 Address", m_args.addr)
        .defaultValue("192.168.0.5")
        .description("IP address of the sonar");

        param("TCP Port - Command", m_args.port_cmd)
        .defaultValue("1700")
        .minimumValue("0")
        .maximumValue("65535")
        .description("TCP command port");

        param("TCP Port - Data", m_args.port_dat)
        .defaultValue("1701")
        .minimumValue("0")
        .maximumValue("65535")
        .description("TCP data port");

        param(DTR_RT("High-Frequency Channels"), m_args.channels_hf)
        .values(DTR_RT("None, Port, Starboard, Both"))
        .defaultValue("Both")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .description(DTR("High-frequency subsystem channels"));

        param(DTR_RT("High-Frequency Range"), m_args.range_hf)
        .defaultValue("50")
        .minimumValue("5")
        .maximumValue("75")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Meter)
        .description(DTR("Enable high frequency subsystem"));

        param(DTR_RT("Low-Frequency Channels"), m_args.channels_lf)
        .values(DTR_RT("None, Port, Starboard, Both"))
        .defaultValue("None")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .description(DTR("Low-frequency subsystem channels"));

        param(DTR_RT("Low-Frequency Range"), m_args.range_lf)
        .defaultValue("50")
        .minimumValue("5")
        .maximumValue("150")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Meter)
        .description(DTR("Enable high frequency subsystem"));

        param(DTR_RT("Range Multiplier"), m_args.trg_div)
        .defaultValue("1")
        .minimumValue("1")
        .maximumValue("150")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .description(DTR("Range multiplier"));

        param("Pulse Autoselection Mode", m_args.autosel_mode)
        .defaultValue("2")
        .minimumValue("0")
        .maximumValue("4")
        .description("Auto pulse selection mode");

        param("Power Channel - Sidescan", m_args.power_channel)
        .defaultValue("Private (Sidescan)")
        .description("Name of sidescan's power channel");

        param("Number of Discarded Initial Samples", m_args.ignored_sample_count)
        .defaultValue("15")
        .description("Number of initial samples to ignore");

        param("Time Delta - Estimation Periodicity", m_args.time_delta_periodicity)
        .units(Units::Second)
        .defaultValue("5")
        .description("Periodicity with which the time difference between"
                     " the sidescan CPU and the local CPU is performed");

        param("Time Delta - Maximum Allowable Latency", m_args.time_delta_max_latency)
        .units(Units::Millisecond)
        .defaultValue("2")
        .description("Maximum allowable latency for time synchronization");

        param("Time Delta - Initial Estimate Timeout", m_args.time_delta_init_tout)
        .units(Units::Second)
        .defaultValue("10")
        .description("Timeout for initial time delta estimation");

        param("Time Delta - Initial Estimate Samples", m_args.time_delta_init_samples)
        .defaultValue("10")
        .description("Number of valid samples for initial time delta estimation");

        m_bfr.resize(c_buffer_size);

        bind<IMC::EstimatedState>(this);
        bind<IMC::LoggingControl>(this);
        bind<IMC::PowerChannelState>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (m_args.power_channel.empty())
          m_powered = true;

        if (!isActive())
          return;

        if (paramChanged(m_args.addr))
          throw RestartNeeded(DTR("restarting to change IPv4 address"), 1);

        if (paramChanged(m_args.port_cmd))
          throw RestartNeeded(DTR("restarting to change TCP command port"), 1);

        if (paramChanged(m_args.port_dat))
          throw RestartNeeded(DTR("restarting to change TCP data port"), 1);

        bool channel_hf_changed = paramChanged(m_args.channels_hf);
        if (channel_hf_changed)
          setDataActive(SUBSYS_SSH, m_args.channels_hf);

        bool channel_lf_changed = paramChanged(m_args.channels_lf);
        if (channel_lf_changed)
          setDataActive(SUBSYS_SSL, m_args.channels_lf);

        if (paramChanged(m_args.range_hf))
          m_cmd->setPingRange(SUBSYS_SSH, m_args.range_hf);

        if (paramChanged(m_args.range_lf))
          m_cmd->setPingRange(SUBSYS_SSL, m_args.range_lf);

        if (paramChanged(m_args.autosel_mode))
          setPingAutoSelectMode();

        if (channel_hf_changed || channel_lf_changed)
          setTriggerCoupling();

        if (channel_hf_changed)
          setPing(SUBSYS_SSH, m_args.channels_hf);

        if (channel_lf_changed)
          setPing(SUBSYS_SSL, m_args.channels_lf);
      }

      void
      onResourceRelease(void)
      {
        closeLog();
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onRequestActivation(void)
      {
        debug("starting activation sequence");
        m_sm_state = SM_ACT_BEGIN;
        updateStateMachine();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
      }

      bool
      connect(void)
      {
        Counter<double> timer(1.0);
        try
        {
          m_cmd = new CommandLink(this, m_args.addr, m_args.port_cmd);
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

      void
      failActivation(const std::string& message)
      {
        activationFailed(message);
        controlPower(IMC::PowerChannelControl::PCC_OP_TURN_OFF);
      }

      void
      onRequestDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_DEACTIVATING);
        m_sm_state = SM_DEACT_BEGIN;
        updateStateMachine();
      }

      void
      disconnect(void)
      {
        setDataActive(SUBSYS_SSL, "None");
        setPing(SUBSYS_SSL, "None");
        setDataActive(SUBSYS_SSH, "None");
        setPing(SUBSYS_SSH, "None");
        m_cmd->shutdown();
        Memory::clear(m_cmd);
        Memory::clear(m_sock_dat);
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

        for (size_t i = 0; i < c_subsys_count; ++i)
          m_subsys_data[i].clear();

        debug("creating data socket");
        m_sock_dat = new TCPSocket;
        m_sock_dat->setNoDelay(true);
        m_sock_dat->setReceiveTimeout(5);
        m_sock_dat->setSendTimeout(5);
        m_sock_dat->connect(m_args.addr, m_args.port_dat);

        m_cmd->setPingTrigger(SUBSYS_SSH, TRIG_MODE_INTERNAL);
        m_cmd->setPingTrigger(SUBSYS_SSL, TRIG_MODE_INTERNAL);

        initConfig();

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

        for (size_t i = 0; i < c_subsys_count; ++i)
        {
          if (m_subsys_data[i].active)
            m_subsys_data[i].estates.push_back(*msg);
        }
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if ((msg->getSource() != getSystemId())
            || (msg->getDestination() != getSystemId())
            || (msg->getDestinationEntity() != getEntityId()))
          return;

        switch (msg->op)
        {
          case IMC::LoggingControl::COP_STARTED:
          case IMC::LoggingControl::COP_CURRENT_NAME:
            openLog(m_ctx.dir_log / msg->name / "Data.jsf");
            break;

          case IMC::LoggingControl::COP_STOPPED:
            closeLog();
            break;
        }
      }

      void
      setPingAutoSelectMode(void)
      {
        m_cmd->setPingAutoselectMode(SUBSYS_SSH, m_args.autosel_mode);
        m_cmd->setPingAutoselectMode(SUBSYS_SSL, m_args.autosel_mode);
      }

      void
      setTriggerCoupling(void)
      {
        if ((m_args.channels_lf != "None") && (m_args.channels_hf != "None"))
        {
          m_cmd->setPingTrigger(SUBSYS_SSL, TRIG_MODE_COUPLED);
          m_cmd->setPingCoupling(SUBSYS_SSL, SUBSYS_SSH, m_args.trg_div, 0);
        }
        else
        {
          m_cmd->setPingTrigger(SUBSYS_SSL, TRIG_MODE_INTERNAL);
        }
      }

      //! Initialize sidescan configuration.
      void
      initConfig(void)
      {
        setDataActive(SUBSYS_SSH, m_args.channels_hf);
        setDataActive(SUBSYS_SSL, m_args.channels_lf);

        m_cmd->setPingRange(SUBSYS_SSH, m_args.range_hf);
        m_cmd->setPingRange(SUBSYS_SSL, m_args.range_lf);

        setPingAutoSelectMode();
        setTriggerCoupling();

        setPing(SUBSYS_SSH, m_args.channels_hf);
        setPing(SUBSYS_SSL, m_args.channels_lf);
      }

      void
      setDataActive(SubsystemId subsys, const std::string& channels)
      {
        if (channels == "Port")
        {
          m_cmd->setDataActive(subsys, CHAN_PORT, 1);
          m_cmd->setDataActive(subsys, CHAN_STARBOARD, 0);
        }
        else if (channels == "Starboard")
        {
          m_cmd->setDataActive(subsys, CHAN_PORT, 0);
          m_cmd->setDataActive(subsys, CHAN_STARBOARD, 1);
        }
        else if (channels == "Both")
        {
          m_cmd->setDataActive(subsys, CHAN_PORT, 1);
          m_cmd->setDataActive(subsys, CHAN_STARBOARD, 1);
        }
        else
        {
          m_cmd->setDataActive(subsys, CHAN_PORT, 0);
          m_cmd->setDataActive(subsys, CHAN_STARBOARD, 0);
        }
      }

      void
      setPing(SubsystemId subsys, const std::string& channels)
      {
        int idx = getSubsysIndex(subsys);

        if (channels == "None")
        {
          m_cmd->setPing(subsys, 0);
          m_subsys_data[idx].active = false;
        }
        else
        {
          m_cmd->setPing(subsys, 1);
          m_subsys_data[idx].active = true;
        }
      }

      int
      getSubsysIndex(int subsys)
      {
        switch (subsys)
        {
          case SUBSYS_SSL:
            return 0;

          case SUBSYS_SSH:
            return 1;

          default:
            return -1;
        }
      }

      void
      dispatchDebugData(const std::string& text)
      {
        if (getDebugLevel() < DEBUG_LEVEL_DEBUG)
          return;

        IMC::DevDataText msg;
        msg.value = text;
        dispatch(msg);
      }

      void
      handleSonarData(void)
      {
        int subsys_idx = getSubsysIndex(m_packet->getSubsystemNumber());
        if (subsys_idx < 0)
          return;

        SubsystemData* data = m_subsys_data + subsys_idx;

        uint32_t ping_number = 0;
        m_packet->get(ping_number, SDATA_IDX_PING_NUMBER);
        if (ping_number != data->ping_number)
        {
          data->ping_number = ping_number;
          ++data->ping_count;
          updateSubsystemData(data);
        }

        writeSubsystemData(data);
        if (data->ping_count > m_args.ignored_sample_count)
        {
          logPacket();
        }
        else
        {
          dispatchDebugData(String::str("discarded initial sample %u:%u",
                                        m_packet->getSubsystemNumber(), data->ping_count));
        }
      }

      void
      writeSubsystemData(SubsystemData* data)
      {
        m_packet->set(data->time_epoch, SDATA_IDX_TIME);
        m_packet->set(data->time_msec_today, SDATA_IDX_MILLISECOND_TODAY);
        m_packet->set<int16_t>(3, SDATA_IDX_CPU_TIME_BASIS);
        m_packet->set<int16_t>(data->time_bdt.year, SDATA_IDX_CPU_YEAR);
        m_packet->set<int16_t>(data->time_bdt.day_year, SDATA_IDX_CPU_DAY);
        m_packet->set<int16_t>(data->time_bdt.hour, SDATA_IDX_CPU_HOUR);
        m_packet->set<int16_t>(data->time_bdt.hour, SDATA_IDX_NMEA_HOUR);
        m_packet->set<int16_t>(data->time_bdt.minutes, SDATA_IDX_CPU_MINUTES);
        m_packet->set<int16_t>(data->time_bdt.minutes, SDATA_IDX_NMEA_MINUTES);
        m_packet->set<int16_t>(data->time_bdt.seconds, SDATA_IDX_CPU_SECONDS);
        m_packet->set<int16_t>(data->time_bdt.seconds, SDATA_IDX_NMEA_SECONDS);
        m_packet->set<uint16_t>(2, SDATA_IDX_COORDINATE_UNITS);
        m_packet->set(data->longitude, SDATA_IDX_LONGITUDE);
        m_packet->set(data->latitude, SDATA_IDX_LATITUDE);
        m_packet->set(data->course, SDATA_IDX_COURSE);
        m_packet->set(data->speed, SDATA_IDX_SPEED);
        m_packet->set(data->heading, SDATA_IDX_HEADING);
        m_packet->set(data->roll, SDATA_IDX_ROLL);
        m_packet->set(data->pitch, SDATA_IDX_PITCH);
        m_packet->set(data->altitude, SDATA_IDX_ALTITUDE);
        m_packet->set(data->depth, SDATA_IDX_DEPTH);
        m_packet->set(data->validity, SDATA_IDX_VALIDITY);

        // User annotation string to save position with increased
        // resolution.
        std::memcpy(m_packet->getMessageData()
                    + SDATA_IDX_ANNOTATION_STRING,
                    &data->latitude_rad,
                    sizeof(data->latitude_rad));

        std::memcpy(m_packet->getMessageData()
                    + SDATA_IDX_ANNOTATION_STRING
                    + sizeof(data->latitude_rad),
                    &data->longitude_rad,
                    sizeof(data->longitude_rad));
      }

      void
      updateSubsystemData(SubsystemData* data)
      {
        data->validity = 0;

        // Adjust sidescan time.
        uint32_t ss_sec = 0;
        m_packet->get(ss_sec, SDATA_IDX_TIME);

        uint32_t ss_msec = 0;
        m_packet->get(ss_msec, SDATA_IDX_MILLISECOND_TODAY);

        int64_t ss_time = ss_sec;
        ss_time *= 1000;
        ss_time += ss_msec % 1000;
        ss_time += m_cmd->getEstimatedTimeDelta();

        // Compute broken down time.
        time_t time_sec = ss_time / 1000;
        data->time_epoch = time_sec;
        data->time_bdt.convert(time_sec);

        // Compute milliseconds today.
        uint32_t old_msec_today = data->time_msec_today;
        data->time_msec_today = ((data->time_bdt.hour * 3600)
                                 + (data->time_bdt.minutes * 60)
                                 + data->time_bdt.seconds) * 1000;
        data->time_msec_today += ss_time % 1000;

        // Find closest estimated state.
        int64_t estate_delta = 0;
        const IMC::EstimatedState* estate = data->estates.find(ss_time, estate_delta);

        // Trace.
        int msec_delta = 0;
        if (data->time_msec_today > old_msec_today)
          msec_delta = data->time_msec_today - old_msec_today;
        else
          msec_delta = -(int)(old_msec_today - data->time_msec_today);

        int64_t msec_cpu_old = data->msec_cpu;
        data->msec_cpu = m_packet->getTimeStamp();

        dispatchDebugData(String::str("%u, %u, %u, %lld, %lld, %d, %u, %llu",
                                      data->ping_count,
                                      data->ping_number,
                                      m_packet->getSubsystemNumber(),
                                      estate_delta,
                                      data->msec_cpu - msec_cpu_old,
                                      msec_delta,
                                      (estate == NULL) ? 0 : 1,
                                      m_cmd->getEstimatedTimeDelta()));
        if (estate == NULL)
          return;

        // Position.
        Coordinates::toWGS84(*estate, data->latitude_rad, data->longitude_rad);
        data->latitude = static_cast<int32_t>(data->latitude_rad * 34377467.707849);
        data->longitude = static_cast<int32_t>(data->longitude_rad * 34377467.707849);
        data->validity |= (1 << 0);

        // Course.
        data->course = Angles::degrees(std::atan2(estate->vy, estate->vx));
        data->validity |= (1 << 1);

        // Speed.
        data->speed = Math::norm(estate->vx, estate->vy) * DUNE::Units::c_ms_to_knot * 10;
        data->validity |= (1 << 2);

        // Heading.
        double heading = Angles::degrees(estate->psi);
        if (heading < 0)
          heading = 360.0 + heading;
        data->heading = heading * 100;
        data->validity |= (1 << 3);

        // Roll.
        data->roll = (Angles::degrees(estate->phi) * 32768) / 180;
        data->validity |= (1 << 4);

        // Pitch.
        data->pitch = (Angles::degrees(estate->theta) * 32768) / 180;
        data->validity |= (1 << 5);

        // Altitude.
        data->altitude = estate->alt * 1000;
        data->validity |= (1 << 6);

        // Depth.
        data->depth = estate->depth * 1000;
        data->validity |= (1 << 9);
      }

      void
      handlePacket(void)
      {
        if (m_packet->getMessageType() == MSG_ID_SONAR_DATA)
          handleSonarData();
      }

      bool
      readData(void)
      {
        if (!Poll::poll(*m_sock_dat, 1.0))
          return false;

        consumeMessages();

        if (m_sock_dat == NULL)
          return false;

        size_t rv = m_sock_dat->read(&m_bfr[0], m_bfr.size());
        for (size_t i = 0; i < rv; ++i)
        {
          if (m_parser.parse(m_bfr[i], m_packet))
          {
            handlePacket();
          }
        }

        return true;
      }

      void
      estimateTimeDelta(Counter<double>& reference_timer)
      {
        double remaining = reference_timer.getRemaining();
        if (remaining > m_args.time_delta_init_tout)
          remaining = m_args.time_delta_init_tout;

        Counter<double> timer(remaining);
        unsigned delta_ok = 0;

        while (!timer.overflow())
        {
          double wait = timer.getRemaining();
          waitForMessages((wait < 1.0) ? wait : 1.0);

          int64_t diff = m_cmd->estimateTimeDelta(m_args.time_delta_max_latency);
          if (diff < 2)
            ++delta_ok;
          else
            delta_ok = 0;

          if (delta_ok >= m_args.time_delta_init_samples)
          {
            debug("time is synchronized");
            return;
          }
        }

        debug("time is not synchronized");
      }

      void
      openLog(const Path& path)
      {
        if (!isActive() && !isActivating())
          return;

        if (m_log != NULL)
        {
          if (m_log->getPath() == path)
            return;
        }

        closeLog();

        m_log = new Log(this, path);
        m_log->start();
        m_packet = m_log->get();
        debug("opened: %s", path.c_str());
      }

      void
      logPacket(void)
      {
        if (m_log != NULL)
        {
          m_log->put(m_packet);
          m_packet = m_log->get();
        }
      }

      void
      closeLog(void)
      {
        if (m_log == NULL)
          return;

        m_log->stopAndJoin();
        debug("closed: %s", m_log->getPath().c_str());

        Memory::clear(m_packet);
        Memory::clear(m_log);
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
        switch (m_sm_state)
        {
          // Wait for activation.
          case SM_IDLE:
            break;

            // Begin activation sequence.
          case SM_ACT_BEGIN:
            m_wdog.setTop(getActivationTime());
            m_sm_state = SM_ACT_POWER_ON;

            // Turn power on.
          case SM_ACT_POWER_ON:
            turnPowerOn();
            m_sm_state = SM_ACT_POWER_WAIT;

            // Wait for power to be on.
          case SM_ACT_POWER_WAIT:
            if (m_wdog.overflow())
            {
              failActivation(DTR("failed to turn power on"));
              m_sm_state = SM_IDLE;
              break;
            }
            else if (!isPowered())
            {
              break;
            }
            m_sm_state = SM_ACT_SS_WAIT;

            // Connect to sidescan.
          case SM_ACT_SS_WAIT:
            if (m_wdog.overflow())
            {
              failActivation(DTR("failed to connect to device"));
              m_sm_state = SM_IDLE;
              break;
            }
            else if (!connect())
            {
              break;
            }

            m_sm_state = SM_ACT_SS_SYNC;

            // Synchronize time.
          case SM_ACT_SS_SYNC:
            estimateTimeDelta(m_wdog);
            m_sm_state = SM_ACT_LOG_REQUEST;

            // Request log name.
          case SM_ACT_LOG_REQUEST:
            requestLogName();
            m_sm_state = SM_ACT_LOG_WAIT;

            // Wait for log name.
          case SM_ACT_LOG_WAIT:
            if (m_log == NULL)
              break;
            m_sm_state = SM_ACT_DONE;

            // Activation procedure is complete.
          case SM_ACT_DONE:
            activate();
            m_time_delta_timer.setTop(5.0);
            m_sm_state = SM_ACT_SAMPLE;

            // Read samples and continuously estimate time difference.
          case SM_ACT_SAMPLE:
            if (m_time_delta_timer.overflow())
            {
              m_time_delta_timer.reset();
              m_cmd->estimateTimeDelta(m_args.time_delta_max_latency);
            }

            readData();
            break;

            // Start deactivation procedure.
          case SM_DEACT_BEGIN:
            closeLog();
            m_wdog.setTop(getDeactivationTime());
            m_sm_state = SM_DEACT_DISCONNECT;

            // Disconnect and shutdown sidescan.
          case SM_DEACT_DISCONNECT:
            disconnect();
            m_sm_state = SM_DEACT_POWER_OFF;

            // Turn power off.
          case SM_DEACT_POWER_OFF:
            if (!m_wdog.overflow())
              break;
            turnPowerOff();
            m_sm_state = SM_DEACT_POWER_WAIT;

            // Wait for power to be turned off.
          case SM_DEACT_POWER_WAIT:
            if (isPowered())
              break;
            m_sm_state = SM_DEACT_DONE;

            // Deactivation is complete.
          case SM_DEACT_DONE:
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
          if (isActive())
            consumeMessages();
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
