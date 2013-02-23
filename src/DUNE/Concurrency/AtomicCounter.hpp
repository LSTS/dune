//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONCURRENCY_ATOMIC_COUNTER_HPP_INCLUDED_
#define DUNE_CONCURRENCY_ATOMIC_COUNTER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>
#include <DUNE/Concurrency/Mutex.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>

// Check if we can use GCC's atomic functions.
#if defined(DUNE_SYS_HAS___SYNC_ADD_AND_FETCH) && defined(DUNE_SYS_HAS___SYNC_SUB_AND_FETCH)
#  ifndef DUNE_CONCURRENCY_ATOMIC_COUNTER_GCC
#    define DUNE_CONCURRENCY_ATOMIC_COUNTER_GCC
#  endif
#endif

namespace DUNE
{
  namespace Concurrency
  {
    //! Simple counter with atomic operations.
    class AtomicCounter
    {
    public:
      inline
      //! Constructor.
      //! @param value initial counter value.
      AtomicCounter(int value = 0):
        m_value(value)
      { }

      //! Atomically add a number to the current value and return the
      //! result.
      //! @param value number to add.
      //! @return value after addition.
      inline int
      add(int value)
      {
        // GCC implementation.
#if defined(DUNE_CONCURRENCY_ATOMIC_COUNTER_GCC)
        return __sync_add_and_fetch(&m_value, value);

        // Generic implementation.
#else
        ScopedMutex lock(m_lock);
        m_value += value;
        return m_value;
#endif
      }

      //! Atomically subtract a number to the current value and return
      //! the result.
      //! @param value number to subtract.
      //! @return value after subtraction.
      inline int
      sub(int value)
      {
        // GCC implementation.
#if defined(DUNE_CONCURRENCY_ATOMIC_COUNTER_GCC)
        return __sync_sub_and_fetch(&m_value, value);

        // Generic implementation.
#else
        ScopedMutex lock(m_lock);
        m_value -= value;
        return m_value;
#endif
      }

    private:
      //! Internal value.
      volatile int m_value;

#if !defined(DUNE_CONCURRENCY_ATOMIC_COUNTER_GCC)
      //! Explicit lock for generic implementation.
      Mutex m_lock;
#endif
    };
  }
}

#endif
