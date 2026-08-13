//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "Definitions.hpp"
#include "OSLO.hpp"

namespace Actuators
{
  //! @author Bernardo Gabriel
  namespace WASABi
  {
    using DUNE_NAMESPACES;

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      WASABiArguments m_args;
      //! Serial port handle.
      SerialPort* m_handle;
      //! Input buffer.
      char m_buffer[128];
      //! Input string.
      std::string m_in;
      //! No reply counter.
      uint8_t m_no_rpl_cnt;
      //! Power Channels <label, power channel>.
      std::map<std::string, PowerChannel> m_pwr_chs;
      //! Synced with device.
      bool m_synced;
      //! Version info.
      IMC::VersionInfo m_vi;
      //! Input data timeout.
      Time::Counter<double> m_inp_tmt;
      //! Heartbeat timer.
      Time::Counter<double> m_hb_timer;
      //! Water Flow entities.
      Entities::BasicEntity* m_wf_entities[c_num_wf_sensors];
      //! Water Flow messages.
      IMC::WaterFlow m_wf_messages[c_num_wf_sensors];
      //! GPIO States <label, state>.
      std::map<std::string, IMC::GpioState> m_gpio_states;
      //! OSLO.
      OSLO* m_oslo;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_handle(NULL),
        m_no_rpl_cnt(0),
        m_synced(false),
        m_hb_timer(c_hb_period),
        m_oslo(nullptr)
      {
        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"uart://DEVICE:BAUD\"");

        param("Output Data Rate", m_args.odr)
        .defaultValue("1")
        .minimumValue("0")
        .maximumValue("255")
        .units(Units::Hertz)
        .description("Rate of data output from device. "
                     "If 0, no data will be outputed.");

        for (uint8_t i = 0; i < c_num_pwr_chs; i++)
        {
          const std::string label = String::str("Power Channel %u - Name", i);
          param(label, m_args.pwr_ch_names[i])
          .editable(false)
          .defaultValue("")
          .description(String::str("Name of power channel %u.", i));

          const std::string state = String::str("Power Channel %u - State", i);
          param(state, m_args.pwr_ch_states[i])
          .defaultValue("false")
          .description(String::str("State of power channel %u.", i));
        }

        param("Water Level 1 - GPIO Label", m_args.wl_gpios_labels[0])
        .editable(false)
        .defaultValue("")
        .description("Label of the water level 1 gpio.");

        param("Water Level 2 - GPIO Label", m_args.wl_gpios_labels[1])
        .editable(false)
        .defaultValue("")
        .description("Label of the water level 2 gpio.");

        param("Water Flow 1 - Entity Label", m_args.wf_elabels[0])
        .editable(false)
        .defaultValue("")
        .description("Label of the water flow entity.");

        param("Water Flow 2 - Entity Label", m_args.wf_elabels[1])
        .editable(false)
        .defaultValue("")
        .description("Label of the water flow entity.");

        param("Water Level Sensors Warnings", m_args.wl_malfunction_warning)
        .defaultValue("true")
        .description("Indicates if water level sensors malfunction warning is enabled.");

        param("OSLO - Entity Label", m_args.oslo_elabel)
        .editable(false)
        .defaultValue("OSLO")
        .description("Label of the OSLO entity.");

        m_vi.op = VersionInfo::OP_REPLY;

        bind<IMC::VersionInfo>(this);
        bind<IMC::PowerChannelControl>(this);
        bind<IMC::QueryPowerChannelState>(this);
        bind<IMC::GpioStateGet>(this);
      }

      bool
      onWriteParamsXML(std::ostream& os) const override
      {
        if (m_oslo != nullptr)
          m_oslo->writeParamsXML(os);

        return false;
      }

      void
      onUpdateParameters(void) override
      {
        if (!m_synced)
          return;

        if (paramChanged(m_args.odr))
          setDataRate(m_args.odr);

        for (uint8_t i = 0; i < c_num_pwr_chs; i++)
        {
          if (paramChanged(m_args.pwr_ch_states[i]))
            setPowerChannel(m_args.pwr_ch_names[i], m_args.pwr_ch_states[i], false);
        }
      }

