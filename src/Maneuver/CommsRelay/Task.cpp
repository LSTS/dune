//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jose Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace CommsRelay
  {
    using DUNE_NAMESPACES;

    enum CRMODE {
      GOING,
      LOITER,
      STOP
    };

    struct Arguments
    {
      float loitering_radius;
      float z;
      std::string z_mode;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      IMC::CommsRelay m_maneuver;
      IMC::DesiredPath m_path;

      CRMODE m_mode;
      double m_lat_a;
      double m_lat_b;

      double m_lon_a;
      double m_lon_b;

      double m_cur_lat;
      double m_cur_lon;

      double m_lat_center;
      double m_lon_center;

      double m_start_time;

      uint32_t m_control;
      bool m_near;

      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        bindToManeuver<Task, IMC::CommsRelay>();
        bind<IMC::EstimatedState>(this);
        bind<IMC::Announce>(this);

        param("Loitering Radius", m_args.loitering_radius)
        .defaultValue("75")
        .units(Units::Meter)
        .description("Radius of loitering circle after arriving at destination");

        param("Z Value", m_args.z)
        .defaultValue("")
        .units(Units::Meter)
        .description("Z value to maintain while executing this maneuver.");

        param("Z Mode", m_args.z_mode)
        .defaultValue("")
        .description("Z Mode to use. One of Depth, Altitude or Height.");

        // initialize everything...
        m_mode = STOP;
        m_near = false;
        m_lat_a = m_cur_lat = m_lat_b = m_lat_center = 0;
        m_lon_a = m_cur_lon = m_lon_b = m_lon_center =  0;
        m_start_time = m_control = 0;
      }

      void
      onManeuverDeactivation(void)
      {
        // stop moving
        setControl(0);
        m_mode = STOP;
      }

      void
      onUpdateParameters(void)
      {
        if (m_args.z_mode == "Depth")
          m_control = IMC::CL_DEPTH | IMC::CL_SPEED | IMC::CL_PATH;
        else if (m_args.z_mode == "Altitude")
          m_control = IMC::CL_ALTITUDE | IMC::CL_SPEED | IMC::CL_PATH;
        else 
          m_control = IMC::CL_SPEED | IMC::CL_PATH;
      }

      void
      consume(const IMC::CommsRelay* maneuver)
      {
        m_maneuver = *maneuver;

        // parameters initialization
        m_lat_a = m_lat_b = m_lat_center = m_maneuver.lat;
        m_lon_a = m_lon_b = m_lon_center = m_maneuver.lon;
        m_start_time = Clock::get();

        // start moving towards initial point
        m_mode = GOING;
        updateDesiredPath();
        setControl(m_control);
        dispatch(m_path);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        // compute coordinates of received state
        double lat, lon;
        Coordinates::toWGS84(*msg, lat, lon);

        // if external system, update its position
        if (!m_ctx.resolver.isLocal(msg->getSource()))
          updatePosition(msg->getSource(), lat, lon);
        else
        {
          // otherwise update own position
          m_cur_lat = lat;
          m_cur_lon = lon;
        }
      }

      void
      consume(const IMC::Announce* msg)
      {
        // update external system position
        updatePosition(msg->getSource(), msg->lat, msg->lon);
      }

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

        // check if it is near the target (centroid)
        m_near = pcs->flags & IMC::PathControlState::FL_NEAR;

        // state machine step
        step();
      }

      void
      step(void)
      {
        bool loiter = m_args.loitering_radius > 0;
        double dist = WGS84::distance(m_cur_lat, m_cur_lon, 0, m_lat_center, m_lon_center, 0);

        debug("Near: %d, Loiter: %d, Distance: %.5f, Mode: %d", m_near, loiter, dist, m_mode);

        switch(m_mode)
        {
          case (GOING):
            // if on loiter mode and close to the loiter circle, start loitering
            if (loiter && dist < (m_args.loitering_radius + m_maneuver.move_threshold - 10))
            {
              updateDesiredPath();
              dispatch(m_path);
              m_mode = LOITER;
            }
            if (!loiter && m_near)
            {
              // close to the target and hovering, start hovering
              setControl(0);
              m_mode = STOP;
            }
            break;
          default:
            // if loitering or hovering, check if it should start going to a new position
            if (dist > m_args.loitering_radius + m_maneuver.move_threshold)
              {
                updateDesiredPath();
                setControl(m_control);
                dispatch(m_path);
                m_mode = GOING;
              }
              break;
        }
      }

      //! Update position of a system given its coordinates
      bool
      updatePosition(uint16_t system, double lat, double lon)
      {
        debug("updatePosition");
        bool centerChanged = false;

        if (system == m_maneuver.sys_a)
        {
          debug("%s updated its position", m_ctx.resolver.resolve(system));
          m_lat_a = lat;
          m_lon_a = lon;
          centerChanged = true;
        }

        if (system == m_maneuver.sys_b)
        {
          debug("%s updated its position", m_ctx.resolver.resolve(system));
          m_lat_b = lat;
          m_lon_b =  lon;
          centerChanged = true;
        }

        if (centerChanged)
        {
          debug("center has changed");
          m_lat_center = (m_lat_a + m_lat_b) / 2;
          m_lon_center = (m_lon_a + m_lon_b) / 2;

          // let the target point change while going there
          if (m_mode == GOING )
          {
            updateDesiredPath();
            dispatch(m_path);
          }
          else
            // otherwise check if it should start moving again...
            step();
        }

        return centerChanged;
      }

      //! Method used to update (but not send) the desired path
      void updateDesiredPath()
      {
        double dist = WGS84::distance(m_cur_lat, m_cur_lon, 0, m_lat_center, m_lon_center, 0);
        if (dist <= m_args.loitering_radius + m_maneuver.move_threshold)
          m_path.lradius = m_args.loitering_radius;
        else
          m_path.lradius = 0;

        m_path.speed = m_maneuver.speed;
        m_path.speed_units = m_maneuver.speed_units;
        m_path.end_lat = m_lat_center;
        m_path.end_lon = m_lon_center;
        m_path.end_z = m_args.z;
        
        if (m_args.z_mode == "Depth")
          m_path.end_z_units = IMC::Z_DEPTH;
        else if (m_args.z_mode == "Altitude")
          m_path.end_z_units = IMC::Z_ALTITUDE;
        else if (m_args.z_mode == "Height")
          m_path.end_z_units = IMC::Z_HEIGHT;
      }
    };
  }
}

DUNE_TASK
