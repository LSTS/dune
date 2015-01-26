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
// Author: Filipe Ferreira                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <Power/PCTLv2/PowerChannels.hpp>

namespace Power
{
  //! Device driver for LUEMB.
  //!
  //! This board is able to monitor voltages and currents, is also able to control:
  //! 3x (5V Outputs)
  //! 4x (12V Outputs)
  //! 1x (48V Output)
  //!
  //! @author Filipe Ferreira
  namespace LUEMB
  {
    using DUNE_NAMESPACES;
    using Power::PCTLv2::PowerChannel;
    using Power::PCTLv2::PowerChannels;

    //! Serial port baud rate.
    static const unsigned c_baud_rate = 115200;
    //! Number of LEDs.
    static const unsigned c_led_count = 2;
    //! Amount of seconds to wait before restarting task.
    static const unsigned c_restart_delay = 1;
    //! Number of Power channels.
    static const unsigned c_pwrs_count = 8;
    //! Number of ADC channels.
    static const unsigned c_adcs_count = 8;

    //! Packet identifiers.
    enum PacketIds
    {
      //! State.
      PKT_ID_STATE          = 1,
      PKT_ID_SET_POWER      = 2,
      PKT_ID_SET_LED        = 3
    };

    //! LED channel.
    struct LED
    {
      //! LED name.
      std::string name;
      //! LED id.
      unsigned id;
      //! LED brightness.
      IMC::LedBrightness brightness;
    };

    //! Task arguments.
    struct Arguments
    {
      //! LED names.
      std::vector<std::string> led_names;
      //! Serial port device.
      std::string uart_dev;
      //! ADC Messages.
      std::string adc_messages[c_adcs_count];
      //! ADC entity labels.
      std::string adc_elabels[c_adcs_count];
      //! ADC conversion factors.
      std::vector<double> adc_factors[c_adcs_count];
      //! Power channels names.
      std::string pwr_names[c_pwrs_count];
      //! Power channels states.
      unsigned pwr_states[c_pwrs_count];
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Map of LEDs by name.
      std::map<std::string, LED*> m_led_by_name;
      //! Map of LEDs by id.
      std::map<unsigned, LED*> m_led_by_id;
      //! ADC messages.
      IMC::Message* m_adcs[c_adcs_count];
      //! Power channels.
      PowerChannels m_channels;
      //! UART.
      SerialPort* m_uart;
      //! Control Interface.
      UCTK::Interface* m_ctl;
      //! Current.
      IMC::Current m_current[4];
      //! Voltage.
      IMC::Voltage m_voltage[4];
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_ctl(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("LED - Names", m_args.led_names)
        .defaultValue("")
        .size(c_led_count)
        .description("List of LED names");

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

        bind<IMC::QueryPowerChannelState>(this);
        bind<IMC::QueryLedBrightness>(this);
        bind<IMC::PowerChannelControl>(this);
        bind<IMC::SetLedBrightness>(this);

        std::memset(m_adcs, 0, sizeof(m_adcs));
      }

      ~Task(void)
      {
        onResourceRelease();
        clearLEDs();
        clearADCs();
      }

      void
      clearADCs()
      {
        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          if (m_adcs[i] != NULL)
            Memory::clear(m_adcs[i]);
        }
      }

      //! Update internal state with new parameter values.
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

        m_channels.clear();
        for (unsigned i = 0; i < c_pwrs_count; ++i)
        {
          PowerChannel* channel = new PowerChannel;
          channel->id = i;
          channel->state.name = m_args.pwr_names[i];
          if (m_args.pwr_states[i] == 1)
            channel->state.state = IMC::PowerChannelState::PCS_ON;
          else
            channel->state.state = IMC::PowerChannelState::PCS_OFF;
          m_channels.add(i, channel);
        }

