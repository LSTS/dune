//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author:  JTeixeira                                                       *
//          PGonçalves                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Vendor headers
#include "../../../vendor/libraries/happyhttp/happyhttp.h"

namespace Transports
{
  namespace WebLink
  {
    using DUNE_NAMESPACES;
    using namespace happyhttp;

    struct Task : public DUNE::Tasks::Task
    {
        int m_count;
        uint16_t m_size;
        Connection* m_conn;
        uint8_t *m_params;

        IMC::EntityParameters m_hist;
        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx) :
            DUNE::Tasks::Task(name, ctx),
            m_count(0),
            m_size(0),
            m_conn(0),
            m_params(0)
        {
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
          free(m_params);
          Memory::clear(m_conn);
        }

        /* Begin handler */
        void
        onBeginCal(const Response* r)
        {
          std::printf("%d : %s\n\r", r->getstatus(), r->getreason());
          m_count = 0;
        }

        static void
        onBegin(const happyhttp::Response* r, void* opt)
        {
          Task* cal1 = (Task*)opt; // cast back to 'this'
          // now call your member-function.
          cal1->onBeginCal(r);
        }

        /* Data handler */
        void
        onDataCal(const unsigned char* data, int n)
        {
          std::fwrite(data, 1, n, stdout);
          m_count += n;
          std::cout << std::endl;
        }

        static void
        onData(const unsigned char* data, int numbytes, void* opt)
        {
          Task* cal2 = (Task*)opt; // cast back to 'this'
          // now call your member-function.
          cal2->onDataCal(data, numbytes);
        }

        //! test
        void
        teste(uint16_t l)
        {
          m_count = 0;
          //m_conn->setcallbacksBegin(onBegin);
          //m_conn->setcallbacksData (onData);
          //m_conn->putrequest( "POST", "/post.php?dir=pedro2" );
          m_conn->putrequest("POST", "/datastore");
          m_conn->putheader("Content-Length", m_size);
          m_conn->putheader("Content-type", "text/plain");
          m_conn->putheader("Accept", "text/plain");
          m_conn->endheaders();
          bool state = m_conn->send((const unsigned char*)m_params, l);

          if (state)
            while (m_conn->outstanding())
              m_conn->pump();

          m_conn->close();

        }

        //! Main loop.
        void
        onMain(void)
        {
          Delay::waitMsec(5000);
          m_hist.setTimeStamp();
          m_size = m_hist.getSerializationSize();
          m_conn = new Connection("ripples.lsts.pt", 80);
          //m_conn = new Connection("posttestserver.com", 80);
          m_params = (unsigned char*)malloc(m_size + 1);
          IMC::Packet::serialize(&m_hist, &m_params[0], m_hist.getSerializationSize());
          while (!stopping())
          {
            m_hist.setTimeStamp();
            m_size = m_hist.getSerializationSize();
            //m_params = (unsigned char*)malloc(m_size + 1);
            if (!std::realloc(m_params, m_size))
              war("ERROR in realloc");
            IMC::Packet::serialize(&m_hist, &m_params[0], m_hist.getSerializationSize());
            war("SEND...");
            teste(m_size);
            err("SEND OK");
            //consumeMessages();
            Delay::waitMsec(2000);
          }
        }
    };
  }
}

DUNE_TASK
