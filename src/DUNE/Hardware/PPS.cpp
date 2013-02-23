//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: PPS.cpp 12667 2013-01-22 02:44:42Z rasm                          $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/Time/Utils.hpp>
#include <DUNE/Time/Constants.hpp>
#include <DUNE/Hardware/PPS.hpp>
#include <DUNE/Utils/String.hpp>

// Platform headers.
#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_STAT_H)
#  include <sys/stat.h>
#endif

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

namespace DUNE
{
  namespace Hardware
  {
    PPS::PPS(const std::string& dev)
    {
      // Linux v2.6 (LinuxPPS) implementation.
#if defined(DUNE_SYS_HAS_TIMEPPS_H)
      // Try to find the source by using the supplied "path" name
      int rv = open(dev.c_str(), O_RDWR);
      if (rv < 0)
        throw std::runtime_error(Utils::String::str("unable to open PPS device '%s'\n", dev.c_str()));

      // Open the PPS source (and check the file descriptor)
      rv = time_pps_create(rv, &m_handle);
      if (rv < 0)
        throw std::runtime_error(Utils::String::str("cannot create a PPS source from device '%s'\n", dev.c_str()));

      // Find out what features are supported
      int mode = 0;
      rv = time_pps_getcap(m_handle, &mode);
      if (rv < 0)
        throw std::runtime_error(Utils::String::str("cannot get capabilities of device '%s'\n", dev.c_str()));

      if ((mode & PPS_CAPTUREASSERT) == 0)
        throw std::runtime_error("device does not support CAPTUREASSERT");

      if ((mode & PPS_OFFSETASSERT) == 0)
        throw std::runtime_error("device does not support OFFSETASSERT");

      // Capture assert timestamps, and compensate for a 675 nsec
      // propagation delay.
      pps_params_t params;
      rv = time_pps_getparams(m_handle, &params);
      if (rv < 0)
        throw std::runtime_error("unable to retrieve parameters");

      params.assert_offset.tv_sec = 0;
      params.assert_offset.tv_nsec = 675;
      params.mode |= PPS_CAPTUREASSERT | PPS_OFFSETASSERT;
      params.mode &= ~(PPS_CAPTURECLEAR | PPS_OFFSETCLEAR);
      rv = time_pps_setparams(m_handle, &params);
      if (rv < 0)
        throw std::runtime_error("unable to set parameters");

      // Not yet implemented.
#else
      (void)dev;

#endif
    }

    PPS::~PPS(void)
    {
#if defined(DUNE_SYS_HAS_TIMEPPS_H)
      time_pps_destroy(m_handle);
#endif
    }

    int64_t
    PPS::fetch(double timeout)
    {
      // Linux v2.6 (LinuxPPS) implementation.
#if defined(DUNE_SYS_HAS_TIMEPPS_H)
      timespec tstout = DUNE_TIMESPEC_INIT_SEC_FP(timeout);
      pps_info_t bfr = {0};

      int rv = time_pps_fetch(m_handle, PPS_TSFMT_TSPEC, &bfr, &tstout);

      if (rv < 0)
        return -1;

      return (int64_t)bfr.assert_timestamp.tv_sec * Time::c_nsec_per_sec
             + (int64_t)bfr.assert_timestamp.tv_nsec;

      // Not yet implemented.
#else
      (void)timeout;

      return -1;
#endif
    }
  }
}
