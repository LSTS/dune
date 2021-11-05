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

#ifndef TRANSPORTS_DTLS_NODE_TABLE_HPP_INCLUDED_
#define TRANSPORTS_DTLS_NODE_TABLE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Node.hpp"
#include "LimitedComms.hpp"

namespace Security
{
  namespace DtlsServer
  {
    using DUNE_NAMESPACES;

    class NodeTable
    {
    public:
      NodeTable(Tasks::Task& task);

      /**
       * @brief Verify if node with ID = id is already in NodeTable, if not, add it to NodeTable, if yes, skip
       * 
       * @param task                      the parent Task
       * @param port                      the starting point of the possible ports to connect to
       * @param c_port_retries            the number of ports to try
       * @param id                        id of the Node that needs to be added to NodeTable
       * @param name                      name of the Node
       * @param services                  Advertised communication services by the Node.
       */
      void
      addNode(unsigned int port, const int c_port_retries, unsigned id, const std::string& name, const std::string& services);

      // bool
      // activate(unsigned id, const Address& addr);

      // bool
      // deactivate(unsigned id, const Address& addr);

      // unsigned
      // getActiveCount(void);

      void
      send(const unsigned char* data, int data_len);

      void
      setLimitedComms(LimitedComms* lcomms);

    // private:
       //! Pointer to task
      Tasks::Task& m_task;
      typedef std::map<unsigned, Node> Table;
      // Number of active nodes.
      unsigned m_active_count;
      // Limited Comms object
      LimitedComms* m_lcomms;
      // Node table.
      Table m_table;
      
      
    };
  }
}

#endif
