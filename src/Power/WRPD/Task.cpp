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

namespace Power
{
  //! WRPD is responsible to interact with
  //! the LSTS's Waverider power
  //! controller device.
  //!
  //! @author Bernardo Gabriel
  namespace WRPD
  {
    using DUNE_NAMESPACES;

    //! Default command timeout (seconds).
    static constexpr uint8_t c_cmd_timeout = 2;
    //! Max no reply count before reporting error.
    static constexpr uint8_t c_max_no_rpl_cnt = 5;
    //! Hearbeat period (seconds).
    static constexpr uint8_t c_hb_period = 5;
    //! Data command id.
    static constexpr char c_cmd_data = 'D';
    //! Control power channel command id.
    static constexpr char c_cmd_power_ctl = 'P';
    //! Acknowledge command id.
    static constexpr char c_cmd_ack = 'A';
    //! Not acknowledge command id.
    static constexpr char c_cmd_nack = 'N';
    //! Synchronize command id.
    static constexpr char c_cmd_sync = 'S';
    //! Shutdown command id.
    static constexpr char c_cmd_shdn = 'X';
    //! Heartbeat command id.
    static constexpr char c_cmd_hb = 'H';
    //! 12V power channel label.
    static constexpr const char* c_pwr_ch_12v_label = "+12 V";
    //! 5V power channel label.
    static constexpr const char* c_pwr_ch_5v_label = "+5 V";
    //! 12V power channel id.
    static constexpr uint8_t c_pwr_ch_12v_id = 0;
    //! 5V power channel id.
    static constexpr uint8_t c_pwr_ch_5v_id = 1;

    //! Task arguments.
    struct Arguments
    {
      //! IO port device.
      std::string io_dev;
      //! ESC data entity label.
      std::string esc_elabel;
      //! +12V channel data entity label.
      std::string channel_12v_elabel;
      //! +5V channel data entity label.
      std::string channel_5v_elabel;
      //! 12V power channel state.
      bool pwr_ch_12v_state;
      //! 5V power channel state.
      bool pwr_ch_5v_state;
      //! Output data rate.
      uint8_t odr;
    };

    struct PowerChannel
    {
      //! Power channel id.
      uint8_t id;
      //! Power channel state.
      IMC::PowerChannelState pcs;
      //! Initial state.
      bool init_state;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Device handle.
      Hardware::SerialPort* m_handle;
      //! Input buffer.
      char m_buffer[128];
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
      //! Shutdown was requested.
      bool m_shdn_req;
      //! Heartbeat timer.
      Time::Counter<double> m_hb_timer;
      //! ESC Voltage.
      IMC::Voltage m_esc_voltage;
      //! ESC Current.
      IMC::Current m_esc_current;
      //! +5V Channel Voltage.
      IMC::Voltage m_5v_voltage;
      //! +5V Channel Current.
      IMC::Current m_5v_current;
      //! +12V Channel Voltage.
      IMC::Voltage m_12v_voltage;
      //! +12V Channel Current.
      IMC::Current m_12v_current;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_handle(NULL),
        m_no_rpl_cnt(0),
        m_synced(false),
        m_shdn_req(false),
        m_hb_timer(c_hb_period)
      {
        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"uart://DEVICE:BAUD\"");

        param("ESC Data - Entity Label", m_args.esc_elabel)
        .editable("false")
        .defaultValue("ESC")
        .description("Entity Label for ESC data.");

        param("12V Channel Data - Entity Label", m_args.channel_12v_elabel)
        .editable("false")
        .defaultValue("12V Channel")
        .description("Entity Label for 12V Channel data.");

        param("5V Channel Data - Entity Label", m_args.channel_5v_elabel)
        .editable("false")
        .defaultValue("5V Channel")
        .description("Entity Label for 5V Channel data.");

        param("Power Channel 12V - State", m_args.pwr_ch_12v_state)
        .defaultValue("false")
        .description("State of 12V power channel.");

        param("Power Channel 5V - State", m_args.pwr_ch_5v_state)
        .defaultValue("false")
        .description("State of 5V power channel.");

        param("Output Data Rate", m_args.odr)
        .defaultValue("1")
        .minimumValue("0")
        .maximumValue("255")
        .units(Units::Hertz)
        .description("Rate of data output from device. "
                     "If 0, no data will be outputed.");

        m_vi.op = VersionInfo::OP_REPLY;

        bind<IMC::VersionInfo>(this);
        bind<IMC::PowerChannelControl>(this);
        bind<IMC::QueryPowerChannelState>(this);
      }

