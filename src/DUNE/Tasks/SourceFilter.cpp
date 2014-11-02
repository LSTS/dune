//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <limits.h>

// DUNE headers.
#include <DUNE/Tasks.hpp>
#include <DUNE/Tasks/SourceFilter.hpp>
#include <DUNE/IMC/Constants.hpp>

using namespace DUNE::IMC;

namespace DUNE
{
  namespace Tasks
  {
    SourceFilter::SourceFilter(Tasks::Task& task, const std::vector<std::string>& src):
      m_task(task),
      m_msg_name("")
    {
      m_cmds.push_back("DesiredRoll");
      m_cmds.push_back("DesiredSpeed");
      m_cmds.push_back("DesiredZ");
      m_cmds.push_back("DesiredPitch");
      m_cmds.push_back("SetServoPosition");
      m_cmds.push_back("SetThrusterActuation");
      defineCommandSystemEntityFilter(src);
    }

    SourceFilter::SourceFilter(Tasks::Task& task, const std::vector<std::string>& src,
        const std::string msg_name):
      m_task(task),
      m_msg_name(msg_name)
    {
      defineSystemEntityFilter(src, m_filtered_sys, m_filtered_ent);
    }

    bool
    SourceFilter::match(const IMC::Message* msg)
    {
      bool matched;
      if (m_type_cmd)
        matched = matchCommand(msg);
      else
        matched = matchMessage(msg, m_filtered_sys, m_filtered_ent);

      // These system and entity are not listed to be passed.
      if (!matched)
        printRejected(msg);

      return matched;
    }

    void
    SourceFilter::listMessages(std::vector<std::string>& msg, std::set<uint32_t>& msg_id)
    {
      // Process the filtered messages
      uint32_t msg_tmp;
      unsigned int i_msg_n = msg.size();
      if (i_msg_n == 0)
      {
        msg_id.insert(UINT_MAX);
        m_task.debug("Undefined filtered message.");
        return;
      }

      for (unsigned i = 0; i < i_msg_n; i++)
      {
        m_task.spew("%s filtering - Message %u/%u.", msg[i].c_str(), i + 1, i_msg_n);

        // Resolve message id.
        try
        {
          msg_tmp = IMC::Factory::getIdFromAbbrev(msg[i]);
          msg_id.insert(msg_tmp);
          if (msg_tmp != UINT16_MAX)
            m_task.debug("%s filtering - Message with ID: %u",
                         m_task.resolveSystemId(msg_tmp), msg_tmp);
          else
          {
            m_task.war("Filtering - No message found with designation '%s'!", msg[i].c_str());
            for (unsigned i_tmp = i; i_tmp + 1 < i_msg_n; i_tmp++)
              msg[i_tmp] = msg[i_tmp + 1];
            i_msg_n--;
            i--;
            continue;
          }
        }
        catch (...)
        {
          m_task.war("Filtering - No message found with designation '%s'!", msg[i].c_str());
          for (unsigned i_tmp = i; i_tmp + 1 < i_msg_n; i_tmp++)
            msg[i_tmp] = msg[i_tmp + 1];
          i_msg_n--;
          i--;
          continue;
        }
      }
    }

    void
    SourceFilter::listSystems(std::vector<std::string>& systems,
        std::set<uint32_t>& sys_id)
    {
      // Process the systems allowed to pass the message
      uint32_t sys_tmp;
      unsigned int i_sys_n = systems.size();
      if (i_sys_n == 0)
      {
        sys_id.insert(UINT_MAX);
        m_task.debug("%s filtering - Filter source system undefined", m_msg_name.c_str());
        return;
      }

      for (unsigned i = 0; i < i_sys_n; i++)
      {
        m_task.spew("%s filtering - System '%s' (%u/%u).", m_msg_name.c_str(),
                    systems[i].c_str(), i + 1, i_sys_n);

        // Resolve system id.
        if (systems[i].compare("self") == 0)
        {
          sys_tmp = m_task.getSystemId();
          sys_id.insert(sys_tmp);
          m_task.debug("%s filtering - System '%s' with ID: %u", m_msg_name.c_str(),
                       m_task.resolveSystemId(sys_tmp), sys_tmp);
        }
        else
        {
          try
          {
            sys_tmp = m_task.resolveSystemName(systems[i]);
            sys_id.insert(sys_tmp);
            if (sys_tmp != UINT16_MAX)
              m_task.debug("%s filtering - System '%s' with ID: %u", m_msg_name.c_str(),
                           m_task.resolveSystemId(sys_tmp), sys_tmp);
            else
            {
              m_task.war("%s filtering - No system found with designation '%s'!",
                         m_msg_name.c_str(), systems[i].c_str());
              for (unsigned i_tmp = i; i_tmp + 1 < i_sys_n; i_tmp++)
                systems[i_tmp] = systems[i_tmp + 1];
              i_sys_n--;
              i--;
              continue;
            }
          }
          catch (...)
          {
            m_task.war("%s filtering - No system found with designation '%s'!",
                       m_msg_name.c_str(), systems[i].c_str());
            for (unsigned i_tmp = i; i_tmp + 1 < i_sys_n; i_tmp++)
              systems[i_tmp] = systems[i_tmp + 1];
            i_sys_n--;
            i--;
            continue;
          }
        }
      }
    }

