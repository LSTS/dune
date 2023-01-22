//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <climits>
#define _STDC_LIMIT_MACROS

// DUNE headers.
#include <DUNE/Tasks.hpp>
#include <DUNE/IMC/Constants.hpp>

namespace DUNE
{
  using namespace IMC;

  namespace Tasks
  {
    SourceFilter::SourceFilter(Tasks::Task& task, const std::vector<std::string>& src):
      m_task(task)
    {
      defineMessageSystemEntityFilter(src);
      filterDefinition();
      printDefinitionWarnings();
    }

    SourceFilter::SourceFilter(Tasks::Task& task, const bool system,
                               const std::vector<std::string>& src):
      m_task(task)
    {
      if (system)
        defineMessageSystemFilter(src);
      else
        defineMessageEntityFilter(src);
      filterDefinition();
      printDefinitionWarnings();
    }

    SourceFilter::SourceFilter(Tasks::Task& task, const std::vector<std::string>& src,
                               const std::string& msg_name):
      m_task(task),
      m_msg_name(msg_name)
    {
      defineSystemEntityFilter(src);
      filterDefinition();
      printDefinitionWarnings();
    }

    SourceFilter::SourceFilter(Tasks::Task& task, const bool system,
                               const std::vector<std::string>& src, const std::string& msg_name):
      m_task(task),
      m_msg_name(msg_name)
    {
      if (system)
        defineSystemFilter(src);
      else
        defineEntityFilter(src);
      filterDefinition();
      printDefinitionWarnings();
    }

    bool
    SourceFilter::match(const IMC::Message* msg)
    {
      bool matched;
      if (m_filt_msg)
      {
        if (m_filt_sys)
        {
          if (m_filt_ent)
            matched = matchMessageSystemEntity(msg);
          else
            matched = matchMessageSystem(msg);
        }
        else
        {
          matched = matchMessageEntity(msg);
        }
      }
      else if (m_filt_sys)
      {
        if (m_filt_ent)
          matched = matchSystemEntity(msg);
        else
          matched = matchSystem(msg);
      }
      else
      {
        matched = matchEntity(msg);
      }

      // These system and entity are not listed to be passed.
      if (!matched)
        printRejected(msg);

      return matched;
    }

    std::set<uint32_t>
    SourceFilter::listMessages(std::vector<std::string>& msg)
    {
      std::set<uint32_t> msg_ids;
      unsigned int i_msg_n = msg.size();

      // Check if there are any message ids to be listed
      if (i_msg_n < 1)
      {
        msg_ids.insert(UINT_MAX);
        return msg_ids;
      }

      // Resolve message ids.
      for (unsigned i = 0; i < i_msg_n; i++)
      {
        try
        {
          msg_ids.insert(IMC::Factory::getIdFromAbbrev(msg[i]));
        }
        catch (...)
        {
          // Remove unresolved id from the list
          m_warnings.push_back("Filtering - No message found with designation '"
                               + msg[i] + "'!");
          for (unsigned i_tmp = i; i_tmp + 1 < i_msg_n; i_tmp++)
            msg[i_tmp] = msg[i_tmp + 1];
          i_msg_n--;
          i--;
          continue;
        }
      }
      return msg_ids;
    }

