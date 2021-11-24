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
// Author: Luís Venâncio                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Luís Venâncio
  namespace SimpleAcousticModem
  {
    using DUNE_NAMESPACES;

    const uint8_t c_code_range = 0x01;

    struct Arguments
    {
      // List of ports to listen for advertisements.
      std::vector<unsigned> ports;
      // Multicast address.
      Address addr_mcast;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Task arguments.
      Arguments m_args;
      //! UDP socket
      UDPSocket m_sock;
      // Transmission buffer.
      uint8_t m_tx_bfr[4096];
      // Reception buffer.
      uint8_t m_rx_bfr[4096];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        // Define configuration parameters.
        param("Multicast Address", m_args.addr_mcast)
        .defaultValue("224.0.75.70")
        .description("Multicast address");
        
        param("Ports", m_args.ports)
        .defaultValue("30105, 30106, 30107, 30108, 30109")
        .description("List of destination ports");
        
        bind<IMC::UamTxFrame>(this);
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
        // Initialize socket.
        m_sock.setMulticastTTL(1);
        m_sock.setMulticastLoop(true);

        m_sock.joinMulticastGroup(m_args.addr_mcast);
        

        std::vector<Interface> itfs = Interface::get();
        for (unsigned i = 0; i < itfs.size(); ++i)
          m_sock.joinMulticastGroup(m_args.addr_mcast, itfs[i].address());

        for (unsigned i = 0; i < m_args.ports.size(); ++i)
        {
          try
          {
            m_sock.bind(m_args.ports[i]);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            return;
          }
          catch (...)
          { }
        }

        throw std::runtime_error(DTR("no available ports to listen to"));
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      consume(const IMC::UamTxFrame* msg)
      {
        transmitData(msg);

        // Respond if it is range request
        if (msg->data[1] == c_code_range)
        {
          IMC::UamRxRange range;
          range.seq = msg->seq;
          range.sys = msg->sys_dst;
          range.value = 20;

          dispatch(range);
        }

        // Send transmission status
        IMC::UamTxStatus status;
        status.setDestination(msg->getSource());
        status.setDestinationEntity(msg->getSourceEntity());
        status.seq = msg->seq;
        status.value = UamTxStatus::UTS_DONE;
        status.error = "";
        dispatch(status);
      }

      void
      transmitData(const IMC::UamTxFrame* msg)
      {
        uint16_t bfr_len = IMC::Packet::serialize(msg, m_tx_bfr, sizeof(m_tx_bfr));

        try
        {
          m_sock.write(m_tx_bfr, bfr_len, m_args.addr_mcast, m_args.ports[0]);
          debugMessage("SENT", msg);
        }
        catch (...)
        { }
      }

      void
      receiveData()
      {
        if (!Poll::poll(m_sock, 1.0))
          return;

        uint16_t rv = m_sock.read(m_rx_bfr, sizeof(m_rx_bfr));
        IMC::Message* msg = IMC::Packet::deserialize(m_rx_bfr, rv);

        // Validate message.
        if (msg == 0)
        {
          debug(DTR("discarding spurious message"));
          delete msg;
          return;
        }

        if (msg->getId() != DUNE_IMC_UAMTXFRAME)
        {
          debug(DTR("discarding spurious message '%s'"), msg->getName());
          delete msg;
          return;
        }

        if (msg->getSource() == getSystemId())
          return;

        // Parse  message.
        IMC::UamTxFrame* tx_frame = static_cast<IMC::UamTxFrame*>(msg);
        
        //Convert to UamRxFrame
        IMC::UamRxFrame rx_frame;
        rx_frame.setSource(tx_frame->getSource());
        rx_frame.sys_src = resolveSystemId(tx_frame->getSource());
        rx_frame.sys_dst = tx_frame->sys_dst;
        rx_frame.flags = tx_frame->flags;
        rx_frame.data = tx_frame->data;

        dispatch(rx_frame);
        debugMessage("RECEIVED", &rx_frame);
      }

      void
      debugMessage(std::string msg, const IMC::Message* frame)
      {
        if (getDebugLevel() < DEBUG_LEVEL_DEBUG)
          return;

        std::ostringstream os;
        frame->toText(os);
        debug("[%s]:\n%s", msg.c_str(), os.str().c_str());
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          
          receiveData();
        }
      }
    };
  }
}

DUNE_TASK
