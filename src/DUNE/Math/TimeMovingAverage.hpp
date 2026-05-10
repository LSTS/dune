//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#ifndef DUNE_MATH_TIME_MOVING_AVERAGE_HPP_INCLUDED_
#define DUNE_MATH_TIME_MOVING_AVERAGE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <cmath>
#include <queue>

namespace DUNE
{
  namespace Math
  {
    template <typename T>
    class Accumulator
    {
    public:
      Accumulator(void) = default;

      virtual ~Accumulator() = default;

      virtual void
      add(T value) = 0;

      virtual void
      remove(T value) = 0;

      virtual T
      average(void) const = 0;
    };

    template <typename T>
    class LinearAccumulator : public Accumulator<T>
    {
    private:
      //! Accumulator.
      T m_accum;
      //! Sample size.
      unsigned m_sample_size;

    public:
      LinearAccumulator(void):
        m_accum(T(0)),
        m_sample_size(0)
      { }

      void
      add(T value) override
      {
        m_accum += value;
        m_sample_size++;
      }

      void
      remove(T value) override
      {
        m_accum -= value;
        m_sample_size--;
      }

      T
      average(void) const override
      {
        if (m_sample_size)
          return m_accum / (double)m_sample_size;
        else
          return T(0);
      }
    };

    template <typename T>
    class CircularAccumulator : public Accumulator<T>
    {
    private:
      //! Sin Accumulator.
      T m_sin_accum;
      //! Cos Accumulator.
      T m_cos_accum;
      //! Sample size.
      unsigned m_sample_size;

    public:
      CircularAccumulator(void):
        m_sin_accum(T(0)),
        m_cos_accum(T(0)),
        m_sample_size(0)
      { }

      void
      add(T value) override
      {
        m_sin_accum += std::sin(Angles::normalizeRadian(value));
        m_cos_accum += std::cos(Angles::normalizeRadian(value));
        m_sample_size++;
      }

      void
      remove(T value) override
      {
        if (m_sample_size == 0)
          return;

        m_sin_accum -= std::sin(Angles::normalizeRadian(value));
        m_cos_accum -= std::cos(Angles::normalizeRadian(value));
        m_sample_size--;
      }

      T
      average(void) const override
      {
        if (m_sample_size)
          return atan2(m_sin_accum / (double)m_sample_size, m_cos_accum / (double)m_sample_size);
        else
          return T(0);
      }
    };

    template <typename T>
    class TimeMovingAverage
    {
    private:
      //! Entry in the queue, consisting of a timestamp and a value.
      using Entry = std::pair<double, T>;
      //! Queue to store timestamped values.
      std::queue<Entry> m_queue;
      //! Accumulator for the values in the current window.
      std::unique_ptr<Accumulator<T>> m_accum;
      //! Size of the moving window in seconds.
      double m_window_size;

    public:
      TimeMovingAverage(double window_size, bool circular = false):
        m_window_size(window_size)
      {
        if (circular)
          m_accum = std::make_unique<CircularAccumulator<T>>();
        else
          m_accum = std::make_unique<LinearAccumulator<T>>();
      }

      void
      add(double timestamp, T value)
      {
        m_queue.push({timestamp, value});
        m_accum->add(value);

        while (!m_queue.empty() && m_queue.front().first < timestamp - m_window_size)
        {
          m_accum->remove(m_queue.front().second);
          m_queue.pop();
        }
      }

      T
      getAverage(void) const
      {
        if (m_queue.empty())
          return T(0);

        return m_accum->average();
      }

      void
      setWindow(double window_size)
      {
        m_window_size = window_size;
      }

      size_t
      size(void) const
      {
        return m_queue.size();
      }
    };
  }
}

#endif
