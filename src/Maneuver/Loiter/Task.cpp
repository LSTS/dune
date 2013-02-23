//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Task.cpp 12667 2013-01-22 02:44:42Z rasm                         $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace Loiter
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      IMC::DesiredPath m_path;
      double m_end_time;
      uint16_t m_duration;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        bindToManeuver<Task, IMC::Loiter>();
        bind<IMC::PathControlState>(this);
      }

      void
      consume(const IMC::Loiter* maneuver)
      {
        setControl(IMC::CL_PATH);

        if (maneuver->radius < 0)
        {
          signalError(DTR("invalid loiter radius"));
          return;
        }

        m_path.end_lat = maneuver->lat;
        m_path.end_lon = maneuver->lon;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;
        m_path.lradius = maneuver->radius;

        if (maneuver->direction == IMC::Loiter::LD_CCLOCKW)
          m_path.flags = IMC::DesiredPath::FL_CCLOCKW;
        else
          m_path.flags = 0;  // clockwise by default

        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        dispatch(m_path);

        m_duration = maneuver->duration;
        m_end_time = -1;
      }

      void
      consume(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_LOITERING)
        {
          if (m_duration)
          {
            double now = Clock::get();

            if (m_end_time < 0)
            {
              m_end_time = now + m_duration;
              inf(DTR("will now loiter for %d seconds"), m_duration);
            }
            else if (now >= m_end_time)
            {
              signalCompletion();
            }
            else
            {
              signalProgress((uint16_t)Math::round(m_end_time - now));
            }
          }
        }
        else
        {
          if (m_duration > 0)
            signalProgress(pcs->eta + m_duration);
          else
            signalProgress();
        }
      }
    };
  }
}

DUNE_TASK