    std::set<uint32_t>
    SourceFilter::listSystems(std::vector<std::string>& systems)
    {
      std::set<uint32_t> sys_ids;
      uint32_t sys_tmp;
      unsigned int i_sys_n = systems.size();

      // Check if there are any system ids to be listed
      if (i_sys_n < 1)
      {
        sys_ids.insert(UINT_MAX);
        return sys_ids;
      }

      // Resolve system ids.
      for (unsigned i = 0; i < i_sys_n; i++)
      {
        if (systems[i].compare("self") == 0)
        {
          sys_ids.insert(m_task.getSystemId());
        }
        else
        {
          try
          {
            sys_tmp = m_task.resolveSystemName(systems[i]);
            if (sys_tmp != 0xffff)
            {
              sys_ids.insert(sys_tmp);
            }
            else
            {
              // Remove undefined id from the list
              m_warnings.push_back(m_msg_name + " filtering - No system "
                                   "found with designation '" + systems[i] + "'!");
              for (unsigned i_tmp = i; i_tmp + 1 < i_sys_n; i_tmp++)
                systems[i_tmp] = systems[i_tmp + 1];
              i_sys_n--;
              i--;
              continue;
            }
          }
          catch (...)
          {
            // Remove unresolved id from the list
            m_warnings.push_back(m_msg_name + " filtering - No system "
                                 "found with designation '" + systems[i] + "'!");
            for (unsigned i_tmp = i; i_tmp + 1 < i_sys_n; i_tmp++)
              systems[i_tmp] = systems[i_tmp + 1];
            i_sys_n--;
            i--;
            continue;
          }
        }
      }
      return sys_ids;
    }

    std::set<uint32_t>
    SourceFilter::listEntities(std::vector<std::string>& entities)
    {
      std::set<uint32_t> ent_ids;
      unsigned int i_ent_n = entities.size();

      // Check if there are any entity ids to be listed
      if (i_ent_n < 1)
      {
        ent_ids.insert(UINT_MAX);
        return ent_ids;
      }

      // Resolve entity ids.
      for (unsigned int i = 0; i < i_ent_n; i++)
      {
        try
        {
          ent_ids.insert(m_task.resolveEntity(entities[i]));
        }
        catch (...)
        {
          // Remove unresolved id from the list
          m_warnings.push_back(m_msg_name + " filtering - No entity "
                               "found with designation '" + entities[i] + "'!");
          for (unsigned i_tmp = i; i_tmp + 1 < i_ent_n; i_tmp++)
            entities[i_tmp] = entities[i_tmp + 1];
          i_ent_n--;
          i--;
        }
      }
      return ent_ids;
    }

    void
    SourceFilter::defineSystemFilter(const std::vector<std::string>& src)
    {
      std::vector<std::string> systems;

      // List the allowed systems
      for (unsigned int i_src = 0; i_src < src.size(); i_src++)
      {
        systems.clear();
        Utils::String::split(src[i_src], "+", systems);
        m_filtered_sys.push_back(listSystems(systems));
      }

      // Reset the filter type flags
      m_filt_msg = false;
      m_filt_sys = true;
      m_filt_ent = false;
    }

    void
    SourceFilter::defineEntityFilter(const std::vector<std::string>& src)
    {
      std::vector<std::string> entities;

      // List the allowed entities
      for (unsigned int i_src = 0; i_src < src.size(); i_src++)
      {
        entities.clear();
        Utils::String::split(src[i_src], "+", entities);
        m_filtered_ent.push_back(listEntities(entities));
      }

      // Reset the filter type flags
      m_filt_msg = false;
      m_filt_sys = false;
      m_filt_ent = true;
    }

    void
    SourceFilter::defineSystemEntityFilter(const std::vector<std::string>& src)
    {
      std::vector<std::string> parts;
      std::vector<std::string> systems;
      std::vector<std::string> entities;

      // Process the systems and entities allowed to pass a messages
      for (unsigned int i = 0; i < src.size(); ++i)
      {
        parts.clear();
        Utils::String::split(src[i], ":", parts);
        if (parts.size() < 1)
        {
          continue;
        }
        else if (parts.size() < 2)
        {
          throw std::runtime_error("Only 1 field provided! Fields for both "
                                   "systems and entities are required.");
        }

        // Group allowed systems and entities
        systems.push_back(parts[0]);
        entities.push_back(parts[1]);
      }
      defineSystemFilter(systems);
      defineEntityFilter(entities);

      // Reset the filter type flags
      m_filt_sys = true;
    }

