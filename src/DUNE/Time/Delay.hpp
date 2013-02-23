//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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

      //! Suspends the execution of the calling entity for the
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
