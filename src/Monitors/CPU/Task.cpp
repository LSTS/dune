//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
        .description("Number of moving average samples to smooth CPU usage");

        param("CPU - Maximum Usage", m_args.cpu_max)
        .defaultValue("75")
        .description("Maximum CPU usage. When this value is hit an error will be raised");

        // Initialize Entity State.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        // Register listeners.
        bind<IMC::CpuUsage>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
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
