//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins (legacy Transports/HTTP)                         *
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
#include "EntitiesMonitor.hpp"
#include "RequestHandler.hpp"
#include "Server.hpp"

#include <nlohmann-json/json.hpp>

namespace UserInterfaces
{
  //! DUNE Webpage.
  //!
  //! @author Bernardo Gabriel
  namespace Webpage
  {
    namespace Core
    {
      using DUNE_NAMESPACES;
      using json = nlohmann::json;

      struct Arguments
      {
        //! Start port.
        unsigned port;
        //! Number of worker threads.
        unsigned threads;
        //! Timeout for HTTP requests.
        unsigned request_timeout;
        //! Entity Label of Fuel Level source.
        std::string fuel_level_elabel;
        //! Fuel Level confidence theshold.
        fp32_t fuel_level_confidence_threshold;
        //! Entity Label of Storage Usage source.
        std::string storage_usage_elabel;
      };

      //! Buffer length.
      static constexpr unsigned c_buffer_len = 4096;
      //! Maximum number of ports to try before giving up.
      static constexpr int c_max_port_tries = 10;
      //! Default section.
      constexpr const char* c_default_section = "Info";

      struct Task: public Tasks::Task, public RequestHandler
      {
        //! HTTP server.
        Server* m_server;
        //! Configuration directory.
        std::string m_cfg_dir;
        //! Agent name.
        std::string m_agent;
        //! Entities Monitor.
        EntitiesMonitor m_entities_mon;
        //! Task arguments.
        Arguments m_args;
        //! HTTP request id.
        uint32_t m_request_id;
        //! Convinience type definition for a tuple for HTTP action request.
        typedef std::tuple<TCPSocket*, Counter<double>> HTTPRequest;
        //! HTTP requests map.
        std::map<unsigned, HTTPRequest> m_http_requests;
        //! Software meta information.
        json m_meta;
        //! Registered sections.
        std::vector<std::string> m_sections;
        //! System type.
        int m_type;
        //! System operation mode.
        int m_op_mode;
        //! Entity Id of Fuel Level source.
        int m_fuel_level_eid;
        //! Fuel Level.
        fp32_t m_fuel_level;
        //! Entity Id of Storage Usage source.
        int m_storage_usage_eid;
        //! Storage Usage.
        fp32_t m_storage_usage;
        //! Convenience type definition for a tuple for cpu usage data <value, timestamp>.
        typedef std::tuple<uint8_t, double> CpuUsageData;
        //! Convenience type definition for a map of cpu usage.
        typedef std::map<unsigned, CpuUsageData> CpuUsageMap;
        //! CPU Usage map.
        CpuUsageMap m_cpu_usage;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          RequestHandler(),
          m_server(NULL),
          m_cfg_dir(ctx.dir_cfg.str()),
          m_agent(getSystemName()),
          m_entities_mon(this),
          m_request_id(0),
          m_type(-1),
          m_op_mode(-1),
          m_fuel_level_eid(AddressResolver::invalid()),
          m_fuel_level(-1.0f),
          m_storage_usage_eid(AddressResolver::invalid())
        {
          // Define configuration parameters.
          param("Port", m_args.port)
          .defaultValue("8080")
          .description("TCP port to listen on");

          param("Threads", m_args.threads)
          .defaultValue("5")
          .description("Number of worker threads");

          param("HTTP Request Timeout", m_args.request_timeout)
          .units(Units::Second)
          .minimumValue("1.0")
          .maximumValue("60.0")
          .defaultValue("30.0")
          .description("Timeout for HTTP requests");

          param("Fuel Level - Entity Label", m_args.fuel_level_elabel)
          .defaultValue("Fuel Level")
          .description("Entity Label of Fuel Level source");

          param("Fuel Level - Confidence Theshold", m_args.fuel_level_confidence_threshold)
          .units(Units::Percentage)
          .minimumValue("0.0")
          .maximumValue("100.0")
          .defaultValue("50.0")
          .description("Minimum confidence value to accept fuel level value");

          param("Storage Usage - Entity Label", m_args.storage_usage_elabel)
          .defaultValue("Daemon")
          .description("Entity Label of Storage usage source");

          // Initialize meta information.
          m_meta["dune_version"] = std::string(getFullVersion()) + " - " + getCompileDate();
          m_meta["dune_uid"] = ctx.uid;
          m_meta["dune_time_start"] = ctx.start_time;
          m_meta["dune_system"] = getSystemName();

          m_sections.push_back(c_default_section);
          
          bind<IMC::Announce>(this);
          bind<IMC::CpuUsage>(this);
          bind<IMC::EntityState>(this);
          bind<IMC::FuelLevel>(this);
          bind<IMC::HTTPAction>(this);
          bind<IMC::StorageUsage>(this);
          bind<IMC::VehicleState>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.fuel_level_elabel))
          {
            try
            {
              m_fuel_level_eid = resolveEntity(m_args.fuel_level_elabel);
            }
            catch(...)
            {
              m_fuel_level_eid = AddressResolver::invalid();
            }
          }

