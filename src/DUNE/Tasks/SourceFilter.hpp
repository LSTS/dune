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

#ifndef DUNE_TASKS_SOURCE_FILTER_HPP_INCLUDED_
#define DUNE_TASKS_SOURCE_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
// none

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM SourceFilter;

    class SourceFilter
    {
    public:
      /*
      //! Construct a task input filter object.
      SourceFilter(void);
      */

      //! Construct a task input filter object.
      //! @param[in] task - filter parent task.
      //! @param[in] source - desired sources system and entity names.
      //! @param[in] msg_name - filtered message name.
      SourceFilter(Tasks::Task& task, const std::vector<std::string>& source, const std::string msg_name);

      /*
      //! Construct a task input filter object.
      //! @param[in] task - filter parent task.
      //! @param[in] source - desired sources system and entity names.
      //! @param[in] msg_name - filtered message name.
      SourceFilter(std::string name, Tasks::Context& ctx, const std::vector<std::string>* source, const std::string msg_name);
      */

      /*
      //! Destructor.
      ~SourceFilter(void)
      {
      }
      */

      //! Verification of the message source system and entity.
      //! @param[in] msg - input message.
      //! @param[out] match with the filter system and entity list.
      bool
      match(const IMC::Message* msg);

    private:

      //! Define the desired message source systems and entities.
      //! @param[in] source - desired sources system and entity names.
      void
      defineFilter(const std::vector<std::string>& source);

      //! List of systems and entities allowed to pass a message.
      typedef std::vector<uint32_t> Systems;
      typedef std::vector<uint32_t> Entities;
      Systems m_filtered_sys;
      Entities m_filtered_ent;

      // Parent task.
      Tasks::Task& m_task;

      // Filtered message name
      std::string m_msg_name;
    };
  }
}

#endif
