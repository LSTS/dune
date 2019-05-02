//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "SimulatedDriver.hpp"

namespace Simulators
{
  namespace AcousticModem
  {
    using DUNE_NAMESPACES;

    //! Timeout time
    static const double c_timeout = 5.0;

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
      //! Modem operation arguments
      MOArguments moargs;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Current transmission ticket.
      Ticket* m_ticket;
      //! Timeout counter.
      Time::Counter<double> m_timeout;
      //! Modem driver handler
      SimulatedDriver* m_driver;
      

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_ticket(NULL)
      {
        param("UDP Communications -- Multicast Address", m_args.moargs.udp_maddr)
        .defaultValue("225.0.2.1")
        .description("UDP multicast address for communications");

        param("UDP Communications -- Port", m_args.moargs.udp_port)
        .defaultValue("8021")
        .description("UDP port for communications");

        param("Modem Type", m_args.moargs.mtype)
        .description("Vehicle modem type (Ex. Evologics, Seatrac)");

        param("Transmission Speed", m_args.moargs.tx_speed)
        .description("Modem transmission speed (bps)");

        param("Distance Standard Deviation", m_args.moargs.dst_peak_width)
        .defaultValue("750");

        param("Size Standard Deviation", m_args.moargs.dsize_peak_width)
        .defaultValue("200");

        param("PRNG Type", m_args.moargs.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.moargs.prng_seed)
        .defaultValue("-1");

        // Register consumers.
        bind<IMC::GpsFix>(this);
        bind<IMC::SimulatedState>(this);
        bind<IMC::UamTxFrame>(this);
        bind<IMC::DevDataText>(this);
        bind<IMC::SAMessage>(this);
      }

      void
      onResourceAcquisition(void)
      {
        m_driver = new SimulatedDriver(&m_args.moargs, this);

        //Deactivate until SimulatedState message is received
        requestDeactivation();
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_driver);

        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
      }

      void
      clearTicket(IMC::UamTxStatus::ValueEnum reason, const std::string& error = "")
      {
        if (m_ticket != NULL)
        {
          sendTxStatus(*m_ticket, reason, error);
          delete m_ticket;
          m_ticket = NULL;
        }
      }

      void
      replaceTicket(const Ticket* ticket)
      {
        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
        m_ticket = new Ticket(*ticket);
        m_timeout.setTop(c_timeout);
      }

      //! Send status
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

        // Create and fill new ticket.
        Ticket ticket;
        ticket.imc_sid  = msg->getSource();
        ticket.imc_eid  = msg->getSourceEntity();
        ticket.seq      = msg->seq;
        ticket.ack      = (msg->flags & IMC::UamTxFrame::UTF_ACK) != 0;

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

        m_driver->transmit(msg);

        replaceTicket(&ticket);
        sendTxStatus(ticket, IMC::UamTxStatus::UTS_IP);
      }

      void
      consume(const IMC::SAMessage* amsg)
      {
        if (amsg->getSource() != getSystemId())
          return;
        
        if (amsg->getSourceEntity() != getEntityId())
          return;

        if (String::startsWith(
                        std::string(amsg->data.begin(), amsg->data.end()), 
                        "REPLY"))
        {
          rcvRxRange(amsg);
        }
        else
        {
          rcvRxFrame(amsg);
        }
      }

      void
      consume(const IMC::DevDataText* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (String::startsWith(msg->value, "STATUS"))
          handleStatus(msg->value);
        else
          err(DTR("Unknown data text: %s."), msg->value.c_str());
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
          return;

        if(!isActive())
          requestActivation();

        // Define vehicle origin.
        IMC::SimulatedState lstate;
        lstate.lat    = msg->lat;
        lstate.lon    = msg->lon;
        lstate.height = msg->height;
        lstate.x      = 0;
        lstate.y      = 0;
        lstate.z      = 0;

        m_driver->setSimState(lstate);
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        if(!isActive())
          requestActivation();

        m_driver->setSimState(*msg);
      }

      //! Parse SAMessage into UamRxFrame and send
      void
      rcvRxFrame(const IMC::SAMessage* amsg)
      {
        IMC::UamRxFrame rx;
        rx.sys_src  = resolveSystemId(amsg->getSource());
        rx.sys_dst  = amsg->sys_dst;
        rx.data     = amsg->data;

        if (getSystemName() != amsg->sys_dst)
          rx.flags = IMC::UamRxFrame::URF_PROMISCUOUS;

        rx.setTimeStamp();

        dispatch(rx);
      }

      //! Parse SAMessage into UamRxRange and send
      void
      rcvRxRange(const IMC::SAMessage* amsg)
      {
        IMC::UamRxRange range;
        range.sys   = amsg->sys_src;
        range.seq   = amsg->seq;
        range.value = m_driver->distance(amsg);
        range.setTimeStamp();

        dispatch(range);
        clearTicket(IMC::UamTxStatus::UTS_DONE);
      }

      //! Handle status messages from the driver
      void
      handleStatus(const std::string& str)
      {
        if (String::startsWith(str, "STATUS,DONE"))
        {
          if (!m_ticket)
            return;

          if (m_ticket->ack)
            return;
          
          clearTicket(IMC::UamTxStatus::UTS_DONE);
        }
        else if (String::startsWith(str, "STATUS,FAILED"))
        {
          int offset = 0;
          std::sscanf(str.c_str(),
                          "STATUS,FAILED%n",
                          &offset);

          if ((size_t)offset == str.size())
            clearTicket(IMC::UamTxStatus::UTS_FAILED);
          else
            clearTicket(IMC::UamTxStatus::UTS_FAILED, str.substr(offset+1));
        }
        else
        {
          err(DTR("Unknown transmission status."));
        }
      }      

      //! Check timeout counter for overflow if there is
      //! an open transmission ticket
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
          m_driver->runModem();
          checkTimeout();

          waitForMessages(0.1);
        }
      }
    };
  }
}

DUNE_TASK
