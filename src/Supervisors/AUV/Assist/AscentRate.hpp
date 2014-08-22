//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef SUPERVISORS_AUV_ASSIST_ASCENTRATE_HPP_INCLUDED_
#define SUPERVISORS_AUV_ASSIST_ASCENTRATE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math.hpp>
#include <DUNE/Time.hpp>

namespace Supervisors
{
  namespace AUV
  {
    namespace Assist
    {
      using DUNE_NAMESPACES;

      class AscentRate
      {
      public:
        //! Constructor
        //! @param[in] window_size number of samples in the moving average
        //! @param[in] period interval of time between samples
        AscentRate(unsigned window_size, float period):
          m_timer(period)
        {
          m_avg = new Math::MovingAverage<float>(window_size);
        }

        ~AscentRate(void)
        {
          delete m_avg;
        }

        //! Update the ascent rate computation
        //! @param[in] vz speed in the z axis from EstimatedState message
        //! @return newly computed value for the ascent rate
        float
        update(float vz)
        {
          if (!m_timer.overflow())
            return mean();

          return m_avg->update(vz);
        }

        //! Output the mean ascent rate
        //! @return most recently computed value for the ascent rate
        float
        mean(void) const
        {
          return m_avg->mean();
        }

      private:
        //! Moving average for the ascent rate
        Math::MovingAverage<float>* m_avg;
        //! Counter for the time between updates
        Time::Counter<float> m_timer;
      };
    }
  }
}
#endif
