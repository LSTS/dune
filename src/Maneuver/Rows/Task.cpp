//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Task.cpp 12957 2013-02-19 15:23:25Z pdcalado                     $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace Rows
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Rows stages parser
      Maneuvers::RowsStages* m_parser;
      //! Desired path message
      IMC::DesiredPath m_path;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_parser(NULL)
      {
        bindToManeuver<Task, IMC::Rows>();
        bind<IMC::PathControlState>(this);
      }

      void
      onManeuverDeactivation(void)
      {
        Memory::clear(m_parser);
      }

      void
      consume(const IMC::Rows* maneuver)
      {
        Memory::clear(m_parser);

        m_parser = new Maneuvers::RowsStages(maneuver, this);

        // Get it started
        setControl(IMC::CL_PATH);
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;

        double lat;
        double lon;

        if (m_parser->getFirstPoint(&lat, &lon))
        {
          signalCompletion();
          return;
        }

        sendPath(lat, lon);
      }

      void
      consume(const IMC::PathControlState* pcs)
      {
        std::stringstream ss;
        ss << "waypoint=" << m_parser->getIndex();

        signalProgress(pcs->eta, ss.str());

        if (!(pcs->flags & IMC::PathControlState::FL_NEAR))
          return;

        double lat;
        double lon;

        if (m_parser->getNextPoint(&lat, &lon))
        {
          signalCompletion();
          return;
        }

        sendPath(lat, lon);
      }

      //! Send new desired path
      //! @param[in] lat latitude for new desired path
      //! @param[in] lon longitude for new desired path
      void
      sendPath(double lat, double lon)
      {
        // Calculate WGS-84 coordinates and fill DesiredPath message
        m_path.end_lat = lat;
        m_path.end_lon = lon;
        m_path.flags = 0;
        dispatch(m_path);
      }
    };
  }
}

DUNE_TASK
