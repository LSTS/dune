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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// local headers
#include "DirectPWM.hpp"

namespace Actuators
{
  //! Insert short task description here.
  //!
  //! This task requires
  //! dtoverlay=pwm-2chan,pin=18,func=2,pin2=19,func2=2 in /boot/config.txt or equivalent
  //! @author João Bogas
  namespace PWMv2
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! PWM Channels
      std::vector<unsigned> channels;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments
      Arguments m_args;
      //! PWM signals
      std::map<unsigned, DirectPWM> m_channel;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Channels", m_args.channels)
          .defaultValue("0, 1")
          .description("List of PWM channels active. Values separated by comma.");

        bind<IMC::SetServoPosition>(this);
        bind<IMC::SetPWM>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      { }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      { }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      { }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        for (size_t i = 0; i < m_args.channels.size(); i++)
          createPWMChannel(m_args.channels[i]);

        if (m_channel.empty())
        {
          setEntityState(IMC::EntityState::ESTA_BOOT, "No PWM channels initialized");
          return;
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      createPWMChannel(int idx)
      {
        try
        {
          m_channel.emplace(idx, DirectPWM(this, idx));
        }
        catch (const std::exception& e)
        {
          err("Failed to initialize PWM channel %d: %s", idx, e.what());
          setEntityState(IMC::EntityState::ESTA_ERROR, e.what());
          m_channel.erase(idx);
          return;
        }

        inf("PWM channel %d initialized", idx);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        m_channel.clear();
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        debug("Setting Servo %d to %f - %d ", msg->id, msg->value, radToDutycycle(msg->value));

        auto iter = m_channel.find(msg->id);
        if (iter == m_channel.end())
        {
          debug("Channel %d not initialized", msg->id);
          return;
        }

        DirectPWM& ref = iter->second;
        ref.setDutyCycle(radToDutycycle(msg->value));
      }

      uint32_t
      radToDutycycle(fp32_t rad)
      {
        float angle = Angles::degrees(rad);
        if (angle < -90)
          angle = -90;
        else if (angle > 90)
          angle = 90;

        return angle * 5.5 + 1495;
        // y = mx + b
        // m = (-90 - 90)/(1000 - 2000) ; b = 1000 - (-90*m)
      }
      void
      consume(const IMC::SetPWM* msg)
      {
        debug("Setting PWM %d to %u ms (%u)", msg->id, msg->duty_cycle, msg->period);

        auto iter = m_channel.find(msg->id);
        if (iter == m_channel.end())
        {
          debug("Channel %d not initialized", msg->id);
          return;
        }

        DirectPWM& ref = iter->second;
        ref.setPeriod(msg->period);
        ref.setDutyCycle(msg->duty_cycle);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!isStopping())
        {
          waitForMessages(0.5);
        }
      }
    };
  }
}

DUNE_TASK