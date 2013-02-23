//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Delay.hpp>
#include <DUNE/Time/Constants.hpp>

// Platform headers.
#if defined(DUNE_SYS_HAS_TIME_H)
#  include <time.h>
#endif

#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

namespace DUNE
{
  namespace Time
  {
    void
    Delay::waitNsec(uint64_t nsec)
    {
      // POSIX.
#if defined(DUNE_SYS_HAS_CLOCK_NANOSLEEP) || defined(DUNE_SYS_HAS_NANOSLEEP)
      timespec ts;
      ts.tv_sec = nsec / c_nsec_per_sec;
      ts.tv_nsec = nsec - (ts.tv_sec * c_nsec_per_sec);

#  if defined(DUNE_SYS_HAS_CLOCK_NANOSLEEP)
      clock_nanosleep(CLOCK_MONOTONIC, 0, &ts, 0);
#  else
      nanosleep(&ts, 0);
#  endif

      // Microsoft Windows.
#elif defined(DUNE_SYS_HAS_CREATE_WAITABLE_TIMER)
      HANDLE t = CreateWaitableTimer(0, TRUE, 0);
      LARGE_INTEGER dl;
      dl.QuadPart = (uint64_t)nsec / 100;
      // Negative value means relative time.
      dl.QuadPart *= -1;
      SetWaitableTimer(t, &dl, 0, 0, 0, 0);
      WaitForSingleObject(t, INFINITE);
      CloseHandle(t);

      // Unsupported system.
#else
#  error Delay::waitNsec() is not yet implemented in this system
#endif
    }
  }
}
