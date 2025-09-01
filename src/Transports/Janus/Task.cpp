//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venâncio (Based on Transports.UAN)                          *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Parser.hpp"

namespace Transports
{
  namespace Janus
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Sequence number. Starts at 0x7FFF, 
      //! so as not to overlap with reqids from Transports.UAN.
      uint16_t m_reqid;
      //! Map of messages to send
      std::map<uint16_t, IMC::UamJanusPacket*> m_transmission_requests;
      //! Timer for sending preceding message
      Counter<double> m_msg_send_timer;
      //! When "false" processQueue must wait
      bool m_can_send;
      //! Time scale convertion for reserve time and repeat interval.
      Parser m_parser;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_reqid(0x7FFF),
        m_can_send(true),
        m_parser(this)
      {
        // Bind messages.
        bind<IMC::UamJanusPacket>(this);
        bind<IMC::UamRxFrame>(this);
        bind<IMC::UamTxStatus>(this);

        m_msg_send_timer.setTop(2);
      }

      void
      onResourceAcquisition(void)
      {
        
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        IMC::AnnounceService announce;
        announce.service = std::string("imc+any://janus");
        dispatch(announce);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        
      }

      void
      consume(const IMC::UamJanusPacket* msg)
      {
        if (msg->getSource() != getSystemId()
            || msg->getDestination() != getSystemId())
          return;
          
        if (msg->op != IMC::UamJanusPacket::OP_SEND_REQ)
          return;

        addToQueue(msg->clone());
      }

      void
      consume(const IMC::UamRxFrame* msg)
      {
        // Deserialize the baseline packet.
        if (msg->flags == IMC::UamRxFrame::URF_JANUS_BASELINE)
        {
          IMC::UamJanusPacket baseline;

          try
          {
            m_parser.deserializeBaseline(msg->data, baseline);
          }
          catch(const std::exception& e)
          {
            baseline.clear();
            baseline.op = IMC::UamJanusPacket::OP_BASELINE_RECV;
            baseline.error = e.what();
          }
          
          dispatch(baseline);
        }
        else if (msg->flags == IMC::UamRxFrame::URF_JANUS_CARGO)
        {
          // Handle cargo packet.
        }
      }

      void
      consume(const IMC::UamTxStatus* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (m_transmission_requests.find(msg->seq)
            == m_transmission_requests.end()) {
          return;
        }
        uint16_t idOfMsg = msg->seq;

        // const IMC::UamJanusPacket* request = m_transmission_requests[idOfMsg];

        switch (msg->value) {
          case IMC::UamTxStatus::UTS_BUSY:
            // sendAcousticStatus(request,IMC::AcousticStatus::STATUS_BUSY,msg->error);
            m_msg_send_timer.setTop(2);
            m_can_send = true;
            break;

          case IMC::UamTxStatus::UTS_INV_ADDR:
            // sendAcousticStatus(request,IMC::AcousticStatus::STATUS_UNSUPPORTED,msg->error);
            removeFromQueue(idOfMsg);

            break;

          case IMC::UamTxStatus::UTS_DONE:
            // sendAcousticStatus(request,IMC::AcousticStatus::STATUS_SENT,msg->error);
            removeFromQueue(idOfMsg);
            break;

          case IMC::UamTxStatus::UTS_IP:
            // sendAcousticStatus(request,IMC::AcousticStatus::STATUS_IN_PROGRESS,msg->error);

            break;

          case IMC::UamTxStatus::UTS_FAILED:
            // sendAcousticStatus(request,IMC::AcousticStatus::STATUS_ERROR,msg->error);
            removeFromQueue(idOfMsg);

            break;

          default:
            break;

        }
      }

      uint16_t
      createInternalId(){
        if(m_reqid==0xFFFF){
          m_reqid=0;
        }
        else{
          m_reqid++;
        }
        return m_reqid;
      }

      //! Add message to the end of queue
      void
      addToQueue(const IMC::UamJanusPacket* msg)
      {
        m_transmission_requests[createInternalId()] = msg->clone();
      }

      //! Remove message from the queue. Resets timer. And unlocks the queue
      void
      removeFromQueue(uint16_t index)
      {
        delete m_transmission_requests.find(index)->second;
        m_transmission_requests.erase(index);
        m_msg_send_timer.setTop(2);
        m_can_send = true;
      }

      void
      sendFrame(const uint16_t id, const UamJanusPacket& packet)
      {
        IMC::UamTxFrame frame;
        frame.setSource(getSystemId());
        frame.setSourceEntity(getEntityId());
        frame.setDestination(getSystemId());
        frame.flags = IMC::UamTxFrame::UTF_JANUS_SEND;
        frame.seq = id;
        m_parser.serializeBaseline(packet, frame.data);

        dispatch(frame);
      }

      void
      clearTimeouts()
      {
        // Maybe we add timeout to IMC::UamJanusPacket


        // std::map<uint16_t, IMC::AcousticRequest*>::iterator it;
        // it = m_transmission_requests.begin();

        // while (it != m_transmission_requests.end())
        // {
        //   if (it->second->getTimeStamp() + it->second->timeout <= Clock::getSinceEpoch())
        //   {
        //     sendAcousticStatus(it->second,IMC::AcousticStatus::STATUS_INPUT_FAILURE,"Transmission timed out.");
        //     Memory::clear(it->second);
        //     m_transmission_requests.erase(it++);
        //     m_can_send = true;
        //   }
        //   else
        //     ++it;
        // }
      }

      void
      processQueue(void)
      {
        if (m_can_send && !m_transmission_requests.empty())
        {
          m_can_send = false;
          const IMC::UamJanusPacket* req = m_transmission_requests.begin()->second;
          uint16_t id = m_transmission_requests.begin()->first;

          // Serialize Janus packet and send it.
          sendFrame(id, *req);
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if(m_msg_send_timer.overflow())
          {
            clearTimeouts();
            processQueue();
          }
        }
      }
    };
  }
}

DUNE_TASK