          if (paramChanged(m_args.storage_usage_elabel))
          {
            try
            {
              m_storage_usage_eid = resolveEntity(m_args.storage_usage_elabel);
            }
            catch(...)
            {
              m_storage_usage_eid = AddressResolver::invalid();
            }
          }
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
              war(DTR("%s"), e.what());
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
          m_entities_mon.setEntities(m_ctx.entities.entries());
        }

        void
        consume(const IMC::Announce* msg)
        {
          if (msg->getSource() != getSystemId())
            return;
          
          m_type = msg->sys_type;
        }

        void
        consume(const IMC::CpuUsage* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          m_cpu_usage[msg->getSourceEntity()] = {msg->value, msg->getTimeStamp()};
        }

        void
        consume(const IMC::EntityState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;
          
          try
          {
            m_entities_mon.updateEntityState(msg);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            war(DTR("%s"), e.what());
          }
        }

        void
        consume(const IMC::FuelLevel* msg)
        {
          if (!AddressResolver::isValid(m_fuel_level_eid))
            return;

          if (msg->getSource() != getSystemId())
            return;

          if (msg->getSourceEntity() != m_fuel_level_eid)
            return;
          
          if (msg->confidence >= m_args.fuel_level_confidence_threshold)
            m_fuel_level = msg->value;
        }

        void
        consume(const IMC::HTTPAction* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          if (msg->op == IMC::HTTPAction::OP_REGISTER)
          {
            std::string section(msg->data.begin(), msg->data.end());
            if (std::find(m_sections.begin(), m_sections.end(), section) == m_sections.end())
              m_sections.push_back(section);
            
            return;
          }
          
          if (msg->op != IMC::HTTPAction::OP_REPLY)
            return;

          if (m_http_requests.find(msg->id) == m_http_requests.end())
            return;
          
          TCPSocket* sock;
          Counter<double> wdog;
          std::tie(sock, wdog) = m_http_requests[msg->id];
          if (!wdog.overflow())
          {
            std::string data(msg->data.begin(), msg->data.end());
            sendJSON(sock, data);
          }
          else
            sendResponse404(sock);
          
          Memory::clear(sock);
          m_http_requests.erase(msg->id);
        }

        void
        consume(const IMC::StorageUsage* msg)
        {
          if (!AddressResolver::isValid(m_storage_usage_eid))
            return;

          if (msg->getSource() != getSystemId())
            return;

          if (msg->getSourceEntity() != m_storage_usage_eid)
            return;
          
          m_storage_usage = msg->value;
        }

