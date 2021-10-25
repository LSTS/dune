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
#include <vector>
#include <cstdio>
#include <map>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Utils/String.hpp>

// Local headers
#include "Node.hpp"
#include "Listener.hpp"

// mbedtls headers.
#include "mbedtls/build_info.h"
#include "mbedtls/net_sockets.h"
#include "mbedtls/debug.h"
#include "mbedtls/ssl.h"
#include "mbedtls/ssl_cookie.h"
#include "mbedtls/ctr_drbg.h"
#include "mbedtls/error.h"
#include "mbedtls/timing.h"
#include "certs_lsts.h"

#if defined(MBEDTLS_SSL_CACHE_C)
#include "mbedtls/ssl_cache.h"
#endif

// Todo: replace with dune debug level
#define DEBUG_LEVEL 3

using namespace DUNE::Utils;

namespace Security
{
  namespace DtlsServer
  {
    using DUNE_NAMESPACES;

    // class Listener;

    Node::Node(Security::DtlsServer::Task* task, unsigned int port, const int c_port_retries, const std::string& name, const std::string& services):
      m_name(name),
      m_active(m_addrs.end()),
      m_listener(NULL)
    {

      int ret;

      mbedtls_net_init( &listen_fd );
      mbedtls_net_init( &client_fd );
      mbedtls_ssl_init( &ssl );
      mbedtls_ssl_config_init( &conf );
      mbedtls_ssl_cookie_init( &cookie_ctx );
  #if defined(MBEDTLS_SSL_CACHE_C)
      mbedtls_ssl_cache_init( &cache );
  #endif
      mbedtls_x509_crt_init( &srvcert );
      mbedtls_x509_crt_init( &cacert );
      mbedtls_pk_init( &pkey );
      mbedtls_entropy_init( &entropy );
      mbedtls_ctr_drbg_init( &ctr_drbg );

  #if defined(MBEDTLS_DEBUG_C)
      mbedtls_debug_set_threshold( DEBUG_LEVEL );
  #endif

        // 1. seed rng
        task->inf( "  . Seeding the random number generator..." );
        fflush( stdout );

        if( ( ret = mbedtls_ctr_drbg_seed( &ctr_drbg, mbedtls_entropy_func, &entropy,
                                  (const unsigned char *) pers,
                                  strlen( pers ) ) ) != 0 )
        {
          task->err( " failed\n  ! mbedtls_ctr_drbg_seed returned %d\n", ret );
          // exit_task();
          return;
        }

        task->inf( " ok\n" );


        // 2. load server certificates and keys
        task->inf( "\n  . Loading the server cert. and key..." );
        fflush( stdout );

        /*
        * This demonstration program uses embedded test certificates.
        * Instead, you may want to use mbedtls_x509_crt_parse_file() to read the
        * server and CA certificates, as well as mbedtls_pk_parse_keyfile().
        */
        ret = mbedtls_x509_crt_parse( &srvcert, (const unsigned char *) lsts_server_certificate,
                              lsts_server_certificate_len );
        if( ret != 0 )
        {
            task->err( " failed\n  !  mbedtls_x509_crt_parse returned %d\n\n", ret );
            // exit_task();
            return;
        }

        ret = mbedtls_x509_crt_parse( &cacert, (const unsigned char *) lsts_ca_chain,
                              lsts_ca_chain_len );
        if( ret != 0 )
        {
            task->err( " failed\n  !  mbedtls_x509_crt_parse returned %d\n\n", ret );
            // exit_task();
            return;
        }

        ret =  mbedtls_pk_parse_key( &pkey, (const unsigned char *) lsts_server_private_key,
                            lsts_server_private_key_len, NULL, 0, mbedtls_ctr_drbg_random, &ctr_drbg );
        if( ret != 0 )
        {
            task->err( " failed\n  !  mbedtls_pk_parse_key returned %d\n\n", ret );
            // exit_task();
            return;
        }

        task->inf( " ok\n" );

        // 3. Setup listening socket

        // get available ip and port.
        // Todo: find better way to determin which one is the "main" address
        // this might cause problems on the hardware
        
        struct hostent *host_entry;
        char hostbuffer[256];
        char *IPbuffer;
        
        /* I dont know why this is needed but without it there is a segmentation fault*/
        int hostname;
        // To retrieve hostname
        hostname = gethostname(hostbuffer, sizeof(hostbuffer));
        // checkHostName(hostname);
        /*----------------------------------------------------------------------------*/
      
        // To retrieve host information
        host_entry = gethostbyname(hostbuffer);
        // checkHostEntry(host_entry);
      
        // To convert an Internet network
        // address into ASCII string
        IPbuffer = inet_ntoa(*((struct in_addr*)
                              host_entry->h_addr_list[0]));

        // Find a free port.
        unsigned portLimit = port + c_port_retries;
        while (port != portLimit)
        {
          std::string s = std::to_string(port);
          char const *charPort = s.c_str();

          task->inf( "  Try to bind on udp/*/%s:%s", IPbuffer, charPort);
          fflush( stdout );

          

          if( ( ret = mbedtls_net_bind( &listen_fd, IPbuffer, charPort, MBEDTLS_NET_PROTO_UDP ) ) != 0 )
          {
              task->err( " failed\n  ! mbedtls_net_bind returned %d\n\n", ret );
              ++port;
          }else
          {
            task->inf( " listening on %s:%s\n", IPbuffer, charPort );

            // Search for IMC + UDP services.
            std::vector<std::string> list;
            String::split(services, ";", list);

            for (unsigned i = 0; i < list.size(); ++i)
            {
              if (list[i].compare(0, 10, "imc+udp://", 10) != 0)
                continue;

              unsigned peerPort = 0;
              char address[128] = {0};

              if (std::sscanf(list[i].c_str(), "%*[^:]://%127[^:]:%u", address, &peerPort) == 2)
              {
                m_addrs.insert(std::pair<Address, unsigned>(address, peerPort));
              }
            }

          // Initialize and dispatch AnnounceService with DTLS addr:port
          std::vector<Interface> vector = Interface::get();
          for (unsigned i = 0; i < vector.size(); ++i)
          {
            std::stringstream os;
            std::string service = "dtls";

            os << service << "://" << IPbuffer << ":" << charPort
               << "/";

            IMC::AnnounceService announce;
            announce.service = os.str();

            announce.service_type = IMC::AnnounceService::SRV_TYPE_EXTERNAL;

            task->dispatch(announce);
          }

            break;
          }            
        }

        /*
        * 4.1.  Setup stuff
        */
        task->inf("  . Setting up the DTLS data..." );
        fflush( stdout );

        if( ( ret = mbedtls_ssl_config_defaults( &conf,
                        MBEDTLS_SSL_IS_SERVER,
                        MBEDTLS_SSL_TRANSPORT_DATAGRAM,
                        MBEDTLS_SSL_PRESET_DEFAULT ) ) != 0 )
        {
            task->err( " failed\n  ! mbedtls_ssl_config_defaults returned %d\n\n", ret );
            //goto exit;
            // reset_mbedtls();
            return;
        }

        mbedtls_ssl_conf_authmode( &conf, MBEDTLS_SSL_VERIFY_REQUIRED );
        mbedtls_ssl_conf_rng( &conf, mbedtls_ctr_drbg_random, &ctr_drbg );
        //mbedtls_ssl_conf_dbg( &conf, my_debug, stdout );
        mbedtls_ssl_conf_read_timeout( &conf, READ_TIMEOUT_MS );
        /*disable sending multiple records in one datagram*/
        mbedtls_ssl_set_datagram_packing( &ssl, 0 );

    #if defined(MBEDTLS_SSL_CACHE_C)
        mbedtls_ssl_conf_session_cache( &conf, &cache,
                                      mbedtls_ssl_cache_get,
                                      mbedtls_ssl_cache_set );
    #endif

        mbedtls_ssl_conf_ca_chain( &conf, &cacert, NULL );
      if( ( ret = mbedtls_ssl_conf_own_cert( &conf, &srvcert, &pkey ) ) != 0 )
        {
            task->err( " failed\n  ! mbedtls_ssl_conf_own_cert returned %d\n\n", ret );
            // exit_task();
            //goto exit;
            return;
        }

        if( ( ret = mbedtls_ssl_cookie_setup( &cookie_ctx,
                                      mbedtls_ctr_drbg_random, &ctr_drbg ) ) != 0 )
        {
            task->err( " failed\n  ! mbedtls_ssl_cookie_setup returned %d\n\n", ret );
            // exit_task();
            //goto exit;
            return;
        }

        mbedtls_ssl_conf_dtls_cookies( &conf, mbedtls_ssl_cookie_write, mbedtls_ssl_cookie_check,
                                  &cookie_ctx );

        if( ( ret = mbedtls_ssl_setup( &ssl, &conf ) ) != 0 )
        {
            task->err( " failed\n  ! mbedtls_ssl_setup returned %d\n\n", ret );
            // exit_task();
            //goto exit;
            return;
        }

        mbedtls_ssl_set_timer_cb( &ssl, &timer, mbedtls_timing_set_delay,
                                                mbedtls_timing_get_delay );

        task->inf(" ok\n" );

        //-------------------------------------------------------------------------------------------------------------------------

    #ifdef MBEDTLS_ERROR_C
        if( ret != 0 )
        {
            char error_buf[100];
            mbedtls_strerror( ret, error_buf, 100 );
            task->err("Last error was: %d - %s\n\n", ret, error_buf );
        }
    #endif

reset:

        mbedtls_net_free( &client_fd );        

        mbedtls_ssl_session_reset( &ssl );

        /*
        * 4.2. Wait until a client connects
        */
        task->inf( "  . Waiting for a remote connection ..." );
        fflush( stdout );
        ret = 1;

        while(ret != 0){
          if( ( ret = mbedtls_net_accept( &listen_fd, &client_fd,
                          client_ip, sizeof( client_ip ), &cliip_len ) ) != 0 )
          {
              task->err( " failed\n  ! mbedtls_net_accept returned %d\n\n", ret );
              // exit_task();
              return;
          }
        }

        /* For HelloVerifyRequest cookies */
        if( ( ret = mbedtls_ssl_set_client_transport_id( &ssl,
                        client_ip, cliip_len ) ) != 0 )
        {
            task->err( " failed\n  ! "
                    "mbedtls_ssl_set_client_transport_id() returned -0x%x\n\n", (unsigned int) -ret );
            // exit_task();
            return;
        }

        mbedtls_ssl_set_bio( &ssl, &client_fd,
                            mbedtls_net_send, mbedtls_net_recv, mbedtls_net_recv_timeout );

        task->inf( " ok\n" );

        /*
        * 5. Handshake
        */
        task->inf( "  . Performing the DTLS handshake..." );
        fflush( stdout );

        do ret = mbedtls_ssl_handshake( &ssl );
        while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
              ret == MBEDTLS_ERR_SSL_WANT_WRITE );

