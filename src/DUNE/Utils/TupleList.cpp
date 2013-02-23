//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Utils/TupleList.hpp>
#include <DUNE/Utils/Exceptions.hpp>

namespace DUNE
{
  namespace Utils
  {
    TupleList&
    TupleList::operator<<(const std::string str)
    {
      std::vector<std::string> vec;
      String::split(str, m_tuple_sep, vec);

      for (unsigned int i = 0; i < vec.size(); ++i)
      {
        std::string::size_type idx = vec[i].find(m_sep, 0);

        if (idx == std::string::npos)
          continue;

        std::string label = String::trim(vec[i].substr(0, idx));
        std::string value = String::trim(vec[i].substr(idx + 1, std::string::npos));

        if (m_ignore_case)
          String::toLowerCase(label);

        m_data[label] = value;
      }
      return *this;
    }

    std::ostream&
    operator<<(std::ostream& os, const TupleList& tl)
    {
      for (std::map<std::string, std::string>::const_iterator itr = tl.m_data.begin(); itr != tl.m_data.end(); ++itr)
        os << itr->first << tl.m_sep << itr->second << tl.m_tuple_sep;

      return os;
    }

    std::string&
    operator<<(std::string& os, const TupleList& tl)
    {
      for (std::map<std::string, std::string>::const_iterator itr = tl.m_data.begin(); itr != tl.m_data.end(); ++itr)
        os += itr->first + tl.m_sep + itr->second + tl.m_tuple_sep;

      return os;
    }

    std::map<std::string, std::string>
    TupleList::getMap()
    {
      std::map<std::string, std::string> ret;
      std::map<std::string, std::string>::iterator it;

      for (it = m_data.begin(); it != m_data.end(); it++)
        ret[it->second] = it->first;

      return ret;
    }

    std::map<std::string, std::string>
    TupleList::getMapReversed()
    {
      std::map<std::string, std::string> ret;
      std::map<std::string, std::string>::iterator it;

      for (it = m_data.begin(); it != m_data.end(); it++)
        ret[it->first] = it->second;

      return ret;
    }
  }
}
