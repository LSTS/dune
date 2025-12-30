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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"
#include "MantaUtils.hpp"

namespace UserInterfaces
{
  namespace MantaCore
  {
    using DUNE_NAMESPACES;

    class DispatchData
    {
    public:
      DispatchData(Tasks::Task* task, Driver* driver, Arguments* args, IMCData* imc):
        m_task(task),
        m_driver(driver),
        m_args(args),
        m_imc(imc)
      { }

      ~DispatchData(void)
      { }

      //! TODO: optimize this.
      void
      dispatchPowerData(void)
      {
        m_tstamp = Clock::getSinceEpoch();
        // bq
        m_bqDataToDispatch = m_driver->getBqDataPower();
        if (m_driver->newBqDataType(POWER_VOLTAGE, -1))
        {
          m_driver->setBqNewData(POWER_VOLTAGE, false, -1);
          m_imc->m_volt[IMC_TYPE_BQ_VOLT].setTimeStamp(m_tstamp);
          m_imc->m_volt[IMC_TYPE_BQ_VOLT].value = m_bqDataToDispatch.voltage;
          m_task->dispatch(m_imc->m_volt[IMC_TYPE_BQ_VOLT], DF_KEEP_TIME);
        }
        if (m_driver->newBqDataType(POWER_CURRENT, -1))
        {
          m_driver->setBqNewData(POWER_CURRENT, false, -1);
          m_imc->m_amp[IMC_TYPE_BQ_AMP].setTimeStamp(m_tstamp);
          m_imc->m_amp[IMC_TYPE_BQ_AMP].value = m_bqDataToDispatch.current;
          m_task->dispatch(m_imc->m_amp[IMC_TYPE_BQ_AMP], DF_KEEP_TIME);
        }
        if (m_driver->newBqDataType(POWER_TEMPERATURE, -1))
        {
          m_driver->setBqNewData(POWER_TEMPERATURE, false, -1);
          m_imc->m_temp.setTimeStamp(m_tstamp);
          m_imc->m_temp.value = m_bqDataToDispatch.temperature;
          m_task->dispatch(m_imc->m_temp, DF_KEEP_TIME);
        }
        uint8_t init_step_volt = IMC_TYPE_BQ_CELL1_VOLT;
        for (uint8_t i = 1; i <= m_args->number_cell; i++)
        {
          if (m_driver->newBqDataType(POWER_CELLS_INFO, i))
          {
            m_driver->setBqNewData(POWER_CELLS_INFO, false, i);
            m_imc->m_volt[init_step_volt].setTimeStamp(m_tstamp);
            m_imc->m_volt[init_step_volt].value = m_bqDataToDispatch.cell_volt[i];
            m_task->dispatch(m_imc->m_volt[init_step_volt], DF_KEEP_TIME);
          }
          init_step_volt++;
        }
        if (m_driver->newBqDataType(POWER_REMAINING_CAP, -1) && m_driver->newBqDataType(POWER_FULL_CAP, -1)
            && m_args->dispatch_fuel_level && m_bqDataToDispatch.f_cap > 0 && m_bqDataToDispatch.r_cap >= 0)
        {
          m_imc->m_fuel.setTimeStamp(m_tstamp);
          m_fuel_level = (int)((m_bqDataToDispatch.r_cap * 100) / m_bqDataToDispatch.f_cap);
          m_imc->m_fuel.value = m_fuel_level;
          m_imc->m_fuel.confidence = 100;
          m_task->dispatch(m_imc->m_fuel, DF_KEEP_TIME);
        }
        if (m_driver->newBqDataType(POWER_REMAINING_CAP, -1))
        {
          m_driver->setBqNewData(POWER_REMAINING_CAP, false, -1);
          m_imc->m_amp[IMC_TYPE_BQ_REM_CAP_AMP].setTimeStamp(m_tstamp);
          m_imc->m_amp[IMC_TYPE_BQ_REM_CAP_AMP].value = m_bqDataToDispatch.r_cap;
          m_task->dispatch(m_imc->m_amp[IMC_TYPE_BQ_REM_CAP_AMP], DF_KEEP_TIME);
        }
        if (m_driver->newBqDataType(POWER_FULL_CAP, -1))
        {
          m_driver->setBqNewData(POWER_FULL_CAP, false, -1);
          m_imc->m_amp[IMC_TYPE_BQ_FULL_CAP_AMP].setTimeStamp(m_tstamp);
          m_imc->m_amp[IMC_TYPE_BQ_FULL_CAP_AMP].value = m_bqDataToDispatch.f_cap;
          m_task->dispatch(m_imc->m_amp[IMC_TYPE_BQ_FULL_CAP_AMP], DF_KEEP_TIME);
        }

        // ltc
        m_ltcDataToDispatch = m_driver->getLTCDataPower();
        if (m_driver->newLTCDataType())
        {
          m_driver->setLTCNewData(false);
          m_imc->m_volt[IMC_TYPE_BAT_VOLT].setTimeStamp(m_tstamp);
          m_imc->m_volt[IMC_TYPE_BAT_VOLT].value = m_ltcDataToDispatch.voltage;
          m_task->dispatch(m_imc->m_volt[IMC_TYPE_BAT_VOLT], DF_KEEP_TIME);
          m_imc->m_amp[IMC_TYPE_BAT_AMP].setTimeStamp(m_tstamp);
          m_imc->m_amp[IMC_TYPE_BAT_AMP].value = m_ltcDataToDispatch.current;
          m_task->dispatch(m_imc->m_amp[IMC_TYPE_BAT_AMP], DF_KEEP_TIME);
        }

        //pac
        m_pacDataToDispatch = m_driver->getPACDataPower();
        uint8_t init_step_a = IMC_TYPE_PAC1_AMP;
        uint8_t init_step_v = IMC_TYPE_PAC1_VOLT;
        for (uint8_t i = 0; i < c_max_number_pac_sensors; i++)
        {
          if (m_driver->newPACDataType(i))
          {
            m_driver->setPACNewData(false, i);
            m_imc->m_amp[init_step_a].setTimeStamp(m_tstamp);
            m_imc->m_amp[init_step_a].value = m_pacDataToDispatch.current[i];
            m_task->dispatch(m_imc->m_amp[init_step_a], DF_KEEP_TIME);
            m_imc->m_volt[init_step_v].setTimeStamp(m_tstamp);
            m_imc->m_volt[init_step_v].value = m_pacDataToDispatch.voltage[i];
            m_task->dispatch(m_imc->m_volt[init_step_v], DF_KEEP_TIME);
          }
          init_step_a++;
          init_step_v++;
        }
      }