      void
      onResourceRelease(void) override
      {
        Memory::clear(m_handle);
        m_pwr_chs.clear();
        m_synced = false;
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onEntityReservation(void) override
      {
        for (uint8_t i = 0; i < c_num_wf_sensors; i++)
        {
          m_wf_entities[i] = m_args.wf_elabels[i].empty() ? nullptr : reserveEntity<Entities::BasicEntity>(m_args.wf_elabels[i]);
        }

        m_oslo = reserveEntity<OSLO>(m_args.oslo_elabel);
        if (m_oslo != nullptr)
        {
          m_oslo->loadConfig();
          m_oslo->setSendCommand([this](const char* cmd_type,
                                        const char cmd_reply,
                                        const bool persistent,
                                        const std::vector<float>& args)
                                 {
                                   sendCommand(cmd_type, cmd_reply, persistent, args);
                                 });
        }
      }

      void
      onResourceAcquisition(void) override
      {
        Memory::clear(m_handle);

        char uart[128] = {0};
        unsigned baud = 0;

        trace("attempting URI: %s", m_args.io_dev.c_str());

        if (std::sscanf(m_args.io_dev.c_str(), "uart://%[^:]:%u", uart, &baud) != 2)
          throw RestartNeeded("invalid UART URI", 5);

        try
        {
          m_handle = new SerialPort(uart, baud);
          m_handle->setCanonicalInput(true);
          m_handle->flush();
        }
        catch (const std::exception& e)
        {
          throw RestartNeeded(String::str("unable to create handle: %s", e.what()), 5);
        }

        m_pwr_chs.clear();
        for (uint8_t i = 0; i < c_num_pwr_chs; i++)
        {
          if (m_args.pwr_ch_names[i].empty())
            continue;

          auto& pwr_ch = m_pwr_chs[m_args.pwr_ch_names[i]];
          pwr_ch.id = i;
          pwr_ch.pcs.name = m_args.pwr_ch_names[i];
          pwr_ch.init_state = m_args.pwr_ch_states[i];
        }

        m_gpio_states.clear();
        for (uint8_t i = 0; i < c_num_wl_sensors; i++)
        {
          if (m_args.wl_gpios_labels[i].empty())
            continue;

          m_gpio_states[m_args.wl_gpios_labels[i]].name = m_args.wl_gpios_labels[i];
        }

        m_synced = false;
      }

      void
      onResourceInitialization(void) override
      {
        if (m_handle == NULL)
          throw RestartNeeded("handle is null", 5);

        m_no_rpl_cnt = 0;

        m_synced = false;

        if (!synchronize())
          throw RestartNeeded("unable to synchronize with device", 5);

        m_synced = true;

        if (!setDataRate(m_args.odr, true))
          throw RestartNeeded("unable to set output data rate", 5);

        for (auto& pwr_ch: m_pwr_chs)
        {
          if (!setPowerChannel(pwr_ch.first, m_args.pwr_ch_states[pwr_ch.second.id], false))
            throw RestartNeeded("unable to set power channel initial state", 5);
          
          pwr_ch.second.init_state = m_args.pwr_ch_states[pwr_ch.second.id];
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        if (!m_synced)
          return;

        // if (msg->getDestination() != getSystemId())
        //   return;

        if (m_pwr_chs.find(msg->name) == m_pwr_chs.end())
          return;

        switch (msg->op)
        {
        case PowerChannelControl::PCC_OP_TURN_ON:
          setPowerChannel(msg->name, true);
          break;

        case PowerChannelControl::PCC_OP_TURN_OFF:
          setPowerChannel(msg->name, false);
          break;

        case PowerChannelControl::PCC_OP_TOGGLE:
          setPowerChannel(msg->name, m_pwr_chs[msg->name].pcs.state != PowerChannelState::PCS_ON);
          break;

        case PowerChannelControl::PCC_OP_RESTART:
          setPowerChannel(msg->name, m_pwr_chs[msg->name].init_state);
          break;
        
        default:
          break;
        }
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        if (!m_synced)
          return;

        // if (msg->getDestination() != getSystemId())
        //   return;

        for (auto& pwr_ch: m_pwr_chs)
          dispatchReply(*msg, pwr_ch.second.pcs);
      }

      void
      consume(const IMC::VersionInfo* msg)
      {
        if (!m_synced)
          return;

        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (msg->op != VersionInfo::OP_QUERY)
          return;

        dispatchReply(*msg, m_vi);
      }

      void
      consume(const IMC::GpioStateGet* msg)
      {
        if (!m_synced)
          return;

        // if (msg->getDestination() != getSystemId())
        //   return;

        auto gpio = m_gpio_states.find(msg->name);
        if (gpio == m_gpio_states.end())
          return;

        dispatchReply(*msg, gpio->second);
      }

      void
      processInput(void)
      {
        if (m_in.empty())
          return;

        try
        {
          NMEAReader reader(m_in);
          interpretInput(reader);
        }
        catch(const DUNE::Parsers::Error& e)
        {
          war("error parsing input : %s", e.what());
        }

        m_in.clear();
      }

      void
      interpretInput(NMEAReader& reader)
      {
        const char* code = reader.code();

        if (code == nullptr)
          return;

        if (strcmp(code, c_cmd_data) == 0)
          interpretData(reader);
        else if (strcmp(code, c_cmd_sync) == 0)
          interpretSynchronize(reader);
        else if (strcmp(code, c_cmd_ack) == 0)
          debug("acknowledge received");
        else if (strcmp(code, c_cmd_nack) == 0)
          debug("negative acknowledge received");
      }

      void
      interpretData(NMEAReader& reader)
      {
        //! TODO: add timestamp to IMC::Messages.

        float waterlevel;
        for (size_t i = 0; i < c_num_wl_sensors; i++)
        {
          reader >> waterlevel;
          if (m_args.wl_gpios_labels[i].empty())
            continue;

          if (waterlevel > c_max_wl_low_voltage && waterlevel < c_min_wl_high_voltage)
          {
            if (m_args.wl_malfunction_warning)
              war("check connection of water level %zu sensor : voltage is %.3f V", i + 1, waterlevel);

            continue;
          }

          auto& gpio = m_gpio_states[m_args.wl_gpios_labels[i]];
          gpio.value = (waterlevel > c_min_wl_high_voltage) ? 1 : 0;
          dispatch(gpio);
          trace("water level %zu: %.3f V", i + 1, waterlevel);
        }

        float waterflow;
        for (size_t i = 0; i < c_num_wf_sensors; i++)
        {
          reader >> waterflow;
          if (m_wf_entities[i] != nullptr)
          {
            m_wf_messages[i].value = waterflow * c_lmin_to_m3s;
            m_wf_entities[i]->dispatch(m_wf_messages[i]);
            trace("water flow %zu: %f m*m*m/s", i + 1, waterflow);
          }
        }

        if (m_oslo)
          m_oslo->endpoints(reader);

        m_inp_tmt.reset();
      }

      void
      interpretSynchronize(NMEAReader& reader)
      {
        unsigned major, minor, patch;
        reader >> major >> minor >> patch;
        m_vi.version = String::str("%u.%u.%u", major, minor, patch);
        dispatch(m_vi);
        trace("firmware version: %s", m_vi.version.c_str());
        m_synced = true;
      }

      bool
      synchronize(void)
      {
        try
        {
          debug("trying to sync with device : setting max expected heartbeat timeout : %u seconds", c_hb_max_tmt);
          sendCommand(c_cmd_sync, c_cmd_sync[0], true, std::vector<float>{static_cast<float>(c_hb_max_tmt)});
          inf("synced with device : set max expected heartbeat timeout : %u seconds", c_hb_max_tmt);
          return true;
        }
        catch(const std::exception& e)
        {
          err("failed synchronization : %s", e.what());
          return false;
        }
      }
      
      void
      heartbeat(void)
      {
        spew("heartbeat");
        sendCommand(c_cmd_hb);
      }

      bool
      setDataRate(const uint8_t rate, const bool persistent = false)
      {
        try
        {
          debug("trying to set data rate to %u Hz", rate);
          sendCommand(c_cmd_data, c_cmd_ack[0], persistent, std::vector<float>{static_cast<float>(rate)});
          debug("data rate set to %u Hz", rate);

          if (rate > 0)
            m_inp_tmt.setTop(std::max(2.0 / rate, c_default_data_tmt));

          return true;
        }
        catch(const std::exception& e)
        {
          err("failed to set data rate : %s", e.what());
          return false;
        }
      }

      bool
      setPowerChannel(const std::string& label, const bool state, const bool update_param = true)
      {
        try
        {
          auto& pwr_ch = m_pwr_chs.at(label);
          debug("trying to turn %s power channel \"%s\"", state ? "on" : "off", label.c_str());
          sendCommand(c_cmd_power_ctl, c_cmd_ack[0], true, std::vector<float>{static_cast<float>(pwr_ch.id), static_cast<float>(state)});
          pwr_ch.pcs.state = state;
          dispatch(m_pwr_chs[label].pcs);
          spew("power channel \"%s\" is %s", label.c_str(), state ? "on" : "off");
          if (update_param)
            applyEntityParameter(&m_args.pwr_ch_states[pwr_ch.id], state);
          return true;
        }
        catch(const std::exception& e)
        {
          err("failed to set power channel : %s", e.what());
          return false;
        }
      }

      void
      sendCommand(const char* cmd_type,
                  const char cmd_reply = '\0',
                  const bool persistent = false,
                  const std::vector<float>& args = {})
      {
        if (m_handle == NULL)
          throw RestartNeeded("device handle is null", 5);

        do
        {
          NMEAWriter cmd(cmd_type);
          for (const auto& arg: args)
            cmd << uncastLexical(arg);
          m_handle->writeString(cmd.sentence().c_str());
          m_hb_timer.reset();

          if (cmd_reply == '\0')
            return;
        }
        while (!stopping() && !waitForCommand(cmd_reply) && persistent);
      }

      void
      readInput(void)
      {
        m_in.clear();

        size_t rv = m_handle->readString(m_buffer, sizeof(m_buffer));
        if (rv > 0)
        {
          m_in = m_buffer;
          spew("received: %s", sanitize(m_in).c_str());
        }
      }

      bool
      waitForCommand(char cmd_id, const uint8_t timeout = c_cmd_timeout)
      {
        if (m_handle == NULL)
          throw RestartNeeded("device handle is null", 5);

        Counter<unsigned> timer(timeout);

        do
        {
          if (Poll::poll(*m_handle, timer.getRemaining()))
          {
            readInput();

            if (m_in.at(1) == cmd_id)
            {
              m_no_rpl_cnt = 0;
              m_in.clear();
              return true;
            }
          }

          if (timer.overflow())
          {
            m_no_rpl_cnt++;
            if (m_no_rpl_cnt >= c_max_no_rpl_cnt)
            {
              m_synced = false;
              throw std::runtime_error("reached maximum no reply count");
            }
            else
              war("no reply from device (%u/%u)", m_no_rpl_cnt, c_max_no_rpl_cnt);

            return false;
          }
        }
        while (!stopping());

        return false;
      }

      void
      onMain(void) override
      {
        while (!stopping())
        {
          if (m_hb_timer.overflow())
            heartbeat();

          if (Poll::poll(*m_handle, c_cmd_poll_tmt))
          {
            readInput();
            processInput();
          }

          consumeMessages();

          if (m_inp_tmt.overflow() && m_args.odr > 0)
            throw RestartNeeded(String::str("no valid data for the last %.2f seconds", m_inp_tmt.getElapsed()), 5);
        }
      }
    };
  }
}

DUNE_TASK
