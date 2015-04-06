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
