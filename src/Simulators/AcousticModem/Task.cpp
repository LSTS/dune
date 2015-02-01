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
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace AcousticModem
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // Local port.
      uint16_t local_port;
      // IPv4 Address.
      Address addr;
      // UDP Port.
      uint16_t port;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Buffer capacity.
      static const unsigned c_bfr_size = 255;
      // Task arguments.
      Arguments m_args;
      // UDP Socket.
      UDPSocket* m_sock;
      //! Read buffer.
      std::vector<uint8_t> m_bfr;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_sock(NULL)
      {
        param("Local Port", m_args.local_port)
        .defaultValue("6021")
        .minimumValue("0")
        .maximumValue("65535")
        .description("Local UDP port");

        param("Destination UDP Address", m_args.addr)
        .defaultValue("172.0.0.1")
        .description("IP address of remote system");

        param("Destination UDP Port", m_args.port)
        .defaultValue("6022")
        .minimumValue("0")
        .maximumValue("65535")
        .description("UDP port of remote system");

        m_bfr.resize(c_bfr_size);

        bind<IMC::UamTxFrame>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (isActive())
        {
          if (paramChanged(m_args.addr))
            throw RestartNeeded(DTR("restarting to change IPv4 address"), 1);

          if (paramChanged(m_args.port))
            throw RestartNeeded(DTR("restarting to change UDP port"), 1);
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_sock = new UDPSocket;
        m_sock->bind(m_args.local_port, Address::Any, false);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_sock);
      }

      void
      consume(const IMC::UamTxFrame* msg)
      {
        // Only use local UamTxFrame.
        if (msg->getSource() != getSystemId())
          return;

        // Serialize AcousticMessage.
        IMC::AcousticMessage amsg;
        amsg.setSource(getSystemId());
        amsg.setSourceEntity(getEntityId());
        amsg.setTimeStamp();
        amsg.message.set(*msg);

        size_t rv = IMC::Packet::serialize(&amsg, (uint8_t*)&m_bfr[0], (uint16_t)m_bfr.size());

        debug("acoustic message to %s", msg->sys_dst.c_str());

        try
        {
          m_sock->write((const uint8_t*)&m_bfr[0], rv, m_args.addr, m_args.port);
        }
        catch (...)
        { }
      }

      // Read incoming data.
      void
      readData(void)
      {
        if (!Poll::poll(*m_sock, 1.0))
          return;

        size_t rv = m_sock->read(&m_bfr[0], m_bfr.size());
        IMC::Message* msg = IMC::Packet::deserialize((uint8_t*)&m_bfr[0], rv);

        if (msg->getId() == DUNE_IMC_ACOUSTICMESSAGE)
        {
          const IMC::AcousticMessage* am = static_cast<const IMC::AcousticMessage*>(msg);
          const IMC::Message* m = am->message.get();

          if (m->getId() == DUNE_IMC_UAMTXFRAME)
          {
            const IMC::UamTxFrame* frame = static_cast<const IMC::UamTxFrame*>(m);

            // Check if we are the right destination
            if (resolveSystemName(frame->sys_dst) != getSystemId())
              return;

            // Process data.
            IMC::UamRxFrame rx;
            rx.sys_src = resolveSystemId(msg->getSource());
            rx.sys_dst = getSystemName();
            rx.data = frame->data;
            debug("received acoustic message from %s", rx.sys_src.c_str());
            dispatch(rx);
          }
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (m_sock != NULL)
            readData();
        }
      }
    };
  }
}

DUNE_TASK
