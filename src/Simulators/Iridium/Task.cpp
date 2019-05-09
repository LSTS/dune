//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Network.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  //! This task simulates Iridium communications
  //! by posting messages directly to Ripples
  namespace Iridium
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Server hostname
      std::string server_address;
      //! Server port
      int server_port;
      //! Server path
      std::string post_path;
      //! Server path
      std::string poll_path;
      //! Polling periodicity
      double poll_period;
    };

    bool m_send_empty = false;
    double m_last_poll, m_last_message;
    IMC::VehicleMedium m_medium;

    //!
    struct Task: public Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      {
        // Retrieve configuration values.
        param("Server Address", m_args.server_address)
          .defaultValue("127.0.0.1");

        param("Server Port", m_args.server_port)
          .defaultValue("8888");

        param("Message Posting Path", m_args.post_path)
          .defaultValue("/api/v1/irsim");

        param("Message Polling Path", m_args.poll_path)
          .description("Path to obtain incoming messages for this vehicle")
          .defaultValue("/soi/incoming/%vehicle%?since=%since%");

        param("Poll Periodicity", m_args.poll_period)
          .defaultValue("30.0");

        setFrequency(0.2);
        m_last_poll = Clock::getSinceEpoch();
        m_last_message = 0.0;

        // Register consumers.
        bind<IMC::IridiumMsgTx>(this);
        bind<IMC::VehicleMedium>(this);
      }


      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      std::string
      asHex(int byte) {
        char b[3];
        sprintf(b, "%02X", byte & 0xFF);
        return std::string(b);
      }

      std::string
      pollPath(double since) {
        std::string systemStr = m_ctx.resolver.name();
        std::string sinceStr = "";
        std::string poll_path = m_args.poll_path;
        std::stringstream ss;
        inf("since: %f, %ld", since, (long) (since * 1000.0));

        ss << (long) (since * 1000.0);
        sinceStr = ss.str();
        poll_path = String::replaceAll(poll_path, "%vehicle%", systemStr);
        poll_path = String::replaceAll(poll_path, "%since%", sinceStr);

        return poll_path;
      }

      //! checks if a string contains only hexadecimal characters
      //! @param[in] str a string.
      //! @return whether the string is hexadecimal
      bool
      isHex(std::string str)
      {
        String::toUpperCase(str);
        for (char c : str)
        {
          if (!isdigit(c) && (c < 'A' && c > 'F'))
            return false;
        }
        return true;
      }

      //! Processes a complete HTTP GET response
      //! Resulting incoming Iridium messages are dispatched
      void
      processResponse(std::string getResponse)
      {
        std::vector<std::string> lines;
        String::split(getResponse, "\r\n\r\n", lines);
        if (lines.size() > 1) {
          std::string body = lines[1];
          lines.clear();
          String::split(body, "\n", lines);
          int count = 0;
          for(std::string line : lines)
          {
            if (!isHex(line))
            {
              throw Exception("Message format not recognized (non hexadecimal).");
            }

            debug("msg: %s / %d", line.c_str(), isHex(line));
            IridiumMsgRx rx;
            rx.setDestination(m_ctx.resolver.id());
            std::string data = String::fromHex(line);
            rx.data.assign(data.begin(), data.end());
            dispatch(rx);
            count++;
          }
          inf("Retrieved %d new messages from Ripples.", count);
        }
      }

      //! retrieve new messages from server
      //! @param since poll messages since this timestamp (in seconds)
      //! @return the timestamp of last retrieved message
      double
      pollMessages(double since) {
        std::stringstream ss;
        std::string poll_path = pollPath(since);

        ss << "GET " << poll_path << " HTTP/1.1\n";
        ss << "Host: " << m_args.server_address << ":" << m_args.server_port <<"\n";
        ss << "Accept: text/plain,text/html,application/json\n\n";
        inf("Getting %s:%d%s...", m_args.server_address.c_str(), m_args.server_port, poll_path.c_str());
        try {
          TCPSocket* sock = new TCPSocket();
          char incoming[1025] = {0};

          Network::Address addr(m_args.server_address.c_str());
          sock->connect(addr, m_args.server_port);
          std::string data = ss.str();
          sock->write(data.c_str(), data.length());
          sock->flushOutput();
          int buff_length = 1024;
          int read = sock->read(incoming, buff_length);
          std::string readData = "";

          while (read > 0) {
            incoming[read] = 0;
            readData = readData + incoming;
            if (read == buff_length)
              read = sock->read(incoming, buff_length);
            else
              break;
          }

          debug("GET RESPONSE: %s", readData.c_str());
          Memory::clear(sock);
          processResponse(readData);
        }
        catch (Exception &e) {
          err("Error while polling messages: %s", e.what());
          return since;
        }
        return Clock::getSinceEpoch();
      }

      void
      consume(const IMC::VehicleMedium* medium)
      {
        m_medium = *medium;
      }

      void
      consume(const IMC::IridiumMsgTx* msg)
      {

        IMC::IridiumTxStatus status;
        status.req_id = msg->req_id;
        status.setDestination(msg->getSource());
        status.setDestinationEntity(msg->getSourceEntity());
        m_send_empty = false;

        std::stringstream ss;
        ss << "POST " << m_args.post_path << " HTTP/1.1\n";
        ss << "Host: " << m_args.server_address << "\n";
        ss << "Content-Type: application/hub\n";
        ss << "Content-Length: "<< msg->data.size()*2 << "\n\n";

        std::vector<char>::const_iterator it = msg->data.begin();
        for(; it != msg->data.end(); it++)
        {
          ss << asHex(*it);
        }
        debug("POSTING: %s", ss.str().c_str());
        inf("Sent message with %d bytes to %s:%d%s", (int) msg->data.size(),
            m_args.server_address.c_str(), m_args.server_port, m_args.post_path.c_str());
        try {
          TCPSocket* sock = new TCPSocket();
          char incoming[65535] = {0};

          Network::Address addr(m_args.server_address.c_str());
          sock->connect(addr, m_args.server_port);
          std::string data = ss.str();
          sock->write(data.c_str(), data.length());
          sock->flushOutput();
          int buff_length = 65534;
          std::string readData = "";
          int read = sock->read(incoming, buff_length);
          while (read > 0) {
            incoming[read] = 0;
            readData = readData + incoming;
            if (read == buff_length)
              read = sock->read(incoming, buff_length);
            else
              break;
          }

          debug("RESPONSE: %s", readData.c_str());

          Memory::clear(sock);

          status.status = IMC::IridiumTxStatus::TXSTATUS_OK;
          status.text = "Transmitted to Ripples (Simulation)";
          dispatch(status);
        }
        catch (Exception &e) {
          err("Error while posting: %s", e.what());
          status.status = IMC::IridiumTxStatus::TXSTATUS_ERROR;
          status.text = e.what();
          dispatch(status);
        }
        m_send_empty = true;
      }

      //! @publish DUNE::IMC::IridiumTxStatus
      //! @publish DUNE::IMC::IridiumMsgRx
      void
      task(void)
      {
        if (m_send_empty)
        {
          IMC::IridiumTxStatus status;
          status.status = IridiumTxStatus::TXSTATUS_EMPTY;
          dispatch(status);
        }
        double now = Clock::getSinceEpoch();
        if (now - m_last_poll > m_args.poll_period && m_medium.medium != VehicleMedium::VM_UNDERWATER)
        {
          m_last_message = pollMessages(m_last_message);
          m_last_poll = now;
        }
      }
    };
  }
}

DUNE_TASK
