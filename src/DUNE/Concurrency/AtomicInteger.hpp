//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONCURRENCY_ATOMIC_INTEGER_HPP_INCLUDED_
#define DUNE_CONCURRENCY_ATOMIC_INTEGER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>
#include <DUNE/Concurrency/Mutex.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    class AtomicInteger
    {
    public:
      //! Initialize the internal value with 0.
      AtomicInteger(void)
      {
        assign(0);
      }

      //! Initialize the internal value of the object.
      //! @param val initialization value.
      AtomicInteger(long val)
      {
        assign(val);
      }

      AtomicInteger(const AtomicInteger& other)
      {
        assign(const_cast<AtomicInteger&>(other).value());
      }

      AtomicInteger&
      operator=(long val)
      {
        assign(val);
        return *this;
      }

      AtomicInteger&
      operator=(const AtomicInteger& other)
      {
        assign(const_cast<AtomicInteger&>(other).value());
        return *this;
      }

      //! Retrieve internal value.
      //! @return internal value.
      long
      value(void)
      {
        ScopedMutex lock(m_lock);
        return m_value;
      }

      //! Increment the internal value by 1.
      //! @return new value of the integer.
      long
      increment(void)
      {
        ScopedMutex lock(m_lock);
        return ++m_value;
      }

      //! Decrement the internal value by 1.
      //! @return new value of the integer.
      long
      decrement(void)
      {
        ScopedMutex lock(m_lock);
        return --m_value;
      }

      //! Increment the internal value by 1 and compare with a value.
      //! @param val comparison value.
      //! @return true if the result of the incrementation and
      //! comparison value are equal, false otherwise.
      bool
      incrementAndCompare(long val = 0)
      {
        return (increment() != val);
      }

      //! Decrement the internal value by 1 and compare with a value.
      //! @param val comparison value.
      //! @return true if the result of the decrementation and
      //! comparison value are equal, false otherwise.
      bool
      decrementAndCompare(long val = 0)
      {
        return (decrement() != val);
      }

      //! Exchange the internal value with a new one.
      //! @param val exchange value.
      //! @return internal value before the exchange.
      long
      swap(long val)
      {
        ScopedMutex lock(m_lock);

        long rv = m_value;
        m_value = val;

        return rv;
      }

      //! Exchange the internal value with a new one if it matches an
      //! expected value.
      //! @param expected expected value.
      //! @param val exchange value.
      //! @return true if an exchange took place, false otherwise.
      bool
      compareAndSwap(long expected, long val)
      {
        ScopedMutex lock(m_lock);

        if (m_value == expected)
        {
          m_value = val;
          return true;
        }

        return false;
      }

    private:
      //! Internal value.
      long m_value;
      //! Internal lock.
      Mutex m_lock;

      void
      assign(long val)
      {
        ScopedMutex lock(m_lock);
        m_value = val;
      }
    };
  }
}

#endif
