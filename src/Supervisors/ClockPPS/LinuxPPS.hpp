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

#ifndef SUPERVISORS_CLOCK_PPS_LINUX_PPS_HPP_INCLUDED_
#define SUPERVISORS_CLOCK_PPS_LINUX_PPS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <limits>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "TimePPS.h"

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

// Line discipline IOCTL.
#ifndef TIOCSETD
#  define TIOCSETD 0x5423
#endif

namespace Supervisors
{
  namespace ClockPPS
  {
    using DUNE_NAMESPACES;

    //! PPS line discipline number.
    static const int c_pps_ldisc = 18;

    class LinuxPPS: public Concurrency::Thread
    {
    public:
      LinuxPPS(Tasks::Task* parent, const std::string& uart_dev, const std::string& pps_dev, unsigned prop_delay):
        m_parent(parent),
        m_uart_fd(-1),
        m_pps(-1),
        m_pps_fd(-1),
        m_avg(10)
      {
        // Attach PPS line discipline to serial port.
        if (!uart_dev.empty())
        {
          m_uart_fd = open(uart_dev.c_str(), O_RDWR | O_NOCTTY);
          if (m_uart_fd < 0)
            throw std::runtime_error(Utils::String::str("unable to open serial port '%s'",
                                                        uart_dev.c_str()));

          int ldisc = c_pps_ldisc;
          if (ioctl(m_uart_fd, TIOCSETD, &ldisc) < 0)
            throw std::runtime_error(Utils::String::str("unable to attach line discipline to serial port '%s'",
                                                        uart_dev.c_str()));
        }

        // Open PPS device.
        m_pps_fd = open(pps_dev.c_str(), O_RDWR);
        if (m_pps_fd < 0)
          throw std::runtime_error(Utils::String::str("unable to open PPS device '%s'",
                                                      pps_dev.c_str()));

        // Open the PPS source.
        int rv = time_pps_create(m_pps_fd, &m_pps);
        if (rv < 0)
          throw std::runtime_error(Utils::String::str("cannot create a PPS source from device '%s'",
                                                      pps_dev.c_str()));

        // Find out what features are supported.
        int mode = 0;
        rv = time_pps_getcap(m_pps, &mode);
        if (rv < 0)
          throw std::runtime_error(Utils::String::str("cannot get capabilities of device '%s'",
                                                      pps_dev.c_str()));

        if ((mode & PPS_CAPTUREASSERT) == 0)
          throw std::runtime_error("device does not support CAPTUREASSERT");

        if ((mode & PPS_OFFSETASSERT) == 0)
          throw std::runtime_error("device does not support OFFSETASSERT");

        // Capture assert timestamps.
        pps_params_t params;
        rv = time_pps_getparams(m_pps, &params);
        if (rv < 0)
          throw std::runtime_error("unable to retrieve parameters");

        params.assert_offset.tv_sec = 0;
        params.assert_offset.tv_nsec = prop_delay;
        params.mode |= PPS_CAPTUREASSERT | PPS_OFFSETASSERT | PPS_TSFMT_TSPEC;
        params.mode &= ~(PPS_CAPTURECLEAR | PPS_OFFSETCLEAR);
        rv = time_pps_setparams(m_pps, &params);
        if (rv < 0)
          throw std::runtime_error("unable to set parameters");

        rv = time_pps_kcbind(m_pps, PPS_KC_HARDPPS, PPS_CAPTUREASSERT, PPS_TSFMT_TSPEC);
        if (rv < 0)
          throw std::runtime_error(String::str("kernel does not support hard PPS %d", rv));

        reset();
        resetLimits();
      }

      ~LinuxPPS(void)
      {
        if (m_pps != -1)
          time_pps_destroy(m_pps);

        if (m_pps_fd != -1)
          close(m_pps_fd);

        if (m_uart_fd != -1)
          close(m_uart_fd);
      }

      void
      reset(void)
      {
        ScopedMutex l(m_mutex);
        m_avg.update(1000000);
      }

      void
      resetLimits(void)
      {
        ScopedMutex l(m_mutex);
        m_offset_max = std::numeric_limits<int>::min();
        m_offset_min = std::numeric_limits<int>::max();
      }

      int64_t
      getOffset(void)
      {
        ScopedMutex l(m_mutex);
        return m_avg.mean();
      }

      long
      getOffsetMaximum(void)
      {
        ScopedMutex l(m_mutex);
        return m_offset_max;
      }

      long
      getOffsetMinimum(void)
      {
        ScopedMutex l(m_mutex);
        return m_offset_min;
      }

      void
      run(void)
      {
        while (!isStopping())
        {
          fetch(2.0);
        }
      }

    private:
      //! Parent task.
      Tasks::Task* m_parent;
      //! UART device.
      int m_uart_fd;
      //! PPS device descriptor.
      int m_pps;
      //! PPS file descriptor.
      int m_pps_fd;
      Mutex m_mutex;
      MovingAverage<int64_t> m_avg;
      long m_offset_max;
      long m_offset_min;

      void
      fetch(double timeout)
      {
        timespec tstout = DUNE_TIMESPEC_INIT_SEC_FP(timeout);
        pps_info_t bfr = {0};

        int rv = time_pps_fetch(m_pps_fd, PPS_TSFMT_TSPEC, &bfr, &tstout);
        if (rv < 0)
          return;

        int64_t time = bfr.assert_timestamp.tv_sec;
        time *= Time::c_usec_per_sec;
        time += bfr.assert_timestamp.tv_nsec / 1000;

        long offset = bfr.assert_timestamp.tv_nsec / 1000;
        if (offset >= 500000)
          offset -= 1000000;

        addOffset(offset);

        // Dispatch pulse.
        IMC::Pulse pulse;
        pulse.setTimeStamp(time / 1000000.0);
        m_parent->dispatch(pulse, DF_KEEP_TIME);
      }

      void
      addOffset(long offset)
      {
        ScopedMutex l(m_mutex);

        if (offset > m_offset_max)
          m_offset_max = offset;

        if (offset < m_offset_min)
          m_offset_min = offset;

        m_avg.update(offset);
      }
    };
  }
}

#endif
