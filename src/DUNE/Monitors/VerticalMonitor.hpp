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

#ifndef DUNE_MONITORS_VERTICAL_MONITOR_HPP_INCLUDED_
#define DUNE_MONITORS_VERTICAL_MONITOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/Math/MovingAverage.hpp>
#include <DUNE/Time/Counter.hpp>
#include <DUNE/Memory.hpp>

namespace DUNE
{
  namespace Monitors
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM VerticalMonitor;

    //! Number of samples for vertical monitor moving average in elevator
    static const unsigned c_vsamples = 10;

    //! %VerticalMonitor monitors the vehicle's progress in the z direction
    //! @author Pedro Calado.
    class VerticalMonitor
    {
    public:
      //! Constructor.
      //! @param[in] timeout amount of time before triggering condition as met
      //! @param[in] min_speed minimum speed for triggering condition
      VerticalMonitor(float timeout, float min_speed):
        m_min_speed(min_speed),
        m_slow_progress(false),
        m_mave(NULL)
      {
        m_timer.setTop(timeout);
        m_mave = new Math::MovingAverage<float>(c_vsamples);
      }

      ~VerticalMonitor(void)
      {
        Memory::clear(m_mave);
      }

      //! Test if progress is slow
      //! @param[in] z_speed current vz speed
      //! @return true if progress is slow
      bool
      isProgressSlow(float z_speed)
      {
        if (m_min_speed > m_mave->update(z_speed))
        {
          if (m_slow_progress)
          {
            return m_timer.overflow();
          }
          else
          {
            m_slow_progress = true;
            m_timer.reset();
          }
        }
        else
        {
          m_slow_progress = false;
        }

        return false;
      }

    private:
      //! Timer counter for timeout
      Time::Counter<float> m_timer;
      //! Minimum speed
      float m_min_speed;
      //! Progress below minimum
      bool m_slow_progress;
      //! Moving average for progress samples
      Math::MovingAverage<float>* m_mave;
    };
  }
}

#endif
