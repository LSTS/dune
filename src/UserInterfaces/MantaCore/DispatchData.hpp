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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef USERINTERFACES_MANTACORE_DISPATCHDATA_HPP_INCLUDED_
#define USERINTERFACES_MANTACORE_DISPATCHDATA_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "Driver.hpp"
#include "MantaUtils.hpp"

namespace UserInterfaces
{
  namespace MantaCore
  {
    using DUNE_NAMESPACES;
    static const int c_max_values_voltage = 12;
    static const int c_max_values_current = 7;
    static const int c_max_number_pac_sensors = 3;

    struct Arguments
    {
      //! IO device (URI).
      std::string io_dev;
      //! Simulated data input
      bool simulated_data;
      //! Internal system IP
      std::string int_ip;
      //! Input number cell
      unsigned int number_cell;
      //! PAC entity labels
      std::string pac_elabels[c_max_number_pac_sensors];
      //! Remaining Capacity entity label
      std::string rcap_elabel;
      //! Full Capacity entity label
      std::string fcap_elabel;
      //! BQMonitor entity label
      std::string bq_elabel;
      //! State to dispatch Feul level
      bool dispatch_fuel_level;
      //! Level of battery below which a warning will be thrown.
      float war_lvl;
      //! Level of battery below which an error will be thrown.
      float err_lvl;
      //! Level of battery (VOltage) below which an error will be thrown.
      float err_volt_lvl;
      //! Power Channels Labels
      std::string power_channel_label[c_max_power_channels];
      //! Power Channels States
      bool power_channel_turn_on[c_max_power_channels];
      //! List of sections with system names.
      std::vector<std::string> sys_addr_sections;
      //! Set of excluded systems.
      std::vector<std::string> sys_exclude;
    };

    struct IMCData
    {
      //! Temperature message
      IMC::Temperature m_temp;
      //! Voltage messages
      IMC::Voltage m_volt[c_max_values_voltage];
      //! Current messages
      IMC::Current m_amp[c_max_values_current];
      //! Fuel Level message
      IMC::FuelLevel m_fuel;
    };

    struct EntityInfo
    {
      IMC::EntityState::StateEnum state;
      Status::Code code;
      std::string text;
    };

    class DispatchData
    {
    public:
      enum IMC_TYPE_MESSAGE_VOLTAGE {
        IMC_TYPE_BAT_VOLT = 0,
        IMC_TYPE_PAC1_VOLT,
        IMC_TYPE_PAC2_VOLT,
        IMC_TYPE_PAC3_VOLT,
        IMC_TYPE_BQ_VOLT,
        IMC_TYPE_BQ_CELL1_VOLT,
        IMC_TYPE_BQ_CELL2_VOLT,
        IMC_TYPE_BQ_CELL3_VOLT,
        IMC_TYPE_BQ_CELL4_VOLT,
        IMC_TYPE_BQ_CELL5_VOLT,
        IMC_TYPE_BQ_CELL6_VOLT,
        IMC_TYPE_BQ_CELL7_VOLT,
      };

      enum IMC_TYPE_MESSAGE_CURRENT {
        IMC_TYPE_BAT_AMP = 0,
        IMC_TYPE_PAC1_AMP,
        IMC_TYPE_PAC2_AMP,
        IMC_TYPE_PAC3_AMP,
        IMC_TYPE_BQ_AMP,
        IMC_TYPE_BQ_FULL_CAP_AMP,
        IMC_TYPE_BQ_REM_CAP_AMP,
      };

      DispatchData(DUNE::Tasks::Task *task, DriverMantaCore* driver) :
      m_task(task)
      {
        m_driver = driver;
        m_util = new MantaUtils(m_task);
      }

      ~DispatchData(void) {}

      void
      cloneStructs(struct Arguments args, struct IMCData imc)
      {
        m_args_d = args;
        m_imc_d = imc;
      }

