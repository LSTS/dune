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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_MATH_MULTI_MOVING_AVERAGE_HPP_INCLUDED_
#define DUNE_MATH_MULTI_MOVING_AVERAGE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <vector>
#include <cmath>

namespace DUNE
{
  namespace Math
  {
    template <typename T>
    class MultiMovingAverage
    {
    public:
      //! Constructor
      //! @param[in] window_sizes sizes of the moving average windows
      MultiMovingAverage(const std::vector<unsigned>& window_sizes):
        m_wsizes(window_sizes)
      {
        m_accum.resize(m_wsizes.size());

        m_max_size = 0;

        for (unsigned i = 0; i < m_wsizes.size(); ++i)
          if (m_wsizes[i] > m_max_size)
            m_max_size = m_wsizes[i];

        clear();
      }

      //! Clear sample.
      void
      clear(void)
      {
        m_accum.assign(m_wsizes.size(), (T)0.0);
        m_window.clear();
      }

      //! Insert new sample
      //! @param[in] value new sample
      void
      insertSample(const T& value)
      {
        if (m_window.size() >= m_max_size)
          m_window.pop_back();

        m_window.insert(m_window.begin(), value);
      }

      //! Update sample with new value.
      //! @param[in] value new value.
      void
      update(const T& value)
      {
        for (unsigned j = 0; j < m_wsizes.size(); ++j)
        {
          m_accum[j] += value;

          if (m_wsizes[j] <= m_window.size())
            m_accum[j] -= m_window[m_wsizes[j] - 1];
        }

        insertSample(value);
      }

      //! Extract mean value of a moving average.
      //! @param[in] j index of the moving average to be used
      //! @return mean value.
      T
      mean(unsigned j)
      {
        if (j >= m_wsizes.size())
          std::runtime_error("multi moving average: invalid index");

        if (!m_window.size())
          return 0.0;

        if (m_wsizes[j] > m_window.size())
          return m_accum[j] / m_window.size();
        else
          return m_accum[j] / m_wsizes[j];
      }

    private:
      //! Accumulator for each moving average.
      std::vector<T> m_accum;
      //! Window.
      std::vector<T> m_window;
      //! Window sizes for each moving average
      std::vector<unsigned> m_wsizes;
      //! Maximum size of window
      unsigned m_max_size;
    };
  }
}

#endif
