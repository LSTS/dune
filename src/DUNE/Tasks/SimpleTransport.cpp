//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
        inf("outgoing: %s", msg->getName());

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
            inf("incoming: %s", m->getName());

          delete m;
        }
      }
    }
  }
}
