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

#ifndef TRANSPORTS_UDP_NODE_TABLE_HPP_INCLUDED_
#define TRANSPORTS_UDP_NODE_TABLE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Node.hpp"
#include "LimitedComms.hpp"

namespace Transports
{
  namespace UDP
  {
    using DUNE_NAMESPACES;

    class NodeTable
    {
    public:
      NodeTable(void):
        m_active_count(0),
        m_lcomms(NULL)
      { }

      void
      addNode(unsigned id, const std::string& name, const std::string& services)
      {
        m_table.insert(std::pair<unsigned, Node>(id, Node(name, services)));
      }

      bool
      activate(unsigned id, const Address& addr)
      {
        Table::iterator itr = m_table.find(id);
        if (itr == m_table.end())
          return false;

        if (!itr->second.activate(addr))
          return false;

        ++m_active_count;
        return true;
      }

      bool
      deactivate(unsigned id, const Address& addr)
      {
        Table::iterator itr = m_table.find(id);
        if (itr == m_table.end())
          return false;

        if (!itr->second.deactivate(addr))
          return false;

        --m_active_count;
        return true;
      }

      unsigned
      getActiveCount(void)
      {
        return m_active_count;
      }

      void
      send(UDPSocket& sock, const uint8_t* data, unsigned data_len, unsigned msgid)
      {
        if (m_lcomms != NULL)
        {
          if (m_lcomms->isActive())
          {
            for (Table::iterator itr = m_table.begin(); itr != m_table.end(); ++itr)
            {
              if (m_lcomms->isNodeWithinRange(itr->first, msgid))
                itr->second.send(sock, data, data_len);
            }

            return;
          }
        }

        for (Table::iterator itr = m_table.begin(); itr != m_table.end(); ++itr)
          itr->second.send(sock, data, data_len);
      }

      void
      setLimitedComms(LimitedComms* lcomms)
      {
        m_lcomms = lcomms;
      }

    private:
      typedef std::map<unsigned, Node> Table;
      // Number of active nodes.
      unsigned m_active_count;
      // Node table.
      Table m_table;
      // Limited Comms object
      LimitedComms* m_lcomms;
    };
  }
}

#endif
