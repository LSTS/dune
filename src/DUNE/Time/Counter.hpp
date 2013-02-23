//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TIME_COUNTER_HPP_INCLUDED_
#define DUNE_TIME_COUNTER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Time/Clock.hpp>

namespace DUNE
{
  namespace Time
  {
    //! Simple time counter. This class checks if the amount of time
    //! elapsed since the last call to reset() is greater than the top
    //! value.
    template <typename T>
    class Counter
    {
    public:
      //! Constructor.
      //! @param top counter's top value.
      Counter(T top = 0.0):
        m_overflow(false)
      {
        setTop(top);
        reset();
      }

      //! Set top value.
      //! @param top counter's top value.
      inline void
      setTop(T top)
      {
        m_top = top;
        reset();
      }

      //! Get top value.
      //! @return counter's top value.
      inline T
      getTop(void) const
      {
        return m_top;
      }

      //! Reset counter.
      inline T
      reset(void)
      {
        m_last = static_cast<T>(Clock::get());
        m_overflow = false;
        return m_last;
      }

      //! Check if the counter has reached the top value.
      //! @return true if an overflow occured, false otherwise.
      inline bool
      overflow(void)
      {
        if (!m_overflow)
          m_overflow = (Clock::get() >= (m_last + m_top));

        return m_overflow;
      }

      //! Get remaining time.
      //! @return time remaining.
      inline T
      getRemaining(void)
      {
        if (m_overflow)
          return 0;

        return m_top - (Clock::get() - m_last);
      }

    private:
      //! Top value.
      T m_top;
      //! Time of last reset.
      T m_last;
      //! True if the counter overflowed.
      bool m_overflow;
    };
  }
}

#endif
