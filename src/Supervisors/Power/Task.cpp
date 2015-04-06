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
      //! Main power channel.
      std::string pwr_main;
      //! Command to execute on power down.
      std::string cmd_pwr_down;
      //! Command to execute on power down abort.
      std::string cmd_pwr_down_abort;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Command.
      Command* m_cmd;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_cmd(NULL)
      {
        // Define configuration parameters.
        param("Main Power Channel", m_args.pwr_main)
        .defaultValue("System")
        .description("Name of the main power channel");

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
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::PowerOperation* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_IP)
        {
          if (m_cmd == NULL)
          {
            m_cmd = new Command(m_args.cmd_pwr_down);
            m_cmd->start();
          }
        }
        else if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_ABORTED)
        {
          // if (!m_power_down)
          //   return;

          // m_power_down = false;
          // m_power_down_now = false;

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

          // Power down command is in progress.
          if (m_cmd)
          {
            if (m_cmd->isDead())
            {
              bool success = m_cmd->success();
              m_cmd->stopAndJoin();
              Memory::clear(m_cmd);

              if (success)
              {
                war("%s", DTR(Status::getString(Status::CODE_POWER_DOWN)));
                IMC::PowerChannelControl pcc;
                pcc.setDestination(getSystemId());
                pcc.name = m_args.pwr_main;
                pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
                dispatch(pcc);
              }
              else
              {
                Delay::wait(1.0);
                m_cmd = new Command(m_args.cmd_pwr_down);
                m_cmd->start();
              }
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
