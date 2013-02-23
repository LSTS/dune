//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: DelayedTrigger.hpp 12731 2013-01-25 11:30:03Z pdcalado           $:*
//***************************************************************************

#ifndef DUNE_MONITORS_DELAYED_TRIGGER_HPP_INCLUDED_
#define DUNE_MONITORS_DELAYED_TRIGGER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math.hpp>
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
