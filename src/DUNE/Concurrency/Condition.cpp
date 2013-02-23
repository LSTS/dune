//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
    Condition::Condition(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_COND)
      int rv = 0;

      if ((rv = pthread_mutex_init(&m_mutex, NULL)) != 0)
        throw MutexError(rv);

      rv = pthread_condattr_init(&m_cond_attr);
      if (rv != 0)
        throw ConditionError(rv);

#  if defined(DUNE_SYS_HAS_PTHREAD_CONDATTR_SETCLOCK) && defined(CLOCK_MONOTONIC)
      pthread_condattr_setclock(&m_cond_attr, CLOCK_MONOTONIC);
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
#  if defined(DUNE_SYS_HAS_PTHREAD_CONDATTR_SETCLOCK) && defined(CLOCK_MONOTONIC)
        t += Time::Clock::get();
#  else
        t += Time::Clock::getSinceEpoch();
#  endif
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
