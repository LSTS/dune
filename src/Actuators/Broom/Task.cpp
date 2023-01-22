//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Renato Caldas                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstring>
#include <string>
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace Broom
  {
    using DUNE_NAMESPACES;

    //! Device commands.
    enum Commands
    {
      //! Device state.
      CMD_STATE = 0x01,
      //! Actuate.
      CMD_ACTUATE = 0x02,
      //! Configuration.
      CMD_CONFIG = 0x03,
      CMD_CONFIG_DCYC = 0x04,
      CMD_CONFIG_IADC = 0x05,
      CMD_CONFIG_ERPM = 0x06,
      //! Debug.
      CMD_DEBUG = 0xd
    };

    //! Device error bits.
    enum DevErrors
    {
      //! No errors
      ERR_NONE = 0,
      //! Device initialization errors
      ERR_INIT = (1 << 0),
      //! I2C communication errors
      ERR_I2C = (1 << 1),
      //! Power supply errors
      ERR_POWER = (1 << 2),
      //! Hall sensor errors
      ERR_HALL = (1 << 3),
      //! Rotor locked error
      ERR_ROTOR_LOCKED = (1 << 4),
      //! Unsafe temperature errors
      ERR_IC_TEMPERATURE = (1 << 5),
      //! Unsafe temperature errors
      ERR_BRIDGE_TEMPERATURE = (1 << 6),
      //! Unsafe temperature errors
      ERR_MOTOR_TEMPERATURE = (1 << 7)
    };

    const char* c_dev_error_strings[] =
    {
      DTR_RT("init"),
      DTR_RT("i2c"),
      DTR_RT("power"),
      DTR_RT("hall"),
      DTR_RT("rotor locked"),
      DTR_RT("mcu temperature"),
      DTR_RT("bridge temperature"),
      DTR_RT("motor temperature")
    };

    //! Device Control Modes
    enum DevControlModes
    {
      //! No control
      MODE_NONE = 0,
      //! Voltage control
      MODE_VOLTAGE = 1,
      //! Current control
      MODE_CURRENT = 2,
      //! RPM control
      MODE_RPM = 3
    };

    enum SetupState
    {
      SS_VERSION_GET,
      SS_VERSION_WAIT,
      SS_CONFIG,
      SS_CONFIG_DCYC,
      SS_CONFIG_IADC,
      SS_CONFIG_ERPM,
      SS_DONE
    };

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Period of state requests.
      double state_per;
      //! Numper of motor pole pairs
      int pole_pairs;
      //! Maximum rotor RPM value
      int max_rpm;
      //! Thrust control mode
      std::string thrust_ctl_mode;
      //! Motor entity label.
      std::string motor_elabel;
      //! Bridge entity label
      std::string bridge_elabel;
      //! MCU entity label
      std::string mcu_elabel;
      //! Inverted rotation.
      bool inv_rotation;
      //! Accept DesiredSpeed messages
      bool desired_speed;
      //! Motor identifier.
      unsigned motor_id;
      //! Number of seconds without data before reporting an error.
      double timeout_error;
      //! Number of seconds without data before reporting a failure and
      //! restarting.
      double timeout_failure;
      int8_t current_raw_offset;
      uint8_t actuation_wdt;
      uint8_t motor_temp_max;
      uint8_t motor_temp_hyst;
      uint8_t bridge_temp_max;
      uint8_t bridge_temp_hyst;
      uint16_t ctl_dcyc_max;
      uint8_t ctl_dcyc_inc;
      std::vector<int16_t> ctl_dcyc_negl;
      uint16_t ctl_iadc_max;
      uint8_t ctl_iadc_inc;
      std::vector<int16_t> ctl_iadc_negl;
      uint16_t ctl_erpm_max;
      uint8_t ctl_erpm_inc;
      std::vector<int16_t> ctl_erpm_negl;
    };

    struct Task: public Tasks::Periodic
    {
      //! Device protocol handler.
      Hardware::LUCL::Protocol m_proto;
      //! Actuation command.
      int16_t m_actuation;
      //! Control mode.
      DevControlModes m_ctl_mode;
      //! Thrust control mode.
      DevControlModes m_thrust_ctl_mode;
      //! RPMs message.
      IMC::Rpm m_rpms;
      //! Motor entity.
      Entities::BasicEntity* m_motor_ent;
      //! Bridge entity.
      Entities::BasicEntity* m_bridge_ent;
      //! MCU entity.
      Entities::BasicEntity* m_mcu_ent;
      //! Device error mask.
      uint8_t m_dev_errors;
      //! Motor identifier.
      unsigned m_motor_id;
      //! Enable legacy protocol
      bool m_legacy;
      //! Used to silence some spurious boot errors.
      Counter<double> m_boot_timer;
      //! State update timer.
      Counter<double> m_state_timer;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Setup watchdog.
      Counter<double> m_wdog_setup;
      //! Entity state timer.
      Counter<double> m_estate_timer;
      //! Sample count.
      size_t m_sample_count;
      //! Faults count.
      size_t m_faults_count;
      //! Timeout count.
      size_t m_timeout_count;
      //! Version.
      std::vector<unsigned> m_version;
      //! EEPROM - General Config Area.
      std::vector<uint8_t> m_eep_config;
      //! EEPROM - DCYC Config Area.
      std::vector<uint8_t> m_eep_dcyc;
      //! EEPROM - IADC Config Area.
      std::vector<uint8_t> m_eep_iadc;
      //! EEPROM - RPM Config Area.
      std::vector<uint8_t> m_eep_erpm;
      //! Setup state.
      SetupState m_setup_state;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_actuation(0),
        m_ctl_mode(MODE_NONE),
        m_motor_ent(NULL),
        m_bridge_ent(NULL),
        m_mcu_ent(NULL),
        m_dev_errors(ERR_NONE),
        m_motor_id(0),
        m_legacy(false),
        m_estate_timer(1.0),
        m_sample_count(0),
        m_faults_count(0),
        m_timeout_count(0),
        m_setup_state(SS_VERSION_GET)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("State Sampling Frequency", m_args.state_per)
        .units(Units::Hertz)
        .defaultValue("1.0")
        .minimumValue("0.1")
        .description("Value of the state sampling frequency");

        param("Motor Pole Pairs", m_args.pole_pairs)
        .defaultValue("12.0")
        .minimumValue("1.0")
        .description("Number of motor pole pairs");

        param("Maximum Rotor RPM", m_args.max_rpm)
        .units(Units::RPM)
        .defaultValue("2500")
        .minimumValue("0");

        param("Thrust Control Mode", m_args.thrust_ctl_mode)
        .defaultValue("none")
        .values("none, voltage, current, rpm")
        .description("Thrust control mode ('none', 'voltage', 'current', 'rpm')");

        param("Inverted Rotation", m_args.inv_rotation)
        .defaultValue("false");

        param("Accept DesiredSpeed Messages", m_args.desired_speed)
        .defaultValue("false");

        param("Motor - Entity Label", m_args.motor_elabel)
        .defaultValue("");

        param("Bridge - Entity Label", m_args.bridge_elabel)
        .defaultValue("");

        param("MCU - Entity Label", m_args.mcu_elabel)
        .defaultValue("");

        param("Motor Identifier", m_args.motor_id)
        .defaultValue("0");

        param("Timeout - Error", m_args.timeout_error)
        .defaultValue("2.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before reporting an error");

        param("Timeout - Failure", m_args.timeout_failure)
        .defaultValue("4.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before restarting task");

        param("Current Raw Offset", m_args.current_raw_offset)
        .defaultValue("0");

        param("Actuation Watchdog", m_args.actuation_wdt)
        .defaultValue("30");

        param("Motor Temperature - Maximum", m_args.motor_temp_max)
        .defaultValue("85");

        param("Motor Temperature - Hysteresis", m_args.motor_temp_hyst)
        .defaultValue("75");

        param("Bridge Temperature - Maximum", m_args.bridge_temp_max)
        .defaultValue("100");

        param("Bridge Temperature - Hysteresis", m_args.bridge_temp_hyst)
        .defaultValue("50");

        param("Control DCYC - Maximum", m_args.ctl_dcyc_max)
        .defaultValue("511");

        param("Control DCYC - Increment", m_args.ctl_dcyc_inc)
        .defaultValue("1");

        param("Control DCYC - NegL", m_args.ctl_dcyc_negl)
        .size(3)
        .defaultValue("0, 0, 0");

        param("Control IADC - Maximum", m_args.ctl_iadc_max)
        .defaultValue("173")
        .description("Maximum phase current times 32");

        param("Control IADC - Increment", m_args.ctl_iadc_inc)
        .defaultValue("2");

        param("Control IADC - NegL", m_args.ctl_iadc_negl)
        .size(3)
        .defaultValue("82, -272, -610");

        param("Control ERPM - Maximum", m_args.ctl_erpm_max)
        .defaultValue("2400");

        param("Control ERPM - Increment", m_args.ctl_erpm_inc)
        .defaultValue("10");

        param("Control ERPM - NegL", m_args.ctl_erpm_negl)
        .size(3)
        .defaultValue("-381, 329, -331");

        // Register handler routines.
        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::DesiredSpeed>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_motor_id = m_args.motor_id;

        if (paramChanged(m_args.state_per))
          m_state_timer.setTop(1.0 / m_args.state_per);

        if (paramChanged(m_args.timeout_error))
          m_wdog.setTop(m_args.timeout_error);

        if (m_args.thrust_ctl_mode == "none")
          m_thrust_ctl_mode = MODE_NONE;
        else if (m_args.thrust_ctl_mode == "voltage")
          m_thrust_ctl_mode = MODE_VOLTAGE;
        else if (m_args.thrust_ctl_mode == "current")
          m_thrust_ctl_mode = MODE_CURRENT;
        else if (m_args.thrust_ctl_mode == "rpm")
          m_thrust_ctl_mode = MODE_RPM;
        else
          throw std::runtime_error(DTR("Motor control mode must be one of 'none', 'voltage', 'current', 'rpm'"));
      }

      ~Task(void)
      {
        // Stop the motor.
      }

      void
      onEntityReservation(void)
      {
        m_motor_ent = reserveEntity<Entities::BasicEntity>(m_args.motor_elabel);
        m_bridge_ent = reserveEntity<Entities::BasicEntity>(m_args.bridge_elabel);
        m_mcu_ent = reserveEntity<Entities::BasicEntity>(m_args.mcu_elabel);
      }

      void
      onResourceAcquisition(void)
      {
        try
        {
          m_proto.setUART(m_args.uart_dev);
          m_proto.open();
          m_boot_timer.setTop(10.0);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 5, false);
        }
      }

      void
      setup(void)
      {
        switch (m_setup_state)
        {
          case SS_VERSION_GET:
            debug("requesting firmware version");
            m_wdog_setup.setTop(10.0);
            m_version.clear();
            m_proto.requestVersion();
            m_setup_state = SS_VERSION_WAIT;
            break;

          case SS_VERSION_WAIT:
            waitForCommand(0);
            if (m_version.size() == 3)
              m_setup_state = SS_CONFIG;
            else if (m_wdog_setup.overflow())
              m_setup_state = SS_VERSION_GET;
            break;

          case SS_CONFIG:
            if (setupConfigGeneral())
              m_setup_state = SS_CONFIG_DCYC;
            else if (m_wdog_setup.overflow())
              m_setup_state = SS_VERSION_GET;
            break;

          case SS_CONFIG_DCYC:
            if (setupConfigDCYC())
              m_setup_state = SS_CONFIG_IADC;
            else if (m_wdog_setup.overflow())
              m_setup_state = SS_VERSION_GET;
            break;

          case SS_CONFIG_IADC:
            if (setupConfigIADC())
              m_setup_state = SS_CONFIG_ERPM;
            else if (m_wdog_setup.overflow())
              m_setup_state = SS_VERSION_GET;
            break;

          case SS_CONFIG_ERPM:
            if (setupConfigERPM())
              m_setup_state = SS_DONE;
            else if (m_wdog_setup.overflow())
              m_setup_state = SS_VERSION_GET;
            break;

          default:
            break;
        }
      }

      bool
      getEEPROM(uint8_t command, const uint8_t* data = NULL, size_t data_size = 0)
      {
        m_dev_errors = ERR_NONE;
        double deadline = Clock::get() + 2.0;

        while (Clock::get() < deadline)
        {
          m_proto.sendCommand(command, data, data_size);

          if (waitForCommand(command))
          {
            if (m_dev_errors == ERR_NONE)
              return true;

            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
          }
          else
          {
            m_timeout_count++;
          }
        }

        return false;
      }

      bool
      updateConfigArea(uint8_t command, std::vector<uint8_t>& dev_values, const std::vector<uint8_t>& new_values)
      {
        int area_number = command - CMD_CONFIG;

        debug("requesting configuration area %u", area_number);
        dev_values.clear();
        if (!getEEPROM(command))
        {
          return false;
        }

        if (dev_values == new_values)
        {
          debug("configuration area %u is up to date", area_number);
          return true;
        }

        if (dev_values.size() != new_values.size())
        {
          debug("configuration area %u has size %u, expecting %u",
                area_number,
                (unsigned)dev_values.size(),
                (unsigned)new_values.size());
          return false;
        }

        debug("updating configuration area %u", area_number);
        if (!getEEPROM(command, &new_values[0], new_values.size()))
        {
          debug("failed to update configuration area %u", area_number);
          return false;
        }

        return true;
      }

      bool
      setupConfigGeneral(void)
      {
        std::vector<uint8_t> cmd;
        cmd.resize(6);
        std::memcpy(&cmd[0], &m_args.current_raw_offset, 1);
        std::memcpy(&cmd[1], &m_args.actuation_wdt, 1);
        std::memcpy(&cmd[2], &m_args.motor_temp_max, 1);
        std::memcpy(&cmd[3], &m_args.motor_temp_hyst, 1);
        std::memcpy(&cmd[4], &m_args.bridge_temp_max, 1);
        std::memcpy(&cmd[5], &m_args.bridge_temp_hyst, 1);

        return updateConfigArea(CMD_CONFIG, m_eep_config, cmd);
      }

      bool
      setupConfigDCYC(void)
      {
        std::vector<uint8_t> cmd;
        cmd.resize(9);
        std::memcpy(&cmd[0], &m_args.ctl_dcyc_max, 2);
        std::memcpy(&cmd[2], &m_args.ctl_dcyc_inc, 1);
        std::memcpy(&cmd[3], &m_args.ctl_dcyc_negl[0], 2);
        std::memcpy(&cmd[5], &m_args.ctl_dcyc_negl[1], 2);
        std::memcpy(&cmd[7], &m_args.ctl_dcyc_negl[2], 2);

        return updateConfigArea(CMD_CONFIG_DCYC, m_eep_dcyc, cmd);
      }

      bool
      setupConfigIADC(void)
      {
        std::vector<uint8_t> cmd;
        cmd.resize(9);
        std::memcpy(&cmd[0], &m_args.ctl_iadc_max, 2);
        std::memcpy(&cmd[2], &m_args.ctl_iadc_inc, 1);
        std::memcpy(&cmd[3], &m_args.ctl_iadc_negl[0], 2);
        std::memcpy(&cmd[5], &m_args.ctl_iadc_negl[1], 2);
        std::memcpy(&cmd[7], &m_args.ctl_iadc_negl[2], 2);

        return updateConfigArea(CMD_CONFIG_IADC, m_eep_iadc, cmd);
      }

      bool
      setupConfigERPM(void)
      {
        std::vector<uint8_t> cmd;
        cmd.resize(9);
        std::memcpy(&cmd[0], &m_args.ctl_erpm_max, 2);
        std::memcpy(&cmd[2], &m_args.ctl_erpm_inc, 1);
        std::memcpy(&cmd[3], &m_args.ctl_erpm_negl[0], 2);
        std::memcpy(&cmd[5], &m_args.ctl_erpm_negl[1], 2);
        std::memcpy(&cmd[7], &m_args.ctl_erpm_negl[2], 2);

        return updateConfigArea(CMD_CONFIG_ERPM, m_eep_erpm, cmd);
      }

      void
      onCommand(uint8_t cmd, const uint8_t* data, int data_size)
      {
        IMC::Temperature t;
        IMC::Voltage v;
        IMC::Current cur;
        IMC::Rpm rpm;

        switch (cmd)
        {
          case CMD_DEBUG:
            debug("debug start");
            for (int i = 0; i < data_size; i++)
            {
              debug("debug %d: %d", i, (int)data[i]);
            }
            break;
          case CMD_STATE:
            if (data_size != 8)
            {
              // Error!
              return;
            }
            m_dev_errors = data[0];

            t.setTimeStamp();
            t.value = (int8_t)data[1];
            m_mcu_ent->dispatch(t, DF_KEEP_TIME);
            t.value = (int8_t)data[2];
            m_bridge_ent->dispatch(t, DF_KEEP_TIME);
            t.value = (int8_t)data[3];
            m_motor_ent->dispatch(t, DF_KEEP_TIME);

            v.setTimeStamp(t.getTimeStamp());
            v.value = ((uint8_t)data[4] * 0.025);
            m_mcu_ent->dispatch(v, DF_KEEP_TIME);
            v.value = ((uint8_t)data[5] * 0.25);
            m_bridge_ent->dispatch(v, DF_KEEP_TIME);

            cur.setTimeStamp(t.getTimeStamp());
            cur.value = (int16_t)(data[6] << 8 | data[7]) * 10.0 / 511.0;
            m_bridge_ent->dispatch(cur, DF_KEEP_TIME);

            if (m_dev_errors)
            {
              for (int i = 0; i < 8; i++)
              {
                if (data[0] & (1 << i))
                {
                  if (m_boot_timer.overflow())
                    err(DTR("device error: %s"), DTR(c_dev_error_strings[i]));
                }
              }

              // FIXME: report this error properly
              if (data[0] & ERR_POWER)
              {
                err(DTR("power is not good"));
              }
              if (m_dev_errors & ERR_INIT)
              {
                err(DTR("device init error, requesting reset"));
                m_proto.requestReset();
              }
            }

            break;
          case CMD_ACTUATE:
            if (data_size != 6)
            {
              // Error!
              err(DTR("CMD_ACTUATE Data size doesn't match!"));
              return;
            }

            v.setTimeStamp();
            v.value = (int16_t)(data[0] << 8 | data[1]) * 0.125;
            m_motor_ent->dispatch(v, DF_KEEP_TIME);

            rpm.setTimeStamp(v.getTimeStamp());
            rpm.value = (m_args.inv_rotation ? -1 : 1) * (int16_t)(data[4] << 8 | data[5]) * 10 / m_args.pole_pairs;
            m_motor_ent->dispatch(rpm, DF_KEEP_TIME);

            cur.setTimeStamp(v.getTimeStamp());
            if (m_legacy)
              cur.value = (int16_t)(data[2] << 8 | data[3]) * 10.0 / 511.0;
            else
              cur.value = (int16_t)(data[2] << 8 | data[3]) / 32.0;
            m_motor_ent->dispatch(cur, DF_KEEP_TIME);

            break;

          case CMD_CONFIG:
            if (data_size != 6)
            {
              // Error!
              err(DTR("CMD_CONFIG data size doesn't match!"));
              return;
            }
            m_eep_config.assign(data, data + 6);
            break;

          case CMD_CONFIG_DCYC:
            if (data_size != 9)
            {
              // Error!
              err(DTR("CMD_CONFIG_DCYC data size doesn't match!"));
              return;
            }
            m_eep_dcyc.assign(data, data + 9);
            break;

          case CMD_CONFIG_IADC:
            if (data_size != 9)
            {
              // Error!
              err(DTR("CMD_CONFIG_IADC data size doesn't match!"));
              return;
            }
            m_eep_iadc.assign(data, data + 9);
            break;

          case CMD_CONFIG_ERPM:
            if (data_size != 9)
            {
              // Error!
              err(DTR("CMD_CONFIG_ERPM data size doesn't match!"));
              return;
            }
            m_eep_erpm.assign(data, data + 9);
            break;
        }
      }

      void
      onVersion(unsigned major, unsigned minor, unsigned patch)
      {
        m_version.resize(3);
        m_version[0] = major;
        m_version[1] = minor;
        m_version[2] = patch;

        inf(DTR("firmware version %u.%u.%u"), major, minor, patch);

        // Enable legacy 1.0.0 protocol
        if (major == 1 && minor < 1)
          m_legacy = true;
      }

      //! Sanitize the actuation reference (limits and sign)
      //! @param[in] value actuation reference value to be sanitized
      int16_t
      sanitizeRef(int16_t value)
      {
        return (m_args.inv_rotation ? -1 : 1) * trimValue(value, -511, 511);
      }

      //! Set percentage of duty cycle as actuation reference
      //! @param[in] value percentage reference from -1.0 to 1.0
      void
      setRefDcycle(float value)
      {
        m_ctl_mode = MODE_VOLTAGE;
        m_actuation = sanitizeRef((int16_t)(511 * trimValue(value, -1, 1)));
      }

      //! Set phase current value as actuation reference
      //! @param[in] value phase current reference in Ampere
      void
      setRefCurrent(float value)
      {
        m_ctl_mode = MODE_CURRENT;
        m_actuation = sanitizeRef((int16_t)(trimValue(value, -m_args.ctl_iadc_max, m_args.ctl_iadc_max)));
      }

      //! Set rotor Rotations Per Minute value as actuation reference
      //! @param[in] value rotor angular velocity reference in Rotations Per Minute
      void
      setRefRPM(int value)
      {
        m_ctl_mode = MODE_RPM;
        m_actuation =  sanitizeRef((int16_t)(value * m_args.pole_pairs / 100));
      }

      //! Set thrust actuation reference, using the mode configured for the task
      //! @param[in] value percentage of thrust from -1 to 1
      void
      setRefThrust(float value)
      {
        switch(m_thrust_ctl_mode)
        {
          case MODE_VOLTAGE:
            setRefDcycle(value);
            break;
          case MODE_CURRENT:
            setRefCurrent(value * (m_args.ctl_iadc_max / 32.0));
            break;
          case MODE_RPM:
            setRefRPM((int)(value * m_args.max_rpm));
            break;
          default:
            m_ctl_mode = MODE_NONE;
        }
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        if (msg->id == m_motor_id)
          setRefThrust(msg->value);
      }

      void
      consume(const IMC::DesiredSpeed* msg)
      {
        if (!m_args.desired_speed)
        {
          debug("Discarded desired speed");
          return;
        }
        else
          debug("Accepted desired speed");

        switch(msg->speed_units)
        {
          case IMC::SUNITS_PERCENTAGE:
            setRefThrust(msg->value);
            return;
          case IMC::SUNITS_RPM:
            setRefRPM((int)msg->value);
            return;
          default:
            return;
        };
      }

      bool
      waitForCommand(uint8_t code)
      {
        LUCL::Command cmd;
        unsigned retries = 10;

        while (retries)
        {
          LUCL::CommandType type = m_proto.consumeData(cmd);

          switch (type)
          {
            case LUCL::CommandTypeNormal:
              onCommand(cmd.command.code, cmd.command.data, cmd.command.size);
              if (cmd.command.code == code)
              {
                m_wdog.reset();
                m_sample_count++;
                return true;
              }
              break;

            case LUCL::CommandTypeVersion:
              onVersion(cmd.version.major, cmd.version.minor, cmd.version.patch);
              m_wdog.reset();
              break;

            case LUCL::CommandTypeInvalidVersion:
              err("%s", DTR(Status::getString(Status::CODE_INVALID_VERSION)));
              break;

            case LUCL::CommandTypeError:
              err(DTR("device reported: %s"), m_proto.getErrorString(cmd.error.code));
              break;

            case LUCL::CommandTypeInvalidChecksum:
              m_faults_count++;
              break;

            case LUCL::CommandTypeNone:
              --retries;
              Delay::wait(0.05);
              break;

            default:
              break;
          }
        }

        return false;
      }

      void
      reportEntityState(void)
      {
        if (m_wdog.overflow() && m_boot_timer.overflow())
        {
          std::string text = String::str(DTR("%0.1f seconds without valid data"),
                                         m_wdog.getElapsed());

          if (m_wdog.getElapsed() >= m_args.timeout_failure)
            throw RestartNeeded(text, 0);
          else
            setEntityState(IMC::EntityState::ESTA_ERROR, text);

          return;
        }

        if (!m_estate_timer.overflow())
          return;

        double time_elapsed = m_estate_timer.getElapsed();
        double frequency = Math::round(m_sample_count / time_elapsed);

        std::string text = String::str(DTR("active | timeouts: %u | faults: %u | frequency: %u"),
                                       m_timeout_count,
                                       m_faults_count,
                                       (unsigned)frequency);

        if (m_sample_count && !m_dev_errors)
          setEntityState(IMC::EntityState::ESTA_NORMAL, text);

        m_estate_timer.reset();
        m_sample_count = 0;
      }

      void
      task(void)
      {
        if (m_setup_state != SS_DONE)
        {
          setup();
          if (m_setup_state == SS_DONE)
            inf("setup completed");
          return;
        }

        uint8_t actdata[] =
        {
          (uint8_t)(((m_actuation >> 8) & 0x3) | (m_ctl_mode << 6)),
          (uint8_t)m_actuation
        };

        // Send actuation.
        m_proto.sendCommand(CMD_ACTUATE, actdata, sizeof(actdata));
        if (!waitForCommand(CMD_ACTUATE))
          m_timeout_count++;

        reportEntityState();

        if (!m_state_timer.overflow())
          return;

        m_state_timer.reset();

        // Request state.
        m_proto.sendCommand(CMD_STATE, &m_dev_errors, 1);
        if (waitForCommand(CMD_STATE))
        {
          // Check for internal errors
          if (m_dev_errors)
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
        }
        else
        {
          m_timeout_count++;
        }
      }
    };
  }
}

DUNE_TASK
