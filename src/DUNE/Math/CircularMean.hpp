//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_MATH_CIRCULAR_MEAN_HPP_INCLUDED_
#define DUNE_MATH_CIRCULAR_MEAN_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Math/Angles.hpp>

namespace DUNE
{
  namespace Math
  {
    // Convert polar coordinates to Cartesian coordinates in a unit circle.
    // Then compute the arithmetic mean of these points.
    // The resulting point will lie within the unit disk but generally not on the unit circle.
    // Convert that point back to polar coordinates.
    // The resulting angle is the mean angle.
    // The resulting radius will be 1 if all angles are equal. 
    // If the angles are uniformly distributed on the circle, then the resulting radius will be 0, and there is no circular mean.
    template <typename T>
    class CircularMean
    {
    public:
      CircularMean()
      {
        clear();
      }

      //! Clear sample.
      void
      clear(void)
      {
        m_sin_accum = 0;
        m_cos_accum = 0;
        m_sample_size = 0;
      }

      //! Update sample with new value in radians.
      //! @return mean value.
      T
      update(const T& value)
      {
        m_sin_accum += std::sin(Angles::normalizeRadian(value));
        m_cos_accum += std::cos(Angles::normalizeRadian(value));
        m_sample_size++;
        
        return mean();
      }

      //! Extract mean value of the sample.
      //! @return mean value.
      T
      mean(void)
      {
        if (sampleSize())
          return atan2(m_sin_accum / (double)sampleSize(), m_cos_accum / (double)sampleSize());
        else
          return 0;
      }

      //! Radius of unit angle mean. This may work as standard deviation.
      //! @return Radius. Radius will be 1 if all angles are equal. Uniformly distributed angles will give 0.
      T
      radius(void)
      {
        T m_sin_accum_2 = (m_sin_accum / (double)sampleSize()) * (m_sin_accum / (double)sampleSize());
        T m_cos_accum_2 = (m_cos_accum / (double)sampleSize()) * (m_cos_accum / (double)sampleSize());

        if (sampleSize())
          return std::sqrt(m_sin_accum_2 + m_cos_accum_2);
        else
          return 0;
      }

      //! Know size of sample.
      //! @return size of the sample.
      unsigned
      sampleSize(void)
      {
        return m_sample_size;
      }

    private:
      //! Sin Accumulator.
      T m_sin_accum;
      //! Cos Accumulator.
      T m_cos_accum;
      //! Sample size.
      unsigned m_sample_size;
    };
  }
}

#endif
