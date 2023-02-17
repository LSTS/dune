//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/Concurrency/Exceptions.hpp>
#include <DUNE/Concurrency/Mutex.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    Mutex::Mutex(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      int rv = 0;

      if ((rv = pthread_mutexattr_init(&m_attr)) != 0)
        throw MutexError("attribute initialization", rv);

      // Enable priority inheritance if supported.
#  if (_POSIX_THREAD_PRIO_INHERIT != -1) && defined(PTHREAD_PRIO_INHERIT)
      pthread_mutexattr_setprotocol(&m_attr, PTHREAD_PRIO_INHERIT);
#  endif

      if ((rv = pthread_mutex_init(&m_mutex, &m_attr)) != 0)
        throw MutexError("initializing mutex", rv);
#endif
    }

    Mutex::~Mutex(void)
    {
      try
      {
        destroy();
      }
      catch (...)
      { }
    }

    void
    Mutex::lock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      int rv = pthread_mutex_lock(&m_mutex);

      if (rv != 0)
        throw MutexError("lock", rv);
#endif
    }

    void
    Mutex::unlock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      int rv = pthread_mutex_unlock(&m_mutex);

      if (rv != 0)
        throw MutexError("unlock", rv);
#endif
    }

    void
    Mutex::tryLock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      int rv = pthread_mutex_trylock(&m_mutex);

      if (rv != 0)
        throw MutexError("tryLock", rv);
#endif
    }

    void
    Mutex::destroy(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      int rv = pthread_mutex_destroy(&m_mutex);

      if (rv != 0)
        throw MutexError("destroy", rv);
#endif
    }
  }
}