    void
    SourceFilter::defineMessageSystemFilter(const std::vector<std::string>& src)
    {
      std::vector<std::string> parts;
      std::vector<std::string> messages;
      std::vector<std::string> systems;

      // Process the systems and entities allowed to pass the defined messages
      for (unsigned int i = 0; i < src.size(); ++i)
      {
        parts.clear();
        Utils::String::split(src[i], ":", parts);
        if (parts.size() < 1)
        {
          continue;
        }
        else if (parts.size() < 2)
        {
          throw std::runtime_error("Only 1 field provided! Fields for both "
                                   "messages and systems are required.");
        }

        // Process the filtered messages
        messages.clear();
        Utils::String::split(parts[0], "+", messages);
        // List the allowed entities
        m_filtered_msg.push_back(listMessages(messages));

        // Group allowed systems and entities
        systems.push_back(parts[1]);
      }
      defineSystemFilter(systems);

      // Reset the filter type flags
      m_filt_msg = true;
    }

    void
    SourceFilter::defineMessageEntityFilter(const std::vector<std::string>& src)
    {
      std::vector<std::string> parts;
      std::vector<std::string> messages;
      std::vector<std::string> entities;

      // Process the systems and entities allowed to pass the defined messages
      for (unsigned int i = 0; i < src.size(); ++i)
      {
        parts.clear();
        Utils::String::split(src[i], ":", parts);
        if (parts.size() < 1)
        {
          continue;
        }
        else if (parts.size() < 2)
        {
          throw std::runtime_error("Only 1 field provided! Fields for both "
                                   "messages and entities are required.");
        }

        // Process the filtered messages
        messages.clear();
        Utils::String::split(parts[0], "+", messages);
        // List the allowed entities
        m_filtered_msg.push_back(listMessages(messages));

        // Group allowed systems and entities
        entities.push_back(parts[1]);
      }
      defineEntityFilter(entities);

      // Reset the filter type flags
      m_filt_msg = true;
    }

    void
    SourceFilter::defineMessageSystemEntityFilter(const std::vector<std::string>& src)
    {
      std::vector<std::string> parts;
      std::vector<std::string> messages;
      std::vector<std::string> systems;
      std::vector<std::string> entities;

      // Process the systems and entities allowed to pass the defined messages
      for (unsigned int i = 0; i < src.size(); ++i)
      {
        parts.clear();
        Utils::String::split(src[i], ":", parts);
        if (parts.size() < 1)
        {
          continue;
        }
        else if (parts.size() < 3)
        {
          throw std::runtime_error("Not enough fields provided! Fields for "
                                   "messages, systems and entities are required.");
        }

        // Process the filtered messages
        messages.clear();
        Utils::String::split(parts[0], "+", messages);
        // List the allowed entities
        m_filtered_msg.push_back(listMessages(messages));

        // Group allowed systems and entities
        systems.push_back(parts[1]);
        entities.push_back(parts[2]);
      }
      defineSystemFilter(systems);
      defineEntityFilter(entities);

      // Reset the filter type flags
      m_filt_msg = true;
      m_filt_sys = true;
    }

    bool
    SourceFilter::matchSystem(const IMC::Message* msg)
    {
      bool matched = true;
      if (m_filtered_sys.size() > 0)
      {
        matched = false;
        for (FilterList::iterator itr_sys = m_filtered_sys.begin();
             itr_sys != m_filtered_sys.end(); itr_sys++)
        {
          if ((*itr_sys).find(msg->getSource()) != (*itr_sys).end() ||
              (*itr_sys).find((unsigned int)UINT_MAX) != (*itr_sys).end())
            matched = true;
        }
      }
      return matched;
    }

    bool
    SourceFilter::matchEntity(const IMC::Message* msg)
    {
      bool matched = true;
      if (m_filtered_ent.size() > 0)
      {
        matched = false;
        for (FilterList::iterator itr_ent = m_filtered_ent.begin();
             itr_ent != m_filtered_ent.end(); itr_ent++)
        {
          if ((*itr_ent).find(msg->getSourceEntity()) != (*itr_ent).end() ||
              (*itr_ent).find((unsigned int)UINT_MAX) != (*itr_ent).end())
            matched = true;
        }
      }
      return matched;
    }

