//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins (GPS driver)                                     *
// Author: Luis Venancio (BasicDeviceDriver compatibility)                  *
// Author: João Bogas (adaptation to Devices/CrawlerSerial)                 *
// Author: Bernardo Gabriel (adaptation to Devices/CrawlerSerial)           *
//***************************************************************************

// ISO C++ 98 headers.
#include <algorithm>
#include <cstddef>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Reader.hpp"

namespace Drivers
{
  //! The task will receive Pressure data and request a PWM signal.
  //!
  //! The task will communicate with a Raspberry Pi Pico via SerialPort.
  //! @author João Bogas
  //! @author Bernardo Gabriel
  namespace CrawlerSerial
  {
    using DUNE_NAMESPACES;

    //! Maximum number of initialization commands.
    static const unsigned c_max_init_cmds = 5;
    //! Timeout for waitReply() function.
    static const float c_wait_reply_tout = 4.0;

    struct Arguments
    {
      //! IO device (URI).
      std::string io_dev;
      //! Input timeout in seconds.
      float inp_tout;
      //! Initialization commands.
      std::string init_cmds[c_max_init_cmds];
      //! Initialization replies.
      std::string init_rpls[c_max_init_cmds];
    };

    struct Task : public Hardware::BasicDeviceDriver
    {
      //! Serial port handle.
      IO::Handle *m_handle;
      //! Task arguments.
      Arguments m_args;
      //! Input watchdog.
      Time::Counter<float> m_wdog;
      //! Reader thread.
      Reader *m_reader;
      //! IMC msg
      IMC::Pressure m_press;
      //! Buffer forEntityState
      char m_bufer_entity[64];
      //! Last line while waiting for reply.
      std::string m_reply_line;
      //! Wait for reply
      bool m_wait_reply = false;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string &name, Tasks::Context &ctx) : Hardware::BasicDeviceDriver(name, ctx),
                                                           m_handle(NULL),
                                                           m_reader(NULL)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_DEVELOPER,
                    true);

        param("IO Port - Device", m_args.io_dev)
            .defaultValue("")
            .description("IO device URI in the form \"uart://DEVICE:BAUD\"");

        param("Input Timeout", m_args.inp_tout)
            .units(Units::Second)
            .defaultValue("4.0")
            .minimumValue("0.0")
            .description("Input timeout");

        for (unsigned i = 0; i < c_max_init_cmds; ++i)
        {
          std::string cmd_label = String::str("Initialization String %u - Command", i);
          param(cmd_label, m_args.init_cmds[i])
              .defaultValue("");

          std::string rpl_label = String::str("Initialization String %u - Reply", i);
          param(rpl_label, m_args.init_rpls[i])
              .defaultValue("");
        }

        // Use wait for messages
        setWaitForMessages(1.0);

        // Initialize messages.
        clearMessages();

