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
// Author: Jose Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace TCP
  {
    //! %AcousticProxy task allows interacting with acoustic modems over a
    //! TCP / text-based interface
    namespace AcousticProxy
    {
      using DUNE_NAMESPACES;

      //! Task arguments
      struct Arguments
      {
        //! Port to use.
        uint16_t port;
        //! Evologics Task Label
        std::string evo_label;
        //! MicroModem Task Label
        std::string umodem_label;
        //! Evologics Addresses Section
        std::string evo_section;
        //! MicroModem Addresses Section
        std::string umodem_section;
      };

      struct Task: public Tasks::Task
      {
        // Arguments
        Arguments m_args;
        // Port bind retries.
        static const int c_port_retries = 5;
        // Server socket handle.
        TCPSocket* m_sock;
        // I/O selector.
        Poll m_poll;
        //! Entity id for modems
        int m_umodem_id, m_evo_id;
        //! incoming data buffer
        Utils::ByteBuffer m_buf;
        //! echo received commands
        bool m_echo;

        // Client data.
        struct Client
        {
          TCPSocket* socket;  // Socket handle.
          Address address;    // Client address.
          uint16_t port;      // Client port.
          char buffer[65535]; // Incoming buffer.
          int buf_pos;        // Buffer position.
        };

        // Client list.
        typedef std::list<Client> ClientList;
        ClientList m_clients;

        // List of seen TransmissionRequests
        typedef std::map<uint16_t, IMC::UamTxFrame> RequestMap;
        RequestMap m_requests;

        // Increasing sequence number to use when sending transmission requests
        int m_seq_id = 0;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_sock(0),
          m_umodem_id(-1),
          m_evo_id(-1),
          m_echo(false)
        {
          param("Port", m_args.port)
          .defaultValue("9999")
          .description("TCP server port");

          param("Evologics Entity Label", m_args.evo_label)
          .defaultValue("Evologics Modem")
          .description("Entity Label for the Transports.Evologics task");

          param("Micromodem Entity Label", m_args.umodem_label)
          .defaultValue("Micromodem Modem")
          .description("Entity Label for the Transports.Micromodem task");

          param("Evologics Addresses Section", m_args.evo_section)
          .defaultValue("Dummy Addresses")
          .description("Section of configuration holding Evologics addresses");

          param("Micromodem Addresses Section", m_args.umodem_section)
          .defaultValue("Dummy Addresses")
          .description("Section of configuration holding micromodem addresses");

          bind<IMC::UamTxFrame>(this);
          bind<IMC::UamTxStatus>(this);
          bind<IMC::UamRxFrame>(this);
          bind<IMC::UamRxRange>(this);
          bind<IMC::UsblFixExtended>(this);
          bind<IMC::UsblPositionExtended>(this);
        }

        void
        onEntityResolution(void)
        {
          // Try to obtain entity ids of modem tasks. It's fine if some of them do not exist.
          try {
            m_umodem_id = m_ctx.entities.resolve(m_args.umodem_label);
          }
          catch (...) {
            war("Could not get entity id for Micromodem task: %s", m_args.umodem_label.c_str());
          }

          try {
            m_evo_id = m_ctx.entities.resolve(m_args.evo_label);
          }
          catch (...) {
            war("Could not get entity id for Evologics task: %s", m_args.evo_label.c_str());
          }
        }

        void
        onResourceAcquisition(void)
        {
          int port_limit = m_args.port + c_port_retries;
          m_sock = new TCPSocket;
          // Start listening for incoming TCP connections
          while (m_args.port != port_limit)
          {
            try
            {
              m_sock->bind(m_args.port);
              break;
            }
            catch (std::runtime_error& e)
            {
              war(DTR("failed to bind to port %u: %s"), m_args.port, e.what());
              ++m_args.port;
            }
          }

          if (m_args.port == port_limit)
          {
            std::string str = DTR("could not bind server socket");
            err("%s", str.c_str());
            throw std::runtime_error(str);
          }

          m_sock->listen(5);
          m_poll.add(*m_sock);
          inf(DTR("listening on %s:%u"), Address(Address::Any).c_str(), m_args.port);

          updateEntityState(0);
        }

        void
        updateEntityState(unsigned client_count)
        {
          if (client_count > 0)
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL,
                           String::str(DTR("connected to %u clients"),
                                       client_count));
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL,
                           Status::CODE_IDLE);
          }
        }

        void
        closeConnection(Client& c, std::exception& e)
        {
          long unsigned int client_count = m_clients.size() - 1;
          updateEntityState(client_count);

          debug("closing connection to %s:%u (%s), client count is %lu",
                c.address.c_str(), c.port, e.what(), client_count);

          m_poll.remove(*c.socket);
          delete c.socket;
        }

        void
        onResourceRelease(void)
        {
          for (ClientList::iterator itr = m_clients.begin(); itr != m_clients.end(); ++itr)
          {
            m_poll.remove(*itr->socket);
            delete itr->socket;
          }

          m_clients.clear();

          if (m_sock)
          {
            m_poll.remove(*m_sock);
            delete m_sock;
            m_sock = 0;
          }
        }

        void
        sendToClients(std::string text)
        {
          ClientList::iterator itr = m_clients.begin();

          while (itr != m_clients.end())
          {
            try
            {
              itr->socket->write((uint8_t*) text.data(), text.size());
            }
            catch (std::runtime_error& e)
            {
              closeConnection(*itr, e);
              itr = m_clients.erase(itr);
              continue;
            }
            ++itr;
          }
        }

        void
        onDataReception(uint8_t* buf, unsigned int cap, double timeout)
        {
          // Poll for connections and client data
          if (!m_poll.poll(timeout))
            return;

          // Check for new clients.
          if (m_poll.wasTriggered(*m_sock))
            acceptNewClient();

          // Check for client data
          handleClients(buf, cap);
        }

        std::vector<char>
        fromHex(std::string hexBytes)
        {
          hexBytes = String::trim(hexBytes);
          std::vector<char> result;
          if ((hexBytes.size() % 2) != 0)
            throw std::invalid_argument("String length is not even");

          for (unsigned i = 0; i < hexBytes.size(); i += 2)
          {
            unsigned c;
            std::sscanf(hexBytes.c_str() + i, "%02X", &c);
            result.push_back(c);
          }
          return result;
        }

        void
        acceptNewClient(void)
        {
          Client c;
          c.socket = 0;
          c.buf_pos = 0;

          try
          {
            c.socket = m_sock->accept(&c.address, &c.port);
            c.socket->setKeepAlive(true);
            c.socket->setNoDelay(true);
            c.socket->setReceiveTimeout(5);
            c.socket->setSendTimeout(5);
            m_poll.add(*c.socket);
            m_clients.push_back(c);
            updateEntityState(m_clients.size());

            debug("accepted connection from %s:%u, client count is %lu",
                  c.address.c_str(), c.port, (long unsigned int)m_clients.size());
          }
          catch (std::runtime_error& e)
          {
            if (c.socket)
              delete c.socket;
            err(DTR("error accepting new client connection: %s"), e.what());
          }
        }

        std::string
        handleData(Client& client, uint8_t* buf, unsigned int size)
        {
          memcpy(client.buffer + client.buf_pos, buf, size);
          client.buf_pos += size;

          std::string line(reinterpret_cast<char const*>(client.buffer), client.buf_pos);

          if (!String::endsWith(line, "\n"))
            return "";

          if (m_echo)
            sendToClients(String::trim(line) + "\r\n");

          client.buf_pos = 0;
          std::vector<std::string> parts;
          String::toLowerCase(line);
          String::split(line, " ", parts);

          if (parts.size() < 2)
            return "Parse exception: Commands take at least one argument\r\n";

          // echo on/off command
          if (parts[0] == "echo")
          {
            if (parts[1] == "on")
              m_echo = true;
            else if(parts[1] == "off")
              m_echo = false;
            else
              return "Parse exception: Echo is either \"on\" or \"off\"\r\n";
            return "";
          }

          std::vector<std::string> addr_parts;
          String::split(parts[1], ".", addr_parts);

          if (addr_parts.size() != 2)
            return "Parse exception: Destination arguments are in the form <modem>.<id>\r\n";
          int dest_entity;
          std::string addr_section = "";

          if (addr_parts[0] == "evologics")
          {
            dest_entity = m_evo_id;
            addr_section = m_args.evo_section;
          }
          else if (addr_parts[0] == "umodem")
          {
            dest_entity = m_umodem_id;
            addr_section = m_args.umodem_section;}
          else
            return "Parse exception: Invalid modem type\r\n";

          std::string command = parts[0];
          UamTxFrame req;

          req.seq = m_seq_id++;
          req.sys_dst = resolveName(addr_section, addr_parts[1]);
          req.setDestination(getSystemId());

          if (command == "range")
          {
            debug("Send range to %s!", addr_parts[1].c_str());
            req.flags = UamTxFrame::UTF_ACK;
            req.setDestinationEntity(dest_entity);
            req.sys_dst = resolveName(addr_section, addr_parts[1]);
            req.data.push_back(0);
          }
          else if (command == "deliver" || command == "send")
          {
            if (parts.size() < 3)
              return "Parse exception: command takes two arguments\r\n";
            std::string msg = parts[2];
            // deliver requests for message acknowledgment while send doesn't
            req.flags = (command == "deliver")? UamTxFrame::UTF_ACK : 0;
            msg = String::trim(msg);
            if (msg.length()%2 != 0)
              return "Parse exception: Hexadecimal value must have even length\r\n";
            req.data = fromHex(msg);
            req.setDestinationEntity(dest_entity);
            req.sys_dst = addr_parts[1];
            debug("Send %s to %s", msg.c_str(), addr_parts[1].c_str());
          }

          dispatch(req, DF_LOOP_BACK);
          std::stringstream ss;
          req.toJSON(ss);
          debug("Sent this request: %s", ss.str().c_str());
          return "";
        }

        void
        handleClients(uint8_t* buf, unsigned int cap)
        {
          // Check for new data from clients.
          ClientList::iterator itr = m_clients.begin();

          while (itr != m_clients.end())
          {
            if (!m_poll.wasTriggered(*itr->socket))
            {
              ++itr;
              continue;
            }

            int n;

            try
            {
              n = itr->socket->read((char*)buf, cap);
            }
            catch (std::runtime_error& e)
            {
              closeConnection(*itr, e);

              debug("closed connection from %s:%u, client count is %lu",
                    itr->address.c_str(), itr->port, (long unsigned int)m_clients.size()-1);

              itr = m_clients.erase(itr);

              continue;
            }

            if (n > 0)
            {
              std::string errors = handleData(*itr, buf, n);
              if (!errors.empty())
              {
                itr->socket->write(errors.data(), errors.length());
                war("Exception sent to client: %s", errors.c_str());
              }
            }

            ++itr;
          }
        }

        int
        resolveAddress(std::string modem_section, std::string sys_name)
        {
          try {
           return std::stoi(m_ctx.config.get(modem_section, sys_name));
          }
          catch (...) {
            return -1;
          }
        }

        //! Resolves the destination by checking if its either a name or a modem address
        //! consistent with the existing modem address sections
        std::string
        resolveName(std::string modem_section, std::string modem_name)
        {
          try {
            std::map<std::string, std::string> addrs = m_ctx.config.getSection(modem_section);
            for (std::pair<std::string, std::string> entry : addrs)
            {
              if (entry.first == modem_name)
                return modem_name;

              if (entry.second == modem_name)
                return entry.first;
            }
          }
          catch (...) { }

          return modem_name;
        }

        void
        log(double timestamp, std::string event, std::string source, std::string destination, int entity, std::vector<char> data, float range = 0)
        {
          std::stringstream ss;
          if (entity == m_umodem_id || (entity == 255 && m_umodem_id != -1))
          {
            ss << std::setprecision(3) << std::fixed << timestamp << "," << "umodem." << event << "," << resolveAddress(m_args.umodem_section, source) << ","
               << resolveAddress(m_args.umodem_section, destination) << ",";
          }
          if (entity == m_evo_id || (entity == 255 && m_evo_id != -1))
          {
            ss << std::setprecision(3) << std::fixed << timestamp << "," << "evologics." << event << "," << resolveAddress(m_args.evo_section, source)
               << "," << resolveAddress(m_args.evo_section, destination) << ",";
          }

          if (event != "Range")
          {
            for (char c : data)
              ss << std::hex << std::setw(2) << std::setfill('0') << (int) (c & 0xFF);
          }
          else
          {
            ss << range;
          }

          debug("%s", ss.str().c_str());
          ss << "\r\n";

          sendToClients(ss.str());
        }

        void
        consume(const IMC::UamRxRange* msg)
        {
          log(msg->getTimeStamp(), "Range", m_ctx.resolver.name() , msg->sys, msg->getSourceEntity(), std::vector<char>(), msg->value);
        }

        void
        consume(const IMC::UamTxFrame* msg)
        {
          m_requests[msg->seq] = *msg;
          log(msg->getTimeStamp(), "Tx", m_ctx.resolver.name(), msg->sys_dst, msg->getDestinationEntity(), msg->data);
        }

        void
        consume(const IMC::UamRxFrame* msg)
        {
          log(msg->getTimeStamp(), "Rx", msg->sys_src, msg->sys_dst, msg->getSourceEntity(), msg->data);
        }

        void
        consume(const IMC::UamTxStatus* msg)
        {
          std::string event = "";

          if (m_requests.find(msg->seq) == m_requests.end())
          {
            war("Could not find matching transmission request (%d)", msg->seq);
            return;
          }

          IMC::UamTxFrame req = m_requests[msg->seq];

          switch (msg->value) {
            case UamTxStatus::UTS_DONE:
              event = "TxOk";
              break;
            case UamTxStatus::UTS_BUSY:
              event = "TxBusy";
              break;
            case UamTxStatus::UTS_CANCELED:
              event = "TxCanceled";
              break;
            case UamTxStatus::UTS_IP:
              event = "TxInProgress";
              break;
            case UamTxStatus::UTS_FAILED:
              event = "TxFailed";
              break;
            case UamTxStatus::UTS_INV_SIZE:
              event = "TxInvalidSize";
              break;
            case UamTxStatus::UTS_INV_ADDR:
              event = "TxInvalidAddress";
              break;
            case UamTxStatus::UTS_UNSUPPORTED:
              event = "TxUnsupported";
              break;
            default:
              event = "TxUnknown";
              break;
          }

          log(msg->getTimeStamp(), event, m_ctx.resolver.name() , req.sys_dst, msg->getSourceEntity(), req.data);

          if (msg->value != UamTxStatus::UTS_IP)
            m_requests.erase(msg->seq);
        }

        void
        consume(const IMC::UsblFixExtended* msg)
        {
          std::stringstream ss;
          ss << (long) (msg->getTimeStamp() * 1000) << ",";
          ss << "evologics.usbl_abs" << "," << resolveAddress(m_args.evo_section, m_ctx.resolver.name()) << ",";
          ss << resolveAddress(m_args.evo_section, msg->target) << ",";
          ss << Angles::degrees(msg->lat) << "," << Angles::degrees(msg->lon) << ",";
          ss << msg->z << "," << msg->accuracy;

          debug("%s", ss.str().c_str());
          ss << "\r\n";

          sendToClients(ss.str());
        }

        void
        consume(const IMC::UsblPositionExtended* msg)
        {
          std::stringstream ss;
          ss << (long) (msg->getTimeStamp() * 1000) << ",";
          ss << "evologics.usbl_rel" << "," << resolveAddress(m_args.evo_section, m_ctx.resolver.name()) << ",";
          ss << resolveAddress(m_args.evo_section, msg->target) << ",";
          ss << std::setprecision(2) << Angles::degrees(msg->phi) << "," << Angles::degrees(msg->theta) << "," << Angles::degrees(msg->psi) << ",";
          ss << msg->x << "," << msg->y << "," << msg->z << ",";
          ss << msg->n << "," << msg->e << "," << msg->d << "," << msg->accuracy;

          debug("%s", ss.str().c_str());
          ss << "\r\n";

          sendToClients(ss.str());
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            consumeMessages();
            onDataReception(m_buf.getBuffer(), m_buf.getCapacity(), 0.005);
          }
        }
      };
    }
  }
}

DUNE_TASK