      struct EntityInfo
      updateEntityState(void)
      {
        char m_buffer_entity[256];
        m_bqDataToDispatch = m_driver->getBqDataPower();
        if (m_fuel_level < m_args->err_lvl && m_bqDataToDispatch.voltage < m_args->err_volt_lvl && m_bqDataToDispatch.voltage > 0)
        {
          std::memset(&m_buffer_entity, '\0', sizeof(m_buffer_entity));
          if (m_bqDataToDispatch.time_full > 0)
          {
            std::sprintf(m_buffer_entity, "active | %s | fuel reserve - ETF: %s", getIOName(m_args->io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_full).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_ERROR;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_buffer_entity));
          }
          else if ((m_bqDataToDispatch.time_empty > 0))
          {
            std::sprintf(m_buffer_entity, "active | %s | fuel reserve - ETD: %s",  getIOName(m_args->io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_empty).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_ERROR;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_buffer_entity));
          }
          else
          {
            m_entityInfo.state = IMC::EntityState::ESTA_ERROR;
            m_entityInfo.code = Status::CODE_FUEL_RESERVE;
          }
        }
        else if (m_fuel_level < m_args->err_lvl)
        {
          std::memset(&m_buffer_entity, '\0', sizeof(m_buffer_entity));
          if (m_bqDataToDispatch.time_full > 0)
          {
            std::sprintf(m_buffer_entity, "active | %s | fuel warning - ETF: %s",  getIOName(m_args->io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_full).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_buffer_entity));
          }
          else if ((m_bqDataToDispatch.time_empty > 0))
          {
            std::sprintf(m_buffer_entity, "active | %s | fuel warning - ETD: %s",  getIOName(m_args->io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_empty).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_buffer_entity));
          }
          else
          {
            m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
            m_entityInfo.code = Status::CODE_FUEL_RESERVE;
          }
        }
        else if (m_fuel_level < m_args->war_lvl)
        {
          std::memset(&m_buffer_entity, '\0', sizeof(m_buffer_entity));
          if (m_bqDataToDispatch.time_full > 0)
          {
            std::sprintf(m_buffer_entity, "active | %s | fuel running low - ETF: %s",  getIOName(m_args->io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_full).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_buffer_entity));
          }
          else if ((m_bqDataToDispatch.time_empty > 0))
          {
            std::sprintf(m_buffer_entity, "active | %s | fuel running low - ETD: %s",  getIOName(m_args->io_dev).c_str(), minutesToTime(m_bqDataToDispatch.time_empty).c_str());
            m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
            m_entityInfo.code = Status::CODE_MISSING_DATA;
            m_entityInfo.text = Utils::String::str(DTR(m_buffer_entity));
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
            std::sprintf(m_buffer_entity,
                         "active | %s | ETF:%s",
                         getIOName(m_args->io_dev).c_str(),
                         minutesToTime(m_bqDataToDispatch.time_full).c_str());
          else if (m_bqDataToDispatch.time_empty > 0 && m_bqDataToDispatch.time_empty < 65535)
            std::sprintf(m_buffer_entity,
                         "active | %s | ETD:%s",
                         getIOName(m_args->io_dev).c_str(),
                         minutesToTime(m_bqDataToDispatch.time_empty).c_str());
          else
            std::sprintf(m_buffer_entity,
                         "active | %s",
                         getIOName(m_args->io_dev).c_str());

          m_entityInfo.state = IMC::EntityState::ESTA_NORMAL;
          m_entityInfo.code = Status::CODE_MISSING_DATA;
          m_entityInfo.text = Utils::String::str(DTR(m_buffer_entity));
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

      BQData m_bqDataToDispatch;
      LTCData m_ltcDataToDispatch;
      PACData m_pacDataToDispatch;
      EntityInfo m_entityInfo;

    private:
      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Driver of MantaCore.
      Driver* m_driver;
      //! Task arguments.
      Arguments* m_args;
      //! IMC Messages.
      IMCData* m_imc;
      //! Read timestamp.
      double m_tstamp;
      //! Fuel level
      int m_fuel_level;
    };
  }
}

#endif /* USERINTERFACES_MANTACORE_DISPATCHDATA_HPP_INCLUDED_ */