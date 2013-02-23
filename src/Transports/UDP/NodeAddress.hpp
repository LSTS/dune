//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef TRANSPORTS_UDP_NODE_ADDRESS_HPP_INCLUDED_
#define TRANSPORTS_UDP_NODE_ADDRESS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace UDP
  {
    using DUNE_NAMESPACES;

    class NodeAddress
    {
    public:
      NodeAddress(const Address& addr, unsigned port):
        m_addr(addr),
        m_port(port)
      { }

      NodeAddress(const std::string& addr_port)
      {
        char addr[128];

        if (std::sscanf(addr_port.c_str(), "%127[^:]:%u", addr, &m_port) == 2)
        {
          m_addr = addr;
        }
        else
        {
          throw std::runtime_error(String::str("invalid address: '%s'", addr_port.c_str()));
        }
      }

      const Address&
      getAddress(void) const
      {
        return m_addr;
      }

      unsigned
      getPort(void) const
      {
        return m_port;
      }

      bool
      operator<(const NodeAddress& other) const
      {
        return (m_addr < other.m_addr) && (m_port < other.m_port);
      }

    private:
      Address m_addr;
      unsigned m_port;
    };
  }
}

#endif
