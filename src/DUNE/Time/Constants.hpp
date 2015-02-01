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
