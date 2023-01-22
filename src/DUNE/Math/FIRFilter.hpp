//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Miguel Aguiar                                                    *
//***************************************************************************

#ifndef DUNE_MATH_FIR_FILTER_HPP_INCLUDED_
#define DUNE_MATH_FIR_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include "DUNE/Utils/CircularBuffer.hpp"

namespace DUNE
{
  namespace Math
  {
    template <typename T> class FIRFilter
    {
    public:
      //! Create a zero-initialized filter.
      FIRFilter(std::vector<T> weights)
      : m_weights(std::move(weights)), m_buffer(m_weights.size()), m_val(T{ 0 })
      {
        for (size_t i = 0; i < m_weights.size(); ++i)
          m_buffer.add(T{ 0 });
      }

      //! Clear samples and reset state.
      void
      clear(void)
      {
        m_val = T{ 0 };

        for (size_t i = 0; i < m_weights.size(); ++i)
          m_buffer(i) = T{ 0 };
      }

      //! Add a new sample to the buffer.
      //! @return new filter output
      T
      update(T value)
      {
        m_buffer.add(value);

        m_val = T{ 0 };

        for (size_t i = 0; i < m_weights.size(); ++i)
          m_val += m_weights[i] * m_buffer(i);

        return m_val;
      }

      //! Get filter output.
      //! @return filter output.
      T
      get(void) const
      {
        return m_val;
      }

    private:
      //! Impulse response.
      std::vector<T> m_weights;
      //! Input samples.
      DUNE::Utils::CircularBuffer<T> m_buffer;
      //! Caches the last filter output.
      T m_val;
    };
  } // namespace Math
} // namespace DUNE

#endif
