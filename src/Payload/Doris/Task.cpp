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

#include <unordered_map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Payload
{
  namespace Doris
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Minimum Water Level GPIO label.
      std::string min_water_level_gpio;
      //! Maximum Water Level GPIO label.
      std::string max_water_level_gpio;
      //! Motor id.
      uint8_t motor_id;
      //! Water flow 1 source entity label.
      std::string water_flow_1_elabel;
      //! Water flow 2 source entity label.
      std::string water_flow_2_elabel;
      //! Pump 1 power channel label.
      std::string pump1_pwr_ch_label;
      //! Pump 2 power channel label.
      std::string pump2_pwr_ch_label;
      //! Pump 3 power channel label.
      std::string pump3_pwr_ch_label;
      //! Pump 4 power channel label.
      std::string pump4_pwr_ch_label;
      //! Pump 5 power channel label.
      std::string pump5_pwr_ch_label;
      //! Step motor id.
      uint8_t step_id;
      //! Endpoint 1 GPIO label.
      std::string endpoint1_gpio;
      //! Endpoint 2 GPIO label.
      std::string endpoint2_gpio;
      //! Valve 1 power channel label.
      std::string valve1_pwr_ch_label;
      //! Valve 2 power channel label.
      std::string valve2_pwr_ch_label;
      //! Valve 3 power channel label.
      std::string valve3_pwr_ch_label;
    };

    //! Task to control WhiteX payload. 
    //!
    //! @author Bernardo Gabriel
    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! QueryPowerChannelState message.
      IMC::QueryPowerChannelState m_qry_pwr_ch_state;
      //! Get GPIOState message.
      IMC::GpioStateGet m_get_gpio_state;
      //! SetThrusterActuation message for step motor.
      IMC::SetThrusterActuation m_sta_step;
      //! PowerChannelControl message.
      IMC::PowerChannelControl m_pcc;
      //! WaterFlow 1 source entity id.
      unsigned m_water_flow_1_eid;
      //! WaterFlow 2 source entity id.
      unsigned m_water_flow_2_eid;
      //! Map of GPIO states.
      std::unordered_map<std::string, bool> m_gpio_states;
      //! Map of Water Flows.
      std::unordered_map<unsigned, fp32_t> m_water_flows;
      //! Map of Power Channel states.
      std::unordered_map<std::string, bool> m_pwr_ch_states;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_water_flow_1_eid(UINT_MAX),
        m_water_flow_2_eid(UINT_MAX)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER, true);

        param("Minimum Water Level - GPIO Label", m_args.min_water_level_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the minimum water level.");

        param("Maximum Water Level - GPIO Label", m_args.max_water_level_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the maximum water level.");

        param("Water Flow 1 - Entity Label", m_args.water_flow_1_elabel)
        .editable(false)
        .description("Entity label of the source of the first water flow.");

        param("Water Flow 2 - Entity Label", m_args.water_flow_2_elabel)
        .editable(false)
        .description("Entity label of the source of the second water flow.");

        param("Motor Id", m_args.motor_id)
        .editable(false)
        .description("Id of the motor to control.");

        param("Pump 1 - Power Channel Name", m_args.pump1_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls pump 1.");

        param("Pump 2 - Power Channel Name", m_args.pump2_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls pump 2.");

        param("Pump 3 - Power Channel Name", m_args.pump3_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls pump 3.");

        param("Pump 4 - Power Channel Name", m_args.pump4_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls pump 4.");

        param("Pump 5 - Power Channel Name", m_args.pump5_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls pump 5.");

        param("Valve 1 - Power Channel Name", m_args.valve1_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 1.");

        param("Valve 2 - Power Channel Name", m_args.valve2_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 2.");

        param("Valve 3 - Power Channel Name", m_args.valve3_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 3.");

        param("Step Motor Id", m_args.step_id)
        .editable(false)
        .description("ID of the step motor to control.");

        param("Endpoint 1 - GPIO Label", m_args.endpoint1_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the first endpoint.");

        param("Endpoint 2 - GPIO Label", m_args.endpoint2_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the second endpoint.");

        bind<IMC::GpioState>(this);
        bind<IMC::WaterFlow>(this);
        bind<IMC::PowerChannelState>(this);
      }

      void
      onUpdateParameters(void) override
      { }

      void
      tryResolveEntity(unsigned& eid, const std::string& elabel)
      {
        try
        {
          eid = resolveEntity(elabel);
        }
        catch (const std::exception& e)
        {
          err("Failed to resolve entity: %s", e.what());
          eid = UINT_MAX;
        }
      }

      void
      resolveWaterFlowEntity(unsigned& eid, const std::string& elabel)
      {
        tryResolveEntity(eid, elabel);
        if (eid != UINT_MAX)
          m_water_flows[eid] = 0.0f;
      }

      void
      onEntityResolution(void)
      {
        resolveWaterFlowEntity(m_water_flow_1_eid, m_args.water_flow_1_elabel);
        resolveWaterFlowEntity(m_water_flow_2_eid, m_args.water_flow_2_elabel);
      }

      void
      onResourceInitialization(void) override
      {
        m_gpio_states.clear();
        m_gpio_states[m_args.min_water_level_gpio] = false;
        m_gpio_states[m_args.max_water_level_gpio] = false;
        m_gpio_states[m_args.endpoint1_gpio] = false;
        m_gpio_states[m_args.endpoint2_gpio] = false;

        m_pwr_ch_states.clear();
        m_pwr_ch_states[m_args.pump1_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.pump2_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.pump3_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.pump4_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.pump5_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve1_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve2_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve3_pwr_ch_label] = false;
      }

      void
      onActivation(void) override
      {
        queryPowerChannels();
        queryGpios();
      }

      void
      onDeactivation(void) override
      {
      }
      
      void
      consume(const IMC::GpioState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        auto gpio = m_gpio_states.find(msg->name);
        if (gpio == m_gpio_states.end())
          return;

        gpio->second = msg->value != 0;
        spew("GPIO %s state: %s", msg->name.c_str(), gpio->second ? "true" : "false");
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        auto pwr_ch = m_pwr_ch_states.find(msg->name);
        if (pwr_ch == m_pwr_ch_states.end())
          return;

        pwr_ch->second = msg->state == IMC::PowerChannelState::PCS_ON;
        spew("Power Channel %s state: %s", msg->name.c_str(), pwr_ch->second ? "ON" : "OFF");
      }

      void
      consume(const IMC::WaterFlow* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        auto flow = m_water_flows.find(msg->getSourceEntity());
        if (flow == m_water_flows.end())
          return;

        flow->second = msg->value;
        spew("Water Flow from entity %u: %.2f m*m*m/s", flow->first, msg->value);
      }

      void
      queryPowerChannels(void)
      {
        dispatch(m_qry_pwr_ch_state);
      }

      void
      queryGpios(void)
      {
        for (const auto& gpio : m_gpio_states)
        {
          m_get_gpio_state.name = gpio.first;
          dispatch(m_get_gpio_state);
        }
      }

      void
      setThrusterActuation(uint8_t id, int step)
      {
        trace("setting thruster %u to %d", id, step);
        m_sta_step.id = id;
        m_sta_step.value = static_cast<float>(trimValue(step, -1, 1));
        dispatch(m_sta_step);
      }

      void
      setStep(int step)
      {
        setThrusterActuation(m_args.step_id, step);
      }

      void
      setMotor(int step)
      {
        setThrusterActuation(m_args.motor_id, step);
      }

      void
      setPowerChannel(const std::string& name, bool state)
      {
        trace("setting power channel %s to %s", name.c_str(), state ? "ON" : "OFF");
        m_pcc.name = name;
        m_pcc.op = state ? IMC::PowerChannelControl::PCC_OP_TURN_ON : IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(m_pcc);
      }

      void
      setPump(const std::string& name, bool state)
      {
        setPowerChannel(name, state);
      }

      void
      setValve(const std::string& name, bool state)
      {
        setPowerChannel(name, state);
      }

      void
      updateMachineState(void)
      { }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (isActive())
            updateMachineState();
        }
      }
    };
  }
}

DUNE_TASK
