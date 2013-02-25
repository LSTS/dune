//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef DUNE_PLANS_PLANDURATION_HPP_INCLUDED_
#define DUNE_PLANS_PLANDURATION_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers.hpp>
#include <DUNE/Math.hpp>

namespace DUNE
{
  namespace Plans
  {
    //! Speed acquired by buoyancy
    static const float c_buoyancy_speed = 0.3;
    //! Average amount of time it takes to get a gps fix
    static const float c_fix_time = 7.0;
    //! Typical pitch value for elevator maneuver
    static const float c_rated_pitch = Math::Angles::radians(15.0);

    // Export DLL Symbol.
    class DUNE_DLL_SYM PlanDuration;

    //! Utility class to estimate a plan's duration.
    class PlanDuration
    {
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
      };

      //! Compute distance and move Position to new one
      //! @param[in] lat latitude of new position
      //! @param[in] lon longitude of new position
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @return distance computed
      static float
      distanceAndMove(double lat, double lon, Position& last_pos)
      {
        double value = Coordinates::WGS84::distance(lat, lon, 0.0,
                                                    last_pos.lat, last_pos.lon, 0.0);

        last_pos.lat = lat;
        last_pos.lon = lon;

        return value;
      };

      //! Parse the simplest maneuvers
      //! @param[in] pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      template <typename Type>
      static float
      parseSimple(const Type* maneuver, Position& last_pos,
                  float last_dur, std::vector<float>& durations)
      {
        if (maneuver->speed_units != IMC::SUNITS_METERS_PS ||
            maneuver->speed == 0.0)
          return -1.0;

        float value = distanceAndMove(maneuver->lat, maneuver->lon, last_pos);
        last_pos.z = maneuver->z;
        last_pos.z_units = maneuver->z_units;
        durations.push_back(value / maneuver->speed + last_dur);
        return durations[0];
      }

    public:
#ifdef DUNE_IMC_GOTO
      //! Parse a Goto maneuver
      //! @param[in] pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::Goto* maneuver, Position& last_pos,
            float last_dur, std::vector<float>& durations)
      {
        return parseSimple(maneuver, last_pos, last_dur, durations);
      };
#endif

#ifdef DUNE_IMC_STATIONKEEPING
      //! Parse a StationKeeping maneuver
      //! @param[in] pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::StationKeeping* maneuver, Position& last_pos,
            float last_dur, std::vector<float>& durations)
      {
        if (!maneuver->duration)
          return -1.0;

        return parseSimple(maneuver, last_pos, last_dur + maneuver->duration, durations);
      };
#endif

#ifdef DUNE_IMC_LOITER
      //! Parse a Loiter maneuver
      //! @param[in] pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::Loiter* maneuver, Position& last_pos,
            float last_dur, std::vector<float>& durations)
      {
        if (!maneuver->duration)
          return -1.0;

        return parseSimple(maneuver, last_pos, last_dur + maneuver->duration, durations);
      };
#endif

#ifdef DUNE_IMC_FOLLOWPATH
      //! Parse a FollowPath maneuver
      //! @param[in] pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::FollowPath* maneuver, Position& last_pos,
            float last_dur, std::vector<float>& durations)
      {
        if (maneuver->speed_units != IMC::SUNITS_METERS_PS ||
            maneuver->speed == 0.0)
          return -1.0;

        IMC::MessageList<IMC::PathPoint>::const_iterator itr = maneuver->points.begin();
        double total_duration = last_dur;

        // Iterate point list
        for (; itr != maneuver->points.end(); itr++)
        {
          if ((*itr) == NULL)
            continue;

          double wlat;
          double wlon;

          wlat = maneuver->lat;
          wlon = maneuver->lon;
          Coordinates::WGS84::displace((*itr)->x, (*itr)->y, &wlat, &wlon);

          total_duration += distanceAndMove(wlat, wlon, last_pos) / maneuver->speed;
          durations.push_back(total_duration);
        }

        last_pos.z = (*itr)->z;
        last_pos.z_units = maneuver->z_units;

        return durations.back();
      };
#endif

#ifdef DUNE_IMC_ROWS
      //! Parse a Rows maneuver
      //! @param[in] pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::Rows* maneuver, Position& last_pos,
            float last_dur, std::vector<float>& durations)
      {
        if (maneuver->speed_units != IMC::SUNITS_METERS_PS ||
            maneuver->speed == 0.0)
          return -1.0;

        Maneuvers::RowsStages rstages = Maneuvers::RowsStages(maneuver, NULL);

        double lat;
        double lon;
        rstages.getFirstPoint(&lat, &lon);

        double distance = distanceAndMove(lat, lon, last_pos);
        durations.push_back(distance / maneuver->speed + last_dur);

        distance += rstages.getDistance(&last_pos.lat, &last_pos.lon);

        std::vector<float>::const_iterator itr = rstages.getDistancesBegin();

        for (; itr != rstages.getDistancesEnd(); ++itr)
          durations.push_back(*itr / maneuver->speed + durations.back());

        last_pos.z = maneuver->z;
        last_pos.z_units = maneuver->z_units;

        return distance / maneuver->speed;
      };
#endif

