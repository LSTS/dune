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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstring>
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Payload
{
  namespace RedX
  {
    //! Task to control the Payload for RedX Project/Board. 
    //!
    //! @author Pedro Gonçalves

    using DUNE_NAMESPACES;

    static const uint8_t c_max_filters = 9;

    struct PumpAndMotor {
      bool isActive;
      float flowRate;  // Pump flow rate in L/min
      float operationTime;  // Time the pump has been operating (in seconds)
      std::string name; // Name of the pump
      PumpAndMotor() : isActive(false), flowRate(0.0f), operationTime(0.0f) {}
      void start() {
        isActive = true;
      }
      void stop() {
        isActive = false;
        operationTime = 0.0f; // Reset operation time when stopped
      }
    };

    struct Valve {
      bool isOpen;
      int filterNumber;
      std::string name; // Name of the valve
      Valve() : isOpen(false), filterNumber(0) {}
      void open() {
          isOpen = true;
      }
      void close() {
          isOpen = false;
      }
    };

    struct Sensor {
      bool isActive;
      float value;  // Sensor value (e.g., level, flow, etc.)
      std::string name; // Name of the sensor
      Sensor() : isActive(true), value(0.0f) {}
      float read() {
          return value;
      }
    };

    //! Task arguments.
    struct Arguments
    {
      // Name of motor to control the descending pump.
      std::string descend_pump_motor_name;
      // Name of bomb in water
      std::string bomb_in_water_name;
      // Name of bomb in tank
      std::string bomb_in_tank_name;
      // Name of sensor to monitor water tank maximum level.
      std::string sensor_water_tank_max_name;
      // Name of sensor to monitor water tank minimum level.
      std::string sensor_water_tank_min_name;
      // Name of purge valve for external tank.
      std::string purge_valve_ext_name;
      // Name of valves for filters.
      std::string filters[c_max_filters];
      // Name of sensor to monitor filter fill up.
      std::string sensor_fill_up_filter_name;
      // Name of entity to receive depth information from.
      std::string entity_label_depth_info;
      // Number of filters to use in the system.
      int number_of_filters;
      // Last filter that was used in the system.
      int last_filter_used;
      // Maximum time to wait for a filter to fill up.
      int max_time_to_fill_up_filter;
      // Maximum time to wait for a purge valve to open/close.
      int max_time_to_operate_purge_valve;
      // Depth to put the water bomb in water at when descending, in meters.
      double depth_to_put_bomb_in_water;
    };

    struct Task: public Tasks::Task
    {
      // State Machine Enum
      enum State {
        STATE_INITIAL,
        STATE_DESCENDING_PUMP,
        STATE_SAMPLING,
        STATE_PURGING,
        STATE_FILTERING,
        STATE_DRAINING,
        STATE_WAITING,
        STATE_COMPLETED
      };

      //! Task arguments.
      Arguments m_args;
      //! PumpAndMotor
      PumpAndMotor m_submersiblePumpMotor;
      PumpAndMotor m_submersiblePump;
      PumpAndMotor m_inTankPump;
      //! Valves
      Valve m_pressurizationPumpExtTank;
      //! Valves
      std::vector<Valve> m_filterValves;
      //! Sensors
      Sensor m_tankMaxLevelSensor;
      Sensor m_tankMinLevelSensor;
      Sensor m_flowSensor;
      Sensor m_depthSensor;
      //! Current state of the system.
      State m_current_state;
      //! Delay timer.
      Counter<double> m_delay_timer;
      //! Message to set depth for the bomb in water.
      IMC::Depth m_msg_depth;
      //! Last filter used in the system.
      int m_last_filter_used;
      //! Buffer to save state info for debugging purposes.
      std::string m_state_info_buffer;
      //! Flag to indicate if the system is waiting for manual reset after using all filters.
      bool m_waiting_for_manual_reset;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        // Retrieve configuration values.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Power Channel Control - Descend Motor", m_args.descend_pump_motor_name)
          .defaultValue("")
          .description("Name of motor to control the descending pump.");

        param("Power Channel Control - Bomb in Water", m_args.bomb_in_water_name)
          .defaultValue("")
          .description("Name of bomb in water sensor.");

        param("Power Channel Control - Bomb in Tank", m_args.bomb_in_tank_name)
          .defaultValue("")
          .description("Name of bomb in tank sensor.");

        param("Power Channel Control - Sensor Water Tank Maximum", m_args.sensor_water_tank_max_name)
          .defaultValue("")
          .description("Name of sensor to monitor water tank maximum level.");

        param("Power Channel Control - Sensor Water Tank Minimum", m_args.sensor_water_tank_min_name)
          .defaultValue("")
          .description("Name of sensor to monitor water tank minimum level.");

        param("Power Channel Control - Purge Valve Extern", m_args.purge_valve_ext_name)
          .defaultValue("")
          .description("Name of purge valve for external tank.");

        param("Entity Label for Depth Information", m_args.entity_label_depth_info)
          .defaultValue("")
          .description("Name of entity to receive depth information from.");

        // Extract power channel control labels
        for (uint8_t i = 1; i <= c_max_filters; ++i)
        {
          std::string option = String::str("Power Channel Control - Valve Filter %u", i);
          param(option, m_args.filters[i - 1])
          .defaultValue("")
          .description("Power Channel Control Label");
        }

        param("Power Channel Control - Sensor Filter Fill Up", m_args.sensor_fill_up_filter_name)
          .defaultValue("")
          .description("Name of sensor to monitor filter fill up.");

        param("Number of Filters to use", m_args.number_of_filters)
        .defaultValue("9")
        .minimumValue("1")
        .maximumValue("9")
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Number of filters to use in the system.");

        param("Maximum Time to wait for a filter to fill up", m_args.max_time_to_fill_up_filter)
        .defaultValue("60.0")
        .minimumValue("1.0")
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Maximum time to wait for a filter to fill up in seconds.");

        param("Maximum Time to wait for a purge valve to open/close", m_args.max_time_to_operate_purge_valve)
        .defaultValue("10.0")
        .minimumValue("1.0")
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Maximum time to wait for a purge valve to open/close in seconds.");

        param("Depth to put the water bomb in water at when descending", m_args.depth_to_put_bomb_in_water)
        .defaultValue("0.5")
        .minimumValue("0.1")
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Depth to put the water bomb in water at when descending in meters.");

        bind<IMC::PowerChannelControl>(this);
        bind<IMC::Depth>(this);
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onUpdateParameters(void)
      {
        debug("onUpdateParameters() called");
        if(paramChanged(m_args.depth_to_put_bomb_in_water))
        {
          inf("Updated depth to put the water bomb in water at when descending: %.2f meters", m_args.depth_to_put_bomb_in_water);
        }
        if(paramChanged(m_args.max_time_to_fill_up_filter))
        {
          inf("Updated maximum time to wait for a filter to fill up: %d seconds", m_args.max_time_to_fill_up_filter);
        }
        if(paramChanged(m_args.max_time_to_operate_purge_valve))
        {         
          inf("Updated maximum time to wait for a purge valve to open/close: %d seconds", m_args.max_time_to_operate_purge_valve);
        }
        if(paramChanged(m_args.number_of_filters))
        {
          inf("Updated number of filters to use in the system: %d", m_args.number_of_filters);
          m_state_info_buffer = "idle | Filters used " + std::to_string(m_last_filter_used) + ", remaining " + std::to_string(m_args.number_of_filters - m_last_filter_used);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        war("onResourceInitialization() called");
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        m_last_filter_used = 0;
        m_waiting_for_manual_reset = false;
        m_current_state = STATE_INITIAL;
        m_submersiblePumpMotor.name = m_args.descend_pump_motor_name;
        m_submersiblePumpMotor.isActive = false;
        sendPowerChannelControl(m_submersiblePumpMotor.name, PowerChannelControl::PCC_OP_TURN_OFF); // Ensure the pump motor is off at initialization
        m_submersiblePump.name = m_args.bomb_in_water_name;
        m_submersiblePump.isActive = false;
        sendPowerChannelControl(m_submersiblePump.name, PowerChannelControl::PCC_OP_TURN_OFF); // Ensure the pump is off at initialization
        m_inTankPump.name = m_args.bomb_in_tank_name;
        m_inTankPump.isActive = false;
        sendPowerChannelControl(m_inTankPump.name, PowerChannelControl::PCC_OP_TURN_OFF); // Ensure the in-tank pump is off at initialization
        m_pressurizationPumpExtTank.name = m_args.purge_valve_ext_name;
        m_pressurizationPumpExtTank.isOpen = false;
        sendPowerChannelControl(m_pressurizationPumpExtTank.name, PowerChannelControl::PCC_OP_TURN_OFF); // Ensure the external tank pressurization pump is off at initialization
        for (int i = 0; i < m_args.number_of_filters; ++i)
        {
          Valve valve;
          valve.name = m_args.filters[i];
          valve.isOpen = false;
          m_filterValves.push_back(valve);
          sendPowerChannelControl(valve.name, PowerChannelControl::PCC_OP_TURN_OFF); // Ensure all filter valves are off at initialization
        }
        m_tankMaxLevelSensor.name = m_args.sensor_water_tank_max_name;
        m_tankMaxLevelSensor.isActive = false;
        sendPowerChannelControl(m_tankMaxLevelSensor.name, PowerChannelControl::PCC_OP_TURN_OFF); // Ensure the tank max level sensor is off at initialization
        m_tankMinLevelSensor.name = m_args.sensor_water_tank_min_name;
        m_tankMinLevelSensor.isActive = false;
        sendPowerChannelControl(m_tankMinLevelSensor.name, PowerChannelControl::PCC_OP_TURN_OFF); // Ensure the tank min level sensor is off at initialization
        m_flowSensor.name = m_args.sensor_fill_up_filter_name;
        m_flowSensor.isActive = false;
        sendPowerChannelControl(m_flowSensor.name, PowerChannelControl::PCC_OP_TURN_OFF); // Ensure the flow sensor is off at initialization  
        m_depthSensor.name = "Depth Sensor"; // Assuming a fixed name for depth sensor
        m_depthSensor.isActive = true;
        m_depthSensor.value = 0.0f; // Initialize depth sensor value
        m_state_info_buffer = "idle | Filters used 0, remaining " + std::to_string(m_args.number_of_filters);
        setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        parsePCCMessage(msg);
      }

      void
      consume(const IMC::Depth* msg)
      {
        parseDepthMessage(msg);
      }

      void
      onRequestActivation(void)
      {
        debug("onRequestActivation() called");
        activate();
      }

      void
      onActivation(void) override
      {
        debug("onActivation() called");
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_current_state = STATE_INITIAL;
      }

      void
      onRequestDeactivation(void)
      {
        debug("onRequestDeactivation() called");
        deactivate();
      }

      void
      onDeactivation(void) override
      {
        debug("onDeactivation() called");
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        m_current_state = STATE_COMPLETED;
      }

      void
      sendPowerChannelControl(const std::string& channel_name, uint8_t operation)
      {
        IMC::PowerChannelControl msg;
        msg.name = channel_name;
        msg.op = operation;
        msg.sched_time = 0.0; // Immediate operation
        dispatch(msg);
        inf("Sent PowerChannelControl message for channel '%s' with operation %s",
          channel_name.c_str(), operation? "ON" : "OFF");
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          if(isActive())
          {
            if(m_last_filter_used >= 0)
            {
              updateMachineState();
            }
            else
            {
              war("No more filters to use, waiting for manual set of filters.");
              m_waiting_for_manual_reset = true;
              requestDeactivation();
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_IDLE);
            }
          }
          else
          {
            if(m_waiting_for_manual_reset)
            {
              m_state_info_buffer = "error | No more filters to use, waiting for manual set of filters (" + std::to_string(m_args.number_of_filters) + " filters used).";
              requestDeactivation();
              setEntityState(IMC::EntityState::ESTA_ERROR, m_state_info_buffer);
            }
            else
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
            }
          }
        }
      }

      void
      parseDepthMessage(const IMC::Depth* msg)
      {
        if(resolveEntity(msg->getSourceEntity()) == m_args.entity_label_depth_info)
        {
          debug("Received depth update: %.2f meters from source entity %s.", msg->value, resolveEntity(msg->getSourceEntity()).c_str());
          if(m_current_state == STATE_DESCENDING_PUMP)
          {
            m_depthSensor.value = msg->value;
            if(m_depthSensor.value >= m_args.depth_to_put_bomb_in_water)
            {
              m_submersiblePumpMotor.stop();
              sendPowerChannelControl(m_submersiblePumpMotor.name, PowerChannelControl::PCC_OP_TURN_OFF);
              inf("Submersible pump motor turned OFF at depth %.2f meters.", m_depthSensor.value);
              m_submersiblePump.start();
              sendPowerChannelControl(m_submersiblePump.name, PowerChannelControl::PCC_OP_TURN_ON);
              m_state_info_buffer = "active | Descending pump deactivated and external pump activated, reached target depth " + std::to_string(m_depthSensor.value) + " meters.";
              setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
              m_current_state = STATE_SAMPLING;
            }
          }
        }
      }

      void
      parsePCCMessage(const IMC::PowerChannelControl* msg)
      {
        // Here you would implement the logic to handle incoming control messages
        // For example, you could check the channel name and operation and update the state of pumps, valves, etc.
        debug("Parsing PowerChannelControl message for channel '%s' with operation %s", msg->name.c_str(), msg->op? "ON" : "OFF");

        // Detect the tank is full by checking the max level sensor and if we are currently sampling, then start the purging process
        if(msg->name.c_str() == m_tankMaxLevelSensor.name && m_current_state == STATE_SAMPLING)
        {
          if(msg->op == PowerChannelControl::PCC_OP_TURN_ON)
          {
            m_tankMaxLevelSensor.isActive = true;
            inf("Tank maximum level reached, starting in-tank pump and opening purge valve to external tank to start purging.(Time to purge: %d seconds)", m_args.max_time_to_operate_purge_valve);
            m_inTankPump.start();
            sendPowerChannelControl(m_inTankPump.name, PowerChannelControl::PCC_OP_TURN_ON);
            m_submersiblePump.stop();
            sendPowerChannelControl(m_submersiblePump.name, PowerChannelControl::PCC_OP_TURN_OFF);
            sendPowerChannelControl(m_pressurizationPumpExtTank.name, PowerChannelControl::PCC_OP_TURN_ON);
            m_delay_timer.setTop(m_args.max_time_to_operate_purge_valve);
            m_current_state = STATE_PURGING;
            m_state_info_buffer = "active | Tank maximum level reached, started in-tank pump and opened purge valve to external tank to start purging. Timeout to purge: " + std::to_string(m_args.max_time_to_operate_purge_valve) + " seconds.";
            setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
          }
        }

        if(m_current_state == STATE_FILTERING)
        {
          if(msg->name.c_str() == m_flowSensor.name)
          {
            if(msg->op == PowerChannelControl::PCC_OP_TURN_ON)
            {
              m_flowSensor.isActive = true;
              inf("Flow sensor activated, filter is full, close pressurize filter %d.", m_last_filter_used + 1);
              sendPowerChannelControl(m_args.filters[m_last_filter_used], PowerChannelControl::PCC_OP_TURN_OFF);
              inf("Starting purge to exterior of the tank.");
              sendPowerChannelControl(m_pressurizationPumpExtTank.name, PowerChannelControl::PCC_OP_TURN_ON);
              m_current_state = STATE_DRAINING;
              m_state_info_buffer = "active | Flow sensor activated, filter " + std::to_string(m_last_filter_used + 1) + " is full, closed pressurization for the filter and started purge to exterior of the tank.";
              setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
            }
          }
          else if(msg->name.c_str() == m_tankMinLevelSensor.name)
          {
            m_tankMinLevelSensor.isActive = true;
            inf("Tank minimum level reached, stopping in-tank pump and closing valve of filter %d to stop filling up filter.", m_last_filter_used + 1);
            m_inTankPump.stop();
            sendPowerChannelControl(m_inTankPump.name, PowerChannelControl::PCC_OP_TURN_OFF);
            sendPowerChannelControl(m_args.filters[m_last_filter_used], PowerChannelControl::PCC_OP_TURN_OFF);
            m_inTankPump.stop();
            sendPowerChannelControl(m_inTankPump.name, PowerChannelControl::PCC_OP_TURN_OFF);
            m_current_state = STATE_COMPLETED;
            m_state_info_buffer = "active | Tank minimum level reached, stopped in-tank pump and closed valve of filter " + std::to_string(m_last_filter_used + 1) + " to stop filling up filter.";
            setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
          }
        }

        if(m_current_state == STATE_DRAINING || m_current_state == STATE_WAITING)
        {
          if(msg->name.c_str() == m_tankMinLevelSensor.name)
          {
            m_pressurizationPumpExtTank.isOpen = false;
            inf("Purge to exterior of the tank finished, closing purge valve to exterior and stop internal pump.");
            sendPowerChannelControl(m_pressurizationPumpExtTank.name, PowerChannelControl::PCC_OP_TURN_OFF);
            m_inTankPump.stop();
            sendPowerChannelControl(m_inTankPump.name, PowerChannelControl::PCC_OP_TURN_OFF);
            m_current_state = STATE_COMPLETED;
            m_state_info_buffer = "active | Purge to exterior of the tank finished, closed purge valve to exterior and stopped internal pump.";
            setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
          }
        }
      }

      void
      updateMachineState(void)
      {
        switch (m_current_state)
        {
          case STATE_INITIAL:
            m_current_state = STATE_DESCENDING_PUMP;
            sendPowerChannelControl(m_submersiblePumpMotor.name, PowerChannelControl::PCC_OP_TURN_ON);
            m_msg_depth.value = m_args.depth_to_put_bomb_in_water;
            dispatch(m_msg_depth);
            inf("Transitioning to DESCENDING_PUMP state.");
            m_state_info_buffer = "active | Descending pump activated, waiting to reach target depth " + std::to_string(m_args.depth_to_put_bomb_in_water) + " meters.";
            setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
            break;

          case STATE_PURGING:
            if(m_delay_timer.overflow())
            {
              inf("Purge valve operation time finish, transitioning to FILTERING state and closing purge valve to external tank.");
              sendPowerChannelControl(m_pressurizationPumpExtTank.name, PowerChannelControl::PCC_OP_TURN_OFF);
              m_pressurizationPumpExtTank.isOpen = false;
              m_delay_timer.setTop(m_args.max_time_to_fill_up_filter);
              inf("Transitioning to FILTERING state and starting to fill up filter. Timeout to fill up filter: %d seconds.", m_args.max_time_to_fill_up_filter);
              inf("Using filter %d.", m_last_filter_used + 1);
              sendPowerChannelControl(m_args.filters[m_last_filter_used], PowerChannelControl::PCC_OP_TURN_ON);
              m_state_info_buffer = "active | Filling up filter " + std::to_string(m_last_filter_used + 1) + ", timeout to fill up: " + std::to_string(m_args.max_time_to_fill_up_filter) + " seconds.";
              setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
              m_current_state = STATE_FILTERING;
            }
            setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
            break;

          case STATE_FILTERING:
            if(m_delay_timer.overflow())
            {
              inf("Filter %d fill up time expired, transitioning to DRAINING state (purge to exterior of the tank).", m_last_filter_used + 1);
              sendPowerChannelControl(m_args.filters[m_last_filter_used], PowerChannelControl::PCC_OP_TURN_OFF);
              // open the valve to purge to exterior of the tank
              sendPowerChannelControl(m_pressurizationPumpExtTank.name, PowerChannelControl::PCC_OP_TURN_ON);
              m_current_state = STATE_DRAINING;
              m_state_info_buffer = "active | Filter " + std::to_string(m_last_filter_used + 1) + " fill up time expired, purging to exterior of the tank.";
              setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
            }
            setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
            break;

          case STATE_COMPLETED:
            inf("Sampling process completed.");
            m_last_filter_used++;
            m_state_info_buffer = "idle | Filters used " + std::to_string(m_last_filter_used) + ", remaining " + std::to_string(m_args.number_of_filters - m_last_filter_used);
            setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
            if(m_last_filter_used >= m_args.number_of_filters)
            {
               war("All filters have been used, no more filters to use.");
               m_last_filter_used = -1; // Reset to the first filter if we have used
            }
            requestDeactivation();
            break;

          default:
            setEntityState(IMC::EntityState::ESTA_NORMAL, m_state_info_buffer.c_str());
            break;
        }
        
      }

    };
  }
}

DUNE_TASK
