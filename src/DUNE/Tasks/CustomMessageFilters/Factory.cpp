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

#include "Factory.hpp"

#include <DUNE/Utils/Utils.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/IMC/Factory.hpp>

#include "EntityStateChangeFilter.hpp"
#include "LogBookEntryFilter.hpp"

namespace DUNE
{
  namespace Tasks
  {
    typedef std::unique_ptr<CustomMessageFilter> (*Creator) (DUNE::Tasks::Task*, const std::string&);

    template <typename Type>
    static std::unique_ptr<CustomMessageFilter>
    create(DUNE::Tasks::Task* task, const std::string& spec)
    {
      return std::make_unique<Type>(task, spec);
    }

    static std::pair<uint32_t, std::string> pairs_id_abbrev[] =
    {
#define CUSTOM_FILTER(msg_abbrev, filter_abbrev) \
      std::pair<uint32_t, std::string>(DUNE::IMC::Factory::getIdFromAbbrev(#msg_abbrev), #filter_abbrev),
#include <DUNE/Tasks/CustomMessageFilters/Factory.def>
    };

    static std::pair<std::string, uint32_t> pairs_abbrev_id[] =
    {
#define CUSTOM_FILTER(msg_abbrev, filter_abbrev) \
      std::pair<std::string, uint32_t>(#filter_abbrev, DUNE::IMC::Factory::getIdFromAbbrev(#msg_abbrev)),
#include <DUNE/Tasks/CustomMessageFilters/Factory.def>
    };

    static std::pair<uint32_t, Creator> creator_pairs_id[] =
    {
#define CUSTOM_FILTER(msg_abbrev, filter_abbrev) \
      std::pair<uint32_t, Creator>(DUNE::IMC::Factory::getIdFromAbbrev(#msg_abbrev), &create<filter_abbrev>),
#include <DUNE/Tasks/CustomMessageFilters/Factory.def>
    };

    DUNE_DECLARE_STATIC_MAP(creators_by_id, uint32_t, Creator, creator_pairs_id);
    DUNE_DECLARE_STATIC_MAP(map_id_abbrev, uint32_t, std::string, pairs_id_abbrev);
    DUNE_DECLARE_STATIC_MAP(map_abbrev_id, std::string, uint32_t, pairs_abbrev_id);

    std::string
    CustomMessageFilterFactory::getName(uint32_t id)
    {
      auto it = map_id_abbrev.find(id);
      if (it != map_id_abbrev.end())
        return it->second;

      return "";
    }

    void
    CustomMessageFilterFactory::getNames(std::vector<std::string>& names)
    {
      names.clear();
      for (auto it = map_id_abbrev.begin(); it != map_id_abbrev.end(); ++it)
        names.push_back(it->second);
    }

    void
    CustomMessageFilterFactory::getNames(std::string& names)
    {
      std::vector<std::string> names_vec;
      getNames(names_vec);
      names = Utils::String::join(names_vec.begin(), names_vec.end(), ",");
    }

    uint32_t
    CustomMessageFilterFactory::getId(const std::string& name)
    {
      auto it = map_abbrev_id.find(name);
      if (it != map_abbrev_id.end())
        return it->second;

      return 0;
    }

    std::unique_ptr<CustomMessageFilter>
    CustomMessageFilterFactory::produce(DUNE::Tasks::Task* task, const std::string& name, const std::string& spec)
    {
      auto it = map_abbrev_id.find(name);
      if (it != map_abbrev_id.end())
        return produce(task, it->second, spec);

      return nullptr;
    }

    std::unique_ptr<CustomMessageFilter>
    CustomMessageFilterFactory::produce(DUNE::Tasks::Task* task, uint32_t id, const std::string& spec)
    {
      if (creators_by_id[id])
        return creators_by_id[id](task, spec);

      DUNE_DBG("Custom Filter Factory", "unknown custom filter " << id);
      return nullptr;
    }
  }
}
