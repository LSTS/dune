//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <memory>
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Command.hpp"

namespace Supervisors
{
  //! This task executes commands during power down and power down abort
  //! to safely shutdown the systems. Moreover, it allows slave system
  //! names to be added so that they are notified. To do so, requires a
  //! TCP/UDP link with the slave system to exchange messages.
  //!
  //! @author Ricardo Martins
  namespace Power
  {
    using DUNE_NAMESPACES;

    //! Invalid power operation.
    static const int c_power_op_invalid = -1;

    struct Arguments
    {
      //! Main power channel name.
      std::string pwr_main;
      //! Command to execute on power down.
      std::string cmd_pwr_down;
      //! Command to execute on power down abort.
      std::string cmd_pwr_down_abort;
      //! Slave systems.
      std::vector<std::string> slave_systems;
    };

    struct Task: public Tasks::Task
    {
      //! Set of slave system not yet powered-off.
      std::set<uint16_t> m_notified_slaves;
      //! Last power operation.
      int m_power_op;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_power_op(c_power_op_invalid)
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

        param("Slave System Names", m_args.slave_systems)
        .description("Name of the slave systems");

        // Register listeners.
        bind<IMC::PowerOperation>(this);
        bind<IMC::PowerChannelControl>(this);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        if (msg->getDestination() == getSystemId())
          return;

        if (msg->name != "System")
          return;

        if ((powerDownInProgress() && msg->op == IMC::PowerChannelControl::PCC_OP_TURN_OFF)
            || (powerDownAborted() && msg->op == IMC::PowerChannelControl::PCC_OP_TURN_ON))
        {
          trace("notified %04X", msg->getSource());
          m_notified_slaves.erase(msg->getSource());
        }
      }

      void
      consume(const IMC::PowerOperation* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        m_power_op = msg->op;
      }

      void
      powerDown(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_POWER_DOWN);

        // Execute power down command.
        while (!powerDownCommand())
          waitForMessages(1.0);

        // Split point.
        if (powerDownInProgress())
        {
          notifySlaves(IMC::PowerOperation::POP_PWR_DOWN_IP);
          while (!m_notified_slaves.empty())
            waitForMessages(1.0);
        }

        if (powerDownInProgress())
        {
          controlSystemPower(IMC::PowerChannelControl::PCC_OP_TURN_OFF);
          m_power_op = c_power_op_invalid;
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      powerDownAbort(void)
      {
        if (powerDownAborted())
        {
          notifySlaves(IMC::PowerOperation::POP_PWR_DOWN_ABORTED);
          while (!m_notified_slaves.empty())
            waitForMessages(1.0);
        }

        if (powerDownAborted())
        {
          while (!powerDownAbortCommand())
            waitForMessages(1.0);
        }

        if (powerDownAborted())
        {
          controlSystemPower(IMC::PowerChannelControl::PCC_OP_TURN_ON);
          m_power_op = c_power_op_invalid;
        }
      }

      bool
      powerDownCommand(void)
      {
        return std::system(m_args.cmd_pwr_down.c_str()) == 0;
      }

      bool
      powerDownAbortCommand(void)
      {
        return std::system(m_args.cmd_pwr_down_abort.c_str()) == 0;
      }

      void
      notifySlaves(IMC::PowerOperation::OperationEnum op)
      {
        m_notified_slaves.clear();

        for (size_t i = 0; i < m_args.slave_systems.size(); ++i)
        {
          uint16_t addr = resolveSystemName(m_args.slave_systems[i]);
          m_notified_slaves.insert(addr);

          IMC::PowerOperation pop;
          pop.setDestination(addr);
          pop.op = op;
          dispatch(pop);
        }
      }

      void
      controlSystemPower(IMC::PowerChannelControl::OperationEnum op)
      {
        IMC::PowerChannelControl pcc;
        pcc.setDestination(getSystemId());
        pcc.name = m_args.pwr_main;
        pcc.op = op;
        dispatch(pcc);
      }

      bool
      powerDownInProgress(void)
      {
        return m_power_op == IMC::PowerOperation::POP_PWR_DOWN_IP;
      }

      bool
      powerDownAborted(void)
      {
        return m_power_op == IMC::PowerOperation::POP_PWR_DOWN_ABORTED;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (powerDownInProgress())
            powerDown();
          else if (powerDownAborted())
            powerDownAbort();
        }
      }
    };
  }
}

DUNE_TASK
