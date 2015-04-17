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
