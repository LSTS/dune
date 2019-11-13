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
        std::string mmodem_label;
        //! Evologics Addresses Section
        std::string evo_section;
        //! MicroModem Addresses Section
        std::string mmodem_section;
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
        int m_mmodem_id, m_evo_id;

        //! incoming data buffer
        Utils::ByteBuffer m_buf;

        // Client data.
        struct Client
        {
          TCPSocket* socket; // Socket handle.
          Address address; // Client address.
          uint16_t port; // Client port.
        };

        // Client list.
        typedef std::list<Client> ClientList;
        ClientList m_clients;

        // List of seen TransmissionRequests
        typedef std::map<uint16_t, IMC::UamTxFrame> RequestMap;
        RequestMap m_requests;

        int m_seq_id = 0;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_sock(0),
          m_mmodem_id(-1),
          m_evo_id(-1)
        {
          param("Port", m_args.port)
          .defaultValue("9999")
          .description("TCP server port");

          param("Evologics Entity Label", m_args.evo_label)
          .defaultValue("Evologics Modem")
          .description("Entity Label for the Transports.Evologics task");

          param("Micromodem Entity Label", m_args.mmodem_label)
          .defaultValue("Micromodem Modem")
          .description("Entity Label for the Transports.Micromodem task");

          param("Evologics Addresses Section", m_args.evo_section)
          .defaultValue("Dummy Addresses")
          .description("Section of configuration holding Evologics addresses");

          param("Micromodem Addresses Section", m_args.mmodem_section)
          .defaultValue("Dummy Addresses")
          .description("Section of configuration holding micromodem addresses");

          bind<IMC::UamTxFrame>(this);
          bind<IMC::UamTxStatus>(this);
          bind<IMC::UamRxFrame>(this);
        }

        void
        onEntityResolution(void)
        {
          try {
            m_mmodem_id = m_ctx.entities.resolve(m_args.mmodem_label);
          }
          catch (...) {
            war("Could not get entity id for Micromodem task: %s", m_args.mmodem_label.c_str());
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
        onDataTransmission(const uint8_t* p, unsigned int n)
        {
          ClientList::iterator itr = m_clients.begin();

          while (itr != m_clients.end())
          {
            try
            {
              itr->socket->write((char*)p, n);
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

        void
        acceptNewClient(void)
        {
          Client c;
          c.socket = 0;
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
        handleData(uint8_t* buf, unsigned int size)
        {
          std::string line(reinterpret_cast<char const*>(buf), size);
          std::vector<std::string> parts;
          debug("command: '%s'", String::trim(line).c_str());
          String::toLowerCase(line);
          String::split(line, " ", parts);

          if (parts.size() < 2)
            return "Parse exception: Commands take at least one argument\r\n";

          std::vector<std::string> addr_parts;
          String::split(parts[1], ".", addr_parts);

          if (addr_parts.size() != 2)
            return "Parse exception: Invalid destination\r\n";
          int dest_entity;

          if (addr_parts[0] == "evologics")
            dest_entity = m_evo_id;
          else if (addr_parts[0] == "umodem")
            dest_entity = m_mmodem_id;
          else
            return "Parse exception: Invalid modem type\r\n";

          std::string command = parts[0];
          UamTxFrame req;

          req.seq = m_seq_id++;
          req.sys_dst = addr_parts[1];

          if (command == "range")
          {
            debug("Send evologics range to %s!", addr_parts[1].c_str());
            req.flags = UamTxFrame::UTF_ACK;
            req.setDestinationEntity(dest_entity);
            req.sys_dst = addr_parts[1];
            req.data.push_back(0x01);
          }
          else if (command == "deliver")
          {
            if (parts.size() < 3)
              return "Parse exception: Deliver command takes two arguments\r\n";
            std::string msg = parts[2];
            std::string data = String::fromHex(msg);
            req.flags = UamTxFrame::UTF_ACK;
            std::copy(data.begin(), data.end(), std::back_inserter(req.data));
            req.setDestinationEntity(dest_entity);
            req.sys_dst = addr_parts[1];
            debug("Deliver %s to %s", msg.c_str(), addr_parts[1].c_str());
          }
          else if (command == "send")
          {
            if (parts.size() < 3)
              return "Parse exception: Send command takes two arguments\r\n";
            std::string msg = parts[2];
            std::string data = String::fromHex(msg);
            std::copy(data.begin(), data.end(), std::back_inserter(req.data));
            req.setDestinationEntity(dest_entity);
            req.sys_dst = addr_parts[1];
            debug("Send %s to %s", msg.c_str(), addr_parts[1].c_str());
          }

          dispatch(req, DF_LOOP_BACK);
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
              std::string errors = handleData(buf, n);
              if (!errors.empty())
              {
                itr->socket->write(errors.data(), errors.length());
                war("Exception sent to client: %s", errors.c_str());
              }
            }

            ++itr;
          }
        }

        //! Resolve ids for source and destination of a transmitted frame
        void resolve(const IMC::UamTxFrame& frame, int* source, int* destination)
        {
          std::string src_label = m_ctx.resolver.name();
          std::string dst_label = frame.sys_dst;
          std::string addr_section = "";

          if (frame.getDestinationEntity() == m_mmodem_id)
            addr_section = m_args.mmodem_section;
          else if (frame.getDestinationEntity() == m_evo_id)
            addr_section = m_args.evo_section;
          else
          {
            war("Could not resolve modem address for %s.", frame.sys_dst.c_str());
            *source = *destination = -1;
            return;
          }

          *source = std::stoi(m_ctx.config.get(addr_section, src_label));
          *destination = std::stoi(m_ctx.config.get(addr_section, dst_label));
        }

        //! Resolve ids for source and destination of a received frame
        void resolve(const IMC::UamRxFrame& frame, int* source, int* destination)
        {
          std::string src_label = frame.sys_src;
          std::string dst_label = frame.sys_dst;
          std::string addr_section = "Modem Addresses";

          if (frame.getSourceEntity() == m_mmodem_id)
            addr_section = m_args.mmodem_section;
          else if (frame.getSourceEntity() == m_evo_id)
            addr_section = m_args.evo_section;
          else
          {
            war("Could not resolve modem address for %s.", frame.sys_dst.c_str());
            *source = *destination = -1;
            return;
          }

          *source = std::stoi(m_ctx.config.get(addr_section, src_label));
          *destination = std::stoi(m_ctx.config.get(addr_section, dst_label));
        }

        void
        sendToClients(std::string text)
        {
          onDataTransmission((uint8_t*) text.data(), text.size());
        }

        void
        log(const IMC::UamTxFrame& request)
        {
          std::stringstream ss;

          long tstamp = abs(request.getTimeStamp() * 1000);
          int src, dst;
          resolve(request, &src, &dst);

          std::string event = "Tx";
          if (request.getDestinationEntity() == m_mmodem_id)
            event = "Micromodem.Tx";
          else if (request.getDestinationEntity() == m_evo_id)
            event = "Evologics.Tx";

          ss << tstamp << "," << event << "," << src << "," << dst << "," << std::hex;
          for (char c : request.data)
            ss << (int)c;
          inf("%s", ss.str().c_str());
          ss << "\r\n";
          sendToClients(ss.str());
        }

        void
        log(const IMC::UamRxFrame& rx)
        {
          std::stringstream ss;

          long tstamp = abs(rx.getTimeStamp() * 1000);
          int src, dst;
          resolve(rx, &src, &dst);

          std::string event = "Rx";
          if (rx.getSourceEntity() == m_mmodem_id)
            event = "Micromodem.Rx";
          else if (rx.getSourceEntity() == m_evo_id)
            event = "Evologics.Rx";

          ss << tstamp << "," << event << "," << src << "," << dst << "," << std::hex;
          for (char c : rx.data)
            ss << (int)c;

          inf("%s", ss.str().c_str());
          ss << "\r\n";
          sendToClients(ss.str());
        }

        void
        log(const IMC::UamTxStatus& status)
        {
          std::stringstream ss;

          long tstamp = abs(status.getTimeStamp() * 1000);
          int src, dst;

          std::string event = "";
          if (status.getSourceEntity() == m_mmodem_id)
            event = "M.";
          else if (status.getSourceEntity() == m_evo_id)
            event = "E.";

          if (m_requests.find(status.seq) == m_requests.end())
          {
            war("Could not find matching transmission request (%d)", status.seq);
            return;
          }

          switch (status.value) {
            case UamTxStatus::UTS_DONE:
              event += "TxOk";
              break;
            case UamTxStatus::UTS_BUSY:
              event += "TxBusy";
              break;
            case UamTxStatus::UTS_CANCELED:
              event += "TxCanceled";
              break;
            case UamTxStatus::UTS_IP:
              event += "TxInProgress";
              break;
            case UamTxStatus::UTS_FAILED:
              event += "TxFailed";
              break;
            case UamTxStatus::UTS_INV_SIZE:
              event += "TxInvalidSize";
              break;
            case UamTxStatus::UTS_INV_ADDR:
              event += "TxInvalidAddress";
              break;
            case UamTxStatus::UTS_UNSUPPORTED:
              event += "TxUnsupported";
              break;
            default:
              event += "TxUnknown";
              break;
          }

          IMC::UamTxFrame req = m_requests[status.seq];
          resolve(req, &src, &dst);
          ss << tstamp << "," << event << "," << src << "," << dst << "," << std::hex;
          for (char c : req.data)
            ss << (int)c;

          inf("%s", ss.str().c_str());
          ss << "\r\n";

          sendToClients(ss.str());
        }

        void
        consume(const IMC::UamTxFrame* msg)
        {
          m_requests[msg->seq] = *msg;
          log(*msg);
        }

        void
        consume(const IMC::UamRxFrame* msg)
        {
          log(*msg);
        }

        void
        consume(const IMC::UamTxStatus* msg)
        {
          log(*msg);

          if (msg->value != UamTxStatus::UTS_IP)
            m_requests.erase(msg->seq);
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
