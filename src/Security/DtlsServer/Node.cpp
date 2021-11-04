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
// #include "../../library/ssl_misc.h"
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
     int nodeState;
           mbedtls_net_context listen_fd, client_fd;
      unsigned char buf[1024];
      const char *pers = "dtls_server";
      unsigned char client_ip[16] = { 0 };
      size_t cliip_len;
      mbedtls_ssl_cookie_ctx cookie_ctx;

      mbedtls_entropy_context entropy;
      mbedtls_ctr_drbg_context ctr_drbg;
      mbedtls_ssl_context ssl_context;
      mbedtls_ssl_config conf;
      mbedtls_x509_crt srvcert, cacert;
      mbedtls_pk_context pkey;
      mbedtls_timing_delay_context timer;
    #if defined(MBEDTLS_SSL_CACHE_C)
      mbedtls_ssl_cache_context cache;
    #endif


         static void my_debug( void *ctx, int level,
                              const char *file, int line,
                              const char *str )
        {
            ((void) level);

            fprintf( (FILE *) ctx, "%s:%04d: %s", file, line, str );
            fflush(  (FILE *) ctx  );
        }


    Node::Node(Tasks::Task& task, unsigned int port, const int c_port_retries, const std::string& name, const std::string& services):
      m_task(task),
      m_name(name),
      m_active(m_addrs.end()),
      m_listener(NULL)
    {
      


      mbedtls_net_init( &listen_fd );
      mbedtls_net_init( &client_fd );
      mbedtls_ssl_init( &ssl_context );
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
        m_task.inf( "  . Seeding the random number generator..." );
        fflush( stdout );

        if( ( nodeState = mbedtls_ctr_drbg_seed( &ctr_drbg, mbedtls_entropy_func, &entropy,
                                  (const unsigned char *) pers,
                                  strlen( pers ) ) ) != 0 )
        {
          m_task.err( " failed\n  ! mbedtls_ctr_drbg_seed returned %d\n", nodeState );
          freeNode();
          return;
        }

        m_task.inf( " ok\n" );


        // 2. load server certificates and keys
        m_task.inf( "\n  . Loading the server cert. and key..." );
        fflush( stdout );

        /*
        * This demonstration program uses embedded test certificates.
        * Instead, you may want to use mbedtls_x509_crt_parse_file() to read the
        * server and CA certificates, as well as mbedtls_pk_parse_keyfile().
        */
        nodeState = mbedtls_x509_crt_parse( &srvcert, (const unsigned char *) lsts_server_certificate,
                              lsts_server_certificate_len );
        if( nodeState != 0 )
        {
            m_task.err( " failed\n  !  mbedtls_x509_crt_parse returned %d\n\n", nodeState );
            freeNode();
            return;
        }

        nodeState = mbedtls_x509_crt_parse( &cacert, (const unsigned char *) lsts_ca_chain,
                              lsts_ca_chain_len );
        if( nodeState != 0 )
        {
            m_task.err( " failed\n  !  mbedtls_x509_crt_parse returned %d\n\n", nodeState );
            freeNode();
            return;
        }

        nodeState =  mbedtls_pk_parse_key( &pkey, (const unsigned char *) lsts_server_private_key,
                            lsts_server_private_key_len, NULL, 0, mbedtls_ctr_drbg_random, &ctr_drbg );
        if( nodeState != 0 )
        {
            m_task.err( " failed\n  !  mbedtls_pk_parse_key returned %d\n\n", nodeState );
            freeNode();
            return;
        }

        m_task.inf( " ok\n" );

        // 3. Setup listening socket

        // get available ip and port.
        // Todo: find better way to determin which one is the "main" address
        // this might cause problems on the hardware
        
        struct hostent *host_entry;
        char hostname[256];
        char *IPbuffer;
        // To retrieve hostname
        nodeState = gethostname(hostname, sizeof(hostname));     
        host_entry = gethostbyname(hostname);      
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

          m_task.inf( "  Try to bind on udp/*/%s:%s", IPbuffer, charPort);
          fflush( stdout );

          

          if( ( nodeState = mbedtls_net_bind( &listen_fd, IPbuffer, charPort, MBEDTLS_NET_PROTO_UDP ) ) != 0 )
          {
              m_task.war( " failed\n  ! mbedtls_net_bind returned %d\n\n", nodeState );
              ++port;
          }else
          {
            m_task.inf( " listening on %s:%s\n", IPbuffer, charPort );

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

            m_task.dispatch(announce);
          }

            break;
          }            
        }

        /*
        * 4.1.  Setup stuff
        */
        m_task.inf("  . Setting up the DTLS data..." );
        fflush( stdout );

        if( ( nodeState = mbedtls_ssl_config_defaults( &conf,
                        MBEDTLS_SSL_IS_SERVER,
                        MBEDTLS_SSL_TRANSPORT_DATAGRAM,
                        MBEDTLS_SSL_PRESET_DEFAULT ) ) != 0 )
        {
            m_task.err( " failed\n  ! mbedtls_ssl_config_defaults returned %d\n\n", nodeState );
            //goto exit;
            // reset_mbedtls();
            return;
        }

        mbedtls_ssl_conf_authmode( &conf, MBEDTLS_SSL_VERIFY_REQUIRED );
        mbedtls_ssl_conf_rng( &conf, mbedtls_ctr_drbg_random, &ctr_drbg );
        mbedtls_ssl_conf_dbg( &conf, my_debug, stdout );
        mbedtls_ssl_conf_read_timeout( &conf, READ_TIMEOUT_MS );
        /*disable sending multiple records in one datagram*/
        mbedtls_ssl_set_datagram_packing( &ssl_context, 0 );

    #if defined(MBEDTLS_SSL_CACHE_C)
        mbedtls_ssl_conf_session_cache( &conf, &cache,
                                      mbedtls_ssl_cache_get,
                                      mbedtls_ssl_cache_set );
    #endif

        mbedtls_ssl_conf_ca_chain( &conf, &cacert, NULL );
      if( ( nodeState = mbedtls_ssl_conf_own_cert( &conf, &srvcert, &pkey ) ) != 0 )
        {
            m_task.err( " failed\n  ! mbedtls_ssl_conf_own_cert returned %d\n\n", nodeState );
            freeNode();
            return;
        }

        if( ( nodeState = mbedtls_ssl_cookie_setup( &cookie_ctx,
                                      mbedtls_ctr_drbg_random, &ctr_drbg ) ) != 0 )
        {
            m_task.err( " failed\n  ! mbedtls_ssl_cookie_setup returned %d\n\n", nodeState );
            freeNode();
            return;
        }

        mbedtls_ssl_conf_dtls_cookies( &conf, mbedtls_ssl_cookie_write, mbedtls_ssl_cookie_check,
                                  &cookie_ctx );

        if( ( nodeState = mbedtls_ssl_setup( &ssl_context, &conf ) ) != 0 )
        {
            m_task.err( " failed\n  ! mbedtls_ssl_setup returned %d\n\n", nodeState );
            freeNode();
            return;
        }

        mbedtls_ssl_set_timer_cb( &ssl_context, &timer, mbedtls_timing_set_delay,
                                                mbedtls_timing_get_delay );

        m_task.inf(" ok\n" );

        //-------------------------------------------------------------------------------------------------------------------------

    #ifdef MBEDTLS_ERROR_C
        if( nodeState != 0 )
        {
            char error_buf[100];
            mbedtls_strerror( nodeState, error_buf, 100 );
            m_task.err("Last error was: %d - %s\n\n", nodeState, error_buf );
        }
    #endif

        // reset();
        nodeState = 1;
        while(nodeState != 0 )
        {
          mbedtls_net_free( &client_fd );        

          mbedtls_ssl_session_reset( &ssl_context );

          // declaring character array
          char char_name[20];
      
          // copying the contents of the
          // string to char array
          strcpy(char_name, name.c_str());

          /*
          * 4.2. Wait until a client connects
          */
          m_task.inf( "  . Waiting for a remote connection from %s ......", char_name );
          fflush( stdout );
          nodeState = 1;

          while(nodeState != 0)
          {
            if( ( nodeState = mbedtls_net_accept( &listen_fd, &client_fd,
                            client_ip, sizeof( client_ip ), &cliip_len ) ) != 0 )
            {
              m_task.err( " failed\n  ! mbedtls_net_accept returned %d\n\n", nodeState );
              // exit_task();
              return;
            }
          }

          /* For HelloVerifyRequest cookies */
          if( ( nodeState = mbedtls_ssl_set_client_transport_id( &ssl_context,
                          client_ip, cliip_len ) ) != 0 )
          {
              m_task.err( " failed\n  ! "
                      "mbedtls_ssl_set_client_transport_id() returned -0x%x\n\n", (unsigned int) -nodeState );
              // exit_task();
              return;
          }

          mbedtls_ssl_set_bio( &ssl_context, &client_fd,
                              mbedtls_net_send, mbedtls_net_recv, mbedtls_net_recv_timeout );

          m_task.inf( " ok\n" );

          /*
          * 5. Handshake
          */
          m_task.inf( "  . Performing the DTLS handshake..." );
          fflush( stdout );

          do nodeState = mbedtls_ssl_handshake( &ssl_context );
          while( nodeState == MBEDTLS_ERR_SSL_WANT_READ ||
                nodeState == MBEDTLS_ERR_SSL_WANT_WRITE );

          if( nodeState == MBEDTLS_ERR_SSL_HELLO_VERIFY_REQUIRED )
          {
              m_task.inf( " hello verification requested\n" );
              // todo: dont use goto
              // goto reset;
              // return;
          }
          else if( nodeState != 0 )
          {
              m_task.err( " failed\n  ! mbedtls_ssl_handshake returned -0x%x\n\n", (unsigned int) -nodeState );
              // reset_mbedtls();
              // return;
          }else if(nodeState == 0)
          {
            m_task.inf( " ok\n" );
            break;
          }

          
        }

        int ret;
        unsigned char buffer[1024];

        ret = sizeof( buffer ) - 1;
        memset( buffer, 0, sizeof( buffer ) );

         //! I/O Multiplexer.
          Poll m_poll;

        // while(1)
        // {

          Delay::waitUsec(10);

          ret = 1023;
          memset( buffer, 0, 1024);

          do ret = mbedtls_ssl_read( &ssl_context, buffer, ret );
            while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
                  ret == MBEDTLS_ERR_SSL_WANT_WRITE );

        printf( " %d bytes read\n\n%s\n\n",ret, buffer );

        do ret = mbedtls_ssl_write( &ssl_context, buffer, ret);
          while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
                ret == MBEDTLS_ERR_SSL_WANT_WRITE );

          if( ret < 0 )
          {
              printf(" failed\n  ! mbedtls_ssl_write returned -0x%x\n\n", (unsigned int) -ret );
              //todo: what to do when sending message fails?
              // exit_task();  
          }

        // }      

    }


    void
    Node::reset(void)
    {
      nodeState = 1;
        while(nodeState != 0 )
        {
          mbedtls_net_free( &client_fd );        

          mbedtls_ssl_session_reset( &ssl_context );

          // declaring character array
          char char_name[20];
      
          // copying the contents of the
          // string to char array
          strcpy(char_name, m_name.c_str());

          /*
          * 4.2. Wait until a client connects
          */
          m_task.inf( "  . Waiting for a remote connection from %s ......", char_name );
          fflush( stdout );

          // while(nodeState != 0)
          // {
            if( ( nodeState = mbedtls_net_accept( &listen_fd, &client_fd,
                            client_ip, sizeof( client_ip ), &cliip_len ) ) != 0 )
            {
              m_task.err( " failed\n  ! mbedtls_net_accept returned %d\n\n", nodeState );
              // exit_task();
              return;
            }
          // }

          /* For HelloVerifyRequest cookies */
          if( ( nodeState = mbedtls_ssl_set_client_transport_id( &ssl_context,
                          client_ip, cliip_len ) ) != 0 )
          {
              m_task.err( " failed\n  ! "
                      "mbedtls_ssl_set_client_transport_id() returned -0x%x\n\n", (unsigned int) -nodeState );
              // exit_task();
              return;
          }

          mbedtls_ssl_set_bio( &ssl_context, &client_fd,
                              mbedtls_net_send, mbedtls_net_recv, mbedtls_net_recv_timeout );

          m_task.inf( " ok\n" );

          /*
          * 5. Handshake
          */
          m_task.inf( "  . Performing the DTLS handshake..." );
          fflush( stdout );

          do nodeState = mbedtls_ssl_handshake( &ssl_context );
          while( nodeState == MBEDTLS_ERR_SSL_WANT_READ ||
                nodeState == MBEDTLS_ERR_SSL_WANT_WRITE );


          if( nodeState == MBEDTLS_ERR_SSL_HELLO_VERIFY_REQUIRED )
          {
              m_task.inf( " hello verification requested\n" );
              // todo: dont use goto
              // goto reset;
              // return;
          }
          else if( nodeState != 0 )
          {
              m_task.err( " failed\n  ! mbedtls_ssl_handshake returned -0x%x\n\n", (unsigned int) -nodeState );
              // reset_mbedtls();
              // return;
          }else if(nodeState == 0)
          {
            m_task.err( " HANDSHAKE OK\n" );
            break;
          }

          
        }
    }


    void
    Node::freeNode(void)
    {
      // #ifdef MBEDTLS_ERROR_C
      //     if( nodeState != 0 )
      //     {
      //         char error_buf[100];
      //         mbedtls_strerror( nodeState , error_buf, 100 );
      //         m_task.err( "Last error was: %d - %s\n\n", nodeState , error_buf );
      //     }
      // #endif

      //     mbedtls_net_free( &client_fd );
      //     mbedtls_net_free( &listen_fd );

      //     mbedtls_x509_crt_free( &srvcert );
      //     mbedtls_x509_crt_free( &cacert );
      //     mbedtls_pk_free( &pkey );
      //     mbedtls_ssl_free( ssl );
      //     mbedtls_ssl_config_free( &conf );
      //     mbedtls_ssl_cookie_free( &cookie_ctx );
      // #if defined(MBEDTLS_SSL_CACHE_C)
      //     mbedtls_ssl_cache_free( &cache );
      // #endif
      //     mbedtls_ctr_drbg_free( &ctr_drbg );
      //     mbedtls_entropy_free( &entropy );

      //         /* Shell can not handle large exit numbers -> 1 for errors */
      //       if( nodeState < 0 )
      //           nodeState = 1;

      // mbedtls_exit( nodeState ); 
    }

    // Node::Node(const Node& node)
    // {
    //   m_name = node.m_name;
    //   m_addrs = node.m_addrs;

    //   if (node.m_active == node.m_addrs.end())
    //     m_active = m_addrs.end();
    //   else
    //     m_active = m_addrs.find(node.m_active->first);
    // }

    //! Get node name.
    //! @return node name.
    const std::string&
    Node::getName(void) const
    {
      return m_name;
    }

    Security::DtlsServer::Task&
    Node::getParentTask(void)
    {
      return m_task;
    }

    mbedtls_ssl_context*
    Node::getSslContext(void)
    {
      return &ssl_context;
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

    void*
    read(void *ssl)
    {
      int ret;
      unsigned char buffer[1024];

      ret = sizeof( buffer ) - 1;
      memset( buffer, 0, sizeof( buffer ) );

      // while(1){

      //   do ret = mbedtls_ssl_read( (mbedtls_ssl_context *) ssl, buffer, ret );
      //     while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
      //           ret == MBEDTLS_ERR_SSL_WANT_WRITE );

      // printf( " %d bytes read\n\n%s\n\n",ret, buffer );

      // }

      
      // return ret;
    }

    //! Send data to node.
    //! @param[in] sock UDP destination socket.
    //! @param[in] data data to be transmitted.
    //! @param[in] data_len length of data to be transmitted.
    void
    Node::send(const unsigned char* data, int data_len)
    {

      int ret = 0;
      if (ssl_context.private_session_out != 0)
      {
          
          printf("data_len = %d", data_len);
          fflush( stdout );

          
          do ret = mbedtls_ssl_write( &ssl_context, data, data_len);
          while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
                ret == MBEDTLS_ERR_SSL_WANT_WRITE );

          if( ret < 0 )
          {
              // m_task.err(" failed\n  ! mbedtls_ssl_write returned -0x%x\n\n", (unsigned int) -ret );
              //todo: what to do when sending message fails?
              // exit_task();
              return;
          }else if (ret > 0)
          {
            // m_task.inf("successfully wrote %d bytes", ret );
          }


      }

          
    }
  }
}

