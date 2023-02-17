//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
#include <string>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  //! %Task has direct control over a configurable power channel when (de)activated.
  //! Task is activated only if a Heartbeat is received from the slave system
  //! indicating the slave system is alive.
  //! During system power down operations, it may also notify the slave system.
  //! To do so, this task requires a TCP/UDP link with the slave system to
  //! exchange messages.
  //!
  //! This task allows the following parameters to be defined
  //!  - <em>pwr_chn</em>: slave system power channel name.
  //!  - <em>slave_system</em>: slave system name.
  //!  - <em>dispatch_power_op</em>: if true, slave system is notified during power
  //     down operations.
  //!
  //! @author Ricardo Martins
  namespace SlaveCPU
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Power channel.
      std::string pwr_chn;
      //! Slave system name.
      std::string slave_system;
      //! Dispatch Power Operation.
      bool dispatch_power_op;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Activation timer
      Counter<double> m_act_timer;
      //! System id of the slave DUNE instance.
      unsigned m_slave_id;
      //! True if slave CPU is alive.
      bool m_slave_alive;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_slave_alive(false)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Power Channel", m_args.pwr_chn)
        .description("Power channel");

        param("Slave System Name", m_args.slave_system)
        .description("Name of the slave system");

        param("Dispatch Power Operation", m_args.dispatch_power_op)
        .defaultValue("true")
        .description("Instruct slave CPU to power down");

        // Register handler routines.
        bind<IMC::Heartbeat>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_slave_id = resolveSystemName(m_args.slave_system);
      }

      void
      consume(const IMC::Heartbeat* msg)
      {
        if (!isActivating() || (msg->getSource() != m_slave_id))
          return;

        if (std::abs(msg->getTimeStamp() - Clock::getSinceEpoch()) <= 1.0)
        {
          debug("slave CPU is alive and synchronized");
          m_slave_alive = true;
        }
      }

      void
      sendPowerChannelControl(const std::string& name, bool value)
      {
        IMC::PowerChannelControl pcc;
        pcc.name = name;

        if (value)
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        else
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;

        dispatch(pcc);
      }

      void
      onRequestActivation(void)
      {
        trace("on request activation");

        m_slave_alive = false;
        sendPowerChannelControl(m_args.pwr_chn, true);
        m_act_timer.setTop(getActivationTime());
      }

      void
      checkActivation(void)
      {
        if (!isActivating())
          return;

        if (m_act_timer.overflow())
        {
          activationFailed(DTR("failed to contact device"));
          sendPowerChannelControl(m_args.pwr_chn, false);
          return;
        }

        if (m_slave_alive)
        {
          activate();
          debug("activation took %0.2f s", getActivationTime() - m_act_timer.getRemaining());
        }
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onRequestDeactivation(void)
      {
        trace("on request deactivation");

        if (m_args.dispatch_power_op)
        {
          IMC::PowerOperation pop;
          pop.setDestination(m_slave_id);
          pop.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
          dispatch(pop);
        }

        m_act_timer.setTop(getDeactivationTime());
      }

      void
      checkDeactivation(void)
      {
        if (!isDeactivating())
          return;

        if (m_act_timer.overflow())
          deactivate();
      }

      void
      onDeactivation(void)
      {
        sendPowerChannelControl(m_args.pwr_chn, false);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (isActive())
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          else
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          checkActivation();
          checkDeactivation();
        }
      }
    };
  }
}

DUNE_TASK
