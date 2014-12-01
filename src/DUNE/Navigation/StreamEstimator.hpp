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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_NAVIGATION_STREAM_ESTIMATOR_HPP_INCLUDED_
#define DUNE_NAVIGATION_STREAM_ESTIMATOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/Math/MovingAverage.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Time/Counter.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! %StreamEstimator is responsible to estimate the stream
    //! of the liquid fluid surrounding a underwater or surface
    //! vehicle.
    //!
    //! @author José Braga.
    class StreamEstimator
    {
    public:
      //! Constructor.
      StreamEstimator(void):
        m_avg_speed(NULL),
        m_avg_yaw(NULL),
        m_estimate(false)
      {
        m_avg_speed = new Math::MovingAverage<double>(5);
        m_avg_yaw = new Math::MovingAverage<double>(5);

        m_timer_rpm.setTop(5.0);
        m_timer_state.setTop(3.0);
      }

      //! Destructor.
      ~StreamEstimator(void)
      {
        Memory::clear(m_avg_speed);
        Memory::clear(m_avg_yaw);
      }

      //! Received EstimatedState estimate.
      //! @param[in] msg new EstimatedState.
      //! @param[out] stream Estimated stream velocity.
      bool
      consume(const IMC::EstimatedState* msg, IMC::EstimatedStreamVelocity& stream)
      {
        if (!m_estimate)
        {
          if (m_timer_rpm.overflow())
            m_estimate = true;
          else
            return false;
        }

        bool estimated = false;

        if (m_timer_state.overflow())
        {
          m_timer_state.reset();

          // Only if last state is recent.
          if (msg->getTimeStamp() - m_state.getTimeStamp() < 5.0)
          {
            // New position.
            double lat, lon;
            Coordinates::toWGS84(*msg, lat, lon);

            // Reference.
            double rlat, rlon;
            Coordinates::toWGS84(m_state, rlat, rlon);

            // North-East-Down displacement.
            double n, e;
            Coordinates::WGS84::displacement(rlat, rlon, 0.0,
                                             lat, lon, 0.0,
                                             &n, &e);

            double time = msg->getTimeStamp() - m_state.getTimeStamp();

            double x = n / time;
            double y = e / time;

            double speed, angle;
            Coordinates::toPolar(x, y, &angle, &speed);

            m_avg_speed->update(speed);
            m_avg_yaw->update(angle);

            stream.x = m_avg_speed->mean() * std::cos(m_avg_yaw->mean());
            stream.y = m_avg_speed->mean() * std::sin(m_avg_yaw->mean());
            estimated = true;
          }
          else
          {
            m_avg_speed->clear();
            m_avg_yaw->clear();
          }

          m_state = *msg;
        }

        return estimated;
      }

      //! Received new RPM reading.
      //! @param[in] msg new Rpm.
      void
      consume(const IMC::Rpm* msg)
      {
        if (msg->value == 0)
          return;

        m_avg_speed->clear();
        m_avg_yaw->clear();
        m_timer_rpm.reset();
        m_estimate = false;
      }

    private:
      //! Time with propeller stopped.
      Time::Counter<double> m_timer_rpm;
      //! Time with propeller stopped.
      Time::Counter<double> m_timer_state;
      //! Moving Average for speed
      Math::MovingAverage<double>* m_avg_speed;
      //! Moving Average for orientation.
      Math::MovingAverage<double>* m_avg_yaw;
      //! Estimated State.
      IMC::EstimatedState m_state;
      //! Estimate stream
      bool m_estimate;
    };
  }
}

#endif
