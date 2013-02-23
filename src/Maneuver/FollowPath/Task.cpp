//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace FollowPath
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Struct for waypoint
      struct Waypoint
      {
        double lat;
        double lon;
        double z;
        uint8_t z_units;
      };

      //! Desired path message.
      IMC::DesiredPath m_path;
      //! Vector of waypoints.
      std::vector<Waypoint> m_wpts;
      //! Current waypoint.
      unsigned int m_curr;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        bindToManeuver<Task, IMC::FollowPath>();
        bind<IMC::PathControlState>(this);
      }

      void
      reset(void)
      {
        m_wpts.clear();
        m_curr = 0;
      }

      void
      onManeuverDeactivation(void)
      {
        reset();
      }

      void
      consume(const IMC::FollowPath* maneuver)
      {
        reset();

        IMC::MessageList<IMC::PathPoint>::const_iterator itr = maneuver->points.begin();

        // Iterate point list
        for (; itr != maneuver->points.end(); itr++)
        {
          if ((*itr) == NULL)
            continue;

          Waypoint w;
          w.lat = maneuver->lat;
          w.lon = maneuver->lon;
          WGS84::displace((*itr)->x, (*itr)->y, &w.lat, &w.lon);
          w.z = maneuver->z + (*itr)->z;
          w.z_units = maneuver->z_units;

          m_wpts.push_back(w);
        }

        if (!m_wpts.size())
        {
          signalCompletion();
          return;
        }

        debug("starting path with %lu waypoints", (long unsigned int)m_wpts.size());

        setControl(IMC::CL_PATH);

        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        gotoNextPoint();
      }

      void
      consume(const IMC::PathControlState* pcs)
      {
        std::stringstream ss;
        ss << "waypoint=" << m_curr;

        signalProgress(pcs->eta, ss.str());

        if (!(pcs->flags & IMC::PathControlState::FL_NEAR))
          return;

        if (m_curr + 1 == m_wpts.size())
        {
          signalCompletion();
          return;
        }

        ++m_curr;

        gotoNextPoint();
      }

      //! Routine to throw next waypoint
      //! @param[in] pcs pathcontrolstate message pointer
      void
      gotoNextPoint(void)
      {
        Waypoint& w = m_wpts[m_curr];
        m_path.end_lat = w.lat;
        m_path.end_lon = w.lon;
        m_path.flags = 0;
        m_path.end_z = w.z;
        m_path.end_z_units = w.z_units;
        dispatch(m_path);
      }
    };
  }
}

DUNE_TASK
