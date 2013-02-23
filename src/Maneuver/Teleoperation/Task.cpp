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
  namespace Teleoperation
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        bindToManeuver<Task, IMC::Teleoperation>();
        bind<IMC::TeleoperationDone>(this);
      }

      void
      consume(const IMC::Teleoperation* maneuver)
      {
        (void)maneuver;

        setControl(IMC::CL_TELEOPERATION);
        signalProgress();
      }

      void
      consume(const IMC::TeleoperationDone* msg)
      {
        (void)msg;

        signalCompletion();
      }
    };
  }
}

DUNE_TASK
