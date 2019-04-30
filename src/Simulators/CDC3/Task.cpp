//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: tsm                                                              *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author tsm
  namespace CDC3
  {
    using DUNE_NAMESPACES;

    // Synchronization byte.
    static const uint8_t c_sync = 0xCD;
    static const uint8_t c_poly = 0x07;

    enum AcommsCodes
    {
      //! Acoustic report
      CODE_REPORT         = 0x03,
      //! Target of Interest
      CODE_TOI            = 0x04,
      //! Retask mission
      CODE_RETASK_MISSION = 0x05,
      //! Retask to Waypoint
      CODE_RETASK_WP      = 0x06,
      //! Extended format
      CODE_EXT            = 0x07
    };

    struct Report
    {
      float lat;
      float lon;
      uint8_t depth;
      int16_t yaw;
      int16_t alt;
      int8_t progress;
      uint8_t fuel_level;
      uint8_t fuel_conf;
    };

    struct RetaskMission
    {
      //! Time of request in seconds
      uint32_t m_timestamp_s;
      //! Mission ID
      uint32_t m_mission_id;
    };

    struct RetaskWaypoint
    {
      //! Time of request in seconds
      uint32_t m_timestamp_s;
      //! Latitude in radians
      fp32_t m_lat_rads;
      //! Longitude in radians
      fp32_t m_lon_rads;
      //! Speed in meters per second
      fp32_t m_speed_mps;
    };


    struct Arguments
    {
      //! RetaskWaypoint periodicty
      int period_report;
      //! RetaskMission periodicty
      int period_rtm;
      //! RetaskWaypoint periodicty
      int period_rtw;
      //! IMC destination
      std::string dest;
    };

    struct Task: public DUNE::Tasks::Task
    {
      Time::Counter<double> m_wdog_report;
      Time::Counter<double> m_wdog_rtm;
      Time::Counter<double> m_wdog_rtw;
      IMC::EstimatedState* m_eestate;
      std::vector<uint8_t> m_bfr;
      Arguments m_args;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Period -- Report", m_args.period_report)
        .defaultValue("1")
        .units(Units::Second)
        .description("");

        param("Period -- RetaskMission", m_args.period_rtm)
        .defaultValue("-1")
        .units(Units::Second)
        .description("");

        param("Period -- RetaskWaypoint", m_args.period_rtw)
        .defaultValue("-1")
        .units(Units::Second)
        .description("");

        param("Destination", m_args.dest)
        .defaultValue("lauv-noptilus-1")
        .description("");

        m_bfr.resize(255);
        bind<IMC::EstimatedState>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_wdog_report.setTop(m_args.period_report);
        m_wdog_rtm.setTop(m_args.period_rtm);
        m_wdog_rtw.setTop(m_args.period_rtw);
      }

      void
      consume(const IMC::EstimatedState* estate)
      {
        m_eestate = estate->clone();
      }

      void
      sendAcomms(const std::vector<char>& data)
      {
        inf("Send Acomms");
        Algorithms::CRC8 crc(c_poly);

        std::vector<char> frame;
        frame.reserve(data.size());

        frame.push_back(c_sync);
        crc.putByte(c_sync);
        for (size_t i = 0; i < data.size(); ++i)
        {
          frame.push_back(data[i]);
          crc.putByte(data[i]);
        }
        frame.push_back(crc.get());

        IMC::UamRxFrame rx;
        rx.sys_src = resolveSystemId(getSystemId());
        rx.sys_dst = m_args.dest;
        rx.data = frame;

        debug("%s", Utils::String::toHex(frame).c_str());

        dispatch(rx);
      }

      void
      sendRetaskWaypoint(void)
      {
        if (m_eestate == NULL || m_wdog_rtw.getTop() == -1 || !m_wdog_rtw.overflow())
          return;

        double lat = 0;
        double lon = 0;
        Coordinates::toWGS84(*m_eestate, lat, lon);

        RetaskWaypoint rtw;
        rtw.m_timestamp_s = Time::Clock::getSinceEpoch();
        rtw.m_lat_rads = lat;
        rtw.m_lon_rads = lon;
        rtw.m_speed_mps = m_eestate->u;

        std::vector<char> data;
        data.resize(sizeof(rtw.m_lat_rads) + sizeof(rtw.m_lon_rads) + sizeof(rtw.m_speed_mps) + sizeof(rtw.m_timestamp_s) + 1);
        data[0] = CODE_RETASK_WP;

        int idx = 1;
        std::memcpy(&data[idx], &rtw.m_timestamp_s, sizeof(rtw.m_timestamp_s));
        idx += sizeof(rtw.m_timestamp_s);

        std::memcpy(&data[idx], &rtw.m_lat_rads, sizeof(rtw.m_lat_rads));
        idx += sizeof(rtw.m_lat_rads);

        std::memcpy(&data[idx], &rtw.m_lon_rads, sizeof(rtw.m_lon_rads));
        idx += sizeof(rtw.m_lon_rads);

        std::memcpy(&data[idx], &rtw.m_speed_mps, sizeof(rtw.m_speed_mps));
        idx += sizeof(rtw.m_speed_mps);

        war("%s", Utils::String::toHex(data).c_str());
        war("%d, %lf %lf %lf",
              rtw.m_timestamp_s,
              rtw.m_lat_rads,
              rtw.m_lon_rads,
              rtw.m_speed_mps);
        sendAcomms(data);
        m_wdog_rtw.reset();
      }

      void
      sendRetaskMission(void)
      {
        if (m_wdog_rtm.getTop() == -1 || !m_wdog_rtm.overflow())
          return;

        RetaskMission rtm;
        rtm.m_timestamp_s = Time::Clock::getSinceEpoch();
        rtm.m_mission_id = 10;

        std::vector<char> data;
        data.resize(sizeof(rtm.m_mission_id) + sizeof(rtm.m_timestamp_s) + 1);
        data[0] = CODE_RETASK_MISSION;

        unsigned idx = 1;
        std::memcpy(&data[idx], &rtm.m_timestamp_s, sizeof(rtm.m_timestamp_s));
        idx += sizeof(rtm.m_timestamp_s);

        std::memcpy(&data[idx], &rtm.m_mission_id, sizeof(rtm.m_mission_id));
        idx += sizeof(rtm.m_mission_id);

        war("%s", Utils::String::toHex(data).c_str());
        debug("%d, %d",
              rtm.m_timestamp_s,
              rtm.m_mission_id);
        sendAcomms(data);
        m_wdog_rtm.reset();
      }

      void
      sendReport(void)
      {
        if (m_eestate == NULL || m_wdog_report.getTop() == -1 || !m_wdog_report.overflow())
          return;

        double lat = 0;
        double lon = 0;
        Coordinates::toWGS84(*m_eestate, lat, lon);

        Report dat;
        dat.lat = lat;
        dat.lon = lon;
        dat.depth = (uint8_t)m_eestate->depth;
        dat.yaw = (int16_t)(m_eestate->psi * 100.0);
        dat.alt = (int16_t)(m_eestate->alt * 10.0);
        dat.fuel_level = 50.0;
        dat.fuel_conf = 99.0;
        dat.progress = 0;

        std::vector<char> data;
        data.resize(sizeof(dat.lat) +
                    sizeof(dat.lon) +
                    sizeof(dat.depth) +
                    sizeof(dat.yaw) +
                    sizeof(dat.alt) +
                    sizeof(dat.progress) +
                    sizeof(dat.fuel_level) +
                    sizeof(dat.fuel_conf) + 1);
        data[0] = CODE_REPORT;

        int idx = 1;
        std::memcpy(&data[idx], &dat.lat, sizeof(dat.lat));
        idx += sizeof(dat.lat);

        std::memcpy(&data[idx], &dat.lon, sizeof(dat.lon));
        idx += sizeof(dat.lon);

        std::memcpy(&data[idx], &dat.depth, sizeof(dat.depth));
        idx += sizeof(dat.depth);

        std::memcpy(&data[idx], &dat.yaw, sizeof(dat.yaw));
        idx += sizeof(dat.yaw);

        std::memcpy(&data[idx], &dat.alt, sizeof(dat.alt));
        idx += sizeof(dat.alt);

        std::memcpy(&data[idx], &dat.progress, sizeof(dat.progress));
        idx += sizeof(dat.progress);

        std::memcpy(&data[idx], &dat.fuel_level, sizeof(dat.fuel_level));
        idx += sizeof(dat.fuel_level);

        std::memcpy(&data[idx], &dat.fuel_conf, sizeof(dat.fuel_conf));
        idx += sizeof(dat.fuel_conf);

        war("%s", Utils::String::toHex(data).c_str());
        debug("%f, %f, %d, %d, %d, %d, %d, %d",
              dat.lat,
              dat.lon,
              dat.depth,
              dat.yaw,
              dat.alt,
              dat.progress,
              dat.fuel_level,
              dat.fuel_conf);
        sendAcomms(data);
        m_wdog_report.reset();
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          sendReport();
          sendRetaskMission();
          sendRetaskWaypoint();
        }
      }
    };
  }
}

DUNE_TASK
