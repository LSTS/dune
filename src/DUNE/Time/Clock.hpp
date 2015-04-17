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

#ifndef DUNE_TIME_CLOCK_HPP_INCLUDED_
#define DUNE_TIME_CLOCK_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Constants.hpp>

namespace DUNE
{
  namespace Time
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Clock;

    //! %System clock routines.
    class Clock
    {
    public:
      //! Get the amount of time (in nanoseconds) since an unspecified
      //! point in the past. If the system permits, this point does
      //! not change after system start-up time.
      //! @return time in nanoseconds.
      static uint64_t
      getNsec(void);

      //! Get the amount of time (in microseconds) since an unspecified
      //! point in the past. If the system permits, this point does
      //! not change after system start-up time.
      //! @return time in microseconds.
      static uint64_t
      getUsec(void)
      {
        return getNsec() / c_nsec_per_usec;
      }

      //! Get the amount of time (in milliseconds) since an unspecified
      //! point in the past. If the system permits, this point does
      //! not change after system start-up time.
      //! @return time in milliseconds.
      static uint64_t
      getMsec(void)
      {
        return getNsec() / c_nsec_per_msec;
      }

      //! Get the amount of time (in seconds) since an unspecified
      //! point in the past. If the system permits, this point does
      //! not change after system start-up time.
      //! @return time in seconds.
      static double
      get(void)
      {
        return getNsec() / c_nsec_per_sec_fp;
      }

      //! Get the amount of time (in nanoseconds) elapsed since the
      //! UNIX Epoch (Midnight UTC of January 1, 1970).
      //! @return time in nanoseconds.
      static uint64_t
      getSinceEpochNsec(void);

      //! Get the amount of time (in microseconds) elapsed since the
      //! UNIX Epoch (Midnight UTC of January 1, 1970).
      //! @return time in microseconds.
      static uint64_t
      getSinceEpochUsec(void)
      {
        return getSinceEpochNsec() / c_nsec_per_usec;
      }

      //! Get the amount of time (in milliseconds) elapsed since the
      //! UNIX Epoch (Midnight UTC of January 1, 1970).
      //! @return time in milliseconds.
      static uint64_t
      getSinceEpochMsec(void)
      {
        return getSinceEpochNsec() / c_nsec_per_msec;
      }

      //! Get the amount of time (in seconds) elapsed since the
      //! UNIX Epoch (Midnight UTC of January 1, 1970).
      //! @return time in seconds.
      static double
      getSinceEpoch(void)
      {
        return getSinceEpochNsec() / c_nsec_per_sec_fp;
      }

      //! Set current time in the form of seconds elapsed since the
      //! UNIX Epoch (Midnight UTC of January 1, 1970).
      //! @param value time in seconds.
      static void
      set(double value);
    };
  }
}

#endif
