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
