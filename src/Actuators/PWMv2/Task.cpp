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
  //! This task requires dtoverlay=pwm-2chan for Raspberry Pi.
  //! For RaspberryPi 5, /boot/config.txt or equivalent must have:
  //!  - dtoverlay=pwm-2chan,pin=12,func=4,pin2=13,func2=4 (to use GPIO12 and GPIO13)
  //!    - Task Argument: PWM = 2:0:period:duty_cycle, 2:1:period:duty_cycle
  //!  - dtoverlay=pwm-2chan,pin=18,func=2,pin2=19,func2=2 (to use GPIO18 and GPIO19)
  //!    - Task Argument: PWM = 0:0:period:duty_cycle, 0:1:period:duty_cycle
  //! @author João Bogas
  namespace PWMv2
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! PWM Channels.
      std::vector<std::string> channels;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! PWM signals.
      std::map<unsigned, DirectPWM> m_channel;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("PWM", m_args.channels)
        .description("List of <Index>:<PWM chip>:<Channel>:<Period>:<Duty Cycle>");

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
        try
        {
          tryParseArgs();
        }
        catch (const std::exception& e)
        {
          throw RestartNeeded(e.what(), 10);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      tryParseArgs(void)
      {
        for (const auto& c : m_args.channels)
        {
          auto [index, chip, channel, period, dc] = parsePWM(c);
          createPWMChannel(index, chip, channel, period, dc);
        }
      }

      std::tuple<unsigned, unsigned, int, uint32_t, uint32_t>
      parsePWM(const std::string& str)
      {
        std::vector<std::string> parts;
        String::split(str, ":", parts);

        if (parts.size() != 5)
          throw std::runtime_error("Invalid PWM format <index:chip:channel:period:dc> : " + str);

        unsigned index = std::stoi(parts[0]);
        unsigned chip = std::stoi(parts[1]);
        int channel = std::stoi(parts[2]);
        uint32_t period = std::stoi(parts[3]);
        uint32_t dc = std::stoi(parts[4]);

        return {index, chip, channel, period, dc};
      }

      void
      createPWMChannel(unsigned idx, unsigned chip, int channel, uint32_t period, uint32_t dc)
      {
        try
        {
          m_channel.try_emplace(idx, this, chip, channel, period, dc);
        }
        catch (const std::exception& e)
        {
          err("Failed to initialize PWM %d: %s", idx, e.what());
          setEntityState(IMC::EntityState::ESTA_ERROR, e.what());
          m_channel.erase(idx);
          return;
        }

        inf("PWM chip %d channel %d initialized", chip, channel);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        m_channel.clear();
      }

      void
      consume(const IMC::SetPWM* msg)
      {
        debug("Setting PWM %d to %u us (%u)", msg->id, msg->duty_cycle, msg->period);

        const auto& channel = m_channel.find(msg->id);
        if (channel == m_channel.end())
        {
          debug("Channel %d not initialized", msg->id);
          return;
        }

        auto& pwm = channel->second;
        pwm.setPeriod(msg->period);
        pwm.setDutyCycle(msg->duty_cycle);
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