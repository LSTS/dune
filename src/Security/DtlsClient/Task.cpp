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

// // Local headers.
// #include "NodeAddress.hpp"
// #include "NodeTable.hpp"
// #include "Listener.hpp"
// #include "LimitedComms.hpp"

#include "mbedtls/net_sockets.h"
#include "mbedtls/debug.h"
#include "mbedtls/ssl.h"
#include "mbedtls/entropy.h"
#include "mbedtls/ctr_drbg.h"
#include "mbedtls/error.h"
#include "mbedtls/timing.h"
#include "test/certs.h"

#define FORCE_IPV4

#define SERVER_PORT "4433"
#define SERVER_NAME "localhost"

#ifdef FORCE_IPV4
#define SERVER_ADDR "127.0.0.1"     /* Forces IPv4 */
#else
#define SERVER_ADDR "::1"
#endif

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

    struct Task: public DUNE::Tasks::Task
    {
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::Temperature>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      consume(const IMC::Temperature* msg)
      {
        inf("temperature is %f", msg->value);
      }

      //! Main loop.
      void
      onMain(void)
      {

        int ret, len;
        mbedtls_net_context server_fd;
        uint32_t flags;
        unsigned char buf[1024];
        const char *pers = "dtls_client";
        int retry_left = MAX_RETRY;

        mbedtls_entropy_context entropy;
        mbedtls_ctr_drbg_context ctr_drbg;
        mbedtls_ssl_context ssl;
        mbedtls_ssl_config conf;
        mbedtls_x509_crt cacert;
        mbedtls_timing_delay_context timer;

        /*
        * 0. Initialize the RNG and the session data
        */
        mbedtls_net_init( &server_fd );
        
        while (!stopping())
        {
          waitForMessages(5.0);
          war("heyooo");
        }
      }
    };
  }
}

DUNE_TASK
