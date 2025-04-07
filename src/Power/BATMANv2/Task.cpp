//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: PGonçalves                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local Headers.
#include "Driver.hpp"

namespace Power
{
  namespace BATMANv2
  {
    using DUNE_NAMESPACES;

    static const float c_delay_startup = 4.0f;
    static const uint8_t c_max_values_voltage = 16;
    static const uint8_t c_max_values_current = 3;

    struct Arguments
    {
      //! IO device.
      std::string io_dev;
      //! Input timeout.
      double input_timeout;
      //! Input number cell
      unsigned int number_cell;
      //! Scale conversion for A/Ah
      float scale_factor;
      //! Cell entity labels
      std::string cell_elabels[c_max_values_voltage - 1];
      //! Remaining Capacity entity label
      std::string rcap_elabel;
      //! Full Capacity entity label
      std::string fcap_elabel;
      //! State to dispatch Fuel level
      bool dispatch_fuel_level;
      //! Level of battery below which a warning will be thrown.
      float war_lvl;
      //! Level of battery below which an error will be thrown.
      float err_lvl;
      //! Level of battery (VOltage) below which an error will be thrown.
      float err_volt_lvl;
      //! Number of attempts before error
      int number_attempts;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! IO device handle.
      IO::Handle* m_handle;
      //! Flag to control date of connection to device
      bool m_is_connecting_to_device;
      //! Task arguments
      Arguments m_args;
      //! Driver of BatMan
      DriverBatMan *m_driver;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Temperature message
      IMC::Temperature m_tmp;
      //! Voltage message
      IMC::Voltage m_volt[c_max_values_voltage];
      //! Voltage of batteries message
      IMC::Voltage m_bat_volt;
      //! Current message
      IMC::Current m_amp[c_max_values_current];
      //! Fuel Level message
      IMC::FuelLevel m_fuel;
      //! Buffer forEntityState
      char m_buffer_entity[256];
      //! Read timestamp.
      double m_tstamp;
      //! Count for attempts
      int m_count_attempts;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_handle(NULL),
        m_is_connecting_to_device(false),
        m_driver(0),
        m_tstamp(0)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
          Tasks::Parameter::VISIBILITY_DEVELOPER, 
          true);

        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .description("IO device URI in the form \"uart://DEVICE:BAUD\"");

        param("Input Timeout", m_args.input_timeout)
        .defaultValue("3.0")
        .minimumValue("2.5")
        .maximumValue("4.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");

        param("Number of cells", m_args.number_cell)
        .defaultValue("7")
        .minimumValue("1")
        .maximumValue("15")
        .description("Number of cells to read.");

        param("Scale Factor A/Ah", m_args.scale_factor)
        .defaultValue("1")
        .description("Scale Factor A/Ah.");

        param("Number of attempts before error", m_args.number_attempts)
        .defaultValue("5")
        .minimumValue("1")
        .maximumValue("10")
        .description("Number of attempts before error.");

        // Extract cell entity label
        for (uint8_t i = 1; i < c_max_values_voltage; ++i)
        {
          std::string option = String::str("Cell %u - Entity Label", i);
          param(option, m_args.cell_elabels[i - 1])
          .defaultValue("")
          .description("Cell Entity Label");
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

      }

      ~Task() override
      {
        onDisconnect();
      }

      void
      onUpdateParameters(void)
      {
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        inf("onConnect");
        try
        {
          m_handle = openDeviceHandle(m_args.io_dev);
          m_is_connecting_to_device = true;
          return true;
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }
        return false;
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        inf("onDisconnect");
        if(m_driver != NULL)
        {
          debug("Sending stop to BatMan");
          m_driver->stopAcquisition();
          Memory::clear(m_driver);
        }
        if(m_handle != NULL)
        {
          Memory::clear(m_handle);
        }
      }

