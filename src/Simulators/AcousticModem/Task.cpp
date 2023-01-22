//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venancio                                                    *
//***************************************************************************

// TODO: Add support for USBL simulation
// (requires modification of the USBL simulator).

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "Driver.hpp"

namespace Simulators
{
  //! Simulates an Acoustic Modem.
  //!
  //! Receives UamTxFrame messages, encapsulates in SimAcousticMessages and sends over
  //! UDP multicast.
  //! Receives SimAcousticMessages, simulates message travel time and data loss (based
  //! on a Gaussian distribution of distance and message size) and sends
  //! corresponding UamRxFrame.
  //! @author Luis Venancio
  namespace AcousticModem
  {
    using DUNE_NAMESPACES;

    //! Timeout time.
    static const double c_timeout = 5.0;

    //! Transmission ticket structure.
    struct Ticket
    {
      //! IMC source address.
      uint16_t imc_sid;
      //! IMC source entity.
      uint8_t imc_eid;
      //! Sequence number.
      uint16_t seq;
      //! Wait for ack.
      bool ack;
    };

    struct Arguments
    {
      //! Modem operation arguments.
      DriverArguments driver_args;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Current transmission ticket.
      Ticket* m_ticket;
      //! Timeout counter.
      Time::Counter<double> m_timeout;
      //! Modem driver handler.
      Driver* m_driver;
      //! Simulated state.
      IMC::SimulatedState* m_sstate;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_ticket(nullptr),
        m_driver(nullptr),
        m_sstate(nullptr)
      {
        param("UDP Communications -- Multicast Address", m_args.driver_args.udp_maddr)
        .defaultValue("225.0.2.1")
        .description("UDP multicast address for communications");

        param("UDP Communications -- Port", m_args.driver_args.udp_port)
        .defaultValue("8021")
        .description("UDP port for communications");

        param("Modem Type", m_args.driver_args.modem_type)
        .description("Vehicle modem type (Ex. Evologics, Seatrac)");

        param("Transmission Speed", m_args.driver_args.tx_speed)
        .description("Modem transmission speed (bps)");

        param("Distance Standard Deviation", m_args.driver_args.dst_peak_width)
        .defaultValue("750");

        param("Size Standard Deviation", m_args.driver_args.dsize_peak_width)
        .defaultValue("800");

        param("PRNG Type", m_args.driver_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.driver_args.prng_seed)
        .defaultValue("-1");

        // Register consumers.
        bind<IMC::GpsFix>(this);
        bind<IMC::SimulatedState>(this);
        bind<IMC::UamTxFrame>(this);
        bind<IMC::DevDataText>(this);
        bind<IMC::SimAcousticMessage>(this);
      }

      //! Initialize resources.
      void
      onResourceAcquisition(void)
      {
        m_sstate = new IMC::SimulatedState;
        m_driver = new Driver(&m_args.driver_args, m_sstate, this);
        m_driver->start();

        //Deactivate until SimulatedState message is received
        requestDeactivation();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_driver)
        {
          m_driver->stopAndJoin();
          Memory::clear(m_driver);
        }

        Memory::clear(m_sstate);
        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
      }

      //! Clear ticket and send status.
      //! @param[in] reason status to send.
      //! @param[in] error error message, if available.
      void
      clearTicket(IMC::UamTxStatus::ValueEnum reason, const std::string& error = "")
      {
        if (m_ticket != nullptr)
        {
          sendTxStatus(*m_ticket, reason, error);
          Memory::clear(m_ticket);
        }
      }

      //! Replace current ticket.
      //! @param[in] ticket ticket to replae current.
      //! @param[in] reason status to send.
      void
      replaceTicket(const Ticket* ticket)
      {
        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
        m_ticket = new Ticket(*ticket);
        m_timeout.setTop(c_timeout);
      }

      //! Send status.
      //! @param[in] ticket ticket to return status.
      //! @param[in] value status to send.
      //! @param[in] error error message, if available.
      void
      sendTxStatus(const Ticket& ticket, IMC::UamTxStatus::ValueEnum value,
                    const std::string& error = "")
      {
        IMC::UamTxStatus status;
        status.setDestination(ticket.imc_sid);
        status.setDestinationEntity(ticket.imc_eid);
        status.seq = ticket.seq;
        status.value = value;
        status.error = error;
        dispatch(status);
      }

