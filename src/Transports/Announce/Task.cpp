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
// Author: Paulo Dias                                                       *
//***************************************************************************

// ISO C++ 98 headers
#include <vector>
#include <stdexcept>
#include <set>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Announce
  {
    using DUNE_NAMESPACES;

    struct Destination
    {
      // Destination address.
      Address addr;
      // Destination port.
      unsigned port;
      // True if address is local.
      bool local;
    };

    struct Arguments
    {
      // Delay between announcements.
      double announce_delay;
      // Ports.
      std::vector<unsigned> ports;
      // True if multicast is enabled.
      bool enable_mcast;
      // True of broadcast is enabled.
      bool enable_bcast;
      // True of loopback is enabled.
      bool enable_lback;
      // Multicast address.
      Address addr_mcast;
      // Additional local services.
      std::vector<std::string> adi_services_loc;
      // Additional external services.
      std::vector<std::string> adi_services_ext;
      // System type.
      std::string sys_type;
      // Ignored interfaces.
      std::vector<std::string> ignored_interfaces;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Local advertising buffer.
      uint8_t m_bfr_loc[4096];
      // External advertising buffer.
      uint8_t m_bfr_ext[4096];
      // Last received estimated state.
      IMC::EstimatedState* m_estate;
      // Socket.
      UDPSocket m_sock;
      // List of destinations.
      std::vector<Destination> m_dsts;
      // Task arguments.
      Arguments m_args;
      // Local announce message.
      IMC::Announce m_announce_loc;
      // External announce message.
      IMC::Announce m_announce_ext;
      // Time of last announce.
      double m_last_announce;
      // URIs of local services.
      std::set<std::string> m_uris_loc;
      // URIs of external services.
      std::set<std::string> m_uris_ext;
      // URIs of wildcard IMC services.
      std::set<std::string> m_uris_any;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_estate(0),
        m_last_announce(-1)
      {
        // Define configuration parameters.
        param("Announcement Periodicity", m_args.announce_delay)
        .units(Units::Second)
        .defaultValue("10")
        .description("Periodicity of announcements");

        param("Enable Loopback", m_args.enable_lback)
        .defaultValue("true")
        .description("Enable announcing on loopback interfaces");

        param("Enable Multicast", m_args.enable_mcast)
        .defaultValue("true")
        .description("Enable multicast announcing");

        param("Enable Broadcast", m_args.enable_bcast)
        .defaultValue("true")
        .description("Enable broadcast announcing");

        param("Ports", m_args.ports)
        .defaultValue("30100, 30101, 30102, 30103, 30104")
        .description("List of destination ports");

        param("Multicast Address", m_args.addr_mcast)
        .defaultValue("224.0.75.69")
        .description("Multicast address");

        param("Additional Services - Local", m_args.adi_services_loc)
        .defaultValue("")
        .description("Additional local services");

        param("Additional Services - External", m_args.adi_services_ext)
        .defaultValue("")
        .description("Additional external services");

        param("System Type", m_args.sys_type)
        .defaultValue("")
        .description("System type");

        param("Ignored Interfaces", m_args.ignored_interfaces)
        .defaultValue("eth0:prv")
        .description("List of interfaces whose services will not be announced");

        // Register listeners.
        bind<IMC::EstimatedState>(this);
        bind<IMC::AnnounceService>(this);
      }

      ~Task(void)
      {
        if (m_estate)
          delete m_estate;
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onUpdateParameters(void)
      {
        // Initialize announce messages.
        m_announce_loc.setSource(getSystemId());
        m_announce_loc.setDestination(0);
        m_announce_loc.owner = 0xFFFF;
        m_announce_loc.sys_name = getSystemName();
        m_announce_loc.sys_type = translateSystem(m_args.sys_type);
        m_announce_ext.setSource(m_announce_loc.getSource());
        m_announce_ext.setDestination(m_announce_loc.getDestination());
        m_announce_ext.owner = m_announce_loc.owner;
        m_announce_ext.sys_name = m_announce_loc.sys_name;
        m_announce_ext.sys_type = m_announce_loc.sys_type;

        // This services are used to disambiguate messages that end up looping
        // back to our DUNE instance.
        m_uris_loc.clear();
        m_uris_ext.clear();

        std::ostringstream vers;
        vers << "dune://0.0.0.0/version/" << DUNE_VERSION_STR;
        m_uris_loc.insert(vers.str());
        m_uris_ext.insert(vers.str());

        std::ostringstream uid;
        uid << "dune://0.0.0.0/uid/" << m_ctx.uid;
        m_uris_loc.insert(uid.str());
        m_uris_ext.insert(uid.str());

        std::ostringstream imcvers;
        imcvers << "imc+info://0.0.0.0/version/" << DUNE_IMC_CONST_VERSION;
        m_uris_loc.insert(imcvers.str());
        m_uris_ext.insert(imcvers.str());

        generateServiceStrings();

        // Add additional services defined statically.
        for (unsigned i = 0; i < m_args.adi_services_loc.size(); ++i)
          m_uris_loc.insert(m_args.adi_services_loc[i]);

        for (unsigned i = 0; i < m_args.adi_services_ext.size(); ++i)
          m_uris_ext.insert(m_args.adi_services_ext[i]);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (m_estate)
          *m_estate = *msg;
        else
          m_estate = new IMC::EstimatedState(*msg);
      }

      void
      consume(const IMC::AnnounceService* msg)
      {
        // Check if we should ignore this announcement.
        char domain[128] = {0};
        std::sscanf(msg->service.c_str(), "%*[^/]//%[^:]:", domain);

        std::vector<Interface> interfaces = Interface::get();
        for (unsigned i = 0; i < m_args.ignored_interfaces.size(); ++i)
        {
          for (unsigned j = 0; j < interfaces.size(); ++j)
          {
            if (m_args.ignored_interfaces[i] != interfaces[j].name())
              continue;

            if (interfaces[j].address() == domain)
              return;
          }
        }

        if (msg->service.compare(0, 10, "imc+any://", 10) == 0)
        {
          m_uris_any.insert(msg->service.substr(10));
        }
        else
        {
          if (msg->service_type & IMC::AnnounceService::SRV_TYPE_LOCAL)
            m_uris_loc.insert(msg->service);

          if (msg->service_type & IMC::AnnounceService::SRV_TYPE_EXTERNAL)
            m_uris_ext.insert(msg->service);
        }

        generateServiceStrings();
      }

      void
      generateServiceStrings(void)
      {
        m_announce_loc.services.clear();
        m_announce_ext.services.clear();

        // Local services.
        {
          std::set<std::string>::iterator itr = m_uris_loc.begin();
          for (itr = m_uris_loc.begin(); itr != m_uris_loc.end(); ++itr)
            addLocalURI(*itr);
        }

        // External services.
        {
          std::set<std::string>::iterator itr = m_uris_ext.begin();
          for (itr = m_uris_ext.begin(); itr != m_uris_ext.end(); ++itr)
            addExternalURI(*itr);
        }

        // Wildcard services.
        std::set<std::string>::iterator itr = m_uris_any.begin();
        for (; itr != m_uris_any.end(); ++itr)
        {
          std::set<std::string>::iterator iitr = m_uris_loc.begin();
          for (; iitr != m_uris_loc.end(); ++iitr)
          {
            if (String::startsWith(*iitr, "imc+info"))
              continue;

            if (iitr->compare(0, 4, "imc+", 4) == 0)
              addLocalURI(*iitr + *itr);
          }

          iitr = m_uris_ext.begin();
          for (; iitr != m_uris_ext.end(); ++iitr)
          {
            if (String::startsWith(*iitr, "imc+info"))
              continue;

            if (iitr->compare(0, 4, "imc+", 4) == 0)
              addExternalURI(*iitr + *itr);
          }
        }
      }

      void
      addLocalURI(const std::string& uri)
      {
        if (!m_announce_loc.services.empty())
          m_announce_loc.services.append(";");

        m_announce_loc.services.append(uri);
      }

      void
      addExternalURI(const std::string& uri)
      {
        if (!m_announce_ext.services.empty())
          m_announce_ext.services.append(";");

        m_announce_ext.services.append(uri);
      }

      void
      probeInterfaces(void)
      {
        m_dsts.clear();

        // Setup loopback.
        if (m_args.enable_lback)
        {
          for (unsigned i = 0; i < m_args.ports.size(); ++i)
          {
            Destination dst;
            dst.port = m_args.ports[i];
            dst.addr = "127.0.0.1";
            dst.local = true;
            m_dsts.push_back(dst);
          }
        }

        // Setup multicast.
        if (m_args.enable_mcast)
        {
          m_sock.setMulticastLoop(false);
          for (unsigned i = 0; i < m_args.ports.size(); ++i)
          {
            Destination dst;
            dst.port = m_args.ports[i];
            dst.addr = m_args.addr_mcast;
            dst.local = false;
            m_dsts.push_back(dst);
          }
        }

        // Setup broadcast.
        if (m_args.enable_bcast)
        {
          m_sock.enableBroadcast(true);

          for (unsigned j = 0; j < m_args.ports.size(); ++j)
          {
            Destination dst;
            dst.port = m_args.ports[j];
            dst.addr = "255.255.255.255";
            dst.local = false;
            m_dsts.push_back(dst);
          }

          std::vector<Interface> itfs = Interface::get();
          for (unsigned i = 0; i < itfs.size(); ++i)
          {
            // Discard loopback addresses.
            if (itfs[i].address().isLoopback() || itfs[i].broadcast().isAny())
              continue;

            for (unsigned j = 0; j < m_args.ports.size(); ++j)
            {
              Destination dst;
              dst.port = m_args.ports[j];
              dst.addr = itfs[i].broadcast();
              dst.local = false;
              m_dsts.push_back(dst);
            }
          }
        }
      }

      void
      announce(void)
      {
        if (m_estate)
        {
          float hae;
          Coordinates::toWGS84(*m_estate, m_announce_loc.lat, m_announce_loc.lon, hae);
          m_announce_loc.height = hae;
        }

        m_announce_ext.lat = m_announce_loc.lat;
        m_announce_ext.lon = m_announce_loc.lon;
        m_announce_ext.height = m_announce_loc.height;

        // We do this everytime because the number and configuration of
        // network interfaces might have changed.
        probeInterfaces();

        // Refresh serialized Announce message.
        m_announce_loc.setTimeStamp();
        uint16_t bfr_len_loc = IMC::Packet::serialize(&m_announce_loc, m_bfr_loc, sizeof(m_bfr_loc));
        m_announce_ext.setTimeStamp();
        uint16_t bfr_len_ext = IMC::Packet::serialize(&m_announce_ext, m_bfr_ext, sizeof(m_bfr_ext));

        dispatch(m_announce_loc);
        dispatch(m_announce_ext);

        for (unsigned i = 0; i < m_dsts.size(); ++i)
        {
          try
          {
            if (m_dsts[i].local)
              m_sock.write(m_bfr_loc, bfr_len_loc, m_dsts[i].addr, m_dsts[i].port);
            else
              m_sock.write(m_bfr_ext, bfr_len_ext, m_dsts[i].addr, m_dsts[i].port);
          }
          catch (...)
          { }
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          double now = Clock::get();

          if ((now - m_last_announce) > m_args.announce_delay)
          {
            m_last_announce = now;
            announce();
          }

          Delay::wait(1.0);
        }
      }

      IMC::SystemType
      translateSystem(std::string type)
      {
        String::toLowerCase(type);
        if (type == "uuv")
          return IMC::SYSTEMTYPE_UUV;
        else if (type == "uav")
          return IMC::SYSTEMTYPE_UAV;
        else if (type == "usv")
          return IMC::SYSTEMTYPE_USV;
        else if (type == "ugv")
          return IMC::SYSTEMTYPE_UGV;
        else if (type == "ccu")
          return IMC::SYSTEMTYPE_CCU;
        else if (type == "mobilesensor")
          return IMC::SYSTEMTYPE_MOBILESENSOR;
        else if (type == "staticsensor")
          return IMC::SYSTEMTYPE_STATICSENSOR;
        else if (type == "humansensor")
          return IMC::SYSTEMTYPE_HUMANSENSOR;
        else if (type == "wsn")
          return IMC::SYSTEMTYPE_WSN;
        else
          return IMC::SYSTEMTYPE_UUV;
      }
    };
  }
}

DUNE_TASK
