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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <nlohmann-json/json.hpp>

namespace UserInterfaces
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Bernardo Gabriel
  namespace Webpage
  {  
    namespace Sensors
    {
      using DUNE_NAMESPACES;
      using json = nlohmann::json;

      //! Request uri.
      constexpr const char* c_request_uri = "/dune/sensors";
      //! Section id.
      constexpr const char* c_section_id = "Sensors";

      struct Arguments
      {
        //! List of messages to subscribe.
        std::vector<std::string> transports;
        //! Rate limits.
        std::vector<std::string> rlim;
        //! Filtered entities.
        std::vector<std::string> entities_flt;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Arguments.
        Arguments m_args;
        //! Table of messages.
        std::map<unsigned, DUNE::IMC::Message*> m_msgs;
        //! Message filter.
        MessageFilter m_rl;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx)
        {
          param("Transports", m_args.transports)
          .defaultValue("")
          .description("Messages to transport");

          param("Rate Limiters", m_args.rlim)
          .defaultValue("")
          .description("List of <Message>:<Frequency>");

          param("Filtered Entities", m_args.entities_flt)
          .description("List of <Message>:<Entity>+<Entity> that define the source entities allowed to pass message of a specific message type.");

          bind<IMC::HTTPAction>(this);
        }

        ~Task(void)
        {
          std::map<unsigned, IMC::Message*>::iterator itr = m_msgs.begin();
          for (; itr != m_msgs.end(); ++itr)
            delete itr->second;
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
          registerWebpageSection();
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
        }

        void
        registerWebpageSection(void)
        {
          IMC::HTTPAction action;
          action.op = IMC::HTTPAction::OP_REGISTER;
          action.data.assign(c_section_id, c_section_id + std::strlen(c_section_id));
          dispatch(action);
        }

        bool
        matchURL(const char* url, const char* str, bool fragment = false)
        {
          if (fragment)
          {
            int size = std::strlen(str);
            return (std::strncmp(url, str, size) == 0);
          }

          return (std::strcmp(url, str) == 0);
        }

        std::string
        sensorsJSON(void)
        {
          json j;
          auto& messages = j["messages"];
          for (const auto& msg: m_msgs)
          {
            std::ostringstream os;
            msg.second->toJSON(os);
            messages += os.str();
          }

          return j.dump();
        }

        void
        consume(const IMC::HTTPAction* msg)
        {
          if (msg->getSource() != getSystemId())
            return;
          
          if (msg->op != IMC::HTTPAction::OP_REQUEST)
            return;
          
          if (matchURL(msg->data.data(), c_request_uri))
          {
            IMC::HTTPAction action;
            action.setDestination(msg->getSource());
            action.setDestinationEntity(msg->getSourceEntity());
            action.id = msg->id;
            action.op = IMC::HTTPAction::OP_REPLY;
            std::string text = sensorsJSON();
            action.data.assign(text.begin(), text.end());
            dispatch(action);
          }
        }

        void
        consume(const IMC::Message* msg)
        {
          if (msg->getSource() != getSystemId())
            return;
          
          if (m_rl.filter(msg))
            return;

          try
          {
            IMC::Message* tmsg = msg->clone();
            auto entityId = tmsg->getSourceEntity();
            auto entityLabel = resolveEntity(entityId);
            unsigned key = tmsg->getId() << 24 | tmsg->getSubId() << 8 | entityId;

            if (m_msgs[key])
              delete m_msgs[key];

            m_msgs[key] = tmsg;
          }
          catch(const std::exception& e)
          {
            err(DTR("failed to parse message %s: %s"), msg->getName(), e.what());
            return;
          }
        }

        //! Main loop.
        void
        onMain(void)
        {
          m_rl.setupRates(m_args.rlim);
          m_rl.setupEntities(m_args.entities_flt, this);
          bind(this, m_args.transports);

          while (!stopping())
          {
            waitForMessages(1.0);
          }
        }
      };
    }
  }
}

DUNE_TASK
