//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
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

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Period of state requests.
      double state_per;
      //! Numper of motor pole pairs
      int pole_pairs;
      //! Maximum phase current value
      float max_phase_current;
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
      //! Last state request.
      double m_last_state;
      //! Task arguments.
      Arguments m_args;
      //! Device error mask.
      uint8_t m_dev_errors;
      //! Enable legacy protocol
      bool m_legacy;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_actuation(0),
        m_ctl_mode(MODE_NONE),
        m_motor_ent(NULL),
        m_bridge_ent(NULL),
        m_mcu_ent(NULL),
        m_dev_errors(ERR_NONE),
        m_legacy(false)
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

        param("Maximum Phase Current", m_args.max_phase_current)
        .units(Units::Ampere)
        .defaultValue("5.4")
        .minimumValue("0.0");

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

        // Initialize the state request clock
        m_last_state = Clock::get();

        // Register handler routines.
        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::DesiredSpeed>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.state_per))
          m_args.state_per = 1.0 / m_args.state_per;

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
          m_proto.requestVersion();
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
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
                  err(DTR("device error: %s"), DTR(c_dev_error_strings[i]));
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
        }
      }

      void
      onVersion(unsigned major, unsigned minor, unsigned patch)
      {
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
        m_actuation = sanitizeRef((int16_t)(trimValue(value, -m_args.max_phase_current, m_args.max_phase_current) * 32.0));
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
            setRefCurrent(value * m_args.max_phase_current);
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
                return true;
              break;

            case LUCL::CommandTypeVersion:
              onVersion(cmd.version.major, cmd.version.minor, cmd.version.patch);
              break;

            case LUCL::CommandTypeInvalidVersion:
              err("%s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
              break;

            case LUCL::CommandTypeError:
              err(DTR("device reported: %s"), m_proto.getErrorString(cmd.error.code));
              break;

            case LUCL::CommandTypeInvalidChecksum:
              err("%s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
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
      task(void)
      {
        uint8_t actdata[] =
        {
          (uint8_t)(((m_actuation >> 8) & 0x3) | (m_ctl_mode << 6)),
          (uint8_t)m_actuation
        };

        // Send actuation.
        m_proto.sendCommand(CMD_ACTUATE, actdata, sizeof(actdata));
        if (!waitForCommand(CMD_ACTUATE))
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        double now = Clock::get();
        if ((now - m_last_state) < m_args.state_per)
          return;

        m_last_state = now;

        // Request state:
        m_proto.sendCommand(CMD_STATE, &m_dev_errors, 1);
        if (!waitForCommand(CMD_STATE))
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
        }
        else
        {
          // Check for internal errors
          if (!m_dev_errors)
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          else
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
        }
      }
    };
  }
}

DUNE_TASK
