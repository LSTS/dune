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
    namespace PowerChannels
    {
      using DUNE_NAMESPACES;
      using json = nlohmann::json;

      //! Request uri.
      constexpr const char* c_request_uri = "/dune/power";
      //! Section id.
      constexpr const char* c_section_id = "Power";
      //! Operation dictionary.
      static const std::map<std::string, uint8_t> c_operation_dict =
      {
        {"on", IMC::PowerChannelControl::PCC_OP_TURN_ON},
        {"off", IMC::PowerChannelControl::PCC_OP_TURN_OFF},
        {"sched_on", IMC::PowerChannelControl::PCC_OP_SCHED_ON},
        {"sched_off", IMC::PowerChannelControl::PCC_OP_SCHED_OFF},
        {"sched_reset", IMC::PowerChannelControl::PCC_OP_SCHED_RESET},
        {"sched_save", IMC::PowerChannelControl::PCC_OP_SAVE}
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! System Power Channels.
        std::map<std::string, uint8_t> m_power_channels;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx)
        {
          bind<IMC::PowerChannelState>(this);
          bind<IMC::HTTPAction>(this);
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
          queryPowerChannelsStates();
          registerWebpageSection();
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
        }

        uint8_t
        getPowerChannelControlOperation(std::string operation)
        {
          const auto res = c_operation_dict.find(operation);
          if (res != c_operation_dict.end())
            return res->second;

          throw std::invalid_argument("Invalid power channel operation: " + operation);
        }

        void
        powerChannelControl(std::string name, std::string op, fp64_t sched_time)
        {
          IMC::PowerChannelControl pcc;
          pcc.setDestination(getSystemId());
          pcc.name = name;
          pcc.op = getPowerChannelControlOperation(op);
          pcc.sched_time = sched_time;
          dispatch(pcc);
        }

        void
        powerChannelControl(std::string name, std::string op)
        {
          spew("power channel control %s (%s)", op.c_str(), name.c_str());
          IMC::PowerChannelControl pcc;
          pcc.setDestination(getSystemId());
          pcc.name = name;
          pcc.op = getPowerChannelControlOperation(op);
          dispatch(pcc);
        }

        void
        queryPowerChannelsStates(void)
        {
          IMC::QueryPowerChannelState query;
          query.setDestination(getSystemId());
          dispatch(query);
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
            std::string text = powerChannelsJSON();
            action.data.assign(text.begin(), text.end());
            dispatch(action);
          }
          else if (matchURL(msg->data.data(), c_request_uri, true))
          {
            std::vector<std::string> parts;
            Utils::String::split(msg->data.data(), "/", parts);
            if (parts.size() == 6)
            {
              if (parts[3] == "channel")
                powerChannelControl(parts[5], parts[4]);
            }
          }
        }

        void
        consume(const IMC::PowerChannelState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;
          
          m_power_channels[msg->name] = msg->state;
        }

        std::string
        powerChannelsJSON(void)
        {
          json j;
          auto& power_channels = j["power_channels"];
          for (const auto& pwr_ch: m_power_channels)
            power_channels[pwr_ch.first] = pwr_ch.second;
            
          return j.dump();
        }

        //! Main loop.
        void
        onMain(void)
        {
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