        bind<IMC::DevDataText>(this);
        bind<IMC::IoEvent>(this);
        bind<IMC::RemoteActions>(this);
      }

      ~Task() override
      {
        onDisconnect();
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        try
        {
          m_handle = openDeviceHandle(m_args.io_dev);
          m_reader = new Reader(this, m_handle);
          m_reader->start();
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVATING);
          return true;
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return false;
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        sendCommand("@STOP,*");

        if (m_reader != NULL)
        {
          m_reader->stopAndJoin();
          Memory::clear(m_reader);
        }

        Memory::clear(m_handle);
      }

      //! Initialize device.
      void
      onInitializeDevice() override
      {
        for (unsigned i = 0; i < c_max_init_cmds; ++i)
        {
          if (m_args.init_cmds[i].empty())
            continue;

          if (m_args.init_rpls[i].empty())
            sendCommand(m_args.init_cmds[i].c_str());
          else if (!sendCommand(String::unescape(m_args.init_cmds[i]).c_str(), String::unescape(m_args.init_rpls[i]).c_str()))
          {
            err("%s: %s", DTR("no reply to command"), String::unescape(m_args.init_cmds[i]).c_str());
            throw std::runtime_error(DTR("failed to setup device"));
          }
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        m_wdog.setTop(m_args.inp_tout);
      }

      void
      clearMessages(void)
      {
        m_press.clear();
      }

      //! Wait reply to command.
      //! @param[in] stn string to compare.
      //! @return true on successful match, false otherwise.
      bool
      waitReply(const std::string &stn)
      {
        Counter<float> counter(c_wait_reply_tout);
        while (!stopping() && !counter.overflow())
        {
          waitForMessages(counter.getRemaining());

          std::string line = m_reply_line;
          unsigned line_len = line.length();

          //!
          if (line_len < 2)
            continue;

          //! Remove Checksum and '\n' characters
          line.erase(line.length() - 2);

          if (line == stn)
          {
            m_reply_line.clear();
            m_wait_reply = false;
            return true;
          }
        }

        return false;
      }

      void
      consume(const IMC::DevDataText *msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        trace("%s", sanitize(msg->value).c_str());

        if (m_wait_reply)
          m_reply_line = msg->value;
        else
          processSentence(msg->value);
      }

      void
      consume(const IMC::IoEvent *msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (msg->type == IMC::IoEvent::IOV_TYPE_INPUT_ERROR)
          throw RestartNeeded(msg->error, 5);
      }

      //! Send a command via Serial Port.
      //! @param cmd command to send.
      void
      sendCommand(const char *cmd)
      {
        char cmdText[32];
        std::sprintf(cmdText, "%s%c\n", cmd, (Algorithms::XORChecksum::compute((uint8_t *)cmd, strlen(cmd) - 1) | 0x80));
        // std::sprintf(cmdText, "%s\n", cmd);
        trace("Command: %s", sanitize(cmdText).c_str());
        m_handle->writeString(cmdText);
      }

      //! Send a command via Serial Port and wait for a specific reply.
      //! @param cmd command to send.
      //! @param reply message to wait for.
      //! @return true if succes, false otherwise
      bool
      sendCommand(const char *cmd, const char *reply)
      {
        sendCommand(cmd);
        m_wait_reply = true;
        return waitReply(reply);
      }

      void
      consume(const IMC::RemoteActions *msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        Utils::TupleList tuples(msg->actions);
        int light_val = tuples.get("Lights", -127);
        if (light_val != 0)
        {
          IMC::SetServoPosition set_light;
          set_light.id = 0;
          set_light.value = ((light_val - (-127.0)) / (127.0 - (-127.0)) * (100));

          std::string send = String::str("@PWM,%d,*", (int)set_light.value);
          sendCommand(send.c_str());
        }
      }

      //! Process sentence.
      //! @param[in] line line.
      void
      processSentence(const std::string &line)
      {
        // Discard leading noise.
        size_t sidx = 0;
        for (sidx = 0; sidx < line.size(); ++sidx)
        {
          if (line[sidx] == '$')
            break;
        }

        // Discard trailing noise.
        size_t eidx = 0;
        for (eidx = line.size() - 1; eidx > sidx; --eidx)
        {
          if (line[eidx] == '*')
            break;
        }

        if (sidx >= eidx)
          return;

        unsigned line_len = line.length();
        if (line_len < 3)
        {
          trace("No checksum found, will not parse sentence.");
          return;
        }

        // Compute checksum.
        unsigned ccsum = Algorithms::XORChecksum::compute((uint8_t *)&line[0], line_len - 3) | 0x80;

        // Validate checksum.
        unsigned rcsum = 0;
        rcsum = (uint8_t) line[line_len-2];

        if (ccsum != rcsum)
        {
          trace("Checksum field does not match computed checksum, will not "
                "parse sentence.");
          return;
        }

        // Split sentence
        std::vector<std::string> parts;
        String::split(line.substr(sidx + 1, eidx - sidx - 1), ",", parts);

        interpretSentence(parts);
      }

      //! Interpret given sentence.
      //! @param[in] parts vector of strings from sentence.
      void
      interpretSentence(std::vector<std::string> &parts)
      {
        if (parts[0] == "$PWM")
        {
          clearMessages();
          m_press.setTimeStamp();
          m_press.value = atof(parts[1].c_str());
          dispatch(m_press, DF_KEEP_TIME);
        }

        m_wdog.reset();
      }

      //! Check for input timeout.
      //! Data is read in the DevDataText consume.
      //! @return true.
      bool
      onReadData() override
      {
        if (m_wdog.overflow())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return true;
      }
    };
  }
}

DUNE_TASK