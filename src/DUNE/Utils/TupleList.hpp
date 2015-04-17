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

#ifndef DUNE_UTILS_TUPLE_LIST_HPP_INCLUDED_
#define DUNE_UTILS_TUPLE_LIST_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <string>
#include <vector>
#include <ostream>

// DUNE headers.
#include <DUNE/Utils/String.hpp>
#include <DUNE/Streams/Terminal.hpp>

namespace DUNE
{
  namespace Utils
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM TupleList;

    class TupleList
    {
    public:
      TupleList(std::string str, std::string sep = "=", std::string tuple_sep = ";", bool ignore_case = false):
        m_sep(sep),
        m_tuple_sep(tuple_sep),
        m_ignore_case(ignore_case)
      {
        *this << str;
      }

      void
      clear(void)
      {
        m_data.clear();
      }

      std::string
      get(std::string label)
      {
        if (m_ignore_case)
          String::toLowerCase(label);

        return m_data[label];
      }

      template <typename Type>
      Type
      get(std::string label, Type dflt)
      {
        if (m_ignore_case)
          String::toLowerCase(label);

        Type t;
        std::stringstream sin(m_data[label]);

        sin >> t;

        if (sin.fail())
        {
          t = dflt;
        }

        return t;
      }

      TupleList&
      operator<<(const std::string str);

      friend std::ostream&
      operator<<(std::ostream& os, const TupleList&);

      friend std::string&
      operator<<(std::string& os, const TupleList&);

      std::map<std::string, std::string>
      getMap();

      std::map<std::string, std::string>
      getMapReversed();

    private:
      std::string m_sep;
      std::string m_tuple_sep;
      bool m_ignore_case;
      std::map<std::string, std::string> m_data;
    };
  }
}

#endif