      void
      dispatchPowerData(void)
      {
        m_tstamp = Clock::getSinceEpoch();
        // bq
        m_bqDataToDispatch = m_driver->getBqDataPower();
        if(m_driver->newBqDataType(DriverMantaCore::POWER_VOLTAGE, -1))
        {
          m_driver->setBqNewData(DriverMantaCore::POWER_VOLTAGE, false, -1);
          m_imc_d.m_volt[IMC_TYPE_BQ_VOLT].setTimeStamp(m_tstamp);
          m_imc_d.m_volt[IMC_TYPE_BQ_VOLT].value = m_bqDataToDispatch.voltage;
          m_task->dispatch(m_imc_d.m_volt[IMC_TYPE_BQ_VOLT], DF_KEEP_TIME);
        }
        if(m_driver->newBqDataType(DriverMantaCore::POWER_CURRENT, -1))
        {
          m_driver->setBqNewData(DriverMantaCore::POWER_CURRENT, false, -1);
          m_imc_d.m_amp[IMC_TYPE_BQ_AMP].setTimeStamp(m_tstamp);
          m_imc_d.m_amp[IMC_TYPE_BQ_AMP].value = m_bqDataToDispatch.current;
          m_task->dispatch(m_imc_d.m_amp[IMC_TYPE_BQ_AMP], DF_KEEP_TIME);
        }
        if(m_driver->newBqDataType(DriverMantaCore::POWER_TEMPERATURE, -1))
        {
          m_driver->setBqNewData(DriverMantaCore::POWER_TEMPERATURE, false, -1);
          m_imc_d.m_temp.setTimeStamp(m_tstamp);
          m_imc_d.m_temp.value = m_bqDataToDispatch.temperature;
          m_task->dispatch(m_imc_d.m_temp, DF_KEEP_TIME);
        }
        uint8_t init_step_volt = DispatchData::IMC_TYPE_BQ_CELL1_VOLT;
        for(uint8_t i = 1; i <= m_args_d.number_cell; i++)
        {
          if(m_driver->newBqDataType(DriverMantaCore::POWER_CELLS_INFO, i))
          {
            m_driver->setBqNewData(DriverMantaCore::POWER_CELLS_INFO, false, i);
            m_imc_d.m_volt[init_step_volt].setTimeStamp(m_tstamp);
            m_imc_d.m_volt[init_step_volt].value = m_bqDataToDispatch.cell_volt[i];
            m_task->dispatch(m_imc_d.m_volt[init_step_volt], DF_KEEP_TIME);
          }
          init_step_volt++;
        }
        if(m_driver->newBqDataType(DriverMantaCore::POWER_REMAININ_CAP, -1) && m_driver->newBqDataType(DriverMantaCore::POWER_FULL_CAP, -1))
        {
          m_imc_d.m_fuel.setTimeStamp(m_tstamp);
          m_fuel_level = (int)((m_bqDataToDispatch.r_cap * 100) / m_bqDataToDispatch.f_cap);
          m_imc_d.m_fuel.value = m_fuel_level;
          m_imc_d.m_fuel.confidence = 100;
          m_task->dispatch(m_imc_d.m_fuel, DF_KEEP_TIME);
        }
        if(m_driver->newBqDataType(DriverMantaCore::POWER_REMAININ_CAP, -1))
        {
          m_driver->setBqNewData(DriverMantaCore::POWER_REMAININ_CAP, false, -1);
          m_imc_d.m_amp[IMC_TYPE_BQ_REM_CAP_AMP].setTimeStamp(m_tstamp);
          m_imc_d.m_amp[IMC_TYPE_BQ_REM_CAP_AMP].value = m_bqDataToDispatch.r_cap;
          m_task->dispatch(m_imc_d.m_amp[IMC_TYPE_BQ_REM_CAP_AMP], DF_KEEP_TIME);
        }
        if(m_driver->newBqDataType(DriverMantaCore::POWER_FULL_CAP, -1))
        {
          m_driver->setBqNewData(DriverMantaCore::POWER_FULL_CAP, false, -1);
          m_imc_d.m_amp[IMC_TYPE_BQ_FULL_CAP_AMP].setTimeStamp(m_tstamp);
          m_imc_d.m_amp[IMC_TYPE_BQ_FULL_CAP_AMP].value = m_bqDataToDispatch.f_cap;
          m_task->dispatch(m_imc_d.m_amp[IMC_TYPE_BQ_FULL_CAP_AMP], DF_KEEP_TIME);
        }

        // ltc
        m_ltcDataToDispatch = m_driver->getLTCDataPower();
        if(m_driver->newLTCDataType())
        {
          m_driver->setLTCNewData(false);
          m_imc_d.m_volt[IMC_TYPE_BAT_VOLT].setTimeStamp(m_tstamp);
          m_imc_d.m_volt[IMC_TYPE_BAT_VOLT].value = m_ltcDataToDispatch.voltage;
          m_task->dispatch(m_imc_d.m_volt[IMC_TYPE_BAT_VOLT], DF_KEEP_TIME);
          m_imc_d.m_amp[IMC_TYPE_BAT_AMP].setTimeStamp(m_tstamp);
          m_imc_d.m_amp[IMC_TYPE_BAT_AMP].value = m_ltcDataToDispatch.current;
          m_task->dispatch(m_imc_d.m_amp[IMC_TYPE_BAT_AMP], DF_KEEP_TIME);
        }

        //pac
        m_pacDataToDispatch = m_driver->getPACDataPower();
        uint8_t init_step_a = DispatchData::IMC_TYPE_PAC1_AMP;
        uint8_t init_step_v = DispatchData::IMC_TYPE_PAC1_VOLT;
        for(uint8_t i = 0; i < c_max_number_pac_sensors; i++)
        {
          if(m_driver->newPACDataType(i))
          {
            m_driver->setPACNewData(false, i);
            m_imc_d.m_amp[init_step_a].setTimeStamp(m_tstamp);
            m_imc_d.m_amp[init_step_a].value = m_pacDataToDispatch.current[i];
            m_task->dispatch(m_imc_d.m_amp[init_step_a], DF_KEEP_TIME);
            m_imc_d.m_volt[init_step_v].setTimeStamp(m_tstamp);
            m_imc_d.m_volt[init_step_v].value = m_pacDataToDispatch.voltage[i];
            m_task->dispatch(m_imc_d.m_volt[init_step_v], DF_KEEP_TIME);
          }
          init_step_a++;
          init_step_v++;
        }
      }