    void
    SourceFilter::listEntities(std::vector<std::string>& entities,
        std::set<uint32_t>& ent_id)
    {
      // Process the entities allowed to pass the message
      uint32_t ent_tmp;
      unsigned int i_ent_n = entities.size();
      if (i_ent_n == 0)
      {
        ent_id.insert(UINT_MAX);
        m_task.debug("%s filtering - Filter source entity undefined", m_msg_name.c_str());
        return;
      }

      for (unsigned int i = 0; i < i_ent_n; i++)
      {
        m_task.spew("%s filtering - Entity '%s' (%u/%u).", m_msg_name.c_str(),
                    entities[i].c_str(), i + 1, i_ent_n);

        // Resolve entity id.
        try
        {
          ent_tmp = m_task.resolveEntity(entities[i]);
          ent_id.insert(ent_tmp);
          m_task.debug("%s filtering - Entity '%s' with ID: %u", m_msg_name.c_str(),
                       m_task.resolveEntity(ent_tmp).c_str(), ent_tmp);
        }
        catch (...)
        {
          m_task.war("%s filtering - No entity found with designation '%s'!",
                     m_msg_name.c_str(), entities[i].c_str());
          for (unsigned i_tmp = i; i_tmp + 1 < i_ent_n; i_tmp++)
            entities[i_tmp] = entities[i_tmp + 1];
          i_ent_n--;
          i--;
          }
      }
    }

    void
    SourceFilter::defineSystemFilter(const std::vector<std::string>& src, Systems& filtered_sys)
    {

    }

    void
    SourceFilter::defineEntityFilter(const std::vector<std::string>& src, Entities& filtered_ent)
    {

    }

