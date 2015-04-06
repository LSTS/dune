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

// DUNE headers.
#include <DUNE/Maneuvers/StationKeep.hpp>
#include <DUNE/Coordinates/WGS84.hpp>

using namespace DUNE::Math;
using namespace DUNE::Coordinates;
using namespace DUNE::IMC;

namespace DUNE
{
  namespace Maneuvers
  {
    //! Factor for the radius to consider traveling at the surface
    static const float c_surface_factor = 2.5f;

    //! Default constructor.
    StationKeep::StationKeep(const IMC::StationKeeping* maneuver, Maneuvers::Maneuver* task,
                             float min_radius)
    {
      m_radius = maneuver->radius;

      if (trimValueMod(m_radius, min_radius, m_radius))
        task->war(DTR("forcing minimum radius of %.1f"), min_radius);

      *this = StationKeep(task, maneuver->lat, maneuver->lon,
                          m_radius, maneuver->z, maneuver->z_units,
                          maneuver->speed, maneuver->speed_units);
    }

    StationKeep::StationKeep(Maneuvers::Maneuver* task, double lat, double lon,
                             float radius, float z, uint8_t z_units,
                             float speed, uint8_t speed_units):
      m_lat(lat),
      m_lon(lon),
      m_radius(radius),
      m_sks(ST_INITIAL)
    {
      m_task = task;

      m_path.end_lat = lat;
      m_path.end_lon = lon;
      m_path.end_z = z;
      m_path.end_z_units = z_units;
      m_path.speed = speed;
      m_path.speed_units = speed_units;
    }

    double
    StationKeep::getRange(const IMC::EstimatedState* state) const
    {
      double lat = state->lat;
      double lon = state->lon;

      Coordinates::toWGS84(*state, lat, lon);

      double x;
      double y;
      WGS84::displacement(lat, lon, 0, m_lat, m_lon, 0, &x, &y);

      // dummy variable
      double bearing;
      double range;

      toPolar(x, y, &bearing, &range);

      return range;
    }

    void
    StationKeep::startMoving(double range, bool at_surface = false)
    {
      m_task->inf(DTR("outside safe region (distance: %.1f m)"), range);
      m_task->setControl(IMC::CL_PATH);

      if (at_surface)
      {
        IMC::DesiredPath dp = m_path;
        dp.end_z = 0.0f;
        dp.end_z_units = IMC::Z_DEPTH;
        m_task->dispatch(dp);
      }
      else
      {
        m_task->dispatch(m_path);
      }
    }

    void
    StationKeep::stopMoving(double range)
    {
      m_task->setControl(IMC::CL_NONE);
      m_task->inf(DTR("inside safe region (distance: %.1f m)"), range);
    }

    void
    StationKeep::update(const IMC::EstimatedState* state)
    {
      double range = getRange(state);

      switch (m_sks)
      {
        case ST_INITIAL:
          if (range < m_radius)
          {
            stopMoving(range);
            m_sks = ST_ON_STATION;
          }
          else
          {
            startMoving(range);
            m_sks = ST_OFF_STATION;
          }
          break;
        case ST_ON_STATION:
          if (range > m_radius)
          {
            bool go_at_surface = range < c_surface_factor * m_radius;

            startMoving(range, go_at_surface);
            m_sks = ST_OFF_STATION;
          }
          break;
        case ST_OFF_STATION:
          break;
        default:
          std::string str = DTR("invalid station keeping state");
          // signal error before throwing exception
          m_task->signalError(str);
          throw std::runtime_error(str);
          break;
      }
    }

    void
    StationKeep::updatePathControl(const IMC::PathControlState* pcs)
    {
      double range = Math::norm(pcs->x, pcs->y);

      switch (m_sks)
      {
        case ST_OFF_STATION:
          if (pcs->flags & IMC::PathControlState::FL_NEAR)
          {
            stopMoving(range);
            m_sks = ST_ON_STATION;
          }
          break;
        default:
          break;
      }
    }

    bool
    StationKeep::isInside(void) const
    {
      return (m_sks == ST_ON_STATION);
    }

    bool
    StationKeep::isMoving(void) const
    {
      return (m_sks == ST_OFF_STATION);
    }
  }
}
