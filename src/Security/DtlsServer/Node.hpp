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

#ifndef TRANSPORTS_DTLS_NODE_HPP_INCLUDED_
#define TRANSPORTS_DTLS_NODE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <cstdio>
#include <map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// local headers
#include "Listener.hpp"

// mbedtls headers.
#include "mbedtls/entropy.h"
#include "mbedtls/build_info.h"
#include "mbedtls/net_sockets.h"
#include "mbedtls/debug.h"
#include "mbedtls/ssl.h"
#include "mbedtls/ssl_cookie.h"
#include "mbedtls/ctr_drbg.h"
#include "mbedtls/error.h"
#include "mbedtls/timing.h"

#if defined(MBEDTLS_SSL_CACHE_C)
#include "mbedtls/ssl_cache.h"
#endif

#define READ_TIMEOUT_MS 10000   /* 10 seconds */

namespace Security
{
  namespace DtlsServer
  {
    using DUNE_NAMESPACES;

    class Listener;

    class Node
    {
    public:
      Node(Security::DtlsServer::Task* task, unsigned int port, const int c_port_retries, const std::string& name, const std::string& services);

      Node(const Node& node);

      //! Get node name.
      //! @return node name.
      const std::string&
      getName(void) const;

      Security::DtlsServer::Task*
      getParentTask(void);

      mbedtls_ssl_context*
      getSslContext(void);

      //! Check if address and port are on this node's
      //! list of services.
      //! @param[in] addr address.
      //! @param[in] port port.
      //! @return true if address:port is part of node list
      //! of services, false otherwise.
      bool
      check(const Address& addr, unsigned port);

      //! Point active address to existing node service.
      //! @param[in] addr node address.
      //! @return true if activation successful, false if
      //! already activated.
      bool
      activate(const Address& addr);

      //! Deactivate destination address from list of services.
      //! @param[in] addr node address.
      //! @return true if deactivation successful, false if already
      //! deactivated.
      bool
      deactivate(const Address& addr);

      //! Send data to node.
      //! @param[in] sock UDP destination socket.
      //! @param[in] data data to be transmitted.
      //! @param[in] data_len length of data to be transmitted.
      void
      send(UDPSocket& sock, const uint8_t* data, unsigned data_len);

    private:
      // Node name.
      std::string m_name;
      // Addresses
      std::map<Address, unsigned> m_addrs;
      // Active address.
      std::map<Address, unsigned>::iterator m_active;
      //! Pointer to task
      Security::DtlsServer::Task* m_task;
      //! Listener thread.
      Listener* m_listener;

      mbedtls_net_context listen_fd, client_fd;
      unsigned char buf[1024];
      const char *pers = "dtls_server";
      unsigned char client_ip[16] = { 0 };
      size_t cliip_len;
      mbedtls_ssl_cookie_ctx cookie_ctx;

      mbedtls_entropy_context entropy;
      mbedtls_ctr_drbg_context ctr_drbg;
      mbedtls_ssl_context ssl;
      mbedtls_ssl_config conf;
      mbedtls_x509_crt srvcert, cacert;
      mbedtls_pk_context pkey;
      mbedtls_timing_delay_context timer;
    #if defined(MBEDTLS_SSL_CACHE_C)
      mbedtls_ssl_cache_context cache;
    #endif
    };
  }
}

#endif
