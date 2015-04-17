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

#ifndef DUNE_MONITORS_DELAYED_TRIGGER_HPP_INCLUDED_
#define DUNE_MONITORS_DELAYED_TRIGGER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Time/Clock.hpp>

namespace DUNE
{
  namespace Monitors
  {
    template <typename T>
    class DelayedTrigger
    {
    public:
      //! Constructor
      //! @param threshold limit over which a detection is supposed to occur
      //! @param time_delay maximum period of time the value can be over the threshold
      //! @param samples window size of the moving average used in the detection algorithm
      DelayedTrigger(const T& threshold, double time_delay = 0.0, unsigned samples = 1):
        m_threshold(threshold),
        m_time_delay(time_delay)
      {
        m_mov_avg = new Math::MovingAverage<T>(samples);
        m_over_value = false;
        m_time_over_thres = 0.0;
      }

      //! Destructor
      ~DelayedTrigger(void)
      {
        Memory::clear(m_mov_avg);
      }

      //! Update with a new measure and test if
      //! and false otherwise
      //! @param value new measure to take into account
      //! @return true if a detection occurred, false otherwise
      bool
      updateAndTest(const T& value)
      {
        T avg_value = m_mov_avg->update(value);

        if (!m_over_value && avg_value > m_threshold)
        {
          m_time_over_thres = Time::Clock::get();
          m_over_value = true;
        }

        if (m_over_value && avg_value < m_threshold)
          m_over_value = false;

        if (Time::Clock::get() - m_time_over_thres > m_time_delay && avg_value > m_threshold)
          return true;
        else
          return false;
      }

    private:
      //! Moving Average.
      Math::MovingAverage<T>* m_mov_avg;
      //! Upper Threshold Limit
      T m_threshold;
      //! Maximum period of time over the threshold limit
      double m_time_delay;
      //! Time passed over the threshold
      double m_time_over_thres;
      //! Is it over the threshold
      bool m_over_value;
    };
  }
}

#endif
