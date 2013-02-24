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
#include <DUNE/Maneuvers/StationKeep.hpp>
#include <DUNE/Coordinates/WGS84.hpp>

using namespace DUNE::Math;
using namespace DUNE::Coordinates;
using namespace DUNE::IMC;

namespace DUNE
{
  namespace Maneuvers
  {
    //! Default constructor.
    StationKeep::StationKeep(const IMC::StationKeeping* maneuver, Maneuvers::Maneuver* task,
                             float min_radius)
    {
      m_radius = maneuver->radius;

      if (trimValueMod(m_radius, min_radius, m_radius))
        m_task->war("forcing minimum radius %.1f", min_radius);

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
      m_moving(true),
      m_inside(false)
    {
      m_task = task;

      m_task->setControl(IMC::CL_PATH);

      m_path.end_lat = lat;
      m_path.end_lon = lon;
      m_path.end_z = z;
      m_path.end_z_units = z_units;
      m_path.speed = speed;
      m_path.speed_units = speed_units;

      m_task->dispatch(m_path);
    }


    void
    StationKeep::update(const IMC::EstimatedState* state, bool near)
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

      bool was_inside = m_inside;
      m_inside = range < m_radius;

      if (was_inside && !m_inside)
        near = false;

      if (m_inside != was_inside)
        m_task->inf(DTR("%s safe region (distance: %.1f m)"),
                    m_inside ? "inside" : "outside", range);

      if (near)
      {
        if (m_moving)
        {
          m_moving = false;
          m_task->setControl(IMC::CL_NONE);
          m_task->inf(DTR("stopping (%0.1f m)"), range);
          return;
        }
      }
      else if (!m_moving && !m_inside)
      {
        m_moving = true;
        m_task->setControl(IMC::CL_PATH);
        m_task->dispatch(m_path);
        m_task->inf(DTR("moving (distance: %0.1f m)"), range);
      }
    }
  }
}