    void
    SourceFilter::defineSystemEntityFilter(const std::vector<std::string>& src,
        Systems& filtered_sys, Entities& filtered_ent)
    {
      // Process the systems and entities allowed to pass the message
      uint32_t i_src;
      uint32_t i_src_ini;
      std::vector<std::string> parts;
      std::vector<std::string> systems;
      std::vector<std::string> entities;
      unsigned int i_sys_n;
      unsigned int i_ent_n;
      uint32_t sys_tmp;

      filtered_sys.clear();
      filtered_ent.clear();
      for (unsigned int i = 0; i < src.size(); ++i)
      {
        parts.clear();
        Utils::String::split(src[i], ":", parts);
        if (parts.size() < 1)
          continue;

        // Split systems and entities.
        systems.clear();
        entities.clear();
        Utils::String::split(parts[0], "+", systems);
        Utils::String::split(parts[1], "+", entities);
        i_sys_n = systems.size();
        i_ent_n = entities.size();
        if (i_sys_n == 0)
        {
          systems.push_back("");
          i_sys_n = 1;
        }
        if (i_ent_n == 0)
        {
          entities.push_back("");
          i_ent_n = 1;
        }

        i_src_ini = filtered_sys.size();
        filtered_ent.resize(i_src_ini + i_sys_n * i_ent_n);
        filtered_sys.resize(i_src_ini + i_sys_n * i_ent_n);
        for (unsigned j = 0; j < i_sys_n; j++)
        {
          m_task.spew("%s filtering - System '%s' (%u/%u).", m_msg_name.c_str(),
               systems[j].c_str(), j + 1, i_sys_n);

          // Resolve system id.
          if (systems[j].empty())
          {
            sys_tmp = UINT_MAX;
            m_task.debug("%s filtering - Filter source system undefined", m_msg_name.c_str());
          }
          else if (systems[j].compare("self") == 0)
          {
            sys_tmp = m_task.getSystemId();
            m_task.debug("%s filtering - System '%s' with ID: %u", m_msg_name.c_str(),
                         m_task.resolveSystemId(sys_tmp), sys_tmp);
          }
          else
          {
            try
            {
              sys_tmp = m_task.resolveSystemName(systems[j]);
              if (sys_tmp != UINT16_MAX)
                m_task.debug("%s filtering - System '%s' with ID: %u", m_msg_name.c_str(),
                             m_task.resolveSystemId(sys_tmp), sys_tmp);
              else
              {
                m_task.war("%s filtering - No system found with designation '%s'!",
                           m_msg_name.c_str(), systems[j].c_str());
                for (unsigned j_tmp = j; j_tmp + 1 < i_sys_n; j_tmp++)
                  systems[j_tmp] = systems[j_tmp + 1];
                i_sys_n--;
                j--;
                continue;
              }
            }
            catch (...)
            {
              m_task.war("%s filtering - No system found with designation '%s'!",
                         m_msg_name.c_str(), systems[j].c_str());
              for (unsigned j_tmp = j; j_tmp + 1 < i_sys_n; j_tmp++)
                systems[j_tmp] = systems[j_tmp + 1];
              i_sys_n--;
              j--;
              continue;
            }
          }

          for (unsigned k = 0; k < i_ent_n; k++)
          {
            m_task.spew("%s filtering - Entity '%s' (%u/%u).", m_msg_name.c_str(),
                        entities[k].c_str(), k + 1, i_ent_n);

            i_src = j * i_ent_n + k;

            // Assign system id
            filtered_sys[i_src_ini + i_src] = sys_tmp;

            // Resolve entity id.
            if (entities[k].empty())
            {
              filtered_ent[i_src_ini + i_src] = UINT_MAX;
              m_task.debug("%s filtering - Filter source entity undefined", m_msg_name.c_str());
            }
            else
            {
              try
              {
                filtered_ent[i_src_ini + i_src] = m_task.resolveEntity(entities[k]);
                m_task.debug("%s filtering - Entity '%s' with ID: %u", m_msg_name.c_str(),
                             m_task.resolveEntity(filtered_ent[i_src_ini + i_src]).c_str(),
                             filtered_ent[i_src_ini + i_src]);
              }
              catch (...)
              {
                m_task.war("%s filtering - No entity found with designation '%s'!",
                           m_msg_name.c_str(), entities[k].c_str());
                for (unsigned k_tmp = k; k_tmp + 1 < i_ent_n; k_tmp++)
                  entities[k_tmp] = entities[k_tmp + 1];
                i_ent_n--;
                k--;
              }
            }

            m_task.spew("%s filtering state - System %u of %u : Entity %u of %u.",
                        m_msg_name.c_str(), j + 1, i_sys_n, k + 1, i_ent_n);
          }
        }
        filtered_ent.resize(i_src_ini + i_sys_n * i_ent_n);
        filtered_sys.resize(i_src_ini + i_sys_n * i_ent_n);
      }
      m_task.spew("%s filter sets:", m_msg_name.c_str());
      for (unsigned i = 0; i < filtered_sys.size(); i++)
        if (filtered_sys[i] == UINT_MAX)
        {
          if (filtered_ent[i] == UINT_MAX)
            m_task.spew("     System: ANY - Entity: ANY.");
          else
            m_task.spew("     System: ANY - Entity: '%s'.",
                        m_task.resolveEntity(filtered_ent[i]).c_str());
        }
        else if (filtered_ent[i] == UINT_MAX)
          m_task.spew("     System: '%s' - Entity: ANY.",
                      m_task.resolveSystemId(filtered_sys[i]));
        else
          m_task.spew("     System: '%s' - Entity: '%s'.",
                      m_task.resolveSystemId(filtered_sys[i]),
                      m_task.resolveEntity(filtered_ent[i]).c_str());
    }

