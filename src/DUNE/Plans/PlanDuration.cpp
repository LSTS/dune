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
#include <DUNE/Plans/PlanDuration.hpp>

namespace DUNE
{
  namespace Plans
  {
    float
    PlanDuration::distanceAndMove(double lat, double lon, Position& last_pos)
    {
      double value = Coordinates::WGS84::distance(lat, lon, 0.0,
                                                  last_pos.lat, last_pos.lon, 0.0);

      last_pos.lat = lat;
      last_pos.lon = lon;

      return value;
    }

    template <typename Type>
    float
    PlanDuration::parseSimple(const Type* maneuver, Position& last_pos,
                              float last_dur, std::vector<float>& durations,
                              const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
        return -1.0;

      float value = distanceAndMove(maneuver->lat, maneuver->lon, last_pos);
      last_pos.z = maneuver->z;
      last_pos.z_units = maneuver->z_units;
      durations.push_back(value / speed + last_dur);
      return durations[0];
    }

    template <typename Type>
    float
    PlanDuration::convertSpeed(const Type* maneuver, const SpeedConversion& conv)
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

#ifdef DUNE_IMC_FOLLOWPATH
    float
    PlanDuration::parse(const IMC::FollowPath* maneuver, Position& last_pos, float last_dur,
                        std::vector<float>& durations, const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
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

        total_duration += distanceAndMove(wlat, wlon, last_pos) / speed;
        durations.push_back(total_duration);
      }

      last_pos.z = (*itr)->z;
      last_pos.z_units = maneuver->z_units;

      return durations.back();
    }
#endif
#ifdef DUNE_IMC_ROWS
    float
    PlanDuration::parse(const IMC::Rows* maneuver, Position& last_pos, float last_dur,
                        std::vector<float>& durations, const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
        return -1.0;

      Maneuvers::RowsStages rstages = Maneuvers::RowsStages(maneuver, NULL);

      double lat;
      double lon;
      rstages.getFirstPoint(&lat, &lon);

      double distance = distanceAndMove(lat, lon, last_pos);
      durations.push_back(distance / speed + last_dur);

      distance += rstages.getDistance(&last_pos.lat, &last_pos.lon);

      std::vector<float>::const_iterator itr = rstages.getDistancesBegin();

      for (; itr != rstages.getDistancesEnd(); ++itr)
        durations.push_back(*itr / speed + durations.back());

      last_pos.z = maneuver->z;
      last_pos.z_units = maneuver->z_units;

      return distance / speed;
    }
#endif
#ifdef DUNE_IMC_YOYO
    float
    PlanDuration::parse(const IMC::YoYo* maneuver, Position& last_pos, float last_dur,
                        std::vector<float>& durations, const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
        return -1.0;

      double horz_dist = distanceAndMove(maneuver->lat, maneuver->lon, last_pos);
      double dur = (horz_dist / std::cos(maneuver->pitch)) / speed;
      durations.push_back(dur + last_dur);

      last_pos.z = maneuver->z;
      last_pos.z_units = maneuver->z_units;

      return durations.back();
    }
#endif
#ifdef DUNE_IMC_ELEVATOR
    float
    PlanDuration::parse(const IMC::Elevator* maneuver, Position& last_pos, float last_dur,
                        std::vector<float>& durations, const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
        return -1.0;

      double horz_dist = distanceAndMove(maneuver->lat, maneuver->lon, last_pos);
      double amplitude = std::fabs(last_pos.z - maneuver->end_z);
      double real_dist = amplitude / std::sin(c_rated_pitch);

      durations.push_back((horz_dist + real_dist) / speed + last_dur);

      last_pos.z = maneuver->end_z;
      last_pos.z_units = maneuver->end_z_units;

      return durations.back();
    }
#endif
#ifdef DUNE_IMC_POPUP
    float
    PlanDuration::parse(const IMC::PopUp* maneuver, Position& last_pos, float last_dur,
                        std::vector<float>& durations, const SpeedConversion& speed_conv)
    {
      float speed = convertSpeed(maneuver, speed_conv);

      if (speed == 0.0)
        return -1.0;

      // Travel time
      float travel_time;

      if ((maneuver->flags & IMC::PopUp::FLG_CURR_POS) != 0)
      {
        last_pos.z = 0.0;
        last_pos.z_units = (uint8_t)IMC::Z_DEPTH;;

        float dist = distanceAndMove(maneuver->lat, maneuver->lon, last_pos);
        travel_time = dist / speed;
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

    float
    PlanDuration::parse(const std::vector<IMC::PlanManeuver*>& nodes,
                        const IMC::EstimatedState* state,
                        std::map< std::string, std::vector<float> >& man_durations,
                        const SpeedConversion& speed_conv)
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
                                  last_duration, durations, speed_conv);
            break;
          case DUNE_IMC_STATIONKEEPING:
            last_duration = parse(dynamic_cast<IMC::StationKeeping*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
          case DUNE_IMC_LOITER:
            last_duration = parse(dynamic_cast<IMC::Loiter*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
          case DUNE_IMC_FOLLOWPATH:
            last_duration = parse(dynamic_cast<IMC::FollowPath*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
          case DUNE_IMC_ROWS:
            last_duration = parse(dynamic_cast<IMC::Rows*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
          case DUNE_IMC_YOYO:
            last_duration = parse(dynamic_cast<IMC::YoYo*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
          case DUNE_IMC_ELEVATOR:
            last_duration = parse(dynamic_cast<IMC::Elevator*>(msg), pos,
                                  last_duration, durations, speed_conv);
            break;
          case DUNE_IMC_POPUP:
            last_duration = parse(dynamic_cast<IMC::PopUp*>(msg), pos,
                                  last_duration, durations, speed_conv);
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
    }
  }
}
