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
#include <DUNE/Maneuvers/Elevate.hpp>

using namespace DUNE::Math;
using namespace DUNE::IMC;

namespace DUNE
{
  namespace Maneuvers
  {
    //! Tolerance when elevating towards a new depth
    static const float c_elevator_tolerance = 1.0f;

    //! Default constructor.
    Elevate::Elevate(const IMC::Elevator* maneuver, Maneuvers::Maneuver* task,
                     float min_radius):
      m_dir(0)
    {
      m_elevator = *maneuver;
      m_task = task;
      m_path.clear();

      m_els = ST_INITIAL;

      if (trimValueMod(m_elevator.radius, min_radius, m_elevator.radius))
        m_task->war(DTR("forcing minimum radius of %.1f"), min_radius);

      m_task->setControl(IMC::CL_PATH);

      m_path.end_lat = m_elevator.lat;
      m_path.end_lon = m_elevator.lon;
      m_path.lradius = m_elevator.radius;

      // Set speed
      m_path.speed = m_elevator.speed;
      m_path.speed_units = m_elevator.speed_units;
    }

    void
    Elevate::startHelicoid(const IMC::EstimatedState* msg)
    {
      m_path.end_z = m_elevator.end_z;
      m_path.end_z_units = m_elevator.end_z_units;

      computeElevatorDirection(msg);
    }

    void
    Elevate::update(const IMC::EstimatedState* msg)
    {
      switch (m_els)
      {
        case ST_INITIAL:
          if (useCurr())
          {
            m_els = ST_HELICOID;

            m_path.flags = IMC::DesiredPath::FL_LOITER_CURR;
            startHelicoid(msg);
          }
          else
          {
            m_els = ST_GO_TO;

            m_path.end_z = m_elevator.start_z;
            m_path.end_z_units = m_elevator.start_z_units;
          }

          m_path.flags |= getLoiterDirection(msg);

          m_task->dispatch(m_path);
          break;
        case ST_LOITER:
          m_els = ST_HELICOID;

          startHelicoid(msg);
          m_task->dispatch(m_path);
          break;
        case ST_HELICOID:
          // check if it is in the neighborhood of the desired depth
          if (getVerticalError(msg) <= c_elevator_tolerance)
          {
            m_els = ST_DONE;
            m_task->debug("Reached target depth/altitude of %0.2f meters.",
                          m_elevator.end_z);
          }

          // Check if water column is not deep enough for desired altitude
          if (m_elevator.end_z_units == IMC::Z_ALTITUDE)
          {
            if ((m_elevator.end_z > msg->depth + msg->alt)
                && msg->depth < c_elevator_tolerance)
            {
              // water column is not deep enough so we bail
              m_els = ST_DONE;
              m_task->war(DTR("water column is not deep enough"));
            }
          }
          break;
        default:
          break;
      }
    }

    void
    Elevate::updatePathControl(const IMC::PathControlState* msg)
    {
      switch (m_els)
      {
        case ST_GO_TO:
          if (msg->flags & IMC::PathControlState::FL_LOITERING)
            m_els = ST_LOITER;
          break;
        default:
          break;
      }
    }

    void
    Elevate::computeElevatorDirection(const IMC::EstimatedState* msg)
    {
      // variable state_z will hold the vehicle's depth or altitude
      if (m_elevator.end_z_units == IMC::Z_DEPTH)
      {
        // Depth
        m_dir = (msg->depth > m_elevator.end_z) ? 1 : -1;
      }
      else if ((m_elevator.end_z_units == IMC::Z_ALTITUDE) &&
               (msg->alt >= 0))
      {
        // Altitude.
        m_dir = (msg->alt > m_elevator.end_z) ? -1 : 1;
      }
      else
      {
        m_task->signalInvalidZ();
        return;
      }

      m_task->debug("%s to %0.2f meters of depth/altitude",
                    (m_dir < 0) ? "descending" : "ascending",
                    m_elevator.end_z);
    }
  }
}
