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

#ifndef DUNE_COLLISION_AVOIDANCE_SPA_HPP_INCLUDED_
#define DUNE_COLLISION_AVOIDANCE_SPA_HPP_INCLUDED_

// DUNE Headers.
#include <DUNE/CollisionAvoidance/BasicCollisionAvoidanceEntity.hpp>
#include <DUNE/Coordinates/WGS84.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/IMC/Message.hpp>
#include <DUNE/Time/Clock.hpp>
#include <DUNE/Control/TrackingState.hpp>

using namespace DUNE::Math;
using namespace DUNE::Coordinates;

namespace DUNE
{
  namespace CollisionAvoidance
  {
    namespace SinglePointAvoidance
    {
      class SPA: public BasicCollisionAvoidanceEntity
      {
      public:
        double m_close_radius;
        double m_far_radius;
        double m_lat;
        double m_lon;

        SPA(AbstractTask* owner, Context& context):
          BasicCollisionAvoidanceEntity(owner, context)
        {
          param("Close Radius", m_close_radius)
          .defaultValue("0.0")
          .description("Close Radius from the center of the avoidance point (meters).");

          param("Far Radius", m_far_radius)
          .defaultValue("0.0")
          .description("Far Radius from the center of the avoidance point (meters).");

          param("Latitude", m_lat)
          .defaultValue("0.0")
          .units(Units::Degree)
          .description("Latitude of the center of the avoidance point (degrees).");
          
          param("Longitude", m_lon)
          .defaultValue("0.0")
          .units(Units::Degree)
          .description("Longitude of the center of the avoidance point (degrees).");
        }

        double
        getHeadingOffset(const double desired_heading, const IMC::EstimatedState* es, const DUNE::Control::TrackingState& ts) override
        {
          double lat = es->lat;
          double lon = es->lon;
          WGS84::displace(es->x, es->y, &lat, &lon);
          double distance_to_point, bearing_to_point;
          WGS84::getNEBearingAndRange(lat, lon, Math::Angles::radians(m_lat), Math::Angles::radians(m_lon), &bearing_to_point, &distance_to_point);
          bearing_to_point = Math::Angles::normalizeRadian(bearing_to_point);
          if (distance_to_point < m_close_radius)
          {
            double new_heading = Math::Angles::normalizeRadian(bearing_to_point + Math::c_pi);
            return Angles::normalizeRadian(new_heading - desired_heading);
          }
          else if (distance_to_point < m_far_radius)
          {
            double new_heading = Math::Angles::normalizeRadian(bearing_to_point + (bearing_to_point > ts.los_angle ? -Math::c_half_pi : Math::c_half_pi));
            return Angles::normalizeRadian(new_heading - desired_heading);
          }
          else
            return 0.0;
        }
      };
    }
  }
}

#endif
