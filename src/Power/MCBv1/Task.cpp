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
#include <iostream>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Power
{
  namespace MCBv1
  {
    using DUNE_NAMESPACES;

    //! Commands to the device.
    enum Commands
    {
      CMD_STATE = 0x01,
      CMD_PWR_CHNS = 0x02,
      CMD_HALT = 0x03
    };

    //! Power Channel data structure.
    struct PowerChannel
    {
      IMC::PowerChannelState state;
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

    //! Data structure for ADC devices.
    struct ADC
    {
      IMC::Message* msg;
      std::string entity;
      std::vector<double> factors;

      ADC(void):
        msg(0)
      { }
    };

    //! Maximum number of ADC derived messages.
    static const unsigned c_adcs_count = 5;

    //! %Task arguments.
    struct Arguments
    {
      //! I2C device.
      std::string i2c_dev;
      //! ADC Reference Voltage.
      double adc_ref;
      //! ADC Messages.
      std::string adc_messages[c_adcs_count];
      //! ADC entity labels.
      std::string adc_elabels[c_adcs_count];
      //! ADC conversion factors.
      std::vector<double> adc_factors[c_adcs_count];
    };

    struct Task: public Tasks::Periodic
    {
      //! Device I2C address.
      static const uint8_t c_addr = 0x10;
      //! Task arguments.
      Arguments m_args;
      //! Device protocol handler.
      Hardware::LUCL::Protocol m_proto;
      //! Power channels.
      uint8_t m_pwr_chns;
      //! List of power channels.
      std::vector<PowerChannel*> m_pcs;
      //! ADC messages.
      IMC::Message* m_adcs[c_adcs_count];
      //! True if power down is in progress.
      bool m_pwr_down;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_pwr_down(false)
      {
        std::memset(m_adcs, 0, sizeof(m_adcs));

        param("I2C - Device", m_args.i2c_dev)
        .defaultValue("")
        .description("I2C device");

        param("ADC Reference Voltage", m_args.adc_ref)
        .defaultValue("1.1")
        .description("ADC reference voltage");

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

        // Create power channels.
        createPC(0, "WHOI Micro-Modem", 1);
        createPC(1, "+12VDC P.O.E. #1", 1);
        createPC(2, "+12VDC P.O.E. #2", 1);
        createPC(3, "+12VDC P.O.E. #3", 1);
        createPC(4, "USB Hub", 1);

        // Register consumers.
        bind<IMC::PowerChannelControl>(this);
      }

      ~Task(void)
      {
        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          if (m_adcs[i] != NULL)
            delete m_adcs[i];
        }

        for (unsigned i = 0; i < m_pcs.size(); ++i)
          delete m_pcs[i];
      }

      void
      onUpdateParameters(void)
      {
        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          if (m_adcs[i] != NULL)
            delete m_adcs[i];

          m_adcs[i] = IMC::Factory::produce(m_args.adc_messages[i]);
        }
      }

      //! Create Power Channel.
      //! @param[in] id channel identifier.
      //! @param[in] label channel label.
      //! @param[in] state channel state.
      void
      createPC(uint8_t id, const std::string& label, uint8_t state)
      {
        PowerChannel* pc = new PowerChannel;
        pc->state.id = id;
        pc->state.label = label;
        pc->state.state = state;
        m_pcs.push_back(pc);
      }

      //! Dispatch power channels to bus.
      void
      dispatchPCs(void)
      {
        for (unsigned i = 0; i < m_pcs.size(); ++i)
          dispatch(m_pcs[i]->state);
      }

      //! Reserve entities.
      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < c_adcs_count; ++i)
          m_adcs[i]->setSourceEntity(reserveEntity(m_args.adc_elabels[i]));
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_proto.setI2C(m_args.i2c_dev, c_addr);
        m_proto.setName("MCB");
        m_proto.open();
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
        }
        catch (std::exception& e)
        {
          err("%s", e.what());
        }
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        if (msg->id == 5)
        {
          m_proto.sendCommand(CMD_HALT);
          return;
        }

        if (msg->id > 4)
          return;

        if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_OFF)
          m_pwr_chns &= ~(1 << msg->id);
        else if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
          m_pwr_chns |= (1 << msg->id);
        else if (msg->op == IMC::PowerChannelControl::PCC_OP_TOGGLE)
          m_pwr_chns ^= (1 << msg->id);
        else if (msg->op == IMC::PowerChannelControl::PCC_OP_SCHED_ON)
          m_pcs[msg->id]->sched_on = Clock::get() + msg->sched_time;
        else if (msg->op == IMC::PowerChannelControl::PCC_OP_SCHED_OFF)
          m_pcs[msg->id]->sched_off = Clock::get() + msg->sched_time;
        else if (msg->op == IMC::PowerChannelControl::PCC_OP_SCHED_RESET)
        {
          m_pcs[msg->id]->sched_on = -1;
          m_pcs[msg->id]->sched_off = -1;
        }

        m_proto.sendCommand(CMD_PWR_CHNS, &m_pwr_chns, 1);
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        (void)msg;
        dispatchPCs();
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
            // ADC0.
            (uint16_t)(data[0] | (data[4] & 0x3 << 0) << 8),
            // ADC1
            (uint16_t)(data[1] | (data[4] & 0x3 << 2) << 6),
            // ADC2
            (uint16_t)(data[2] | (data[4] & 0x3 << 4) << 4),
            // ADC3
            (uint16_t)(data[3] | (data[4] & 0x3 << 6) << 2),
            // ADC4
            (uint16_t)(data[5] | (data[7] & 0x3 << 0) << 8),
            // Power Lines
            (uint16_t)(data[6] | (data[7] & 0x3 << 2) << 6)
          };

          if (unpack[5] & 0x80)
          {
            m_pwr_down = true;
            IMC::PowerOperation pop;
            pop.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
            pop.time_remain = (float)data[8];
            dispatch(pop);
          }
          else if (m_pwr_down)
          {
            m_pwr_down = false;
            IMC::PowerOperation pop;
            pop.op = IMC::PowerOperation::POP_PWR_DOWN_ABORTED;
            dispatch(pop);
          }

          m_pwr_chns = unpack[5] & 0x1f;
          m_pcs[0]->state.state = (m_pwr_chns & (1 << 0)) != 0;
          m_pcs[1]->state.state = (m_pwr_chns & (1 << 1)) != 0;
          m_pcs[2]->state.state = (m_pwr_chns & (1 << 2)) != 0;
          m_pcs[3]->state.state = (m_pwr_chns & (1 << 3)) != 0;
          m_pcs[4]->state.state = (m_pwr_chns & (1 << 4)) != 0;

          dispatchPCs();

          sendMessages(unpack);
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
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        inf("%s", DTR("updating firmware"));
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
        inf(DTR("version: %u.%u.%u"), major, minor, patch);
        std::string fmw = m_proto.searchNewFirmware(m_ctx.dir_fmw, major, minor, patch);
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

        for (unsigned i = 0; i < m_pcs.size(); ++i)
        {
          if (m_pcs[i]->sched_on != -1)
          {
            if (now >= m_pcs[i]->sched_on)
            {
              m_pcs[i]->sched_on = -1;
              pcc.id = m_pcs[i]->state.id;
              pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
              dispatch(pcc);
            }
          }

          if (m_pcs[i]->sched_off != -1)
          {
            if (now >= m_pcs[i]->sched_off)
            {
              m_pcs[i]->sched_off = -1;
              pcc.id = m_pcs[i]->state.id;
              pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
              dispatch(pcc);
            }
          }
        }
      }

      void
      task(void)
      {
        checkSchedules();

        try
        {
          m_proto.sendCommand(CMD_STATE, 0, 0);
          waitForCommand(CMD_STATE);
        }
        catch (std::exception& e)
        {
          err("%s", e.what());
        }
      }
    };
  }
}

DUNE_TASK
