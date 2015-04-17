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
          sock.write(data, data_len, m_active->first, m_active->second);
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
