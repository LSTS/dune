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

// DUNE headers.
#include <DUNE/Plans/Duration.hpp>

namespace DUNE
{
  namespace Plans
  {
    float
    Duration::distance2D(const Position& new_pos, const Position& last_pos)
    {
      return Coordinates::WGS84::distance(new_pos.lat, new_pos.lon, 0.0,
                                          last_pos.lat, last_pos.lon, 0.0);
    }

    float
    Duration::distance3D(const Position& new_pos, const Position& last_pos)
    {
      float value = distance2D(new_pos, last_pos);

      float offset = computeZOffset(new_pos, last_pos);
      float slope = std::atan2(offset, value);
      return value / std::cos(slope);
    }

    template <typename Type>
    float
    Duration::parseSimple(const Type* maneuver, Position& last_pos,
                          float last_dur, std::vector<float>& durations,
                          const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
        return -1.0;

      Position pos;
      extractPosition(maneuver, pos);
      float travelled = distance3D(pos, last_pos);

      // compensate with path controller's eta factor
      travelled = compensate(travelled, speed);

      last_pos = pos;

      durations.push_back(travelled / speed + last_dur);
      return durations[0];
    }

    template <typename Type>
    float
    Duration::convertSpeed(const Type* maneuver, const SpeedConversion& conv)
    {
      switch (maneuver->speed_units)
      {
        case IMC::SUNITS_METERS_PS:
          return maneuver->speed;
        case IMC::SUNITS_RPM:
          return maneuver->speed * conv.rpm_factor;
        case IMC::SUNITS_PERCENTAGE:
          return maneuver->speed * conv.act_factor;
        default:
          return 0.0;
      }
    }

    inline float
    Duration::compensate(float distance, float speed)
    {
      return std::max(0.0f, distance - Control::c_time_factor * speed);
    }

    float
    Duration::computeZOffset(const Position& new_pos, const Position& last_pos)
    {
      if (last_pos.z_units == new_pos.z_units)
      {
        if (last_pos.z_units == IMC::Z_ALTITUDE)
        {
          if (new_pos.binfo.validity && last_pos.binfo.validity)
            return (last_pos.binfo.depth - last_pos.z) - (new_pos.binfo.depth - new_pos.z);
          else
            return last_pos.z - new_pos.z;
        }
        else if (last_pos.z_units == IMC::Z_DEPTH)
        {
          return last_pos.z - new_pos.z;
        }
        else
        {
          return 0.0;
        }
      }
      else
      {
        if (last_pos.z_units == IMC::Z_DEPTH && new_pos.z_units == IMC::Z_ALTITUDE)
        {
          if (new_pos.binfo.validity)
            return last_pos.z - (new_pos.binfo.depth - new_pos.z);
        }
        else if (last_pos.z_units == IMC::Z_ALTITUDE && new_pos.z_units == IMC::Z_DEPTH)
        {
          if (last_pos.binfo.validity)
            return (last_pos.binfo.depth - last_pos.z) - new_pos.z;
        }

        return 0.0;
      }
    }

    void
    Duration::extractBathymetry(const std::string& str, Position& pos)
    {
      (void)str;

      // for now equal to false
      pos.binfo.validity = false;
    }

    template <typename Type>
    void
    Duration::extractPosition(const Type* maneuver, Position& pos)
    {
      pos.lat = maneuver->lat;
      pos.lon = maneuver->lon;
      pos.z = maneuver->z;
      pos.z_units = maneuver->z_units;

      // for now equal to false
      pos.binfo.validity = false;
    }

    void
    Duration::extractPosition(const IMC::Elevator* maneuver, Position& pos)
    {
      pos.lat = maneuver->lat;
      pos.lon = maneuver->lon;
      pos.z = maneuver->start_z;
      pos.z_units = maneuver->start_z_units;

      extractBathymetry("", pos);
    }

