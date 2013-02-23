//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace Dubin
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      IMC::DesiredSpeed m_speed;
      IMC::DesiredHeading m_heading;
      bool m_got_href;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_got_href(false)
      {
        bindToManeuver<Task, IMC::Dubin>();
        bind<IMC::EstimatedState>(this);
      }

      void
      consume(const IMC::Dubin* maneuver)
      {
        setControl(IMC::CL_DEPTH | IMC::CL_SPEED | IMC::CL_YAW);

        if ((maneuver->z_units == IMC::Z_DEPTH) || (maneuver->z_units == IMC::Z_ALTITUDE))
        {
          IMC::DesiredZ zref;
          zref.value = maneuver->z;
          zref.z_units = maneuver->z_units;
          dispatch(zref);
        }
        else
        {
          signalError(DTR("vertical control type not supported"));
        }

        m_speed.value = maneuver->speed;
        m_speed.speed_units = maneuver->speed_units;
        dispatch(m_speed);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (!m_got_href)
        {
          m_heading.value = msg->psi;
          dispacth(m_heading);

          m_got_href = true;
        }
      }
    };
  }
}

DUNE_TASK