      void
      onUpdateParameters(void) override
      {
        if (!m_synced)
          return;

        if (paramChanged(m_args.odr))
          setDataRate(m_args.odr);

        if (paramChanged(m_args.pwr_ch_12v_state))
          setPowerChannel(c_pwr_ch_12v_label, m_args.pwr_ch_12v_state);

        if (paramChanged(m_args.pwr_ch_5v_state))
          setPowerChannel(c_pwr_ch_5v_label, m_args.pwr_ch_5v_state);
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
        auto esc_eid = reserveEntity(m_args.esc_elabel);
        m_esc_voltage.setSource(getSystemId());
        m_esc_voltage.setSourceEntity(esc_eid);
        m_esc_current.setSource(getSystemId());
        m_esc_current.setSourceEntity(esc_eid);
        auto channel_12v_eid = reserveEntity(m_args.channel_12v_elabel);
        m_12v_voltage.setSource(getSystemId());
        m_12v_voltage.setSourceEntity(channel_12v_eid);
        m_12v_current.setSource(getSystemId());
        m_12v_current.setSourceEntity(channel_12v_eid);
        auto channel_5v_eid = reserveEntity(m_args.channel_5v_elabel);
        m_5v_voltage.setSource(getSystemId());
        m_5v_voltage.setSourceEntity(channel_5v_eid);
        m_5v_current.setSource(getSystemId());
        m_5v_current.setSourceEntity(channel_5v_eid);
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

        m_handle = new Hardware::SerialPort(uart, baud);

        m_pwr_chs.clear();
        auto& pwr_ch_12v = m_pwr_chs[c_pwr_ch_12v_label];
        pwr_ch_12v.id = c_pwr_ch_12v_id;
        pwr_ch_12v.pcs.name = c_pwr_ch_12v_label;
        pwr_ch_12v.init_state = false;
        auto& pwr_ch_5v = m_pwr_chs[c_pwr_ch_5v_label];
        pwr_ch_5v.id = c_pwr_ch_5v_id;
        pwr_ch_5v.pcs.name = c_pwr_ch_5v_label;
        pwr_ch_5v.init_state = false;

        m_synced = false;
      }

      void
      onResourceInitialization(void) override
      {
        if (m_handle == NULL)
          throw RestartNeeded("device handle is null", 5);

        m_no_rpl_cnt = 0;
        m_handle->setCanonicalInput(true);
        m_handle->flush();

        m_shdn_req = false;

        m_synced = false;

        if (!synchronize())
          throw RestartNeeded("unable to synchronize with device", 5);

        if (m_shdn_req)
          return;

        m_synced = true;

        if (!setDataRate(m_args.odr, true))
          throw RestartNeeded("unable to set output data rate", 5);

        if (!setPowerChannel(c_pwr_ch_12v_label, m_args.pwr_ch_12v_state, true))
          throw RestartNeeded("unable to set 12V power channel initial state", 5);

        m_pwr_chs[c_pwr_ch_12v_label].init_state = m_args.pwr_ch_12v_state;

        if (!setPowerChannel(c_pwr_ch_5v_label, m_args.pwr_ch_5v_state, true))
          throw RestartNeeded("unable to set 5V power channel initial state", 5);

        m_pwr_chs[c_pwr_ch_5v_label].init_state = m_args.pwr_ch_5v_state;
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

        dispatchReply(*msg, m_vi);
      }

      char
      processInput(const std::string input)
      {
        char res = '\0';
        try
        {
          NMEAReader reader(input);
          res = interpretInput(reader);
        }
        catch(const DUNE::Parsers::Error& e)
        {
          war("error parsing input : %s", e.what());
        }
        
        return res;
      }

      char
      interpretInput(NMEAReader& reader)
      {
        const auto code = reader.code();
        if (strlen(code) != 1)
          return '\0';

        const char cmd_id = code[0];
        switch (cmd_id)
        {
        case c_cmd_data:
          interpretData(reader);
          break;

        case c_cmd_ack:
        case c_cmd_nack:
          break;

        case c_cmd_sync:
          interpretSynchronize(reader);
          break;

        case c_cmd_shdn:
        {
          inf("shutdown has been requested");
          IMC::PowerOperation pop;
          pop.setDestination(getSystemId());
          pop.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
          dispatch(pop);
          m_shdn_req = true;
          break;
        }

        default:
          return '\0';
        }

        return cmd_id;
      }

