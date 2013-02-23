//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <memory>
#include <cstring>
#include <algorithm>
#include <cerrno>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Command.hpp"

namespace Supervisors
{
  namespace Power
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // Command to execute on power down.
      std::string cmd_pwr_down;
      // Command to execute on power down abort.
      std::string cmd_pwr_down_abort;
    };

    struct Task: public Tasks::Task
    {
      // Task arguments.
      Arguments m_args;
      // True if powering down.
      bool m_power_down;
      // True if powering down immediately.
      bool m_power_down_now;
      // Command.
      Command* m_cmd;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_power_down(false),
        m_power_down_now(false),
        m_cmd(0)
      {
        // Define configuration parameters.
        param("Command - On Power Down", m_args.cmd_pwr_down)
        .defaultValue("")
        .description("Command to execute before powering down the system");

        param("Command - On Power Down Abort", m_args.cmd_pwr_down_abort)
        .defaultValue("")
        .description("Command to execute when the power down sequence is aborted");

        // Register listeners.
        bind<IMC::PowerOperation>(this);
      }

      void
      onResourceInitialization(void)
      {
        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::PowerOperation* msg)
      {
        if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_IP)
        {
          if (!m_power_down)
            m_power_down = true;
        }
        else if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_ABORTED)
        {
          if (!m_power_down)
            return;

          m_power_down = false;
          m_power_down_now = false;

          if (std::system(m_args.cmd_pwr_down_abort.c_str()) == -1)
          {
            setEntityState(IMC::EntityState::ESTA_ERROR,
                           DTR("failed to execute power down command"));
          }
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (!m_power_down)
            continue;

          if (m_power_down_now)
            continue;

          if (m_cmd == NULL)
          {
            m_cmd = new Command(m_args.cmd_pwr_down);
            m_cmd->start();
            continue;
          }

          if (m_cmd->isDone())
          {
            war("%s", DTR(Status::getString(Status::CODE_POWER_DOWN)));
            m_cmd->stopAndJoin();
            delete m_cmd;
            m_cmd = 0;

            Delay::wait(1.0);
            m_power_down_now = true;

            IMC::PowerChannelControl pcc;
            pcc.id = 255;
            pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
            dispatch(pcc);
          }
        }
      }
    };
  }
}

DUNE_TASK
