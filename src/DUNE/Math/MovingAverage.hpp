//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: MovingAverage.hpp 12667 2013-01-22 02:44:42Z rasm                $:*
//***************************************************************************

#ifndef DUNE_MATH_MOVING_AVERAGE_HPP_INCLUDED_
#define DUNE_MATH_MOVING_AVERAGE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <cmath>

namespace DUNE
{
  namespace Math
  {
    template <typename T>
    class MovingAverage
    {
    public:
      MovingAverage(unsigned window_size):
        m_window_size(window_size)
      {
        clear();
      }

      //! Clear sample.
      void
      clear(void)
      {
        m_accum = 0;
        m_oldest = 0;
        m_window.clear();
      }

      //! Update sample with new value.
      T
      update(const T& value)
      {
        if (m_window.size() < m_window_size)
        {
          m_window.push_back(value);
          m_accum += value;
          return m_accum / m_window.size();
        }

        m_accum += value - m_window[m_oldest];
        m_window[m_oldest] = value;
        m_oldest = (m_oldest + 1) % m_window_size;
        return m_accum / m_window_size;
      }

      //! Extract mean value of the sample.
      T
      mean(void)
      {
        if (m_window.size())
          return m_accum / m_window.size();
        else
          return 0;
      }

      //! Extract standard deviation of the sample.
      T
      stdev(void)
      {
        unsigned size = m_window.size();

        if (!size)
          return 0;

        T sdev = 0;
        T u = mean();

        for (unsigned i = 0; i < size; i++)
          sdev += (m_window[i] - u) * (m_window[i] - u);

        return std::sqrt(sdev / size);
      }

    private:
      //! Accumulator.
      T m_accum;
      //! Window size.
      unsigned m_window_size;
      //! Window.
      std::vector<T> m_window;
      //! Index of oldest value.
      unsigned m_oldest;
    };
  }
}

#endif
