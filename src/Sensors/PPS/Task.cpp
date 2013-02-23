//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace PPS
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // PPS device.
      std::string pps_dev;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Task arguments.
      Arguments m_args;
      // PPS object.
      Hardware::PPS* m_pps;
      // True if pulse detection is enabled.
      bool m_active;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_pps(NULL),
        m_active(false)
      {
        param("PPS Device", m_args.pps_dev)
        .defaultValue("")
        .description("Platform specific PPS device");

        bind<IMC::PulseDetectionControl>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        m_pps = new Hardware::PPS(m_args.pps_dev);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_pps);
      }

      void
      consume(const IMC::PulseDetectionControl* msg)
      {
        m_active = (msg->op == IMC::PulseDetectionControl::POP_ON);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (!m_active)
          {
            waitForMessages(0.1);
            continue;
          }
          else
            consumeMessages();

          int64_t time = m_pps->fetch(0.5);
          if (time < 0)
            continue;

          IMC::Pulse msg;
          msg.setTimeStamp(time / 1000000000.0);
          dispatch(msg, DF_KEEP_TIME);
        }
      }
    };
  }
}

DUNE_TASK
