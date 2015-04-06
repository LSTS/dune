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
// Author: Jose Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace CommsRelay
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      IMC::CommsRelay m_maneuver;
      IMC::DesiredPath m_path;

      bool m_moving;
      double m_lat_a;
      double m_lat_b;

      double m_lon_a;
      double m_lon_b;

      double m_cur_lat;
      double m_cur_lon;

      double m_lat_center;
      double m_lon_center;

      double m_start_time;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_moving(false)
      {
        bindToManeuver<Task, IMC::CommsRelay>();
        bind<IMC::EstimatedState>(this);
        bind<IMC::Announce>(this);
      }

      void
      onManeuverDeactivation(void)
      {
        m_moving = false;
      }

      void
      consume(const IMC::CommsRelay* maneuver)
      {
        enableMovement(false);

        m_maneuver = *maneuver;

        // parameters initialization
        m_lat_a = m_lat_b = m_lat_center = m_maneuver.lat;
        m_lon_a = m_lon_b = m_lon_center = m_maneuver.lon;

        m_path.speed = m_maneuver.speed;
        m_path.speed_units = m_maneuver.speed_units;

        m_path.end_lat = m_lat_center;
        m_path.end_lon = m_lon_center;
        m_path.end_z = 0;
        m_path.end_z_units = IMC::Z_DEPTH;

        m_start_time = Clock::get();

        // start moving towards initial point
        enableMovement(true);
        dispatch(m_path);

        m_moving = true;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        // set vehicle's position from estimated state
        m_cur_lat = msg->lat;
        m_cur_lon = msg->lon;
        Coordinates::toWGS84(*msg, m_cur_lat, m_cur_lon);

        // if moving towards the goal don't do a thing
        if (!m_moving)
        {
          double dist;
          dist = WGS84::distance(m_cur_lat, m_cur_lon, 0,
                                 m_lat_center, m_lon_center, 0);

          // if stopped but too far from center position, start moving again
          if (dist > m_maneuver.move_threshold)
          {
            enableMovement(true);
            dispatch(m_path);
          }
        }
      }

      void
      consume(const IMC::Announce* msg)
      {
        bool centerChanged = false;

        if (msg->getSource() == m_maneuver.sys_a)
        {
          debug("%s updated its position", msg->sys_name.c_str());
          m_lat_a = msg->lat;
          m_lon_a = msg->lon;
          centerChanged = true;
        }

        if (msg->getSource() == m_maneuver.sys_b)
        {
          debug("%s updated its position", msg->sys_name.c_str());
          m_lat_b = msg->lat;
          m_lon_b = msg->lon;
          centerChanged = true;
        }

        if (centerChanged)
        {
          m_lat_center = (m_lat_a + m_lat_b) / 2;
          m_lon_center = (m_lon_a + m_lon_b) / 2;

          m_path.end_lat = m_lat_center;
          m_path.end_lon = m_lon_center;

          debug("new center: %0.5f / %0.5f",
                Angles::degrees(m_lat_center), Angles::degrees(m_lon_center));

          // if we are moving, set new target position (new center)
          if (m_moving)
            dispatch(m_path);
        }
      }

      // Function to check if the vehicle is getting near to the next waypoint
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        // Verify maneuver completion
        double delta = Clock::get() - m_start_time - m_maneuver.duration;
        if (delta >= 0)
        {
          signalCompletion();
          return;
        }
        else
        {
          signalProgress((uint16_t)(Math::round(delta)));
        }

        // if we have arrived at the target, we stop moving
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
        {
          debug("arrived at the center");
          enableMovement(false);
        }
      }

      // Function for enabling and disabling the control loops
      void
      enableMovement(bool enable)
      {
        const uint32_t mask = IMC::CL_PATH;

        if (enable)
        {
          // set control loops in order to move
          setControl(mask);
          m_moving = true;
        }
        else
        {
          // stop moving by setting control loops to zero
          m_moving = false;
          setControl(0);
        }
      }
    };
  }
}

DUNE_TASK
