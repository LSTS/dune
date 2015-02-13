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

// Linux headers.
#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_STAT_H)
#  include <sys/stat.h>
#endif

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_TIMEX_H)
#  include <sys/timex.h>
#endif

// Local headers.
#include "timepps.h"

// Line discipline IOCTL.
#ifndef TIOCSETD
#  define TIOCSETD 0x5423
#endif

namespace Sensors
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
  namespace PPS
  {
    using DUNE_NAMESPACES;

    //! PPS line discipline number.
    static const int c_pps_ldisc = 18;

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
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! PPS device descriptor.
      int m_pps;
      //! PPS file descriptor.
      int m_fd;
      //! UART device.
      int m_uart;
      //! Current clock state.
      SyncState m_clk_state;
      //! Count of PPS signals.
      unsigned m_pps_count;
      //! Number of computed time offsets.
      unsigned m_time_offset_samples;
      //! Time offset.
      time_t m_time_offset;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name instance name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_pps(-1),
        m_fd(-1),
        m_uart(-1),
        m_clk_state(SS_PPS_WAIT),
        m_pps_count(0),
        m_time_offset_samples(0),
        m_time_offset(0)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device with PPS on CDC pin");

        param("PPS Device", m_args.pps_dev)
        .defaultValue("")
        .description("Platform specific PPS device");

        bind<IMC::GpsFix>(this);
      }

      void
      onResourceAcquisition(void)
      {
        // Attach PPS line discipline to serial port.
        if (!m_args.uart_dev.empty())
        {
          m_uart = open(m_args.uart_dev.c_str(), O_RDWR | O_NOCTTY);
          if (m_uart < 0)
            throw std::runtime_error(Utils::String::str("unable to open serial port '%s'",
                                                        m_args.uart_dev.c_str()));

          int ldisc = c_pps_ldisc;
          if (ioctl(m_uart, TIOCSETD, &ldisc) < 0)
            throw std::runtime_error(Utils::String::str("unable to attach line discipline to serial port '%s'",
                                                        m_args.uart_dev.c_str()));
        }

        // Try to find the source by using the supplied "path" name
        m_fd = open(m_args.pps_dev.c_str(), O_RDWR);
        if (m_fd < 0)
          throw std::runtime_error(Utils::String::str("unable to open PPS device '%s'",
                                                      m_args.pps_dev.c_str()));

        // Open the PPS source (and check the file descriptor)
        int rv = time_pps_create(m_fd, &m_pps);
        if (rv < 0)
          throw std::runtime_error(Utils::String::str("cannot create a PPS source from device '%s'",
                                                      m_args.pps_dev.c_str()));

        // Find out what features are supported
        int mode = 0;
        rv = time_pps_getcap(m_pps, &mode);
        if (rv < 0)
          throw std::runtime_error(Utils::String::str("cannot get capabilities of device '%s'",
                                                      m_args.pps_dev.c_str()));

        if ((mode & PPS_CAPTUREASSERT) == 0)
          throw std::runtime_error("device does not support CAPTUREASSERT");

        if ((mode & PPS_OFFSETASSERT) == 0)
          throw std::runtime_error("device does not support OFFSETASSERT");

        // Capture assert timestamps, and compensate for a 675 nsec
        // propagation delay.
        pps_params_t params;
        rv = time_pps_getparams(m_pps, &params);
        if (rv < 0)
          throw std::runtime_error("unable to retrieve parameters");

        params.assert_offset.tv_sec = 0;
        params.assert_offset.tv_nsec = 675;
        params.mode |= PPS_CAPTUREASSERT | PPS_OFFSETASSERT;
        params.mode &= ~(PPS_CAPTURECLEAR | PPS_OFFSETCLEAR);
        rv = time_pps_setparams(m_pps, &params);
        if (rv < 0)
          throw std::runtime_error("unable to set parameters");

        rv = time_pps_kcbind(m_pps, PPS_KC_HARDPPS, PPS_CAPTUREASSERT, PPS_TSFMT_TSPEC);
        if (rv < 0)
          throw std::runtime_error(String::str("kernel does not support hard PPS %d", rv));

        struct timex t;
        std::memset(&t, 0, sizeof(t));
        t.modes = ADJ_STATUS;
        t.status = STA_PLL | STA_PPSFREQ | STA_PPSTIME;

        (void)adjtimex(&t);
      }

      void
      onResourceRelease(void)
      {
        if (m_pps != -1)
          time_pps_destroy(m_pps);

        if (m_fd != -1)
          close(m_fd);

        if (m_uart != -1)
          close(m_uart);
      }

      void
      fetch(double timeout)
      {
        timespec tstout = DUNE_TIMESPEC_INIT_SEC_FP(timeout);
        pps_info_t bfr = {0};

        int rv = time_pps_fetch(m_pps, PPS_TSFMT_TSPEC, &bfr, &tstout);
        if (rv < 0)
          return;

        int64_t time = bfr.assert_timestamp.tv_sec;
        time *= Time::c_usec_per_sec;
        time += bfr.assert_timestamp.tv_nsec / 1000;

        // Dispatch pulse.
        IMC::Pulse pulse;
        pulse.setTimeStamp(time / 1000000.0);
        dispatch(pulse, DF_KEEP_TIME);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        computeTimeOffset(msg);
      }

      void
      computeTimeOffset(const IMC::GpsFix* msg)
      {
        // Compute time given by the GPS.
        if ((msg->validity & IMC::GpsFix::GFV_VALID_TIME) == 0 or (msg->validity & IMC::GpsFix::GFV_VALID_DATE) == 0)
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
        m_time_offset = gps_time - cpu_time;

        if (m_time_offset != 0)
          spew("gps: %ld / msg: %ld / offs: %ld", gps_time, cpu_time, m_time_offset);

        ++m_time_offset_samples;
      }

      void
      updateState(void)
      {
        struct timex ktime;
        std::memset(&ktime, 0, sizeof(ktime));

        if (adjtimex(&ktime) == -1)
          return;

        switch (m_clk_state)
        {
          case SS_PPS_WAIT:
            if (ktime.status & STA_PPSSIGNAL)
            {
              debug("waiting for PPS to settle");
              m_pps_count = 0;
              m_clk_state = SS_PPS_SETTLE;
            }
            break;

          case SS_PPS_SETTLE:
            if (ktime.status & STA_PPSSIGNAL)
            {
              if (++m_pps_count == 5)
              {
                if ((ktime.offset / 1000) < 10)
                {
                  debug("clock synchronized");
                  m_time_offset_samples = 0;
                  m_time_offset = 0;
                  m_clk_state = SS_SET_TIME;
                }
                else
                  m_pps_count = 0;
              }
            }
            else
            {
              debug("PPS failed to settle, retrying");
              m_clk_state = SS_PPS_WAIT;
            }
            break;

          case SS_SET_TIME:
            if ((ktime.status & STA_PPSSIGNAL) == 0)
            {
              debug("lost PPS signal");
              m_clk_state = SS_PPS_WAIT;
            }
            else
            {
              if (m_time_offset_samples >= 10)
              {
                if (m_time_offset == 0)
                {
                  debug("time is synchronized");
                  double tstamp = Clock::getSinceEpoch();
                  IMC::ClockControl cc;
                  cc.setTimeStamp(tstamp);
                  cc.op = IMC::ClockControl::COP_SYNC_DONE;
                  cc.clock = tstamp;
                  dispatch(cc, DF_KEEP_TIME);
                  m_clk_state = SS_MONITOR;
                }
                else
                {
                  debug("adjusting time by %ld", m_time_offset);
                  Time::Clock::set(Time::Clock::getSinceEpoch() + m_time_offset);
                  m_time_offset_samples = 0;
                  m_time_offset = 0;
                }

                m_clk_state = SS_MONITOR;
              }
            }

            break;

          case SS_MONITOR:
            if ((ktime.status & STA_PPSSIGNAL) == 0)
            {
              debug("lost PPS signal");
              m_clk_state = SS_PPS_WAIT;
            }

            break;
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();
          fetch(1.0);
          updateState();
        }
      }
    };
  }
}

DUNE_TASK
