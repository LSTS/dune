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
// Author: lea                                                              *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <stdexcept>
#include <set>
#include <algorithm>
#include <cstddef>
#include <string.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// mbedtls headers.
#include "mbedtls/build_info.h"
#include "mbedtls/net_sockets.h"
#include "mbedtls/debug.h"
#include "mbedtls/ssl.h"
#include "mbedtls/ssl_cookie.h"
#include "mbedtls/entropy.h"
#include "mbedtls/ctr_drbg.h"
#include "mbedtls/error.h"
#include "mbedtls/timing.h"
#include "mbedtls/x509.h"
#include "certs_lsts.h"


#if defined(MBEDTLS_PLATFORM_C)
#include "mbedtls/platform.h"
#else
#include <stdio.h>
#include <stdlib.h>
#define mbedtls_printf     printf
#define mbedtls_fprintf    fprintf
#define mbedtls_exit            exit
#define MBEDTLS_EXIT_SUCCESS    EXIT_SUCCESS
#define MBEDTLS_EXIT_FAILURE    EXIT_FAILURE
#endif

#include <unistd.h>

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#if defined(MBEDTLS_SSL_CACHE_C)
#include "mbedtls/ssl_cache.h"
#endif

/* Uncomment out the following line to default to IPv4 and disable IPv6 */
#define FORCE_IPV4

#define SERVER_PORT "6005"
#ifdef FORCE_IPV4
#define BIND_IP     "10.0.6.36"     /* Forces IPv4 */
#else
#define BIND_IP     "::"
#endif

#define READ_TIMEOUT_MS 10000   /* 10 seconds */
#define DEBUG_LEVEL 5

