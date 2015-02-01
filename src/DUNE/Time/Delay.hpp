//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TIME_DELAY_HPP_INCLUDED_
#define DUNE_TIME_DELAY_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Constants.hpp>

namespace DUNE
{
  namespace Time
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Delay;

    //! Routines to control timed delays.
    class Delay
    {
    public:
      //! Suspends the execution of the calling thread for the
      //! specified amount of time (in nanosecond).
      //! @param nsec the amount of nanoseconds to suspend.
      static void
      waitNsec(uint64_t nsec);

      //! Suspends the execution of the calling thread for the
      //! specified amount of time (in microsecond).
      //! @param usec the amount of microseconds to suspend.
      static void
      waitUsec(uint64_t usec)
      {
        waitNsec(usec * 1000);
      }

      //! Suspends the execution of the calling thread for the
      //! specified amount of time (in millisecond).
      //! @param msec the amount of milliseconds to suspend.
      static void
      waitMsec(uint64_t msec)
      {
        waitNsec(msec * 1000000);
      }

      //! Suspends the execution of the calling thread for the
      //! specified amount of time (in seconds).
      //! @param s the amount of time to suspend.
      static void
      wait(double s)
      {
        uint64_t secs = (uint64_t)s;
        uint64_t nsecs = secs * c_nsec_per_sec + (uint64_t)((s - secs) * c_nsec_per_sec_fp);

        waitNsec(nsecs);
      }
    };
  }
}

#endif
