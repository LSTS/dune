//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
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
  //! %PCTLv2 is responsible to interact with
  //! the second generation of LSTS's power
  //! controller device.
  //!
  //! @author Ricardo Martins
  namespace PCTLv2
  {
    using DUNE_NAMESPACES;

    //! Number of ADC channels.
    static const unsigned c_adcs_count = 6;
    //! Number of Power channels.
    static const unsigned c_pwrs_count = 18;
    //! Number of leak sensors.
    static const unsigned c_leak_count = 2;
    //! Number of LEDs.
    static const unsigned c_led_count = 4;

    //! Commands to control device.
    enum Commands
    {
      CMD_STATE = 0x01,
      CMD_PWR_CTL = 0x02,
      CMD_PWR_HLT = 0x03,
      CMD_PWR_SAVE = 0x04,
      CMD_LED_CTL = 0x05,
      CMD_EEPROM = 0x06,
      CMD_TEMP = 0x07
    };

    //! Device modes.
    enum Modes
    {
      //! System is standing by.
      PWR_MODE_STAND_BY,
      //! Power on sequence: CPU.
      PWR_MODE_ON_CPU,
      //! Power on sequence: Radio.
      PWR_MODE_ON_RADIO,
      //! Power on sequence: Ethernet Switch.
      PWR_MODE_ON_ESWITCH,
      //! Power on sequence: saved channels.
      PWR_MODE_ON_SAVED,
      //! System is ON.
      PWR_MODE_ON,
      //! System is checking if emergency mode is required.
      PWR_MODE_EMERGENCY_CHECK,
      //! System is about to enter emergency mode.
      PWR_MODE_EMERGENCY_IP,
      //! System is in emergency mode.
      PWR_MODE_EMERGENCY,
      //! System is turning OFF.
      PWR_MODE_OFF_IP
    };

    // We don't count channel saved states here.
    enum EEPROM
    {
      EEPROM_START = 3,
      EEPROM_SIZE = 8
    };

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! ADC voltage reference.
      double adc_ref;
      //! ADC Messages.
      std::string adc_messages[c_adcs_count];
      //! ADC entity labels.
      std::string adc_elabels[c_adcs_count];
      //! ADC conversion factors.
      std::vector<double> adc_factors[c_adcs_count];
      //! Power channels names.
      std::string pwr_labels[c_pwrs_count];
      //! Power channels states.
      unsigned pwr_states[c_pwrs_count];
      //! Leaks entity labels.
      std::string leak_elabels[c_leak_count];
      //! Watchdog timeout.
      double wdog_tout;
      //! Channel state: emergency.
      std::vector<uint8_t> chn_eme_state;
      //! Minimum operating voltage.
      double vol_min;
    };

    struct Task: public Tasks::Task
    {
      //! Device protocol handler.
      Hardware::LUCL::Protocol m_proto;
      //! ADC messages.
      IMC::Message* m_adcs[c_adcs_count];
      //! Leak detection.
      IMC::EntityState m_leaks[c_leak_count];
      //! Power channels.
      IMC::PowerChannelState m_pwrs[c_pwrs_count];
      //! Power operation.
      IMC::PowerOperation m_pwr_op;
      //! Power down is in progress.
      bool m_pwr_down;
      //! Temperature.
      IMC::Temperature m_temp;
      //! Watchdog.
      Time::Counter<double> m_wdog;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_pwr_down(false)
      {
        std::memset(m_adcs, 0, sizeof(m_adcs));

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the board");

        param("ADC Reference Voltage", m_args.adc_ref)
        .defaultValue("1.1")
        .units(Units::Volt)
        .description("ADC Reference Voltage");

        param("Channel States - Emergency", m_args.chn_eme_state)
        .size(3)
        .defaultValue("0x01, 0x00, 0x00");

        param("Minimum Operating Voltage", m_args.vol_min)
        .units(Units::Volt)
        .defaultValue("22")
        .description("Once this value is hit the system will enter emergency mode");

        param("Watchdog Timeout", m_args.wdog_tout)
        .units(Units::Second)
        .defaultValue("2.0")
        .description("Watchdog timeout");

        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          std::string option = String::str("ADC Channel %u - Message", i);
          param(option, m_args.adc_messages[i]);

          option = String::str("ADC Channel %u - Entity Label", i);
          param(option, m_args.adc_elabels[i]);

          option = String::str("ADC Channel %u - Conversion", i);
          param(option, m_args.adc_factors[i])
          .size(2)
          .defaultValue("1.0, 0.0");
        }

        for (unsigned i = 0; i < c_pwrs_count; ++i)
        {
          std::string option = String::str("Power Channel %u - Label", i);
          param(option, m_args.pwr_labels[i]);

          option = String::str("Power Channel %u - State", i);
          param(option, m_args.pwr_states[i])
          .defaultValue("0");
        }

        for (unsigned i = 0; i < c_leak_count; ++i)
        {
          std::string option = String::str("Leak %u - Entity Label", i);
          param(option, m_args.leak_elabels[i]);
        }

        // Register handler routines.
        bind<IMC::QueryPowerChannelState>(this);
        bind<IMC::PowerChannelControl>(this);
        bind<IMC::LedControl>(this);
      }

      ~Task(void)
      {
        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          if (m_adcs[i] != NULL)
            delete m_adcs[i];
        }
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          if (m_adcs[i] != NULL)
            delete m_adcs[i];

          m_adcs[i] = IMC::Factory::produce(m_args.adc_messages[i]);
        }

        for (unsigned i = 0; i < c_pwrs_count; ++i)
        {
          m_pwrs[i].id = i;
          m_pwrs[i].label = m_args.pwr_labels[i];

          if (m_args.pwr_states[i] == 1)
            m_pwrs[i].state = IMC::PowerChannelState::PCS_ON;
          else
            m_pwrs[i].state = IMC::PowerChannelState::PCS_OFF;
        }
      }

      //! Reserve entities.
      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          unsigned eid = 0;

          try
          {
            eid = resolveEntity(m_args.adc_elabels[i]);
          }
          catch (Tasks::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(m_args.adc_elabels[i]);
          }

          m_adcs[i]->setSourceEntity(eid);
        }

        // Initialize leak messages.
        for (unsigned i = 0; i < c_leak_count; ++i)
        {
          m_leaks[i].state = IMC::EntityState::ESTA_NORMAL;
          m_leaks[i].description = DTR(Status::getString(Status::CODE_ACTIVE));
          m_leaks[i].setSourceEntity(reserveEntity(m_args.leak_elabels[i]));
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_proto.setUART(m_args.uart_dev);
        m_proto.open();
        m_wdog.setTop(m_args.wdog_tout);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        uint8_t state = IMC::PowerChannelState::PCS_OFF;
        for (unsigned i = 0; i < c_pwrs_count; ++i)
        {
          if (m_args.pwr_states[i] == 1)
            state = IMC::PowerChannelState::PCS_ON;
          else
            state = IMC::PowerChannelState::PCS_OFF;

          setPowerChannelState(i, state);
        }

        for (uint8_t i = 0; i < c_led_count; ++i)
        {
          uint8_t data[] = {i, 0};
          m_proto.sendCommand(CMD_LED_CTL, data, sizeof(data));
          waitForCommand(CMD_LED_CTL);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_proto.requestVersion();

        updateEEPROM();

        for (unsigned i = 0; i < c_pwrs_count; ++i)
          setPowerChannelState(i, m_pwrs[i].state);
      }

      //! Update EEPROM data.
      void
      updateEEPROM(void)
      {
        uint16_t vol_min = (uint16_t)Math::round(m_args.vol_min * 1000);
        uint16_t vol_cnv = (uint16_t)Math::round(m_args.adc_factors[0][0] * 100.0);
        uint8_t cmd[] =
        {
          EEPROM_START,
          EEPROM_SIZE,
          (uint8_t)m_args.chn_eme_state[0],
          (uint8_t)m_args.chn_eme_state[1],
          (uint8_t)m_args.chn_eme_state[2],
          (uint8_t)Math::round(m_args.adc_ref * 10),
          (uint8_t)(vol_min >> 8),
          (uint8_t)(vol_min),
          (uint8_t)(vol_cnv >> 8),
          (uint8_t)(vol_cnv)
        };

        m_proto.sendCommand(CMD_EEPROM, cmd, sizeof(cmd));
        if (!waitForCommand(CMD_EEPROM, 100))
          err(DTR("failed to update EEPROM"));
      }

      //! Process data from ADCs
      //! @param[in] data data buffer.
      void
      processADCs(const uint8_t* data)
      {
        uint16_t unpack[] =
        {
          (uint16_t)(data[0] | (data[4] & 0x3 << 0) << 8),
          (uint16_t)(data[1] | (data[4] & 0x3 << 2) << 6),
          (uint16_t)(data[2] | (data[4] & 0x3 << 4) << 4),
          (uint16_t)(data[3] | (data[4] & 0x3 << 6) << 2),
          (uint16_t)(data[5] | (data[7] & 0x3 << 0) << 8),
          (uint16_t)(data[6] | (data[7] & 0x3 << 2) << 6)
        };

        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          fp32_t tmp = m_args.adc_factors[i][0] * ((unpack[i] / 1024.0) * m_args.adc_ref) + m_args.adc_factors[i][1];
          m_adcs[i]->setValueFP(tmp);
          dispatch(m_adcs[i]);
        }
      }

      //! Process data from leak sensors.
      //! @param[in] data data buffer.
      void
      processLeaks(const uint8_t* data)
      {
        unsigned leak = (data[7] >> 4) & 0x03;
        setLeakStatus(0, leak & 0x01);
        setLeakStatus(1, (leak >> 1) & 0x01);
      }

      //! Process power information.
      //! @param[in] data data buffer.
      void
      processPowerInfo(const uint8_t* data)
      {
        uint32_t pwr = (data[8]) | (data[9] << 8) | (data[10] << 16);
        for (unsigned i = 0; i < c_pwrs_count; ++i)
          m_pwrs[i].state = (pwr & (1 << i)) ? IMC::PowerChannelState::PCS_ON : IMC::PowerChannelState::PCS_OFF;
      }

      //! Process device mode.
      //! @param[in] data data buffer.
      void
      processMode(const uint8_t* data)
      {
        if (data[12] == PWR_MODE_EMERGENCY_IP || data[12] == PWR_MODE_EMERGENCY || data[12] == PWR_MODE_OFF_IP)
        {
          if (!m_pwr_down)
          {
            war("%s", DTR(Status::getString(Status::CODE_POWER_DOWN)));
            m_pwr_down = true;
            m_pwr_op.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
            m_pwr_op.time_remain = data[11];
            dispatch(m_pwr_op);
          }
        }
        else if (m_pwr_down)
        {
          war(DTR("power down sequence aborted"));
          m_pwr_down = false;
          m_pwr_op.op = IMC::PowerOperation::POP_PWR_DOWN_ABORTED;
          dispatch(m_pwr_op);
        }
      }

      //! On Command call.
      //! @param[in] cmd command.
      //! @param[in] data buffer of data.
      //! @param[in] data_size size of data.
      void
      onCommand(uint8_t cmd, const uint8_t* data, int data_size)
      {
        if (cmd == CMD_STATE)
        {
          processADCs(data);
          processLeaks(data);
          processPowerInfo(data);
          processMode(data);
        }
        else if (cmd == CMD_TEMP)
        {
          uint16_t temp_code = (data[0] << 8) | data[1];
          int16_t temp = 0;
          std::memcpy(&temp, &temp_code, 2);
          m_temp.value = temp * 0.0625;
          dispatch(m_temp);
        }

        (void)data_size;
      }

      //! On version call.
      //! @param[in] major major version number.
      //! @param[in] minor minor version number.
      //! @param[in] patch patch version number.
      void
      onVersion(unsigned major, unsigned minor, unsigned patch)
      {
        inf(DTR("version: %u.%u.%u"), major, minor, patch);
      }

      //! Wait for command.
      //! @param[in] code command code.
      //! @return true if succcessful, false otherwise.
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
              m_wdog.reset();
              onCommand(cmd.command.code, cmd.command.data, cmd.command.size);
              if (cmd.command.code == code)
                return true;
              break;

            case LUCL::CommandTypeVersion:
              m_wdog.reset();
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
              Delay::wait(0.001);
              break;

            default:
              break;
          }
        }

        return false;
      }

      //! Set Leak status.
      //! @param[in] idx leak index.
      //! @param[in] leak leak status.
      void
      setLeakStatus(int idx, bool leak)
      {
        IMC::EntityState& es = m_leaks[idx];

        if (leak)
        {
          if (es.state == IMC::EntityState::ESTA_NORMAL)
          {
            es.state = IMC::EntityState::ESTA_FAILURE;
            es.description = DTR("leak detected");
            dispatch(es);
          }
        }
        else if (es.state == IMC::EntityState::ESTA_FAILURE)
        {
          es.state = IMC::EntityState::ESTA_NORMAL;
          es.description = DTR("no leak");
          dispatch(es);
        }
      }

      //! Define power channel state.
      //! @param[in] channel channel.
      //! @param[in] state state of the power channel.
      void
      setPowerChannelState(unsigned channel, unsigned state)
      {
        uint8_t data[] =
        {
          (uint8_t)channel,
          (uint8_t)state
        };

        m_proto.sendCommand(CMD_PWR_CTL, data, sizeof(data));
        waitForCommand(CMD_PWR_CTL);
      }

      //! Report leak entities.
      void
      onReportEntityState(void)
      {
        dispatch(m_leaks[0]);
        dispatch(m_leaks[1]);
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        (void)msg;
        dispatchPowerChannelStates();
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_OFF)
        {
          if (msg->id == 255)
          {
            m_proto.sendCommand(CMD_PWR_HLT, 0, 0);
            return;
          }
          else
          {
            uint8_t data[] = {msg->id, 0};
            m_proto.sendCommand(CMD_PWR_CTL, data, sizeof(data));
            waitForCommand(CMD_PWR_CTL);
          }
        }
        else if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
        {
          uint8_t data[] = {msg->id, 1};
          m_proto.sendCommand(CMD_PWR_CTL, data, sizeof(data));
          waitForCommand(CMD_PWR_CTL);
        }
        else if (msg->op == IMC::PowerChannelControl::PCC_OP_SAVE)
        {
          uint8_t data = 0;
          m_proto.sendCommand(CMD_PWR_SAVE, &data, 1);
          waitForCommand(CMD_PWR_SAVE, 100);
        }
      }

      void
      consume(const IMC::LedControl* msg)
      {
        uint8_t data[] = {msg->id, msg->op};
        m_proto.sendCommand(CMD_LED_CTL, data, sizeof(data));
        waitForCommand(CMD_LED_CTL);
      }

      //! Dispatch power channel state messages to bus.
      void
      dispatchPowerChannelStates(void)
      {
        for (unsigned i = 0; i < c_pwrs_count; ++i)
        {
          if (m_pwrs[i].label.substr(0, 3) != "N/C")
            dispatch(m_pwrs[i]);
        }
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
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          else
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          dispatchPowerChannelStates();
        }
      }
    };
  }
}

DUNE_TASK
