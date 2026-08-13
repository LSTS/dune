//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#pragma once

#include <functional>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <DUNE/Optional.hpp>
#include <DUNE/Entities/ParameterizedEntity.hpp>

#include "Definitions.hpp"

namespace Actuators
{
  //! @author Bernardo Gabriel
  namespace WASABi
  {
    using DUNE_NAMESPACES;
    using DUNE::Entities::ParameterizedEntity;
    using DUNE::Optional::optional;

    struct OSLO: public ParameterizedEntity
    {
      OSLO(Tasks::AbstractTask* owner, Tasks::Context& context):
        ParameterizedEntity(owner, context),
        m_sendCommand(nullptr),
        m_state(false)
      {
        for (uint8_t i = 0; i < c_oslo_num_pwr_chs; i++)
        {
          const std::string label = String::str("Valve %u - Name", i);
          param(label, m_args.pwr_ch_names[i])
          .editable(false)
          .defaultValue("")
          .description(String::str("Name of Valve %u.", i));

          const std::string state = String::str("Valve %u - State", i);
          param(state, m_args.pwr_ch_states[i])
          .defaultValue("false")
          .description(String::str("State of Valve %u.", i));
        }

        param("Endpoint 1 - Label", m_args.endpoint_labels[0])
        .editable(false)
        .defaultValue("")
        .description("Label of the endpoint 1.");

        param("Endpoint 2 - Label", m_args.endpoint_labels[1])
        .editable(false)
        .defaultValue("")
        .description("Label of the endpoint 2.");

        param("Step Id", m_args.step_id)
        .defaultValue("0")
        .description("Step ID of the OSLO step motor.");

        param("Step Frequency", m_args.step_freq)
        .defaultValue("100")
        .minimumValue("1")
        .maximumValue("1000")
        .description("Frequency of the OSLO step motor.");

        param("Step Mode", m_args.step_mode)
        .defaultValue("0")
        .minimumValue("0")
        .maximumValue("7")
        .description("Mode of the OSLO step motor.");

        m_pwr_chs.clear();
        m_gpio_states.clear();
      }

      ~OSLO(void) = default;

      void
      onUpdateParameters(void) override
      {
        for (uint8_t i = 0; i < c_oslo_num_pwr_chs; i++)
        {
          if (!paramChanged(m_args.pwr_ch_names[i]) && !paramChanged(m_args.pwr_ch_states[i]))
            continue;

          if (m_args.pwr_ch_names[i].empty())
            continue;

          auto& pwr_ch = m_pwr_chs[m_args.pwr_ch_names[i]];
          pwr_ch.id = i;
          pwr_ch.pcs.name = m_args.pwr_ch_names[i];
          pwr_ch.init_state = m_args.pwr_ch_states[i];
        }

        for (uint8_t i = 0; i < c_num_endpoints; i++)
        {
          if (!paramChanged(m_args.endpoint_labels[i]))
            continue;
          
          if (m_args.endpoint_labels[i].empty())
            continue;

          m_gpio_states[m_args.endpoint_labels[i]].name = m_args.endpoint_labels[i];
        }

        if ((paramChanged(m_args.step_freq) || paramChanged(m_args.step_mode)) && m_state)
        {
          m_owner->debug("trying to set step config to id=%u, freq=%d, mode=%d", m_args.step_id, m_args.step_freq, m_args.step_mode);
          setStepConfig(m_args.step_freq, m_args.step_mode);
        }
      }
    
      void
      setBindings(Tasks::Recipient* recipient) override
      {
        ParameterizedEntity::setBindings(recipient);
        bind<IMC::PowerChannelControl, OSLO>(recipient, this);
        bind<IMC::SetThrusterActuation, OSLO>(recipient, this);
        bind<IMC::QueryPowerChannelState, OSLO>(recipient, this);
        bind<IMC::GpioStateGet, OSLO>(recipient, this);
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        if (!m_state)
          return;

        // if (msg->getDestination() != getSystemId())
        //   return;

        if (m_pwr_chs.find(msg->name) == m_pwr_chs.end())
          return;

        switch (msg->op)
        {
        case PowerChannelControl::PCC_OP_TURN_ON:
          setValve(msg->name, true);
          break;

        case PowerChannelControl::PCC_OP_TURN_OFF:
          setValve(msg->name, false);
          break;

        case PowerChannelControl::PCC_OP_TOGGLE:
          setValve(msg->name, m_pwr_chs[msg->name].pcs.state != PowerChannelState::PCS_ON);
          break;

        case PowerChannelControl::PCC_OP_RESTART:
          setValve(msg->name, m_pwr_chs[msg->name].init_state);
          break;
        
        default:
          break;
        }
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        if (!m_state)
          return;

        // if (msg->getDestination() != getSystemId())
        //   return;

        if (msg->id != m_args.step_id)
          return;

        setStep(static_cast<int>(msg->value));
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        if (!m_state)
          return;

        // if (msg->getDestination() != getSystemId())
        //   return;

        for (auto& pwr_ch: m_pwr_chs)
          dispatchReply(*msg, pwr_ch.second.pcs);
      }

