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
#include <DUNE/DUNE.hpp>

// ISO C++ 98 headers.
#include <cmath>

namespace Maneuver
{
  //! This task is responsible for emerging
  //! to acquire a gps fix.
  //!
  //! @author Pedro Calado
  namespace PopUp
  {
    using DUNE_NAMESPACES;

    //! Minimum radius for the elevators
    static const float c_min_radius = 10.0f;
    //! Tolerance in depth when reaching target depth in elevator
    static const float c_depth_tol = 0.3f;

    //! %Task arguments
    struct Arguments
    {
      //! Minimum number of satelites to accept fix
      unsigned min_sats;
      //! Minimum distance between gps_fix position and the estimated state
      float min_distance;
      //! Radius for the elevator behavior
      float elev_radius;
    };

    //! Maneuver states for the state machine
    enum PopUpState
    {
      //! Initial useless state
      ST_INITIAL,
      //! Go to point
      ST_GO_TO,
      //! Go up
      ST_GO_UP,
      //! Reaching the surface
      ST_NEAR_SURFACE,
      //! Get a fix
      ST_GET_FIX,
      //! Wait at the surface
      ST_WAIT,
      //! Station keep at the surface
      ST_SKEEP,
      //! Come back down
      ST_GO_DOWN,
      //! Maneuver is done
      ST_DONE
    };

    //! %PopUp task.
    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! DesiredPath message
      IMC::DesiredPath m_path;
      //! EstimatedState message
      IMC::EstimatedState m_state;
      //! PopUp maneuver message
      IMC::PopUp m_maneuver;
      //! Last GpsFix latitude
      double m_gps_lat;
      //! Last GpsFix longitude
      double m_gps_lon;
      //! True if a fix has been received yet
      bool m_got_fix;
      //! Matched criteria for popping up
      bool m_matched_criteria;
      //! Vehicle is not underwater
      bool m_at_surface;
      //! Estimated time of arrival from PathControlState
      unsigned m_path_eta;
      //! Station keeping behavior in case it is necessary
      Maneuvers::StationKeep* m_skeep;
      //! Elevator behavior
      Maneuvers::Elevate* m_elevate;
      //! Timer counter for duration
      Time::Counter<float> m_dur_timer;
      //! PopUp maneuver state
      PopUpState m_pstate;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_path_eta(Plans::c_max_eta),
        m_skeep(NULL),
        m_elevate(NULL),
        m_pstate(ST_INITIAL)
      {
        param("Minimum Satellites", m_args.min_sats)
        .defaultValue("7")
        .description("Least number of satellites to accept fixes");

        param("Minimum Distance", m_args.min_distance)
        .defaultValue("3.0")
        .units(Units::Meter)
        .description("Minimum distance between gps_fix position and the estimated state");

        param("Elevator Radius", m_args.elev_radius)
        .defaultValue("15.0")
        .units(Units::Meter)
        .description("Radius for the elevator behavior");

        bindToManeuver<Task, IMC::PopUp>();
        bind<IMC::EstimatedState>(this);
        bind<IMC::PathControlState>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::VehicleMedium>(this);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_skeep);
        Memory::clear(m_elevate);
      }

      void
      elevate(float z_value, unsigned z_units, bool current)
      {
        // Elevate upwards
        Memory::clear(m_elevate);

        IMC::Elevator elev;

        if (current)
        {
          elev.flags = IMC::Elevator::FLG_CURR_POS;
          // Start z doesn't matter
          elev.start_z = 0;
          elev.start_z_units = IMC::Z_DEPTH;
        }
        else
        {
          elev.flags = 0;
          elev.start_z = z_value;
          elev.start_z_units = z_units;
        }

        elev.lat = m_maneuver.lat;
        elev.lon = m_maneuver.lon;

        // End does however
        elev.end_z = z_value;
        elev.end_z_units = z_units;
        elev.radius = m_args.elev_radius;
        elev.speed = m_maneuver.speed;
        elev.speed_units = m_maneuver.speed_units;

        m_elevate = new Maneuvers::Elevate(&elev, this, c_min_radius, c_depth_tol);
      }

      inline void
      goUp(void)
      {
        elevate(0.0, IMC::Z_DEPTH, true);
      }

      inline void
      goDown(void)
      {
        elevate(m_maneuver.z, m_maneuver.z_units, false);
      }

