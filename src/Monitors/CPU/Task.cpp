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
#include <cstring>
#include <queue>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace CPU
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // Number of moving average samples for CPU usage.
      unsigned cpu_avg_samples;
      // Maximum CPU usage.
      float cpu_max;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      // CPU usage moving average.
      MovingAverage<double>* m_cpu_avg;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_cpu_avg(NULL)
      {
        param("CPU - Moving Average Samples", m_args.cpu_avg_samples)
        .defaultValue("10")
        .minimumValue("0")
        .description("Number of moving average samples to smooth CPU usage");

        param("CPU - Maximum Usage", m_args.cpu_max)
        .defaultValue("75")
        .minimumValue("0")
        .maximumValue("100")
        .description("Maximum CPU usage. When this value is hit an error will be raised");

        // Initialize Entity State.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        // Register listeners.
        bind<IMC::CpuUsage>(this);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_cpu_avg);
      }

      void
      onResourceInitialization(void)
      {
        m_cpu_avg = new MovingAverage<double>(m_args.cpu_avg_samples);
      }

      void
      consume(const IMC::CpuUsage* msg)
      {
        double value = m_cpu_avg->update(msg->value);

        if (value > m_args.cpu_max)
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_CPU_TOO_HIGH);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      task(void)
      { }
    };
  }
}

DUNE_TASK