    bool
    SourceFilter::matchSystemEntity(const IMC::Message* msg)
    {
      bool matched = true;
      if (m_filtered_sys.size() > 0)
      {
        matched = false;
        FilterList::iterator itr_ent = m_filtered_ent.begin();
        for (FilterList::iterator itr_sys = m_filtered_sys.begin();
             itr_sys != m_filtered_sys.end(); itr_sys++)
        {
          if (((*itr_sys).find(msg->getSource()) != (*itr_sys).end() ||
               (*itr_sys).find((unsigned int)UINT_MAX) != (*itr_sys).end()) &&
              ((*itr_ent).find(msg->getSourceEntity()) != (*itr_ent).end() ||
               (*itr_ent).find((unsigned int)UINT_MAX) != (*itr_ent).end()))
            matched = true;
          itr_ent++;
        }
      }
      return matched;
    }

    bool
    SourceFilter::matchMessageSystem(const IMC::Message* msg)
    {
      bool matched = true;
      bool msg_match = false;
      if (m_filtered_sys.size() > 0)
      {
        matched = false;
        FilterList::iterator itr_msg = m_filtered_msg.begin();
        for (FilterList::iterator itr_sys = m_filtered_sys.begin();
             itr_sys != m_filtered_sys.end(); itr_sys++)
        {
          if ((*itr_msg).find(msg->getId()) != (*itr_msg).end() ||
              (*itr_msg).find((unsigned int)UINT_MAX) != (*itr_msg).end())
          {
            msg_match = true;
            if ((*itr_sys).find(msg->getSource()) != (*itr_sys).end() ||
                (*itr_sys).find((unsigned int)UINT_MAX) != (*itr_sys).end())
              matched = true;
          }
          itr_msg++;
        }
      }

      if (matched)
      {
        return true;
      }
      else if (!msg_match)
      {
        m_warnings.push_back("No filter rules defined for message " +
                             std::string(msg->getName()) + "!");
        return true;
      }

      return false;
    }

    bool
    SourceFilter::matchMessageEntity(const IMC::Message* msg)
    {
      bool matched = true;
      bool msg_match = false;
      if (m_filtered_sys.size() > 0)
      {
        matched = false;
        FilterList::iterator itr_msg = m_filtered_msg.begin();
        for (FilterList::iterator itr_ent = m_filtered_ent.begin();
             itr_ent != m_filtered_ent.end(); itr_ent++)
        {
          if ((*itr_msg).find(msg->getId()) != (*itr_msg).end() ||
              (*itr_msg).find((unsigned int)UINT_MAX) != (*itr_msg).end())
          {
            msg_match = true;
            if ((*itr_ent).find(msg->getSourceEntity()) != (*itr_ent).end() ||
                (*itr_ent).find((unsigned int)UINT_MAX) != (*itr_ent).end())
              matched = true;
          }
          itr_msg++;
        }
      }

      if (matched)
      {
        return true;
      }
      else if (!msg_match)
      {
        m_warnings.push_back("No filter rules defined for message " +
                             std::string(msg->getName()) + "!");
        return true;
      }
      else
      {
        return false;
      }
    }

    bool
    SourceFilter::matchMessageSystemEntity(const IMC::Message* msg)
    {
      bool matched = true;
      bool msg_match = false;
      if (m_filtered_sys.size() > 0)
      {
        matched = false;
        FilterList::iterator itr_msg = m_filtered_msg.begin();
        FilterList::iterator itr_ent = m_filtered_ent.begin();
        for (FilterList::iterator itr_sys = m_filtered_sys.begin();
             itr_sys != m_filtered_sys.end(); itr_sys++)
        {
          if ((*itr_msg).find(msg->getId()) != (*itr_msg).end() ||
              (*itr_msg).find((unsigned int)UINT_MAX) != (*itr_msg).end())
          {
            msg_match = true;
            if (((*itr_sys).find(msg->getSource()) != (*itr_sys).end() ||
                 (*itr_sys).find((unsigned int)UINT_MAX) != (*itr_sys).end()) &&
                ((*itr_ent).find(msg->getSourceEntity()) != (*itr_ent).end() ||
                 (*itr_ent).find((unsigned int)UINT_MAX) != (*itr_ent).end()))
              matched = true;
          }
          itr_msg++;
          itr_ent++;
        }
      }

      if (matched)
      {
        return true;
      }
      else if (!msg_match)
      {
        m_warnings.push_back("No filter rules defined for message " +
                             std::string(msg->getName()) + "!");
        return true;
      }
      else
      {
        return false;
      }
    }