    void
    Duration::extractPosition(const IMC::PopUp* maneuver, Position& pos)
    {
      pos.lat = maneuver->lat;
      pos.lon = maneuver->lon;
      pos.z = 0.0;
      pos.z_units = maneuver->z_units;

      extractBathymetry("", pos);
    }

    void
    Duration::extractPosition(const IMC::EstimatedState* state, Position& pos)
    {
      DUNE::Coordinates::toWGS84(*state, pos.lat, pos.lon);
      pos.z = state->depth;
      pos.z_units = IMC::Z_DEPTH;

      extractBathymetry("", pos);
    }

#ifdef DUNE_IMC_FOLLOWPATH
    float
    Duration::parse(const IMC::FollowPath* maneuver, Position& last_pos, float last_dur,
                    std::vector<float>& durations, const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
        return -1.0;

      Position pos;
      pos.z = maneuver->z;
      pos.z_units = maneuver->z_units;

      IMC::MessageList<IMC::PathPoint>::const_iterator itr = maneuver->points.begin();
      double total_duration = last_dur;

      // Iterate point list
      for (; itr != maneuver->points.end(); itr++)
      {
        if ((*itr) == NULL)
          continue;

        pos.lat = maneuver->lat;
        pos.lon = maneuver->lon;
        Coordinates::WGS84::displace((*itr)->x, (*itr)->y, &pos.lat, &pos.lon);

        float travelled = distance3D(pos, last_pos);

        last_pos = pos;

        // compensate with path controller's eta factor
        total_duration += compensate(travelled, speed) / speed;
        durations.push_back(total_duration);
      }

      return durations.back();
    }
#endif
#ifdef DUNE_IMC_ROWS
    float
    Duration::parse(const IMC::Rows* maneuver, Position& last_pos, float last_dur,
                    std::vector<float>& durations, const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
        return -1.0;

      Maneuvers::RowsStages rstages = Maneuvers::RowsStages(maneuver, NULL);

      Position pos;
      pos.z = maneuver->z;
      pos.z_units = maneuver->z_units;

      rstages.getFirstPoint(&pos.lat, &pos.lon);

      float distance = distance3D(pos, last_pos);
      durations.push_back(distance / speed + last_dur);

      last_pos = pos;

      distance += rstages.getDistance(&last_pos.lat, &last_pos.lon);

      std::vector<float>::const_iterator itr = rstages.getDistancesBegin();

      for (; itr != rstages.getDistancesEnd(); ++itr)
      {
        // compensate with path controller's eta factor
        float travelled = compensate(*itr, speed);
        durations.push_back(travelled / speed + durations.back());
      }

      return distance / speed;
    }
#endif
#ifdef DUNE_IMC_YOYO
    float
    Duration::parse(const IMC::YoYo* maneuver, Position& last_pos, float last_dur,
                    std::vector<float>& durations, const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
        return -1.0;

      Position pos;
      extractPosition(maneuver, pos);

      // Use 2D distance here
      float horz_dist = distance2D(pos, last_pos);
      float travelled = horz_dist / std::cos(maneuver->pitch);

      // compensate with path controller's eta factor
      travelled = compensate(travelled, speed);

      last_pos = pos;

      durations.push_back(travelled / speed + last_dur);

      return durations.back();
    }
#endif
#ifdef DUNE_IMC_ELEVATOR
    float
    Duration::parse(const IMC::Elevator* maneuver, Position& last_pos, float last_dur,
                    std::vector<float>& durations, const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
        return -1.0;

      Position pos;
      extractPosition(maneuver, pos);

      float goto_dist = distance3D(pos, last_pos);
      float amplitude = std::fabs(last_pos.z - maneuver->end_z);
      float real_dist = amplitude / std::sin(c_rated_pitch);

      float travelled = goto_dist + real_dist;

      // compensate with path controller's eta factor
      travelled = compensate(travelled, speed);

      durations.push_back(travelled / speed + last_dur);

      return durations.back();
    }
#endif
#ifdef DUNE_IMC_POPUP
    float
    Duration::parse(const IMC::PopUp* maneuver, Position& last_pos, float last_dur,
                    std::vector<float>& durations, const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
        return -1.0;

      // Travel time
      float travel_time;

      if ((maneuver->flags & IMC::PopUp::FLG_CURR_POS) != 0)
      {
        Position pos;
        extractPosition(maneuver, pos);

        float travelled = distance3D(pos, last_pos);

        // compensate with path controller's eta factor
        travelled = compensate(travelled, speed);

        travel_time = travelled / speed;

        last_pos = pos;
      }
      else
      {
        travel_time = 0;
      }

      // Rising time
      float rising_time;
      if (maneuver->z_units == IMC::Z_DEPTH)
        rising_time = std::fabs(last_pos.z) / speed;
      else // altitude, assume zero
        rising_time = 0.0;

      // surface time
      bool wait = (maneuver->flags & IMC::PopUp::FLG_WAIT_AT_SURFACE) != 0;
      float surface_time = wait ? maneuver->duration : c_fix_time;

      durations.push_back(travel_time + rising_time + surface_time + last_dur);

      return durations.back();
    }
#endif

