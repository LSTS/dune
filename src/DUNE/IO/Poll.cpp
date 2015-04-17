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

// ISO C++ 98 headers.
#include <algorithm>
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/Time/Constants.hpp>
#include <DUNE/Time/Utils.hpp>
#include <DUNE/IO/Poll.hpp>

namespace DUNE
{
  namespace IO
  {
    using std::memset;
    using System::Error;

    void
    Poll::add(const NativeHandle& handle)
    {
      m_handles.push_back(handle);
    }

    void
    Poll::remove(const NativeHandle& handle)
    {
      std::vector<NativeHandle>::iterator itr;
      itr = std::find(m_handles.begin(), m_handles.end(), handle);
      if (itr != m_handles.end())
        m_handles.erase(itr);
    }

    bool
    Poll::wasTriggered(const NativeHandle& handle)
    {
#if defined(DUNE_OS_POSIX)
      // Only the triggered fd's remain in the set after select() exits.
      return FD_ISSET(handle, &m_rfd) != 0;

#elif defined(DUNE_OS_WINDOWS)
      size_t idx = m_rv - WAIT_OBJECT_0;
      if (idx < m_handles.size())
      {
        if (m_handles[idx] == handle)
          return true;
      }
#endif

      return false;
    }

    bool
    Poll::poll(double timeout)
    {
#if defined(DUNE_OS_WINDOWS)
      DWORD count = m_handles.size();
      m_rv = WaitForMultipleObjects(count, &m_handles[0], FALSE, timeout * 1000);

      if (m_rv < count)
      {
        return true;
      }

      if (m_rv == WAIT_TIMEOUT)
      {
        return false;
      }

      if (m_rv == WAIT_FAILED)
        throw Error("polling handle", Error::getLastMessage());

      return false;

#elif defined(DUNE_OS_POSIX)
      int rv = 0;
      NativeHandle max = 0;
      FD_ZERO(&m_rfd);

      for (std::vector<NativeHandle>::iterator itr = m_handles.begin(); itr != m_handles.end(); ++itr)
      {
        if (*itr > max)
          max = *itr;
        FD_SET(*itr, &m_rfd);
      }

      if (timeout < 0.0)
      {
        rv = select(max + 1, &m_rfd, NULL, NULL, NULL);
      }
      else
      {
        timeval tv = DUNE_TIMEVAL_INIT_SEC_FP(timeout);
        rv = select(max + 1, &m_rfd, NULL, NULL, &tv);
      }

      if (rv == -1)
      {
        //! Workaround for when we are interrupted by a signal.
        if (errno == EINTR)
          return false;
        else
          throw Error("polling handle", Error::getLastMessage());
      }

      return rv > 0;
#endif
    }

    bool
    Poll::poll(const NativeHandle& handle, double timeout)
    {
#if defined(DUNE_OS_WINDOWS)
      DWORD rv = WaitForSingleObjectEx(handle, timeout * 1000, FALSE);
      return rv == WAIT_OBJECT_0;

#elif defined(DUNE_OS_POSIX)
      fd_set rfd;
      FD_ZERO(&rfd);
      FD_SET(handle, &rfd);

      int rv = 0;
      if (timeout < 0.0)
      {
        rv = select(handle + 1, &rfd, NULL, NULL, NULL);
      }
      else
      {
        timeval tv = DUNE_TIMEVAL_INIT_SEC_FP(timeout);
        rv = select(handle + 1, &rfd, NULL, NULL, &tv);
      }

      if (rv == -1)
      {
        //! Workaround for when we are interrupted by a signal.
        if (errno == EINTR)
          return false;
        else
          throw Error("polling handle", Error::getLastMessage());
      }

      return rv > 0;
#endif
    }
  }
}
