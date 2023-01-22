//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
#include <cstddef>

// DUNE headers.
#include <DUNE/Concurrency/Exceptions.hpp>
#include <DUNE/Concurrency/Condition.hpp>
#include <DUNE/Time/Utils.hpp>
#include <DUNE/Time/Clock.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    Condition::Condition(void):
      m_clock_monotonic(false)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_COND)
      int rv = 0;

      if ((rv = pthread_mutex_init(&m_mutex, NULL)) != 0)
        throw MutexError(rv);

      rv = pthread_condattr_init(&m_cond_attr);
      if (rv != 0)
        throw ConditionError(rv);

#  if defined(DUNE_SYS_HAS_PTHREAD_CONDATTR_SETCLOCK) && defined(CLOCK_MONOTONIC)
      m_clock_monotonic = pthread_condattr_setclock(&m_cond_attr, CLOCK_MONOTONIC) == 0;
#  endif

      rv = pthread_cond_init(&m_cond, &m_cond_attr);

      if (rv != 0)
        throw ConditionError(rv);
#endif
    }

    Condition::~Condition(void)
    {
      try
      {
        destroy();
      }
      catch (...)
      { }
    }

    void
    Condition::destroy(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_COND)
      int rv = pthread_cond_destroy(&m_cond);
      if (rv != 0)
        throw ConditionError(rv);

      rv = pthread_condattr_destroy(&m_cond_attr);
      if (rv != 0)
        throw ConditionError(rv);
#endif
    }

    bool
    Condition::wait(double t)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_COND)
      int rv = 0;

      if (t > 0)
      {
        if (Time::Clock::getTimeMultiplier() != 1.0)
        {
          t /= Time::Clock::getTimeMultiplier();
          t += m_clock_monotonic ? Time::Clock::getRT() : Time::Clock::getSinceEpochRT();
        }
        else
          t += m_clock_monotonic ? Time::Clock::get() : Time::Clock::getSinceEpoch();

        timespec ts = DUNE_TIMESPEC_INIT_SEC_FP(t);
        rv = pthread_cond_timedwait(&m_cond, &m_mutex, &ts);
      }
      else
      {
        rv = pthread_cond_wait(&m_cond, &m_mutex);
      }

      if (rv == ETIMEDOUT)
        return false;

      if (rv != 0)
        throw ConditionError(rv);

      return true;
#endif
      return false;
    }

    void
    Condition::lock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_COND)
      pthread_mutex_lock(&m_mutex);
#endif
    }

    void
    Condition::unlock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_COND)
      pthread_mutex_unlock(&m_mutex);
#endif
    }

    void
    Condition::broadcast(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_COND)
      int rv = pthread_cond_broadcast(&m_cond);

      if (rv != 0)
        throw ConditionError(rv);
#endif
    }

    void
    Condition::signal(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_COND)
      int rv = pthread_cond_signal(&m_cond);

      if (rv != 0)
        throw ConditionError(rv);
#endif
    }
  }
}
