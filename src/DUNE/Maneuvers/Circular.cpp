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

// DUNE headers.
#include <DUNE/Maneuvers/Circular.hpp>
#include <DUNE/Coordinates/WGS84.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    //! Default constructor.
    Circular::Circular(const IMC::Loiter* maneuver, Maneuvers::Maneuver* task,
                       float min_radius):
      AbstractLoiter(task)
    {
      float radius = maneuver->radius;

      if (Math::trimValueMod(radius, min_radius, radius))
        task->war(DTR("forcing minimum radius of %.1f"), min_radius);

      init(task, maneuver->lat, maneuver->lon,
           radius, maneuver->z, maneuver->z_units,
           maneuver->speed, maneuver->speed_units, maneuver->direction);
    }

    Circular::Circular(Maneuvers::Maneuver* task, double lat, double lon,
                       float radius, float z, uint8_t z_units,
                       float speed, uint8_t speed_units, uint8_t direction):
      AbstractLoiter(task)
    {
      init(task, lat, lon, radius, z, z_units, speed, speed_units, direction);
    }

    void
    Circular::init(Maneuvers::Maneuver* task, double lat, double lon,
                   float radius, float z, uint8_t z_units,
                   float speed, uint8_t speed_units, uint8_t direction)
    {
      m_loitering = false;

      task->setControl(IMC::CL_PATH);

      IMC::DesiredPath path;
      path.end_lat = lat;
      path.end_lon = lon;
      path.end_z = z;
      path.end_z_units = z_units;
      path.lradius = radius;

      if (direction == IMC::Loiter::LD_CCLOCKW)
        path.flags = IMC::DesiredPath::FL_CCLOCKW;
      else
        path.flags = 0;

      path.speed = speed;
      path.speed_units = speed_units;

      task->dispatch(path);
    }

    void
    Circular::onPathControlState(const IMC::PathControlState* pcs)
    {
      if (pcs->flags & IMC::PathControlState::FL_LOITERING)
        m_loitering = true;
      else
        m_loitering = false;
    }

    bool
    Circular::isLoitering(void) const
    {
      return m_loitering;
    }
  }
}
