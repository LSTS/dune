//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstring>
#include <string>
#include <cstring>
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Power
{
  namespace DOAMv2
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! CPU power channel.
      std::string cpu_pwr;
      //! Camera power channel.
      std::string cam_pwr;
      //! Camera strobe power channel.
      std::string led_pwr;
      //! Slave system name.
      std::string slave_system;
      //! Slave entity name.
      std::string slave_entity;
    };

    struct Task: public Tasks::Task
    {
      //! True if the task is activating.
      bool m_activating;
      //! Task arguments.
      Arguments m_args;
      //! Activation timer
      Counter<double> m_act_timer;
      //! True if slave CPU is alive.
      bool m_slave_alive;
      //! System id of the slave DUNE instance.
      unsigned m_slave_id;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_activating(false),
        m_slave_alive(false)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Power Channel - CPU", m_args.cpu_pwr)
        .description("Power channel of the CPU");

        param("Power Channel - Camera", m_args.cam_pwr)
        .description("Power channel of the camera");

        param("Power Channel - Strobe", m_args.led_pwr)
        .description("Power channel of the strobe");

        param("Slave System Name", m_args.slave_system)
        .description("Name of the slave system");

        param("Slave Entity Name", m_args.slave_entity)
        .description("Name of the slave entity");

        // Register handler routines.
        bind<IMC::PowerOperation>(this);
        bind<IMC::Heartbeat>(this);
      }

      ~Task(void)
      {
      }

      void
      onUpdateParameters(void)
      {
        m_slave_id = resolveSystemName(m_args.slave_system);
      }

      void
      onEntityReservation(void)
      {
      }

      void
      onResourceAcquisition(void)
      {
      }

      void
      onResourceRelease(void)
      {
      }

      void
      onResourceInitialization(void)
      {
      }

      void
      consume(const IMC::Heartbeat* msg)
      {
        if (!m_activating || (msg->getSource() != m_slave_id))
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
      consume(const IMC::PowerOperation* msg)
      {
        if (msg->getDestination() == m_slave_id)
        {

        }

        // uint8_t value = 0;
        // if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_IP)
        //   value = 0;
        // else if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_ABORTED)
        //   value = 1;

        // setPowerChannelState(value);
      }

      void
      checkActivation(void)
      {
        if (m_act_timer.overflow())
        {
          activationFailed(DTR("failed to contact device"));
          m_activating = false;
          return;
        }

        if (m_slave_alive)
        {
          activate();
          debug("activation took %0.2f s", getActivationTime() - m_act_timer.getRemaining());

          IMC::SetEntityParameters ep;
          ep.name = m_args.slave_entity;
          IMC::EntityParameter ea;
          ea.name = "Active";
          ea.value = "true";
          ep.params.push_back(ea);
          dispatch(ep);
        }
      }

      void
      onRequestActivation(void)
      {
        m_slave_alive = false;
        sendPowerChannelControl(m_args.cam_pwr, true);
        sendPowerChannelControl(m_args.cpu_pwr, true);
        m_activating = true;
        m_act_timer.setTop(getActivationTime());
      }

      void
      onActivation(void)
      {
        m_activating = false;
        sendPowerChannelControl(m_args.led_pwr, true);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onRequestDeactivation(void)
      {
        sendPowerChannelControl(m_args.led_pwr, false);
        sendPowerChannelControl(m_args.cam_pwr, false);
        deactivate();
      }

      void
      onDeactivation(void)
      {
        sendPowerChannelControl(m_args.cpu_pwr, false);
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

          if (m_activating)
            checkActivation();
        }
      }
    };
  }
}

DUNE_TASK