    Duration::ManeuverDuration::const_iterator
    Duration::parse(const std::vector<IMC::PlanManeuver*>& nodes,
                    const IMC::EstimatedState* state,
                    ManeuverDuration& man_durations,
                    const SpeedConversion& speed_conv)
    {
      Position pos;
      extractPosition(state, pos);

      float last_duration = 0.0;

      std::vector<IMC::PlanManeuver*>::const_iterator itr = nodes.begin();

      for (; itr != nodes.end(); ++itr)
      {
        if ((*itr)->data.isNull())
          return man_durations.end();

        IMC::Message* msg = (*itr)->data.get();

        std::vector<float> durations;

        switch (msg->getId())
        {
#ifdef DUNE_IMC_GOTO
          case DUNE_IMC_GOTO:
            last_duration = parse(dynamic_cast<IMC::Goto*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
#endif
#ifdef DUNE_IMC_STATIONKEEPING
          case DUNE_IMC_STATIONKEEPING:
            last_duration = parse(dynamic_cast<IMC::StationKeeping*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
#endif
#ifdef DUNE_IMC_LOITER
          case DUNE_IMC_LOITER:
            last_duration = parse(dynamic_cast<IMC::Loiter*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
#endif
#ifdef DUNE_IMC_FOLLOWPATH
          case DUNE_IMC_FOLLOWPATH:
            last_duration = parse(dynamic_cast<IMC::FollowPath*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
#endif
#ifdef DUNE_IMC_ROWS
          case DUNE_IMC_ROWS:
            last_duration = parse(dynamic_cast<IMC::Rows*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
#endif
#ifdef DUNE_IMC_YOYO
          case DUNE_IMC_YOYO:
            last_duration = parse(dynamic_cast<IMC::YoYo*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
#endif
#ifdef DUNE_IMC_ELEVATOR
          case DUNE_IMC_ELEVATOR:
            last_duration = parse(dynamic_cast<IMC::Elevator*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
#endif
#ifdef DUNE_IMC_POPUP
          case DUNE_IMC_POPUP:
            last_duration = parse(dynamic_cast<IMC::PopUp*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
#endif
          default:
            last_duration = -1.0;
            break;
        }

        if (last_duration < 0.0)
        {
          if (man_durations.empty() || itr == nodes.begin())
            return man_durations.end();

          // return the duration from the previously computed maneuver
          ManeuverDuration::const_iterator dtr;
          dtr = man_durations.find((*(--itr))->maneuver_id);

          if (dtr->second.empty())
            return man_durations.end();

          return dtr;
        }

        std::pair<std::string, std::vector<float> > ent((*itr)->maneuver_id, durations);
        man_durations.insert(ent);
      }

      return man_durations.find(nodes.back()->maneuver_id);
    }
  }
}