        void
        consume(const IMC::VehicleState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;
          
          m_op_mode = msg->op_mode;
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

        bool
        handleGET(TCPSocket* sock, TupleList& headers, const char* uri)
        {
          debug("GET request: %s", uri);

          if (isSpecialURI(uri))
          {
            if (std::string(uri).find("/dune/") == std::string::npos)
            {
              sendResponse404(sock);
              return true;
            }
              
            if (matchURL(uri, "/dune/time/set", true))
              setTime(sock, headers, uri);
            else if (matchURL(uri, "/dune/version"))
              sendVersionJSON(sock);
            else if (matchURL(uri, "/dune/agent"))
              sendAgentJSON(sock);
            else if (matchURL(uri, "/dune/sections"))
              sendSectionsJSON(sock);
            else if (matchURL(uri, "/dune/info"))
              sendInfoJSON(sock);
            else if (matchURL(uri, "/dune", true))
            {
              IMC::HTTPAction action;
              action.id = createActionId();
              action.op = IMC::HTTPAction::OP_REQUEST;
              action.data.assign(uri, uri + std::strlen(uri));
              action.data.push_back('\0');
              dispatch(action);
              if (m_http_requests.find(action.id) != m_http_requests.end())
                deleteHTTPRequest(action.id);
              m_http_requests[action.id] = std::make_tuple(sock, Counter<double>(m_args.request_timeout));
              
              return false;
            }
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

          return true;
        }

        bool
        handlePOST(TCPSocket* sock, TupleList& headers, const char* uri)
        {
          debug("POST request: %s", uri);

          if (isSpecialURI(uri))
          {
            if (matchURL(uri, "/dune/messages/imc/", true))
              getMessage(sock, headers, uri);
            else if (matchURL(uri, "/dune", true))
            {
              IMC::HTTPAction action;
              action.id = createActionId();
              action.op = IMC::HTTPAction::OP_REQUEST;
              action.data.assign(uri, uri + std::strlen(uri));
              action.data.push_back('\0');
              dispatch(action);
              sendResponse200(sock);
            }
            else
              sendResponse403(sock);
          }
          else
          {
            sendResponse403(sock);
          }

          return true;
        }

        bool
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

          return true;
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

        DUNE::Utils::ByteBuffer
        getInfoJSON(json data)
        {
          json j;
          j["dune_time_current"] = Clock::getSinceEpoch();
          j["dune_sections"] = m_sections.empty() ? "" : Utils::String::join(m_sections.begin(), m_sections.end(), ",");
          j["dune_fuel_level"] = AddressResolver::isValid(m_fuel_level_eid) ? m_fuel_level : -1.0f;
          j["dune_storage_usage"] = AddressResolver::isValid(m_storage_usage_eid) ? m_storage_usage : -1.0f;
          auto& dune_cpu_usage = j["dune_cpu_usage"];
          for (const auto& it: m_cpu_usage)
          {
            unsigned id = it.first;
            uint8_t value = 0;
            double timestamp = 0.0f;
            std::tie(value, timestamp) = it.second;
            dune_cpu_usage[id]["value"] = value;
            dune_cpu_usage[id]["timestamp"] = timestamp;
          }

          j.merge_patch(m_meta);
          if (data.size() > 0)
            j.merge_patch(data);
          
          GzipCompressor cmp;
          std::string str = j.dump();
          DUNE::Utils::ByteBuffer bfr;
          cmp.compress(bfr, (char*)str.c_str(), (unsigned long)str.size());
          return bfr;
        }

        void
        sendJSON(TCPSocket* sock, std::string bfr)
        {
          RequestHandler::HeaderFieldsMap hdr;
          hdr["Content-Type"] = "application/json";
          sendData(sock, bfr.c_str(), bfr.size(), &hdr);
        }

        void
        sendJSON(TCPSocket* sock, ByteBuffer* bfr, bool compressed = false)
        {
          RequestHandler::HeaderFieldsMap hdr;
          hdr["Content-Type"] = "application/json";
          if (compressed)
            hdr["Content-Encoding"] = "gzip";
          
          sendData(sock, bfr->getBufferSigned(), bfr->getSize(), &hdr);
        }

        void
        sendInfoJSON(TCPSocket* sock)
        {
          json j;

#if defined(DUNE_OS_LINUX)
          std::ifstream file("/proc/uptime");
          double uptime = 0.0;
          if (file.is_open())
          {
            file >> uptime;
            file.close();
            j["cpu_uptime"] = uptime;
          }
#endif
          
          if (m_type != -1)
            j["dune_system_type"] = m_type;
    
          if (m_op_mode != -1)
            j["dune_operation_mode"] = m_op_mode;

          j.merge_patch(m_entities_mon.entitiesJSON());
          DUNE::Utils::ByteBuffer bfr = getInfoJSON(j);
          sendJSON(sock, &bfr, true);
        }

        void
        sendSectionsJSON(TCPSocket* sock)
        {
          if (m_sections.empty())
          {
            sendResponse404(sock);
            return;
          }

          std::ostringstream os;
          os << "{\"sections\": \"" << DUNE::Utils::String::join(m_sections.begin(), m_sections.end(), ",") << "\"}";
          sendJSON(sock, os.str());
        }

        void
        sendVersionJSON(TCPSocket* sock)
        {
          std::ostringstream os;
          os << "{\"systemVersion\": \"" << getFullVersion() << " - " << getCompileDate() << "\"}";
          sendJSON(sock, os.str());
        }

        void
        sendAgentJSON(TCPSocket* sock)
        {
          std::ostringstream os;
          os << "{\"systemName\": \"" << m_agent << "\"}";
          sendJSON(sock, os.str());
        }

        unsigned
        createActionId(void)
        {
          m_request_id = (m_request_id + 1) * (m_request_id != UINT32_MAX);
          return m_request_id;
        }

        void
        deleteHTTPRequest(unsigned id)
        {
          auto request = m_http_requests.find(id);
          if (request != m_http_requests.end())
          {
            TCPSocket* sock;
            Counter<double> wdog;
            std::tie(sock, wdog) = request->second;
            sendResponse404(sock);
            Memory::clear(sock);
            m_http_requests.erase(id);
          }
        }

        void
        checkHTTPRequests(void)
        {
          auto request = m_http_requests.begin();
          while (request != m_http_requests.end())
          {
            TCPSocket* sock;
            Counter<double> wdog;
            std::tie(sock, wdog) = request->second;
            if (wdog.overflow())
            {
              sendResponse404(sock);
              Memory::clear(sock);
              request = m_http_requests.erase(request);
            }
            else
            {
              ++request;
            }
          }
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            m_server->poll(1.0);
            consumeMessages();
            checkHTTPRequests();
          }
        }
      };
    }
  }
}

DUNE_TASK
