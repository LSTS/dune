//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Node.hpp 12667 2013-01-22 02:44:42Z rasm                         $:*
//***************************************************************************

#ifndef TRANSPORTS_UDP_NODE_HPP_INCLUDED_
#define TRANSPORTS_UDP_NODE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <cstdio>
#include <map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace UDP
  {
    using DUNE_NAMESPACES;

    class Node
    {
    public:
      Node(const std::string& name, const std::string& services):
        m_name(name),
        m_active(m_addrs.end())
      {
        // Search for IMC + UDP services.
        std::vector<std::string> list;
        String::split(services, ";", list);

        for (unsigned i = 0; i < list.size(); ++i)
        {
          if (list[i].compare(0, 10, "imc+udp://", 10) != 0)
            continue;

          unsigned port = 0;
          char address[128] = {0};

          if (std::sscanf(list[i].c_str(), "%*[^:]://%127[^:]:%u", address, &port) == 2)
            m_addrs.insert(std::pair<Address, unsigned>(address, port));
        }
      }

      Node(const Node& node)
      {
        m_name = node.m_name;
        m_addrs = node.m_addrs;

        if (node.m_active == node.m_addrs.end())
          m_active = m_addrs.end();
        else
          m_active = m_addrs.find(node.m_active->first);
      }

      const std::string&
      getName(void) const
      {
        return m_name;
      }

      bool
      activate(const Address& addr)
      {
        if (m_active != m_addrs.end())
        {
          if (m_active->first == addr)
            return false;
        }

        m_active = m_addrs.find(addr);
        return (m_active != m_addrs.end());
      }

      bool
      deactivate(const Address& addr)
      {
        if (m_active == m_addrs.end())
          return false;

        if (m_active->first != addr)
          return false;

        m_active = m_addrs.end();
        return true;
      }

      void
      send(UDPSocket& sock, const uint8_t* data, unsigned data_len)
      {
        if (m_active == m_addrs.end())
          return;

        try
        {
          sock.write((char*)data, data_len, m_active->first, m_active->second);
        }
        catch (...)
        { }
      }

    private:
      // Node name.
      std::string m_name;
      // Addresses
      std::map<Address, unsigned> m_addrs;
      // Active address.
      std::map<Address, unsigned>::iterator m_active;
    };
  }
}

#endif
