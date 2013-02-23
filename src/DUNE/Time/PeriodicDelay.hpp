//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: PeriodicDelay.hpp 12667 2013-01-22 02:44:42Z rasm                $:*
//***************************************************************************

#ifndef DUNE_SYSTEM_PERIODIC_DELAY_HPP_INCLUDED_
#define DUNE_SYSTEM_PERIODIC_DELAY_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

// Platform headers.
#if defined(DUNE_SYS_HAS_TIME_H)
#  include <time.h>
#endif

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
#if defined(DUNE_SYS_HAS_CLOCK_GETTIME)
        m_delay = delay_usec * 1000;
#elif defined(DUNE_SYS_HAS_GET_SYSTEM_TIME_AS_FILE_TIME)
        m_delay = delay_usec / 10;
#elif defined(DUNE_SYS_HAS_NANOSLEEP)
        // No delta computation is needed.
        (void)delay_usec;
#else
#  error PeriodicDelay::set() is not yet implemented in this system
#endif
        reset();
      }

      void
      reset(void)
      {
#if defined(DUNE_SYS_HAS_CLOCK_GETTIME)
        timespec now;
        clock_gettime(CLOCK_MONOTONIC, &now);
        m_deadline = ((uint64_t)now.tv_sec * 1000000000U) + (uint64_t)now.tv_nsec;

        // Microsoft Windows implementation.
#elif defined(DUNE_SYS_HAS_GET_SYSTEM_TIME_AS_FILE_TIME)
        FILETIME ft;
        GetSystemTimeAsFileTime(&ft);
        std::memcpy(&m_deadline, &ft, sizeof(uint64_t));

#elif defined(DUNE_SYS_HAS_NANOSLEEP)
        // No delta computation is needed.
#else
#  error PeriodicDelay::reset() is not yet implemented in this system
#endif
      }

      void
      wait(void)
      {
#if defined(DUNE_SYS_HAS_CLOCK_NANOSLEEP)
        timespec deadline = {(time_t)(m_deadline / 1000000000), (long)(m_deadline % 1000000000)};
        clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &deadline, 0);

        // Microsoft Windows implementation.
#elif defined(DUNE_SYS_HAS_CREATE_WAITABLE_TIMER)
        HANDLE th = CreateWaitableTimer(0, TRUE, 0);
        LARGE_INTEGER dl;
        std::memcpy(&dl, &m_deadline, sizeof(LARGE_INTEGER));
        SetWaitableTimer(th, &dl, 0, 0, 0, 0);
        WaitForSingleObject(th, INFINITE);
        CloseHandle(th);

#elif defined(DUNE_SYS_HAS_NANOSLEEP)
        timespec deadline = {m_delay / 1000000000, m_delay % 1000000000};
        nanosleep(&deadline, 0);

#else
#  error PeriodicDelay::wait() is not yet implemented in this system
#endif

        m_deadline = m_deadline + m_delay;
      }

    private:
      uint64_t m_deadline;
      uint64_t m_delay;
    };
  }
}

#endif
