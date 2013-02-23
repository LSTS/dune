//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Jose Pinto                                                   *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace FollowReference
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
    };

    struct Task : public DUNE::Maneuvers::Maneuver
    {
      //! Task arguments.
      Arguments m_args;

      //! Store maneuver specification
      IMC::FollowReference m_spec;

      //! Store latest received reference
      IMC::Reference m_last_ref;

      //! Estimated state
      IMC::EstimatedState m_estate;



      //! Store last timestamp when reference was received
      double m_last_ref_time;

      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_last_ref_time(0)
      {
        bindToManeuver<Task, IMC::FollowReference>();
        bind<IMC::Reference>(this);
        bind<IMC::EstimatedState>(this);
      }

      void
      consume(const IMC::FollowReference* msg)
      {
        m_spec = *msg;
      }

      void
      consume(const IMC::Reference* msg)
      {
        m_last_ref = *msg;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_estate = *msg;
      }
    };
  }
}

DUNE_TASK
