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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Network/Fragments.hpp>

#include "PersistentMessage.hpp"

namespace Transports
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace IridiumOperation
  {
    using DUNE_NAMESPACES;

    //! Database types string representation.
    static const char* c_db_types[] = {
      "Request", "Success", "Failure", "In Progress", "Unknown",
    };

    //! Database operation string representation.
    static const char* c_db_op[] = {
      "Set", "Delete", "Get", "Get Info", "Clear", "Get State", "Get DB State", "Boot", "Unknown",
    };

    struct Arguments
    {
      //! Maximum iridium message size.
      uint32_t max_payload;
      //! Rate limiters.
      std::vector<std::string> rate_lims;
      //! Filtered entities.
      std::vector<std::string> entities_flt;
      //! List of messages to send.
      std::vector<std::string> msgs;
      //! Message time to live.
      uint16_t ttl;
      //! Iridium operation timeout.
      uint32_t ir_timeout;
    };

    //! Shared pointer to PersistentMessage.
    typedef std::shared_ptr<PersistentMessage> PersistentPtr;

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Request identifier.
      uint16_t m_req_id;
      //! Map with messages waiting for send ack.
      std::map<uint16_t, PersistentPtr> m_ack_map;
      //! Message filter.
      MessageFilter m_filter;
      //! Plan Control state.
      IMC::PlanControlState m_pcs;
      //! Entity State map.
      std::map<uint32_t, EntityState> m_entity_map;
      //! List of iridium subscribers. <ID, Timestamp>.
      std::map<unsigned, double> m_iri_subs;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_req_id(0),
        m_filter(false)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL, Tasks::Parameter::VISIBILITY_USER, false);

        param("Maximum iridium payload size", m_args.max_payload)
          .defaultValue("259")
          .description("Maximum size of iridium payload messages in bytes.");

        param("Rate Limiters", m_args.rate_lims)
          .description("List of <Message>:<Period> to send messages at a specific period.");

        param("Filtered Entities", m_args.entities_flt)
          .description("List of <Message>:<Entity>+<Entity> that define the source entities "
                       "allowed to pass message of a specific message type.");

        param("Transport", m_args.msgs)
          .defaultValue("")
          .description("List of messages to transport");

        param("Message TTL", m_args.ttl)
          .defaultValue("30")
          .description("Time to live for iridium messages.");

        param("Iridium Operation Timeout", m_args.ir_timeout)
          .defaultValue("600")
          .description("Iridium operation timeout in seconds.");

        bind<IMC::IridiumTxStatus>(this);
        bind<IMC::IridiumMsgRx>(this);
        bind<IMC::EntityState>(this);
        bind<IMC::PlanDB>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::EntityList>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // Process rate limiters.
        if (paramChanged(m_args.rate_lims))
          m_filter.setupRates(m_args.rate_lims);

        // Process filtered entities.
        if (paramChanged(m_args.entities_flt))
          m_filter.setupEntities(m_args.entities_flt, this);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      { }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        bind(this, m_args.msgs);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::PlanDB* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->op != PlanDB::DBOP_GET_INFO && msg->op != PlanDB::DBOP_GET)
          return;

        debug("type %s op %s - %s", c_db_types[msg->type], c_db_op[msg->op], msg->plan_id.c_str());

        auto it = m_iri_subs.find(msg->getDestination());
        if (it == m_iri_subs.end())
          return;

        sendIridiumMsg(msg);
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (m_entity_map.find(msg->getSourceEntity()) == m_entity_map.end())
        {
          // First state message.
          EntityState& ent_state = m_entity_map[msg->getSourceEntity()];
          ent_state = *msg;
          return;
        }

        EntityState& ent = m_entity_map[msg->getSourceEntity()];
        if (ent.state == msg->state)  // Same state, ignore.
          return;

        // If entity updated from boot to normal, ignore.
        if (ent.state == EntityState::ESTA_BOOT && msg->state == EntityState::ESTA_NORMAL)
        {
          ent = *msg;
          return;
        }

        ent = *msg;

        if (m_iri_subs.empty())
          return;

        sendRaw(msg);
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->state == m_pcs.state && msg->plan_id == m_pcs.plan_id
            && msg->man_id == m_pcs.man_id)
          return;

        m_pcs = *msg;

        if (m_iri_subs.empty())
          return;

        sendIridiumMsg(msg);
      }

      void
      consume(const IMC::EntityList* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->op != EntityList::OP_REPORT)
          return;

        if (m_iri_subs.empty())
          return;

        auto it = m_iri_subs.find(msg->getDestination());
        if (it == m_iri_subs.end())
          return;

        sendIridiumMsg(msg, true);
      }

      //! Consume for control messages
      void
      consume(const IMC::Message* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (m_iri_subs.empty())
          return;

        if (m_filter.filter(msg))
          return;

        sendIridiumMsg(msg);
      }

      void
      consume(const IMC::IridiumTxStatus* msg)
      {
        if (msg->getDestination() != getSystemId() && msg->getDestinationEntity() != getEntityId())
          return;

        auto it = m_ack_map.find(msg->req_id);
        if (it == m_ack_map.end())
          return;

        spew("new status (%d) for message %d", msg->status, msg->req_id);

        switch (msg->status)
        {
          case IMC::IridiumTxStatus::TXSTATUS_OK:
          {
            trace("message ack %d", msg->req_id);
            PersistentPtr& pmsg = it->second;
            if (!pmsg->onSuccess(msg->req_id))
              return;

            spew("all messages sent for %d", msg->req_id);
            // Remove message from map and all its IDs.
            std::set<uint16_t> ids = pmsg->getIDs();
            for (uint16_t id : ids)
              m_ack_map.erase(id);
          }
          break;

          case IMC::IridiumTxStatus::TXSTATUS_EXPIRED:
          {
            PersistentPtr& pmsg = it->second;
            // Check if message should be resent.
            const IMC::Message* retry = pmsg->onFailure(msg->req_id);
            if (retry)
            {
              trace("resending message (%d) %s", msg->req_id, retry->getName());
              // Resend message.
              dispatchRequest(retry, msg->req_id);
              return;
            }

            spew("message failed %d - deleting ...", msg->req_id);

            // Delete message from map and all its IDs.
            std::set<uint16_t> ids = pmsg->getIDs();
            for (uint16_t id : ids)
              m_ack_map.erase(id);
          }
          break;

          default:
            war("received %d ack for message %d", msg->status, msg->req_id);
            break;
        }
      }

      void
      consume(const IMC::IridiumMsgRx* msg)
      {
        IridiumMessage* ir_msg = nullptr;
        ir_msg = IridiumMessage::deserialize(msg);
        if (ir_msg == nullptr)
          return;

        if (ir_msg->msg_id != ID_UPDATE_OP)
        {
          if (!isActive())
            requestActivation();

          m_iri_subs[ir_msg->source] = Clock::getSinceEpoch();
          onIridiumActivation(ir_msg->source);
          delete ir_msg;
          return;
        }

        IMC::IridiumOperation* op = (IMC::IridiumOperation*)ir_msg;
        double elapsed = Clock::getSinceEpoch() - op->ts;
        if (elapsed > 180.0)
        {
          inf("expired operation from %d (-%f seconds)", op->source, elapsed);
          return;
        }

        switch (op->type)
        {
          case IMC::IridiumOperation::OP_DEACTIVATE:
          {
            auto it = m_iri_subs.find(op->source);
            if (it == m_iri_subs.end())
              return;

            m_iri_subs.erase(it);
          }
          break;

          case IMC::IridiumOperation::OP_ACTIVATE:
          {
            auto it = m_iri_subs.find(op->source);
            if (it != m_iri_subs.end())
            {
              it->second = Clock::getSinceEpoch();
              return;
            }

            m_iri_subs[op->source] = Clock::getSinceEpoch();

            if (!isActive())
              requestActivation();

            onIridiumActivation(op->source);
          }
          break;

          default:
            inf("invalid operation type %d", op->type);
            break;
        }

        delete op;
      }

      void
      onIridiumActivation(unsigned id)
      {
        debug("Activating iridium for %d", id);

        //? Send All EntityState messages?

        sendIridiumMsg(&m_pcs);
      }

      void
      sendRaw(const IMC::Message* msg)
      {
        // Discard messages if not active.
        if (!isActive())
          return;

        IMC::TransmissionRequest tr;
        tr.setDestination(getSystemId());

        tr.req_id = m_req_id++;
        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_RAW;
        tr.deadline = Clock::getSinceEpoch() + m_args.ttl;

        uint8_t bfr[DUNE_IMC_CONST_MAX_SIZE];

        ImcFullIridium ir_msg(msg->clone());

        uint16_t len = ir_msg.serialize(bfr);
        tr.raw_data.assign(bfr, bfr + len);

        dispatch(tr);
        trace("Sent message (%d) %s as raw", tr.req_id, msg->getName());
      }

      void
      sendIridiumMsg(const IMC::Message* msg, bool persistent = false)
      {
        debug("send msg %s", msg->getName());
        if (msg->getPayloadSerializationSize() > m_args.max_payload)
          sendIMCFragments(msg, persistent);
        else
          sendInline(msg, persistent);
      }

      void
      sendIMCFragments(const IMC::Message* msg, bool persistent = false)
      {
        if (!isActive())
          return;

        Network::Fragments frags(const_cast<IMC::Message*>(msg), m_args.max_payload);

        PersistentPtr pmsg;

        if (persistent)
          pmsg = std::make_shared<PersistentMessage>(msg);

        IMC::MessagePart* frag = frags.getFragment(0);
        inf("sending %d fragments of message %s (uid:%d) to destination %d",
                  frags.getNumberOfFragments(), msg->getName(), frag->uid, msg->getDestination());

        for (int i = 0; i < frags.getNumberOfFragments(); i++)
        {
          IMC::MessagePart* msg_frag = frags.getFragment(i);

          uint16_t tid = m_req_id++;
          dispatchRequest(msg_frag, tid);

          if (!persistent)
            continue;

          pmsg->addMessage(tid, msg_frag);
          m_ack_map[tid] = pmsg;
        }
      }

      //! Send message as inline request.
      void
      sendInline(const IMC::Message* msg, bool persistent = false)
      {
        // Discard messages if not active.
        if (!isActive())
          return;

        uint16_t tid = m_req_id++;
        dispatchRequest(msg, tid);

        if (!persistent)
          return;

        PersistentPtr pmsg = std::make_shared<PersistentMessage>(msg);
        pmsg->addMessage(tid, msg);
        m_ack_map[tid] = pmsg;
      }

      //! Dispatch Transmission request message.
      //! @param[in] msg message to send.
      //! @param[in] id request id.
      void
      dispatchRequest(const IMC::Message* msg, uint16_t id)
      {
        IMC::TransmissionRequest tr;
        tr.setDestination(getSystemId());

        tr.req_id = id;
        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;
        tr.deadline = Clock::getSinceEpoch() + m_args.ttl;
        tr.msg_data.set(*msg);

        dispatch(tr);
        trace("request message (%d) %s as inline", id, msg->getName());
      }

      void
      checkIridiumSubs(void)
      {
        // Check if iridium subscriber is still active.
        for (auto iter = m_iri_subs.begin(); iter != m_iri_subs.end(); )
        {
          double elapsed = Clock::getSinceEpoch() - iter->second;
          if (elapsed < m_args.ir_timeout)
          {
            ++iter;
            continue;
          }

          inf("deactivating iridium for %d (-%f seconds)", iter->first,
              elapsed - m_args.ir_timeout);
          iter = m_iri_subs.erase(iter);
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (!isActive())
            continue;

          if (m_iri_subs.empty())
            continue;

          checkIridiumSubs();
        }
      }
    };
  }
}

DUNE_TASK
