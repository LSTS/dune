//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: PGonçalves                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <queue>
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace MantaFuelLevel
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_fuel_level = 5;
    static const unsigned int c_timeout_warning_level = 10;
    static const unsigned int c_max_len_row_line_lcd = 16;

    struct Arguments
    {
      //! Entity label of temperature sensor.
      std::string elabel_fuel;
      //! Values for fuel level
      float fuel_level[c_max_fuel_level];
      //! Entity label to get voltage value of main power
      std::string elabel_voltage_main;
      //! Entity label to get current value of charger
      std::string elabel_current_charger;
      //! Current value of charger to reject
      float chager_current;
      //! Warning fuel level
      float warning_level;
      //! Shutdown fuel level
      float shutdow_level;
      //| Use Volatge to monitor fuel
      bool is_to_use_voltage;
      //! Warning fuel level voltage
      float warning_level_voltage;
      //! Shutdown fuel level voltage
      float shutdow_level_voltage;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! IMC msg for fuel level.
      IMC::FuelLevel m_fuel;
      //! LCD Control Message.
      IMC::LcdControl m_lcd;
      //! Task arguments.
      Arguments m_args;
      //! Flag to control state of task
      bool m_is_task_in_error;
      //! Voltage of battery pack.
      float m_battery_volts;
      //! Current of charge.
      float m_current_charge;
      //! Buffer forEntityState
      char m_bufer_entity[64];
      //! WatchDog for warning fuel level
      Counter<float> m_wdog;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx)
      {
        param("Entity Label - FuelLevel", m_args.elabel_fuel)
        .defaultValue("FuelLevel")
        .description("Entity label of fuel level.");

        for(unsigned int i = 0; i < c_max_fuel_level; ++i)
        {
          std::string option = String::str("Fuel Level %u", i + 1);
          param(option, m_args.fuel_level[i])
          .defaultValue("0")
          .description("Fuel Level value.");
        }

        param("Entity Label for Main Voltage", m_args.elabel_voltage_main)
        .defaultValue("Main Board")
        .description("Entity label to get main voltage level.");

        param("Entity Label for Charger Current", m_args.elabel_current_charger)
        .defaultValue("Charger")
        .description("Entity label to get charger current level.");

        param("Current Value Charger Reject", m_args.chager_current)
        .defaultValue("0.2")
        .description("Minimun value to ignore charge.");

        param("Fuel Percentage Warning", m_args.warning_level)
        .defaultValue("40")
        .description("Fuel Percentage Warning.");

        param("Fuel Percentage Auto Shutdown", m_args.shutdow_level)
        .defaultValue("20")
        .description("Fuel Percentage Auto Shutdown.");

        param("Use Voltage Value", m_args.is_to_use_voltage)
        .defaultValue("true")
        .description("Monitor the fuel level using battery voltage.");

        param("Fuel Voltage Warning", m_args.warning_level_voltage)
        .defaultValue("21.5")
        .description("Fuel Voltage Warning.");

        param("Fuel Voltage Auto Shutdown", m_args.shutdow_level_voltage)
        .defaultValue("20.5")
        .description("Fuel Voltage Auto Shutdown.");

        bind<IMC::Voltage>(this);
        bind<IMC::Current>(this);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_fuel.setSourceEntity(reserveEntity(m_args.elabel_fuel));
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        if(m_args.fuel_level[0] > m_args.fuel_level[1] && m_args.fuel_level[1] > m_args.fuel_level[2] && 
           m_args.fuel_level[2] > m_args.fuel_level[3] && m_args.fuel_level[3] > m_args.fuel_level[4] && 
           m_args.fuel_level[4] > 0)
        {
          m_is_task_in_error = false;
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
        else
        {
          m_is_task_in_error = true;
          err(DTR("Wrong values in config file, please check values."));
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
        }
        m_wdog.setTop(c_timeout_warning_level);
        m_wdog.reset();
      }

      //! Consume message IMC::Voltage
      void
      consume(const IMC::Voltage* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if(m_args.elabel_voltage_main != resolveEntity(msg->getSourceEntity()) && m_args.elabel_current_charger != resolveEntity(msg->getSourceEntity()))
          return;

        if(m_current_charge > 0)
        {
          if(m_args.elabel_current_charger != resolveEntity(msg->getSourceEntity()))
            return;

          m_battery_volts = msg->value;
          debug("Consume level (%s): %.2f", m_args.elabel_current_charger.c_str(), m_battery_volts);
        }
        else
        {
          if(m_args.elabel_voltage_main != resolveEntity(msg->getSourceEntity()))
            return;

          m_battery_volts = msg->value;
          debug("Consume level (%s): %.2f", m_args.elabel_current_charger.c_str(), m_battery_volts);
        }
      }

      //! Consume message IMC::Current
      void
      consume(const IMC::Current* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if(m_args.elabel_current_charger != resolveEntity(msg->getSourceEntity()))
          return;

        if(msg->value <= m_args.chager_current)
          m_current_charge = 0;
        else
          m_current_charge = msg->value;
      }

      float
      getFuelLevelPercentage(void)
      {
        float fuel_level_perc = 0;
        float interval_fuel_level, diff_voltage;

        if(m_battery_volts > m_args.fuel_level[0])
        {
          fuel_level_perc = 99;
        }
        else if(m_battery_volts > m_args.fuel_level[1] && m_battery_volts <= m_args.fuel_level[0])
        {
          interval_fuel_level = m_args.fuel_level[0] - m_args.fuel_level[1];
          diff_voltage = m_battery_volts - m_args.fuel_level[1];
          fuel_level_perc = 80 + ((diff_voltage * 20) / interval_fuel_level);
        }
        else if(m_battery_volts > m_args.fuel_level[2] && m_battery_volts <= m_args.fuel_level[1])
        {
          interval_fuel_level = m_args.fuel_level[1] - m_args.fuel_level[2];
          diff_voltage = m_battery_volts - m_args.fuel_level[2];
          fuel_level_perc = 60 + ((diff_voltage * 20) / interval_fuel_level);
        }
        else if(m_battery_volts > m_args.fuel_level[3] && m_battery_volts <= m_args.fuel_level[2])
        {
          interval_fuel_level = m_args.fuel_level[2] - m_args.fuel_level[3];
          diff_voltage = m_battery_volts - m_args.fuel_level[3];
          fuel_level_perc = 40 + ((diff_voltage * 20) / interval_fuel_level);
        }
        else if(m_battery_volts > m_args.fuel_level[4] && m_battery_volts <= m_args.fuel_level[3])
        {
          interval_fuel_level = m_args.fuel_level[3] - m_args.fuel_level[4];
          diff_voltage = m_battery_volts - m_args.fuel_level[4];
          fuel_level_perc = 20 + ((diff_voltage * 20) / interval_fuel_level);
        }
        else if(m_battery_volts > 0 && m_battery_volts <= m_args.fuel_level[4])
        {
          interval_fuel_level = m_args.fuel_level[4];
          diff_voltage = m_battery_volts - m_args.fuel_level[3];
          fuel_level_perc = abs((diff_voltage * 20) / interval_fuel_level);
        }
        else
        {
          fuel_level_perc = 0;
        }

        if(fuel_level_perc > 100)
          fuel_level_perc = 99;

        if(fuel_level_perc < 0)
          fuel_level_perc = 1;

        return fuel_level_perc;
      }

      std::string
      fill(const std::string& var)
      {
        std::string str;
        str.assign(var);
        str.resize(c_max_len_row_line_lcd, ' ');
        return str;
      }

      void
      parsePercentageValue(void)
      {
        debug("Battery percentage read: %.2f vs configured warning: %.2f, shutdown: %.2f", m_fuel.value, m_args.warning_level, m_args.shutdow_level);

        if (m_fuel.value > m_args.warning_level)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
        }
        else
        {
          if (m_fuel.value > m_args.shutdow_level)
          {
            if (m_wdog.overflow())
            {
              m_wdog.reset();
              war("Fuel low (%d%%)", (int)m_fuel.value);
              m_lcd.op = IMC::LcdControl::OP_WRITE0;
              m_lcd.text = fill(String::str("Low fuel(%d%%)", (int)m_fuel.value));
              dispatch(m_lcd);
            }
            setEntityState(IMC::EntityState::ESTA_FAULT, Status::CODE_FUEL_LOW);
          }
          else
          {
            err("Shutting down system (%d%%)", (int)m_fuel.value);
            sendToLCDPowerOff();
          }
        }
      }

       void
      parseVoltageValue(void)
      {
        debug("Voltage: read %.2f, warning voltage: %.2f, shut down voltage: %.2f", m_battery_volts,
              m_args.warning_level_voltage, m_args.shutdow_level_voltage);

        if (m_battery_volts > m_args.warning_level_voltage)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
        }
        else
        {
          if (m_battery_volts > m_args.shutdow_level_voltage)
          {
            if (m_wdog.overflow())
            {
              m_wdog.reset();
              war("Fuel low (%.2f)", m_battery_volts);
              m_lcd.op = IMC::LcdControl::OP_WRITE0;
              m_lcd.text = fill(String::str("Low fuel(%.1fV)", m_battery_volts));
              dispatch(m_lcd);
            }
            setEntityState(IMC::EntityState::ESTA_FAULT, Status::CODE_FUEL_LOW);
          }
          else
          {
            err("Shutting down system (%.2fV)", m_battery_volts);
            sendToLCDPowerOff();
          }
        }
      }

      void
      sendToLCDPowerOff(void)
      {
        setEntityState(IMC::EntityState::ESTA_FAULT, Status::CODE_POWER_DOWN);
        m_lcd.op = IMC::LcdControl::OP_WRITE0;
        m_lcd.text = fill(String::str("Very low bat!!!"));
        dispatch(m_lcd);
        m_lcd.op = IMC::LcdControl::OP_WRITE1;
        m_lcd.text = fill(String::str("Turning off!!!"));
        dispatch(m_lcd);
        IMC::PowerOperation pop;
        pop.setDestination(getSystemId());
        pop.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
        dispatch(pop);
      }

      void
      task(void)
      {
        if(!m_is_task_in_error)
        {
          debug("task is not in error");
          try
          {
            m_fuel.value = getFuelLevelPercentage();
            m_fuel.confidence = 50;
          }
          catch (...)
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
          }

          debug("Fuel level: %.2f", m_fuel.value);

          if (m_fuel.value >= 0 || m_battery_volts > 0)
          {
            m_fuel.setDestination(getSystemId());
            dispatch(m_fuel);
            if(m_current_charge == 0)
            {
              std::sprintf(m_bufer_entity, "active | %.2f V", m_battery_volts);
              if(m_args.is_to_use_voltage)
                parseVoltageValue();
              else
                parsePercentageValue();
            }
            else
            {
              std::sprintf(m_bufer_entity, "active | %.2f V | Charging: %.2f A", m_battery_volts, m_current_charge);
              setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
            }
          }
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
          war("Task in error, not dispatching messages");
        }
      }
    };
  }
}

DUNE_TASK
