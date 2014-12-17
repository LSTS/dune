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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <string>
#include <algorithm>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "MCP23017.hpp"

#define MCP23017_ADDR 0x24
#define PARAMS_COUNT  6

// Parameters: index of ADC reference voltage * 10.
#define PARAMS_ADC_REF       0
// Parameters: index of battery current conversion factor * 100.
#define PARAMS_ADC_BAT_VOL   1
// Parameters: index of battery voltage conversion factor * 100.
#define PARAMS_ADC_BAT_AMP   2
// Parameters: index of system voltage conversion factor * 100.
#define PARAMS_ADC_SYS_VOL   3
// Parameters: index of system current conversion factor * 100.
#define PARAMS_ADC_SYS_AMP   4
// Parameters: charger current at which we consider the battery charged * 100.
#define PARAMS_CHARGED_AMP   5

namespace Power
{
  namespace MCBv2
  {
    using DUNE_NAMESPACES;

    //! Maximum number of ADC derived messages.
    static const unsigned c_adcs_count = 6;
    //! Number of power channels.
    static const unsigned c_pwrs_count = 17;
    //! Id of the backlight power channel.
    static const unsigned c_pwr_blight = 16;

    //! Commands to the device.
    enum Commands
    {
      CMD_STATE = 0x01,
      CMD_BLIGHT = 0x02,
      CMD_PARAMS = 0x03,
      CMD_SAVE = 0x04,
      CMD_HALT = 0x05,
      CMD_LCD_LINE = 0x06
    };

    //! Power Bits.
    enum PowerBits
    {
      BIT_SW_SYS_ON = (1 << 7),
      BIT_SW_CHR_ON = (1 << 6)
    };

    //! Power Channel data structure.
    struct PowerChannel
    {
      IMC::PowerChannelState state;
      unsigned id;
      double sched_on;
      double sched_off;

      PowerChannel(void)
      {
        resetSchedules();
      }

      void
      resetSchedules(void)
      {
        sched_on = -1;
        sched_off = -1;
      }
    };

    //! Task arguments.
    struct Arguments
    {
      //! Model.
      std::string model;
      //! I2C device.
      std::string i2c_dev;
      //! ADC Reference Voltage.
      double adc_ref;
      //! Charged current.
      double charged_amp;
      //! ADC Messages.
      std::string adc_messages[c_adcs_count];
      //! ADC entity labels.
      std::string adc_elabels[c_adcs_count];
      //! ADC conversion factors.
      std::vector<double> adc_factors[c_adcs_count];
      //! Power channels names.
      std::string pwr_names[c_pwrs_count];
      //! Initial power channels states.
      unsigned pwr_states[c_pwrs_count];
      //! True to automatically upgrade firmware.
      bool flash_upgrade;
      //! True to drived LCD from MCB.
      bool lcd;
    };

    struct Task: public Tasks::Task
    {
      //! Convenience type definition for a table of power channels.
      typedef std::map<std::string, PowerChannel*> PowerChannelMap;
      //! Device I2C address.
      static const uint8_t c_addr = 0x10;
      //! Task arguments.
      Arguments m_args;
      //! Device protocol handler.
      Hardware::LUCL::Protocol m_proto;
      //! True if power down is in progress.
      bool m_pwr_down;
      //! Power channels (1 bit per channel).
      uint16_t m_pwr_chns;
      //! GPIO controller.
      MCP23017* m_gpios;
      //! True if system was shutdown.
      bool m_halt;
      //! ADC messages.
      IMC::Message* m_adcs[c_adcs_count];
      //! Power channels by name.
      PowerChannelMap m_pwr_chs;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_pwr_down(false),
        m_gpios(NULL),
        m_halt(false)
      {
        std::memset(m_adcs, 0, sizeof(m_adcs));

        // Define configuration parameters.
        param("Model", m_args.model)
        .defaultValue("")
        .description("A320");

        param("I2C - Device", m_args.i2c_dev)
        .defaultValue("")
        .description("I2C device");

        param("ADC Reference Voltage", m_args.adc_ref)
        .defaultValue("1.1")
        .description("ADC reference voltage");

        param("Charged Current", m_args.charged_amp)
        .defaultValue("0.1")
        .units(Units::Ampere)
        .description("Charged current");

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
          std::string option = String::str("Power Channel %u - Name", i);
          param(option, m_args.pwr_names[i]);

          option = String::str("Power Channel %u - State", i);
          param(option, m_args.pwr_states[i])
          .defaultValue("0");
        }

