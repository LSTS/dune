//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
