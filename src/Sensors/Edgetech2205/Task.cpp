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

namespace Sensors
{
  namespace Edgetech2205
  {
    using DUNE_NAMESPACES;

    //! Subsystem data written to each ping.
    struct SubsystemData
    {
      //! Ping number.
      uint32_t ping_number;
      //! Seconds since Unix Epoch.
      uint32_t time_epoch;
      //! Milliseconds today.
      uint32_t time_msec_today;
      //! Brokendown time.
      Time::BrokenDown time_bdt;
      //! Navigation data validity.
      uint16_t validity;
      //! Latitude.
      int32_t latitude;
      //! Latitude in radian.
      double latitude_rad;
      //! Longitude.
      int32_t longitude;
      //! Longitude in radian;
      double longitude_rad;
      //! Course.
      int16_t course;
      //! Speed.
      int16_t speed;
      //! Heading.
      uint16_t heading;
      //! Roll.
      int16_t roll;
      //! Pitch.
      int16_t pitch;
      //! Altitude.
      int32_t altitude;
      //! Depth.
      int32_t depth;
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
      std::string pwr_ss;
      //! Pulse auto selection mode.
      unsigned autosel_mode;
      //! Trigger divisor.
      unsigned trg_div;
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
      std::ofstream m_log_file;
      //! Log filename
      Path m_log_path;
      //! Time difference.
      int64_t m_time_diff;
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! Power channel state.
      IMC::PowerChannelControl m_pwr_ss;
      //! Configuration parameters.
      Arguments m_args;
      //! True if first shot.
      bool m_first_shot;
      //! Activation/deactivation timer.
      Counter<double> m_countdown;
      //! Power channel state.
      IMC::PowerChannelState m_pwr_state;
      //! Subsystem specific data.
      SubsystemData m_subsys_data[c_channel_count];

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sock_dat(NULL),
        m_cmd(NULL),
        m_time_diff(0),
        m_first_shot(true)
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

        param("Power Channel - Sidescan", m_args.pwr_ss)
        .defaultValue("Private (Sidescan)")
        .description("Name of sidescan's power channel");

        m_bfr.resize(c_buffer_size);

        m_pwr_ss.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;

        bind<IMC::EstimatedState>(this);
        bind<IMC::LoggingControl>(this);
        bind<IMC::PowerChannelState>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_pwr_ss.name = m_args.pwr_ss;

        if (isActive())
        {
          setConfig();

          if (paramChanged(m_args.addr))
            throw RestartNeeded(DTR("restarting to change IPv4 address"), 1);

          if (paramChanged(m_args.port_cmd))
            throw RestartNeeded(DTR("restarting to change TCP command port"), 1);

          if (paramChanged(m_args.port_dat))
            throw RestartNeeded(DTR("restarting to change TCP data port"), 1);
        }
      }

      void
      onResourceRelease(void)
      {
        requestDeactivation();
        closeLog();
      }

      void
      onResourceInitialization(void)
      {
        requestDeactivation();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onRequestActivation(void)
      {
        m_pwr_ss.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        dispatch(m_pwr_ss);
        m_countdown.setTop(getActivationTime());
      }

      void
      checkActivationProgress(void)
      {
        if (m_countdown.overflow())
        {
          activationFailed(DTR("failed to contact device"));
          m_pwr_ss.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
          dispatch(m_pwr_ss);
          return;
        }

        Counter<double> timer(1.0);
        try
        {
          m_cmd = new CommandLink(m_args.addr, m_args.port_cmd);
          debug("activation took %0.2f s", m_countdown.getElapsed());
          activate();
        }
        catch (...)
        {
          double delay = timer.getRemaining();
          if (delay > 0.0)
            Delay::wait(delay);
        }
      }

      void
      onActivation(void)
      {
        m_sock_dat = new TCPSocket;
        m_sock_dat->setNoDelay(true);
        m_sock_dat->setReceiveTimeout(5);
        m_sock_dat->setSendTimeout(5);
        m_sock_dat->connect(m_args.addr, m_args.port_dat);

        m_cmd->setPingTrigger(SUBSYS_SSH, TRIG_MODE_INTERNAL);
        m_cmd->setPingTrigger(SUBSYS_SSL, TRIG_MODE_INTERNAL);

        setConfig();

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        IMC::LoggingControl lc;
        lc.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
        dispatch(lc);
      }

      void
      onRequestDeactivation(void)
      {
        closeLog();

        setDataActive(SUBSYS_SSL, "None");
        setPing(SUBSYS_SSL, "None");
        setDataActive(SUBSYS_SSH, "None");
        setPing(SUBSYS_SSH, "None");
        m_cmd->shutdown();
        Memory::clear(m_cmd);
        Memory::clear(m_sock_dat);

        debug("deactivation time is %u s", getDeactivationTime());
        m_countdown.setTop(getDeactivationTime());
        m_first_shot = true;
      }

      void
      checkDeactivationProgress(void)
      {
        if (m_countdown.overflow())
        {
          if (m_pwr_state.state == IMC::PowerChannelState::PCS_ON)
          {
            if (m_pwr_ss.op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
            {
              debug("power channels is on, turning off");
              m_pwr_ss.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
              dispatch(m_pwr_ss);
            }
          }
          else if (m_pwr_state.state == IMC::PowerChannelState::PCS_OFF)
          {
            debug("power channels is off, deactivating");
            deactivate();
          }
        }
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->name != m_args.pwr_ss)
          return;

        m_pwr_state = *msg;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
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
            openLog(m_ctx.dir_log / msg->name / "Data.jsf");
            break;

          case IMC::LoggingControl::COP_STOPPED:
            closeLog();
            break;
        }
      }