        param("Firmware Upgrade", m_args.flash_upgrade)
        .defaultValue("false")
        .description("Automatically upgrade firmware");

        param("Drive LCD", m_args.lcd)
        .defaultValue("false")
        .description("LCD is controlled by MCB");

        // Register consumers.
        bind<IMC::LcdControl>(this);
        bind<IMC::PowerChannelControl>(this);
        bind<IMC::QueryPowerChannelState>(this);
      }

      ~Task(void)
      {
        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          if (m_adcs[i] != NULL)
            delete m_adcs[i];
        }

        clearPowerChannels();

        if (m_gpios)
          delete m_gpios;
      }

      //! Update task parameters.
      void
      onUpdateParameters(void)
      {
        for (unsigned i = 0; i < c_adcs_count; ++i)
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

        clearPowerChannels();
        for (unsigned i = 0; i < c_pwrs_count; ++i)
        {
          if (String::startsWith(m_args.pwr_names[i], "N/C"))
            continue;

          PowerChannel* pc = new PowerChannel;
          pc->id = i;
          pc->state.name = m_args.pwr_names[i];
          pc->state.state = m_args.pwr_states[i];

          m_pwr_chs[m_args.pwr_names[i]] = pc;
        }
      }

      void
      clearPowerChannels(void)
      {
        PowerChannelMap::iterator itr = m_pwr_chs.begin();
        for (; itr != m_pwr_chs.end(); ++itr)
          delete itr->second;

        m_pwr_chs.clear();
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
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(m_args.adc_elabels[i]);
          }

          m_adcs[i]->setSourceEntity(eid);
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_proto.setI2C(m_args.i2c_dev, c_addr);
        m_proto.setName("MCB");
        m_proto.open();

        m_gpios = new MCP23017(m_args.i2c_dev, MCP23017_ADDR);
        m_pwr_chns = m_gpios->getGPIOs();
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        try
        {
          m_proto.requestName();
          waitForCommand(0);

          m_proto.requestVersion();
          waitForCommand(0);

          updateParams();
        }
        catch (std::exception& e)
        {
          err("%s", e.what());
        }

