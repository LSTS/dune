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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#if defined(DUNE_SYS_HAS_SYS_TIMEX_H)
#  include <sys/timex.h>
#endif

// Local headers.
#include "LinuxPPS.hpp"

namespace Supervisors
{
  /// Time synchronization using %PPS and %GPS time.
  //! This task configures the system to synchronize its clock using a
  //! Pulse Per Second (%PPS) source and %GPS time. Requires a Linux
  //! kernel compiled with CONFIG_PPS and CONFIG_NTP_PPS.
  //!
  //! - Consumes:
  //!   + DUNE::IMC::GpsFix
  //!
  //! - Produces:
  //!   + DUNE::IMC::Pulse
  //!   + DUNE::IMC::ClockControl
  namespace ClockPPS
  {
    using DUNE_NAMESPACES;

    //! Synchronization state.
    enum SyncState
    {
      //! Waiting for %PPS signal.
      SS_PPS_WAIT,
      //! Wait for %PPS signal to settle.
      SS_PPS_SETTLE,
      //! Gathering samples to set time.
      SS_SET_TIME,
      //! Monitoring synchronization state.
      SS_MONITOR
    };

    //! Task arguments.
    struct Arguments
    {
      //! UART device.
      std::string uart_dev;
      //! PPS device.
      std::string pps_dev;
      //! Number of GPS time offsets to compute.
      unsigned gps_offset_count;
      //! Command to execute when time is synchronized.
      std::string time_sync_cmd;
      //! PPS propagation delay.
      unsigned pps_prop_delay;
      //! PPS maximum offset.
      long pps_max_offset;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Current clock state.
      SyncState m_clk_state;
      //! List of time offsets.
      std::list<time_t> m_time_offsets;
      //! Last adjtimex() status.
      int m_timex_status;
      //! PPS consumer.
      LinuxPPS* m_pps;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name instance name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_clk_state(SS_PPS_WAIT),
        m_timex_status(0),
        m_pps(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device with PPS on CDC pin");

        param("PPS - Device", m_args.pps_dev)
        .defaultValue("")
        .description("Platform specific PPS device");

        param("PPS - Propagation Delay", m_args.pps_prop_delay)
        .defaultValue("675")
        .units(Units::Nanosecond)
        .description("Propagation delay of the PPS");

        param("PPS - Maximum Offset", m_args.pps_max_offset)
        .units(Units::Microsecond)
        .defaultValue("50")
        .description("Maximum PPS offset in order to consider the local clock disciplined");

        param("GPS Offset Count", m_args.gps_offset_count)
        .defaultValue("10")
        .description("Number of GPS samples to compute time offser");

        param("Execute On Synchronization", m_args.time_sync_cmd)
        .description("System command to execute everytime the clock is synchronized");

        bind<IMC::GpsFix>(this);
      }

      void
      onResourceAcquisition(void)
      {
        m_pps = new LinuxPPS(this, m_args.uart_dev, m_args.pps_dev, m_args.pps_prop_delay);
        m_pps->start();

        struct timex tmx;
        std::memset(&tmx, 0, sizeof(tmx));
        tmx.modes = ADJ_STATUS;
        tmx.status = STA_PLL | STA_PPSFREQ | STA_PPSTIME;
        (void)adjtimex(&tmx);
      }

