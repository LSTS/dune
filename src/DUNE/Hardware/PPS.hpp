//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_PPS_HPP_INCLUDED_
#define DUNE_HARDWARE_PPS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

// Platform headers.
#if defined(DUNE_SYS_HAS_TIMEPPS_H)
#  include <timepps.h>
#endif

namespace DUNE
{
  namespace Hardware
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM PPS;

    class PPS
    {
    public:
      //! Constructor.
      //! @param dev PPS device.
      PPS(const std::string& dev);

      //! Destructor.
      ~PPS(void);

      //! Retrieve the timestamp of the last pulse.
      //! @param timeout time in seconds to wait for pulse to occur.
      //! @return timestamp of last pulse in nanoseconds since the
      //! UNIX Epoch. In case of timeout a negative number is
      //! returned.
      int64_t
      fetch(double timeout = 1.0);

    private:
      // Linux v2.6 (LinuxPPS) implementation.
#if defined(DUNE_SYS_HAS_TIMEPPS_H)
      pps_handle_t m_handle;
#endif
    };
  }
}

#endif
