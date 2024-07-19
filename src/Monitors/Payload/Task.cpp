//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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

// Local headers.
#include "IrFragments.hpp"
#include "Storage.hpp"

namespace Monitors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace Payload
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
      //! Payload timeout.
      double timeout;
      //! List of messages to send.
      std::vector<std::string> pay_msgs;
      //! Maximum iridium message size.
      uint32_t max_payload;
      //! Iridium messages destination.
      std::string destination;
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

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Send watchdog.
      Counter<double> m_send_wdog;
      //! Request identifier.
      uint16_t m_req_id;
      //! Transmission fragment id.
      uint8_t m_transmission_id;
      //! Map with messages waiting for send ack.
      std::map<uint16_t, const IMC::Message*> m_ack_map;
      //! Iridium fragment message map.
      std::map<uint16_t, IrFragment*> m_ir_map;
      //! Message filter.
      MessageFilter m_filter;
      //! Payload storage.
      Storage m_storage;
      //! Plan Control state.
      IMC::PlanControlState m_pcs;
      //! Entity List.
      IMC::EntityList m_elist;
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
        m_storage(this)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER, Tasks::Parameter::VISIBILITY_DEVELOPER, true);

        param("Payload timeout", m_args.timeout)
          .defaultValue("60.0")
          .description("Payload timeout in seconds.");

        param("Payload Messages", m_args.pay_msgs)
          .defaultValue("")
          .description("List of messages <Message>:<Entity> to send using Iridium.");

        param("Maximum iridium payload size", m_args.max_payload)
          .defaultValue("259")
          .description("Maximum size of iridium payload messages in bytes.");

        param("Destination", m_args.destination)
          .defaultValue("")
          .description("Destination for iridium messages.");

        param("Rate Limiters", m_args.rate_lims)
          .description("List of <Message>:<Frequency> to send messages at a specific rate.");

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
        m_send_wdog.setTop(m_args.timeout);

        // Process rate limiters.
        if (paramChanged(m_args.rate_lims))
          m_filter.setupRates(m_args.rate_lims);

        // Process filtered entities.
        if (paramChanged(m_args.entities_flt))
          m_filter.setupEntities(m_args.entities_flt, this);
      }

      unsigned
      tryResolveEntity(const std::string& name)
      {
        try
        {
          return resolveEntity(name);
        }
        catch (...)
        {
          err("Entity %s not found", name.c_str());
        }

        return 0;
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        // Create bindings for payload messages.
        for (auto&& i : m_args.pay_msgs)
        {
          spew("Splitting %s", i.c_str());
          std::vector<std::string> param;
          String::split(i, ":", param);
          if (param.size() != 2)
          {
            err("invalid message format %s", i.c_str());
            continue;
          }

          inf("Add message %s from %s to payload", param[0].c_str(), param[1].c_str());
          unsigned msg_id = IMC::Factory::getIdFromAbbrev(param[0]);
          unsigned eid = tryResolveEntity(param[1]);
          m_storage.addToPayload(eid, msg_id);

          // Bind message to consumer.
          bind(IMC::Factory::getIdFromAbbrev(param[0]),
               new Consumer<Task, IMC::Message>(*this, &Task::consumePayload));
        }

        bind(this, m_args.msgs);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_send_wdog.setTop(m_args.timeout);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Consume payload messages.
      void
      consumePayload(const IMC::Message* msg)
      {
        m_storage.store(msg);
      }

      //! Consume for on request control messages
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

        if (m_ack_map.find(msg->req_id) == m_ack_map.end())
          return;

        switch (msg->status)
        {
          case IMC::IridiumTxStatus::TXSTATUS_OK:
          {
            spew("Received ack for message %d", msg->req_id);
            const Message*& sent = m_ack_map[msg->req_id];

            Memory::clear(sent);
            m_ack_map.erase(msg->req_id);
          }
          break;

          case IMC::IridiumTxStatus::TXSTATUS_EXPIRED:
          {
            spew("received expired ack for message %d", msg->req_id);
            const Message*& sent = (m_ack_map[msg->req_id]);
            if (sent->getId() == TransmissionRequest::getIdStatic())
            {
              TransmissionRequest* ptr = (TransmissionRequest*)sent;
              Message* inline_msg = ptr->msg_data.get();
              spew("discarding %s", inline_msg->getName());
            }
            else
              spew("discarding %s", sent->getName());

            Memory::clear(sent);
            m_ack_map.erase(msg->req_id);
          }
          break;

          default:
            break;
        }
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
      consume(const IMC::PlanDB* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->op != PlanDB::DBOP_GET_INFO && msg->op != PlanDB::DBOP_GET_STATE
            && msg->op != PlanDB::DBOP_GET)
          return;

        debug("type %s op %s - %s", c_db_types[msg->type], c_db_op[msg->op], msg->plan_id.c_str());

        auto it = m_iri_subs.find(msg->getDestination());
        if (it == m_iri_subs.end())
          return;

        sendIridiumMsg(msg);
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

        m_elist = *msg;
      }

      //! Split buffer into chunks.
      //! @param[in] bfr buffer to split.
      //! @param[in] bfr_size buffer size.
      //! @param[in] chunk_size size of each chunk.
      //! @param[out] chunks vector of chunks.
      void
      splitBuffer(const uint8_t* bfr, size_t bfr_size, size_t chunk_size,
                  std::vector<std::vector<char>>& chunks)
      {
        for (size_t offset = 0; offset < bfr_size; offset += chunk_size)
        {
          size_t size = std::min(bfr_size - offset, chunk_size);

          const uint8_t* iter = bfr + offset;
          std::vector<char> chunk(iter, iter + size);

          chunks.push_back(chunk);
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
          return;

        IridiumOperation* op = (IridiumOperation*)ir_msg;
        double elapsed = Clock::getSinceEpoch() - op->ts;
        if (elapsed > 180.0)
        {
          inf("expired operation from %d (-%f seconds)", op->source, elapsed);
          return;
        }

        switch (op->type)
        {
          case IridiumOperation::OP_DEACTIVATE:
          {
            auto it = m_iri_subs.find(op->source);
            if (it == m_iri_subs.end())
              return;

            m_iri_subs.erase(it);
          }
          break;

          case IridiumOperation::OP_ACTIVATE:
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
      }

      void
      onIridiumActivation(unsigned id)
      {
        debug("Activating iridium for %d", id);

        //? Send All EntityState messages?

        sendIridiumMsg(&m_elist);
        sendIridiumMsg(&m_pcs);
      }

      void
      sendIMCFragments(const IMC::Message* msg)
      {
        if (!isActive())
          return;

        Network::Fragments frags(const_cast<IMC::Message*>(msg), m_args.max_payload);

        for (int i = 0; i < frags.getNumberOfFragments(); i++)
        {
          IMC::MessagePart* msg_frag = frags.getFragment(i);
          sendInline(msg_frag);
        }
      }

      //! Send message as inline request.
      void
      sendInline(const IMC::Message* msg)
      {
        // Discard messages if not active.
        if (!isActive())
          return;

        IMC::TransmissionRequest tr;
        tr.setDestination(getSystemId());

        tr.req_id = m_req_id++;
        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;
        tr.deadline = Clock::getSinceEpoch() + m_args.ttl;
        tr.msg_data.set(*msg);

        dispatchRequest(tr, tr.req_id);
        trace("Sent message (%d) %s as inline", tr.req_id, msg->getName());
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

        dispatchRequest(tr, tr.req_id);
        trace("Sent message (%d) %s as raw", tr.req_id, msg->getName());
      }

      void
      sendIridiumMsg(const IMC::Message* msg)
      {
        debug("send msg %s", msg->getName());
        if (msg->getPayloadSerializationSize() > m_args.max_payload)
          sendIMCFragments(msg);
        else
          sendInline(msg);
      }

      void
      dispatchRequest(IMC::Message& msg, uint16_t id)
      {
        msg.setDestination(getSystemId());
        m_ack_map[id] = msg.clone();
        dispatch(msg);
      }

      //! Send payload messages in buffer.
      //! @return true if messages were sent, false otherwise.
      bool
      sendPayloadMessages(void)
      {
        spew("Sending payload messages %d of %d", m_storage.m_msg_count, m_storage.m_max_msg);

        std::list<const IMC::Message*> lst;
        m_storage.getPayload(lst);

        for (auto it = lst.begin(); it != lst.end(); ++it)
        {
          const IMC::Message* msg = *it;
          debug("Sending message [%0.3f s] - %s", msg->getTimeStamp(), msg->getName());
          sendIridiumMsg(msg);
        }

        m_storage.clear();
        return true;
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

          if (m_send_wdog.overflow())
          {
            if (sendPayloadMessages())
              m_send_wdog.reset();
          }

          if (m_iri_subs.empty())
            continue;

          // Check if iridium subscriber is still active.
          for (auto iter = m_iri_subs.begin(); iter != m_iri_subs.end(); iter++)
          {
            double elapsed = Clock::getSinceEpoch() - iter->second;
            if (elapsed > m_args.ir_timeout)
            {
              inf("deactivating iridium for %d (-%f seconds)", iter->first,
                  elapsed - m_args.ir_timeout);
              m_iri_subs.erase(iter);
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