      void
      onResourceRelease(void)
      {
        if (m_pps != NULL)
        {
          m_pps->stopAndJoin();
          Memory::clear(m_pps);
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        // Only use fixes from local system.
        if (msg->getSource() != getSystemId())
          return;

        computeTimeOffset(msg);
      }

      void
      computeTimeOffset(const IMC::GpsFix* msg)
      {
        // Compute time given by the GPS.
        if ((msg->validity & IMC::GpsFix::GFV_VALID_TIME) == 0
            or (msg->validity & IMC::GpsFix::GFV_VALID_DATE) == 0
            or (msg->validity & IMC::GpsFix::GFV_VALID_POS) == 0)
          return;

        tm bdt = {0};
        bdt.tm_mday = msg->utc_day;
        bdt.tm_mon = msg->utc_month - 1;
        bdt.tm_year = msg->utc_year - 1900;
        bdt.tm_hour = (int)(msg->utc_time / 3600);
        bdt.tm_min = (int)(((msg->utc_time / 3600.0) - bdt.tm_hour) * 60);
        bdt.tm_sec = (int)Math::round(((((msg->utc_time / 3600.0) - bdt.tm_hour) * 60.0) - bdt.tm_min) * 60.0);
        time_t gps_time = mktime(&bdt);

        // Get CPU time.
        time_t cpu_time = static_cast<time_t>(Math::round(msg->getTimeStamp()));

        // Compute offset.
        time_t offset = gps_time - cpu_time;

        m_time_offsets.push_back(offset);
        if (m_time_offsets.size() > m_args.gps_offset_count)
          m_time_offsets.pop_front();

        //if (m_time_offset != 0)
        //spew("gps: %0.2f / gps: %ld / msg: %ld / offs: %ld", msg->getTimeStamp(), gps_time, cpu_time, m_time_offset);
      }

      time_t
      getTimeOffset(void)
      {
        std::map<time_t, unsigned> table;

        std::list<time_t>::iterator itr = m_time_offsets.begin();
        for ( ; itr != m_time_offsets.end(); ++itr)
        {
          table[*itr]++;
        }

        time_t mode_offset = 0;
        unsigned mode_count = 0;
        std::map<time_t, unsigned>::iterator mitr = table.begin();
        for (; mitr != table.end(); ++mitr)
        {
          if (mitr->second > mode_count)
          {
            mode_offset = mitr->first;
            mode_count = mitr->second;
          }
        }

        return mode_offset;
      }

      bool
      hasPPS(void)
      {
        return (m_timex_status & STA_PPSSIGNAL) != 0;
      }

      //! Get adjtimex() status.
      //! @return adjtimex() status.
      int
      getTimeX(void)
      {
        struct timex tmx;
        std::memset(&tmx, 0, sizeof(tmx));

        if (adjtimex(&tmx) == -1)
          return -1;

        return tmx.status;
      }

      void
      updateState(void)
      {
        int status = getTimeX();
        if (status < 0)
          return;

        if ((status & STA_PPSSIGNAL) == 0)
        {
          setEntityState(IMC::EntityState::ESTA_BOOT, DTR("acquiring PPS signal"));
          m_clk_state = SS_PPS_WAIT;
        }

        switch (m_clk_state)
        {
          case SS_PPS_WAIT:
            if (status & STA_PPSSIGNAL)
            {
              setEntityState(IMC::EntityState::ESTA_BOOT, DTR("PPS signal acquired"));
              m_pps->reset();
              m_pps->resetLimits();
              m_clk_state = SS_PPS_SETTLE;
            }
            break;

          case SS_PPS_SETTLE:
            if (m_pps->getOffset() < m_args.pps_max_offset)
            {
              setEntityState(IMC::EntityState::ESTA_BOOT, DTR("clock is disciplined"));
              m_time_offsets.clear();
              m_clk_state = SS_SET_TIME;
            }
            else
            {
              setEntityState(IMC::EntityState::ESTA_BOOT,
                             String::str(DTR("disciplining clock (%lld µs)"), m_pps->getOffset()));
            }
            break;

          case SS_SET_TIME:
            if (m_time_offsets.size() == m_args.gps_offset_count)
            {
              time_t offset = getTimeOffset();

              if (offset == 0)
              {
                setEntityState(IMC::EntityState::ESTA_NORMAL, DTR("clock is synchronized"));
                if (std::system(m_args.time_sync_cmd.c_str()) == -1)
                  err(DTR("failed to set the hardware clock"));

                double tstamp = Clock::getSinceEpoch();
                IMC::ClockControl cc;
                cc.setTimeStamp(tstamp);
                cc.op = IMC::ClockControl::COP_SYNC_DONE;
                cc.clock = tstamp;
                dispatch(cc, DF_KEEP_TIME);

                m_pps->resetLimits();
                m_clk_state = SS_MONITOR;
              }
              else
              {
                setEntityState(IMC::EntityState::ESTA_BOOT,
                               String::str(DTR("adjusting clock by %ld s"), offset));
                Time::Clock::set(Time::Clock::getSinceEpoch() + offset);
                m_time_offsets.clear();
              }
            }
            else
            {
              setEntityState(IMC::EntityState::ESTA_BOOT, DTR("synchronizing"));
            }
            break;

          case SS_MONITOR:
            setEntityState(IMC::EntityState::ESTA_NORMAL, String::str(DTR("clock is synchronized [%lld, %ld, %ld]"),
                                                                      m_pps->getOffset(),
                                                                      m_pps->getOffsetMinimum(),
                                                                      m_pps->getOffsetMaximum()));
            break;
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          updateState();
        }
      }
    };
  }
}

DUNE_TASK
