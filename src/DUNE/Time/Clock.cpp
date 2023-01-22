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

// ISO C++ 98 headers.
#include <ctime>
#include <cstring>
#include <cerrno>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Constants.hpp>
#include <DUNE/Time/Clock.hpp>
#include <DUNE/System/Error.hpp>

// Platform headers.
#if defined(DUNE_SYS_HAS_SYS_TIME_H)
#  include <sys/time.h>
#endif

#if defined(DUNE_SYS_HAS_PTHREAD_H)
#  include <pthread.h>
#endif

#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

namespace DUNE
{
  namespace Time
  {
    uint64_t Clock::s_starttime_epoch = getSinceEpochNsecRT();
    uint64_t Clock::s_starttime_mono = getNsecRT();
    double Clock::s_time_multiplier = 1.0;

    uint64_t
    Clock::getNsec(void)
    {
      uint64_t time = getNsecRT();
      if (Clock::s_time_multiplier != 1.0) {
        double ellapsed_time = (time - s_starttime_mono);
        time = ellapsed_time * Clock::s_time_multiplier + s_starttime_mono;
      }
      return time;
    }

    uint64_t
    Clock::getNsecRT(void)
    {
      // POSIX RT.
#if defined(DUNE_SYS_HAS_CLOCK_GETTIME)
      timespec ts;
      clock_gettime(CLOCK_MONOTONIC, &ts);
      return (uint64_t)ts.tv_sec * c_nsec_per_sec + (uint64_t)ts.tv_nsec;

        // Microsoft Windows.
#elif defined(DUNE_SYS_HAS_QUERY_PERFORMANCE_COUNTER)
      LARGE_INTEGER frequency;
      if (QueryPerformanceFrequency(&frequency))
      {
        LARGE_INTEGER li;
        QueryPerformanceCounter(&li);
        return (uint64_t)(li.QuadPart * (1000000000L / (double)frequency.QuadPart));
      }
      return getSinceEpochNsec();
#else
      return getSinceEpochNsec();
#endif
    }

    uint64_t
    Clock::getSinceEpochNsec(void)
    {
      uint64_t time = getSinceEpochNsecRT();
      if (Clock::s_time_multiplier != 1.0) {
        double ellapsed_time = (time - s_starttime_epoch);
        time = ellapsed_time * Clock::s_time_multiplier + s_starttime_epoch;
      }
      return time;
    }

    void
    Clock::set(double value)
    {
      if (Clock::s_time_multiplier != 1.0) {
        s_starttime_epoch = value * c_nsec_per_sec;
        setTimeMultiplier(Clock::s_time_multiplier);
        return;
      }

#if defined(DUNE_SYS_HAS_SETTIMEOFDAY)
      timeval tv;
      tv.tv_sec = static_cast<time_t>(value);
      tv.tv_usec = 0;
      if (settimeofday(&tv, 0) != 0)
        throw System::Error(errno, DTR("failed to set time"));
#else
      (void)value;
#endif
    }

    void
    Clock::setTimeMultiplier(double mul)
    {
      Clock::s_time_multiplier = 1.0;
      s_starttime_epoch = getSinceEpochNsecRT();
      s_starttime_mono = getNsecRT();
      Clock::s_time_multiplier = mul;
    }

    double
    Clock::getTimeMultiplier(void)
    {
      return Clock::s_time_multiplier;
    }

    uint64_t
    Clock::getSinceEpochNsecRT(void)
    {
      // POSIX RT.
#if defined(DUNE_SYS_HAS_CLOCK_GETTIME)
      timespec ts;
      clock_gettime(CLOCK_REALTIME, &ts);
      return (uint64_t)ts.tv_sec * c_nsec_per_sec + (uint64_t)ts.tv_nsec;

      // POSIX.
#elif defined(DUNE_SYS_HAS_GETTIMEOFDAY)
      timeval tv;
      gettimeofday(&tv, 0);
      return (uint64_t)tv.tv_sec * c_nsec_per_sec + (uint64_t)tv.tv_usec * 1000;

      // Microsoft Windows.
#elif defined(DUNE_SYS_HAS_GET_SYSTEM_TIME_AS_FILE_TIME)
      FILETIME ft;
      uint64_t tm;
      GetSystemTimeAsFileTime(&ft);
      std::memcpy(&tm, &ft, sizeof(uint64_t));

      // Subtract number of 100-nanosecond intervals between the beginning of the Windows
      // epoch (Jan. 1, 1601) and the Unix epoch (Jan. 1, 1970).
      tm -= 116444736000000000ULL;

      return tm * 100;

      // Unsupported system.
#else
#  error Clock::getSinceEpochNsec() is not yet implemented in this system.

#endif
    }

    double
    Clock::toSimTime(double timestamp)
    {
      double starttime = s_starttime_epoch / c_nsec_per_sec_fp;
      if (timestamp < starttime)
        return timestamp;

      return ((timestamp - starttime) * Time::Clock::s_time_multiplier) + starttime;
    }
  }
}