    void
    SourceFilter::defineCommandSystemEntityFilter(const std::vector<std::string>& src)
    {
      // Process the systems and entities allowed to define a command.
      uint32_t i_cmd;
      uint32_t i_cmd_final;
      bool cmd_defined;
      std::string cmd_name;
      std::vector<std::string> parts;
      std::vector<std::string> tmp_src;
      tmp_src.push_back("");

      m_cmd_filtered_sys.clear();
      m_cmd_filtered_ent.clear();
      for (unsigned int i = 0; i < src.size(); ++i)
      {
        parts.clear();
        Utils::String::split(src[i], ":", parts);
        if (parts.size() < 1)
          continue;

        cmd_name = parts[0];
        if (cmd_name.empty())
        {
          cmd_name = "Commands";
          i_cmd = 0;
          i_cmd_final = 5;
        }
        else
        {
          cmd_defined = false;
          for (i_cmd = 0; i_cmd < 6; i_cmd++)
            if (cmd_name.compare(m_cmds[i_cmd]) == 0)
            {
              cmd_defined = true;
              i_cmd_final = i_cmd;
              break;
            }

          if(!cmd_defined)
          {
            m_task.war("Unknown command '%s'!", cmd_name.c_str());
            continue;
          }
        }

        // Assign filtered systems and entities to the selected commands
        for (; i_cmd <= i_cmd_final; i_cmd++)
        {
          m_msg_name = m_cmds[i_cmd];
          tmp_src[0] = parts[1] + ":" + parts[2];
          defineSystemEntityFilter(tmp_src, m_cmd_filtered_sys[i_cmd], m_cmd_filtered_ent[i_cmd]);
        }
      }
    }

    bool
    SourceFilter::matchMessage(const IMC::Message* msg,
        Systems& filtered_sys, Entities& filtered_ent)
    {
      // Filter the message by systems and entities.
      // Returns True if the message source is allowed to pass.

      bool matched = true;
      if (filtered_sys.size() > 0)
      {
        matched = false;
        std::vector<uint32_t>::iterator itr_sys = filtered_sys.begin();
        std::vector<uint32_t>::iterator itr_ent = filtered_ent.begin();
        for (; itr_sys != filtered_sys.end(); ++itr_sys)
        {
          if ((*itr_sys == msg->getSource() || *itr_sys == (unsigned int)UINT_MAX) &&
              (*itr_ent == msg->getSourceEntity() || *itr_ent == (unsigned int)UINT_MAX))
            matched = true;
          ++itr_ent;
        }
      }

      return matched;
    }

    bool
    SourceFilter::matchCommand(const IMC::Message* msg)
    {
      // Filter the command message by system and entity.
      // Returns True if the message source is allowed to pass.

      uint32_t i_cmd;
      const char* msg_name = msg->getName();
      if (strcmp(msg_name, "DesiredRoll") == 0)
        i_cmd = 0;
      else if (strcmp(msg_name, "DesiredSpeed") == 0)
        i_cmd = 1;
      else if (strcmp(msg_name, "DesiredZ") == 0)
        i_cmd = 2;
      else if (strcmp(msg_name, "DesiredPitch") == 0)
        i_cmd = 3;
      else if (strcmp(msg_name, "SetServoPosition") == 0)
        i_cmd = 4;
      else if (strcmp(msg_name, "SetThrusterActuation") == 0)
        i_cmd = 5;

      // Filter command by systems and entities.
      bool matched = true;
      if (m_cmd_filtered_sys[i_cmd].size() > 0)
      {
        matched = false;
        std::vector<uint32_t>::iterator itr_sys = m_cmd_filtered_sys[i_cmd].begin();
        std::vector<uint32_t>::iterator itr_ent = m_cmd_filtered_ent[i_cmd].begin();
        for (; itr_sys != m_cmd_filtered_sys[i_cmd].end(); ++itr_sys)
        {
          if ((*itr_sys == msg->getSource() || *itr_sys == (unsigned int)UINT_MAX) &&
              (*itr_ent == msg->getSourceEntity() || *itr_ent == (unsigned int)UINT_MAX))
            matched = true;
          ++itr_ent;
        }
      }

      return matched;
    }

    void
    SourceFilter::printRejected(const IMC::Message* msg)
    {
      try
      {
        const char* system_name = m_task.resolveSystemId(msg->getSource());
        const char* entity_name = m_task.resolveEntity(msg->getSourceEntity()).c_str();
        m_task.trace("%s rejected (received from system '%s' and entity '%s').", msg->getName(),
                     system_name, entity_name);
      }
      catch (...)
      {
        m_task.war("%s rejected (received from an unresolved system and/or entity).", msg->getName());
      }
    }
  }
}