      void
      setConfig(void)
      {
        if (m_cmd == NULL)
          return;

        setDataActive(SUBSYS_SSH, m_args.channels_hf);
        setDataActive(SUBSYS_SSL, m_args.channels_lf);

        m_cmd->setPingRange(SUBSYS_SSH, m_args.range_hf);
        m_cmd->setPingRange(SUBSYS_SSL, m_args.range_lf);

        m_cmd->setPingAutoselectMode(SUBSYS_SSH, m_args.autosel_mode);
        m_cmd->setPingAutoselectMode(SUBSYS_SSL, m_args.autosel_mode);

        if ((m_args.channels_lf != "None") && (m_args.channels_hf != "None"))
        {
          m_cmd->setPingTrigger(SUBSYS_SSL, TRIG_MODE_COUPLED);
          m_cmd->setPingCoupling(SUBSYS_SSL, SUBSYS_SSH, m_args.trg_div, 0);
        }
        else
        {
          m_cmd->setPingTrigger(SUBSYS_SSL, TRIG_MODE_INTERNAL);
        }

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
        if (channels == "None")
          m_cmd->setPing(subsys, 0);
        else
          m_cmd->setPing(subsys, 1);
      }

      void
      handleSonarData(Packet* pkt)
      {
        if (pkt->getSubsystemNumber() < SUBSYS_SSL || pkt->getSubsystemNumber() < SUBSYS_SSH)
          return;

        SubsystemData* data = m_subsys_data + (pkt->getSubsystemNumber() - SUBSYS_SSL);

        uint32_t ping_number = 0;
        pkt->get(ping_number, SDATA_IDX_PING_NUMBER);
        if (ping_number != data->ping_number)
        {
          data->ping_number = ping_number;
          updateSubsystemData(data, pkt);
        }

        writeSubsystemData(data, pkt);
      }

      void
      writeSubsystemData(SubsystemData* data, Packet* pkt)
      {
        pkt->set(data->time_epoch, SDATA_IDX_TIME);
        pkt->set(data->time_msec_today, SDATA_IDX_MILLISECOND_TODAY);
        pkt->set<int16_t>(3, SDATA_IDX_CPU_TIME_BASIS);
        pkt->set<int16_t>(data->time_bdt.year, SDATA_IDX_CPU_YEAR);
        pkt->set<int16_t>(data->time_bdt.day_year, SDATA_IDX_CPU_DAY);
        pkt->set<int16_t>(data->time_bdt.hour, SDATA_IDX_CPU_HOUR);
        pkt->set<int16_t>(data->time_bdt.hour, SDATA_IDX_NMEA_HOUR);
        pkt->set<int16_t>(data->time_bdt.minutes, SDATA_IDX_CPU_MINUTES);
        pkt->set<int16_t>(data->time_bdt.minutes, SDATA_IDX_NMEA_MINUTES);
        pkt->set<int16_t>(data->time_bdt.seconds, SDATA_IDX_CPU_SECONDS);
        pkt->set<int16_t>(data->time_bdt.seconds, SDATA_IDX_NMEA_SECONDS);
        pkt->set<uint16_t>(2, SDATA_IDX_COORDINATE_UNITS);
        pkt->set(data->longitude, SDATA_IDX_LONGITUDE);
        pkt->set(data->latitude, SDATA_IDX_LATITUDE);
        pkt->set(data->course, SDATA_IDX_COURSE);
        pkt->set(data->speed, SDATA_IDX_SPEED);
        pkt->set(data->heading, SDATA_IDX_HEADING);
        pkt->set(data->roll, SDATA_IDX_ROLL);
        pkt->set(data->pitch, SDATA_IDX_PITCH);
        pkt->set(data->altitude, SDATA_IDX_ALTITUDE);
        pkt->set(data->depth, SDATA_IDX_DEPTH);
        pkt->set(data->validity, SDATA_IDX_VALIDITY);

        // User annotation string to save position with increased
        // resolution.
        std::memcpy(pkt->getMessageData()
                    + SDATA_IDX_ANNOTATION_STRING,
                    &data->latitude_rad,
                    sizeof(data->latitude_rad));

        std::memcpy(pkt->getMessageData()
                    + SDATA_IDX_ANNOTATION_STRING
                    + sizeof(data->latitude_rad),
                    &data->longitude_rad,
                    sizeof(data->longitude_rad));
      }

