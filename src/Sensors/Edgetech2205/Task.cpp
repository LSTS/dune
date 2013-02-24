//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
    };

    struct Task: public Tasks::Task
    {
      //! Data socket.
      TCPSocket* m_sock_dat;
      //! I/O multiplexing of data socket.
      IOMultiplexing m_iom_dat;
      //! Read buffer.
      std::vector<uint8_t> m_bfr;
      //! Parser.
      Parser m_parser;
      //! Command link.
      CommandLink* m_cmd;
      //! Log file name.
      Path m_log_file_name;
      //! Log file.
      std::ofstream m_log_file;
      //! Time difference.
      int64_t m_time_diff;
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! Configuration parameters.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sock_dat(NULL),
        m_cmd(NULL),
        m_time_diff(0)
      {
        // Define configuration parameters.
        param("IPv4 Address", m_args.addr)
        .defaultValue("192.168.0.5")
        .description("IP address of the sonar");

        param("TCP Port - Command", m_args.port_cmd)
        .defaultValue("1700")
        .description("TCP command port");

        param("TCP Port - Data", m_args.port_dat)
        .defaultValue("1701")
        .description("TCP data port");

        param(DTR_RT("High-Frequency Channels"), m_args.channels_hf)
        .values(DTR_RT("None, Port, Starboard, Both"))
        .defaultValue("Both")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .description("High-frequency subsystem channels");

        param(DTR_RT("High-Frequency Range"), m_args.range_hf)
        .defaultValue("50")
        .minimumValue("5")
        .maximumValue("75")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Meter)
        .description("Enable high frequency subsystem");

        param(DTR_RT("Low-Frequency Channels"), m_args.channels_lf)
        .values(DTR_RT("None, Port, Starboard, Both"))
        .defaultValue("None")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .description("Low-frequency subsystem channels");

        param(DTR_RT("Low-Frequency Range"), m_args.range_lf)
        .defaultValue("50")
        .minimumValue("5")
        .maximumValue("150")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Meter)
        .description("Enable high frequency subsystem");

        m_bfr.resize(256 * 1024);

        bind<IMC::EstimatedState>(this);
        bind<IMC::LoggingControl>(this);
        bind<IMC::EntityControl>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.range_lf))
        {
          if (m_cmd)
            m_cmd->setPingRange(SUBSYS_SSL, m_args.range_lf);
        }

        if (paramChanged(m_args.range_hf))
        {
          if (m_cmd)
            m_cmd->setPingRange(SUBSYS_SSH, m_args.range_hf);
        }

        if (paramChanged(m_args.channels_lf))
        {
          if (m_cmd)
            setDataActive(SUBSYS_SSL, m_args.channels_lf);
        }

        if (paramChanged(m_args.channels_hf))
        {
          if (m_cmd)
            setDataActive(SUBSYS_SSH, m_args.channels_hf);
        }

        if (paramChanged(m_args.addr))
        {
          if (m_cmd)
            throw RestartNeeded(DTR("restarting to change IPv4 address"), 1);
        }

        if (paramChanged(m_args.port_cmd))
        {
          if (m_cmd)
            throw RestartNeeded(DTR("restarting to change TCP command port"), 1);
        }

        if (paramChanged(m_args.port_dat))
        {
          if (m_cmd)
            throw RestartNeeded(DTR("restarting to change TCP data port"), 1);
        }
      }

      void
      onResourceAcquisition(void)
      {
        m_cmd = new CommandLink(m_args.addr, m_args.port_cmd);
      }

      void
      onResourceRelease(void)
      {
        onDeactivation();

        if (m_cmd)
          Memory::clear(m_cmd);
      }

      void
      onResourceInitialization(void)
      {
        onDeactivation();
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_estate = *msg;
      }

      void
      consume(const IMC::EntityControl* msg)
      {
        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (msg->op == IMC::EntityControl::ECO_ACTIVATE)
          activate();
        else
          deactivate();
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        switch (msg->op)
        {
          case IMC::LoggingControl::COP_STARTED:
            if (m_log_file.is_open())
              m_log_file.close();

            m_log_file.open((m_ctx.dir_log / msg->name / "Data.jsf").c_str(), std::ios::binary);
            break;
          case IMC::LoggingControl::COP_REQUEST_STOP:
            m_log_file.close();
            break;
        }
      }

      void
      onActivation(void)
      {
        if (m_cmd == NULL)
          return;

        m_sock_dat = new TCPSocket;
        m_sock_dat->setNoDelay(true);
        m_sock_dat->setReceiveTimeout(5);
        m_sock_dat->setSendTimeout(5);
        m_sock_dat->connect(m_args.addr, m_args.port_dat);
        m_sock_dat->addToPoll(m_iom_dat);

        m_cmd->setPingAutoselectMode(SUBSYS_SSL, 2);
        m_cmd->setPingAutoselectMode(SUBSYS_SSH, 2);

        m_cmd->setPingRange(SUBSYS_SSL, m_args.range_lf);
        m_cmd->setPingRange(SUBSYS_SSH, m_args.range_hf);

        setDataActive(SUBSYS_SSL, m_args.channels_lf);
        setPing(SUBSYS_SSL, m_args.channels_lf);
        setDataActive(SUBSYS_SSH, m_args.channels_hf);
        setPing(SUBSYS_SSH, m_args.channels_hf);
      }

      void
      onDeactivation(void)
      {
        if (m_cmd == NULL)
          return;

        setDataActive(SUBSYS_SSL, "None");
        setPing(SUBSYS_SSL, "None");
        setDataActive(SUBSYS_SSH, "None");
        setPing(SUBSYS_SSH, "None");

        if (m_sock_dat != NULL)
        {
          m_sock_dat->delFromPoll(m_iom_dat);
          Memory::clear(m_sock_dat);
        }
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

      static void
      convertPositionToJSF(const IMC::EstimatedState& estate, int32_t& lat, int32_t& lon)
      {
        double wgs84_lat = 0;
        double wgs84_lon = 0;
        Coordinates::toWGS84(estate, wgs84_lat, wgs84_lon);
        lat = static_cast<int32_t>(wgs84_lat * 34377467.707849);
        lon = static_cast<int32_t>(wgs84_lon * 34377467.707849);
      }

      static void
      convertTimeToJSF(int64_t msec, uint32_t& sec, uint32_t& msec_today)
      {
        sec = msec / 1000;
        BrokenDown bdt(sec);
        msec_today = msec % 1000;
        msec_today += ((bdt.hour * 3600) + (bdt.minutes * 60) + bdt.seconds) * 1000;
      }

      static void
      convertTimeFromJSF(int64_t& msec, uint32_t sec, uint32_t msec_today)
      {
        BrokenDown bdt(sec);
        uint32_t msec_aligned = ((bdt.hour * 3600) + (bdt.minutes * 60) + bdt.seconds) * 1000;
        msec = sec;
        msec *= 1000;
        msec += msec_today - msec_aligned;
      }

      void
      handleSonarData(Packet* pkt)
      {
        // Adjust time stamp.
        uint32_t sec_epoch = 0;
        uint32_t msec_today = 0;
        int64_t msec = 0;
        pkt->get(sec_epoch, SDATA_IDX_TIME);
        pkt->get(msec_today, SDATA_IDX_MILLISECOND_TODAY);
        convertTimeFromJSF(msec, sec_epoch, msec_today);
        msec -= m_time_diff;
        convertTimeToJSF(msec, sec_epoch, msec_today);
        pkt->set(sec_epoch, SDATA_IDX_TIME);
        pkt->set(msec_today, SDATA_IDX_MILLISECOND_TODAY);

        // CPU and MMEA date/time for backward compatibility.
        Time::BrokenDown bdt(sec_epoch);
        pkt->set<int16_t>(3, SDATA_IDX_CPU_TIME_BASIS);
        pkt->set<int16_t>(bdt.year, SDATA_IDX_CPU_YEAR);
        pkt->set<int16_t>(bdt.day_year, SDATA_IDX_CPU_DAY);
        pkt->set<int16_t>(bdt.hour, SDATA_IDX_CPU_HOUR);
        pkt->set<int16_t>(bdt.hour, SDATA_IDX_NMEA_HOUR);
        pkt->set<int16_t>(bdt.minutes, SDATA_IDX_CPU_MINUTES);
        pkt->set<int16_t>(bdt.minutes, SDATA_IDX_NMEA_MINUTES);
        pkt->set<int16_t>(bdt.seconds, SDATA_IDX_CPU_SECONDS);
        pkt->set<int16_t>(bdt.seconds, SDATA_IDX_NMEA_SECONDS);

        // Navigation data.
        uint16_t validity = 0;
        int32_t s32 = 0;
        int16_t s16 = 0;
        uint16_t u16 = 0;

        // Position.
        int32_t lat = 0;
        int32_t lon = 0;
        convertPositionToJSF(m_estate, lat, lon);
        pkt->set<uint16_t>(2, SDATA_IDX_COORDINATE_UNITS);
        pkt->set(lon, SDATA_IDX_LONGITUDE);
        pkt->set(lat, SDATA_IDX_LATITUDE);
        validity |= (1 << 0);

        // Course.
        s16 = static_cast<int16_t>(Angles::degrees(std::atan2(m_estate.vy, m_estate.vx)));
        pkt->set(s16, SDATA_IDX_COURSE);
        validity |= (1 << 1);

        // Speed (knots * 10).
        double speed = Math::norm(m_estate.vx, m_estate.vy) * 19.438612860586;
        s16 = static_cast<int16_t>(speed);
        pkt->set(s16, SDATA_IDX_SPEED);
        validity |= (1 << 2);

        // Heading.
        u16 = static_cast<uint16_t>(Angles::degrees(m_estate.psi + Math::c_pi) * 100);
        pkt->set(u16, SDATA_IDX_HEADING);
        validity |= (1 << 3);

        // Roll.
        s16 = static_cast<int16_t>((Angles::degrees(m_estate.phi) * 32768) / 180);
        pkt->set(s16, SDATA_IDX_ROLL);

        // Pitch.
        s16 = static_cast<int16_t>((Angles::degrees(m_estate.theta) * 32768) / 180);
        pkt->set(s16, SDATA_IDX_PITCH);
        validity |= (1 << 5);

        // Altitude.
        s32 = static_cast<int32_t>(m_estate.alt * 1000);
        pkt->set(s32, SDATA_IDX_ALTITUDE);
        validity |= (1 << 6);

        // Depth.
        s32 = static_cast<int32_t>(m_estate.depth * 1000);
        pkt->set(s32, SDATA_IDX_DEPTH);
        validity |= (1 << 9);

        pkt->set(validity, SDATA_IDX_VALIDITY);

        m_log_file.write((const char*)pkt->getData(), pkt->getSize());
      }

      void
      handle(Packet* pkt)
      {
        if (pkt->getMessageType() != MSG_ID_SONAR_DATA)
        {
          inf("something else");
          return;
        }

        inf("data");
        handleSonarData(pkt);
      }

      bool
      readData(void)
      {
        if (!m_iom_dat.poll(1.0))
          return false;

        if (!m_sock_dat->wasTriggered(m_iom_dat))
          return false;

        int rv = m_sock_dat->read((char*)&m_bfr[0], m_bfr.size());
        for (int i = 0; i < rv; ++i)
        {
          if (m_parser.parse(m_bfr[i]))
          {
            handle(m_parser.getPacket());
          }
        }

        return true;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (m_sock_dat == NULL)
          {
            waitForMessages(1.0);
          }
          else
          {
            consumeMessages();
            readData();
            m_time_diff = m_cmd->estimateTimeDifference();
          }
        }
      }
    };
  }
}

DUNE_TASK
