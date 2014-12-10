//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_IO_POLL_HPP_INCLUDED_
#define DUNE_IO_POLL_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/IO/Handle.hpp>

// POSIX headers.
#if defined(DUNE_OS_POSIX)
#  include <sys/select.h>
#endif

namespace DUNE
{
  namespace IO
  {
    // Export symbol.
    class DUNE_DLL_SYM Poll;

    class Poll
    {
    public:
      static bool
      poll(const NativeHandle& handle, double timeout);

      static bool
      poll(const Handle& handle, double timeout)
      {
        return poll(handle.getNative(), timeout);
      }

      //! Add native I/O handle to the polling pool.
      //! @param[in] handle native I/O handle.
      void
      add(const NativeHandle& handle);

      //! Add I/O handle to the polling pool.
      //! @param[in] handle I/O handle.
      void
      add(const Handle& handle)
      {
        add(handle.getNative());
      }

      //! Remove native I/O handle from the polling pool.
      //! @param[in] handle native I/O handle.
      void
      remove(const NativeHandle& handle);

      //! Remove I/O handle from the polling pool.
      //! @param[in] handle I/O handle.
      void
      remove(const Handle& handle)
      {
        remove(handle.getNative());
      }

      bool
      poll(double timeout);

      bool
      wasTriggered(const NativeHandle& handle);

      bool
      wasTriggered(const Handle& handle)
      {
        return wasTriggered(handle.getNative());
      }

    private:
      //! List of native I/O handles.
      std::vector<NativeHandle> m_handles;
#if defined(DUNE_OS_POSIX)
      fd_set m_rfd;
#elif defined(DUNE_OS_WINDOWS)
      DWORD m_rv;
#endif
    };
  }
}

#endif
