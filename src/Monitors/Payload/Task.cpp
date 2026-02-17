//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
#include <Transports/CommManager/TransmissionSender.hpp>

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
      //! Message time to live.
      uint16_t ttl;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Send watchdog.
      Counter<double> m_send_wdog;
      //! Payload storage.
      Storage m_storage;
      //! Rate limiter for messages.
      //! Maps a hash of (entity_id << 32 | message_id) to a pair of rate and timestamp of last message arrival.
      //! The rate is in seconds and the timestamp is in seconds since epoch.
      std::map<uint64_t, std::pair<unsigned, double>> m_rate_lim;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_storage(this)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER, Tasks::Parameter::VISIBILITY_USER, true);

        param("Payload timeout", m_args.timeout)
          .defaultValue("60.0")
          .description("Payload timeout in seconds.");

        param("Payload Messages", m_args.pay_msgs)
          .defaultValue("")
          .description("List of messages <Message>:<Entity>:<Rate> to send using Iridium. "
                       "The rate is in seconds and is optional. If rate is not specified, "
                       "the message will be sent every time it is received. "
                       "If rate is 0, the message will be ignored.");

        param("Message TTL", m_args.ttl)
          .defaultValue("30")
          .description("Time to live for iridium messages.");
      }

      ~Task(void)
      {
        
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_send_wdog.setTop(m_args.timeout);

        if (paramChanged(m_args.pay_msgs) && !m_rate_lim.empty())
        {
          for (auto&& i : m_args.pay_msgs)
          {
            std::vector<std::string> params;
            String::split(i, ":", params);
            if (params.size() < 3)
              continue;

            try
            {
              unsigned msg_id = IMC::Factory::getIdFromAbbrev(params[0]);
              unsigned eid = tryResolveEntity(params[1]);
              uint64_t hash = (static_cast<uint64_t>(eid) << 32) | msg_id;
              auto it = m_rate_lim.find(hash);
              if (it != m_rate_lim.end())
              {
                if (params.size() == 3)                
                  it->second.first = castLexical<unsigned>(params[2]);
                else
                  m_rate_lim.erase(it);
              }
            }
            catch(...)
            {
              continue;
            }
          }
        }
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
          try
          {
            unsigned msg_id = IMC::Factory::getIdFromAbbrev(params[0]);
            if (params.size() < 2)
            {
              err("invalid message format %s", i.c_str());
              continue;
            }
            else if (params[1].empty())
            {
              err("empty entity name for message %s", params[0].c_str());
              continue;
            }
            else if (msg_id == 0)
            {
              err("message %s not found in IMC factory", params[0].c_str());
              continue;
            }
            else if (!AddressResolver::isValid(tryResolveEntity(params[1])))
            {
              continue;
            }

            debug("Add message %s from %s to payload", params[0].c_str(), params[1].c_str());
            
            unsigned eid = tryResolveEntity(params[1]);
            m_storage.addToPayload(eid, msg_id);
            if (params.size() == 3)
            {
              uint64_t hash = (static_cast<uint64_t>(eid) << 32) | msg_id;
              m_rate_lim[hash] = std::make_pair(castLexical<unsigned>(params[2]), 0);
            }
            // Bind message to consumer.
            bind(msg_id, new Consumer<Task, IMC::Message>(*this, &Task::consumePayload));
          }
          catch(...)
          {
            continue;
          }
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onResourceInitialization(void)
      {
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_storage.clear();
        m_send_wdog.setTop(m_args.timeout);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      bool
      filter(const IMC::Message* msg)
      {
        if (!isActive())
          return false;

        auto curr = Clock::getSinceEpoch();
        uint64_t hash = (static_cast<uint64_t>(msg->getSourceEntity()) << 32) | msg->getId();
        auto it = m_rate_lim.find(hash);
        if (it == m_rate_lim.end())
          return true;

        uint64_t rate = it->second.first;
        if (rate == 0)
          return false;

        auto& last_time = it->second.second;
        if (last_time == 0)
        {
          last_time = curr;
          return true;
        }

        if (curr - last_time < rate)
          return false;

        last_time = curr;
        return true;
      }

      //! Consume payload messages.
      void
      consumePayload(const IMC::Message* msg)
      {
        if (!filter(msg))
          return;

        m_storage.store(msg);
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

        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;
        tr.deadline = Clock::getSinceEpoch() + m_args.ttl;
        tr.msg_data.set(*msg);

        Transports::CommManager::TransmissionSender::dispatch(this, tr);
        trace("Sent message (%d) %s as inline", tr.req_id, msg->getName());
      }

      void
      sendIridiumMsg(const IMC::Message* msg)
      {
        debug("send msg %s", msg->getName());
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

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

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