#ifdef DUNE_IMC_YOYO
      //! Parse a YoYo maneuver
      //! @param[in] pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::YoYo* maneuver, Position& last_pos,
            float last_dur, std::vector<float>& durations)
      {
        if (maneuver->speed_units != IMC::SUNITS_METERS_PS ||
            maneuver->speed == 0.0 || maneuver->pitch <= 0.0 ||
            maneuver->pitch >= DUNE::Math::c_half_pi)
          return -1.0;

        double horz_dist = distanceAndMove(maneuver->lat, maneuver->lon, last_pos);
        double dur = (horz_dist / std::cos(maneuver->pitch)) / maneuver->speed;
        durations.push_back(dur + last_dur);

        last_pos.z = maneuver->z;
        last_pos.z_units = maneuver->z_units;

        return durations.back();
      };
#endif

#ifdef DUNE_IMC_ELEVATOR
      //! Parse an Elevator maneuver
      //! @param[in] pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::Elevator* maneuver, Position& last_pos,
            float last_dur, std::vector<float>& durations)
      {
        if (maneuver->speed_units != IMC::SUNITS_METERS_PS ||
            maneuver->speed == 0.0)
          return -1.0;

        double horz_dist = distanceAndMove(maneuver->lat, maneuver->lon, last_pos);
        double amplitude = std::fabs(last_pos.z - maneuver->end_z);
        double real_dist = amplitude / std::sin(c_rated_pitch);

        durations.push_back((horz_dist + real_dist) / maneuver->speed + last_dur);

        last_pos.z = maneuver->end_z;
        last_pos.z_units = maneuver->end_z_units;

        return durations.back();
      };
#endif

#ifdef DUNE_IMC_POPUP
      //! Parse a PopUp maneuver
      //! @param[in] pointer to maneuver message
      //! @param[in,out] last_pos last position to consider when computing duration
      //! @param[in] last_dur last computed accumulated plan duration
      //! @param[out] durations vector of accumulated durations for this maneuver
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const IMC::PopUp* maneuver, Position& last_pos,
            float last_dur, std::vector<float>& durations)
      {
        if (maneuver->speed_units != IMC::SUNITS_METERS_PS ||
            maneuver->speed == 0.0)
          return -1.0;

        // Rising time
        float rising_time;
        if (maneuver->z_units == IMC::Z_DEPTH)
          rising_time = std::fabs(last_pos.z) / maneuver->speed;
        else // altitude, assume zero
          rising_time = 0.0;

        last_pos.z = 0.0;
        last_pos.z_units = (uint8_t)IMC::Z_DEPTH;;

        float dist = distanceAndMove(maneuver->lat, maneuver->lon, last_pos);

        durations.push_back(rising_time + dist / maneuver->speed + c_fix_time + last_dur);

        return durations.back();
      };
#endif

      //! Parse plan duration from plan specification
      //! @param[in] spec plan specification message
      //! @param[in] state current estimated state
      //! @param[out] man_durations map of maneuver ids to point durations
      //! @return accumulated plan duration in seconds, -1 if unable to compute
      static float
      parse(const std::vector<IMC::PlanManeuver*>& nodes , const IMC::EstimatedState* state,
            std::map< std::string, std::vector<float> >& man_durations)
      {
        Position pos;
        DUNE::Coordinates::toWGS84(*state, pos.lat, pos.lon);
        pos.z = state->depth;
        pos.z_units = IMC::Z_DEPTH;

        float last_duration = 0.0;

        std::vector<IMC::PlanManeuver*>::const_iterator itr = nodes.begin();

        for (; itr != nodes.end(); ++itr)
        {
          if ((*itr)->data.isNull())
            return -1.0;

          IMC::Message* msg = (*itr)->data.get();

          std::vector<float> durations;

          switch (msg->getId())
          {
            case DUNE_IMC_GOTO:
              last_duration = parse(dynamic_cast<IMC::Goto*>(msg), pos,
                                    last_duration, durations);
              break;
            case DUNE_IMC_STATIONKEEPING:
              last_duration = parse(dynamic_cast<IMC::StationKeeping*>(msg), pos,
                                    last_duration, durations);
              break;
            case DUNE_IMC_LOITER:
              last_duration = parse(dynamic_cast<IMC::Loiter*>(msg), pos,
                                    last_duration, durations);
              break;
            case DUNE_IMC_FOLLOWPATH:
              last_duration = parse(dynamic_cast<IMC::FollowPath*>(msg), pos,
                                    last_duration, durations);
              break;
            case DUNE_IMC_ROWS:
              last_duration = parse(dynamic_cast<IMC::Rows*>(msg), pos,
                                    last_duration, durations);
              break;
            case DUNE_IMC_YOYO:
              last_duration = parse(dynamic_cast<IMC::YoYo*>(msg), pos,
                                    last_duration, durations);
              break;
            case DUNE_IMC_ELEVATOR:
              last_duration = parse(dynamic_cast<IMC::Elevator*>(msg), pos,
                                    last_duration, durations);
              break;
            case DUNE_IMC_POPUP:
              last_duration = parse(dynamic_cast<IMC::PopUp*>(msg), pos,
                                    last_duration, durations);
              break;
            default:
              return -1.0;
              break;
          }

          if (last_duration < 0.0)
            return -1.0;

          std::pair<std::string, std::vector<float> > ent((*itr)->maneuver_id, durations);
          man_durations.insert(ent);
        }

        return last_duration;
      };
    };
  }
}

#endif
