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

#ifndef DUNE_PLANS_TIME_PROFILE_HPP_INCLUDED_
#define DUNE_PLANS_TIME_PROFILE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers.hpp>
#include <DUNE/Math.hpp>
#include <DUNE/Control.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Plans/SpeedModel.hpp>

namespace DUNE
{
  namespace Plans
  {
    //! Speed acquired by buoyancy
    static const float c_buoyancy_speed = 0.3f;
    //! Average amount of time it takes to get a gps fix
    static const float c_fix_time = 7.0f;
    //! Typical pitch value for elevator maneuver
    static const float c_rated_pitch = 0.2617993877991494f;

    // Export DLL Symbol.
    class DUNE_DLL_SYM TimeProfile;

    //! Utility class to estimate a plan's duration and speed profiles.
    class TimeProfile
    {
    public:
      struct SpeedProfile
      {
        SpeedProfile(float sp, uint8_t su, float t = 0.0):
          speed(sp),
          speed_units(su),
          time(t)
        { }

        template <typename Type>
        SpeedProfile(const Type* maneuver, float t = 0.0)
        {
          speed = maneuver->speed;
          speed_units = maneuver->speed_units;
          time = t;
        }

        ~SpeedProfile(void)
        { }

        void
        setTime(float t)
        {
          time = t;
        }

        //! Speed value
        float speed;
        //! Speed units
        uint8_t speed_units;
        //! Time of the profile
        float time;
      };

      struct Profile
      {
        //! Vector of Speed Profiles
        std::vector<SpeedProfile> speeds;
        //! Vector of Durations
        std::vector<float> durations;
      };

      //! Mapping between maneuver IDs and their profiles
      typedef std::map< std::string, Profile> ProfileMap;
      //! Const iterator for this map
      typedef ProfileMap::const_iterator const_iterator;

      //! Constructor
      TimeProfile(const SpeedModel* speed_model):
        m_accum_dur(NULL),
        m_speed_model(speed_model),
        m_speed_vec(NULL),
        m_valid_model(true),
        m_finite_duration(false)
      {
        if (m_speed_model == NULL)
          m_valid_model = false;
      };

      //! Destructor
      ~TimeProfile(void)
      {
        Memory::clear(m_accum_dur);
        Memory::clear(m_speed_vec);
      }

      //! Parse plan duration and speeds from vector of plan maneuver nodes
      //! @param[in] nodes vector of plan maneuver nodes
      //! @param[in] state current estimated state
      void
      parse(const std::vector<IMC::PlanManeuver*>& nodes, const IMC::EstimatedState* state);

      //! Clear the vector
      inline void
      clear(void)
      {
        m_profiles.clear();
        m_last_valid.clear();
      }

      //! First position of the vector
      //! @return const iterator to begin()
      inline const_iterator
      begin(void) const
      {
        return m_profiles.begin();
      }

      //! Last position of the vector
      //! @return const iterator to end()
      inline const_iterator
      end(void) const
      {
        return m_profiles.end();
      }

      //! Size of the map
      //! @return size of the map
      inline size_t
      size(void) const
      {
        return m_profiles.size();
      }

      //! Find function for the map
      //! @param[in] str map's key of object to find
      //! @return const iterator to the map's object
      inline const_iterator
      find(const std::string& str) const
      {
        return m_profiles.find(str);
      }

      //! ID of last maneuver with a valid duration
      //! @return ID string of the maneuver
      inline const std::string&
      lastValid(void) const
      {
        return m_last_valid;
      }

      //! Has finite duration
      //! @return true has finite duration, false otherwise
      inline bool
      isDurationFinite(void) const
      {
        return m_finite_duration;
      }

    private:
      //! Struct of bathymetric info for a certain location
      struct BathymetricInfo
      {
        //! Water column depth
        float depth;
        //! True if the measure is valid and can be used
        bool validity;
        //! Type of reference or reference axis
        uint8_t reference;
        //! Uncertainty of the measure in meters
        float uncertainty;

        BathymetricInfo(void):
          depth(0.0), validity(false), reference(0), uncertainty(0.0)
        { };
      };

      //! Simple position structure
      struct Position
      {
        //! Latitude
        double lat;
        //! Longitude
        double lon;
        //! Z reference
        float z;
        //! Z units
        uint8_t z_units;
        //! Bathymetric information
        BathymetricInfo binfo;
      };

      //! Accumulated durations
      struct AccumulatedDurations
      {
        //! Constructor
        //! @param[in] value last computed duration
        AccumulatedDurations(float value):
          last_duration(value)
        { };

        //! Add a maneuver's duration
        //! @param[in] value duration value
        void
        addDuration(float value)
        {
          vec.push_back(value + getLastDuration());
        }

        //! Get the last computed duration
        //! @return last computed duration
        float
        getLastDuration(void) const
        {
          if (!vec.size())
          {
            if (last_duration < 0.0)
              return 0.0;

            return last_duration;
          }

          return vec.back();
        }

        //! Get the vector size or number of durations
        //! @return size of vec
        size_t
        size(void) const
        {
          return vec.size();
        }

        //! Vector of durations
        std::vector<float> vec;
        //! Last duration
        float last_duration;
      };

      //! Find 2D distance between two positions
      //! @param[in] new_pos object where the new position info will be stored
      //! @param[in] last_pos last position to consider when computing duration
      //! @return distance computed
      inline float
      distance2D(const Position& new_pos, const Position& last_pos);

