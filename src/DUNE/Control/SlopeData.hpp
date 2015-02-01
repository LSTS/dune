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

#ifndef DUNE_CONTROL_SLOPE_DATA_HPP_INCLUDED_
#define DUNE_CONTROL_SLOPE_DATA_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Math.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Coordinates/General.hpp>
#include <DUNE/Coordinates/WGS84.hpp>

using namespace DUNE::Coordinates;
using namespace DUNE::Math;

//! Distance tolerance to slope's top
static const float c_dist_tol = 2.0f;
//! Number of samples for slope top distance
static const int c_stdist_samples = 5;
//! Maximum range to consider when checking validity
static const float c_max_range = 15.0f;
//! Decay factor for slope when forward range is too high
static const float c_decay_factor = 0.6f;
//! Tolerance for assuming the echoes come from the surface
static const float c_surface_tol = 5.0f;

namespace DUNE
{
  namespace Control
  {
    class SlopeData
    {
    public:
      //! Constructor
      //! @param[in] fsamples number of samples for forward range moving average
      //! @param[in] min_range minimum admissible forward range for bottom tracking
      //! @param[in] safe_pitch max admissible pitch angle to perform bottom tracking
      //! @param[in] slope_hyst slope angle hysteresis value for safeness detection
      SlopeData(unsigned fsamples, float min_range, float safe_pitch, float slope_hyst):
        m_frange(NULL),
        m_min_range(min_range),
        m_safe_pitch(safe_pitch),
        m_fsamples(fsamples),
        m_slope_hyst(slope_hyst),
        m_too_steep(false),
        m_sonar_conf(false)
      { };

      //! Deconstructor
      ~SlopeData(void)
      {
        Memory::clear(m_frange);
      };

      //! Reset the object
      void
      reset(void)
      {
        Memory::clear(m_frange);

        m_last_slope = 0.0;
        m_curr_slope = 0.0;

        m_sonar_conf = false;

        m_slope_top.reset();
      }

      //! Consume a Distance message
      //! @param[in] msg sonar distance message
      //! @param[in] state estimatedstate message
      //! @param[in] cparcel control parcel message
      void
      onDistance(const IMC::Distance* msg, const IMC::EstimatedState& state, IMC::ControlParcel& cparcel)
      {
        if (!m_sonar_conf && msg->location.size())
        {
          // check if it is an echo sounder and pointing forward
          // checking first in the list only
          if ((std::fabs((*msg->location.begin())->psi) < 0.1) &&
              (std::fabs((*msg->location.begin())->theta) < 0.1) &&
              msg->beam_config.size())
          {
            m_beam_width = (*msg->beam_config.begin())->beam_width;
            m_sonar_conf = true;
            m_sonar_entity = msg->getSourceEntity();

            if (msg->validity == IMC::Distance::DV_VALID)
              update(msg->value, state, cparcel);
          }
        }
        else if ((m_sonar_entity == msg->getSourceEntity()) &&
                 (msg->validity == IMC::Distance::DV_VALID))
        {
          update(msg->value, state, cparcel);
        }
      }

      //! Update slope top
      //! @param[in] state estimatedstate message
      //! @return distance to slope's top
      inline float
      updateSlopeTop(const IMC::EstimatedState& state)
      {
        if (!isRangeValid())
          return -1.0;

        return m_slope_top.update(state, m_frange->mean());
      }

      //! Get forward range
      //! @return forward range
      inline float
      getFRange(void) const
      {
        if (!isRangeValid())
          return c_max_range;

        return m_frange->mean();
      }

      //! Get current slope angle
      //! @return current slope angle
      inline float
      getSlope(void) const
      {
        return m_curr_slope;
      }

      //! Get distance to slope top
      //! @return current distance to slope top
      inline float
      getDistanceToSlope(void) const
      {
        if (m_slope_top.dist == NULL)
          return -1.0;

        return m_slope_top.dist->mean();
      }

      //! Test if forward range is too low
      //! @return true if forward range is low
      inline bool
      isRangeLow(void) const
      {
        if (!isRangeValid())
          return false;

        return m_frange->mean() < m_min_range;
      }

      //! Test if slope is too steep
      //! @return true if slope is too steep
      inline bool
      isTooSteep(void)
      {
        if (!isRangeValid())
          return false;

        if (m_curr_slope > m_safe_pitch)
          m_too_steep = true;
        else if (m_curr_slope < m_safe_pitch - m_slope_hyst)
          m_too_steep = false;
        // else return last value

        return m_too_steep;
      }

      //! Test if top is no longer an issue
      //! check if distance to slope top is increasing
      //! of if distance to slope top is very short
      //! @return true if cleared
      inline bool
      isTopCleared(void) const
      {
        if (m_slope_top.dist == NULL)
          return true;

        return (m_slope_top.trend >= c_stdist_samples) || (m_slope_top.dist->mean() < c_dist_tol);
      }

