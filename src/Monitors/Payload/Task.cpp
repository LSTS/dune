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

#include <sstream>
#include <unordered_set>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Network/Fragments.hpp>

// Local headers.
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

    struct Arguments
    {
      //! Payload timeout.
      double timeout;
      //! List of messages to send.
      std::vector<std::string> pay_msgs;
      //! Maximum iridium message size.
      uint32_t max_payload;
      //! Message time to live.
      uint16_t ttl;
      //! Period where retransmission request of fragments is valid.
      uint32_t frag_retransmit_period;
    };

    struct FragmentsRetransmission
    {
      //! Fragments.
      Network::Fragments* m_fragments;
      //! Fragment retransmission request period.
      Time::Counter<uint32_t> m_period;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Send watchdog.
      Counter<double> m_send_wdog;
      //! Request identifier.
      uint16_t m_req_id;
      //! Payload storage.
      Storage m_storage;
      //! Temporary list of message fragments for retransmission.
      std::map<uint32_t, FragmentsRetransmission> m_retransmissions;
      //! Timer to check retransmissions.
      Time::Counter<uint32_t> m_retransmit_timer;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_req_id(1000),
        m_storage(this),
        m_retransmit_timer(0)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER, Tasks::Parameter::VISIBILITY_USER, true);

        param("Payload timeout", m_args.timeout)
          .defaultValue("60.0")
          .description("Payload timeout in seconds.");

        param("Payload Messages", m_args.pay_msgs)
          .defaultValue("")
          .description("List of messages <Message>:<Entity> to send using Iridium.");

        param("Maximum payload size", m_args.max_payload)
          .defaultValue("259")
          .description("Maximum size of iridium payload messages in bytes.");

        param("Message TTL", m_args.ttl)
          .defaultValue("30")
          .description("Time to live for iridium messages.");

        param("Fragments Retrasmission Request Timeout", m_args.frag_retransmit_period)
          .minimumValue("0")
          .defaultValue("1800")
          .units(Units::Second)
          .description("Represents the amount of time a message is valid for retransmission. "
                       "If set to 0, retransmission requests are not allowed.");

        bind<IMC::MessagePart>(this);
        bind<IMC::MessagePartControl>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_send_wdog.setTop(m_args.timeout);
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
          war("Entity %s not found", name.c_str());
        }

        return AddressResolver::invalid();
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        // Create bindings for payload messages.
        for (auto&& i : m_args.pay_msgs)
        {
          spew("Splitting %s", i.c_str());
          std::vector<std::string> params;
          String::split(i, ":", params);
          if (params.size() != 2)
          {
            err("invalid message format %s", i.c_str());
            continue;
          }
          else if (params[0].compare("MessagePart") == 0 ||
                   params[0].compare("MessagePartControl") == 0)
          {
            inf("skipping: %s", params[0].c_str());
            continue;
          }
          else if (params[1].empty())
          {
            err("empty entity name for message %s", params[0].c_str());
            continue;
          }
          else if (IMC::Factory::getIdFromAbbrev(params[0]) == 0)
          {
            err("message %s not found in IMC factory", params[0].c_str());
            continue;
          }
          else if (!AddressResolver::isValid(tryResolveEntity(params[1])))
          {
            continue;
          }

          inf("Add message %s from %s to payload", params[0].c_str(), params[1].c_str());
          unsigned msg_id = IMC::Factory::getIdFromAbbrev(params[0]);
          unsigned eid = tryResolveEntity(params[1]);
          m_storage.addToPayload(eid, msg_id);

          // Bind message to consumer.
          bind(IMC::Factory::getIdFromAbbrev(params[0]),
               new Consumer<Task, IMC::Message>(*this, &Task::consumePayload));
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onResourceInitialization(void)
      {
        for (auto& it: m_retransmissions)
          delete it.second.m_fragments;
        m_retransmissions.clear();
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

      std::unordered_set<int>
      getRetransmissionList(Network::Fragments* fragments, const std::string& request)
      {
        if (request.empty())
          return {};

        auto frag_list = request;
        auto negation = frag_list.front() == '!';
        if (negation)
          frag_list.erase(0, 1);

        std::vector<int> frag_ids;
        Utils::String::split(frag_list, ",", frag_ids);

        if (!negation)
          return std::unordered_set<int>(frag_ids.begin(), frag_ids.end());

        std::vector<int> temp(fragments->getNumberOfFragments()); 
        std::iota(temp.begin(), temp.end(), 0);
        std::unordered_set<int> result(temp.begin(), temp.end());
        for (const auto& id : frag_ids)
          result.erase(id);

        return result;
      }

      void
      consume(const IMC::MessagePart* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() == getEntityId())
          return;

        std::map<uint32_t, FragmentsRetransmission>::iterator it = m_retransmissions.find(msg->uid);
        if (it != m_retransmissions.end())
        {
          trace("%s produced a Fragmented message with uid %u"
                "holding retransmission for fragments with this uid already exists, discarding it",
                resolveEntity(msg->getSourceEntity()).c_str(),
                msg->uid);
          delete it->second.m_fragments;
          m_retransmissions.erase(it);
        }
      }

      void
      consume(const IMC::MessagePartControl* msg)
      {
        if (msg->op != IMC::MessagePartControl::OP_REQUEST_RETRANSMIT)
          return;

        if (m_args.frag_retransmit_period == 0)
          return;

        if (msg->frag_ids.empty())
          return;

        std::map<uint32_t, FragmentsRetransmission>::iterator it = m_retransmissions.find(msg->uid);
        if (it == m_retransmissions.end())
          return;

        std::unordered_set<int> frags = getRetransmissionList(it->second.m_fragments, msg->frag_ids);
        for (const auto& frag: frags)
        {
          IMC::MessagePart* msg_frag = it->second.m_fragments->getFragment(frag);
          sendInline(msg_frag);
        }
      }

      void
      sendIMCFragments(const IMC::Message* msg)
      {
        if (!isActive())
          return;

        Network::Fragments* frags = new Network::Fragments(const_cast<IMC::Message*>(msg), m_args.max_payload);
        IMC::MessagePart* frag = frags->getFragment(0);
        dispatch(frag);
        inf("sending %d fragments of message %s (uid:%d) to destination %d",
                  frags->getNumberOfFragments(), msg->getName(), frag->uid, msg->getDestination());

        for (int i = 0; i < frags->getNumberOfFragments(); i++)
        {
          IMC::MessagePart* msg_frag = frags->getFragment(i);
          sendInline(msg_frag);
        }

        if (m_args.frag_retransmit_period > 0)
        {
          FragmentsRetransmission retransmission;
          retransmission.m_fragments = frags;
          retransmission.m_period.setTop(m_args.frag_retransmit_period);
          if (m_retransmit_timer.getTop() == 0)
            m_retransmit_timer.setTop(m_args.frag_retransmit_period);

          
          std::map<uint32_t, FragmentsRetransmission>::iterator it = m_retransmissions.find(frag->uid);
          if (it != m_retransmissions.end())
          {
            trace("discarding previous Fragmented message with uid %u, "
                  "as new Fragmented message with this uid was just created",
                  frag->uid);
            delete it->second.m_fragments;
            m_retransmissions.erase(it);
          }

          m_retransmissions[frag->uid] = retransmission;
        }
        else
        {
          delete frags;
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

        dispatch(tr);
        trace("Sent message (%d) %s as inline", tr.req_id, msg->getName());
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

      void
      checkRetransmissions(void)
      {
        if (m_retransmissions.empty())
        {
          m_retransmit_timer.setTop(0);
          return;
        }

        if (!m_retransmit_timer.overflow())
          return;

        std::map<uint32_t, FragmentsRetransmission>::iterator it = m_retransmissions.begin();
        for (; it != m_retransmissions.end(); it++)
        {
          const auto remaining = it->second.m_period.getRemaining();
          if (remaining > 0)
          {
            if (remaining < m_retransmit_timer.getRemaining())
              m_retransmit_timer.setTop(remaining);

            continue;
          }

          delete it->second.m_fragments;
          m_retransmissions.erase(it);
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

          checkRetransmissions();
          std::ostringstream description;
          description << "active";
          description << " | "
                      << "holding a total of "
                      << m_retransmissions.size()
                      << " messages for possible retransmission";
          setEntityState(IMC::EntityState::ESTA_NORMAL, description.str());

          if (!m_send_wdog.overflow())
            continue;

          if (sendPayloadMessages())
            m_send_wdog.reset();
        }
      }
    };
  }
}

DUNE_TASK
