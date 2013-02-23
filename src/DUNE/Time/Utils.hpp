//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TIME_UTILS_HPP_INCLUDED_
#define DUNE_TIME_UTILS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Constants.hpp>

#if defined(DUNE_SYS_HAS_TIME_H)
#  include <time.h>
#endif

#if defined(DUNE_SYS_HAS_PTHREAD_H)
#  include <pthread.h>
#endif

#if defined(DUNE_SYS_HAS_STRUCT_TIMEVAL)
#  define DUNE_TIMEVAL_INIT_SEC_FP(sec)                                 \
  {(long)sec, (long)((sec - (long)sec) * DUNE::Time::c_usec_per_sec)}
#endif

#if defined(DUNE_SYS_HAS_STRUCT_TIMESPEC)
#  define DUNE_TIMESPEC_INIT_SEC_FP(sec)                                \
  {(long)sec, (long)((sec - (long)sec) * DUNE::Time::c_nsec_per_sec)}
#endif

namespace DUNE
{
  namespace Time
  {
#if defined(DUNE_SYS_HAS_STRUCT_TIMESPEC)
    inline void
    normalize(struct timespec* ts)
    {
      while (ts->tv_nsec >= (int)c_nsec_per_sec)
      {
        ts->tv_nsec -= c_nsec_per_sec;
        ts->tv_sec++;
      }
    }

#endif
  }
}

#endif
