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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"
#include "Reader.hpp"
#include "DispatchData.hpp"
#include "MantaUtils.hpp"

namespace UserInterfaces
{
  namespace MantaCore
  {
    using DUNE_NAMESPACES;

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Task arguments.
      Arguments m_args;
      //! IMC Messages.
      IMCData m_imc;
      //! Driver of MantaCore.
      Driver* m_driver;
      //! Reader thread.
      Reader* m_reader;
      //! DispatchData of MantaCore.
      DispatchData* m_dispatch;
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Input watchdog.
      Time::Counter<float> m_wdog;
      //! Power channels by name.
      PowerChannelMantaCore m_pwr_chs;
      //! Send free text watchdog.
      Time::Counter<float> m_wdog_free_text;
      //! Targetable system names.
      std::set<std::string> m_sys;
      //! Poweroff request flag.
      bool m_is_power_off;
      //! GPS sattelites in view.
      uint8_t m_sat;
      //! Targets set flag.
      bool m_targets_set;
      //! UAN Entity Id.
      uint8_t m_uan_id;
      //! Attempt to connect on Idle watchdog.
      Time::Counter<float> m_wdog_con;
      //! List of modems.
      std::map<std::string, ModemInfo> m_modems;
      //! UAN modems configured.
      std::set<std::string> m_uan_config;

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_driver(NULL),
        m_reader(NULL),
        m_handle(NULL),
        m_wdog_free_text(c_delay_next_free_text_line),
        m_is_power_off(false),
        m_sat(0),
        m_targets_set(false),
        m_uan_id(255)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_DEVELOPER,
                    true);

        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"uart://DEVICE:BAUD\".");

        param("Input Timeout", m_args.inp_tout)
        .units(Units::Second)
        .defaultValue("4.0")
        .minimumValue("0.0")
        .description("Input timeout");

        param("Firmware version", m_args.firm_version)
        .defaultValue("master@495057d4")
        .description("Compatible Firmware Version.");

        param("UAN - Entity Label", m_args.uan_elabel)
        .defaultValue("Acoustic Access Controller")
        .description("UAN entity label.");

        param("Number of cells", m_args.number_cell)
        .defaultValue("7")
        .minimumValue("1")
        .maximumValue("15")
        .description("Number of cells to read.");

        param("BQ - Entity Label", m_args.bq_elabel)
        .defaultValue("BQ")
        .description("BQMonitor entity label.");

        // Extract cell entity label
        for (uint8_t i = 1; i <= c_max_number_pac_sensors; ++i)
        {
          std::string option = String::str("PAC%u - Entity Label", i);
          param(option, m_args.pac_elabels[i - 1])
          .defaultValue("")
          .description("PAC Entity Label.");
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
        .description("Level of battery percentage below which a warning will be thrown.");

        param("Error Level", m_args.err_lvl)
        .defaultValue("20.0")
        .minimumValue("1.0")
        .maximumValue("20.0")
        .units(Units::Percentage)
        .description("Level of battery percentage below which an error will be thrown.");

        param("Error Voltage Value", m_args.err_volt_lvl)
        .defaultValue("22.0")
        .minimumValue("18.0")
        .maximumValue("30.0")
        .units(Units::Volt)
        .description("Level of battery voltage below which an error will be thrown.");
        
        for (uint8_t i = 0; i < MantaCore::c_max_power_channels; i++)
        {
          std::string option = String::str("Power Channel %u - Name", i);
          param(option, m_args.power_channels_names[i])
          .defaultValue("")
          .description("Power Channels Names.");

          option = String::str("Power Channel %u - State", i);
          param(option, m_args.power_channels_states[i])
          .defaultValue("")
          .description("Power Channels States.");
        }

        param("Get Data", m_args.get_data)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("true")
        .description("Flag to activate data acquire from board.");

        std::map<std::string, std::string> modems = m_ctx.config.getSection("Acoustic Modems");
        for (auto& modem: modems)
          m_modems[modem.first] = {modem.second, false};

        setWaitForMessages(1.0);

        bind<IMC::AcousticSystems>(this);
        bind<IMC::DevDataText>(this);
        bind<IMC::EntityParameters>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::IoEvent>(this);
        bind<IMC::PowerChannelControl>(this);
        bind<IMC::PowerOperation>(this);
        bind<IMC::QueryPowerChannelState>(this);
        bind<IMC::TransmissionStatus>(this);
      }

      ~Task(void)
      {
        onDisconnect();
      }

      void
      onIdle(void) override
      {
        if (m_wdog_con.overflow() && m_wdog_con.getTop() > 0.0f)
        {
          m_wdog_con.setTop(0.0f);
          requestActivation();
        }
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        try
        {
          m_handle = openDeviceHandle(m_args.io_dev, true);
          m_reader = new Reader(this, m_handle);
          m_reader->start();
        }
        catch (...)
        {
          war("Failed to connect to device: %s [retrying]", m_args.io_dev.c_str());
          m_wdog_con.setTop(static_cast<float>(getActivationTime()));
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }
        return true;
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        if (m_reader != NULL)
        {
          m_reader->stopAndJoin();
          Memory::clear(m_reader);
        }

        if(m_driver != NULL)
        {
          m_driver->notifyBoardAboutDisconnect();
          Memory::clear(m_driver);
        }

        Memory::clear(m_handle);

        m_wdog_con.setTop(0.0f);
      }

      void
      waitForReplies(void)
      {
        while(!m_driver->emptyQueue() && !isStopping())
        {
          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          waitForMessages(1.0);
          m_driver->checkCommandQueue();
        }
      }

      void
      setupBoard(void)
      {
        m_driver->requestConnectionToBoard();
        m_driver->requestFirmwareVersion();
        m_driver->setKnownModems(m_modems);
        m_driver->setNumberCells();
        m_driver->requestDataPower(m_args.get_data);

        for (auto& pwr_ch: m_pwr_chs)
          m_driver->setPowerChannelState(pwr_ch.second->state.name, pwr_ch.second->state.state);

        waitForReplies();
      }

      //! Initialize device.
      void
      onInitializeDevice() override
      {
        inf("initializing board");
        m_driver = new Driver(this, m_handle, &m_pwr_chs, m_args.number_cell, getSystemName());
        m_dispatch = new DispatchData(this, m_driver, &m_args, &m_imc);
        m_wdog.setTop(m_args.inp_tout);
        setupBoard();

        // if (m_args.firm_version != m_driver->firmwareVersion())
        // {
        //   err(DTR("incompatible firmware version"));
        //   requestDeactivation();
        //   return;
        // }

        inf("firmware version: %s", m_driver->firmwareVersion().c_str());
        inf("initializing board: done");
        inf("start acquiring data");
        m_wdog_free_text.reset();

        IMC::QueryEntityParameters qep;
        qep.setDestination(getSystemId());
        qep.setDestinationEntity(m_uan_id);
        qep.name = m_args.uan_elabel;
        dispatch(qep);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        // ltc
        m_imc.m_volt[IMC_TYPE_BAT_VOLT].setSourceEntity(getEid("Batteries"));
        m_imc.m_amp[IMC_TYPE_BAT_AMP].setSourceEntity(getEid("Batteries"));

        // bq
        uint8_t init_step_volt = IMC_TYPE_BQ_CELL1_VOLT;
        for (uint8_t i = 1; i <= m_args.number_cell; ++i)
        {
          std::string option = String::str("CELL%u", i);
          m_imc.m_volt[init_step_volt].setSourceEntity(getEid(option));
          init_step_volt++;
        }
        m_imc.m_volt[IMC_TYPE_BQ_VOLT].setSourceEntity(getEid(m_args.bq_elabel));
        m_imc.m_amp[IMC_TYPE_BQ_AMP].setSourceEntity(getEid(m_args.bq_elabel));
        m_imc.m_temp.setSourceEntity(getEid(m_args.bq_elabel));
        m_imc.m_fuel.setSourceEntity(getEid(m_args.bq_elabel));
        m_imc.m_amp[IMC_TYPE_BQ_REM_CAP_AMP].setSourceEntity(getEid(m_args.rcap_elabel));
        m_imc.m_amp[IMC_TYPE_BQ_FULL_CAP_AMP].setSourceEntity(getEid(m_args.fcap_elabel));

        // pac
        init_step_volt = IMC_TYPE_PAC1_VOLT;
        uint8_t init_step_amp = IMC_TYPE_PAC1_AMP;
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
        unsigned eid = 255;

        try
        {
          eid = resolveEntity(label);
        }
        catch (...)
        {
          eid = reserveEntity(label);
        }

        return eid;
      }

      void
      onEntityResolution(void)
      {
        try
        {
          m_uan_id = resolveEntity(m_args.uan_elabel);
        }
        catch (Entities::EntityDataBase::NonexistentLabel& e)
        {
          war(DTR("%s"), e.what());
        }
      }

      void
      setTargetableSystems(void)
      {
        if (m_driver == NULL)
          return;

        m_driver->setTargetAddress("reset");
        for (auto& name: m_sys)
          m_driver->setTargetAddress(name);

        m_targets_set = true;
      }

      void
      consume(const IMC::EntityParameters* msg)
      {
        if (m_driver == NULL)
          return;

        if (msg->getSource() != getSystemId())
          return;
        
        if (msg->name == m_args.uan_elabel)
        {
          bool found = false;
          for (auto& param: msg->params)
          {
            if (param->name == "Modems")
            {
              found = true;
              std::set<std::string> new_config;
              String::split(param->value, ",", new_config);
              for (auto& n: m_uan_config)
                if (new_config.find(n) == new_config.end())
                  for (auto& modem: m_modems)
                    if (modem.first.find(n) != modem.first.npos)
                      modem.second.state = false;
              m_uan_config = new_config;
              m_driver->setKnownModems(m_modems);
              break;
            }
          }
          if (!found)
            return;

          std::vector<std::string> names;
          for (auto& n: m_uan_config)
          {
            IMC::QueryEntityParameters qep;
            qep.setDestination(getSystemId());
            qep.name = n;
            dispatch(qep);
          }
        }
        else if (m_uan_config.find(msg->name) != m_uan_config.end())
        {
          std::string io;
          for (auto& param: msg->params)
          {
            if (param->name == "IO Port - Device")
            {
              io = param->value;
              break;
            }
          }
          if (io.empty())
            return;

          std::string modem = msg->name;
          if (io.find("uart") == io.npos)
          {
            size_t pos_i = io.find_last_of('.');
            size_t pos_f = io.find_last_of(':');
            modem += (pos_i != io.npos && pos_f != io.npos)?
                      io.substr(pos_i + 1, pos_f - pos_i - 1):
                      "";
          }

          if (io == m_modems[modem].address)
          {
            for (auto& m: m_modems)
              if (m.first.find(msg->name) != m.first.npos)
                m.second.state = false;
            m_modems[modem].state = true;
            m_driver->setKnownModems(m_modems);
          }
        }
      }

      void
      consume(const IMC::DevDataText* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (m_driver == NULL)
          return;

        if (m_driver->checkDataIn(msg->value))
          m_wdog.reset();
      }

      void
      consume(const IMC::IoEvent* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (msg->type == IMC::IoEvent::IOV_TYPE_INPUT_ERROR)
          err("%s", msg->error.c_str());
      }

      void
      consume(const IMC::AcousticSystems* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_uan_id)
          return;
        
        std::set<std::string> new_sys;
        String::split(msg->list, ",", new_sys);
        if (new_sys == m_sys)
          return;

        m_sys = new_sys;
        m_targets_set = false;
        if (m_driver != NULL)
          m_driver->m_query_systems = false;
      }

      void
      consume(const IMC::TransmissionStatus* msg)
      {
        if (!isActive())
          return;

        if (msg->getDestination() != getSystemId())
          return;
        
        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (msg->req_id != m_driver->getLastTreqId())
          return;

        switch (msg->status)
        {
        case IMC::TransmissionStatus::TSTAT_DELIVERED:
          m_driver->sendStatus(BYTE_STATUS, BYTE_LAST, "success");
          break;
        case IMC::TransmissionStatus::TSTAT_RANGE_RECEIVED:
          m_driver->sendStatus(BYTE_STATUS, BYTE_RANGE, std::to_string(msg->range));
          break;
        case IMC::TransmissionStatus::TSTAT_MAYBE_DELIVERED:
        case IMC::TransmissionStatus::TSTAT_INPUT_FAILURE:
        case IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE:
        case IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE:
          m_driver->sendStatus(BYTE_STATUS, BYTE_LAST, "fail");
          break;
        case IMC::TransmissionStatus::TSTAT_IN_PROGRESS:
        case IMC::TransmissionStatus::TSTAT_SENT:
        default:
          break;
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->type == IMC::GpsFix::GFT_MANUAL_INPUT)
          return;

        if (msg->getSourceEntity() == getEntityId())
          return;

        if (m_sat != msg->satellites)
        {
          m_driver->setNumberSat(m_sat);
          m_sat = msg->satellites;
        }
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        if (!isActive())
          return;

        if (msg->getDestination() != getSystemId())
          return;

        PowerChannelMantaCore::const_iterator itr = m_pwr_chs.find(msg->name);
        if (itr == m_pwr_chs.end())
          return;
        
        m_driver->setPowerChannelState(itr->second->state.name, msg->op);
      }

      void
      consume(const IMC::PowerOperation* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_IP)
          m_is_power_off = true;
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        (void)msg; // to avoid compile warning
        for (auto& pwr_ch: m_pwr_chs)
          dispatchReply(*msg, pwr_ch.second->state);
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        for (unsigned i = 0; i < MantaCore::c_max_power_channels; ++i)
        {
          if (String::startsWith(m_args.power_channels_names[i], "N/C"))
            continue;

          bool new_pc = m_pwr_chs.find(m_args.power_channels_names[i]) == m_pwr_chs.end();

          PowerChannel* pc;
          if (new_pc)
            pc = new PowerChannel;
          else
            pc = m_pwr_chs[m_args.power_channels_names[i]];
            
          pc->id = i;

          if (paramChanged(m_args.power_channels_names[i]) || new_pc)
            pc->state.name = m_args.power_channels_names[i];

          if (paramChanged(m_args.power_channels_states[i]) || new_pc)
          {
            pc->state.state = m_args.power_channels_states[i];
            if (m_driver != NULL)
              m_driver->setPowerChannelState(pc->state.name, m_args.power_channels_states[i]);
          }

          if (new_pc)
            m_pwr_chs[pc->state.name] = pc;
        }

        if (m_driver != NULL && paramChanged(m_args.get_data))
          m_driver->requestDataPower(m_args.get_data);
      }

      void
      updateModemsConfig(std::map<std::string, bool> config)
      {
        if (config.empty())
          return;
        
        std::vector<std::string> types;
        for (auto& it: config)
        {
          m_modems[it.first].state = it.second;
          size_t pos = 0;
          while (pos < it.first.size() && !std::isdigit(it.first[pos]))
            ++pos;
          std::string type = it.first.substr(0, pos);
          types.push_back(type);
          if (!it.second)
          {
            if (m_uan_config.find(type) != m_uan_config.end())
              m_uan_config.erase(type);
          }
          else if (m_uan_config.find(type) == m_uan_config.end())
            m_uan_config.insert(type);
        }
        IMC::SetEntityParameters sep;
        sep.setDestination(getSystemId());
        sep.name = m_args.uan_elabel;
        IMC::EntityParameter ep;
        ep.name = "Modems";
        ep.value = String::join(m_uan_config.begin(), m_uan_config.end(), ",");
        sep.params.push_back(ep);
        dispatch(sep);
      }

      //! Get data from device.
      //! @return true if data was received, false otherwise.
      bool
      onReadData() override
      {
        if (m_is_power_off)
          return true;

        if (m_driver->boardBooted() && isActive())
        {
          requestRestart();
          return true;
        }
        
        if (m_wdog_free_text.overflow())
        {
          m_wdog_free_text.reset();
          m_driver->updateFreeText();
        }

        if (!m_targets_set)
          setTargetableSystems();

        updateModemsConfig(m_driver->getModemsConfig());

        m_driver->checkCommandQueue();

        if (m_wdog.overflow())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return true;
      }
    };
  }
}

DUNE_TASK
