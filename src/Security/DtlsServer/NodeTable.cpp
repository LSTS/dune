//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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

// ISO C++ 98 headers.
#include <string>
#include <map>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Node.hpp"
#include "LimitedComms.hpp"
#include "NodeTable.hpp"


namespace Security
{
  namespace DtlsServer
  {
    using DUNE_NAMESPACES;

    NodeTable::NodeTable(void):
      m_active_count(0),
      m_lcomms(NULL)
    { }

    void
    NodeTable::addNode(Security::DtlsServer::Task* task, unsigned int port, const int c_port_retries, unsigned id, const std::string& name, const std::string& services)
    {

      if (id == task->getSystemId())
      return;

      //todo: add depending on active list
      if (NULL == strstr(name.c_str(), "lauv-xplore-4"))
      {
        return;
      }
        

      if ( m_table.find(id) == m_table.end()) 
      {
          task->war("setting up dtls server for %s", name.c_str());
          m_table.insert(std::pair<unsigned, Node>(id, Node((Security::DtlsServer::Task*) task, port, c_port_retries, name, services)));
      } else {
        // task->war("node with\nID = %x  and \nname = %s \nalready in active list", id, name.c_str());
        return;
      }    
    }

    bool
    NodeTable::activate(unsigned id, const Address& addr)
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
    NodeTable::deactivate(unsigned id, const Address& addr)
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
    NodeTable::getActiveCount(void)
    {
      return m_active_count;
    }

    void
    NodeTable::send(const unsigned char* data, size_t data_len)
    {
      for (Table::iterator itr = m_table.begin(); itr != m_table.end(); ++itr)
        itr->second.send(data, data_len);
    }

    void
    NodeTable::setLimitedComms(LimitedComms* lcomms)
    {
      m_lcomms = lcomms;
    }
  }
}