        if( ret == MBEDTLS_ERR_SSL_HELLO_VERIFY_REQUIRED )
        {
            task->inf( " hello verification requested\n" );
            // todo: dont use goto
            goto reset;
        }
        else if( ret != 0 )
        {
            task->err( " failed\n  ! mbedtls_ssl_handshake returned -0x%x\n\n", (unsigned int) -ret );
            // reset_mbedtls();
            return;
        }

        task->inf( " ok\n" );


        /* setup listener */
        // Start listener thread.
        // todo: get variables from m_args
        // bool boolean = true;
        m_listener = new Listener(this,  100, false);
        m_listener->start();


    }

    Node::Node(const Node& node)
    {
      m_name = node.m_name;
      m_addrs = node.m_addrs;

      if (node.m_active == node.m_addrs.end())
        m_active = m_addrs.end();
      else
        m_active = m_addrs.find(node.m_active->first);
    }

    //! Get node name.
    //! @return node name.
    const std::string&
    Node::getName(void) const
    {
      return m_name;
    }

    Security::DtlsServer::Task*
    Node::getParentTask(void)
    {
      return m_task;
    }

    mbedtls_ssl_context*
    Node::getSslContext(void)
    {
      return &ssl;
    }

    //! Check if address and port are on this node's
    //! list of services.
    //! @param[in] addr address.
    //! @param[in] port port.
    //! @return true if address:port is part of node list
    //! of services, false otherwise.
    bool
    Node::check(const Address& addr, unsigned port)
    {
      std::map<Address, unsigned>::iterator itr;
      itr = m_addrs.find(addr);

      return (itr != m_addrs.end() && itr->second == port);
    }

    //! Point active address to existing node service.
    //! @param[in] addr node address.
    //! @return true if activation successful, false if
    //! already activated.
    bool
    Node::activate(const Address& addr)
    {
      if (m_active != m_addrs.end())
      {
        if (m_active->first == addr)
          return false;
      }

      m_active = m_addrs.find(addr);
      return (m_active != m_addrs.end());
    }

    //! Deactivate destination address from list of services.
    //! @param[in] addr node address.
    //! @return true if deactivation successful, false if already
    //! deactivated.
    bool
    Node::deactivate(const Address& addr)
    {
      if (m_active == m_addrs.end())
        return false;

      if (m_active->first != addr)
        return false;

      m_active = m_addrs.end();
      return true;
    }

    //! Send data to node.
    //! @param[in] sock UDP destination socket.
    //! @param[in] data data to be transmitted.
    //! @param[in] data_len length of data to be transmitted.
    void
    Node::send(UDPSocket& sock, const uint8_t* data, unsigned data_len)
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
  }
}

