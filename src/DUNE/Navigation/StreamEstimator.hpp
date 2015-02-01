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
    //! Number of samples.
    static const unsigned c_samples = 10;
    //! Time required with propeller stopped.
    static const float c_time_no_rpm = 20.0;
    //! Time between samples.
    static const float c_sampler = 10.0;
    //! Sampler factor.
    static const float c_samp_f = 1.6;

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
        m_avg_north(c_samples),
        m_avg_east(c_samples),
        m_estimate(false)
      {
        m_timer_rpm.setTop(c_time_no_rpm);
        m_timer_gps.setTop(c_sampler);
      }

      //! Received GpsFix estimate.
      //! @param[in] msg new GpsFix.
      //! @param[out] stream Estimated stream velocity.
      bool
      consume(const IMC::GpsFix* msg, IMC::EstimatedStreamVelocity& stream)
      {
        if (!m_estimate)
        {
          if (m_timer_rpm.overflow())
            m_estimate = true;
          else
            return false;
        }

        bool estimated = false;

        if (m_timer_gps.overflow())
        {
          m_timer_gps.reset();

          // Only if last fix is recent.
          if (msg->getTimeStamp() - m_fix.getTimeStamp() < c_sampler * c_samp_f)
          {
            // North-East-Down displacement.
            double n, e;
            Coordinates::WGS84::displacement(m_fix.lat, m_fix.lon, 0.0,
                                             msg->lat, msg->lon, 0.0,
                                             &n, &e);

            double time = msg->getTimeStamp() - m_fix.getTimeStamp();

            double x = n / time;
            double y = e / time;

            stream.x = m_avg_north.update(x);
            stream.y = m_avg_east.update(y);

            // Signal estimated only when enough samples are available.
            if (m_avg_north.sampleSize() >= c_samples / 2)
              estimated = true;
          }
          else
          {
            m_avg_north.clear();
            m_avg_east.clear();
          }

          m_fix = *msg;
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

        m_avg_north.clear();
        m_avg_east.clear();
        m_timer_rpm.reset();
        m_estimate = false;
      }

    private:
      //! Time with propeller stopped.
      Time::Counter<double> m_timer_rpm;
      //! Time between accepted fixes.
      Time::Counter<double> m_timer_gps;
      //! Moving Average for North component.
      Math::MovingAverage<double> m_avg_north;
      //! Moving Average for East component.
      Math::MovingAverage<double> m_avg_east;
      //! GPS fix.
      IMC::GpsFix m_fix;
      //! Estimate stream
      bool m_estimate;
    };
  }
}

#endif