      void
      consume(const IMC::UamTxFrame* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getDestinationEntity() != 255 && msg->getDestinationEntity() != getEntityId())
          return;

        // Create and fill new ticket.
        Ticket ticket;
        ticket.imc_sid  = msg->getSource();
        ticket.imc_eid  = msg->getSourceEntity();
        ticket.seq      = msg->seq;
        ticket.ack      = (msg->flags == IMC::UamTxFrame::UTF_ACK);

        if (msg->sys_dst == getSystemName())
        {
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_INV_ADDR);
          return;
        }

        if (m_driver->isBusy())
        {
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_BUSY);
          return;
        }

        m_driver->transmit(*msg);

        replaceTicket(&ticket);
        sendTxStatus(ticket, IMC::UamTxStatus::UTS_IP);
      }

      void
      consume(const IMC::SimAcousticMessage* amsg)
      {
        if (amsg->getDestination() != getSystemId())
          return;

        if (amsg->getDestinationEntity() != getEntityId())
          return;

        if (amsg->flags == IMC::SimAcousticMessage::SAM_REPLY)
          rcvRxRange(amsg);
        else
          rcvRxFrame(amsg);
      }

      void
      consume(const IMC::DevDataText* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (String::startsWith(msg->value, "DONE"))
        {
          if (!m_ticket)
            return;

          if (!m_ticket->ack)
            return;

          clearTicket(IMC::UamTxStatus::UTS_DONE);
          debug("Ticket cleared");
        }
        else if (String::startsWith(msg->value, "IP"))
        {
          if (!m_ticket)
            return;

          debug("Message is being sent");
        }
        else if (String::startsWith(msg->value, "FAILED"))
        {
          int offset = 0;
          std::sscanf(msg->value.c_str(), "FAILED%n", &offset);

          if ((unsigned)offset == msg->value.size())
            clearTicket(IMC::UamTxStatus::UTS_FAILED);
          else
            clearTicket(IMC::UamTxStatus::UTS_FAILED, msg->value.substr(offset+1));
        }
        else
        {
          err(DTR("Unknown transmission status: %s"), msg->value.c_str());
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
          return;

        if(!isActive())
          requestActivation();

        // Define vehicle origin.
        m_sstate->lat    = msg->lat;
        m_sstate->lon    = msg->lon;
        m_sstate->height = msg->height;
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        if(!isActive())
          requestActivation();

        *m_sstate = *msg;
      }

      //! Parse SimAcousticMessage into UamRxFrame and send.
      //! @param[in] amsg SimAcousticMessage encapsulating UamRxFrame data.
      void
      rcvRxFrame(const IMC::SimAcousticMessage* amsg)
      {
        IMC::UamRxFrame rx;
        rx.sys_src  = amsg->sys_src;
        rx.sys_dst  = amsg->sys_dst;
        rx.data     = amsg->data;

        if (getSystemName() != amsg->sys_dst)
          rx.flags = IMC::UamRxFrame::URF_PROMISCUOUS;

        rx.setTimeStamp();

        dispatch(rx);
      }

      //! Parse SimAcousticMessage into UamRxRange and send.
      //! @param[in] amsg SimAcousticMessage encapsulating UamRxRange data.
      void
      rcvRxRange(const IMC::SimAcousticMessage* amsg)
      {
        IMC::UamRxRange range;
        range.sys   = amsg->sys_src;
        range.seq   = amsg->seq;
        range.value = m_driver->distance(amsg);
        range.setTimeStamp();

        dispatch(range);
        clearTicket(IMC::UamTxStatus::UTS_DONE);
      }

      //! Check timeout counter for overflow if there is
      //! an open transmission ticket.
      void
      checkTimeout()
      {
        if (!m_ticket)
          return;

        if (m_ticket->ack && m_timeout.overflow())
          clearTicket(IMC::UamTxStatus::UTS_FAILED);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          //Reference: Sensors/GPS Reader.hpp
          checkTimeout();
          // m_driver->run();

          waitForMessages(0.1);
        }
      }
    };
  }
}

DUNE_TASK
