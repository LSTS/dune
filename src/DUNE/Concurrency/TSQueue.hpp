//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: TSQueue.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
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
      push(T v)
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