      void
      updateSubsystemData(SubsystemData* data, Packet* pkt)
      {
        data->validity = 0;

        // Seconds since Unix Epoch.
        time_t pkt_time_int = pkt->getTimeStamp();
        data->time_epoch = pkt_time_int;

        // Broken down time.
        data->time_bdt.convert(pkt_time_int);

        // Milliseconds today.
        data->time_msec_today = ((data->time_bdt.hour * 3600)
                                 + (data->time_bdt.minutes * 60)
                                 + data->time_bdt.seconds) * 1000;
        data->time_msec_today += (pkt->getTimeStamp() - pkt_time_int) * 1000;

        // Position.
        Coordinates::toWGS84(m_estate, data->latitude_rad, data->longitude_rad);
        data->latitude = static_cast<int32_t>(data->latitude_rad * 34377467.707849);
        data->longitude = static_cast<int32_t>(data->longitude_rad * 34377467.707849);
        data->validity |= (1 << 0);

        // Course.
        data->course = Angles::degrees(std::atan2(m_estate.vy, m_estate.vx));
        data->validity |= (1 << 1);

        // Speed.
        data->speed = Math::norm(m_estate.vx, m_estate.vy) * DUNE::Units::c_ms_to_knot * 10;
        data->validity |= (1 << 2);

        // Heading.
        double heading = Angles::degrees(m_estate.psi);
        if (heading < 0)
          heading = 360.0 + heading;
        data->heading = heading * 100;
        data->validity |= (1 << 3);

        // Roll.
        data->roll = (Angles::degrees(m_estate.phi) * 32768) / 180;
        data->validity |= (1 << 4);

        // Pitch.
        data->pitch = (Angles::degrees(m_estate.theta) * 32768) / 180;
        data->validity |= (1 << 5);

        // Altitude.
        data->altitude = m_estate.alt * 1000;
        data->validity |= (1 << 6);

        // Depth.
        data->depth = m_estate.depth * 1000;
        data->validity |= (1 << 9);
      }

      void
      handle(Packet* pkt)
      {
        if (pkt->getMessageType() == MSG_ID_SONAR_DATA)
          handleSonarData(pkt);

        if (!m_first_shot)
          writeToLog(pkt);
        else
          m_first_shot = false;
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
          if (m_parser.parse(m_bfr[i]))
            handle(m_parser.getPacket());
        }

        return true;
      }

      void
      openLog(const Path& path)
      {
        if (path == m_log_path)
          return;

        closeLog();

        m_log_path = path;
        m_log_file.open(m_log_path.c_str(), std::ofstream::app | std::ios::binary);
        debug("opening %s", m_log_path.c_str());
      }

      void
      writeToLog(const Packet* pkt)
      {
        if (m_log_file.is_open())
          m_log_file.write((const char*)pkt->getData(), pkt->getSize());
      }

      void
      closeLog(void)
      {
        if (m_log_file.is_open())
        {
          m_log_file.close();
          int64_t size = m_log_path.size();
          if (size == 0)
          {
            debug("removing empty log '%s'", m_log_path.c_str());
            m_log_path.remove();
          }
          m_log_path = Path();
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (isActive() && (m_sock_dat != NULL))
          {
            readData();
          }
          else
          {
            waitForMessages(1.0);
            if (isActivating())
              checkActivationProgress();
            else if (isDeactivating())
              checkDeactivationProgress();
          }
        }
      }
    };
  }
}

DUNE_TASK
