//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <map>

// DUNE headers.
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Utils/Utils.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/IMC/Exceptions.hpp>
#include <DUNE/IMC/Factory.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace IMC
  {
    typedef Message* (*Creator) (void);

    template <typename Type>
    static Message*
    create(void)
    {
      return new Type();
    }

    static std::pair<uint32_t, std::string> pairs_id_abbrev[] =
    {
#define MESSAGE(id, abbrev)                             \
      std::pair<uint32_t, std::string>(id, #abbrev),
#include <DUNE/IMC/Factory.def>
    };

    static std::pair<std::string, uint32_t> pairs_abbrev_id[] =
    {
#define MESSAGE(id, abbrev)                             \
      std::pair<std::string, uint32_t>(#abbrev, id),
#include <DUNE/IMC/Factory.def>
    };

    static std::pair<int, Creator> creator_pairs_id[] =
    {
#define MESSAGE(id, abbrev)                                     \
      std::pair<int, Creator>(id, &create<abbrev>),
#include <DUNE/IMC/Factory.def>
    };

    DUNE_DECLARE_STATIC_MAP(creators_by_id, int, Creator, creator_pairs_id);
    DUNE_DECLARE_STATIC_MAP(map_id_abbrev, uint32_t, std::string, pairs_id_abbrev);
    DUNE_DECLARE_STATIC_MAP(map_abbrev_id, std::string, uint32_t, pairs_abbrev_id);

    Message*
    Factory::produce(uint32_t id)
    {
      if (creators_by_id[id])
        return creators_by_id[id]();

      DUNE_DBG("IMC Message Factory", "unknown message " << id);
      return 0;
    }

    Message*
    Factory::produce(const std::string& name)
    {
      uint32_t id = getIdFromAbbrev(name);

      return produce(id);
    }

    std::string
    Factory::getAbbrevFromId(uint32_t id)
    {
      std::map<uint32_t, std::string>::iterator itr = map_id_abbrev.find(id);

      if (itr == map_id_abbrev.end())
        throw InvalidMessageId(id);

      return itr->second;
    }

    uint32_t
    Factory::getIdFromAbbrev(const std::string& name)
    {
      std::map<std::string, uint32_t>::iterator itr = map_abbrev_id.find(name);

      if (itr == map_abbrev_id.end())
        throw InvalidMessageAbbrev(name);

      return itr->second;
    }

    void
    Factory::getAbbrevs(std::vector<std::string>& v)
    {
      for(std::map<std::string, uint32_t>::iterator itr = map_abbrev_id.begin();
          itr != map_abbrev_id.end(); itr++)
      {
        v.push_back(itr->first);
      }

    }
    void
    Factory::getIds(std::vector<uint32_t>& v)
    {
      for(std::map<std::string, uint32_t>::iterator itr = map_abbrev_id.begin();
          itr != map_abbrev_id.end(); itr++)
      {
        v.push_back(itr->second);
      }
    }
    void
    Factory::getIds(std::string list, std::vector<uint32_t>& v)
    {
      std::vector<std::string> l;
      DUNE::Utils::String::split(list, ",", l);

      for (unsigned int i=0; i < l.size(); ++i)
        v.push_back(getIdFromAbbrev(l[i]));
    }
  }
}