      //! Test if forward range could be the surface
      //! @param[in] state EstimatedState info
      //! @return true if the reading is probably the surface
      bool
      isSurface(const IMC::EstimatedState& state) const
      {
        if (!isRangeValid())
          return false;

        if (m_frange->mean() >= c_surface_tol)
          return false; // Could be surface, but we dont care

        float upper_end;
        upper_end = m_frange->mean() * (float)std::sin(state.theta + m_beam_width / 2.0);

        return (state.depth - upper_end < 0.0);
      }

      //! Test if slope is increasing
      //! @return true if slope is increasing
      inline bool
      isSlopeIncreasing(void) const
      {
        if (!isRangeValid())
          return false;

        return m_curr_slope > m_last_slope;
      }

      //! Flag slope top as invalid
      inline void
      renderSlopeInvalid(void)
      {
        m_slope_top.valid = false;
      }

    private:
      //! Test if forward range is valid
      //! @return true if range is valid and can be used
      inline bool
      isRangeValid(void) const
      {
        return (m_frange != NULL);
      }

      //! Update tracking data.
      //! @param[in] value new measurement to update filter.
      //! @param[in] state EstimatedState info
      //! @param[out] cparcel control parcel message for debug
      void
      update(float value, const IMC::EstimatedState& state, IMC::ControlParcel& cparcel)
      {
        if (m_frange == NULL)
          m_frange = new MovingAverage<float>(m_fsamples);

        double frange = m_frange->update(value);
        m_last_slope = m_curr_slope;

        if (frange > c_max_range)
        {
          m_curr_slope *= c_decay_factor;
        }
        else
        {
          // bottom range is not exactly the same as altitude due to pitch angle
          float brange = state.alt / (float)std::cos(state.theta);
          float z = - (float)frange * (float)std::sin(state.theta) - state.alt;
          float x = (float)(frange * std::cos(state.theta) - brange * std::sin(state.theta));
          m_curr_slope = - (float)std::atan2(z, x);
        }

        // debug
        cparcel.p = (float)frange;
        cparcel.i = (float)Angles::degrees(m_curr_slope);
        cparcel.setTimeStamp();
      };

      //! Slope top data.
      struct SlopeTop
      {
        //! Latitude of coord.
        double lat;
        //! Longitude of coord.
        double lon;
        //! Distance to slope top.
        MovingAverage<float>* dist;
        //! Counter to assess increasing or decreasing trend.
        int trend;
        //! Validity.
        bool valid;

        SlopeTop(void) : dist(NULL)
        { };

        ~SlopeTop(void)
        {
          Memory::clear(dist);
        };

        //! Reset this structure
        void
        reset(void)
        {
          if (dist != NULL)
            dist->clear();

          trend = 0;
          valid = false;
        }

        //! Compute the top of the slope.
        //! @param[in] state EstimatedState info
        //! @param[in] forward_range current value of forward range
        //! @return current distance to slope top
        float
        update(const IMC::EstimatedState& state, float forward_range)
        {
          double slat, slon;
          toWGS84(state, slat, slon);

          bool update_trend = true;

          if (dist == NULL)
          {
            dist = new MovingAverage<float>(c_stdist_samples);
            update_trend = false;
          }

          if (!valid)
          {
            lat = slat;
            lon = slon;

            // Actual horizontal forward range
            double horz_range = forward_range * std::cos(state.theta);

            WGS84::displace(horz_range * std::cos(state.psi),
                            horz_range * std::sin(state.psi),
                            &lat, &lon);

            dist->clear();
            trend = 0;
            update_trend = false;
          }

          // dummy variable bearing
          float bearing, range;
          WGS84::getNEBearingAndRange(slat, slon, lat, lon,
                                      &bearing, &range);

          float prev = dist->mean();
          dist->update(range);

          if (update_trend)
          {
            if (prev < dist->mean())
              ++trend;
            else
              --trend;
          }

          valid = true;

          return dist->mean();
        }
      };

      //! Forward range moving average.
      MovingAverage<float>* m_frange;
      //! Minimum range admissible
      const float m_min_range;
      //! Safe pitch angle considered to track bottom
      const float m_safe_pitch;
      //! Samples for the moving average
      const unsigned m_fsamples;
      //! Slope hysteresis value
      const float m_slope_hyst;
      //! Coordinate of the top of the slope.
      SlopeTop m_slope_top;
      //! Current slope angle.
      float m_curr_slope;
      //! Previous slope angle.
      float m_last_slope;
      //! True if last time we checked slope was too steep
      bool m_too_steep;
      //! True if sonar has been configured
      bool m_sonar_conf;
      //! Sonar entity.
      unsigned m_sonar_entity;
      //! Echo sounder beam width.
      float m_beam_width;
    };
  }
}

#endif
