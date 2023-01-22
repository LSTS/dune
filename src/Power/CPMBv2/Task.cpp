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
// Author: Maria Costa                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <Power/PCTLv2/PowerChannels.hpp>

namespace Power
{
  namespace CPMBv2
  {
    //! Device driver for CPMBv2 (Copter Power Management Board v2.1.0).
    //!
    //! This board is able to monitor voltages and currents measurements.
    //! It's also capable of controlling the following I/O's:
    //! 2x (5V Outputs)
    //! 3x (12V Outputs)
    //! 2x (24V output)
    //! 2x (Batteries Outputs)
    //!
    //! @author Maria Costa

    using DUNE_NAMESPACES;
    using ::Power::PCTLv2::PowerChannel;
    using ::Power::PCTLv2::PowerChannels;

    //! Serial port baud rate.
    static const unsigned c_baud_rate = 115200;
    //! Amount of seconds to wait before restarting task.
    static const unsigned c_restart_delay = 1;
    //! Number of Power channels.
    static const unsigned c_pwrs_count = 9;
    //! Number of ADC channels.
    static const unsigned c_adcs_count = 5;

    //! Packet identifiers.
    enum PacketIds
    {
      //! State.
      PKT_ID_STATE     = 1,
      PKT_ID_SET_POWER = 2
    };

    //! Task arguments.
    struct Arguments
    {
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
      //! ADC nominal fixed offset (atxmega32a4u).
      float adc_vdelta;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! ADC messages.
      IMC::Message* m_adcs[c_adcs_count];
      //! Power channels.
      PowerChannels m_channels;
      //! UART.
      SerialPort* m_uart;
      //! Control Interface.
      UCTK::Interface* m_ctl;
      //! Current.
      IMC::Current m_current[c_adcs_count/2-1];
      //! Voltage.
      IMC::Voltage m_voltage[c_adcs_count/2];
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
        .description("Serial port device used to communicate with the board.");

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

        param("ADC VDelta Offset", m_args.adc_vdelta)
        .defaultValue("0.05")
        .description("ADC nominal fixed offset (atxmega32a4u).");


        // Setup handlers for IMC messages.
        bind<IMC::QueryPowerChannelState>(this);
        bind<IMC::PowerChannelControl>(this);

        // ADC messages initialization.
        std::memset(m_adcs, 0, sizeof(m_adcs));
      }

      ~Task(void)
      {
        onResourceRelease();
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
        // Produces ADC messages.
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
        // Updates power channels state.
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
      }

      //! Reserve entity identifiers.
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
            war(DTR("Device is using unstable firmware!"));
          else
            inf(DTR("Firmware version %u.%u.%u"), info.major,
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
          delete m_ctl;
          m_ctl = NULL;
        }

        Memory::clear(m_uart);
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        // If PCC message received doesn't match any of the power channel names defined in m_channels, return.
        std::map<std::string, PowerChannel*>::const_iterator itr = m_channels.find_by_name(msg->name);
        if (itr == m_channels.end_by_name())
          return;

        // Sets power channel as specified in received PCC message.
        uint8_t channel = itr->second->id;
        uint8_t value = 0;

        if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
          value = 1;
        else if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_OFF)
          value = 0;

        debug("Setting power channel %s to %u.", msg->name.c_str(), value);
        setPowerChannel(channel, value);
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        (void)msg;
        dispatchPowerChannelStates();
      }

      //! Sends command to board through serial port.
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

      //! Dispatches power channel states to IMC bus.
      void
      dispatchPowerChannelStates(void)
      {
        std::map<unsigned, PowerChannel*>::const_iterator itr = m_channels.begin();

        for (; itr != m_channels.end(); ++itr)
        {
          dispatch(itr->second->state);
        }
      }

      bool
      getMonitors(void)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_STATE);

        if (!m_ctl->sendFrame(frame))
          throw std::runtime_error(DTR("Failed to send frame to CPMB_v2. Check connection!"));

        if (frame.getPayloadSize() != (c_adcs_count*2+2))
          return false;

        // Converts measurements read (12-bit ADC) and dispatches them to IMC bus.
        for (unsigned i = 0; i < c_adcs_count; ++i)
        {
          uint16_t value = 0;
          frame.get(value, i*2);

          if (m_adcs[i] != NULL)
          {
            float tmp = m_args.adc_factors[i][0] * ((value / 4096.0) - m_args.adc_vdelta) + m_args.adc_factors[i][1];
            m_adcs[i]->setValueFP(tmp);
            dispatch(m_adcs[i]);
          }
        }

        // Reads power channel states.
        uint16_t power_state = 0;
        frame.get(power_state, c_adcs_count*2);
        std::map<unsigned, PowerChannel*>::const_iterator itr = m_channels.begin();
        for ( ; itr != m_channels.end(); ++itr)
        {
          unsigned id = itr->second->id;
          itr->second->state.state = (power_state & (1 << id)) ? IMC::PowerChannelState::PCS_ON : IMC::PowerChannelState::PCS_OFF;
        }

        return true;
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
