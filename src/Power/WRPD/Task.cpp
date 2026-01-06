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
    //! Command head character.
    static constexpr char c_cmd_head = '$';
    //! Command tail character.
    static constexpr char c_cmd_tail = '\n';
    //! Command argument separator.
    static constexpr char c_cmd_arg_sep = ',';
    //! Command argument end separator.
    static constexpr char c_cmd_arg_end = '*';
    //! Command to get data.
    static constexpr char c_cmd_data = 'D';
    //! Command to control power channel.
    static constexpr char c_cmd_power_ctl = 'P';

    //! Task arguments.
    struct Arguments
    {
      //! IO port device.
      std::string io_dev;
    };

    struct Task: public Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! Device handle.
      Hardware::SerialPort* m_handle;
      //! Input buffer.
      char m_buffer[128];
      //! No reply counter.
      uint8_t m_no_rpl_cnt;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_handle(NULL),
        m_no_rpl_cnt(0)
      {
        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"uart://DEVICE:BAUD\"");

        bind<IMC::PowerChannelControl>(this);
        bind<IMC::QueryPowerChannelState>(this);
      }

      void
      onResourceRelease(void) override
      {
        Memory::clear(m_handle);
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
      }

      void
      onResourceInitialization(void) override
      {
        if (m_handle == NULL)
          throw RestartNeeded("device handle is null", 5);

        m_no_rpl_cnt = 0;
        m_handle->setCanonicalInput(true);
        m_handle->flush();
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;
      }

      uint8_t
      computeChecksum(const std::string& str)
      {
        size_t hid = str.find(c_cmd_head);
        size_t eid = str.find(c_cmd_arg_end);
        if (hid == std::string::npos || eid == std::string::npos || eid <= hid)
          return 0;

        uint8_t cksum = 0;
        for (size_t i = hid + 1; i < eid; ++i)
          cksum ^= static_cast<uint8_t>(str[i]);

        return cksum;
      }

      char
      processInput(const std::string input)
      {
        if (input.size() < /* 5 */ 4)
          return '\0';

        if (input.front() != c_cmd_head || input.back() != c_cmd_tail)
          return '\0';

        auto arg_end = input.find(c_cmd_arg_end);
        if (arg_end == std::string::npos)
          return '\0';

        std::string payload = input.substr(1, arg_end);
        uint8_t rcsum = static_cast<uint8_t>(input[arg_end + 1]);
        uint8_t cksum = computeChecksum(payload);
        if (rcsum != cksum)
          return '\0';

        payload.pop_back();
        std::vector<std::string> data;
        String::split(payload, std::string(1, c_cmd_arg_sep), data);
        return interpretInput(data);
      }

      char
      interpretInput(const std::vector<std::string>& data)
      {
        if (data.size() < 1)
          return '\0';

        if (data[0].size() != 1)
          return '\0';

        const char cmd_id = data[0][0];
        switch (cmd_id)
        {
        case c_cmd_data:
          // TODO: process data message
          break;
        
        case c_cmd_power_ctl:
          // TODO: process power control reply
          break;

        default:
          return '\0';
        }

        return cmd_id;
      }

      void
      sendCommand(const char cmd_id, const std::vector<std::string>& args = {}, const char cmd_reply = '\0')
      {
        if (m_handle == NULL)
          throw RestartNeeded("device handle is null", 5);

        std::string cmd(1, c_cmd_head);
        cmd += cmd_id;
        if (args.size() > 0)
          cmd += c_cmd_arg_sep + String::join(args.begin(), args.end(), std::string(1, c_cmd_arg_sep));
        cmd += c_cmd_arg_end;
        cmd += static_cast<char>(computeChecksum(cmd));
        cmd += c_cmd_tail;
        m_handle->write(cmd.c_str(), cmd.size());

        if (cmd_reply != 0)
          waitForCommand(cmd_reply);
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
        
        return 0;
      }

      void
      waitForCommand(const char cmd_id, const uint8_t timeout = c_cmd_timeout)
      {
        if (m_handle == NULL)
          throw RestartNeeded("device handle is null", 5);

        Time::Counter<uint8_t> timer(timeout);
        do
        {
          if (Poll::poll(*m_handle, timer.getRemaining()))
          {
            if (cmd_id == readInput())
            {
              m_no_rpl_cnt = 0;
              return;
            }
          }

          if (timer.overflow())
          {
            m_no_rpl_cnt++;
            if (m_no_rpl_cnt >= c_max_no_rpl_cnt)
              throw RestartNeeded("reached maximum no reply count", 5);
            else
              war("no reply from device (%u/%u)", m_no_rpl_cnt, c_max_no_rpl_cnt);

            return;
          }
        }
        while (!stopping());
      }

      void
      getData(void)
      {
        sendCommand(c_cmd_data, {}, c_cmd_data);
      }

      void
      task(void) override
      {
        getData();
      }
    };
  }
}

DUNE_TASK
