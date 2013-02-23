//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Periodic.cpp 12695 2013-01-23 22:54:41Z rasm                     $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>
#include <cmath>

// DUNE headers.
#include <DUNE/IMC/Bus.hpp>
#include <DUNE/Tasks/Context.hpp>
#include <DUNE/Tasks/Periodic.hpp>
#include <DUNE/Time/Clock.hpp>
#include <DUNE/Time/Delay.hpp>

namespace DUNE
{
  namespace Tasks
  {
    Periodic::Periodic(const std::string& name, Context& ctx):
      Task(name, ctx),
      m_run_count(0),
      m_run_time(0)
    {
      param(DTR_RT("Execution Frequency"), m_frequency)
      .units(Units::Hertz)
      .defaultValue("1.0")
      .description(DTR("Frequency at which task is executed"));
    }

    void
    Periodic::onMain(void)
    {
      double now = Time::Clock::get();
      double delay = (1 / m_frequency);
      double next_inv = now + delay;
      m_run_time = now;

      while (!stopping())
      {
        delay = (1.0 / m_frequency);

        if (next_inv > now)
          Time::Delay::wait(next_inv - now);

        next_inv += delay;
        now = Time::Clock::get();
        m_run_time = now;

        // Perform job.
        consumeMessages();
        if (!stopping())
        {
          task();
          ++m_run_count;
        }

        now = Time::Clock::get();
      }
    }
  }
}
