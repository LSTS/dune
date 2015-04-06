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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_NAVIGATION_BEAM_FILTER_HPP_INCLUDED_
#define DUNE_NAVIGATION_BEAM_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! Maximum distance value to check dropout.
    static const float c_max = 1.0;
    //! Minimum distance for previous measurement.
    static const float c_min = 3.0;

    //! %BeamFilter is responsible to gather beam
    //! distance values from a DVL unit and compute
    //! one local distance output.
    //!
    //! @author José Braga
    class BeamFilter
    {
    public:
      //! Constructor.
      BeamFilter(void)
      {
        m_size = 4;
        clear();
      }

      //! Constructor.
      BeamFilter(size_t size)
      {
        m_size = size;
        clear();
      }

      //! Clear data.
      void
      clear(void)
      {
        m_beams.resizeAndFill(1, m_size, 0.0);
        m_prev = 0;
      }

      //! Update beam index with new measurement.
      //! @param[in] index beam index.
      //! @param[in] msg distance measurement.
      void
      updateBeam(size_t index, const IMC::Distance& msg)
      {
        if (index >= m_size)
          return;

        m_beams(index) = msg.value;
      }

      //! Get distance using current beam data.
      //! @return distance.
      float
      getDistance(void)
      {
        float dist = (float)max(m_beams);

        if (dist < c_max)
        {
          if (m_prev > c_min)
          {
            float aux = dist;
            dist = m_prev;
            m_prev = aux;
            return dist;
          }
        }

        m_prev = dist;
        return dist;
      }

    private:
      //! Number of DVL beams.
      size_t m_size;
      //! Data matrix.
      Math::Matrix m_beams;
      //! Previous distance value.
      float m_prev;
    };
  }
}

#endif