        clearLEDs();
        for (unsigned i = 0; i < m_args.led_names.size(); ++i)
        {
          LED* led = new LED;
          led->id = i;
          led->name = m_args.led_names[i];
          led->brightness.name = led->name;
          led->brightness.value = 0;
          m_led_by_name[led->name] = led;
          m_led_by_id[led->id] = led;
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
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, c_baud_rate);
          m_ctl = new UCTK::Interface(m_uart);
          UCTK::FirmwareInfo info = m_ctl->getFirmwareInfo();
          if (info.isDevelopment())
            war(DTR("device is using unstable firmware"));
          else
            inf(DTR("firmware version %u.%u.%u"), info.major,
                info.minor, info.patch);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), c_restart_delay);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        turnOffLEDs();

        std::map<unsigned, PowerChannel*>::const_iterator itr = m_channels.begin();
        for ( ; itr != m_channels.end(); ++itr)
          setPowerChannel(itr->second->id, itr->second->state.state);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_ctl != NULL)
        {
          turnOffLEDs();
          delete m_ctl;
          m_ctl = NULL;
        }

        Memory::clear(m_uart);
      }

      void
      turnOffLEDs(void)
      {
        for (uint8_t i = 0; i < c_led_count; ++i)
          setBrightness(i, 0);
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        std::map<std::string, PowerChannel*>::const_iterator itr = m_channels.find_by_name(msg->name);
        if (itr == m_channels.end_by_name())
          return;

        uint8_t channel = itr->second->id;
        uint8_t value = 0;
        if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
          value = 1;
        else if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_OFF)
          value = 0;

        spew("setting power channel %s to %u", msg->name.c_str(), value);

        setPowerChannel(channel, value);
      }

      void
      consume(const IMC::SetLedBrightness* msg)
      {
        std::map<std::string, LED*>::iterator itr = m_led_by_name.find(msg->name);
        if (itr == m_led_by_name.end())
          return;

        setBrightness(itr->second->id, msg->value);
      }

      void
      consume(const IMC::QueryLedBrightness* msg)
      {
        std::map<std::string, LED*>::iterator itr = m_led_by_name.find(msg->name);
        if (itr == m_led_by_name.end())
          return;

        dispatchReply(*msg, itr->second->brightness);
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        (void)msg;
        dispatchPowerChannelStates();
      }

      void
      clearLEDs(void)
      {
        std::map<std::string, LED*>::iterator itr = m_led_by_name.begin();
        for (; itr != m_led_by_name.end(); ++itr)
          delete itr->second;

        m_led_by_name.clear();
        m_led_by_id.clear();
      }

      bool
      setBrightness(uint8_t channel, uint8_t value)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_SET_LED);
        frame.setPayloadSize(2);
        frame.set(channel, 0);
        frame.set(value, 1);

        return m_ctl->sendFrame(frame);
      }

      bool
      setPowerChannel(uint8_t channel, uint8_t value)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_SET_POWER);
        frame.setPayloadSize(2);
        frame.set(channel, 0);
        frame.set(value, 1);

        return m_ctl->sendFrame(frame);
      }

      bool
      getMonitors(void)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_STATE);

        if (!m_ctl->sendFrame(frame))
        {
          err("failed to send frame");
          return false;
        }

        if (frame.getPayloadSize() != 18)
        {
          err("payload is %u", frame.getPayloadSize());
          return false;
        }

        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          uint16_t value = 0;
          frame.get(value, i * 2);
          if (m_adcs[i] != NULL)
          {
            float tmp = m_args.adc_factors[i][0] * (value / 4096.0) + m_args.adc_factors[i][1];
            m_adcs[i]->setValueFP(tmp);
            dispatch(m_adcs[i]);
          }
        }

        // Power channel states.
        uint8_t power_state = 0;
        frame.get(power_state, 16);
        std::map<unsigned, PowerChannel*>::const_iterator itr = m_channels.begin();
        for ( ; itr != m_channels.end(); ++itr)
        {
          unsigned id = itr->second->id;
          itr->second->state.state = (power_state & (1 << id)) ? IMC::PowerChannelState::PCS_ON : IMC::PowerChannelState::PCS_OFF;
        }

        // LED states.
        uint8_t led_states = 0;
        frame.get(led_states, 24);
        for (unsigned i = 0; i < c_led_count; ++i)
          m_led_by_id[i]->brightness.value = (led_states & (1 << i)) != 0;

        return true;
      }

      void
      dispatchPowerChannelStates(void)
      {
        std::map<unsigned, PowerChannel*>::const_iterator itr = m_channels.begin();

        for (; itr != m_channels.end(); ++itr)
        {
          if (itr->second->state.name.substr(0, 3) != "N/C")
          {
            dispatch(itr->second->state);
          }
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          getMonitors();
        }
      }
    };
  }
}

DUNE_TASK