    void
    SourceFilter::filterDefinition(void)
    {
      std::vector<std::string> filt_def;

      if (m_filt_msg)
      {
        if (m_filt_sys)
        {
          if (m_filt_ent)
            filt_def = generateInfoMessageSystemEntity();
          else
            filt_def = generateInfoMessageSystem();
        }
        else
        {
          filt_def = generateInfoMessageEntity();
        }
      }
      else if (m_filt_sys)
      {
        if (m_filt_ent)
          filt_def = generateInfoSystemEntity();
        else
          filt_def = generateInfoSystem();
      }
      else
      {
        filt_def = generateInfoEntity();
      }

      // Print the filter definitions
      for (std::vector<std::string>::iterator itr_def = filt_def.begin();
           itr_def != filt_def.end(); itr_def++)
        m_task.spew("%s", itr_def->c_str());
    }

    std::vector<std::string>
    SourceFilter::generateInfoSystem(void)
    {
      std::vector<std::string> filt_def;

      // Debug output for systems filter
      filt_def.push_back(m_msg_name + " filter sets:");
      for (FilterList::iterator itr_sys = m_filtered_sys.begin();
           itr_sys != m_filtered_sys.end(); itr_sys++)
      {
        if ((*itr_sys).find((unsigned int)UINT_MAX) != (*itr_sys).end())
        {
          filt_def.push_back("     System: ANY.");
        }
        else
        {
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys).begin();
               itr_sys_indiv != (*itr_sys).end(); itr_sys_indiv++)
          {
            filt_def.push_back("     System: '" +
                               std::string(m_task.resolveSystemId(*itr_sys_indiv)) + "'.");
          }
        }
      }

