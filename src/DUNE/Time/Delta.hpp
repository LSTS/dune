//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TIME_DELTA_HPP_INCLUDED_
#define DUNE_TIME_DELTA_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Time/Clock.hpp>

namespace DUNE
{
  namespace Time
  {
    class Delta
    {
    public:
      Delta(void):
        m_last(-1.0)
      { }

      inline void
      clear(void)
      {
        m_last = -1.0;
      }

      inline double
      getDelta(void)
      {
        if (m_last < 0.0)
        {
          m_last = Time::Clock::get();
          return -1.0;
        }

        double now = Time::Clock::get();
        double delta = now - m_last;
        m_last = now;

        return delta;
      }

      inline static bool
      isInvalid(double delta)
      {
        return (delta < 0.0);
      }

    private:
      double m_last;
    };
  }
}

#endif
