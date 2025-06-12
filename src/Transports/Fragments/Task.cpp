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
// Author: Jose Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Network/FragmentedMessage.hpp>

namespace Transports
{
  namespace Fragments
  {
    using DUNE_NAMESPACES;

    //! Garbage collector timeout in seconds.
    static const uint16_t c_gc_timeout = 120;

    struct Arguments
    {
      // Reception timeout.
      float max_age_secs;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Map of incoming fragmented messages.
      //! Key is a hash of the message uid and source.
      //! Value is a pair of the fragmented message and a boolean
      //! indicating if the message is still being received.
      std::map<uint32_t, std::pair<FragmentedMessage, bool>> m_incoming;
      //! Garbage collector counter.
      Time::Counter<float> m_gc_counter;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_gc_counter(c_gc_timeout)
      {
        param("Reception timeout", m_args.max_age_secs)
        .defaultValue("1800")
        .description("Maximum amount of seconds to wait for missing fragments in incoming messages");

        bind<IMC::MessagePart>(this);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onResourceRelease(void)
      {
        m_incoming.clear();
      }

      void
      consume(const IMC::MessagePart* msg)
      {
        const auto source = msg->getSource();
        if (source == getSystemId())
          return;

        int hash = (msg->uid << 16) | source;

        if (m_incoming.find(hash) == m_incoming.end())
        {
          FragmentedMessage incMsg;
          incMsg.setParentTask(this);
          m_incoming[hash].first = incMsg;
        }

        IMC::Message* res = m_incoming[hash].first.setFragment(msg);
        m_incoming[hash].second = true;
        debug("Incoming message fragment for message %u (system: 0x%x) (%d still missing)",
              msg->uid,
              source,
              m_incoming[hash].first.getFragmentsMissing());

        if (res != NULL)
        {
          debug("created message %s", res->getName());
          res->setSource(msg->getSource());
          res->setDestination(msg->getDestination());
          dispatch(res);
          m_incoming.erase(hash);
        }
      }

      bool
      messageRipper(void)
      {
        debug("ripping old messages");

        std::map<uint32_t, std::pair<FragmentedMessage, bool>>::iterator it = m_incoming.begin();
        std::vector<uint32_t> remove;
        for ( ; it != m_incoming.end(); ++it)
        {
          const auto remaining = m_args.max_age_secs - it->second.first.getAge();
          if (remaining <= 0.0f)
          {
            if (it->second.second)
            {              
              IMC::MessagePartControl mpc;
              const uint16_t destination = static_cast<uint16_t>(it->first & 0xFFFF);
              mpc.setDestination(destination);
              mpc.uid = static_cast<uint8_t>((it->first >> 16) & 0xFF);
              mpc.op = IMC::MessagePartControl::OP_REQUEST_RETRANSMIT;
              if (it->second.first.getFragmentsMissing() <= it->second.first.getFragmentsReceived())
              {
                it->second.first.getFragmentsMissing(mpc.frag_ids);
              }
              else
              {
                it->second.first.getFragmentsReceived(mpc.frag_ids);
                mpc.frag_ids.insert(0, "!");
              }
              it->second.first.resetAge();
              it->second.second = false;
              inf(DTR("Incoming message with uid %u (system: 0x%x) is still incomplete (%d fragments missing). "
                      "Requesting retransmission."), mpc.uid, destination, it->second.first.getFragmentsMissing());
              dispatch(mpc);
              continue;
            }

            remove.push_back(it->first);

            // message has died of natural causes...
            const auto uid = static_cast<uint8_t>((it->first >> 16) & 0xFF);
            const auto dest = static_cast<uint16_t>(it->first & 0xFFFF);
            war(DTR("Removed incoming message with uid %u (system: 0x%x) from memory (%d fragments still missing)."),
                uid,
                dest,
                it->second.first.getFragmentsMissing());
          }
          else if (remaining < m_gc_counter.getRemaining())
          {
            m_gc_counter.setTop(remaining);
            return false;
          }
        }

        for (size_t i = 0; i < remove.size(); ++i)
          m_incoming.erase(remove[i]);

        return true;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_gc_counter.overflow())
          {
            if (messageRipper())
              m_gc_counter.setTop(c_gc_timeout);
          }
        }
      }
    };
  }
}

DUNE_TASK
