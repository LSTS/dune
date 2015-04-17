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
      //! @return time remaining (s).
      inline T
      getRemaining(void) const
      {
        if (m_overflow)
          return 0;

        return m_top - (Clock::get() - m_last);
      }

      //! Get elapsed time.
      //! @return elapsed time (s).
      inline T
      getElapsed(void) const
      {
        return Clock::get() - m_last;
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
