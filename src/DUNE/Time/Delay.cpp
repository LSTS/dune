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

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Delay.hpp>
#include <DUNE/Time/Constants.hpp>
#include <DUNE/Time/Clock.hpp>

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

      // Microsoft Windows.
#if defined(DUNE_SYS_HAS_CREATE_WAITABLE_TIMER)
      HANDLE t = CreateWaitableTimer(0, TRUE, 0);
      LARGE_INTEGER dl;
      dl.QuadPart = (uint64_t)nsec / 100;
      // Negative value means relative time.
      dl.QuadPart *= -1;
      SetWaitableTimer(t, &dl, 0, 0, 0, 0);
      WaitForSingleObject(t, INFINITE);
      CloseHandle(t);

      // POSIX.
#elif defined(DUNE_SYS_HAS_CLOCK_NANOSLEEP) || defined(DUNE_SYS_HAS_NANOSLEEP)
      timespec ts;
      ts.tv_sec = nsec / c_nsec_per_sec;
      ts.tv_nsec = nsec - (ts.tv_sec * c_nsec_per_sec);

#  if defined(DUNE_SYS_HAS_CLOCK_NANOSLEEP)
      clock_nanosleep(CLOCK_MONOTONIC, 0, &ts, 0);
#  else
      nanosleep(&ts, 0);
#  endif

      // Unsupported system.
#else
#  error Delay::waitNsec() is not yet implemented in this system
#endif
    }
  }
}
