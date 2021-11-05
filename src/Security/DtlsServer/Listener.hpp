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

#ifndef TRANSPORTS_DTLS_LISTENER_HPP_INCLUDED_
#define TRANSPORTS_DTLS_LISTENER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "ContactTable.hpp"
#include "LimitedComms.hpp"
#include "Node.hpp"

//mbedtls headers.
#include "mbedtls/entropy.h"
#include "mbedtls/build_info.h"
#include "mbedtls/net_sockets.h"
#include "mbedtls/debug.h"
#include "mbedtls/ssl.h"
#include "mbedtls/ssl_cookie.h"
#include "mbedtls/ctr_drbg.h"
#include "mbedtls/error.h"
#include "mbedtls/timing.h"

namespace Security
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author lea
  namespace DtlsServer
  {
    using DUNE_NAMESPACES;

    //forward declaration of class Node
    class Node;

    class Listener: public Concurrency::Thread
    {
    public:
      Listener(Tasks::Task& task, Security::DtlsServer::Node& node,
               bool trace);

      void
      getContacts(std::vector<Contact>& list);

      void
      lockContacts(void);

      void
      unlockContacts(void);

    // private:

      //! Pointer to task
      Tasks::Task& m_task;
      // Buffer capacity.
      static const int c_bfr_size = 65535;
      // Poll timeout in milliseconds.
      static const int c_poll_tout = 1000;
      // Parent task.
      Security::DtlsServer::Node& m_node;
      // True to print incoming messages.
      bool m_trace;
      // // Table of contacts.
      // ContactTable m_contacts;
      // // Lock to serialize access to m_contacts.
      // RWLock m_contacts_lock;
      
      // ssl context reference
      // mbedtls_ssl_context* m_ssl;

      int nodeState;

      void
      run(void);
    };
  }
}

#endif
