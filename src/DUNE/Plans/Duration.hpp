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

#ifndef DUNE_PLANS_DURATION_HPP_INCLUDED_
#define DUNE_PLANS_DURATION_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers.hpp>
#include <DUNE/Math.hpp>
#include <DUNE/Control.hpp>

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
    class DUNE_DLL_SYM Duration;

    //! Utility class to estimate a plan's duration.
    class Duration
    {
    public:
      //! Mapping between maneuver IDs and point durations
      typedef std::map< std::string, std::vector<float> > ManeuverDuration;

      //! Conversion factors for rpm and actuation percent
      struct SpeedConversion
      {
        //! From RPM to meters per second
        float rpm_factor;
        //! From Actuation to meters per second
        float act_factor;
      };

      //! Parse plan duration from plan specification
      //! @param[in] nodes vector of plan maneuver nodes
      //! @param[in] state current estimated state
      //! @param[out] man_durations map of maneuver ids to point durations
      //! @param[in] speed_conv speed conversion factors
      //! @return iterator to last computed maneuver, returns end() if unable to compute
      static ManeuverDuration::const_iterator
      parse(const std::vector<IMC::PlanManeuver*>& nodes , const IMC::EstimatedState* state,
            ManeuverDuration& man_durations, const SpeedConversion& speed_conv);

      //! Parse plan duration from plan specification
      //! @param[in] nodes vector of plan maneuver nodes
      //! @param[in] state current estimated state
      //! @param[out] man_durations map of maneuver ids to point durations
      //! @return iterator to last computed maneuver, returns end() if unable to compute
      static ManeuverDuration::const_iterator
      parse(const std::vector<IMC::PlanManeuver*>& nodes , const IMC::EstimatedState* state,
            ManeuverDuration& man_durations)
      {
        SpeedConversion speed_conv;
        speed_conv.rpm_factor = 0.0;
        speed_conv.act_factor = 0.0;

        return parse(nodes, state, man_durations, speed_conv);
      };

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

      //! Find 2D distance between two positions
      //! @param[in] new_pos object where the new position info will be stored
      //! @param[in] last_pos last position to consider when computing duration
      //! @return distance computed
      static inline float
      distance2D(const Position& new_pos, const Position& last_pos);

      //! Compute distance and move Position to new one
      //! @param[in] new_pos object where the new position info will be stored
      //! @param[in] last_pos last position to consider when computing duration
      //! @return distance computed
      static float
      distance3D(const Position& new_pos, const Position& last_pos);

      //! Parse the simplest maneuvers
      //! @param[in] pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      template <typename Type>
      static float
      parseSimple(const Type* maneuver, Position& last_pos, float last_dur,
                  std::vector<float>& durations, const SpeedConversion& speed_conv);

      //! Convert speed to meters per second
      //! @param[in] pointer to maneuver message
      //! @param[in] conv speed conversion factors
      //! @return converted speed
      template <typename Type>
      static float
      convertSpeed(const Type* maneuver, const SpeedConversion& conv);

      //! Compensate travelled distance with path control time factor
      //! @param[in] dist travelled distance to compensate
      //! @return compensated travelled distance
      static float
      compensate(float distance, float speed);

      //! Compute the offset in z the axis between two waypoints/positions
      //! @param[in] new_pos next position in line
      //! @param[in] last_pos current position
      //! @return offset in the z axis in meters
      static float
      computeZOffset(const Position& new_pos, const Position& last_pos);

      //! Extract bathymetry information
      //! @param[in] list string with the list of bathymetries
      //! @param[in] pos position struct where bathymetry data will be stored
      static void
      extractBathymetry(const std::string& str, Position& pos);

      //! Convert maneuver to Position struct
      //! @param[in] maneuver to extract position from
      //! @param[out] pos extracted position information
      template <typename Type>
      static void
      extractPosition(const Type* maneuver, Position& pos);

      //! Convert Elevator maneuver to Position struct
      //! @param[in] maneuver to extract position from
      //! @param[out] pos extracted position information
      static void
      extractPosition(const IMC::Elevator* maneuver, Position& pos);

      //! Convert PopUp maneuver to Position struct
      //! @param[in] maneuver to extract position from
      //! @param[out] pos extracted position information
      static void
      extractPosition(const IMC::PopUp* maneuver, Position& pos);

      //! Convert EstimatedState to Position struct
      //! @param[in] maneuver to extract position from
      //! @param[out] pos extracted position information
      static void
      extractPosition(const IMC::EstimatedState* state, Position& pos);

      //! Parse a Goto maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::Goto* maneuver, Position& last_pos, float last_dur,
            std::vector<float>& durations, const SpeedConversion& speed_conv)
      {
        return parseSimple(maneuver, last_pos, last_dur, durations, speed_conv);
      };

      //! Parse a StationKeeping maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::StationKeeping* maneuver, Position& last_pos, float last_dur,
            std::vector<float>& durations, const SpeedConversion& speed_conv)
      {
        if (!maneuver->duration)
          return -1.0;

        return parseSimple(maneuver, last_pos, last_dur + maneuver->duration, durations, speed_conv);
      };

      //! Parse a Loiter maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::Loiter* maneuver, Position& last_pos, float last_dur,
            std::vector<float>& durations, const SpeedConversion& speed_conv)
      {
        if (!maneuver->duration)
          return -1.0;

        return parseSimple(maneuver, last_pos, last_dur + maneuver->duration, durations, speed_conv);
      };

      //! Parse a FollowPath maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::FollowPath* maneuver, Position& last_pos, float last_dur,
            std::vector<float>& durations, const SpeedConversion& speed_conv);

      //! Parse a Rows maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::Rows* maneuver, Position& last_pos, float last_dur,
            std::vector<float>& durations, const SpeedConversion& speed_conv);

      //! Parse a YoYo maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::YoYo* maneuver, Position& last_pos, float last_dur,
            std::vector<float>& durations, const SpeedConversion& speed_conv);

      //! Parse an Elevator maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::Elevator* maneuver, Position& last_pos, float last_dur,
            std::vector<float>& durations, const SpeedConversion& speed_conv);

      //! Parse a PopUp maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::PopUp* maneuver, Position& last_pos, float last_dur,
            std::vector<float>& durations, const SpeedConversion& speed_conv);

      //! Parse a Compass Calibration maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::CompassCalibration* maneuver, Position& last_pos, float last_dur,
            std::vector<float>& durations, const SpeedConversion& speed_conv)
      {
        if (!maneuver->duration)
          return -1.0;

        return parseSimple(maneuver, last_pos, last_dur + maneuver->duration, durations, speed_conv);
      }
    };
  }
}

#endif
