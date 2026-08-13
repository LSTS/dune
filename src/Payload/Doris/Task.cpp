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

    enum ModeEnum
    {
      MODE_INVALID = 0,
      MODE_AUTOMATIC = 1,
      MODE_MANUAL = 2
    };

    const std::unordered_map<std::string, ModeEnum> c_mode_map = {{ "Invalid", MODE_INVALID },
                                                                  { "Automatic", MODE_AUTOMATIC },
                                                                  { "Manual", MODE_MANUAL }};

    const std::unordered_map<ModeEnum, std::string> c_mode_str_map = {{ MODE_INVALID, "Invalid" },
                                                                      { MODE_AUTOMATIC, "Automatic" },
                                                                      { MODE_MANUAL, "Manual" }};

    //! Task arguments.
    struct Arguments
    {
      //! Operation mode.
      std::string mode;
      //! Minimum Water Level GPIO label.
      std::string min_water_level_gpio;
      //! Maximum Water Level GPIO label.
      std::string max_water_level_gpio;
      //! Motor entity label.
      std::string motor_elabel;
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
      //! Manual motor control.
      float manual_motor;
      //! Manual step control.
      int manual_step;
      //! Manual pump 1 control.
      bool manual_pump1;
      //! Manual pump 2 control.
      bool manual_pump2;
      //! Manual pump 3 control.
      bool manual_pump3;
      //! Manual pump 4 control.
      bool manual_pump4;
      //! Manual pump 5 control.
      bool manual_pump5;
      //! Manual valve 1 control.
      bool manual_valve1;
      //! Manual valve 2 control.
      bool manual_valve2;
      //! Manual valve 3 control.
      bool manual_valve3;
    };

    //! Task to control WhiteX payload. 
    //!
    //! @author Bernardo Gabriel
    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Operation mode.
      ModeEnum m_mode;
      //! QueryPowerChannelState message.
      IMC::QueryPowerChannelState m_qry_pwr_ch_state;
      //! Get GPIOState message.
      IMC::GpioStateGet m_get_gpio_state;
      //! SetThrusterActuation message.
      IMC::SetThrusterActuation m_sta;
      //! PowerChannelControl message.
      IMC::PowerChannelControl m_pcc;
      //! Motor entity id.
      unsigned m_motor_eid;
      //! WaterFlow 1 source entity id.
      unsigned m_water_flow_1_eid;
      //! WaterFlow 2 source entity id.
      unsigned m_water_flow_2_eid;
      //! Map of GPIO states.
      std::unordered_map<std::string, bool> m_gpio_states;
      //! Map of Water Flows.
      std::unordered_map<unsigned, fp32_t> m_water_flows;
      //! Map of Power Channel states.
      std::map<std::string, bool> m_pwr_ch_states;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_mode(MODE_INVALID),
        m_motor_eid(UINT_MAX),
        m_water_flow_1_eid(UINT_MAX),
        m_water_flow_2_eid(UINT_MAX)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER, true);

        param("Mode", m_args.mode)
        .defaultValue("Automatic")
        .values("Automatic, Manual")
        .description("Operation mode.");

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

        param("Motor Entity Label", m_args.motor_elabel)
        .editable(false)
        .description("Entity label of the motor to control.");

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

        param("Manual - Motor", m_args.manual_motor)
        .defaultValue("0.0")
        .minimumValue("-1.0")
        .maximumValue("1.0")
        .description("Manual control for the motor.");

        param("Manual - Step", m_args.manual_step)
        .defaultValue("0")
        .values("-1, 0, 1")
        .description("Manual control for the step motor.");

        param("Manual - Pump 1", m_args.manual_pump1)
        .defaultValue("false")
        .description("Manual control for pump 1.");

        param("Manual - Pump 2", m_args.manual_pump2)
        .defaultValue("false")
        .description("Manual control for pump 2.");

        param("Manual - Pump 3", m_args.manual_pump3)
        .defaultValue("false")
        .description("Manual control for pump 3.");

        param("Manual - Pump 4", m_args.manual_pump4)
        .defaultValue("false")
        .description("Manual control for pump 4.");

        param("Manual - Pump 5", m_args.manual_pump5)
        .defaultValue("false")
        .description("Manual control for pump 5.");

        param("Manual - Valve 1", m_args.manual_valve1)
        .defaultValue("false")
        .description("Manual control for valve 1.");

        param("Manual - Valve 2", m_args.manual_valve2)
        .defaultValue("false")
        .description("Manual control for valve 2.");

        param("Manual - Valve 3", m_args.manual_valve3)
        .defaultValue("false")
        .description("Manual control for valve 3.");

        m_sta.setDestination(getSystemId());

        bind<IMC::GpioState>(this);
        bind<IMC::WaterFlow>(this);
        bind<IMC::PowerChannelState>(this);
        bind<IMC::RemoteActions>(this);
      }

      void
      onUpdateParameters(void) override
      {
        if (paramChanged(m_args.mode))
        {
          auto it = c_mode_map.find(m_args.mode);
          if (it != c_mode_map.end())
          {
            m_mode = it->second;
            inf("Operation mode set to: %s", c_mode_str_map.at(m_mode).c_str());
          }
          else
          {
            err("Invalid operation mode: %s", m_args.mode.c_str());
            m_mode = MODE_INVALID;
          }
        }

        if (m_mode == MODE_MANUAL)
        {
          if (paramChanged(m_args.manual_motor))
            setMotor(m_args.manual_motor);

          if (paramChanged(m_args.manual_step))
            setStep(m_args.manual_step);

          if (paramChanged(m_args.manual_pump1))
            setPump(m_args.pump1_pwr_ch_label, m_args.manual_pump1);

          if (paramChanged(m_args.manual_pump2))
            setPump(m_args.pump2_pwr_ch_label, m_args.manual_pump2);

          if (paramChanged(m_args.manual_pump3))
            setPump(m_args.pump3_pwr_ch_label, m_args.manual_pump3);

          if (paramChanged(m_args.manual_pump4))
            setPump(m_args.pump4_pwr_ch_label, m_args.manual_pump4);

          if (paramChanged(m_args.manual_pump5))
            setPump(m_args.pump5_pwr_ch_label, m_args.manual_pump5);

          if (paramChanged(m_args.manual_valve1))
            setValve(m_args.valve1_pwr_ch_label, m_args.manual_valve1);

          if (paramChanged(m_args.manual_valve2))
            setValve(m_args.valve2_pwr_ch_label, m_args.manual_valve2);

          if (paramChanged(m_args.manual_valve3))
            setValve(m_args.valve3_pwr_ch_label, m_args.manual_valve3);
        }
      }

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
        tryResolveEntity(m_motor_eid, m_args.motor_elabel);
        resolveWaterFlowEntity(m_water_flow_1_eid, m_args.water_flow_1_elabel);
        resolveWaterFlowEntity(m_water_flow_2_eid, m_args.water_flow_2_elabel);
      }

      void
      setupRemoteActions(void)
      {
        IMC::RemoteActionsRequest ar;
        ar.op = IMC::RemoteActionsRequest::OP_REGISTER;
        ar.actions = "Motor=Slider;Step=Slider";
        dispatch(ar);
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

        setupRemoteActions();
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
      consume(const IMC::RemoteActions* msg)
      {
        if (m_mode != MODE_MANUAL)
          return;

        TupleList tuples(msg->actions);

        auto motor_value = tuples.get("Motor", 0);
        setMotor(motor_value / 127.0f);

        auto step_value = tuples.get("Step", 0);
        setStep(step_value / 127);
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
      setThrusterActuation(uint8_t id, float step, uint8_t destination = UINT8_MAX)
      {
        trace("setting thruster %u to %f", id, step);
        m_sta.setDestinationEntity(destination);
        m_sta.id = id;
        m_sta.value = std::clamp(step, -1.0f, 1.0f);
        dispatch(m_sta);
      }

      void
      setStep(int step)
      {
        setThrusterActuation(m_args.step_id, static_cast<float>(step));
      }

      void
      setMotor(float step)
      {
        setThrusterActuation(m_args.motor_id, step, static_cast<uint8_t>(m_motor_eid));
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
      changeMode(ModeEnum mode)
      {
        if (mode == m_mode)
          return;

        auto it = c_mode_str_map.find(mode);
        if (it != c_mode_str_map.end())
        {
          m_mode = mode;
          inf("operation mode changed to: %s", it->second.c_str());
        }
        else
        {
          err("invalid operation mode: %d", static_cast<int>(mode));
        }
      }

      void
      updateMachineState(void)
      {
        if (!isActive())
          return;

        if (m_mode != MODE_AUTOMATIC)
          return;
      }

      void
      updateEntityState(void)
      {
        std::ostringstream ss;
        ss << (isActive() ? "active" : "idle");
        ss << " | m: " << c_mode_str_map.at(m_mode).front();

        ss << " | wl: " << static_cast<int>(m_gpio_states[m_args.min_water_level_gpio])
                        << static_cast<int>(m_gpio_states[m_args.max_water_level_gpio]);

        ss << " | wf1: " << m_water_flows[m_water_flow_1_eid];
        ss << " | wf2: " << m_water_flows[m_water_flow_2_eid];

        ss << " | p: ";
        for (const auto& pwr_ch : m_pwr_ch_states)
          ss << static_cast<int>(pwr_ch.second);

        ss << " | e: " << static_cast<int>(m_gpio_states[m_args.endpoint1_gpio])
                       << static_cast<int>(m_gpio_states[m_args.endpoint2_gpio]);

        setEntityState(EntityState::ESTA_NORMAL, ss.str());
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          updateMachineState();
          updateEntityState();
        }
      }
    };
  }
}

DUNE_TASK
