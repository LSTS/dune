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
