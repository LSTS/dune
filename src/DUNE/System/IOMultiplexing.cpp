//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
