//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TIME_PERIODIC_DELAY_HPP_INCLUDED_
#define DUNE_TIME_PERIODIC_DELAY_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

// Platform headers.
#if defined(DUNE_SYS_HAS_TIME_H)
#  include <time.h>
#endif

// DUNE headers.
#include <DUNE/Time/Constants.hpp>
#include <DUNE/Time/Clock.hpp>

namespace DUNE
{
  namespace Time
  {
    class PeriodicDelay
    {
    public:
      PeriodicDelay(uint32_t delay_usec = 0):
        m_deadline(0),
        m_delay(0)
      {
        set(delay_usec);
      }

      void
      set(uint32_t delay_usec)
      {

        delay_usec = (uint32_t) (delay_usec / Clock::getTimeMultiplier());

        // Microsoft Windows.
#if defined(DUNE_SYS_HAS_GET_SYSTEM_TIME_AS_FILE_TIME)
        m_delay = delay_usec * 10;

        // POSIX.
#elif defined(DUNE_SYS_HAS_CLOCK_GETTIME) || defined(DUNE_SYS_HAS_NANOSLEEP)
        m_delay = delay_usec * 1000;

#else
#  error PeriodicDelay::set() is not yet implemented in this system
#endif

        reset();
      }

      void
      reset(void)
      {
        // Microsoft Windows.
#if defined(DUNE_SYS_HAS_GET_SYSTEM_TIME_AS_FILE_TIME)
        FILETIME ft;
        GetSystemTimeAsFileTime(&ft);
        std::memcpy(&m_deadline, &ft, sizeof(uint64_t));

        // POSIX.
#elif defined(DUNE_SYS_HAS_CLOCK_GETTIME)
        timespec now;
        clock_gettime(CLOCK_MONOTONIC, &now);
        m_deadline = ((uint64_t)now.tv_sec * 1000000000U) + (uint64_t)now.tv_nsec;

#elif defined(DUNE_SYS_HAS_NANOSLEEP)
	m_deadline = Clock::getNsec();

#else
#  error PeriodicDelay::reset() is not yet implemented in this system
#endif

        m_deadline += m_delay;
      }

      void
      wait(void)
      {
        // Microsoft Windows.
#if defined(DUNE_SYS_HAS_CREATE_WAITABLE_TIMER)
        HANDLE th = CreateWaitableTimer(0, TRUE, 0);
        LARGE_INTEGER dl;
        std::memcpy(&dl, &m_deadline, sizeof(LARGE_INTEGER));
        SetWaitableTimer(th, &dl, 0, 0, 0, 0);
        WaitForSingleObject(th, INFINITE);
        CloseHandle(th);

        // POSIX clock_nanosleep().
#elif defined(DUNE_SYS_HAS_CLOCK_NANOSLEEP)
        timespec deadline = {(time_t)(m_deadline / 1000000000), (long)(m_deadline % 1000000000)};
        clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &deadline, NULL);

        // POSIX nanosleep().
#elif defined(DUNE_SYS_HAS_NANOSLEEP)
	uint64_t now = Clock::getNsec();
	if (now < m_deadline)
        {
	  uint64_t delay = m_deadline - now;
          timespec delay_tspec = {(time_t)(delay / 1000000000), (long)(delay % 1000000000)};	
          nanosleep(&delay_tspec, NULL);
	}

#else
#  error PeriodicDelay::wait() is not yet implemented in this system
#endif

        m_deadline += m_delay;
      }

    private:
      uint64_t m_deadline;
      uint64_t m_delay;
    };
  }
}

#endif
