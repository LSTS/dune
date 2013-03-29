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

    //! %Task arguments
    struct Arguments
    {
      //! Minimum number of satelites to accept fix
      unsigned min_sats;
      //! Minimum distance between gps_fix position and the estimated state
      float min_distance;
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
      //! True if flag near from PathControlState has gone true
      bool m_near;
      //! Estimated time of arrival from PathControlState
      unsigned m_path_eta;
      //! Station keeping behavior in case it is necessary
      Maneuvers::StationKeep* m_skeep;
      //! Timer counter for duration
      Time::Counter<float> m_dur_timer;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_got_fix(false),
        m_matched_criteria(false),
        m_at_surface(false),
        m_near(false),
        m_path_eta(Plans::c_max_eta),
        m_skeep(NULL)
      {
        param("Minimum Satellites", m_args.min_sats)
        .defaultValue("7")
        .description("Least number of satellites to accept fixes");

        param("Minimum Distance", m_args.min_distance)
        .defaultValue("3.0")
        .units(Units::Meter)
        .description("Minimum distance between gps_fix position and the estimated state");

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
      }

      void
      consume(const IMC::PopUp* maneuver)
      {
        m_maneuver = *maneuver;

        if (useCurr())
        {
          // disable control loops and let it surface
          setControl(IMC::CL_NONE);
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
        }

        if (mustWait() && mustKeep())
        {
          Memory::clear(m_skeep);

          m_skeep = new Maneuvers::StationKeep(this, maneuver->lat, maneuver->lon,
                                               maneuver->radius, 0.0, IMC::Z_DEPTH,
                                               maneuver->speed, maneuver->speed_units);
        }
      }

      //! Used to check if we're at the surface
      void
      consume(const IMC::VehicleMedium* msg)
      {
        bool was_at_surface = m_at_surface;

        m_at_surface = msg->medium != IMC::VehicleMedium::VM_UNDERWATER;

        if (m_at_surface != was_at_surface && m_at_surface)
          m_dur_timer.setTop(m_maneuver.duration);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (m_at_surface && !m_matched_criteria)
        {
          if (msg->satellites >= m_args.min_sats)
          {
            m_gps_lat = msg->lat;
            m_gps_lon = msg->lon;
            m_got_fix = true;
          }
        }
      }

      void
      consume(const IMC::EstimatedState* state)
      {
        m_state = *state;

        if (m_got_fix && !m_matched_criteria)
        {
          double lat;
          double lon;
          Coordinates::toWGS84(*state, lat, lon);

          float dist = Coordinates::WGS84::distance(lat, lon, 0.0,
                                                    m_gps_lat, m_gps_lon, 0.0);

          if (dist < m_args.min_distance)
          {
            m_matched_criteria = true;
            debug("matched criteria");
          }
        }

        if (m_matched_criteria && mustWait())
        {
          if (m_dur_timer.overflow())
            signalCompletion();

          if (mustKeep())
            m_skeep->update(state, m_near);
        }
        else if (m_matched_criteria)
        {
          signalCompletion();
        }
      }

      void
      consume(const IMC::PathControlState* pcs)
      {
        if ((pcs->flags & IMC::PathControlState::FL_NEAR) && !m_near)
        {
          if (!useCurr() && !mustKeep())
            setControl(IMC::CL_NONE);
        }

        m_near = (pcs->flags & IMC::PathControlState::FL_NEAR) != 0;
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
        if (m_matched_criteria && mustWait())
        {
          signalProgress((uint16_t)std::ceil(m_dur_timer.getRemaining()));
        }
        else if (m_matched_criteria)
        {
          signalProgress(0);
        }
        else
        {
          unsigned rising_time = Plans::c_max_eta;
          unsigned steady_time = 0;

          if (!m_at_surface)
          {
            if (m_state.vz != 0.0)
              rising_time = (unsigned)std::ceil(std::fabs(m_state.depth / m_state.vz));

            // Might be heading to the waypoint
            if (!useCurr())
              rising_time += m_path_eta;
          }
          else
          {
            rising_time = 0;
          }

          if (mustWait())
            steady_time = m_maneuver.duration;
          else
            steady_time = (unsigned)Plans::c_fix_time;

          signalProgress(rising_time + steady_time);
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
