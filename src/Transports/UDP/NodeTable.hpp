//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: NodeTable.hpp 12667 2013-01-22 02:44:42Z rasm                    $:*
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
