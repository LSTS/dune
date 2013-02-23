//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TIME_CONSTANTS_HPP_INCLUDED_
#define DUNE_TIME_CONSTANTS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

// Platform headers.
#if defined(DUNE_SYS_HAS_TIME_H)
#  include <time.h>
#endif

// For those systems without CLOCK_MONOTONIC.
#if !defined(CLOCK_MONOTONIC) && defined(CLOCK_REALTIME)
#  define CLOCK_MONOTONIC CLOCK_REALTIME
#endif

namespace DUNE
{
  namespace Time
  {
    //! Number of microseconds in a second.
    static const unsigned c_usec_per_sec = 1000000u;
    //! Number of nanoseconds in a second.
    static const unsigned c_nsec_per_sec = 1000000000u;
    //! Number of nanoseconds in a microsecond.
    static const unsigned c_nsec_per_usec = 1000u;
    //! Number of nanoseconds in a millisecond.
    static const unsigned c_nsec_per_msec = 1000000u;
    //! Number of nanoseconds in a second (floating point).
    static const double c_nsec_per_sec_fp = 1000000000.0;
  }
}

#endif
