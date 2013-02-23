//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <sstream>
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace UAV
  {
    namespace RemoteOperation
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        double max_bank; // Maximum bank angle.
        double max_vrate; // Maximum vertical rate.
        double min_speed; // Minimum speed.
        double max_speed; // Maximum speed.
      };

      struct Task: public DUNE::Control::BasicRemoteOperation
      {
        Arguments m_args; // Task arguments.
        IMC::DesiredRoll m_bank; // Bank reference.
        IMC::DesiredSpeed m_speed; // Speed reference.
        IMC::DesiredVerticalRate m_vrate; // Vertical rate reference.
        IMC::ControlLoops m_cloops; // Control loop activation/deactivation.

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicRemoteOperation(name, ctx)
        {
          param("Maximum Bank", m_args.max_bank)
          .units(Units::Degree)
          .defaultValue("25")
          .description("Maximum value for bank reference");

          param("Maximum Vertical Rate", m_args.max_vrate)
          .units(Units::MeterPerSecond)
          .defaultValue("3")
          .description("Maximum value for vertical rate reference");

          param("Minimum Speed", m_args.min_speed)
          .units(Units::MeterPerSecond)
          .defaultValue("17")
          .description("Minimum value for speed reference");

          param("Maximum Speed", m_args.max_speed)
          .units(Units::MeterPerSecond)
          .defaultValue("24")
          .description("Maximum value for speed reference");

          m_speed.speed_units = IMC::SUNITS_METERS_PS;

          // Add remote actions.
          addActionAxis("VerticalRate");
          addActionAxis("Speed");
          addActionAxis("Bank");
        }

        void
        onUpdateParameters(void)
        {
          m_args.max_bank = Angles::radians(m_args.max_bank);
        }

        void
        onActivation(void)
        {
          m_cloops.enable = IMC::ControlLoops::CL_ENABLE;
          m_cloops.mask = IMC::CL_VERTICAL_RATE | IMC::CL_SPEED | IMC::CL_ROLL;
          dispatch(m_cloops);
          normalize();
        }

        void
        onDeactivation(void)
        {
          normalize();
        }

        void
        onConnectionTimeout(void)
        {
          normalize();
        }

        void
        normalize()
        {
          m_bank.value = 0;
          m_vrate.value = 0;
          m_speed.value = (m_args.min_speed + m_args.max_speed) * 0.5;
          update();
        }

        void
        update(void)
        {
          trace("%0.2f %0.2f %0.2f", Angles::degrees(m_bank.value), m_speed.value, m_vrate.value);

          dispatch(m_bank);
          dispatch(m_speed);
          dispatch(m_vrate);
        }

        void
        onRemoteActions(const IMC::RemoteActions* msg)
        {
          TupleList tl(msg->actions);

          m_bank.value = tl.get("Bank", 0.0) / 127. * m_args.max_bank;
          m_vrate.value = -tl.get("VerticalRate", 0.0) / 127. * m_args.max_vrate;
          m_speed.value = m_args.min_speed +
          0.5 * (m_args.max_speed - m_args.min_speed) *
          (1 + tl.get("Speed", 0.0) / 127);
          update();
        }
      };
    }
  }
}

DUNE_TASK
