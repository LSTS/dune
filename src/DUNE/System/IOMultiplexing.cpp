//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/Time/Constants.hpp>
#include <DUNE/Time/Utils.hpp>
#include <DUNE/System/IOMultiplexing.hpp>

using std::memset;

namespace DUNE
{
  namespace System
  {
    IOMultiplexing::IOMultiplexing(void)
    {
#if defined(DUNE_SYS_HAS_SELECT)
      FD_ZERO(&m_set);
#endif
    }

    IOMultiplexing::~IOMultiplexing(void)
    { }

    void
    IOMultiplexing::add(void* src)
    {
#if defined(DUNE_SYS_HAS_SELECT)
      int* s = (int*)src;
      m_fds.push_back(*s);
      FD_SET(*s, &m_set);
#endif
    }

    void
    IOMultiplexing::del(void* src)
    {
#if defined(DUNE_SYS_HAS_SELECT)
      int* s = (int*)src;
      m_fds.remove(*s);
      FD_CLR(*s, &m_set);
#endif
    }

    bool
    IOMultiplexing::poll(double timeout)
    {
#if defined(DUNE_SYS_HAS_SELECT)
      int rv = 0;
      int max = 0;

      FD_ZERO(&m_rfd);

      for (std::list<int>::iterator itr = m_fds.begin(); itr != m_fds.end(); ++itr)
      {
        if (*itr > max)
          max = *itr;
        FD_SET(*itr, &m_rfd);
      }

      if (timeout < 0.0)
      {
        rv = select(max + 1, &(m_rfd), NULL, NULL, NULL);
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
          return 0;
        else
          throw Error("polling socket", Error::getLastMessage());
      }

      return rv > 0;
#endif
    }

    bool
    IOMultiplexing::wasTriggered(void* src)
    {
#if defined(DUNE_SYS_HAS_SELECT)
      int* s = (int*)src;
      // Only the triggered fd's remain in the set after select() exits.
      return FD_ISSET(*s, &m_rfd) != 0;
#endif
    }
  }
}
