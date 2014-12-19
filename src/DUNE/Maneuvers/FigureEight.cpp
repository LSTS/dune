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

// ISO C++ headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Maneuvers/FigureEight.hpp>
#include <DUNE/Coordinates.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    //! Minimum arc to travel in radians
    static const float c_min_arc = Math::c_pi;
    //! Maximum arc to travel in radians
    static const float c_max_arc = 3.0f * Math::c_pi;
    //! Minimum distance to exit point of loiter
    static const float c_min_dist = 5.0f;

    //! Default constructor.
    FigureEight::FigureEight(const IMC::Loiter* maneuver, Maneuvers::Maneuver* task,
                             float min_radius):
      AbstractLoiter(task)
    {
      float radius = maneuver->radius;

      if (Math::trimValueMod(radius, min_radius, radius))
        task->war(DTR("forcing minimum radius of %.1f"), min_radius);

      Properties prop;
      prop.task = task;
      prop.lat = maneuver->lat;
      prop.lon = maneuver->lon;
      prop.radius = radius;
      prop.z = maneuver->z;
      prop.z_units = maneuver->z_units;
      prop.speed = maneuver->speed;
      prop.speed_units = maneuver->speed_units;
      prop.bearing = maneuver->bearing;
      prop.length = maneuver->length;

      init(&prop);
    }

    FigureEight::FigureEight(Properties* prop):
      AbstractLoiter(prop->task)
    {
      init(prop);
    }

    void
    FigureEight::init(Properties* prop)
    {
      m_prop = *prop;

      if (m_prop.length < m_prop.radius * 2.0)
        m_prop.length = m_prop.radius * 2.0;

      m_left.direction = false;
      m_right.direction = true;

      computeLoopCenters();
      computeLoopExits();

      // start on the left
      m_loop = &m_left;

      m_state = FE_INIT;

      m_task->setControl(IMC::CL_PATH);

      dispatchPath(m_loop);
    }

    void
    FigureEight::computeLoopCenters(void)
    {
      m_left.center_lat = m_prop.lat;
      m_left.center_lon = m_prop.lon;

      m_right.center_lat = m_prop.lat;
      m_right.center_lon = m_prop.lon;

      displace(m_left.center_lat, m_left.center_lon,
               m_prop.bearing + Math::c_pi, m_prop.length / 2.0);
      displace(m_right.center_lat, m_right.center_lon,
               m_prop.bearing, m_prop.length / 2.0);
    }

    void
    FigureEight::computeLoopExits(void)
    {
      m_left.exit_lat = m_left.center_lat;
      m_left.exit_lon = m_left.center_lon;

      m_right.exit_lat = m_right.center_lat;
      m_right.exit_lon = m_right.center_lon;

      // Compute exit offset in radians
      double exit_offset = std::acos(m_prop.radius / (m_prop.length / 2.0));

      displace(m_left.exit_lat, m_left.exit_lon,
               m_prop.bearing - exit_offset, m_prop.radius);
      displace(m_right.exit_lat, m_right.exit_lon,
               m_prop.bearing + Math::c_pi + exit_offset, m_prop.radius);
    }

    void
    FigureEight::displace(double& lat, double& lon, double angle, float range)
    {
      Point point;
      point.x = 0.0;
      point.y = 0.0;

      Coordinates::displace(point, angle, range);

      double dummy = 0.0;
      Coordinates::WGS84::displace(point.y, point.x, 0.0,
                                   &lat, &lon, &dummy);
    }

    void
    FigureEight::dispatchPath(const EightLoop* loop, bool set_start)
    {
      IMC::DesiredPath path;
      path.flags = 0;

      if (set_start)
      {
        EightLoop* other_loop = (loop == &m_left) ? &m_right : &m_left;
        path.start_lat = other_loop->exit_lat;
        path.start_lon = other_loop->exit_lon;

        path.flags |= IMC::DesiredPath::FL_START;
      }

      path.end_lat = loop->center_lat;
      path.end_lon = loop->center_lon;
      path.end_z = m_prop.z;
      path.end_z_units = m_prop.z_units;
      path.lradius = m_prop.radius;

      if (!loop->direction)
        path.flags |= IMC::DesiredPath::FL_CCLOCKW;

      path.speed = m_prop.speed;
      path.speed_units = m_prop.speed_units;

      m_task->dispatch(path);
    }

    double
    FigureEight::computeRelativeBearing(const IMC::EstimatedState* msg)
    {
      Point center;

      Coordinates::WGS84::displacement(msg->lat, msg->lon, 0.0,
                                       m_loop->center_lat, m_loop->center_lon, 0.0,
                                       &center.y, &center.x);

      Point vehicle;
      vehicle.x = msg->y;
      vehicle.y = msg->x;

      return Coordinates::getBearing(center, vehicle);
    }

    float
    FigureEight::computeDistanceToExit(const IMC::EstimatedState* msg)
    {
      double lat;
      double lon;
      Coordinates::toWGS84(*msg, lat, lon);

      return Coordinates::WGS84::distance(lat, lon, 0.0,
                                          m_loop->exit_lat, m_loop->exit_lon, 0.0);
    }

    void
    FigureEight::onPathControlState(const IMC::PathControlState* pcs)
    {
      switch (m_state)
      {
        case FE_INIT:
        case FE_SWITCHING:
          if (pcs->flags & IMC::PathControlState::FL_LOITERING)
          {
            m_state = FE_CIRCLING;
            m_arc.invalidate();
          }
          break;
        default:
          break;
      }
    }

    void
    FigureEight::onEstimatedState(const IMC::EstimatedState* msg)
    {
      switch (m_state)
      {
        case FE_EXITING:
          {
            float dist = computeDistanceToExit(msg);

            m_arc.update(computeRelativeBearing(msg));

            if ((dist < c_min_dist) || (m_arc.get() > c_max_arc))
            {
              if (m_loop == &m_left)
                m_loop = &m_right;
              else
                m_loop = &m_left;

              // dispatch path to other center
              dispatchPath(m_loop, true);

              m_state = FE_SWITCHING;
            }
          }
          break;
        case FE_CIRCLING:
          m_arc.update(computeRelativeBearing(msg));

          if (std::fabs(m_arc.get()) > c_min_arc)
            m_state = FE_EXITING;
          break;
        default:
          break;
      }
    }

    bool
    FigureEight::isLoitering(void) const
    {
      return m_state != FE_INIT;
    }
  }
}
