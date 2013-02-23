//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: StationKeep.cpp 12991 2013-02-21 17:49:57Z pdcalado              $:*
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