        PowerChannelMap::iterator itr = m_pwr_chs.begin();
        for (; itr != m_pwr_chs.end(); ++itr)
        {
          if (itr->second->state.state == IMC::PowerChannelState::PCS_ON)
            controlPowerChannel(itr->second, IMC::PowerChannelControl::PCC_OP_TURN_ON);
          else
            controlPowerChannel(itr->second, IMC::PowerChannelControl::PCC_OP_TURN_OFF);
        }
      }

      //! Write value to position in a given buffer.
      //! @param[in] index position index.
      //! @param[in] value value to be written.
      //! @param[out] bfr buffer.
      void
      packParam(unsigned index, double value, uint8_t* bfr)
      {
        uint16_t tmp = (uint16_t)(value);
        bfr[(index * 2)] = (uint8_t)(tmp);
        bfr[(index * 2) + 1] = (uint8_t)(tmp >> 8);
      }

      //! Update parameters.
      void
      updateParams(void)
      {
        uint8_t data[PARAMS_COUNT * 2] = {0};

        packParam(PARAMS_ADC_REF, m_args.adc_ref * 10, data);
        packParam(PARAMS_CHARGED_AMP, m_args.charged_amp * 100, data);
        packParam(PARAMS_ADC_BAT_VOL, m_args.adc_factors[0][0] * 100, data);
        packParam(PARAMS_ADC_BAT_AMP, m_args.adc_factors[1][0] * 100, data);
        packParam(PARAMS_ADC_SYS_VOL, m_args.adc_factors[2][0] * 100, data);
        packParam(PARAMS_ADC_SYS_AMP, m_args.adc_factors[3][0] * 100, data);

        m_proto.sendCommand(CMD_PARAMS, data, PARAMS_COUNT * 2);
        waitForCommand(CMD_PARAMS);
      }

      void
      controlPowerChannel(PowerChannel* channel, IMC::PowerChannelControl::OperationEnum op, double sched = -1.0)
      {
        if (channel->id == c_pwr_blight)
        {
          uint8_t state = (op == IMC::PowerChannelControl::PCC_OP_TURN_ON) ? 1 : 0;
          m_proto.sendCommand(CMD_BLIGHT, &state, 1);
          if (op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
            channel->state.state = IMC::PowerChannelState::PCS_ON;
          else
            channel->state.state = IMC::PowerChannelState::PCS_OFF;

          return;
        }

        if (op == IMC::PowerChannelControl::PCC_OP_TURN_OFF)
        {
          m_pwr_chns &= ~(1 << channel->id);

#if FIXME
          if (!((m_pwr_chns & (1 << PCH_GPS)) || (m_pwr_chns & (1 << PCH_HSDPA))))
            m_pwr_chns &= ~(1 << PCH_USB_HUB);
#endif
        }
        else if (op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
        {
          m_pwr_chns |= (1 << channel->id);

#if FIXME
          if (((m_pwr_chns & (1 << PCH_GPS)) || (m_pwr_chns & (1 << PCH_HSDPA))))
            m_pwr_chns |= (1 << PCH_USB_HUB);
#endif
        }
        else if (op == IMC::PowerChannelControl::PCC_OP_TOGGLE)
        {
          m_pwr_chns ^= (1 << channel->id);

#if FIXME
          if (((m_pwr_chns & (1 << PCH_GPS)) || (m_pwr_chns & (1 << PCH_HSDPA))))
            m_pwr_chns |= (1 << PCH_USB_HUB);
          else
            m_pwr_chns &= ~(1 << PCH_USB_HUB);
#endif
        }
        else if (op == IMC::PowerChannelControl::PCC_OP_SAVE)
        {
          uint8_t data[2] = {(uint8_t)(m_pwr_chns >> 8), (uint8_t)m_pwr_chns};
          m_proto.sendCommand(CMD_SAVE, data, sizeof(data));
        }
        else if (op == IMC::PowerChannelControl::PCC_OP_SCHED_ON)
          channel->sched_on = Clock::get() + sched;
        else if (op == IMC::PowerChannelControl::PCC_OP_SCHED_OFF)
          channel->sched_off = Clock::get() + sched;
        else if (op == IMC::PowerChannelControl::PCC_OP_SCHED_RESET)
        {
          channel->sched_on = -1;
          channel->sched_off = -1;
        }

        m_gpios->setGPIOs(m_pwr_chns);
      }

      void
      writeLCD(unsigned line, const uint8_t* data, unsigned data_len)
      {
        std::vector<uint8_t> cmd;
        cmd.push_back(line);
        cmd.insert(cmd.begin() + 1, data, data + data_len);
        m_proto.sendCommand(CMD_LCD_LINE, &cmd[0], cmd.size());
        waitForCommand(CMD_LCD_LINE);
      }

      void
      consume(const IMC::LcdControl* msg)
      {
        if (!m_args.lcd)
          return;

        if (msg->op == IMC::LcdControl::OP_WRITE0)
          writeLCD(0, (const uint8_t*)&msg->text[0], msg->text.size());
        else if (msg->op == IMC::LcdControl::OP_WRITE1)
          writeLCD(1, (const uint8_t*)&msg->text[0], msg->text.size());
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        if (m_halt)
          return;

        if (msg->name == "System")
        {
          // We're dead after this but it might take a few moments, so
          // don't mess with the i2c bus.
          m_proto.sendCommand(CMD_HALT);
          m_halt = true;
          return;
        }

        PowerChannelMap::const_iterator itr = m_pwr_chs.find(msg->name);
        if (itr == m_pwr_chs.end())
          return;

        IMC::PowerChannelControl::OperationEnum op = static_cast<IMC::PowerChannelControl::OperationEnum>(msg->op);

        controlPowerChannel(itr->second, op, msg->sched_time);
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        PowerChannelMap::iterator itr = m_pwr_chs.begin();
        for (; itr != m_pwr_chs.end(); ++itr)
          dispatchReply(*msg, itr->second->state);
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
          uint16_t unpack[] =
          {
            // Battery Voltage.
            (uint16_t)(data[0] | (data[4] & 0x3 << 0) << 8),
            // Battery Current.
            (uint16_t)(data[1] | (data[4] & 0x3 << 2) << 6),
            // System Voltage.
            (uint16_t)(data[2] | (data[4] & 0x3 << 4) << 4),
            // System Current.
            (uint16_t)(data[3] | (data[4] & 0x3 << 6) << 2),
            // +5V
            (uint16_t)(data[5] | (data[7] & 0x3 << 0) << 8),
            // +12V
            (uint16_t)(data[6] | (data[7] & 0x3 << 2) << 6),
          };

          sendMessages(unpack);

          // Check power off.
          if ((data[8] & BIT_SW_SYS_ON) == 0)
          {
            m_pwr_down = true;
            IMC::PowerOperation pop;
            pop.setDestination(getSystemId());
            pop.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
            pop.time_remain = (float)(data[8] & 0x1F);
            dispatch(pop);
          }
          else if (m_pwr_down)
          {
            m_pwr_down = false;
            IMC::PowerOperation pop;
            pop.setDestination(getSystemId());
            pop.op = IMC::PowerOperation::POP_PWR_DOWN_ABORTED;
            dispatch(pop);
          }
        }
        (void)data_size;
      }

      //! Send Message.
      //! @param[in] unpack pointer to unpacked data buffer.
      void
      sendMessages(const uint16_t* unpack)
      {
        // Dispatch ADCs
        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          if (m_adcs[i] == NULL)
            continue;

          fp32_t tmp = m_args.adc_factors[i][0] * ((unpack[i] / 1024.0) * m_args.adc_ref) + m_args.adc_factors[i][1];
          m_adcs[i]->setValueFP(tmp);
          dispatch(m_adcs[i]);
        }
      }

      //! Wait for command.
      //! @param[in] code command code.
      //! @return true if succcessful, false otherwise.
      bool
      waitForCommand(uint8_t code)
      {
        LUCL::Command cmd;
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

          case LUCL::CommandTypeName:
            onName(cmd.name.data);
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
            break;

          default:
            break;
        }

        return false;
      }

      //! Flash firmware.
      //! @param[in] file file descriptor.
      void
      flashFirmware(const std::string& file)
      {
        if (!m_args.flash_upgrade)
          return;

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        inf(DTR("updating firmware"));
        LUCL::BootLoader lucb(m_proto, true);
        lucb.flash(file);
      }

      void
      onName(const std::string& name)
      {
        if (name == "LUCB")
        {
          std::string fmw = m_proto.searchNewFirmware(m_ctx.dir_fmw);
          if (!fmw.empty())
            flashFirmware(fmw);
        }
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! On version call.
      //! @param[in] major major version number.
      //! @param[in] minor minor version number.
      //! @param[in] patch patch version number.
      void
      onVersion(unsigned major, unsigned minor, unsigned patch)
      {
        inf(DTR("firmware version %u.%u.%u"), major, minor, patch);

        std::string fmw = m_proto.searchNewFirmware(m_ctx.dir_fmw, 2, minor, patch);
        if (!fmw.empty())
          flashFirmware(fmw);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Check schedules.
      void
      checkSchedules(void)
      {
        double now = Clock::get();
        IMC::PowerChannelControl pcc;

        PowerChannelMap::iterator itr = m_pwr_chs.begin();
        for (; itr != m_pwr_chs.end(); ++itr)
        {
          PowerChannel* pc = itr->second;

          if (pc->sched_on != -1)
          {
            if (now >= pc->sched_on)
            {
              pc->sched_on = -1;
              pcc.name = pc->state.name;
              pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
              consume(&pcc);
            }
          }

          if (pc->sched_off != -1)
          {
            if (now >= pc->sched_off)
            {
              pc->sched_off = -1;
              pcc.name = pc->state.name;
              pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
              consume(&pcc);
            }
          }
        }
      }

      void
      updatePowerChannels(void)
      {
        PowerChannelMap::iterator itr = m_pwr_chs.begin();
        for (; itr != m_pwr_chs.end(); ++itr)
        {
          if (itr->second->id == c_pwr_blight)
            continue;

          if (m_pwr_chns & (1 << itr->second->id))
            itr->second->state.state = IMC::PowerChannelState::PCS_ON;
          else
            itr->second->state.state = IMC::PowerChannelState::PCS_OFF;
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          checkSchedules();

          try
          {
            if (!m_halt)
            {
              m_proto.sendCommand(CMD_STATE);
              waitForCommand(CMD_STATE);

              updatePowerChannels();
            }
          }
          catch (std::exception& e)
          {
            err("%s", e.what());
          }
        }
      }
    };
  }
}

DUNE_TASK
