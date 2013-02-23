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
  namespace Goto
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Desired Path message to send to path control
      IMC::DesiredPath m_path;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        bindToManeuver<Task, IMC::Goto>();
        bind<IMC::PathControlState>(this);
      }

      void
      consume(const IMC::Goto* maneuver)
      {
        setControl(IMC::CL_PATH);

        m_path.end_lat = maneuver->lat;
        m_path.end_lon = maneuver->lon;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;

        dispatch(m_path);
      }

      void
      consume(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
          signalCompletion();
        else
          signalProgress(pcs->eta);
      }
    };
  }
}

DUNE_TASK