      return filt_def;
    }

    std::vector<std::string>
    SourceFilter::generateInfoEntity(void)
    {
      std::vector<std::string> filt_def;

      // Debug output for entities filter
      filt_def.push_back(m_msg_name + " filter sets:");
      for (FilterList::iterator itr_ent = m_filtered_ent.begin();
           itr_ent != m_filtered_ent.end(); itr_ent++)
      {
        if ((*itr_ent).find((unsigned int)UINT_MAX) != (*itr_ent).end())
        {
          filt_def.push_back("     Entity: ANY.");
        }
        else
        {
          for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent).begin();
               itr_ent_indiv != (*itr_ent).end(); itr_ent_indiv++)
          {
            filt_def.push_back("     Entity: '" +
                               m_task.resolveEntity(*itr_ent_indiv) + "'.");
          }
        }
      }

      return filt_def;
    }

    std::vector<std::string>
    SourceFilter::generateInfoSystemEntity(void)
    {
      std::vector<std::string> filt_def;

      // Debug output for systems and entities filter
      filt_def.push_back(m_msg_name + " filter sets:");
      FilterList::iterator itr_ent = m_filtered_ent.begin();
      for (FilterList::iterator itr_sys = m_filtered_sys.begin();
           itr_sys != m_filtered_sys.end(); itr_sys++)
      {
        if ((*itr_sys).find((unsigned int)UINT_MAX) != (*itr_sys).end())
        {
          if ((*itr_ent).find((unsigned int)UINT_MAX) != (*itr_ent).end())
          {
            filt_def.push_back("     System: ANY - Entity: ANY.");
          }
          else
          {
            for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent).begin();
                 itr_ent_indiv != (*itr_ent).end(); itr_ent_indiv++)
            {
              filt_def.push_back("     System: ANY - Entity: '" +
                                 m_task.resolveEntity(*itr_ent_indiv) + "'.");
            }
          }
        }
        else if ((*itr_ent).find((unsigned int)UINT_MAX) != (*itr_ent).end())
        {
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys).begin();
               itr_sys_indiv != (*itr_sys).end(); itr_sys_indiv++)
          {
            filt_def.push_back("     System: '" +
                               std::string(m_task.resolveSystemId(*itr_sys_indiv))
                               + "' - Entity: ANY.");
          }
        }
        else
        {
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys).begin();
               itr_sys_indiv != (*itr_sys).end(); itr_sys_indiv++)
          {
            for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent).begin();
                 itr_ent_indiv != (*itr_ent).end(); itr_ent_indiv++)
            {
              filt_def.push_back("     System: '" +
                                 std::string(m_task.resolveSystemId(*itr_sys_indiv))
                                 + "' - Entity: '" +
                                 m_task.resolveEntity(*itr_ent_indiv) + "'.");
            }
          }
        }
        itr_ent++;
      }

      return filt_def;
    }

    std::vector<std::string>
    SourceFilter::generateInfoMessageSystem(void)
    {
      std::vector<std::string> filt_def;

      // Debug output for messages and systems filter
      FilterList::iterator itr_msg = m_filtered_msg.begin();
      for (FilterList::iterator itr_sys = m_filtered_sys.begin();
           itr_sys != m_filtered_sys.end(); itr_sys++)
      {
        if ((*itr_msg).find((unsigned int)UINT_MAX) != (*itr_msg).end())
        {
          filt_def.push_back("Filter for ANY message, sets:");
        }
        else
        {
          filt_def.push_back("Filter for:");
          for (std::set<uint32_t>::iterator itr_msg_indiv = (*itr_msg).begin();
               itr_msg_indiv != (*itr_msg).end(); itr_msg_indiv++)
          {
            filt_def.push_back("  Message " +
                               IMC::Factory::getAbbrevFromId(*itr_msg_indiv));
          }
          filt_def.push_back("-------------- sets:");
        }

        if ((*itr_sys).find((unsigned int)UINT_MAX) != (*itr_sys).end())
        {
          filt_def.push_back("     System: ANY.");
        }
        else
        {
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys).begin();
               itr_sys_indiv != (*itr_sys).end(); itr_sys_indiv++)
          {
            filt_def.push_back("     System: '" +
                               std::string(m_task.resolveSystemId(*itr_sys_indiv)) + "'.");
          }
        }
        itr_msg++;
      }

      return filt_def;
    }

    std::vector<std::string>
    SourceFilter::generateInfoMessageEntity(void)
    {
      std::vector<std::string> filt_def;

      // Debug output for messages and entities filter
      FilterList::iterator itr_msg = m_filtered_msg.begin();
      for (FilterList::iterator itr_ent = m_filtered_ent.begin();
           itr_ent != m_filtered_ent.end(); itr_ent++)
      {
        if ((*itr_msg).find((unsigned int)UINT_MAX) != (*itr_msg).end())
        {
          filt_def.push_back("Filter for ANY message, sets:");
        }
        else
        {
          filt_def.push_back("Filter for:");
          for (std::set<uint32_t>::iterator itr_msg_indiv = (*itr_msg).begin();
               itr_msg_indiv != (*itr_msg).end(); itr_msg_indiv++)
          {
            filt_def.push_back("  Message " +
                               IMC::Factory::getAbbrevFromId(*itr_msg_indiv));
          }
          filt_def.push_back("-------------- sets:");
        }

        if ((*itr_ent).find((unsigned int)UINT_MAX) != (*itr_ent).end())
        {
          filt_def.push_back("     Entity: ANY.");
        }
        else
        {
          for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent).begin();
               itr_ent_indiv != (*itr_ent).end(); itr_ent_indiv++)
          {
            filt_def.push_back("     Entity: '" +
                               m_task.resolveEntity(*itr_ent_indiv) + "'.");
          }
        }
        itr_msg++;
      }

      return filt_def;
    }

    std::vector<std::string>
    SourceFilter::generateInfoMessageSystemEntity(void)
    {
      std::vector<std::string> filt_def;

      // Debug output for messages, systems, and entities filter
      FilterList::iterator itr_msg = m_filtered_msg.begin();
      FilterList::iterator itr_ent = m_filtered_ent.begin();
      for (FilterList::iterator itr_sys = m_filtered_sys.begin();
           itr_sys != m_filtered_sys.end(); itr_sys++)
      {
        if ((*itr_msg).find((unsigned int)UINT_MAX) != (*itr_msg).end())
        {
          filt_def.push_back("Filter for ANY message, sets:");
        }
        else
        {
          filt_def.push_back("Filter for:");
          for (std::set<uint32_t>::iterator itr_msg_indiv = (*itr_msg).begin();
               itr_msg_indiv != (*itr_msg).end(); itr_msg_indiv++)
          {
            filt_def.push_back("  Message " +
                               IMC::Factory::getAbbrevFromId(*itr_msg_indiv));
          }
          filt_def.push_back("-------------- sets:");
        }
        if ((*itr_sys).find((unsigned int)UINT_MAX) != (*itr_sys).end())
        {
          if ((*itr_ent).find((unsigned int)UINT_MAX) != (*itr_ent).end())
          {
            filt_def.push_back("     System: ANY - Entity: ANY.");
          }
          else
          {
            for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent).begin();
                 itr_ent_indiv != (*itr_ent).end(); itr_ent_indiv++)
            {
              filt_def.push_back("     System: ANY - Entity: '" +
                                 m_task.resolveEntity(*itr_ent_indiv) + "'.");
            }
          }
        }
        else if ((*itr_ent).find((unsigned int)UINT_MAX) != (*itr_ent).end())
        {
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys).begin();
               itr_sys_indiv != (*itr_sys).end(); itr_sys_indiv++)
          {
            filt_def.push_back("     System: '" +
                               std::string(m_task.resolveSystemId(*itr_sys_indiv)) +
                               "' - Entity: ANY.");
          }
        }
        else
        {
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys).begin();
               itr_sys_indiv != (*itr_sys).end(); itr_sys_indiv++)
          {
            for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent).begin();
                 itr_ent_indiv != (*itr_ent).end(); itr_ent_indiv++)
            {
              filt_def.push_back("     System: '" +
                                 std::string(m_task.resolveSystemId(*itr_sys_indiv)) +
                                 "' - Entity: '" +
                                 m_task.resolveEntity(*itr_ent_indiv) + "'.");
            }
          }
        }
        itr_msg++;
        itr_ent++;
      }

      return filt_def;
    }

    void
    SourceFilter::printDefinitionWarnings(void)
    {
      // Print the filter definition warnings
      std::vector<std::string> war = warnings();
      for (std::vector<std::string>::iterator itr_war = war.begin();
           itr_war != war.end(); itr_war++)
        m_task.war("%s", itr_war->c_str());
    }

    void
    SourceFilter::printRejected(const IMC::Message* msg)
    {
      try
      {
        m_task.trace("%s rejected (received from system '%s' and entity '%s').",
                     msg->getName(),
                     m_task.resolveSystemId(msg->getSource()),
                     m_task.resolveEntity(msg->getSourceEntity()).c_str());
      }
      catch (...)
      {
        m_warnings.push_back(std::string(msg->getName()) + " rejected "
                             "(received from an unresolved system and/or entity).");
      }

      // Print the filter warnings
      std::vector<std::string> war = warnings();
      for (std::vector<std::string>::iterator itr_war = war.begin();
           itr_war != war.end(); itr_war++)
        m_task.war("%s", itr_war->c_str());
    }

    std::vector<std::string>
    SourceFilter::warnings(void)
    {
      std::vector<std::string> war = m_warnings;
      m_warnings.clear();
      return war;
    }
  }
}
