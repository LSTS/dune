//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: IOMultiplexing.hpp 12667 2013-01-22 02:44:42Z rasm               $:*
//***************************************************************************

#ifndef DUNE_SYSTEM_IO_MULTIPLEXING_HPP_INCLUDED_
#define DUNE_SYSTEM_IO_MULTIPLEXING_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <list>

// DUNE headers.
#include <DUNE/Config.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_SYS_SELECT_H)
#  include <sys/select.h>
#endif

// Windows headers.
#if defined(DUNE_SYS_HAS_WINSOCK2_H)
#  include <winsock2.h>
#endif

namespace DUNE
{
  namespace System
  {
    // Export symbol.
    class DUNE_DLL_SYM IOMultiplexing;

    class IOMultiplexing
    {
    public:
      enum Result
      {
        PRES_OK = 0,
        PRES_NONE = 1,
        PRES_SIGNAL = 2,
        PRES_ERROR = 3
      };

      //! Constructor.
      IOMultiplexing(void);

      //! Destructor.
      ~IOMultiplexing(void);

      //! Add os-specific i/o handle to the polling pool.
      //! Only supports unix file descriptors so far.
      //! @param[in] src pointer to os-specific i/o handle.
      void
      add(void* src);

      //! Remove os-specific i/o handle from the polling pool.
      //! Only supports unix file descriptors so far.
      //! @param[in] src pointer to os-specific i/o handle.
      void
      del(void* src);

      //! Wait for new input from the i/o handle pool.
      //! @param[in] timeout timeout in seconds, negative for no timeout.
      //! @return true if there is i/o activity, false otherwise.
      bool
      poll(double timeout);

      //! Check if new input became available for the os-specific i/o handle
      //! during the previous call to poll().
      //! Only supports unix file descriptors so far.
      //! @param[in] src pointer to os-specific i/o handle.
      //! @return true if there was i/o activity, false otherwise.
      bool
      wasTriggered(void* src);

    private:
#if defined(DUNE_SYS_HAS_SELECT)
      std::list<int> m_fds;
      fd_set m_set;
      fd_set m_rfd;
#endif
    };
  }
}

#endif