      void
      consume(const IMC::PopUp* maneuver)
      {
        m_maneuver = *maneuver;
        m_dur_timer.setTop(m_maneuver.duration);

        if (useCurr())
        {
          goUp();
          m_pstate = ST_GO_UP;
        }
        else
        {
          setControl(IMC::CL_PATH);

          IMC::DesiredPath path;
          path.end_lat = m_maneuver.lat;
          path.end_lon = m_maneuver.lon;
          path.end_z = m_maneuver.z;
          path.end_z_units = m_maneuver.z_units;
          path.speed = m_maneuver.speed;
          path.speed_units = m_maneuver.speed_units;

          dispatch(path);

          m_pstate = ST_GO_TO;
        }
      }

      //! Used to check if we're at the surface
      void
      consume(const IMC::VehicleMedium* msg)
      {
        switch (m_pstate)
        {
          case ST_NEAR_SURFACE:
            if (msg->medium == IMC::VehicleMedium::VM_WATER)
            {
              if (mustWait())
              {
                m_pstate = ST_WAIT;
                m_dur_timer.reset();
              }
              else if (mustKeep())
              {
                m_pstate = ST_SKEEP;
                m_dur_timer.reset();

                Memory::clear(m_skeep);
                m_skeep = new Maneuvers::StationKeep(this, m_maneuver.lat, m_maneuver.lon,
                                                     m_args.elev_radius, 0.0, IMC::Z_DEPTH,
                                                     m_maneuver.speed,
                                                     m_maneuver.speed_units);
              }
              else
              {
                m_pstate = ST_GET_FIX;
              }
            }
            break;
          default:
            break;
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        float dist;

        switch (m_pstate)
        {
          case ST_GET_FIX:
            double lat;
            double lon;
            Coordinates::toWGS84(m_state, lat, lon);

            dist = Coordinates::WGS84::distance(lat, lon, 0.0,
                                                msg->lat, msg->lon, 0.0);

            if (dist < m_args.min_distance)
            {
              goDown();
              m_pstate = ST_GO_DOWN;
            }
            break;
          default:
            break;
        }
      }

      void
      consume(const IMC::EstimatedState* state)
      {
        m_state = *state;

        switch (m_pstate)
        {
          case ST_GO_UP:
          case ST_GO_DOWN:
            m_elevate->update(state);
            break;
          case ST_SKEEP:
            m_skeep->update(state);
            // fall through
          case ST_WAIT:
            if (m_dur_timer.overflow())
            {
              goDown();
              m_pstate = ST_GO_DOWN;
            }
            break;
          default:
            break;
        }
      }

      void
      consume(const IMC::PathControlState* pcs)
      {
        switch (m_pstate)
        {
          case ST_GO_TO:
            if (pcs->flags & IMC::PathControlState::FL_NEAR)
            {
              goUp();
              m_pstate = ST_GO_UP;
            }
            break;
          case ST_GO_UP:
            m_elevate->updatePathControl(pcs);

            // reached surface?
            if (m_elevate->isDone())
            {
              setControl(IMC::CL_NONE);
              m_pstate = ST_NEAR_SURFACE;
            }

            break;
          case ST_GO_DOWN:
            m_elevate->updatePathControl(pcs);

            // all done?
            if (m_elevate->isDone())
              m_pstate = ST_DONE;

            break;
          case ST_SKEEP:
            m_skeep->updatePathControl(pcs);
            break;
          case ST_DONE:
            signalCompletion();
            break;
          default:
            break;
        }
      }

      void
      onStateReport(void)
      {
        computeETA();
      }

      //! Compute ETA
      inline void
      computeETA(void)
      {
        if (m_pstate == ST_WAIT)
        {
          signalProgress((uint16_t)std::ceil(m_dur_timer.getRemaining()));
        }
        else if (m_pstate == ST_DONE)
        {
          signalProgress(0);
        }
        else
        {
          // TBD
        }
      }

      //! Will use current position
      //! @return true if must use current waypoint
      bool
      useCurr(void)
      {
        return (m_maneuver.flags & IMC::PopUp::FLG_CURR_POS) != 0;
      }

      //! Must wait some time at surface
      //! @return true if must wait when surface has been reached
      bool
      mustWait(void)
      {
        return (m_maneuver.flags & IMC::PopUp::FLG_WAIT_AT_SURFACE) != 0;
      }

      //! Must station keep while at surface
      //! @return true if position must be kept at surface
      bool
      mustKeep(void)
      {
        return (m_maneuver.flags & IMC::PopUp::FLG_STATION_KEEP) != 0;
      }
    };
  }
}

DUNE_TASK
