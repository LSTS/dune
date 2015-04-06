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

#ifndef DUNE_CONCURRENCY_TS_QUEUE_HPP_INCLUDED_
#define DUNE_CONCURRENCY_TS_QUEUE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>
#include <iostream>

// DUNE headers.
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/Concurrency/ScopedCondition.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    //! The TSQueue is a thread-safe implementation of a FIFO
    //! (first-in, first-out) data structure.
    template <typename T>
    class TSQueue
    {
    public:
      //! Constructor.
      TSQueue(void):
        m_closed(false)
      { }

      //! Adds an element to the end of the queue. Signaling waiting
      //! threads.
      //! @param v variable to insert.
      inline void
      push(const T& v)
      {
        ScopedCondition l(m_cond);
        m_queue.push(v);
        m_cond.signal();
      }

      //! Retrieve the first element of the queue and removes it from
      //! the queue.
      //! @return first element of the queue.
      inline T
      pop(void)
      {
        ScopedCondition l(m_cond);
        if (m_queue.size() > 0)
        {
          T v = m_queue.front();
          m_queue.pop();
          return v;
        }
        return 0;
      }

      //! Wait for items to be available.
      //! @param timeout timeout in seconds, use a negative number to wait forever.
      //! @return true if at least one element is available, false
      //! otherwise.
      inline bool
      waitForItems(double timeout = -1.0)
      {
        if (empty())
        {
          ScopedCondition l(m_cond);
          return m_cond.wait(timeout);
        }

        return true;
      }

      //! Verify if the queue has elements.
      //! @return true if the queue has no elements, false otherwise.
      inline bool
      empty(void)
      {
        ScopedCondition l(m_cond);
        return m_queue.empty();
      }

      //! Retrieve the number of elements currently in the queue.
      //! @return number of elements of the queue.
      inline unsigned
      size(void)
      {
        ScopedCondition l(m_cond);
        return m_queue.size();
      }

      inline void
      close(void)
      {
        ScopedCondition l(m_cond);
        ScopedMutex m(m_closed_mutex);
        m_closed = true;
        m_cond.broadcast();
      }

      inline bool
      closed(void)
      {
        ScopedMutex m(m_closed_mutex);
        return m_closed;
      }

    private:
      //! Internal queue data structure.
      std::queue<T> m_queue;
      //! Internal queue condition.
      Condition m_cond;
      //! True if queue is closed.
      bool m_closed;
      Mutex m_closed_mutex;
    };
  }
}

#endif
