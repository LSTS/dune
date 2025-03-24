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

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_req_id(1000),
        m_storage(this)
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
          std::vector<std::string> params;
          String::split(i, ":", params);
          if (params.size() != 2)
          {
            err("invalid message format %s", i.c_str());
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

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (!isActive())
            continue;

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
