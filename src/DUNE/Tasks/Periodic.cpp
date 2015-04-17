//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
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
