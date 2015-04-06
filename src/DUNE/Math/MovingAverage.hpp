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
      //! @return mean value.
      T
      update(const T& value)
      {
        if (sampleSize() < m_window_size)
        {
          m_window.push_back(value);
          m_accum += value;
          return m_accum / sampleSize();
        }

        m_accum += value - m_window[m_oldest];
        m_window[m_oldest] = value;
        m_oldest = (m_oldest + 1) % m_window_size;
        return m_accum / m_window_size;
      }

      //! Extract mean value of the sample.
      //! @return mean value.
      T
      mean(void)
      {
        if (sampleSize())
          return m_accum / sampleSize();
        else
          return 0;
      }

      //! Extract standard deviation of the sample.
      //! @return standard deviation value.
      T
      stdev(void)
      {
        unsigned size = sampleSize();

        if (!size)
          return 0;

        T sdev = 0;
        T u = mean();

        for (unsigned i = 0; i < size; i++)
          sdev += (m_window[i] - u) * (m_window[i] - u);

        return std::sqrt(sdev / size);
      }

      //! Know size of sample.
      //! @return size of the sample.
      unsigned
      sampleSize(void)
      {
        return (unsigned)m_window.size();
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
