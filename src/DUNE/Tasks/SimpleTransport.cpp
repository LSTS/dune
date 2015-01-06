//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Tasks/SimpleTransport.hpp>
#include <DUNE/Time/Clock.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Tasks
  {
    SimpleTransport::SimpleTransport(const std::string& name, Tasks::Context& ctx):
      Tasks::Task(name, ctx),
      m_buf(2048)
    {
      param("Transports", m_gargs.transports)
      .defaultValue("")
      .description("Messages to transport");

      param("Rate Limiters", m_gargs.rlim)
      .defaultValue("")
      .description("Rate limiters (message name/frequency pairs)");

      param("Trace - Incoming Messages", m_gargs.trace_in)
      .defaultValue("false")
      .description("Enable verbose output regarding incoming messages");

      param("Trace - Outgoing Messages", m_gargs.trace_out)
      .defaultValue("false")
      .description("Enable verbose output regarding outgoing messages");
    }

    SimpleTransport::~SimpleTransport(void)
    { }

    void
    SimpleTransport::consume(const IMC::Message* msg)
    {
      if (m_rl.filter(msg))
        return;

      unsigned int n = msg->getSerializationSize();

      m_buf.grow(n);

      uint8_t* p = m_buf.getBuffer();

      IMC::Packet::serialize(msg, p, n);

      if (m_gargs.trace_out)
        inf(DTR("outgoing: %s"), msg->getName());

      onDataTransmission(p, n);
    }

    void
    SimpleTransport::onMain(void)
    {
      m_rl.setup(m_gargs.rlim);
      bind(this, m_gargs.transports);

      while (!stopping())
      {
        consumeMessages();

        onDataReception(m_buf.getBuffer(), m_buf.getCapacity(), 0.005);
      }
    }

    void
    SimpleTransport::handleData(IMC::Parser& parser, const uint8_t* p, unsigned int n)
    {
      for (const uint8_t* e = p + n; p != e; ++p)
      {
        IMC::Message* m = parser.parse(*p);

        if (m)
        {
          dispatch(m, DF_KEEP_TIME | DF_KEEP_SRC_EID);

          if (m_gargs.trace_in)
            inf(DTR("incoming: %s"), m->getName());

          delete m;
        }
      }
    }
  }
}
