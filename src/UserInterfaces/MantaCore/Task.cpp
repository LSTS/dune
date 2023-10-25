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

// ISO C++ 98 headers.
#include <memory>
#include <cstring>
#include <algorithm>
#include <cerrno>
#include <cstdlib>
#include <vector>
#include <set>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "Driver.hpp"
#include "DispatchData.hpp"
#include "MantaUtils.hpp"

namespace UserInterfaces
{
  namespace MantaCore
  {
    using DUNE_NAMESPACES;

    static const int c_delay_get_data = 1;
    static const float c_delay_next_free_text_line = 4.5f;

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Task arguments.
      struct MantaCore::Arguments m_args;
      //! IMC Messages.
      struct MantaCore::IMCData m_imc;
      //! EntityState Message.
      struct MantaCore::EntityInfo m_ent_info;
      //! Driver of MantaCore
      DriverMantaCore* m_driver;
      //! DispatchData of MantaCore
      DispatchData* m_dispatch;
      //! Manta Utils
      MantaUtils* m_manta_util;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Convenience type definition for a table of power channels.
      typedef std::map<std::string, MantaCore::MantaUtils::PowerChannel*> PowerChannelMantaCore;
      //! Power channels by name.
      PowerChannelMantaCore m_pwr_chs;
      //! Data get watchdog.
      Time::Counter<float> m_wdog_get;
      //! Send free text watchdog.
      Time::Counter<float> m_wdog_free_text;
      //! Supported system names.
      std::set<std::string> m_sys;
      //! Supported umodem system names.
      std::set<std::string> m_addrs_umodem;
      //! System names iterator.
      std::set<std::string>::const_iterator m_sys_itr;
      //! Flag to control poweroff by switch
      bool m_is_powero_off;
      //! Watchdog poweroff.
      Time::Counter<double> m_wdog_poff;

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_uart(NULL)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_DEVELOPER,
                    true);

        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"uart://DEVICE:BAUD\"");

        param("Sections of System Addresses", m_args.sys_addr_sections)
        .defaultValue("")
        .description("List of table names");

        param("Exclude System Names", m_args.sys_exclude)
        .defaultValue("broadcast")
        .description("List of excluded systems");

        param("Simulate Data Input", m_args.simulated_data)
        .defaultValue("false")
        .description("Simulate Data Input");

        param("Number of cells", m_args.number_cell)
        .defaultValue("7")
        .minimumValue("1")
        .maximumValue("15")
        .description("Number of cells to read.");

        param("BQ - Entity Label", m_args.bq_elabel)
        .defaultValue("BQ")
        .description("BQMonitor label.");

        // Extract cell entity label
        for (uint8_t i = 1; i <= c_max_number_pac_sensors; ++i)
        {
          std::string option = String::str("PAC%u - Entity Label", i);
          param(option, m_args.pac_elabels[i - 1])
          .defaultValue("")
          .description("PAC Entity Label");
        }

         param("Remaining Capacity - Entity Label", m_args.rcap_elabel)
        .defaultValue("1")
        .description("Remaining Capacity A/Ah.");

        param("Full Capacity - Entity Label", m_args.fcap_elabel)
        .defaultValue("1")
        .description("Full Capacity A/Ah.");

        param("Dispatch Fuel Level", m_args.dispatch_fuel_level)
        .defaultValue("true")
        .description("Dispatch Fuel Level.");

        param("Warning Level", m_args.war_lvl)
        .defaultValue("35.0")
        .minimumValue("20.0")
        .maximumValue("100.0")
        .units(Units::Percentage)
        .description("Level of battery below which a warning will be thrown");

        param("Error Level", m_args.err_lvl)
        .defaultValue("20.0")
        .minimumValue("1.0")
        .maximumValue("20.0")
        .units(Units::Percentage)
        .description("Level of battery below which an error will be thrown");

        param("Error Voltage Value", m_args.err_volt_lvl)
        .defaultValue("22.0")
        .minimumValue("18.0")
        .maximumValue("30.0")
        .units(Units::Volt)
        .description("Level of battery, in voltage, below which an error will be thrown");

        // Extract power channels entity label
        for (uint8_t i = 1; i <= MantaCore::c_max_power_channels; ++i)
        {
          std::string option = String::str("Power Channel %u Entity Label", i);
          param(option, m_args.power_channel_label[i - 1])
          .defaultValue("")
          .description("Power Channel Entity Label");

          option = String::str("Power Channel %u Turn On", i);
          param(option, m_args.power_channel_turn_on[i - 1])
          .defaultValue("")
          .description("Power Channel State");
        }

        bind<IMC::GpsFix>(this);
        bind<IMC::QueryPowerChannelState>(this);
        bind<IMC::PowerChannelControl>(this);
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        try
        {
          m_uart = static_cast<SerialPort*>(openUART(m_args.io_dev));
          m_uart->setCanonicalInput(true);
          return true;
        }
        catch (...)
        {
          war("Fail connecting to device :%s [retrying]", m_args.io_dev.c_str());
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 1);
        }
        return true;
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        if(m_driver != NULL)
          Memory::clear(m_driver);
        if(m_uart != NULL)
          Memory::clear(m_uart);
      }

      //! Initialize device.
      void
      onInitializeDevice() override
      {
        inf("Initializing board");
        m_is_powero_off = false;
        m_driver = new DriverMantaCore(this, m_uart, m_args.number_cell, getSystemName());
        m_dispatch = new DispatchData(this, m_driver);
        m_dispatch->cloneStructs(m_args, m_imc);
        m_manta_util = new MantaUtils(this);
        m_driver->setupBoard();
        inf("Firmware Version:%s", m_driver->firmwareVersion().c_str());
        inf("Initializing board: done");
        inf("Start acquiring data");
        m_wdog_get.setTop(c_delay_get_data);
        m_wdog_free_text.setTop(c_delay_next_free_text_line);
        if(m_args.simulated_data)
          war("Using simulated data input");

        for (unsigned i = 0; i < MantaCore::c_max_power_channels; ++i)
        {
          m_driver->setPowerChannelName(i, m_args.power_channel_label[i]);
          if(m_driver->setPowerChannelData(i, m_args.power_channel_label[i], m_args.power_channel_turn_on[i]))
          {
            m_pwr_chs[m_args.power_channel_label[i]]->state.state = m_args.power_channel_turn_on[i];
          }
        }

        for(uint8_t i = 0; i < m_sys.size(); i++)
          m_driver->addModemNameToList(*m_sys_itr++);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        // ltc
        m_imc.m_volt[DispatchData::IMC_TYPE_BAT_VOLT].setSourceEntity(getEid("Batteries"));
        m_imc.m_amp[DispatchData::IMC_TYPE_BAT_AMP].setSourceEntity(getEid("Batteries"));

        // bq
        uint8_t init_step_volt = DispatchData::IMC_TYPE_BQ_CELL1_VOLT;
        for (uint8_t i = 1; i <= m_args.number_cell; ++i)
        {
          std::string option = String::str("CELL%u", i);
          m_imc.m_volt[init_step_volt].setSourceEntity(getEid(option));
          init_step_volt++;
        }
        m_imc.m_volt[DispatchData::IMC_TYPE_BQ_VOLT].setSourceEntity(getEid(m_args.bq_elabel));
        m_imc.m_amp[DispatchData::IMC_TYPE_BQ_AMP].setSourceEntity(getEid(m_args.bq_elabel));
        m_imc.m_temp.setSourceEntity(getEid(m_args.bq_elabel));
        m_imc.m_fuel.setSourceEntity(getEid(m_args.bq_elabel));
        m_imc.m_amp[DispatchData::IMC_TYPE_BQ_REM_CAP_AMP].setSourceEntity(getEid(m_args.rcap_elabel));
        m_imc.m_amp[DispatchData::IMC_TYPE_BQ_FULL_CAP_AMP].setSourceEntity(getEid(m_args.fcap_elabel));

        // pac
        init_step_volt = DispatchData::IMC_TYPE_PAC1_VOLT;
        uint8_t init_step_amp = DispatchData::IMC_TYPE_PAC1_AMP;
        for (uint8_t i = 0; i < c_max_number_pac_sensors; ++i)
        {
          if (m_args.pac_elabels[i].empty())
            continue;

          m_imc.m_volt[init_step_volt].setSourceEntity(getEid(m_args.pac_elabels[i]));
          m_imc.m_amp[init_step_amp].setSourceEntity(getEid(m_args.pac_elabels[i]));
          init_step_volt++;
          init_step_amp++;
        }
      }

      unsigned
      getEid(std::string label)
      {
        unsigned eid = 0;
        try
        {
          eid = resolveEntity(label);
        }
        catch (Entities::EntityDataBase::NonexistentLabel& e)
        {
          (void)e;
          eid = reserveEntity(label);
        }
        return eid;
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if(m_args.simulated_data)
          return;

        if (msg->type == IMC::GpsFix::GFT_MANUAL_INPUT)
          return;

        if (msg->getSourceEntity() == getEntityId())
          return;

        m_driver->setNumberSat(msg->satellites);
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        debug("QueryPowerChannelState");
        (void)msg;
        PowerChannelMantaCore::iterator itr = m_pwr_chs.begin();
        for (; itr != m_pwr_chs.end(); ++itr)
          dispatchReply(*msg, itr->second->state);
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        PowerChannelMantaCore::const_iterator itr = m_pwr_chs.find(msg->name);
        if (itr == m_pwr_chs.end())
          return;

        uint8_t power_id = m_driver->getIdOfPowerChannel(msg->name);
        debug("%s|%d|%f|%d", msg->name.c_str(), msg->op, msg->sched_time, power_id);
        if(m_driver->setPowerChannelData(power_id, msg->name, msg->op))
          m_pwr_chs[msg->name]->state.state = msg->op;
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        clearPowerChannels();
        for (unsigned i = 0; i < MantaCore::c_max_power_channels; ++i)
        {
          if (String::startsWith(m_args.power_channel_label[i], "N/C"))
            continue;

          MantaCore::MantaUtils::PowerChannel* pc = new MantaCore::MantaUtils::PowerChannel;
          pc->id = i;
          pc->state.name = m_args.power_channel_label[i];
          pc->state.state = m_args.power_channel_turn_on[i];
          m_pwr_chs[m_args.power_channel_label[i]] = pc;
        }

        for (unsigned i = 0; i < m_args.sys_addr_sections.size(); ++i)
        {
          std::vector<std::string> addrs = m_ctx.config.options(m_args.sys_addr_sections[i]);
          m_sys.insert(addrs.begin(), addrs.end());

          if (!strcmp(m_args.sys_addr_sections[i].c_str(), "Micromodem Addresses") ||
              !strcmp(m_args.sys_addr_sections[i].c_str(), "Micromodem Addresses - DMSMW"))
            m_addrs_umodem.insert(addrs.begin(), addrs.end());
        }
        // Remove our name from the list.
        m_sys.erase(getSystemName());
        for (size_t i = 0; i < m_args.sys_exclude.size(); ++i)
          m_sys.erase(m_args.sys_exclude[i]);

        m_sys_itr = m_sys.begin();
      }

      void
      clearPowerChannels(void)
      {
        PowerChannelMantaCore::iterator itr = m_pwr_chs.begin();
        for (; itr != m_pwr_chs.end(); ++itr)
          delete itr->second;

        m_pwr_chs.clear();
      }

      //! Get data from device.
      //! @return true if data was received, false otherwise.
      bool
      onReadData() override
      {
        if (m_wdog_get.overflow())
        {
          m_wdog_get.reset();
          m_driver->requestDataPower();
        }
        else if(m_wdog_free_text.overflow())
        {
          m_wdog_free_text.reset();
          m_driver->updateFreeText();
        }
        else
        {
          if(m_args.simulated_data)
            m_driver->simulatedDataUpdate();
        }

        m_driver->pollData();
        m_dispatch->dispatchPowerData();
        m_dispatch->updateEntityState();
        if(m_driver->isToTurnOffCPU() && !m_is_powero_off)
        {
          war("%s", DTR(Status::getString(Status::CODE_POWER_DOWN)));
          IMC::PowerOperation pop;
          pop.setDestination(getSystemId());
          pop.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
          dispatch(pop);
          m_is_powero_off = true;
          m_wdog_poff.setTop(5);
        }
        else if (m_is_powero_off)
        {
          if (m_wdog_poff.overflow())
          {
            war("Powering off CPU");
            Time::Delay::wait(2);
            if (std::system("poweroff") == -1)
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
              err(DTR("failed to execute poweroff command"));
              m_wdog_poff.setTop(1);
            }
            else
            {
              while (!stopping());
            }
          }
        }

        m_ent_info = m_dispatch->updateEntityState();

        if(m_driver->majorError())
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }
        else
        {
          if(m_ent_info.code != Status::CODE_MISSING_DATA)
            setEntityState(IMC::EntityState::ESTA_NORMAL, m_ent_info.code);
          else
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_ent_info.text.c_str())));
        }

        return true;
      }
    };
  }
}

DUNE_TASK