      void
      interpretData(NMEAReader& reader)
      {
        float voltage[3] = {0};
        float current[3] = {0};
        reader >> voltage[0] >> current[0] >> voltage[1] >> current[1] >> voltage[2] >> current[2];
        m_esc_voltage.value = voltage[0];
        m_esc_current.value = current[0];
        m_12v_voltage.value = voltage[1];
        m_12v_current.value = current[1];
        m_5v_voltage.value = voltage[2];
        m_5v_current.value = current[2];
        //! TODO: add timestamp.
        dispatch(m_esc_voltage, DF_KEEP_SRC_EID);
        dispatch(m_esc_current, DF_KEEP_SRC_EID);
        dispatch(m_12v_voltage, DF_KEEP_SRC_EID);
        dispatch(m_12v_current, DF_KEEP_SRC_EID);
        dispatch(m_5v_voltage, DF_KEEP_SRC_EID);
        dispatch(m_5v_current, DF_KEEP_SRC_EID);
        spew("esc -> v: %.2f V i: %.2f A | +12 -> v: %.2f V i: %.2f A | +5 -> v: %.2f V i: %.2f A", voltage[0], current[0],
                                                                                                    voltage[1], current[1],
                                                                                                    voltage[2], current[2]);
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

      void
      sendCommand(const char cmd_id, const char cmd_reply = '\0', const bool persistent = false, const std::vector<uint8_t>& args = {})
      {
        if (m_handle == NULL)
          throw RestartNeeded("device handle is null", 5);

        do
        {
          NMEAWriter cmd(std::string(1, cmd_id));
          for (const auto& arg: args)
            cmd << uncastLexical(arg);
          m_handle->writeString(cmd.sentence().c_str());
          m_hb_timer.reset();

          if (cmd_reply == '\0')
            return;
        }
        while (!stopping() && !waitForCommand(cmd_reply) && persistent && !m_shdn_req);
      }

      char
      readInput(void)
      {
        size_t rv = m_handle->readString(m_buffer, sizeof(m_buffer));
        if (rv > 0)
        {
          spew("received: %s", sanitize(m_buffer).c_str());
          return processInput(m_buffer);
        }
        
        return '\0';
      }

      bool
      waitForCommand(const char cmd_id, const uint8_t timeout = c_cmd_timeout)
      {
        if (m_handle == NULL)
          throw RestartNeeded("device handle is null", 5);

        Time::Counter<unsigned> timer(timeout);

        do
        {
          if (Poll::poll(*m_handle, timer.getRemaining()))
          {
            const auto in = readInput();

            if (in == cmd_id)
            {
              m_no_rpl_cnt = 0;
              return true;
            }
          }

          if (m_shdn_req)
            return true;

          if (timer.overflow())
          {
            m_no_rpl_cnt++;
            if (m_no_rpl_cnt >= c_max_no_rpl_cnt)
              throw std::runtime_error("reached maximum no reply count");
            else
              war("no reply from device (%u/%u)", m_no_rpl_cnt, c_max_no_rpl_cnt);

            return false;
          }
        }
        while (!stopping());

        return false;
      }

      bool
      synchronize(void)
      {
        try
        {
          debug("trying to sync with device : setting heartbeat period to %u", c_hb_period);
          sendCommand(c_cmd_sync, c_cmd_sync, true, {c_hb_period});
          inf("synced with device : heartbeat period was set to %u", c_hb_period);
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
          sendCommand(c_cmd_data, c_cmd_ack, persistent, {rate});
          debug("data rate set to %u Hz", rate);

          if (rate > 0)
            m_inp_tmt.setTop(2.0 / rate);

          return true;
        }
        catch(const std::exception& e)
        {
          err("failed to set data rate : %s", e.what());
          return false;
        }
      }

      bool
      setPowerChannel(const std::string& label, const bool state, const bool persistent = false)
      {
        try
        {
          auto& pwr_ch = m_pwr_chs.at(label);
          debug("trying to turn %s power channel \"%s\"", state ? "on" : "off", label.c_str());
          sendCommand(c_cmd_power_ctl, c_cmd_ack, persistent, {pwr_ch.id, static_cast<uint8_t>(state)});
          pwr_ch.pcs.state = state;
          dispatch(m_pwr_chs[label].pcs);
          spew("power channel \"%s\" is %s", label.c_str(), state ? "on" : "off");
          return true;
        }
        catch(const std::exception& e)
        {
          err("failed to set power channel : %s", e.what());
          return false;
        }
      }

      void
      onMain(void) override
      {
        while (!stopping())
        {
          if (m_hb_timer.overflow())
            heartbeat();

          if (m_shdn_req)
          {
            waitForMessages(1.0);
            continue;
          }

          if (Poll::poll(*m_handle, 1.0))
            readInput();

          consumeMessages();

          if (m_inp_tmt.overflow() && m_args.odr > 0)
            throw RestartNeeded(String::str("no valid data for the last %.2f seconds", m_inp_tmt.getElapsed()), 5);
        }
      }
    };
  }
}

DUNE_TASK