      //! Compute distance and move Position to new one
      //! @param[in] new_pos object where the new position info will be stored
      //! @param[in] last_pos last position to consider when computing duration
      //! @return distance computed
      float
      distance3D(const Position& new_pos, const Position& last_pos);

      //! Parse the simplest maneuvers
      //! @param[in] pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @return duration in seconds, -1 if unable to compute
      template <typename Type>
      float
      parseSimple(const Type* maneuver, Position& last_pos);

      //! Convert speed to meters per second
      //! @param[in] pointer to maneuver message
      //! @return converted speed
      template <typename Type>
      float
      convertSpeed(const Type* maneuver);

      //! Compensate travelled distance with path control time factor
      //! @param[in] dist travelled distance to compensate
      //! @param[in] speed speed to compensate for
      //! @return compensated travelled distance
      float
      compensate(float distance, float speed);

      //! Compute the offset in z the axis between two waypoints/positions
      //! @param[in] new_pos next position in line
      //! @param[in] last_pos current position
      //! @return offset in the z axis in meters
      float
      computeZOffset(const Position& new_pos, const Position& last_pos);

      //! Extract bathymetry information
      //! @param[in] list string with the list of bathymetries
      //! @param[in] pos position struct where bathymetry data will be stored
      void
      extractBathymetry(const std::string& str, Position& pos);

      //! Convert maneuver to Position struct
      //! @param[in] maneuver to extract position from
      //! @param[out] pos extracted position information
      template <typename Type>
      void
      extractPosition(const Type* maneuver, Position& pos);

      //! Convert Elevator maneuver to Position struct
      //! @param[in] maneuver to extract position from
      //! @param[out] pos extracted position information
      void
      extractPosition(const IMC::Elevator* maneuver, Position& pos);

      //! Convert PopUp maneuver to Position struct
      //! @param[in] maneuver to extract position from
      //! @param[out] pos extracted position information
      void
      extractPosition(const IMC::PopUp* maneuver, Position& pos);

      //! Convert EstimatedState to Position struct
      //! @param[in] maneuver to extract position from
      //! @param[out] pos extracted position information
      void
      extractPosition(const IMC::EstimatedState* state, Position& pos);

      //! Parse a Goto maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @return true if parse successfully, false otherwise
      bool
      parse(const IMC::Goto* maneuver, Position& last_pos)
      {
        float value = parseSimple(maneuver, last_pos);
        if (value < 0.0)
          return false;

        m_accum_dur->addDuration(value);
        return true;
      };

      //! Parse a StationKeeping maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @return true if parse successfully, false otherwise
      bool
      parse(const IMC::StationKeeping* maneuver, Position& last_pos)
      {
        if (!maneuver->duration)
          return false;

        float value = parseSimple(maneuver, last_pos);

        if (value < 0.0)
          return false;

        // Update speed profile
        m_speed_vec->push_back(SpeedProfile(0.0, 0, maneuver->duration));

        m_accum_dur->addDuration(value + maneuver->duration);
        return true;
      };

      //! Parse a Loiter maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @return true if parse successfully, false otherwise
      bool
      parse(const IMC::Loiter* maneuver, Position& last_pos)
      {
        if (!maneuver->duration)
          return false;

        float value = parseSimple(maneuver, last_pos);

        if (value < 0.0)
          return false;

        // Update speed profile
        m_speed_vec->push_back(SpeedProfile(maneuver, maneuver->duration));

        m_accum_dur->addDuration(value + maneuver->duration);
        return true;
      };

      //! Parse a FollowPath maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @return true if parse successfully, false otherwise
      bool
      parse(const IMC::FollowPath* maneuver, Position& last_pos);

      //! Parse a Rows maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @return true if parse successfully, false otherwise
      bool
      parse(const IMC::Rows* maneuver, Position& last_pos);

      //! Parse a YoYo maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @return true if parse successfully, false otherwise
      bool
      parse(const IMC::YoYo* maneuver, Position& last_pos);

      //! Parse an Elevator maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @return true if parse successfully, false otherwise
      bool
      parse(const IMC::Elevator* maneuver, Position& last_pos);

      //! Parse a PopUp maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @return true if parse successfully, false otherwise
      bool
      parse(const IMC::PopUp* maneuver, Position& last_pos);

      //! Parse a Compass Calibration maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @return true if parse successfully, false otherwise
      bool
      parse(const IMC::CompassCalibration* maneuver, Position& last_pos)
      {
        if (!maneuver->duration)
          return false;

        float value = parseSimple(maneuver, last_pos);

        if (value < 0.0)
          return false;

        // Update speed profile
        m_speed_vec->push_back(SpeedProfile(maneuver, maneuver->duration));

        m_accum_dur->addDuration(value + maneuver->duration);
        return true;
      }

      //! Map of maneuvers to profiles
      ProfileMap m_profiles;
      //! Vector of accumulated durations
      AccumulatedDurations* m_accum_dur;
      //! Pointer to model for speed conversion
      const Plans::SpeedModel* m_speed_model;
      //! Pointer to vector of speed profiles
      std::vector<SpeedProfile>* m_speed_vec;
      //! ID of last maneuver with a valid duration
      std::string m_last_valid;
      //! Valid speed model
      bool m_valid_model;
      //! Has finite duration
      bool m_finite_duration;
    };
  }
}

#endif
