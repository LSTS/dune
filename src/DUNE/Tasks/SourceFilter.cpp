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
      defineMessageSystemEntityFilter(src);
    }

    SourceFilter::SourceFilter(Tasks::Task& task, const bool system, const std::vector<std::string>& src):
      m_task(task),
      m_msg_name("")
    {
      if (system)
        defineMessageSystemFilter(src);
      else
        defineMessageEntityFilter(src);
    }

    SourceFilter::SourceFilter(Tasks::Task& task, const std::vector<std::string>& src,
        const std::string msg_name):
      m_task(task),
      m_msg_name(msg_name)
    {
      defineSystemEntityFilter(src);
    }

    SourceFilter::SourceFilter(Tasks::Task& task, const bool system, const std::vector<std::string>& src,
        const std::string msg_name):
      m_task(task),
      m_msg_name(msg_name)
    {
      if (system)
        defineSystemFilter(src);
      else
        defineEntityFilter(src);
    }

    bool
    SourceFilter::match(const IMC::Message* msg)
    {
      bool matched;
      if (m_filt_msg)
        if (m_filt_sys)
          if (m_filt_ent)
            matched = matchMessageSystemEntity(msg);
          else
            matched = matchMessageSystem(msg);
        else
          matched = matchMessageEntity(msg);
      else if (m_filt_sys)
        if (m_filt_ent)
          matched = matchSystemEntity(msg);
        else
          matched = matchSystem(msg);
      else
        matched = matchEntity(msg);

      // These system and entity are not listed to be passed.
      if (!matched)
        printRejected(msg);

      return matched;
    }

    std::set<uint32_t>*
    SourceFilter::listMessages(std::vector<std::string>& msg)
    {
      // Process the filtered messages
      std::set<uint32_t>* msg_ids = new std::set<uint32_t>;
      uint32_t msg_tmp;
      unsigned int i_msg_n = msg.size();
      if (i_msg_n < 1)
      {
        msg_ids->insert(UINT_MAX);
        m_task.debug("Undefined filtered message.");
        return msg_ids;
      }

      for (unsigned i = 0; i < i_msg_n; i++)
      {
        m_task.spew("%s filtering - Message %u/%u.", msg[i].c_str(), i + 1, i_msg_n);

        // Resolve message id.
        try
        {
          msg_tmp = IMC::Factory::getIdFromAbbrev(msg[i]);
          msg_ids->insert(msg_tmp);
          m_task.debug("%s filtering - Message with ID: %u",
                       IMC::Factory::getAbbrevFromId(msg_tmp).c_str(), msg_tmp);
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
      return msg_ids;
    }

    std::set<uint32_t>*
    SourceFilter::listSystems(std::vector<std::string>& systems)
    {
      // Process the systems allowed to pass the message
      std::set<uint32_t>* sys_ids = new std::set<uint32_t>;
      uint32_t sys_tmp;
      unsigned int i_sys_n = systems.size();
      if (i_sys_n < 1)
      {
        sys_ids->insert(UINT_MAX);
        m_task.debug("%s filtering - Filter source system undefined", m_msg_name.c_str());
        return sys_ids;
      }

      for (unsigned i = 0; i < i_sys_n; i++)
      {
        m_task.spew("%s filtering - System '%s' (%u/%u).", m_msg_name.c_str(),
                    systems[i].c_str(), i + 1, i_sys_n);

        // Resolve system id.
        if (systems[i].compare("self") == 0)
        {
          sys_tmp = m_task.getSystemId();
          sys_ids->insert(sys_tmp);
          m_task.debug("%s filtering - System '%s' with ID: %u", m_msg_name.c_str(),
                       m_task.resolveSystemId(sys_tmp), sys_tmp);
        }
        else
        {
          try
          {
            sys_tmp = m_task.resolveSystemName(systems[i]);
            if (sys_tmp != UINT16_MAX)
            {
              sys_ids->insert(sys_tmp);
              m_task.debug("%s filtering - System '%s' with ID: %u", m_msg_name.c_str(),
                           m_task.resolveSystemId(sys_tmp), sys_tmp);
            }
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
      return sys_ids;
    }

    std::set<uint32_t>*
    SourceFilter::listEntities(std::vector<std::string>& entities)
    {
      // Process the entities allowed to pass the message
      std::set<uint32_t>* ent_ids = new std::set<uint32_t>;
      uint32_t ent_tmp;
      unsigned int i_ent_n = entities.size();
      if (i_ent_n < 1)
      {
        ent_ids->insert(UINT_MAX);
        m_task.debug("%s filtering - Filter source entity undefined", m_msg_name.c_str());
        return ent_ids;
      }

      for (unsigned int i = 0; i < i_ent_n; i++)
      {
        m_task.spew("%s filtering - Entity '%s' (%u/%u).", m_msg_name.c_str(),
                    entities[i].c_str(), i + 1, i_ent_n);

        // Resolve entity id.
        try
        {
          ent_tmp = m_task.resolveEntity(entities[i]);
          ent_ids->insert(ent_tmp);
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
      return ent_ids;
    }

    void
    SourceFilter::defineSystemFilter(const std::vector<std::string>& src)
    {
      m_task.debug("Defining filter with systems.");
      // Process the systems allowed to pass the message
      std::vector<std::string> systems;
      for (unsigned int i_src = 0; i_src < src.size(); i_src++)
      {
        systems.clear();
        Utils::String::split(src[i_src], "+", systems);
        // List the allowed systems
        m_filtered_sys.push_back(listSystems(systems));
      }
      m_filt_msg = false;
      m_filt_sys = true;
      m_filt_ent = false;

      // debug print-outs
      m_task.spew("%s filter sets:", m_msg_name.c_str());
      for (Systems::iterator itr_sys = m_filtered_sys.begin(); itr_sys != m_filtered_sys.end(); itr_sys++)
      {
        if ((*itr_sys)->find((unsigned int)UINT_MAX) != (*itr_sys)->end())
          m_task.spew("     System: ANY.");
        else
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys)->begin();
              itr_sys_indiv != (*itr_sys)->end(); itr_sys_indiv++)
            m_task.spew("     System: '%s'.",
                        m_task.resolveSystemId(*itr_sys_indiv));
      }
    }

    void
    SourceFilter::defineEntityFilter(const std::vector<std::string>& src)
    {
      m_task.debug("Defining filter with entities.");
      // Process the entities allowed to pass the message
      std::vector<std::string> entities;
      for (unsigned int i_src = 0; i_src < src.size(); i_src++)
      {
        entities.clear();
        Utils::String::split(src[i_src], "+", entities);
        // List the allowed entities
        m_filtered_ent.push_back(listEntities(entities));
      }
      m_filt_msg = false;
      m_filt_sys = false;
      m_filt_ent = true;

      // debug print-outs
      m_task.spew("%s filter sets:", m_msg_name.c_str());
      for (Entities::iterator itr_ent = m_filtered_ent.begin(); itr_ent != m_filtered_ent.end(); itr_ent++)
      {
        if ((*itr_ent)->find((unsigned int)UINT_MAX) != (*itr_ent)->end())
          m_task.spew("     Entity: ANY.");
        else
          for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent)->begin();
              itr_ent_indiv != (*itr_ent)->end(); itr_ent_indiv++)
            m_task.spew("     Entity: '%s'.",
                        m_task.resolveEntity(*itr_ent_indiv).c_str());
      }
    }

    void
    SourceFilter::defineSystemEntityFilter(const std::vector<std::string>& src)
    {
      m_task.debug("Defining filter with systems and entities.");
      // Process the systems and entities allowed to pass the message
      std::vector<std::string> parts;
      std::vector<std::string> systems;
      std::vector<std::string> entities;
      for (unsigned int i = 0; i < src.size(); ++i)
      {
        parts.clear();
        Utils::String::split(src[i], ":", parts);
        if (parts.size() < 1)
          continue;
        else if (parts.size() < 2)
        {
          m_task.war("Only 1 field provided! Fields for both systems and entities are required.");
          continue;
        }

        // Group allowed systems and entities
        systems.push_back(parts[0]);
        entities.push_back(parts[1]);
      }
      defineSystemFilter(systems);
      defineEntityFilter(entities);
      m_filt_sys = true;

      // debug print-outs
      m_task.spew("%s filter sets:", m_msg_name.c_str());
      Entities::iterator itr_ent = m_filtered_ent.begin();
      for (Systems::iterator itr_sys = m_filtered_sys.begin(); itr_sys != m_filtered_sys.end(); itr_sys++)
      {
        if ((*itr_sys)->find((unsigned int)UINT_MAX) != (*itr_sys)->end())
        {
          if ((*itr_ent)->find((unsigned int)UINT_MAX) != (*itr_ent)->end())
            m_task.spew("     System: ANY - Entity: ANY.");
          else
            for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent)->begin();
                itr_ent_indiv != (*itr_ent)->end(); itr_ent_indiv++)
              m_task.spew("     System: ANY - Entity: '%s'.",
                          m_task.resolveEntity(*itr_ent_indiv).c_str());
        }
        else if ((*itr_ent)->find((unsigned int)UINT_MAX) != (*itr_ent)->end())
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys)->begin();
              itr_sys_indiv != (*itr_sys)->end(); itr_sys_indiv++)
            m_task.spew("     System: '%s' - Entity: ANY.",
                        m_task.resolveSystemId(*itr_sys_indiv));
        else
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys)->begin();
              itr_sys_indiv != (*itr_sys)->end(); itr_sys_indiv++)
            for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent)->begin();
                itr_ent_indiv != (*itr_ent)->end(); itr_ent_indiv++)
              m_task.spew("     System: '%s' - Entity: '%s'.",
                          m_task.resolveSystemId(*itr_sys_indiv),
                          m_task.resolveEntity(*itr_ent_indiv).c_str());
        itr_ent++;
      }
    }

    void
    SourceFilter::defineMessageSystemFilter(const std::vector<std::string>& src)
    {
      m_task.debug("Defining filter with messages and systems.");
      // Process the systems and entities allowed to pass the defined messages
      std::vector<std::string> parts;
      std::vector<std::string> messages;
      std::vector<std::string> systems;
      for (unsigned int i = 0; i < src.size(); ++i)
      {
        parts.clear();
        Utils::String::split(src[i], ":", parts);
        if (parts.size() < 1)
          continue;
        else if (parts.size() < 2)
        {
          m_task.war("Only 1 field provided! Fields for both messages and systems are required.");
          continue;
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
      m_filt_msg = true;

      // debug print-outs
      Messages::iterator itr_msg = m_filtered_msg.begin();
      for (Systems::iterator itr_sys = m_filtered_sys.begin(); itr_sys != m_filtered_sys.end(); itr_sys++)
      {
        if ((*itr_msg)->find((unsigned int)UINT_MAX) != (*itr_msg)->end())
          m_task.spew("Filter for ANY message, sets:");
        else
        {
          m_task.spew("Filter for:");
          for (std::set<uint32_t>::iterator itr_msg_indiv = (*itr_msg)->begin();
              itr_msg_indiv != (*itr_msg)->end(); itr_msg_indiv++)
            m_task.spew("  Message %s", IMC::Factory::getAbbrevFromId(*itr_msg_indiv).c_str());
          m_task.spew("-------------- sets:");
        }
        if ((*itr_sys)->find((unsigned int)UINT_MAX) != (*itr_sys)->end())
          m_task.spew("     System: ANY.");
        else
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys)->begin();
              itr_sys_indiv != (*itr_sys)->end(); itr_sys_indiv++)
            m_task.spew("     System: '%s'.",
                        m_task.resolveSystemId(*itr_sys_indiv));
        itr_msg++;
      }
    }

    void
    SourceFilter::defineMessageEntityFilter(const std::vector<std::string>& src)
    {
      m_task.debug("Defining filter with messages and entities.");
      // Process the systems and entities allowed to pass the defined messages
      std::vector<std::string> parts;
      std::vector<std::string> messages;
      std::vector<std::string> entities;
      for (unsigned int i = 0; i < src.size(); ++i)
      {
        parts.clear();
        Utils::String::split(src[i], ":", parts);
        if (parts.size() < 1)
          continue;
        else if (parts.size() < 2)
        {
          m_task.war("Only 1 field provided! Fields for both messages and entities are required.");
          continue;
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
      m_filt_msg = true;

      // debug print-outs
      Messages::iterator itr_msg = m_filtered_msg.begin();
      for (Entities::iterator itr_ent = m_filtered_ent.begin(); itr_ent != m_filtered_ent.end(); itr_ent++)
      {
        if ((*itr_msg)->find((unsigned int)UINT_MAX) != (*itr_msg)->end())
          m_task.spew("Filter for ANY message, sets:");
        else
        {
          m_task.spew("Filter for:");
          for (std::set<uint32_t>::iterator itr_msg_indiv = (*itr_msg)->begin();
              itr_msg_indiv != (*itr_msg)->end(); itr_msg_indiv++)
            m_task.spew("  Message %s", IMC::Factory::getAbbrevFromId(*itr_msg_indiv).c_str());
          m_task.spew("-------------- sets:");
        }
        if ((*itr_ent)->find((unsigned int)UINT_MAX) != (*itr_ent)->end())
          m_task.spew("     Entity: ANY.");
        else
          for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent)->begin();
              itr_ent_indiv != (*itr_ent)->end(); itr_ent_indiv++)
            m_task.spew("     Entity: '%s'.",
                        m_task.resolveEntity(*itr_ent_indiv).c_str());
        itr_msg++;
      }
    }

    void
    SourceFilter::defineMessageSystemEntityFilter(const std::vector<std::string>& src)
    {
      m_task.debug("Defining filter with messages, systems, and entities.");
      // Process the systems and entities allowed to pass the defined messages
      std::vector<std::string> parts;
      std::vector<std::string> messages;
      std::vector<std::string> systems;
      std::vector<std::string> entities;
      for (unsigned int i = 0; i < src.size(); ++i)
      {
        parts.clear();
        Utils::String::split(src[i], ":", parts);
        if (parts.size() < 1)
          continue;
        else if (parts.size() < 3)
        {
          m_task.war("Not enough fields provided! Fields for messages, systems and entities are required.");
          continue;
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
      m_filt_msg = true;
      m_filt_sys = true;

      // debug print-outs
      Messages::iterator itr_msg = m_filtered_msg.begin();
      Entities::iterator itr_ent = m_filtered_ent.begin();
      for (Systems::iterator itr_sys = m_filtered_sys.begin(); itr_sys != m_filtered_sys.end(); itr_sys++)
      {
        if ((*itr_msg)->find((unsigned int)UINT_MAX) != (*itr_msg)->end())
          m_task.spew("Filter for ANY message, sets:");
        else
        {
          m_task.spew("Filter for:");
          for (std::set<uint32_t>::iterator itr_msg_indiv = (*itr_msg)->begin();
              itr_msg_indiv != (*itr_msg)->end(); itr_msg_indiv++)
            m_task.spew("  Message %s", IMC::Factory::getAbbrevFromId(*itr_msg_indiv).c_str());
          m_task.spew("-------------- sets:");
        }
        if ((*itr_sys)->find((unsigned int)UINT_MAX) != (*itr_sys)->end())
        {
          if ((*itr_ent)->find((unsigned int)UINT_MAX) != (*itr_ent)->end())
            m_task.spew("     System: ANY - Entity: ANY.");
          else
            for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent)->begin();
                itr_ent_indiv != (*itr_ent)->end(); itr_ent_indiv++)
              m_task.spew("     System: ANY - Entity: '%s'.",
                          m_task.resolveEntity(*itr_ent_indiv).c_str());
        }
        else if ((*itr_ent)->find((unsigned int)UINT_MAX) != (*itr_ent)->end())
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys)->begin();
              itr_sys_indiv != (*itr_sys)->end(); itr_sys_indiv++)
            m_task.spew("     System: '%s' - Entity: ANY.",
                        m_task.resolveSystemId(*itr_sys_indiv));
        else
          for (std::set<uint32_t>::iterator itr_sys_indiv = (*itr_sys)->begin();
              itr_sys_indiv != (*itr_sys)->end(); itr_sys_indiv++)
            for (std::set<uint32_t>::iterator itr_ent_indiv = (*itr_ent)->begin();
                itr_ent_indiv != (*itr_ent)->end(); itr_ent_indiv++)
              m_task.spew("     System: '%s' - Entity: '%s'.",
                          m_task.resolveSystemId(*itr_sys_indiv),
                          m_task.resolveEntity(*itr_ent_indiv).c_str());
        itr_msg++;
        itr_ent++;
      }
    }

    bool
    SourceFilter::matchSystem(const IMC::Message* msg)
    {
      // Filter the message by systems.
      // Returns True if the message source is allowed to pass.

      bool matched = true;
      if (m_filtered_sys.size() > 0)
      {
        matched = false;
        for (Systems::iterator itr_sys = m_filtered_sys.begin();
            itr_sys != m_filtered_sys.end(); itr_sys++)
          if (((*itr_sys)->find(msg->getSource()) != (*itr_sys)->end() ||
              (*itr_sys)->find((unsigned int)UINT_MAX) != (*itr_sys)->end()))
            matched = true;
      }
      return matched;
    }

    bool
    SourceFilter::matchEntity(const IMC::Message* msg)
    {
      // Filter the message by entities.
      // Returns True if the message source is allowed to pass.

      bool matched = true;
      if (m_filtered_ent.size() > 0)
      {
        matched = false;
        for (Entities::iterator itr_ent = m_filtered_ent.begin();
            itr_ent != m_filtered_ent.end(); itr_ent++)
          if (((*itr_ent)->find(msg->getSourceEntity()) != (*itr_ent)->end() ||
              (*itr_ent)->find((unsigned int)UINT_MAX) != (*itr_ent)->end()))
            matched = true;
      }
      return matched;
    }

    bool
    SourceFilter::matchSystemEntity(const IMC::Message* msg)
    {
      // Filter the message by systems and entities.
      // Returns True if the message source is allowed to pass.

      bool matched = true;
      if (m_filtered_sys.size() > 0)
      {
        matched = false;
        Entities::iterator itr_ent = m_filtered_ent.begin();
        for (Systems::iterator itr_sys = m_filtered_sys.begin();
            itr_sys != m_filtered_sys.end(); itr_sys++)
        {
          if (((*itr_sys)->find(msg->getSource()) != (*itr_sys)->end() ||
              (*itr_sys)->find((unsigned int)UINT_MAX) != (*itr_sys)->end()) &&
              ((*itr_ent)->find(msg->getSourceEntity()) != (*itr_ent)->end() ||
                  (*itr_ent)->find((unsigned int)UINT_MAX) != (*itr_ent)->end()))
            matched = true;
          itr_ent++;
        }
      }
      return matched;
    }

    bool
    SourceFilter::matchMessageSystem(const IMC::Message* msg)
    {
      // Filter a specified message by system and entity.
      // Returns True if the message source is allowed to pass.

      bool matched = true;
      bool msg_match = false;
      if (m_filtered_sys.size() > 0)
      {
        matched = false;
        Messages::iterator itr_msg = m_filtered_msg.begin();
        for (Systems::iterator itr_sys = m_filtered_sys.begin();
            itr_sys != m_filtered_sys.end(); itr_sys++)
        {
          if ((*itr_msg)->find(msg->getId()) != (*itr_msg)->end() ||
              (*itr_msg)->find((unsigned int)UINT_MAX) != (*itr_msg)->end())
          {
            msg_match = true;
            if (((*itr_sys)->find(msg->getSource()) != (*itr_sys)->end() ||
                (*itr_sys)->find((unsigned int)UINT_MAX) != (*itr_sys)->end()))
              matched = true;
          }
          itr_msg++;
        }
      }
      if (matched)
        return true;
      else if (!msg_match)
      {
        m_task.war("No filter rules defined for message %s!", msg->getName());
        return true;
      }
      else
        return false;
    }

    bool
    SourceFilter::matchMessageEntity(const IMC::Message* msg)
    {
      // Filter a specified message by system and entity.
      // Returns True if the message source is allowed to pass.

      bool matched = true;
      bool msg_match = false;
      if (m_filtered_sys.size() > 0)
      {
        matched = false;
        Messages::iterator itr_msg = m_filtered_msg.begin();
        for (Entities::iterator itr_ent = m_filtered_ent.begin();
            itr_ent != m_filtered_ent.end(); itr_ent++)
        {
          if ((*itr_msg)->find(msg->getId()) != (*itr_msg)->end() ||
              (*itr_msg)->find((unsigned int)UINT_MAX) != (*itr_msg)->end())
          {
            msg_match = true;
            if (((*itr_ent)->find(msg->getSourceEntity()) != (*itr_ent)->end() ||
                (*itr_ent)->find((unsigned int)UINT_MAX) != (*itr_ent)->end()))
              matched = true;
          }
          itr_msg++;
        }
      }
      if (matched)
        return true;
      else if (!msg_match)
      {
        m_task.war("No filter rules defined for message %s!", msg->getName());
        return true;
      }
      else
        return false;
    }

    bool
    SourceFilter::matchMessageSystemEntity(const IMC::Message* msg)
    {
      // Filter a specified message by system and entity.
      // Returns True if the message source is allowed to pass.

      bool matched = true;
      bool msg_match = false;
      if (m_filtered_sys.size() > 0)
      {
        matched = false;
        Messages::iterator itr_msg = m_filtered_msg.begin();
        Entities::iterator itr_ent = m_filtered_ent.begin();
        for (Systems::iterator itr_sys = m_filtered_sys.begin();
            itr_sys != m_filtered_sys.end(); itr_sys++)
        {
          if ((*itr_msg)->find(msg->getId()) != (*itr_msg)->end() ||
              (*itr_msg)->find((unsigned int)UINT_MAX) != (*itr_msg)->end())
          {
            msg_match = true;
            if (((*itr_sys)->find(msg->getSource()) != (*itr_sys)->end() ||
                (*itr_sys)->find((unsigned int)UINT_MAX) != (*itr_sys)->end()) &&
                ((*itr_ent)->find(msg->getSourceEntity()) != (*itr_ent)->end() ||
                    (*itr_ent)->find((unsigned int)UINT_MAX) != (*itr_ent)->end()))
              matched = true;
          }
          itr_msg++;
          itr_ent++;
        }
      }
      if (matched)
        return true;
      else if (!msg_match)
      {
        m_task.war("No filter rules defined for message %s!", msg->getName());
        return true;
      }
      else
        return false;
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
