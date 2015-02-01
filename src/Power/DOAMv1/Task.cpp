//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstring>
#include <string>
#include <cstring>
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Power
{
  //! %DOAMv1 is responsible to interact with
  //! first generation of the Digital Ocean
  //! Acquisition Module for capturing underwater
  //! images.
  //!
  //! @author Ricardo Martins
  namespace DOAMv1
  {
    using DUNE_NAMESPACES;

    //! Maximum number of ADC derived messages.
    static const unsigned c_adcs_max = 6;

    //! Commands to device.
    enum Commands
    {
      CMD_STATE = 0x01,
      CMD_PWR_SET = 0x02,
      CMD_STROBE_SEL = 0x03,
      CMD_STROBE_SET = 0x04
    };

    //! Strobe modes.
    enum StrobeMode
    {
      STROBE_MODE_MCU = 0x00,
      STROBE_MODE_CAM = 0x01,
      STROBE_MODE_UNK = 0xff
    };

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! ADC voltage reference.
      double ref_volt;
      //! ADC conversion factors.
      std::vector<double> adc_factors[c_adcs_max];
      //! ADC entity labels.
      std::string adc_elabels[c_adcs_max];
      //! ADC messages.
      std::string adc_messages[c_adcs_max];
      //! Watchdog timeout.
      double wdog_tout;
      //! Power channel name.
      std::string pwr_name;
      //! Slave system name.
      std::string slave_system;
      //! Slave entity name.
      std::string slave_entity;
    };

    struct Task: public Tasks::Task
    {
      //! Device protocol handler.
      Hardware::LUCL::Protocol m_proto;
      //! ADC Messages.
      Message* m_adcs[c_adcs_max];
      //! Watchdog.
      Time::Counter<double> m_wdog;
      //! Temperature.
      IMC::Temperature m_temp;
      //! Power channel state.
      IMC::PowerChannelState m_power_state;
      //! Task arguments.
      Arguments m_args;
      //! Activation timer
      Counter<double> m_act_timer;
      //! True if slave CPU is alive.
      bool m_slave_alive;
      //! System id of the slave DUNE instance.
      unsigned m_slave_id;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_slave_alive(false)
      {
        std::memset(m_adcs, 0, sizeof(m_adcs));

        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the device");

        param("Power Channel - Name", m_args.pwr_name)
        .defaultValue("Camera Module")
        .description("Name of device's power channel");

        param("ADC Reference Voltage", m_args.ref_volt)
        .units(Units::Volt)
        .defaultValue("1.1");

        param("Watchdog Timeout", m_args.wdog_tout)
        .units(Units::Second)
        .defaultValue("2.0")
        .minimumValue("1.0")
        .description("Watchdog timeout");

        param("Slave System Name", m_args.slave_system)
        .description("Name of the slave system");

        param("Slave Entity Name", m_args.slave_entity)
        .description("Name of the slave entity");

        for (unsigned i = 0; i < c_adcs_max; ++i)
        {
          std::string label = String::str("ADC Channel %d - Message", i);
          param(label, m_args.adc_messages[i]);

          label = String::str("ADC Channel %d - Conversion", i);
          param(label, m_args.adc_factors[i])
          .defaultValue("1.0, 0.0")
          .size(2);

          label = String::str("ADC Channel %d - Entity Label", i);
          param(label, m_args.adc_elabels[i]);
        }

        m_power_state.state = IMC::PowerChannelState::PCS_OFF;

        // Register handler routines.
        bind<IMC::PowerOperation>(this);
        bind<IMC::PowerChannelControl>(this);
        bind<IMC::QueryPowerChannelState>(this);
        bind<IMC::Heartbeat>(this);
      }

      ~Task(void)
      {
        for (unsigned i = 0; i < c_adcs_max; ++i)
        {
          if (m_adcs[i] != NULL)
            delete m_adcs[i];
        }
      }

      void
      onUpdateParameters(void)
      {
        m_slave_id = resolveSystemName(m_args.slave_system);

        for (unsigned i = 0; i < c_adcs_max; ++i)
        {
          if (m_adcs[i] != NULL)
            delete m_adcs[i];

          m_adcs[i] = IMC::Factory::produce(m_args.adc_messages[i]);

          try
          {
            unsigned eid = resolveEntity(m_args.adc_elabels[i]);
            m_adcs[i]->setSourceEntity(eid);
          }
          catch (...)
          { }
        }

        m_power_state.name = m_args.pwr_name;
      }

      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < c_adcs_max; ++i)
        {
          unsigned eid = 0;
          try
          {
            eid = resolveEntity(m_args.adc_elabels[i]);
          }
          catch (...)
          {
            eid = reserveEntity(m_args.adc_elabels[i]);
          }
          m_adcs[i]->setSourceEntity(eid);
        }
      }

      void
      onResourceAcquisition(void)
      {
        m_proto.setUART(m_args.uart_dev);
        m_proto.open();
      }

      void
      onResourceRelease(void)
      {
        if (m_proto.isOpen())
          setStrobeMode(STROBE_MODE_MCU);
      }

      void
      onResourceInitialization(void)
      {
        m_proto.requestVersion();
        setPowerChannelState(0);
        setStrobeMode(STROBE_MODE_MCU);
        m_wdog.setTop(m_args.wdog_tout);
      }

      void
      setStrobeMode(StrobeMode mode)
      {
        uint8_t strobe = (uint8_t)mode;
        m_proto.sendCommand(CMD_STROBE_SEL, &strobe, 1);
        if (!waitForCommand(CMD_STROBE_SEL, 100))
        {
          war(DTR("failed to configure strobe mode"));
          return;
        }

        inf(DTR("strobe mode set to: %s"), (mode == STROBE_MODE_MCU) ? "MCU" : DTR("Camera"));
      }

      void
      sendMessages(const uint16_t* unpack)
      {
        // Dispatch ADCs
        for (unsigned i = 0; i < c_adcs_max; ++i)
        {
          fp32_t tmp = m_args.adc_factors[i][0] * ((unpack[i] / 1024.0) * m_args.ref_volt) + m_args.adc_factors[i][1];
          m_adcs[i]->setValueFP(tmp);
          dispatch(m_adcs[i]);
        }
      }

      void
      onCommand(uint8_t cmd, const uint8_t* data, int data_size)
      {
        if (cmd == CMD_STATE)
        {
          uint16_t unpack[] =
          {
            // ADC Channel 0.
            (uint16_t)(data[0] | (data[4] & 0x3 << 0) << 8),
            // ADC Channel 1
            (uint16_t)(data[1] | (data[4] & 0x3 << 2) << 6),
            // ADC Channel 2
            (uint16_t)(data[2] | (data[4] & 0x3 << 4) << 4),
            // ADC Channel 3
            (uint16_t)(data[3] | (data[4] & 0x3 << 6) << 2),
            // ADC Channel 4
            (uint16_t)(data[5] | (data[7] & 0x3 << 0) << 8),
            // ADC Channel 5
            (uint16_t)(data[6] | (data[7] & 0x3 << 2) << 6)
          };

          sendMessages(unpack);

          // Temperature.
          uint16_t temp_code = (data[8] << 8) | data[9];
          int16_t temp = 0;
          std::memcpy(&temp, &temp_code, 2);
          m_temp.value = temp * 0.0625;
          dispatch(m_temp);

          m_wdog.reset();
        }

        (void)data_size;
      }

      void
      onVersion(unsigned major, unsigned minor, unsigned patch)
      {
        inf(DTR("firmware version %u.%u.%u"), major, minor, patch);
      }

      void
      consume(const IMC::Heartbeat* msg)
      {
        if (!isActivating() || (msg->getSource() != m_slave_id))
          return;

        if (std::abs(msg->getTimeStamp() - Clock::getSinceEpoch()) <= 1.0)
        {
          debug("slave is alive and synchronized");
          m_slave_alive = true;
        }
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        dispatchReply(*msg, m_power_state);
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        if (msg->name != m_args.pwr_name)
          return;

        if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
          setPowerChannelState(1);
        else if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_OFF)
          setPowerChannelState(0);
      }

      void
      consume(const IMC::PowerOperation* msg)
      {
        uint8_t value = 0;
        if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_IP)
          value = 0;
        else if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_ABORTED)
          value = 1;

        setPowerChannelState(value);
      }

      void
      checkActivation(void)
      {
        if (m_act_timer.overflow())
        {
          activationFailed(DTR("failed to contact device"));
          return;
        }

        if (m_slave_alive)
        {
          activate();
          debug("activation took %0.2f s", getActivationTime() - m_act_timer.getRemaining());

          IMC::SetEntityParameters ep;
          ep.name = m_args.slave_entity;
          IMC::EntityParameter ea;
          ea.name = "Active";
          ea.value = "true";
          ep.params.push_back(ea);
          dispatch(ep);
        }
      }

      void
      onRequestActivation(void)
      {
        m_slave_alive = false;
        setPowerChannelState(1);
        m_act_timer.setTop(getActivationTime());
        spew("my getActivationTime() is %d", getActivationTime());
      }

      void
      onRequestDeactivation(void)
      {
        // NOTE: some CPUs may require proper shutdown, which is not implemented yet.
        setPowerChannelState(0);
        deactivate();
      }

      void
      onActivation(void)
      {
        setStrobeMode(STROBE_MODE_CAM);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setStrobeMode(STROBE_MODE_MCU);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      bool
      setPowerChannelState(uint8_t value)
      {
        m_proto.sendCommand(CMD_PWR_SET, &value, 1);
        bool rv = waitForCommand(CMD_PWR_SET, 100);
        if (rv)
        {
          if (value)
            m_power_state.state = IMC::PowerChannelState::PCS_ON;
          else
            m_power_state.state= IMC::PowerChannelState::PCS_OFF;

          dispatch(m_power_state);
        }

        return rv;
      }

      bool
      waitForCommand(uint8_t code, unsigned retries = 10)
      {
        LUCL::Command cmd;

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
              err("%s: %s", DTR("device reported"), m_proto.getErrorString(cmd.error.code));
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
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.5);

          m_proto.sendCommand(CMD_STATE);
          waitForCommand(CMD_STATE);

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          }
          else
          {
            if (isActive())
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            else
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          }

          if (isActivating())
            checkActivation();
        }
      }
    };
  }
}

DUNE_TASK