      struct EntityInfo
      updateEntityState(void)
      {
        char m_bufer_entity[256];
        m_bqDataToDispatch = m_driver->getBqDataPower();
        if (m_fuel_level < m_args_d.err_lvl && m_bqDataToDispatch.voltage < m_args_d.err_volt_lvl && m_bqDataToDispatch.voltage > 0)
        {
          std::memset(&m_bufer_entity, '\0', sizeof(m_bufer_entity));
          if (m_bqDataToDispatch.time_full > 0)
          {
            std::sprintf(m_bufer_entity, "active | %s | fuel reserve - ETF: %s", m_util->getIOName(m_args_d.io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_full).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_ERROR;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_bufer_entity));
          }
          else if((m_bqDataToDispatch.time_empty > 0))
          {
            std::sprintf(m_bufer_entity, "active | %s | fuel reserve - ETD: %s",  m_util->getIOName(m_args_d.io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_empty).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_ERROR;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_bufer_entity));
          }
          else
          {
            m_entityInfo.state = IMC::EntityState::ESTA_ERROR;
            m_entityInfo.code = Status::CODE_FUEL_RESERVE;
          }
        }
        else if (m_fuel_level < m_args_d.err_lvl)
        {
          std::memset(&m_bufer_entity, '\0', sizeof(m_bufer_entity));
          if (m_bqDataToDispatch.time_full > 0)
          {
            std::sprintf(m_bufer_entity, "active | %s | fuel warning - ETF: %s",  m_util->getIOName(m_args_d.io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_full).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_bufer_entity));
          }
          else if((m_bqDataToDispatch.time_empty > 0))
          {
            std::sprintf(m_bufer_entity, "active | %s | fuel warning - ETD: %s",  m_util->getIOName(m_args_d.io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_empty).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_bufer_entity));
          }
          else
          {
            m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
            m_entityInfo.code = Status::CODE_FUEL_RESERVE;
          }
        }
        else if (m_fuel_level < m_args_d.war_lvl)
        {
          std::memset(&m_bufer_entity, '\0', sizeof(m_bufer_entity));
          if (m_bqDataToDispatch.time_full > 0)
          {
            std::sprintf(m_bufer_entity, "active | %s | fuel running low - ETF: %s",  m_util->getIOName(m_args_d.io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_full).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_bufer_entity));
          }
          else if ((m_bqDataToDispatch.time_empty > 0))
          {
            std::sprintf(m_bufer_entity, "active | %s | fuel running low - ETD: %s",  m_util->getIOName(m_args_d.io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_empty).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_bufer_entity));
          }
          else
          {
            m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
            m_entityInfo.code = Status::CODE_FUEL_LOW;
          }
        }
        else
        {
          if (m_bqDataToDispatch.time_full > 0 && m_bqDataToDispatch.time_full < 65535)
            std::sprintf(m_bufer_entity,
                         "active | %s | ETF:%s",
                         m_util->getIOName(m_args_d.io_dev).c_str(),
                         minutesToTime(m_bqDataToDispatch.time_full).c_str());
          else if (m_bqDataToDispatch.time_empty > 0 && m_bqDataToDispatch.time_empty < 65535)
            std::sprintf(m_bufer_entity,
                         "active | %s | ETD:%s",
                         m_util->getIOName(m_args_d.io_dev).c_str(),
                         minutesToTime(m_bqDataToDispatch.time_empty).c_str());
          else
            std::sprintf(m_bufer_entity,
                         "active | %s",
                         m_util->getIOName(m_args_d.io_dev).c_str());

          m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
          m_entityInfo.code = Status::CODE_MISSING_DATA;
          m_entityInfo.text = Utils::String::str(DTR(m_bufer_entity));
        }
        return m_entityInfo;
      }

      std::string
      minutesToTime(int minutes)
      {
        char time_battery[32];
        int hour = minutes / 60;
        int day = hour / 24;
        hour = hour - (24 * day);
        int min = minutes % 60;
        if (day > 0)
          std::sprintf(time_battery, "%dd%dh%dm", day, hour, min);
        else if (hour > 0)
          std::sprintf(time_battery, "%dh%dm", hour, min);
        else
          std::sprintf(time_battery, "%dm", min);

        return time_battery;
      }

      struct DriverMantaCore::BQData m_bqDataToDispatch;
      struct DriverMantaCore::LTCData m_ltcDataToDispatch;
      struct DriverMantaCore::PACData m_pacDataToDispatch;
      struct EntityInfo m_entityInfo;

    private:
      //! Parent task.
      DUNE::Tasks::Task *m_task;
      //! Driver of MantaCore
      DriverMantaCore* m_driver;
      //! Manta Util
      MantaUtils* m_util;
      //! Task arguments.
      Arguments m_args_d;
      //! IMC Messages.
      IMCData m_imc_d;
      //! Read timestamp.
      double m_tstamp;
      //! Fuel level
      int m_fuel_level;
    };
  }
}

#endif /* USERINTERFACES_MANTACORE_DISPATCHDATA_HPP_INCLUDED_ */