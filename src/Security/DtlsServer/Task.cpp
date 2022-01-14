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
#include <pthread.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <thread>         
#include <mutex>         

#include <arpa/inet.h>

// mbedtls headers.
#include "mbedtls/build_info.h"
#include "mbedtls/net_sockets.h"
#include "mbedtls/debug.h"
#include "mbedtls/ssl.h"
#include "mbedtls/ssl_cookie.h"
#include "mbedtls/ctr_drbg.h"
#include "mbedtls/error.h"
#include "mbedtls/entropy.h"
#include "mbedtls/timing.h"
// #include "../../library/ssl_misc.h"
#include "certs_lsts.h"

#if defined(MBEDTLS_SSL_CACHE_C)
#include "mbedtls/ssl_cache.h"
#endif

// #define SERVER_ADDR "10.0.6.36"     /* Forces IPv4 */
#define SERVER_ADDR "10.0.10.60"     /* Forces IPv4 */

// Todo: replace with dune debug level
#define DEBUG_LEVEL 0

#define READ_TIMEOUT_MS 10000   /* 10 seconds */


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

      static void my_debug( void *ctx, int level,
                            const char *file, int line,
                            const char *str )
      {
          ((void) level);

          fprintf( (FILE *) ctx, "%s:%04d: %s", file, line, str );
          fflush(  (FILE *) ctx  );
      }

    


    struct Task: public DUNE::Tasks::Task
    {

      int rv;
      int len;
      int nodeState;
      int resetState;
      unsigned int port;
      int setUp = 0;
      //! Task arguments.
      Arguments m_args;
      //! Contact refresh counter.
      Time::Counter<float> m_contacts_refresh_counter;
      //! Message Filter
      MessageFilter m_filter;
      // Internal buffer size.
      static const int c_bfr_size = 16384;
      //! Serialization buffer.
      uint8_t m_bfr[c_bfr_size];
      // Port bind retries.
      // Todo: where to define this instead of hardcoding here?
      static const int c_port_retries = 5;
      // read thread
      pthread_t readThread = NULL;
      // mbedtls 
      mbedtls_net_context listen_fd, client_fd;
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

    std::mutex mtx;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {

        param("Local Port", m_args.port)
        .defaultValue("6002")
        .description("Local UDP port to listen on");

        param("Contact Timeout", m_args.contact_timeout)
        .units(Units::Second)
        .defaultValue("30");

        param("Contact Refresh Periodicity", m_args.contact_refresh_per)
        .units(Units::Second)
        .defaultValue("5.0");

        param("Print Outgoing Messages", m_args.trace_out)
        .defaultValue("false")
        .description("Print outgoing messages (Debug)");

        param("Print Incoming Messages", m_args.trace_in)
        .defaultValue("false")
        .description("Print incoming messages (Debug)");

        param("Static Destinations", m_args.destinations)
        .description("List of <IPv4>:<Port> destinations that will always receive outgoing messages");

        param("Rate Limiters", m_args.rate_lims)
        .description("List of <Message>:<Frequency>");

        param("Filtered Entities", m_args.entities_flt)
        .description("List of <Message>:<Entity>+<Entity> that define the source entities allowed to pass message of a specific message type.");

        param("Announce Service", m_args.announce_service)
        .defaultValue("true")
        .description("Announce this transport to services or not");

        param("Communication Range", m_args.comm_range)
        .defaultValue("0")
        .units(Units::Meter)
        .description("Communication range (0 for infinite)");

        param("Underwater Communications", m_args.underwater_comms)
        .defaultValue("false")
        .description("Allow underwater communication when limited comms are being simulated");

        param("Transports", m_args.messages)
        .defaultValue("")
        .description("List of messages to transport");

        param("Always Transmitted Messages", m_args.allowed_messages)
        .defaultValue("")
        .description("List of messages that will always be transmitted disregarding communication limitations");

        param("Dynamic Nodes", m_args.dynamic_nodes)
        .defaultValue("true")
        .description("Allow use of dynamic nodes.");

        param("Local Messages Only", m_args.only_local)
        .defaultValue("false")
        .description("Only transmit messsages from local system.");

        param("Custom Service Type", m_args.custom_service)
        .defaultValue("")
        .description("Optional custom service type (imc+udp+<Custom Service Type>), empty entry gives default service (imc+udp)");

        bind<IMC::Announce>(this);
      }

      ~Task(void)
      {
        if (m_bfr != NULL)
          delete[] m_bfr;
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        war("hello from onUpdateParameters)");

        if (paramChanged(m_args.contact_refresh_per))
          m_contacts_refresh_counter.setTop(m_args.contact_refresh_per);

        // Process rate limiters.
        m_filter.setupRates(m_args.rate_lims);
        // Process filtered entities.
        m_filter.setupEntities(m_args.entities_flt, this);

      }


      //! Acquire resources.
      // bind to m_args.messages
      // init limitedComms
      // ? connect to static nodes?
      // --x init and dispatch announce service --> will be done in regular UDP task that handles announce messages, not here
      void
      onResourceAcquisition(void)
      {
        war("hello from onResourceAcquisition)");

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

      }

      void
      onResourceInitialization(void)
      {

      }

      void
      onResourceRelease(void)
      {
        if (readThread != NULL)
        {
          pthread_cancel(readThread);
        }
      }

    static void 
    *read(void *taskPointer)
    {
      int len;
      int ret = MBEDTLS_ERR_ERROR_GENERIC_ERROR;
      uint8_t m_node_bfr[c_bfr_size];
      Security::DtlsServer::Task *m_task = (Security::DtlsServer::Task*) taskPointer;
      
      while(1)
      {
        memset( m_node_bfr, 0x0, c_bfr_size );
        len = c_bfr_size - 1;
        do ret = mbedtls_ssl_read(&m_task->ssl_context, m_node_bfr, len );
          while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
                ret == MBEDTLS_ERR_SSL_WANT_WRITE );
        
        if( ret <= 0 )
        {
          switch( ret )
          {
            case MBEDTLS_ERR_SSL_TIMEOUT:
              m_task->err( " timeout\n\n" );
              // m_node.closeNotify();
              break;

            case MBEDTLS_ERR_SSL_PEER_CLOSE_NOTIFY:
              m_task->war( " connection was closed gracefully\n" );
              // stop();
              break;

            default:
              m_task->err( " mbedtls_ssl_read returned -0x%x\n\n", (unsigned int) -ret );
              // goto reset;
              // m_node.reset();
              break;
          }
        }else{

          IMC::Message* msg = IMC::Packet::deserialize(m_node_bfr, ret);

          m_task->dispatch(msg, DF_KEEP_TIME | DF_KEEP_SRC_EID);

          if (m_task->m_args.trace_in)
          msg->toText(std::cerr);
        }
      }
    }


    /**
     * @brief reset the connection by executing the handshake and creating a new session.
     * 
     */
    int
    reset(void)
    {
      resetState = 1;

        while(resetState != 0 )
        {
          mbedtls_net_free( &client_fd ); 
          mbedtls_ssl_session_reset( &ssl_context );
          // /*
          // * 4.2. Wait until a client connects
          // */
          // inf( "  . Waiting for a remote connection from %s ......", char_name );
          fflush( stdout );

            if( ( resetState = mbedtls_net_accept( &listen_fd, &client_fd,
                            client_ip, sizeof( client_ip ), &cliip_len ) ) != 0 )
            {
              err( " failed\n  ! mbedtls_net_accept returned %d\n\n", resetState );
              // exit_task();
              return resetState;
            }

            resetState = mbedtls_net_set_block(&client_fd);
            if (resetState){
              err("could not set socket blocking");
              return resetState;
            }

          /* For HelloVerifyRequest cookies */
          if( ( resetState = mbedtls_ssl_set_client_transport_id( &ssl_context,
                          client_ip, cliip_len ) ) != 0 )
          {
              err( " failed\n  ! "
                      "mbedtls_ssl_set_client_transport_id() returned -0x%x\n\n", (unsigned int) -resetState );
              // exit_task();
              return resetState;
          }

          mbedtls_ssl_set_bio( &ssl_context, &client_fd,
                              mbedtls_net_send, mbedtls_net_recv, mbedtls_net_recv_timeout );

          debug( " Set bio ok\n" );

          /*
          * 5. Handshake
          */
          inf( "  . Performing the DTLS handshake..." );
          fflush( stdout );

          mtx.lock();

          do resetState = mbedtls_ssl_handshake( &ssl_context );
          while( resetState == MBEDTLS_ERR_SSL_WANT_READ ||
                resetState == MBEDTLS_ERR_SSL_WANT_WRITE );

          mtx.unlock();


          if( resetState == MBEDTLS_ERR_SSL_HELLO_VERIFY_REQUIRED )
          {
              inf( " hello verification requested\n" );
              // todo: dont use goto
              // goto reset;
              // return;
          }
          else if( resetState != 0 )
          {
              err( " failed\n  ! mbedtls_ssl_handshake returned -0x%x\n\n", (unsigned int) -resetState );
              // reset_mbedtls();
              return resetState;
          }else if(resetState == 0)
          {
            inf( " HANDSHAKE OK\n" );
             return resetState;
          }

          
        } 
    }


      /**
       * @brief Read IMC Announce message and verify if the source is already in the Node list.
       * If yes, just skip this step. 
       * If not, add the node to the nodeTable by creating a new socket and executing the handshake.
       * Start Listener for this socket
       * this also includes dispatching a DtlsMessage to the client to tell it where to connect to. ip and port.
       * 
       * @param msg IMC Announce message with source IP.
       */
      void
      consume(const IMC::Announce* msg)
      {
        // war("hello from consume(IMC Announce)");

        //todo: add depending on active list
        if (0 == strcmp(msg->sys_name.c_str(), "ccu-lea-6-36") && setUp == 0)
        {
          setUp = 1;

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
            inf( "  . Seeding the random number generator..." );
            fflush( stdout );

            if( ( nodeState = mbedtls_ctr_drbg_seed( &ctr_drbg, mbedtls_entropy_func, &entropy,
                                      (const unsigned char *) pers,
                                      strlen( pers ) ) ) != 0 )
            {
              err( " failed\n  ! mbedtls_ctr_drbg_seed returned %d\n", nodeState );
              // freeNode();
              return;
            }

            inf( " ok\n" );


            // 2. load server certificates and keys
            inf( "\n  . Loading the server cert. and key..." );
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
                err( " failed\n  !  mbedtls_x509_crt_parse returned %d\n\n", nodeState );
                // freeNode();
                return;
            }

            nodeState = mbedtls_x509_crt_parse( &cacert, (const unsigned char *) lsts_ca_chain,
                                  lsts_ca_chain_len );
            if( nodeState != 0 )
            {
                err( " failed\n  !  mbedtls_x509_crt_parse returned %d\n\n", nodeState );
                // freeNode();
                return;
            }

            nodeState =  mbedtls_pk_parse_key( &pkey, (const unsigned char *) lsts_server_private_key,
                                lsts_server_private_key_len, NULL, 0, mbedtls_ctr_drbg_random, &ctr_drbg );
            if( nodeState != 0 )
            {
                err( " failed\n  !  mbedtls_pk_parse_key returned %d\n\n", nodeState );
                // freeNode();
                return;
            }

            inf( " ok\n" );

            // Find a free port.
            unsigned portLimit = m_args.port + c_port_retries;
            while (m_args.port != portLimit)
            {
              std::string s = std::to_string(m_args.port);
              char const *charPort = s.c_str();

              inf( "  Try to bind on udp/*/%s:%s", SERVER_ADDR, charPort);
              fflush( stdout );

              

              if( ( nodeState = mbedtls_net_bind( &listen_fd, SERVER_ADDR, charPort, MBEDTLS_NET_PROTO_UDP ) ) != 0 )
              {
                  war( " failed\n  ! mbedtls_net_bind returned %d\n\n", nodeState );
                  ++m_args.port;
              }else
              {
                inf( " listening on %s:%s\n", SERVER_ADDR, charPort );

                // Search for IMC + UDP services.
                std::vector<std::string> list;
                String::split(msg->services, ";", list);

                for (unsigned i = 0; i < list.size(); ++i)
                {
                  if (list[i].compare(0, 10, "imc+udp://", 10) != 0)
                    continue;

                  unsigned peerPort = 0;
                  char address[128] = {0};

                  // if (std::sscanf(list[i].c_str(), "%*[^:]://%127[^:]:%u", address, &peerPort) == 2)
                  // {
                  //   m_addrs.insert(std::pair<Address, unsigned>(address, peerPort));
                  // }
                }

              // Initialize and dispatch AnnounceService with DTLS addr:port
              std::vector<Interface> vector = Interface::get();
              for (unsigned i = 0; i < vector.size(); ++i)
              {
                std::stringstream os;
                std::string service = "dtls";

                os << service << "://" << SERVER_ADDR << ":" << charPort
                  << "/";

                IMC::AnnounceService announce;
                announce.service = os.str();

                announce.service_type = IMC::AnnounceService::SRV_TYPE_EXTERNAL;

                dispatch(announce);
              }

                break;
              }            
            }

            /*
            * 4.1.  Setup stuff
            */
            inf("  . Setting up the DTLS data..." );
            fflush( stdout );

            if( ( nodeState = mbedtls_ssl_config_defaults( &conf,
                            MBEDTLS_SSL_IS_SERVER,
                            MBEDTLS_SSL_TRANSPORT_DATAGRAM,
                            MBEDTLS_SSL_PRESET_DEFAULT ) ) != 0 )
            {
                err( " failed\n  ! mbedtls_ssl_config_defaults returned %d\n\n", nodeState );
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
                err( " failed\n  ! mbedtls_ssl_conf_own_cert returned %d\n\n", nodeState );
                // freeNode();
                return;
            }

            if( ( nodeState = mbedtls_ssl_cookie_setup( &cookie_ctx,
                                          mbedtls_ctr_drbg_random, &ctr_drbg ) ) != 0 )
            {
                err( " failed\n  ! mbedtls_ssl_cookie_setup returned %d\n\n", nodeState );
                // freeNode();
                return;
            }

            mbedtls_ssl_conf_dtls_cookies( &conf, mbedtls_ssl_cookie_write, mbedtls_ssl_cookie_check,
                                      &cookie_ctx );

            if( ( nodeState = mbedtls_ssl_setup( &ssl_context, &conf ) ) != 0 )
            {
                err( " failed\n  ! mbedtls_ssl_setup returned %d\n\n", nodeState );
                // freeNode();
                return;
            }

            mbedtls_ssl_set_timer_cb( &ssl_context, &timer, mbedtls_timing_set_delay,
                                                    mbedtls_timing_get_delay );

            inf(" ok\n" );

            //-------------------------------------------------------------------------------------------------------------------------

        #ifdef MBEDTLS_ERROR_C
            if( nodeState != 0 )
            {
                char error_buf[100];
                mbedtls_strerror( nodeState, error_buf, 100 );
                err("Last error was: %d - %s\n\n", nodeState, error_buf );
            }
        #endif

            nodeState = reset();

            if(nodeState == 0){

              nodeState = pthread_create(&readThread, NULL, Security::DtlsServer::Task::read, this);
              bind(this, m_args.messages);
            }

              
              
            }
        
        

      }

      void
      consume(const IMC::Message* msg)
      {
        // war("hello from consume(IMC Message)");
        int ret = MBEDTLS_ERR_ERROR_GENERIC_ERROR;
        if (msg->getSource() != this->getSystemId())
        return;

        if (m_filter.filter(msg))
          return;

        if (m_args.trace_out)
          msg->toText(std::cerr);

        rv = IMC::Packet::serialize(msg, m_bfr, c_bfr_size);

        if (ssl_context.private_session_out != 0)
        {  
          fflush( stdout );

          do ret = mbedtls_ssl_write( &ssl_context, m_bfr, rv);
          while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
                ret == MBEDTLS_ERR_SSL_WANT_WRITE );

          if( ret < 0 )
          {
              err(" failed\n  ! mbedtls_ssl_write returned -0x%x\n\n", (unsigned int) -ret );
              // exit_task();
          }
        } 
        memset(m_bfr, 0x00, c_bfr_size);
      }


      //! Main loop.
      void
      onMain(void)
      {

        war("hello from onMain()");

        while (!stopping())
        {
           waitForMessages(1.0);
          ;
        }
      }
    };
  }
}

DUNE_TASK
