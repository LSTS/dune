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

// Local headers.
#include "NodeAddress.hpp"
#include "NodeTable.hpp"
#include "Listener.hpp"
#include "LimitedComms.hpp"

#include <unistd.h>

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <arpa/inet.h>


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

    // Internal buffer size.
    static const int c_bfr_size = 1024;
    // Port bind retries.
    // Todo: where to define this instead of hardcoding here?
    static const int c_port_retries = 5;

    struct Task: public DUNE::Tasks::Task
    {

      //! Serialization buffer.
      uint8_t* m_bfr;
      //! UDP Socket.
      UDPSocket m_sock;
      //! Set of static nodes.
      std::set<NodeAddress> m_static_dsts;
      //! Set of destination nodes.
      NodeTable m_node_table;
      //! Task arguments.
      Arguments m_args;
      //! Simulate communication limitations
      bool m_comm_limitations;
      //! Allow underwater communications when simulating limited comms
      bool m_underwater_comms;
      //! Listener thread.
      Listener* m_listener;
      //! Contact refresh counter.
      Time::Counter<float> m_contacts_refresh_counter;
      //! LimitedComms object
      LimitedComms* m_lcomms;
      //! Message Filter
      MessageFilter m_filter;


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

        // Allocate space for internal buffer.
        m_bfr = new uint8_t[c_bfr_size];

        bind<IMC::Announce>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        war("hello from onUpdateParameters)");

        if (paramChanged(m_args.contact_refresh_per))
          m_contacts_refresh_counter.setTop(m_args.contact_refresh_per);

        // Initialize set of static destinations.
        m_static_dsts.clear();
        for (unsigned int i = 0; i < m_args.destinations.size(); ++i)
          m_static_dsts.insert(NodeAddress(m_args.destinations[i]));

        // Process rate limiters.
        m_filter.setupRates(m_args.rate_lims);
        // Process filtered entities.
        m_filter.setupEntities(m_args.entities_flt, this);

        m_underwater_comms = m_args.underwater_comms;

        // Initialize communication limitations parameters.
        if (m_ctx.profiles.isSelected("Simulation") && m_args.comm_range > 0)
        {
          debug("simulating limited radio communications with maximum communication range of %f m",
                m_args.comm_range);
          debug("underwater communications are %s",
                m_underwater_comms ? "active" : "inactive");
          m_comm_limitations = true;
        }
        else
        {
          debug("limited communications simulation is not active");
          m_comm_limitations = false;
        }
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

        // replace with bind(this, m_args.messages); later
        //bind<IMC::Temperature>(this);

        // Register normal messages.
        // bind(this, m_args.messages);

        // Find a free port.
        // unsigned port_limit = m_args.port + c_port_retries;
        // while (m_args.port != port_limit)
        // {
        //   try
        //   {
        //     m_sock.bind(m_args.port, Address::Any, false);
        //     break;
        //   }
        //   catch (std::runtime_error& e)
        //   {
        //     war(DTR("failed to bind to port %u: %s"), m_args.port, e.what());
        //     ++m_args.port;
        //   }
        // }

        // if (m_args.port == port_limit)
        // {
        //   throw std::runtime_error(DTR("failed to find one available port"));
        // }

        // inf(DTR("listening on %s:%u"), Address(Address::Any).c_str(), m_args.port);

        // Initialize limited comms object
        m_lcomms = new LimitedComms(m_args.comm_range, getSystemId());
        m_lcomms->setActive(m_comm_limitations);
        m_node_table.setLimitedComms(m_lcomms);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

      }

      void
      onResourceInitialization(void)
      {

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
        war("hello from consume(IMC Announce)");
        
        m_node_table.addNode(this, m_args.port, c_port_retries, msg->getSource(), msg->sys_name, msg->services);

        // struct in_addr ip_addr;
        // ip_addr.s_addr = (uint32_t) msg->getSource();
        // printf("The IP address is %s\n", inet_ntoa(ip_addr)); 


        // init resources for socket creation
    //     initSocket();



    //     if( ssl.private_conf == NULL )
    //     {
    //       initSocket();
    //       if( ( ret = mbedtls_ssl_setup( &ssl, &conf ) ) != 0 )
    //       {
    //         err( " failed\n  ! mbedtls_ssl_setup returned %d\n\n", ret );
    //         reset_mbedtls();
    //         return;
    //       }
    //     }

    //     /*
    //     * 4.1.  Setup stuff
    //     */
    //     inf( "  . Setting up the DTLS data..." );
    //     fflush( stdout );

    //     if( ( ret = mbedtls_ssl_config_defaults( &conf,
    //                     MBEDTLS_SSL_IS_SERVER,
    //                     MBEDTLS_SSL_TRANSPORT_DATAGRAM,
    //                     MBEDTLS_SSL_PRESET_DEFAULT ) ) != 0 )
    //     {
    //         err( " failed\n  ! mbedtls_ssl_config_defaults returned %d\n\n", ret );
    //         reset_mbedtls();
    //         return;
    //     }

    //     mbedtls_ssl_conf_authmode( &conf, MBEDTLS_SSL_VERIFY_REQUIRED );
    //     mbedtls_ssl_conf_rng( &conf, mbedtls_ctr_drbg_random, &ctr_drbg );
    //     //mbedtls_ssl_conf_dbg( &conf, my_debug, stdout );
    //     mbedtls_ssl_conf_read_timeout( &conf, READ_TIMEOUT_MS );
    //     /*disable sending multiple records in one datagram*/
    //     mbedtls_ssl_set_datagram_packing( &ssl, 0 );

    // #if defined(MBEDTLS_SSL_CACHE_C)
    //     mbedtls_ssl_conf_session_cache( &conf, &cache,
    //                                   mbedtls_ssl_cache_get,
    //                                   mbedtls_ssl_cache_set );
    // #endif

    //     mbedtls_ssl_conf_ca_chain( &conf, &cacert, NULL );
    //   if( ( ret = mbedtls_ssl_conf_own_cert( &conf, &srvcert, &pkey ) ) != 0 )
    //     {
    //         err( " failed\n  ! mbedtls_ssl_conf_own_cert returned %d\n\n", ret );
    //         exit_task();
    //         return;
    //     }

    //     if( ( ret = mbedtls_ssl_cookie_setup( &cookie_ctx,
    //                                   mbedtls_ctr_drbg_random, &ctr_drbg ) ) != 0 )
    //     {
    //         err( " failed\n  ! mbedtls_ssl_cookie_setup returned %d\n\n", ret );
    //         exit_task();
    //         return;
    //     }

    //     mbedtls_ssl_conf_dtls_cookies( &conf, mbedtls_ssl_cookie_write, mbedtls_ssl_cookie_check,
    //                               &cookie_ctx );

      

    //     if( ( ret = mbedtls_ssl_setup( &ssl, &conf ) ) != 0 )
    //     {
    //         err( " failed\n  ! mbedtls_ssl_setup returned %d\n\n", ret );
    //         exit_task();
    //         return;
    //     }

    //     mbedtls_ssl_set_timer_cb( &ssl, &timer, mbedtls_timing_set_delay,
    //                                             mbedtls_timing_get_delay );

    //     inf( " ok\n" );

    //   /*
    //     * 3. Setup the "listening" UDP socket
    //     */
    //     inf( "  . Bind on udp/*/%s ...", SERVER_PORT );
    //     fflush( stdout );

    //     if( ( ret = mbedtls_net_bind( &listen_fd, BIND_IP, SERVER_PORT, MBEDTLS_NET_PROTO_UDP ) ) != 0 )
    //     {
    //         err( " failed\n  ! mbedtls_net_bind returned %d\n\n", ret );
    //         exit_task();
    //         return;
    //   }

    //   reset_mbedtls();

    //   /*
    //   * 5. Handshake
    //   */
    //   inf( "  . Performing the DTLS handshake..." );
    //   fflush( stdout );

    //   do ret = mbedtls_ssl_handshake( &ssl );
    //   while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
    //         ret == MBEDTLS_ERR_SSL_WANT_WRITE );

    //   if( ret == MBEDTLS_ERR_SSL_HELLO_VERIFY_REQUIRED )
    //   {
    //       inf( " hello verification requested\n" );
    //       ret = 0;
    //       reset_mbedtls();
    //   }
    //   else if( ret != 0 )
    //   {
    //       err( " failed\n  ! mbedtls_ssl_handshake returned -0x%x\n\n", (unsigned int) -ret );
    //       reset_mbedtls();
    //   }

    //   inf( " ok\n" );

    //   if(!m_listener->isRunning())
    //   {
    //     m_listener = new Listener(*this, &ssl, m_lcomms,
    //                           m_args.contact_timeout, m_args.trace_in);
        // m_listener->start();
    //   }
    }

      // void
      // consume(const IMC::Temperature* msg)
      // {
      //   war("hello from consume(IMC Temperature)");

      //   inf( "  < Read from client:" );

      //   if( ssl.private_conf == NULL )
      //   {
      //     init_socket();
      //     if( ( ret = mbedtls_ssl_setup( &ssl, &conf ) ) != 0 )
      //     {
      //         err( " failed\n  ! mbedtls_ssl_setup returned %d\n\n", ret );
      //         reset_mbedtls();
      //         return;
      //     }
      //   }
      //     // fflush( stdout );

      //     if(!m_listener->isRunning())
      //     {
      //       m_listener = new Listener(*this, &ssl, m_lcomms,
      //                             m_args.contact_timeout, m_args.trace_in);
      //     m_listener->start();
      //     }
          

      //     len = ret;
      //     inf( " %d bytes read\n\n%s\n\n", len, buf );

      //     /*
      //     * 7. Write the 200 Response
      //     */
      //     inf( "  > Write to client:" );
      //     fflush( stdout );

      //     do ret = mbedtls_ssl_write( &ssl, buf, len );
      //     while( ret == MBEDTLS_ERR_SSL_WANT_READ ||
      //           ret == MBEDTLS_ERR_SSL_WANT_WRITE );

      //     if( ret < 0 )
      //     {
      //         err( " failed\n  ! mbedtls_ssl_write returned %d\n\n", ret );
      //         exit_task();
      //         return;
      //     }

      //     len = ret;
      //     inf( " %d bytes written\n\n%s\n\n", len, buf );
      // }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        war("hello from onResourceRelease");

        // close_notify();

        // exit_task();

      }

      /**
       * @brief Seed the mbedtls RNG
       * 
       */
      void seedRandomNumberGenerator(void)
      {
        // inf( "  . Seeding the random number generator..." );
        // fflush( stdout );

        // if( ( ret = mbedtls_ctr_drbg_seed( &mbed_ctx.ctr_drbg, mbedtls_entropy_func, &mbed_ctx.entropy,
        //                           (const unsigned char *) pers,
        //                           strlen( pers ) ) ) != 0 )
        // {
        //   err( " failed\n  ! mbedtls_ctr_drbg_seed returned %d\n", ret );
        //   exit_task();
        //   return;
        // }

        // inf( " ok\n" );
      }

      /**
       * @brief Store the server certificate, certificate authority chain certificates and the server private key.
       * 
       */
      void storeKeysAndCertificates(void)
      {
        //         inf( "\n  . Loading the server cert. and key..." );
        // fflush( stdout );

        // /*
        // * This demonstration program uses embedded test certificates.
        // * Instead, you may want to use mbedtls_x509_crt_parse_file() to read the
        // * server and CA certificates, as well as mbedtls_pk_parse_keyfile().
        // */
        // ret = mbedtls_x509_crt_parse( &mbed_ctx.srvcert, (const unsigned char *) lsts_server_certificate,
        //                       lsts_server_certificate_len );
        // if( ret != 0 )
        // {
        //     err( " failed\n  !  mbedtls_x509_crt_parse returned %d\n\n", ret );
        //     exit_task();
        //     return;
        // }

        // ret = mbedtls_x509_crt_parse( &mbed_ctx.cacert, (const unsigned char *) lsts_ca_chain,
        //                       lsts_ca_chain_len );
        // if( ret != 0 )
        // {
        //     err( " failed\n  !  mbedtls_x509_crt_parse returned %d\n\n", ret );
        //     exit_task();
        //     return;
        // }

        // ret =  mbedtls_pk_parse_key( &mbed_ctx.pkey, (const unsigned char *) lsts_server_private_key,
        //                     lsts_server_private_key_len, NULL, 0, mbedtls_ctr_drbg_random, &mbed_ctx.ctr_drbg );
        // if( ret != 0 )
        // {
        //     err( " failed\n  !  mbedtls_pk_parse_key returned %d\n\n", ret );
        //     exit_task();
        //     return;
        // }

        // inf( " ok\n" );
      }

      void close_notify(void)
      {
          // sleep(3);
          // inf( "  . Closing the connection..." );

          // /* No error checking, the connection might be closed already */
          // do ret = mbedtls_ssl_close_notify( &ssl );
          // while( ret == MBEDTLS_ERR_SSL_WANT_WRITE );
          // ret = 0;

          // inf( " done\n" );

          // reset_mbedtls();
      }

      void
      exit_task(void)
      {
      //     #ifdef MBEDTLS_ERROR_C
      //     if( ret != 0 )
      //     {
      //         char error_buf[100];
      //         mbedtls_strerror( ret, error_buf, 100 );
      //         err( "Last error was: %d - %s\n\n", ret, error_buf );
      //     }
      // #endif

      //     mbedtls_net_free( &client_fd );
      //     mbedtls_net_free( &listen_fd );

      //     mbedtls_x509_crt_free( &mbed_ctx.srvcert );
      //     mbedtls_x509_crt_free( &mbed_ctx.cacert );
      //     mbedtls_pk_free( &mbed_ctx.pkey );
      //     // mbedtls_ssl_free( &ssl );
      //     mbedtls_ssl_config_free( &conf );
      //     mbedtls_ssl_cookie_free( &cookie_ctx );
      // #if defined(MBEDTLS_SSL_CACHE_C)
      //     mbedtls_ssl_cache_free( &cache );
      // #endif
      //     mbedtls_ctr_drbg_free( &mbed_ctx.ctr_drbg );
      //     mbedtls_entropy_free( &mbed_ctx.entropy );

      //         /* Shell can not handle large exit numbers -> 1 for errors */
      //       if( ret < 0 )
      //           ret = 1;

            // mbedtls_exit( ret ); 
      }

      void
      initResources(void)
      {
        // mbedtls_x509_crt_init( &mbed_ctx.srvcert );
        // mbedtls_x509_crt_init( &mbed_ctx.cacert );
        // mbedtls_pk_init( &mbed_ctx.pkey );
        // mbedtls_entropy_init( &mbed_ctx.entropy );
        // mbedtls_ctr_drbg_init( &mbed_ctx.ctr_drbg );
      }

      void
      initSocket(void)
      {
      //   mbedtls_net_init( &listen_fd );
      //   mbedtls_net_init( &client_fd );
      //   mbedtls_ssl_init( &ssl );
      //   mbedtls_ssl_config_init( &conf );
      //   mbedtls_ssl_cookie_init( &cookie_ctx );
      // #if defined(MBEDTLS_SSL_CACHE_C)
      //   mbedtls_ssl_cache_init( &cache );
      // #endif
      }

      void
      reset_mbedtls(void)
      {

      //   war("hello from reset_mbedtls0");

      //   if( ssl.private_conf == NULL )
      //   {
      //     initSocket();
      //             if( ( ret = mbedtls_ssl_setup( &ssl, &conf ) ) != 0 )
      //     {
      //         err( " failed\n  ! mbedtls_ssl_setup returned %d\n\n", ret );
      //         exit_task();
      //         return;
      //     }
      //   }
      // #ifdef MBEDTLS_ERROR_C
      //     if( ret != 0 )
      //     {
      //         char error_buf[100];
      //         mbedtls_strerror( ret, error_buf, 100 );
      //         err("Last error was: %d - %s\n\n", ret, error_buf );
      //     }
      // #endif

      //     mbedtls_net_free( &client_fd );

      // if(ssl.private_conf->private_transport != 0)
      // {
      //    mbedtls_ssl_session_reset( &ssl );
      

      //     // mbedtls_ssl_session_reset( &ssl );

      //     /*
      //     * 4.2. Wait until a client connects
      //     */
      //     inf( "  . Waiting for a remote connection ..." );
      //     fflush( stdout );

      //     if( ( ret = mbedtls_net_accept( &listen_fd, &client_fd,
      //                     client_ip, sizeof( client_ip ), &cliip_len ) ) != 0 )
      //     {
      //         err( " failed\n  ! mbedtls_net_accept returned %d\n\n", ret );
      //         exit_task();
      //         return;
      //     }

      //     /* For HelloVerifyRequest cookies */
      //     if( ( ret = mbedtls_ssl_set_client_transport_id( &ssl,
      //                     client_ip, cliip_len ) ) != 0 )
      //     {
      //         err( " failed\n  ! "
      //                 "mbedtls_ssl_set_client_transport_id() returned -0x%x\n\n", (unsigned int) -ret );
      //         exit_task();
      //         return;
      //     }

      //     mbedtls_ssl_set_bio( &ssl, &client_fd,
      //                         mbedtls_net_send, mbedtls_net_recv, mbedtls_net_recv_timeout );

      //     inf( " ok\n" );
      //    }
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
