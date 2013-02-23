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
  namespace StationKeeping
  {
    using DUNE_NAMESPACES;

    //! Task arguments
    struct Arguments
    {
      //! Minimum radius to prevent incompatibility with path controller
      double min_radius;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Station Keeping behavior
      Maneuvers::StationKeep* m_skeep;
      //! PathControlState message
      IMC::PathControlState m_pcs;
      //! Maneuver's duration
      float m_duration;
      //! Timer counter for maneuver duration
      Time::Counter<float> m_counter;
      //! End time for the maneuver
      double m_end_time;
      //! Path control says vehicle is near
      bool m_near;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_skeep(NULL),
        m_end_time(0.0)
      {
        param("Minimum Radius", m_args.min_radius)
        .defaultValue("10.0")
        .description("Minimum radius to prevent incompatibility with path controller");

        bindToManeuver<Task, IMC::StationKeeping>();
        bind<IMC::EstimatedState>(this);
        bind<IMC::PathControlState>(this);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_skeep);
      }

      void
      consume(const IMC::StationKeeping* maneuver)
      {
        m_near = false;
        m_duration = maneuver->duration;

        Memory::clear(m_skeep);
        m_skeep = new Maneuvers::StationKeep(maneuver, this, m_args.min_radius);

        if (m_duration > 0)
          m_end_time = -1.0;
      }

      void
      consume(const IMC::EstimatedState* state)
      {
        if (m_skeep->isInside() && (m_end_time < 0))
          m_end_time = Clock::get() + m_duration;

        m_skeep->update(state, m_near);
      }

      void
      consume(const IMC::PathControlState* pcs)
      {
        m_pcs = *pcs;

        m_near = (pcs->flags & IMC::PathControlState::FL_NEAR) != 0;
      }

      void
      onStateReport(void)
      {
        if (m_duration > 0 && m_end_time > 0)
        {
          double time_left = m_end_time - Clock::get();

          if (time_left <= 0)
            signalCompletion();
          else
            signalProgress((uint16_t)Math::round(time_left));
        }
        else if (m_skeep->isMoving())
        {
          signalProgress(m_pcs.eta);
        }
      }
    };
  }
}

DUNE_TASK
