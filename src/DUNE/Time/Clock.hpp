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
      //! Get the amount of non-realtime (in nanoseconds) since an unspecified
      //! point in the past. If the system permits, this point does
      //! not change after system start-up time.
      //! @return time in nanoseconds.
      static uint64_t
      getNsec(void);

      //! Get the amount of non-realtime (in microseconds) since an unspecified
      //! point in the past. If the system permits, this point does
      //! not change after system start-up time.
      //! @return time in microseconds.
      static uint64_t
      getUsec(void)
      {
        return getNsec() / c_nsec_per_usec;
      }

      //! Get the amount of non-realtime (in milliseconds) since an unspecified
      //! point in the past. If the system permits, this point does
      //! not change after system start-up time.
      //! @return time in milliseconds.
      static uint64_t
      getMsec(void)
      {
        return getNsec() / c_nsec_per_msec;
      }

      //! Get the amount of non-realtime (in seconds) since an unspecified
      //! point in the past. If the system permits, this point does
      //! not change after system start-up time.
      //! @return time in seconds.
      static double
      get(void)
      {
        return getNsec() / c_nsec_per_sec_fp;
      }

      //! Get the amount of non-realtime (in nanoseconds) elapsed since the
      //! UNIX Epoch (Midnight UTC of January 1, 1970).
      //! @return time in nanoseconds.
      static uint64_t
      getSinceEpochNsec(void);

      //! Get the amount of non-realtime (in microseconds) elapsed since the
      //! UNIX Epoch (Midnight UTC of January 1, 1970).
      //! @return time in microseconds.
      static uint64_t
      getSinceEpochUsec(void)
      {
        return getSinceEpochNsec() / c_nsec_per_usec;
      }

      //! Get the amount of non-realtime (in milliseconds) elapsed since the
      //! UNIX Epoch (Midnight UTC of January 1, 1970).
      //! @return time in milliseconds.
      static uint64_t
      getSinceEpochMsec(void)
      {
        return getSinceEpochNsec() / c_nsec_per_msec;
      }

      //! Get the amount of non-realtime (in seconds) elapsed since the
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

      //! Time multiplier for non-realtime simulations
      //! @param mul multiplier (e.g. 4.0 for 4x speed)
      static void
      setTimeMultiplier(double mul);

      //! Return configured time multipler
      //! @return simulation time multiplier (1.0 for real-time)
      static double
      getTimeMultiplier();

      //! Return reference time used for epoch clock acceleration
      //! @return s_starttime_epoch epoch time reference
      static double
      getStartTimeEpoch()
      {
        return s_starttime_epoch;
      }
    
      //! Return reference time used for monotonic clock acceleration
      //! @return s_starttime_epoch epoch time reference
      static double
      getStartTimeMono()
      {
        return s_starttime_mono;
      }

      //! Get the amount of realtime (in nanoseconds) elapsed since the
      //! UNIX Epoch (Midnight UTC of January 1, 1970).
      //! @return time in nanoseconds.
      static uint64_t
      getSinceEpochNsecRT(void);

      //! Get the amount of realtime (in nanoseconds) since an unspecified
      //! point in the past. If the system permits, this point does
      //! not change after system start-up time.
      //! @return time in nanoseconds.
      static uint64_t
      getNsecRT(void);

      //! Get the amount of realtime (in seconds) elapsed since the
      //! UNIX Epoch (Midnight UTC of January 1, 1970).
      //! @return time in seconds.
      static double
      getSinceEpochRT(void)
      {
        return getSinceEpochNsecRT() / c_nsec_per_sec_fp;
      }

      //! Get the amount of realtime (in seconds) since an unspecified
      //! point in the past. If the system permits, this point does
      //! not change after system start-up time.
      //! @return time in seconds.
      static double
      getRT(void)
      {
        return getNsecRT() / c_nsec_per_sec_fp;
      }

      static double
      toSimTime(double timestamp);

    private:
      static uint64_t s_starttime_epoch;
      static uint64_t s_starttime_mono;
      static double s_time_multiplier;
    };
  }
}

#endif