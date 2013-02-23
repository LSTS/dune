//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Goncalo Cruz                                                     *
// Author: Joao Fortuna                                                     *
// Author: Christian Fuchs                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

// Preliminary version of Fly By Camera
// Flies vehicle based on camera orientation

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace FlyByCamera
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      IMC::DesiredHeading m_heading_msg;
      double m_heading_v_desired;
      double m_heading_c_current;
      IMC::ControlLoops m_loops;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        param("Desired Vehicle Heading", m_heading_v_desired)
        .description("Desired Heading for the vehicle to follow")
        .defaultValue("0");

        param("Current Camera Heading", m_heading_c_current)
        .description("Current Camera heading in respect to the vehicle")
        .defaultValue("0");

        bind<IMC::EstimatedState>(this);
      }

      void
      onResourceAcquisition(void)
      {
        m_loops.enable = 1;
        m_loops.mask = IMC::CL_YAW;
        dispatch(m_loops);
        inf("yaw controller activated");
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_heading_c_current=msg->psi+(3.14/20);
        m_heading_v_desired=m_heading_c_current;
        m_heading_msg.value=m_heading_v_desired;
        dispatch(m_heading_msg);
        inf("The desired heading is %f", m_heading_msg.value);
      }
    };
  }
}

DUNE_TASK
