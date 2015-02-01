//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <stdexcept>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "MessageMonitor.hpp"
#include "RequestHandler.hpp"
#include "Server.hpp"

namespace Transports
{
  //! %HTTP server.
  //!
  //! @author Ricardo Martins
  namespace HTTP
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Start port.
      unsigned port;
      //! Number of worker threads.
      unsigned threads;
      //! List of messages to transport.
      std::vector<std::string> messages;
    };

    //! Buffer length.
    static const unsigned c_buffer_len = 4096;
    //! Maximum number of ports to try before giving up.
    static const int c_max_port_tries = 10;

    struct Task: public Tasks::Task, public RequestHandler
    {
      //! HTTP server.
      Server* m_server;
      //! Configuration directory.
      std::string m_cfg_dir;
      //! Agent name.
      std::string m_agent;
      //! Message Monitor.
      MessageMonitor m_msg_mon;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        RequestHandler(),
        m_server(NULL),
        m_msg_mon(getSystemName(), ctx.uid)
      {
        // Define configuration parameters.
        param("Port", m_args.port)
        .defaultValue("8080")
        .description("TCP port to listen on");

        param("Threads", m_args.threads)
        .defaultValue("5")
        .description("Number of worker threads");

        param("Transports", m_args.messages)
        .defaultValue("")
        .description("List of messages to transport");

        m_cfg_dir = ctx.dir_cfg.str();
        m_agent = getSystemName();
      }

      void
      onResourceAcquisition(void)
      {
        uint16_t last_port = m_args.port + c_max_port_tries;

        for (uint16_t port = m_args.port; port < last_port; ++port)
        {
          try
          {
            inf(DTR("listening on %s:%u"), Address(Address::Any).c_str(), port);
            m_server = new Server(port, m_args.threads, *this);

            // Initialize and dispatch AnnounceService.
            std::vector<Interface> itfs = Interface::get();
            for (unsigned i = 0; i < itfs.size(); ++i)
            {
              std::stringstream os;
              os << "http://" << itfs[i].address().str() << ":" << port << "/dune";

              IMC::AnnounceService announce;
              announce.service = os.str();

              if (itfs[i].address().isLoopback())
                announce.service_type = IMC::AnnounceService::SRV_TYPE_LOCAL;
              else
                announce.service_type = IMC::AnnounceService::SRV_TYPE_EXTERNAL;

              dispatch(announce);
            }
            return;
          }
          catch (std::runtime_error& e)
          {
            war("%s", e.what());
          }
        }

        throw std::runtime_error(DTR("failed to find one available port"));
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_server);
      }

      void
      onEntityResolution(void)
      {
        m_msg_mon.setEntities(m_ctx.entities.entries());
      }

      void
      onUpdateParameters(void)
      {
        bind(this, m_args.messages);
      }

      void
      consume(const IMC::Message* msg)
      {
        if (msg->getSource() == getSystemId())
          m_msg_mon.updateMessage(msg);
      }

      static bool
      isSpecialURI(const char* uri)
      {
        return (std::strncmp(uri, "/dune/", 5) == 0);
      }

      static bool
      matchURL(const char* url, const char* str, bool fragment = false)
      {
        if (fragment)
        {
          int size = std::strlen(str);
          return (std::strncmp(url, str, size) == 0);
        }

        return (std::strcmp(url, str) == 0);
      }

      void
      handleGET(TCPSocket* sock, TupleList& headers, const char* uri)
      {
        debug("GET request: %s", uri);

        if (isSpecialURI(uri))
        {
          if (matchURL(uri, "/dune/time/set", true))
            setTime(sock, headers, uri);
          else if (matchURL(uri, "/dune/version.js"))
            sendVersionJSON(sock, headers, uri);
          else if (matchURL(uri, "/dune/agent.js"))
            sendAgentJSON(sock, headers, uri);
          else if (matchURL(uri, "/dune/state/messages.js"))
            showMessages(sock, headers, uri);
          else if (matchURL(uri, "/dune/power/channel/", true))
            handlePowerChannel(sock, headers, uri);
          else
            sendResponse404(sock);
        }
        else
        {
          Path path;
          if (std::strcmp("/", uri) == 0)
            path = m_ctx.dir_www / "index.html";
          else
            path = m_ctx.dir_www / uri;

          sendStaticFile(sock, headers, path);
        }
      }

      void
      handlePOST(TCPSocket* sock, TupleList& headers, const char* uri)
      {
        debug("POST request: %s", uri);

        if (isSpecialURI(uri))
        {
          if (matchURL(uri, "/dune/messages/imc/", true))
            getMessage(sock, headers, uri);
          else
            sendResponse403(sock);
        }
        else
        {
          sendResponse403(sock);
        }
      }

      void
      handlePUT(TCPSocket* sock, TupleList& headers, const char* uri)
      {
        debug("PUT request: %s", uri);

        (void)headers;

        if (isSpecialURI(uri))
        {
          sendResponse403(sock);
        }
        else
        {
          sendResponse403(sock);
        }
      }

      void
      sendStaticFile(TCPSocket* sock, TupleList& headers, const Path& file)
      {
        int64_t beg = -1;
        int64_t end = -1;

        std::string range = headers.get("range");
        if (range.compare(0, 6, "bytes=") == 0)
        {
          std::vector<std::string> parts;
          String::split(range.substr(6), "-", parts);

          std::istringstream p0(parts[0]);
          p0 >> beg;

          std::istringstream p1(parts[1]);
          p1 >> end;
        }

        RequestHandler::HeaderFieldsMap hdr;
        std::string ext = file.extension();
        if (ext == "html")
          hdr["Content-Type"] = "text/html";
        else if (ext == "css")
          hdr["Content-Type"] = "text/css";
        else if (ext == "js")
          hdr["Content-Type"] = "text/javascript";

        sendFile(sock, file.str(), hdr, beg, end);
      }

      void
      getMessage(TCPSocket* sock, TupleList& headers, const char* uri)
      {
        (void)uri;

        unsigned int size = headers.get("content-length", 0);
        char* bfr = new char[size];
        sock->read(bfr, size);
        IMC::Message* msg = IMC::Packet::deserialize((uint8_t*)bfr, size);
        dispatch(msg, DF_KEEP_TIME);
        std::ostringstream ss;
        msg->toText(ss);
        sendData(sock, ss.str());
      }

      void
      setTime(TCPSocket* sock, TupleList& headers, const char* uri)
      {
        (void)headers;

        std::string lname = String::getRemaining("/dune/time/set/", uri);
        std::istringstream ss(lname);

        double secs = 0;
        ss >> secs;
        if (ss.fail())
        {
          sendResponse500(sock);
          return;
        }

        sendResponse200(sock);
        Clock::set(secs);
      }

      void
      showMessages(TCPSocket* sock, TupleList& headers, const char* uri)
      {
        (void)headers;
        (void)uri;

        RequestHandler::HeaderFieldsMap hdr;
        hdr["Content-Type"] = "text/javascript";
        hdr["Content-Encoding"] = "gzip";

        ByteBuffer* bfr = m_msg_mon.messagesJSON();
        sendData(sock, bfr->getBufferSigned(), bfr->getSize(), &hdr);
      }

      void
      sendVersionJSON(TCPSocket* sock, TupleList& headers, const char* uri)
      {
        (void)headers;
        (void)uri;

        std::ostringstream os;
        os << "var systemVersion = '" << getFullVersion() << " - " << getCompileDate() << "';";
        RequestHandler::HeaderFieldsMap hdr;
        hdr["Content-Type"] = "text/javascript";
        sendData(sock, os.str(), &hdr);
      }

      void
      sendAgentJSON(TCPSocket* sock, TupleList& headers, const char* uri)
      {
        (void)headers;
        (void)uri;

        std::ostringstream os;
        os << "var systemName = '" << m_agent << "';";
        RequestHandler::HeaderFieldsMap hdr;
        hdr["Content-Type"] = "text/javascript";
        sendData(sock, os.str(), &hdr);
      }

      void
      handlePowerChannel(TCPSocket* sock, TupleList& headers, const char* uri)
      {
        (void)headers;

        std::string prefix = String::getRemaining("/dune/power/channel/", uri);
        std::vector<std::string> parts;
        String::split(prefix, "/", parts);

        if (parts.size() != 2 && parts.size() != 5)
        {
          sendResponse500(sock);
          return;
        }

        double sched_time = 0;
        if (parts.size() == 5)
        {
          unsigned t = 0;
          if (!castLexical(parts[2], t))
          {
            sendResponse500(sock);
            return;
          }
          else
            sched_time += t * 3600;

          if (!castLexical(parts[3], t))
          {
            sendResponse500(sock);
            return;
          }
          else
            sched_time += t * 60;

          if (!castLexical(parts[4], t))
          {
            sendResponse500(sock);
            return;
          }
          else
            sched_time += t;
        }

        IMC::PowerChannelControl pcc;
        pcc.name = parts[1];

        if (parts[0] == "on")
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        else if (parts[0] == "off")
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        else if (parts[0] == "save")
          pcc.op = IMC::PowerChannelControl::PCC_OP_SAVE;
        else if (parts[0] == "sched_on")
        {
          pcc.op = IMC::PowerChannelControl::PCC_OP_SCHED_ON;
          pcc.sched_time = sched_time;
        }
        else if (parts[0] == "sched_off")
        {
          pcc.op = IMC::PowerChannelControl::PCC_OP_SCHED_OFF;
          pcc.sched_time = sched_time;
        }

        sendResponse200(sock);
        dispatch(pcc);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_server->poll(1.0);
          consumeMessages();
        }
      }
    };
  }
}

DUNE_TASK
