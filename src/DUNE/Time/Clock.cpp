//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <ctime>
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Constants.hpp>
#include <DUNE/Time/Clock.hpp>

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
    uint64_t
    Clock::getNsec(void)
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

    void
    Clock::set(double value)
    {
#if defined(DUNE_SYS_HAS_SETTIMEOFDAY)
      timeval tv;
      tv.tv_sec = static_cast<time_t>(value);
      tv.tv_usec = 0;
      settimeofday(&tv, 0);
#else
      (void)value;
#endif
    }
  }
}