      void
      consume(const IMC::GpioStateGet* msg)
      {
        if (!m_state)
          return;

        // if (msg->getDestination() != getSystemId())
        //   return;

        auto gpio = m_gpio_states.find(msg->name);
        if (gpio == m_gpio_states.end())
          return;

        dispatchReply(*msg, gpio->second);
      }

      void
      endpoints(NMEAReader& reader)
      {
        bool old_state = m_state;
        m_state = false;
        optional<unsigned> endpoint;
        for (size_t i = 0; i < c_num_endpoints; i++)
        {
          reader >> endpoint;
          if (endpoint.has_value())
          {
            auto& gpio = m_gpio_states[m_args.endpoint_labels[i]];
            gpio.value = endpoint.value();
            dispatch(gpio);
            m_owner->trace("endpoint %zu: %s", i + 1, (gpio.value > 0) ? "true" : "false");
            m_state = true;
          }
        }

        if (old_state && !m_state)
          m_owner->war("lost %s", getLabel().c_str());
        else if (!old_state && m_state)
        {
          m_owner->inf("%s is alive", getLabel().c_str());
          initialize();
        }
      }

      void
      setSendCommand(std::function<void(const char*,
                                        const char,
                                        const bool,
                                        const std::vector<float>&)> sendCommand)
      {
        m_sendCommand = std::move(sendCommand);
      }

    private:
      //! Arguments.
      OSLOArguments m_args;
      //! Power Channels <label, power channel>.
      std::map<std::string, PowerChannel> m_pwr_chs;
      //! GPIO States <label, state>.
      std::map<std::string, IMC::GpioState> m_gpio_states;
      //! Send command function.
      std::function<void(const char*,
                         const char,
                         const bool,
                         const std::vector<float>&)> m_sendCommand;
      //! State.
      bool m_state;

      bool
      setValve(const std::string& label, const bool state)
      {
        if (!m_state)
          return false;

        try
        {
          auto& pwr_ch = m_pwr_chs.at(label);
          m_owner->debug("trying to turn %s valve \"%s\"", state ? "on" : "off", label.c_str());
          sendCommand(c_cmd_valve_ctl, c_cmd_ack[0], true, std::vector<float>{static_cast<float>(pwr_ch.id), static_cast<float>(state)});
          pwr_ch.pcs.state = state;
          dispatch(m_pwr_chs[label].pcs);
          m_owner->spew("valve \"%s\" is %s", label.c_str(), state ? "on" : "off");
          return true;
        }
        catch(const std::exception& e)
        {
          m_owner->err("failed to set valve : %s", e.what());
          return false;
        }
      }

      bool
      setStep(int value)
      {
        if (!m_state)
          return false;

        try
        {
          m_owner->debug("trying to set step to %d", value);
          sendCommand(c_cmd_step_ctl, c_cmd_ack[0], true, std::vector<float>{static_cast<float>(value)});
          m_owner->spew("step set to %d", value);
          return true;
        }
        catch(const std::exception& e)
        {
          m_owner->err("failed to set step : %s", e.what());
          return false;
        }
      }

      void
      setStepConfig(int freq, int mode)
      {
        if (!m_state)
          return;

        try
        {
          m_owner->debug("trying to set step config to freq=%d, mode=%d", freq, mode);
          sendCommand(c_cmd_step_cfg, c_cmd_ack[0], true, std::vector<float>{static_cast<float>(freq), static_cast<float>(mode)});
          m_owner->spew("step config set to freq=%d, mode=%d", freq, mode);
        }
        catch(const std::exception& e)
        {
          m_owner->err("failed to set step config : %s", e.what());
        }
      }

      void
      sendCommand(const char* cmd_type, const char cmd_reply = '\0', const bool persistent = false, const std::vector<float>& args = {})
      {
        if (m_sendCommand == nullptr || !m_state)
          return;

        m_sendCommand(cmd_type, cmd_reply, persistent, args);
      }

      void
      initialize(void)
      {
        m_pwr_chs.clear();
        for (uint8_t i = 0; i < c_oslo_num_pwr_chs; i++)
        {
          if (m_args.pwr_ch_names[i].empty())
            continue;

          auto& pwr_ch = m_pwr_chs[m_args.pwr_ch_names[i]];
          pwr_ch.id = i;
          pwr_ch.pcs.name = m_args.pwr_ch_names[i];
          pwr_ch.init_state = m_args.pwr_ch_states[i];
          setValve(pwr_ch.pcs.name, pwr_ch.init_state);
        }

        setStep(0);
        setStepConfig(m_args.step_freq, m_args.step_mode);
      }
    };
  }
}
