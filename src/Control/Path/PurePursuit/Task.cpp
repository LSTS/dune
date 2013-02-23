//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Task.cpp 12667 2013-01-22 02:44:42Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace Path
  {
    namespace PurePursuit
    {
      using DUNE_NAMESPACES;

      struct Task: public DUNE::Control::PathController
      {
        IMC::DesiredHeading m_heading;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        { }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();
        }

        void
        onEntityReservation(void)
        {
          PathController::onEntityReservation();
        }

        void
        onPathActivation(void)
        {
          // Activate heading controller.
          enableControlLoops(IMC::CL_YAW);
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Head straight to target
          m_heading.value = ts.los_angle;

          if (ts.cc)
            m_heading.value = Angles::normalizeRadian(m_heading.value + state.psi - ts.course);

          dispatch(m_heading);
        }
      };
    }
  }
}

DUNE_TASK
