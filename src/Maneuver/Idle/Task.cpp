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
  namespace Idle
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      double m_end_time;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        bindToManeuver<Task, IMC::IdleManeuver>();
      }

      void
      consume(const IMC::IdleManeuver* maneuver)
      {
        setControl(0); // maneuver does not enable any control

        if (maneuver->duration)
        {
          m_end_time = Clock::get() + maneuver->duration;
          signalProgress(maneuver->duration);
        }
        else
        {
          signalProgress();
          m_end_time = -1;
        }
      }

      void
      onStateReport(void)
      {
        if (m_end_time < 0)
        {
          signalProgress();
          return;
        }

        double time_left = m_end_time - Clock::get();

        if (time_left < 0)
          signalCompletion();
        else
          signalProgress((uint16_t)time_left);
      }
    };
  }
}

DUNE_TASK
