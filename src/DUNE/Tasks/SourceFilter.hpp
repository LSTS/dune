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

#ifndef DUNE_TASKS_SOURCE_FILTER_HPP_INCLUDED_
#define DUNE_TASKS_SOURCE_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Tasks.hpp>
#include <DUNE/IMC.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM SourceFilter;

    //! SourceFilter
    //! Filter to check if a message is allowed to pass according
    //! to its source system and/or entity
    class SourceFilter
    {
    public:
      //! Construct a task command input filter by systems and entities for specific messages.
      //! @param[in] task filter parent task.
      //! @param[in] source desired command sources system and entity names.
      SourceFilter(Tasks::Task& task, const std::vector<std::string>& source);

      //! Construct a task input filter by systems or entities for specific messages.
      //! @param[in] task filter parent task.
      //! @param[in] only_systems flag that selects filtering by systems or entities
      //! @param[in] source desired sources system and entity names.
      SourceFilter(Tasks::Task& task, const bool only_systems, const std::vector<std::string>& source);

      //! Construct a task input filter by systems and entities for a general message.
      //! @param[in] task filter parent task.
      //! @param[in] source desired sources system and entity names.
      //! @param[in] msg_name filtered message name.
      SourceFilter(Tasks::Task& task, const std::vector<std::string>& source, const std::string& msg_name);

      //! Construct a task input filter by systems or entities for a general message.
      //! @param[in] task filter parent task.
      //! @param[in] only_systems flag that selects filtering by systems or entities
      //! @param[in] source desired sources system and entity names.
      //! @param[in] msg_name filtered message name.
      SourceFilter(Tasks::Task& task, const bool only_systems, const std::vector<std::string>& source,
                   const std::string& msg_name);

      //! Destructor.
      ~SourceFilter(void)
      {  };

      //! Define filter by systems.
      //! @param[in] source desired sources system and entity names.
      void
      defineSystemFilter(const std::vector<std::string>& source);

      //! Define filter by entities.
      //! @param[in] source desired sources system and entity names.
      void
      defineEntityFilter(const std::vector<std::string>& source);

      //! Define the desired message source systems and entities.
      //! @param[in] source desired sources system and entity names.
      void
      defineSystemEntityFilter(const std::vector<std::string>& source);

      //! Define the desired source systems and entities for several messages.
      //! @param[in] source desired sources system and entity names.
      void
      defineMessageSystemFilter(const std::vector<std::string>& source);

      //! Define the desired source systems and entities for several messages.
      //! @param[in] source desired sources system and entity names.
      void
      defineMessageEntityFilter(const std::vector<std::string>& source);

      //! Define the desired source systems and entities for several messages.
      //! @param[in] source desired sources system and entity names.
      void
      defineMessageSystemEntityFilter(const std::vector<std::string>& source);

      //! Verification of the message source system and entity.
      //! @param[in] msg input message.
      //! @return true if the message is allowed to pass.
      bool
      match(const IMC::Message* msg);

    private:
      //! Filter lists
      typedef std::vector<std::set<uint32_t> > FilterList;

      //! Define a set of filtered messages.
      //! @param[in] messages filtered messages' names.
      //! @return set of filtered message ids.
      std::set<uint32_t>
      listMessages(std::vector<std::string>& messages);

      //! Define the desired message source systems.
      //! @param[in] systems sources system names.
      //! @return set of system ids allowed to pass a message.
      std::set<uint32_t>
      listSystems(std::vector<std::string>& systems);

      //! Define the desired message source entities.
      //! @param[in] entities sources entity names.
      //! @return set of entity ids allowed to pass a message.
      std::set<uint32_t>
      listEntities(std::vector<std::string>& entities);

      //! Delete a set of filter ids.
      //! @param[in/out] list filtered message, system, or entity ids.
      void
      deleteList(FilterList& list);

      //! Verification of a general message source system.
      //! @param[in] msg input message.
      //! @return true if the message is allowed to pass.
      bool
      matchSystem(const IMC::Message* msg);

      //! Verification of a general message source entity.
      //! @param[in] msg input message.
      //! @return true if the message is allowed to pass.
      bool
      matchEntity(const IMC::Message* msg);

      //! Verification of a general message source system and entity.
      //! @param[in] msg input message.
      //! @return true if the message is allowed to pass.
      bool
      matchSystemEntity(const IMC::Message* msg);

      //! Verification of a specific message source system.
      //! @param[in] msg input message.
      //! @return true if the message is allowed to pass.
      bool
      matchMessageSystem(const IMC::Message* msg);

      //! Verification of a specific message source entity.
      //! @param[in] msg input message.
      //! @return true if the message is allowed to pass.
      bool
      matchMessageEntity(const IMC::Message* msg);

      //! Verification of a specific message source system and entity.
      //! @param[in] msg input message.
      //! @return true if the message is allowed to pass.
      bool
      matchMessageSystemEntity(const IMC::Message* msg);

      //! Filter definition description for user information.
      void
      filterDefinition(void);

      //! Generate user information for a systems filter description
      //! return user information with the filter description.
      std::vector<std::string>
      generateInfoSystem(void);

      //! Show a entities filter description for user information
      //! return user information with the filter description.
      std::vector<std::string>
      generateInfoEntity(void);

      //! Show a systems and entities filter description for user information
      //! return user information with the filter description.
      std::vector<std::string>
      generateInfoSystemEntity(void);

      //! Show a messages and systems filter description for user information
      //! return user information with the filter description.
      std::vector<std::string>
      generateInfoMessageSystem(void);

      //! Show a messages and entities filter description for user information
      //! return user information with the filter description.
      std::vector<std::string>
      generateInfoMessageEntity(void);

      //! Show a messages, systems, and entities filter description for user information
      //! return user information with the filter description.
      std::vector<std::string>
      generateInfoMessageSystemEntity(void);

      //! Filter definition warnings print-out.
      void
      printDefinitionWarnings(void);

      //! Message rejection print-out.
      //! @param[in] msg input message.
      void
      printRejected(const IMC::Message* msg);

      //! Warnings for user information.
      //! @return warnings.
      std::vector<std::string>
      warnings(void);

      //! Parent task.
      Tasks::Task& m_task;
      //! List of filtered messages allowed to pass them.
      FilterList m_filtered_msg;
      //! List of filtered systems allowed to pass them.
      FilterList m_filtered_sys;
      //! List of filtered entities allowed to pass them.
      FilterList m_filtered_ent;
      //! Filtered message name
      std::string m_msg_name;
      //! Message filtering flag
      bool m_filt_msg;
      //! System filtering flag
      bool m_filt_sys;
      //! Entity filtering flag
      bool m_filt_ent;
      //! User information outputs
      std::vector<std::string> m_warnings;
    };
  }
}

#endif
