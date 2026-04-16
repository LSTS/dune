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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#ifndef DUNE_TASKS_CUSTOM_MESSAGE_FILTERS_LOGBOOK_ENTRY_FILTER_HPP_INCLUDED_
#define DUNE_TASKS_CUSTOM_MESSAGE_FILTERS_LOGBOOK_ENTRY_FILTER_HPP_INCLUDED_

#include "CustomMessageFilter.hpp"

#include <unordered_map>
#include <unordered_set>

#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Tasks/Task.hpp>

namespace DUNE
{
  namespace Tasks
  {
    const std::map<std::string, uint8_t> c_logbook_entry_types = {
      {"INFO", DUNE::IMC::LogBookEntry::LBET_INFO},
      {"WARNING", DUNE::IMC::LogBookEntry::LBET_WARNING},
      {"ERROR", DUNE::IMC::LogBookEntry::LBET_ERROR},
      {"CRITICAL", DUNE::IMC::LogBookEntry::LBET_CRITICAL},
      {"DEBUG", DUNE::IMC::LogBookEntry::LBET_DEBUG}
    };

    class LogBookEntryFilter : public CustomMessageFilter
    {
    public:
      LogBookEntryFilter(DUNE::Tasks::Task* task, const std::string& spec = ""):
        CustomMessageFilter(DUNE::IMC::LogBookEntry::getIdStatic())
      {
        (void)task;

        if (spec.empty())
          return;

        std::vector<std::string> parts;
        DUNE::Utils::String::split(spec, "+", parts);
        for (auto& part : parts)
        {
          auto it = c_logbook_entry_types.find(part);
          if (it != c_logbook_entry_types.end())
            m_logbook_entry_types.insert(it->second);
        }
      }

      bool
      filter(const DUNE::IMC::Message* msg) override
      {
        const auto log_book_entry_msg = dynamic_cast<const DUNE::IMC::LogBookEntry*>(msg);
        if (log_book_entry_msg == nullptr)
          return false;

        return (!m_logbook_entry_types.empty() && m_logbook_entry_types.find(log_book_entry_msg->type) == m_logbook_entry_types.end());
      }

    private:
      //! Filtered logbook entry types.
      std::unordered_set<uint8_t> m_logbook_entry_types;
    };
  }
}

#endif