namespace Security
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author lea
  namespace DtlsServer
  {
    using DUNE_NAMESPACES;

    struct Arguments
      {
        // Contact timeout.
        float contact_timeout;
        // Contact refresh periodicity.
        float contact_refresh_per;
        // Local UDP port.
        unsigned port;
        // Static destinations.
        std::vector<std::string> destinations;
        // Trace incoming messages.
        bool trace_in;
        // Trace outgoing messages.
        bool trace_out;
        // Rate limits.
        std::vector<std::string> rate_lims;
        // Filtered entities.
        std::vector<std::string> entities_flt;
        // List of messages to publish.
        std::vector<std::string> messages;
        // Announce this transport to services or not
        bool announce_service;
        // Simulated Communications Range
        float comm_range;
        // Block packets sent/received underwater
        bool underwater_comms;
        // Messages that will always be transmitted, disregarding comm limitations
        std::vector<std::string> allowed_messages;
        // Enable use of dynamic nodes
        bool dynamic_nodes;
        // Only transmit messages from local system
        bool only_local;
        // Optional custom service type
        std::string custom_service;
      };

    struct Task: public DUNE::Tasks::Task
    {

        int ret, len;
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

      //! Task arguments.
        Arguments m_args;


      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {

      #if defined(MBEDTLS_DEBUG_C)
          mbedtls_debug_set_threshold( DEBUG_LEVEL );
      #endif

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

        bind<IMC::Temperature>(this);

        param("Transports", m_args.messages)
        .defaultValue("")
        .description("List of messages to transport");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
          war("hello from onUpdateParameters)");
      }


      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
          war("hello from onResourceAcquisition)");


          /*
          * 1. Seed the RNG
          */
          inf( "  . Seeding the random number generator..." );
          fflush( stdout );

          if( ( ret = mbedtls_ctr_drbg_seed( &ctr_drbg, mbedtls_entropy_func, &entropy,
                                    (const unsigned char *) pers,
                                    strlen( pers ) ) ) != 0 )
          {
              err( " failed\n  ! mbedtls_ctr_drbg_seed returned %d\n", ret );
              exit_task();
              return;
          }

          inf( " ok\n" );

          /*
          * 2. Load the certificates and private EC key
          */
          inf( "\n  . Loading the server cert. and key..." );
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
              err( " failed\n  !  mbedtls_x509_crt_parse returned %d\n\n", ret );
              exit_task();
              return;
          }

          ret = mbedtls_x509_crt_parse( &cacert, (const unsigned char *) lsts_ca_chain,
                                lsts_ca_chain_len );
          if( ret != 0 )
          {
              err( " failed\n  !  mbedtls_x509_crt_parse returned %d\n\n", ret );
              exit_task();
              return;
          }

          ret =  mbedtls_pk_parse_key( &pkey, (const unsigned char *) lsts_server_private_key,
                              lsts_server_private_key_len, NULL, 0, mbedtls_ctr_drbg_random, &ctr_drbg );
          if( ret != 0 )
          {
              err( " failed\n  !  mbedtls_pk_parse_key returned %d\n\n", ret );
              exit_task();
              return;
          }

          inf( " ok\n" );

          /*
          * 3. Setup the "listening" UDP socket
          */
          inf( "  . Bind on udp/*/%s ...", SERVER_PORT );
          fflush( stdout );

          if( ( ret = mbedtls_net_bind( &listen_fd, BIND_IP, SERVER_PORT, MBEDTLS_NET_PROTO_UDP ) ) != 0 )
          {
              err( " failed\n  ! mbedtls_net_bind returned %d\n\n", ret );
              exit_task();
              return;
          }

          inf( " ok\n" );

          /*
          * 4.1.  Setup stuff
          */
          inf( "  . Setting up the DTLS data..." );
          fflush( stdout );

          if( ( ret = mbedtls_ssl_config_defaults( &conf,
                          MBEDTLS_SSL_IS_SERVER,
                          MBEDTLS_SSL_TRANSPORT_DATAGRAM,
                          MBEDTLS_SSL_PRESET_DEFAULT ) ) != 0 )
          {
              err( " failed\n  ! mbedtls_ssl_config_defaults returned %d\n\n", ret );
              exit_task();
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
              err( " failed\n  ! mbedtls_ssl_conf_own_cert returned %d\n\n", ret );
              exit_task();
              return;
          }

          if( ( ret = mbedtls_ssl_cookie_setup( &cookie_ctx,
                                        mbedtls_ctr_drbg_random, &ctr_drbg ) ) != 0 )
          {
              err( " failed\n  ! mbedtls_ssl_cookie_setup returned %d\n\n", ret );
              exit_task();
              return;
          }

          mbedtls_ssl_conf_dtls_cookies( &conf, mbedtls_ssl_cookie_write, mbedtls_ssl_cookie_check,
                                    &cookie_ctx );

          if( ( ret = mbedtls_ssl_setup( &ssl, &conf ) ) != 0 )
          {
              err( " failed\n  ! mbedtls_ssl_setup returned %d\n\n", ret );
              exit_task();
              return;
          }

          mbedtls_ssl_set_timer_cb( &ssl, &timer, mbedtls_timing_set_delay,
                                                  mbedtls_timing_get_delay );

          inf( " ok\n" );

        reset();

          /*
          * 5. Handshake
          */
          inf( "  . Performing the DTLS handshake..." );
          fflush( stdout );

          do ret = mbedtls_ssl_handshake( &ssl );
          while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
                ret == MBEDTLS_ERR_SSL_WANT_WRITE );

          if( ret == MBEDTLS_ERR_SSL_HELLO_VERIFY_REQUIRED )
          {
              inf( " hello verification requested\n" );
              ret = 0;
              reset();
          }
          else if( ret != 0 )
          {
              err( " failed\n  ! mbedtls_ssl_handshake returned -0x%x\n\n", (unsigned int) -ret );
              reset();
          }

          inf( " ok\n" );
      }


      void
      consume(const IMC::Temperature* msg)
      {
        war("hello from consume(IMC Message)");

                  inf( "  < Read from client:" );
          fflush( stdout );

          len = sizeof( buf ) - 1;
          memset( buf, 0, sizeof( buf ) );

          do ret = mbedtls_ssl_read( &ssl, buf, len );
          while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
                ret == MBEDTLS_ERR_SSL_WANT_WRITE );

          if( ret <= 0 )
          {
              switch( ret )
              {
                  case MBEDTLS_ERR_SSL_TIMEOUT:
                      err( " timeout\n\n" );
                      reset();

                  case MBEDTLS_ERR_SSL_PEER_CLOSE_NOTIFY:
                      err( " connection was closed gracefully\n" );
                      ret = 0;
                      close_notify();
                      return;

                  default:
                      err( " mbedtls_ssl_read returned -0x%x\n\n", (unsigned int) -ret );
                      reset();
              }
          }

          len = ret;
          inf( " %d bytes read\n\n%s\n\n", len, buf );

          /*
          * 7. Write the 200 Response
          */
          inf( "  > Write to client:" );
          fflush( stdout );

          do ret = mbedtls_ssl_write( &ssl, buf, len );
          while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
                ret == MBEDTLS_ERR_SSL_WANT_WRITE );

          if( ret < 0 )
          {
              err( " failed\n  ! mbedtls_ssl_write returned %d\n\n", ret );
              exit_task();
              return;
          }

          len = ret;
          inf( " %d bytes written\n\n%s\n\n", len, buf );
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        war("hello from onResourceRelease");

        // close_notify();

        // exit_task();

      }

      void close_notify(void)
      {
          sleep(3);
          inf( "  . Closing the connection..." );

          /* No error checking, the connection might be closed already */
          do ret = mbedtls_ssl_close_notify( &ssl );
          while( ret == MBEDTLS_ERR_SSL_WANT_WRITE );
          ret = 0;

          inf( " done\n" );

          reset();
      }

      void
      exit_task(void)
      {
          #ifdef MBEDTLS_ERROR_C
          if( ret != 0 )
          {
              char error_buf[100];
              mbedtls_strerror( ret, error_buf, 100 );
              err( "Last error was: %d - %s\n\n", ret, error_buf );
          }
      #endif

          mbedtls_net_free( &client_fd );
          mbedtls_net_free( &listen_fd );

          mbedtls_x509_crt_free( &srvcert );
          mbedtls_x509_crt_free( &cacert );
          mbedtls_pk_free( &pkey );
          mbedtls_ssl_free( &ssl );
          mbedtls_ssl_config_free( &conf );
          mbedtls_ssl_cookie_free( &cookie_ctx );
      #if defined(MBEDTLS_SSL_CACHE_C)
          mbedtls_ssl_cache_free( &cache );
      #endif
          mbedtls_ctr_drbg_free( &ctr_drbg );
          mbedtls_entropy_free( &entropy );

              /* Shell can not handle large exit numbers -> 1 for errors */
            if( ret < 0 )
                ret = 1;

            mbedtls_exit( ret ); 
      }

      void
      reset(void)
      {
      #ifdef MBEDTLS_ERROR_C
          if( ret != 0 )
          {
              char error_buf[100];
              mbedtls_strerror( ret, error_buf, 100 );
              err("Last error was: %d - %s\n\n", ret, error_buf );
          }
      #endif

          mbedtls_net_free( &client_fd );

          mbedtls_ssl_session_reset( &ssl );

          /*
          * 4.2. Wait until a client connects
          */
          inf( "  . Waiting for a remote connection ..." );
          fflush( stdout );

          if( ( ret = mbedtls_net_accept( &listen_fd, &client_fd,
                          client_ip, sizeof( client_ip ), &cliip_len ) ) != 0 )
          {
              err( " failed\n  ! mbedtls_net_accept returned %d\n\n", ret );
              exit_task();
              return;
          }

          /* For HelloVerifyRequest cookies */
          if( ( ret = mbedtls_ssl_set_client_transport_id( &ssl,
                          client_ip, cliip_len ) ) != 0 )
          {
              err( " failed\n  ! "
                      "mbedtls_ssl_set_client_transport_id() returned -0x%x\n\n", (unsigned int) -ret );
              exit_task();
              return;
          }

          mbedtls_ssl_set_bio( &ssl, &client_fd,
                              mbedtls_net_send, mbedtls_net_recv, mbedtls_net_recv_timeout );

          inf( " ok\n" );
         }

      //! Main loop.
      void
      onMain(void)
      {

          war("hello from onMain()");

        while (!stopping())
        {
           waitForMessages(1.0);
           Delay::wait(1);
          ;
        }
      }
    };
  }
}

DUNE_TASK
