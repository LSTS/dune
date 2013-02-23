//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// ISO C++ 98 headers.
#include <cmath>

namespace Maneuver
{
  namespace PopUp
  {
    using DUNE_NAMESPACES;

    //! Task arguments
    struct Arguments
    {
      //! Minimum number of satelites to accept fix
      unsigned min_sats;
      //! Minimum distance between gps_fix position and the estimated state
      float min_distance;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! DesiredPath message
      IMC::DesiredPath m_path;
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
      //! Station keeping behavior in case it is necessary
      Maneuvers::StationKeep* m_skeep;
      //! Timer counter for duration
      Time::Counter<float> m_counter;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_got_fix(false),
        m_matched_criteria(false),
        m_at_surface(false),
        m_near(false),
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

        if (m_maneuver.flags & IMC::PopUp::FLG_CURR_POS)
        {
          // disable control loops and let it surface
          setControl(IMC::CL_NONE);
        }
        else
        {
          Memory::clear(m_skeep);

          m_skeep = new Maneuvers::StationKeep(this, maneuver->lat, maneuver->lon,
                                               maneuver->radius, 0.0, IMC::Z_DEPTH,
                                               maneuver->speed, maneuver->speed_units);
        }
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        bool was_at_surface = m_at_surface;

        m_at_surface = msg->medium != IMC::VehicleMedium::VM_UNDERWATER;

        if (m_at_surface != was_at_surface && m_at_surface)
        {
          m_counter.setTop(m_maneuver.duration);
        }
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
        if (m_got_fix && !m_matched_criteria)
        {
          float dist = Coordinates::WGS84::distance(state->lat, state->lon, 0.0,
                                                    m_gps_lat, m_gps_lon, 0.0);

          if (dist < m_args.min_distance)
            m_matched_criteria = true;
        }

        if (m_matched_criteria && mustWait())
        {
          if (m_counter.overflow())
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
        m_near = (pcs->flags & IMC::PathControlState::FL_NEAR) != 0;

        if (m_matched_criteria && mustWait())
        {
          signalProgress(std::ceil(m_counter.getRemaining()));
        }
        else
        {
          // can be estimated though
          signalProgress();
        }
      }

      bool
      mustWait(void)
      {
        return (m_maneuver.flags & IMC::PopUp::FLG_WAIT_AT_SURFACE) != 0;
      }

      bool
      mustKeep(void)
      {
        return (m_maneuver.flags & IMC::PopUp::FLG_STATION_KEEP) != 0;
      }
    };
  }
}

DUNE_TASK
