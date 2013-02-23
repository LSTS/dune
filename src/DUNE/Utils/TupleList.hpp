//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: TupleList.hpp 12667 2013-01-22 02:44:42Z rasm                    $:*
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