      void
      onIdle(void)
      {
        if(m_is_connecting_to_device)
        {
          war(DTR("Failed to initiate connection with device, restarting connection..."));
          requestActivation();
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        for (uint8_t i = 0; i < m_args.number_cell; ++i)
        {

          if (m_args.cell_elabels[i].empty())
            continue;

          m_volt[i + 1].setSourceEntity(getEid(m_args.cell_elabels[i]));
        }

        m_bat_volt.setSourceEntity(getEid("Batteries"));
        m_amp[1].setSourceEntity(getEid(m_args.rcap_elabel));
        m_amp[2].setSourceEntity(getEid(m_args.fcap_elabel));
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

      //! Initialize device.
      void
      onInitializeDevice() override
      {
        inf("onInitializeDevice");
        m_is_connecting_to_device = false;
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        try
        {
          m_driver = new DriverBatMan(this, m_handle, m_args.number_cell);
          m_count_attempts = 0;
          m_driver->stopAcquisition();
          Delay::wait(c_delay_startup);
          initBoard(false);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 10);
        }
      }

      void
      initBoard(bool noRestart)
      {
        m_wdog.setTop(m_args.input_timeout);
        m_wdog.reset();
        if (!m_driver->getVersionFirmware())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR("trying connecting to board")));
          war(DTR("failed to get firmware version"));
        }
        else
        {
          std::string firmware_info = m_driver->getFirmwareVersion();
          inf("Firmware Version: %s", firmware_info.c_str());
          IMC::VersionInfo vi;
          vi.version = firmware_info;
          vi.op = IMC::VersionInfo::OP_REPLY;
          dispatch(vi);
          m_wdog.reset();
        }

