//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Clock.hpp 12667 2013-01-22 02:44:42Z rasm                        $:*
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
