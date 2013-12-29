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
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstddef>

// Platform headers.
#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_STAT_H)
#  include <sys/stat.h>
#endif

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

#include <sys/timex.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "timepps.h"

namespace Sensors
{
  namespace PPS
  {
    using DUNE_NAMESPACES;

    enum ClockState
    {
      CS_PPS_WAIT,
      CS_PPS_SETTLE,
      CS_SYNCHED
    };

    struct Arguments
    {
      // PPS device.
      std::string pps_dev;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Task arguments.
      Arguments m_args;
      // PPS device descriptor.
      int m_pps;
      //! PPS file descriptor.
      int m_fd;
      //! Current clock state.
      ClockState m_clk_state;
      //! Count of PPS signals.
      unsigned m_pps_count;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_pps(-1),
        m_fd(-1),
        m_clk_state(CS_PPS_WAIT),
        m_pps_count(0)
      {
        param("PPS Device", m_args.pps_dev)
        .defaultValue("")
        .description("Platform specific PPS device");

        bind<IMC::GpsFix>(this);
      }

      void
      onResourceAcquisition(void)
      {
        // Try to find the source by using the supplied "path" name
        m_fd = open(m_args.pps_dev.c_str(), O_RDWR);
        if (m_fd < 0)
          throw std::runtime_error(Utils::String::str("unable to open PPS device '%s'", m_args.pps_dev.c_str()));

        // Open the PPS source (and check the file descriptor)
        int rv = time_pps_create(m_fd, &m_pps);
        if (rv < 0)
          throw std::runtime_error(Utils::String::str("cannot create a PPS source from device '%s'", m_args.pps_dev.c_str()));

        // Find out what features are supported
        int mode = 0;
        rv = time_pps_getcap(m_pps, &mode);
        if (rv < 0)
          throw std::runtime_error(Utils::String::str("cannot get capabilities of device '%s'", m_args.pps_dev.c_str()));

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

        rv = adjtimex(&t);
        inf("adjtimex returned %d", rv);
      }

      void
      onResourceRelease(void)
      {
        if (m_pps != -1)
          time_pps_destroy(m_pps);

        if (m_fd != -1)
          close(m_fd);
      }

      void
      fetch(double timeout)
      {
        timespec tstout = DUNE_TIMESPEC_INIT_SEC_FP(timeout);
        pps_info_t bfr = {0};

        int rv = time_pps_fetch(m_pps, PPS_TSFMT_TSPEC, &bfr, &tstout);
        if (rv < 0)
          return;

        long offset = bfr.assert_timestamp.tv_nsec;
        if (bfr.assert_timestamp.tv_nsec > 500000000)
          offset = bfr.assert_timestamp.tv_nsec - 1000000000;

        //inf("offset: %ld ms", bfr.assert_timestamp.tv_nsec / 1000000);
        inf("PPS offset: %ld us", offset / 1000);
        //inf("%ld | %ld", bfr.assert_timestamp.tv_sec, bfr.assert_timestamp.tv_nsec);
      }

      void
      getKernelClock(void)
      {
        struct timex t;
        std::memset(&t, 0, sizeof(t));

        int rv = adjtimex(&t);


        inf("status: %d, offset: %ld us", t.status, t.offset);

        // inf("rv        : %d", rv);
        // inf("offset    : %ld (us)", t.offset);
        // inf("freq      : %ld (sppm)", t.freq);
        // inf("maxerror  : %ld (us)", t.maxerror);
        // inf("esterror  : %ld (us)", t.esterror);
        // inf("status    : %d", t.status);
        // inf("pll_const : %ld", t.constant);
        // inf("precision : %ld (us)", t.precision);
        // inf("tolerance : %ld (ppm)", t.tolerance);
        // inf("tick      : %ld", t.tick);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        //msg->toText(std::cerr);
        compare(msg);
      }

      void
      compare(const IMC::GpsFix* msg)
      {
        tm bdt = {0};
        bdt.tm_mday = msg->utc_day;
        bdt.tm_mon = msg->utc_month - 1;
        bdt.tm_year = msg->utc_year - 1900;
        bdt.tm_hour = (int)(msg->utc_time / 3600);
        bdt.tm_min = (int)(((msg->utc_time / 3600.0) - bdt.tm_hour) * 60);
        bdt.tm_sec = (int)Math::round(((((msg->utc_time / 3600.0) - bdt.tm_hour) * 60.0) - bdt.tm_min) * 60.0);
        time_t gps_time = mktime(&bdt);

        time_t msg_time = static_cast<time_t>(msg->getTimeStamp());

        inf("gps: %ld / msg: %ld", gps_time, msg_time);
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
          case CS_PPS_WAIT:
            if (ktime.status & STA_PPSSIGNAL)
            {
              inf("waiting for PPS to settle");
              m_pps_count = 0;
              m_clk_state = CS_PPS_SETTLE;
            }
            break;

          case CS_PPS_SETTLE:
            if (ktime.status & STA_PPSSIGNAL)
            {
              if (++m_pps_count == 5)
              {
                if ((ktime.offset / 1000) < 10)
                {
                  inf("clock synchronized");
                  m_clk_state = CS_SYNCHED;
                }
                else
                  m_pps_count = 0;
              }
            }
            else
            {
              inf("PPS failed to settle, retrying");
              m_clk_state = CS_PPS_WAIT;
            }
            break;

          case CS_SYNCHED:
            if ((ktime.status & STA_PPSSIGNAL) == 0)
            {
              war("lost PPS signal");
              m_clk_state = CS_PPS_WAIT;
            }

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