        if (!m_driver->initBatMan(m_args.number_cell, m_args.scale_factor))
        {
          if (!noRestart)
          {
            war("Resetting board");
            m_driver->stopAcquisition(false);
            Delay::wait(1.0);
            m_driver->sendCommandNoRsp("@RESET,*");
            Delay::wait(1.0);
            throw RestartNeeded(DTR("failed to init BatMan"), 10, true);
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR("trying connecting to board")));
            war(DTR("failed to init BatMan"));
            return;
          }
        }
        else
        {
          inf("BatMan initialized");
        }
        m_wdog.reset();

        if (!m_driver->startAcquisition())
        {
          if (!noRestart)
          {
            war("Fail Start of Acquisition. Resetting board");
            m_driver->stopAcquisition(false);
            Delay::wait(1.0);
            m_driver->sendCommandNoRsp("@RESET,*");
            Delay::wait(1.0);
            throw RestartNeeded(DTR("failed to start acquisition"), 10, true);
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR("trying connecting to board")));
            war(DTR("failed to start acquisition"));
            return;
          }
        }
        else
        {
          inf("Acquisition started");
        }
        m_wdog.reset();

        debug("Init and Start OK");
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
          std::sprintf(time_battery, "%dd %dh %dm", day, hour, min);
        else if (hour > 0)
          std::sprintf(time_battery, "%dh %dm", hour, min);
        else
          std::sprintf(time_battery, "%dm", min);

        return time_battery;
      }

      void
      dispatchData(void)
      {
        m_driver->resetStateNewData();

        m_volt[0].setTimeStamp(m_tstamp);
        m_volt[0].value = m_driver->m_batManData.voltage;
        dispatch(m_volt[0], DF_KEEP_TIME);

        m_bat_volt.setTimeStamp(m_tstamp);
        m_bat_volt.value = m_driver->m_batManData.voltage;
        dispatch(m_bat_volt, DF_KEEP_TIME);

        m_amp[0].setTimeStamp(m_tstamp);
        m_amp[0].value = m_driver->m_batManData.current;
        dispatch(m_amp[0], DF_KEEP_TIME);

        for (uint8_t id = 1; id <= m_args.number_cell; ++id)
        {
          m_volt[id].setTimeStamp(m_tstamp);
          m_volt[id].value = m_driver->m_batManData.cell_volt[id - 1];
          dispatch(m_volt[id], DF_KEEP_TIME);
        }

        m_tmp.setTimeStamp(m_tstamp);
        m_tmp.value = m_driver->m_batManData.temperature;
        dispatch(m_tmp, DF_KEEP_TIME);

        m_amp[1].setTimeStamp(m_tstamp);
        m_amp[1].value = m_driver->m_batManData.r_cap;
        dispatch(m_amp[1], DF_KEEP_TIME);

        m_amp[2].setTimeStamp(m_tstamp);
        m_amp[2].value = m_driver->m_batManData.f_cap;
        dispatch(m_amp[2], DF_KEEP_TIME);

        if(m_args.dispatch_fuel_level)
        {
          m_fuel.setTimeStamp(m_tstamp);
          m_fuel.value = (m_driver->m_batManData.r_cap * 100) / m_driver->m_batManData.f_cap;
          m_fuel.confidence = 100;
          dispatch(m_fuel, DF_KEEP_TIME);
        }

        if (m_fuel.value < m_args.err_lvl && m_driver->m_batManData.voltage < m_args.err_volt_lvl)
        {
          std::memset(&m_buffer_entity, '\0', sizeof(m_buffer_entity));
          if (m_driver->m_batManData.time_full > 0)
          {
            std::sprintf(m_buffer_entity, "active | %s | fuel reserve - ETF: %s",
                            m_args.io_dev.c_str(),
                            minutesToTime(m_driver->m_batManData.time_full).c_str());
          }
          else if((m_driver->m_batManData.time_empty > 0))
          {
            std::sprintf(m_buffer_entity, "active | %s | fuel reserve - ETD: %s",
                            m_args.io_dev.c_str(),
                            minutesToTime(m_driver->m_batManData.time_empty).c_str());
          }
          else
          {
            std::sprintf(m_buffer_entity, "active | %s | fuel reserve", m_args.io_dev.c_str());
          }
          setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR(m_buffer_entity)));
        }
        else if (m_fuel.value < m_args.err_lvl)
        {
          std::memset(&m_buffer_entity, '\0', sizeof(m_buffer_entity));
          if (m_driver->m_batManData.time_full > 0)
          {
            std::sprintf(m_buffer_entity, "fuel warning - ETF: %s", minutesToTime(m_driver->m_batManData.time_full).c_str());
          }
          else if((m_driver->m_batManData.time_empty > 0))
          {
            std::sprintf(m_buffer_entity, "fuel warning - ETD: %s", minutesToTime(m_driver->m_batManData.time_empty).c_str());
          }
          else
          {
            std::sprintf(m_buffer_entity, "active | %s | fuel reserve", m_args.io_dev.c_str());
          }
          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_buffer_entity)));
        }
        else if (m_fuel.value < m_args.war_lvl)
        {
          std::memset(&m_buffer_entity, '\0', sizeof(m_buffer_entity));
          if (m_driver->m_batManData.time_full > 0)
          {
            std::sprintf(m_buffer_entity, "fuel running low - ETF: %s", minutesToTime(m_driver->m_batManData.time_full).c_str());
          }
          else if ((m_driver->m_batManData.time_empty > 0))
          {
            std::sprintf(m_buffer_entity, "fuel running low - ETD: %s", minutesToTime(m_driver->m_batManData.time_empty).c_str());
          }
          else
          {
            std::sprintf(m_buffer_entity, "active | %s | fuel running low", m_args.io_dev.c_str());
          }
          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_buffer_entity)));
        }
        else
        {
          std::memset(&m_buffer_entity, '\0', sizeof(m_buffer_entity));

          if (m_driver->m_batManData.time_full > 0)
            std::sprintf(m_buffer_entity,
                         "active | %s | H: %d %%, Volt: %.3f V, RCap: %.3f Ah, ETF: %s",
                         m_args.io_dev.c_str(),
                         m_driver->m_batManData.health,
                         m_driver->m_batManData.voltage,
                         m_driver->m_batManData.r_cap,
                         minutesToTime(m_driver->m_batManData.time_full).c_str());
          else if (m_driver->m_batManData.time_empty > 0)
            std::sprintf(m_buffer_entity,
                         "active | %s | H: %d %%, Volt: %.3f V, RCap: %.3f Ah, ETD: %s",
                         m_args.io_dev.c_str(),
                         m_driver->m_batManData.health,
                         m_driver->m_batManData.voltage,
                         m_driver->m_batManData.r_cap,
                         minutesToTime(m_driver->m_batManData.time_empty).c_str());
          else
            std::sprintf(m_buffer_entity,
                         "active | %s | H: %d %%, Volt: %.3f V, RCap: %.3f Ah",
                         m_args.io_dev.c_str(),
                         m_driver->m_batManData.health,
                         m_driver->m_batManData.voltage,
                         m_driver->m_batManData.r_cap);

          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_buffer_entity)));
        }
      }

      //! Main loop.
      //! Check for input data.
      //! @return true.
      bool
      onReadData() override
      {
        waitForMessages(0.001);
        if (m_wdog.overflow())
        {
          if (m_count_attempts >= m_args.number_attempts)
          {
            war("Resetting board");
            m_driver->stopAcquisition(false);
            Delay::wait(1.0);
            m_driver->sendCommandNoRsp("@RESET,*");
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
          }

          setEntityState(IMC::EntityState::ESTA_NORMAL,
                         Utils::String::str(DTR("trying connecting to board")));
          inf("Timeout receiving data, trying reconnecting to board (%d of %d)",
            m_count_attempts, m_args.number_attempts);
          m_count_attempts++;
          m_handle->flush();
          m_wdog.reset();
          return false;
        }

        try
        {
          if (m_driver->haveNewData())
          {
            m_tstamp = Clock::getSinceEpoch();
            dispatchData();
            m_count_attempts = 0;
            m_wdog.reset();
            return true;
          }
        }
        catch (std::runtime_error& e)
        {
          err("haveNewData: %s", e.what());
        }

        return false;
      }
    };
  }
}

DUNE_TASK
