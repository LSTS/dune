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
#include "mbedtls/net_sockets.h"
#include "mbedtls/debug.h"
#include "mbedtls/ssl.h"
#include "mbedtls/entropy.h"
#include "mbedtls/ctr_drbg.h"
#include "mbedtls/error.h"
#include "mbedtls/timing.h"
#include "certs_lsts.h"


#define FORCE_IPV4

/* this name needs to match the Common Name in the server certificate*/
#define SERVER_NAME "server"

#define MESSAGE     "Echo this"

#define READ_TIMEOUT_MS 1000
#define MAX_RETRY       5

#define DEBUG_LEVEL 0

namespace Security
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author lea
  namespace DtlsClient
  {
    using DUNE_NAMESPACES;

    static void my_debug( void *ctx, int level,
                          const char *file, int line,
                          const char *str )
    {
        ((void) level);

        fprintf( (FILE *) ctx, "%s:%04d: %s", file, line, str );
        fflush(  (FILE *) ctx  );
    }

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

        int ret;
        mbedtls_net_context server_fd;
        uint32_t flags;
        unsigned char buf[1024];
        const char *pers = "dtls_client";
        int retry_left = MAX_RETRY;
        uint16_t bfr_size = 1024;
        uint8_t m_bfr[1024];
        //replace handshakeOk with activelist and make send function part of node
        uint8_t handshakeOk = 0;

        mbedtls_entropy_context entropy;
        mbedtls_ctr_drbg_context ctr_drbg;
        mbedtls_ssl_context ssl;
        mbedtls_ssl_config conf;
        mbedtls_x509_crt cacert;
        mbedtls_timing_delay_context timer;
        mbedtls_x509_crt clicert;
        mbedtls_pk_context pkey;

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

        /*
        * 0. Initialize the RNG and the session data
        */
        mbedtls_net_init( &server_fd );
        mbedtls_ssl_init( &ssl );
        mbedtls_ssl_config_init( &conf );
        mbedtls_x509_crt_init( &cacert );
        mbedtls_ctr_drbg_init( &ctr_drbg );
        mbedtls_x509_crt_init( &clicert );
        mbedtls_pk_init( &pkey );

        // bind<IMC::Temperature>(this);
        bind<IMC::Announce>(this);
        // bind<IMC::Message>(this);

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

        // bind(this, m_args.messages);

        inf( "\n  . Seeding the random number generator..." );
        fflush( stdout );

        mbedtls_entropy_init( &entropy );
        if( ( ret = mbedtls_ctr_drbg_seed( &ctr_drbg, mbedtls_entropy_func, &entropy,
                                  (const unsigned char *) pers,
                                  strlen( pers ) ) ) != 0 )
        {
            err(" failed\n  ! mbedtls_ctr_drbg_seed returned %d\n", ret );
            exit_task();
            return;
        }

        inf( " ok\n" );

        /*
        * 0. Load certificates
        */
        inf( "  . Loading the CA root certificate ..." );
        fflush( stdout );

        ret = mbedtls_x509_crt_parse( &clicert, (const unsigned char *) lsts_client_certificate,
                              lsts_client_certificate_len );
        if( ret < 0 )
        {
            err( " failed\n  !  mbedtls_x509_crt_parse returned -0x%x\n\n", (unsigned int) -ret );
            exit_task();
            return;
        }

        ret = mbedtls_x509_crt_parse( &clicert, (const unsigned char *) lsts_ca_chain,
                              lsts_ca_chain_len );
        if( ret < 0 )
        {
            err( " failed\n  !  mbedtls_x509_crt_parse returned -0x%x\n\n", (unsigned int) -ret );
            exit_task();
            return;
        }

        ret =  mbedtls_pk_parse_key( &pkey, (const unsigned char *) lsts_client_private_key,
                            lsts_client_private_key_len, NULL, 0, mbedtls_ctr_drbg_random, &ctr_drbg );
        if( ret != 0 )
        {
            err( " failed\n  !  mbedtls_pk_parse_key returned %d\n\n", ret );
            exit_task();
            return;
        }

        ret = mbedtls_ssl_conf_own_cert( &conf, &clicert, &pkey );
        if( ret < 0 )
        {
            err( " failed\n  !  mbedtls_x509_crt_parse returned -0x%x\n\n", (unsigned int) -ret );
            exit_task();
            return;
        }

        inf( " ok\n" );



       
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        war("hello from onResourceRelease");
      }

      void
      close_notify(void)
      {
        inf( "  . Closing the connection..." );

        /* No error checking, the connection might be closed already */
        do ret = mbedtls_ssl_close_notify( &ssl );
        while( ret == MBEDTLS_ERR_SSL_WANT_WRITE );
        ret = 0;

        inf( " done\n" );

        /*
        * 9. Final clean-ups and exit
        */
      }

      void
      exit_task(void)
      {
        #ifdef MBEDTLS_ERROR_C
            if( ret != 0 )
            {
                char error_buf[100];
                mbedtls_strerror( ret, error_buf, 100 );
                inf( "Last error was: %d - %s\n\n", ret, error_buf );
            }
        #endif

            mbedtls_net_free( &server_fd );

            mbedtls_x509_crt_free( &cacert );
            mbedtls_ssl_free( &ssl );
            mbedtls_ssl_config_free( &conf );
            mbedtls_ctr_drbg_free( &ctr_drbg );
            mbedtls_entropy_free( &entropy );
            mbedtls_x509_crt_free( &clicert );
            mbedtls_pk_free( &pkey );
      }

      void
      consume(const IMC::Announce* msg)
      {
        war("hello from dtls client consume announce");

        if (NULL == strstr(msg->sys_name.c_str(), "lauv-nemo-1") && NULL == strstr(msg->sys_name.c_str(), "lauv-xplore-3") && NULL == strstr(msg->sys_name.c_str(), "lauv-xplore-2"))
        {
          return;
        }
        
        war("setting up DTLS client %s", (const char *) msg->sys_name.c_str());
        /* get advertised DTLS socket */
        // Search for IMC + UDP services.
        std::vector<std::string> list;
        String::split(msg->services, ";", list);

        if(!handshakeOk){
          
          for (unsigned i = 0; i < list.size(); ++i)
        {
          // if (list[i].compare(0, 10, "dtls://", 10) != 0)
          //   continue;

          unsigned port = 0;
          char address[128] = {0};

          if (std::sscanf(list[i].c_str(), "dtls://%[^:]:%u", address, &port) == 2)
          {

            std::string s = std::to_string(port);

            /*
            * 1. Start the connection
            */

           char const *pchar = s.c_str();  //use char const* as target type

            inf( "Connecting to udp/%s/%s", address, pchar);
            fflush( stdout );

            if( ( ret = mbedtls_net_connect( &server_fd, address,
                                                pchar, MBEDTLS_NET_PROTO_UDP ) ) != 0 )
            {
                err( " failed\n  ! mbedtls_net_connect returned %d\n\n", ret );
                exit_task();
                return;
            }

            /*
              * 2. Setup stuff
              */
            inf( "  . Setting up the DTLS structure..." );
            fflush( stdout );

            if( ( ret = mbedtls_ssl_config_defaults( &conf,
                            MBEDTLS_SSL_IS_CLIENT,
                            MBEDTLS_SSL_TRANSPORT_DATAGRAM,
                            MBEDTLS_SSL_PRESET_DEFAULT ) ) != 0 )
            {
                err(" failed\n  ! mbedtls_ssl_config_defaults returned %d\n\n", ret );
                exit_task();
                return;
            }

            /* OPTIONAL is usually a bad choice for security, but makes interop easier
              * in this simplified example, in which the ca chain is hardcoded.
              * Production code should set a proper ca chain and use REQUIRED. */
            mbedtls_ssl_conf_authmode( &conf, MBEDTLS_SSL_VERIFY_REQUIRED );
            mbedtls_ssl_conf_ca_chain( &conf, clicert.MBEDTLS_PRIVATE(next), NULL );
            mbedtls_ssl_conf_rng( &conf, mbedtls_ctr_drbg_random, &ctr_drbg );
            mbedtls_ssl_conf_dbg( &conf, my_debug, stdout );
            mbedtls_ssl_conf_read_timeout( &conf, READ_TIMEOUT_MS );
            /*disable sending multiple records in one datagram*/
            mbedtls_ssl_set_datagram_packing( &ssl, 0 );

            if( ( ret = mbedtls_ssl_setup( &ssl, &conf ) ) != 0 )
            {
                err(" failed\n  ! mbedtls_ssl_setup returned %d\n\n", ret );
                exit_task();
                return;
            }

            if( ( ret = mbedtls_ssl_set_hostname( &ssl, SERVER_NAME ) ) != 0 )
            {
                err(" failed\n  ! mbedtls_ssl_set_hostname returned %d\n\n", ret );
                exit_task();
                return;
            }

            mbedtls_ssl_set_bio( &ssl, &server_fd,
                                  mbedtls_net_send, mbedtls_net_recv, mbedtls_net_recv_timeout );

            mbedtls_ssl_set_timer_cb( &ssl, &timer, mbedtls_timing_set_delay,
                                                    mbedtls_timing_get_delay );

            inf( " ok\n" );

            /*
            * 4. Handshake
            */
            inf( "  . Performing the DTLS handshake..." );
            fflush( stdout );

            do ret = mbedtls_ssl_handshake( &ssl );
            while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
                  ret == MBEDTLS_ERR_SSL_WANT_WRITE );

            if( ret != 0 )
            {
                err(" failed\n  ! mbedtls_ssl_handshake returned -0x%x\n\n", (unsigned int) -ret );
                exit_task();
                return;
            }

            inf( " ok\n" );

            /*
            * 5. Verify the server certificate
            */
            inf( "  . Verifying peer X.509 certificate..." );

            /* In real life, we would have used MBEDTLS_SSL_VERIFY_REQUIRED so that the
            * handshake would not succeed if the peer's cert is bad.  Even if we used
            * MBEDTLS_SSL_VERIFY_OPTIONAL, we would bail out here if ret != 0 */
            if( ( flags = mbedtls_ssl_get_verify_result( &ssl ) ) != 0 )
            {
              #if !defined(MBEDTLS_X509_REMOVE_INFO)
                      char vrfy_buf[512];
              #endif

                      err( " failed\n" );
                      err("flags = %x", flags);

              #if !defined(MBEDTLS_X509_REMOVE_INFO)
                      mbedtls_x509_crt_verify_info( vrfy_buf, sizeof( vrfy_buf ), "  ! ", flags );

                      inf( "%s\n", vrfy_buf );
              #endif
            }
            else
            {
              inf( " ok\n" );
              // start sending msg
              handshakeOk = 1;
            }
                

          }
            // m_addrs.insert(std::pair<Address, unsigned>(address, port));
        }

        bind(this, m_args.messages);

        }

        

      }

      void
      consume(const IMC::Message* msg)
      {
        if (handshakeOk)
        {

          if (msg->getSource() != this->getSystemId())
          return;

          inf( "  > Write to server:" );
          fflush( stdout );

          //only send messages originated from this system
          uint16_t len = IMC::Packet::serialize(msg, m_bfr, bfr_size);

          // len = bfr_size - 1;

          do ret = mbedtls_ssl_write( &ssl, m_bfr, len );
          while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
                ret == MBEDTLS_ERR_SSL_WANT_WRITE );

          if( ret < 0 )
          {
              err(" failed\n  ! mbedtls_ssl_write returned %d\n\n", ret );
              exit_task();
              return;
          }

          len = ret;
          inf( " %d bytes written\n\n%s%x\n\n", len, &m_bfr, m_bfr );
          msg->toText(std::cerr);
        }

      }

      //! Main loop.
      void
      onMain(void)
      {

        size_t len;

        while (!stopping())
        {
          waitForMessages(1.0);

          /*
          * 7. Read the echo response
          */
          inf( "  < Read from server:" );
          fflush( stdout );

          len = 1023;
          memset( buf, 0, len );

          do ret = mbedtls_ssl_read( &ssl, buf, len );
          while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
                ret == MBEDTLS_ERR_SSL_WANT_WRITE );

          if( ret <= 0 )
          {
              switch( ret )
              {
                  case MBEDTLS_ERR_SSL_TIMEOUT:
                      err( " timeout\n\n" );
                      if( retry_left-- > 0 )
                      break;

                  case MBEDTLS_ERR_SSL_PEER_CLOSE_NOTIFY:
                      err( " connection was closed gracefully\n" );
                      
                      break;

                  default:
                      inf( " mbedtls_ssl_read returned -0x%x\n\n", (unsigned int) -ret );
                      break;
              }
          }else{

          len = ret;
          inf( " %d bytes read\n\n%s\n\n", len, buf );

          }

        }
      }
    };
  }
}

DUNE_TASK