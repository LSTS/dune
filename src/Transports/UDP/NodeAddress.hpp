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
          throw std::runtime_error(String::str(DTR("invalid address: '%s'"), addr_port.c_str()));
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
        if (m_addr < other.m_addr)
          return true;

        if (m_port < other.m_port)
          return true;

        return false;
      }

    private:
      Address m_addr;
      unsigned m_port;
    };
  }
}

#endif
