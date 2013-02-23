//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: BasicStringReader.hpp 12667 2013-01-22 02:44:42Z rasm            $:*
//***************************************************************************

#ifndef DUNE_PARSERS_BASIC_STRING_READER_HPP_INCLUDED_
#define DUNE_PARSERS_BASIC_STRING_READER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Casts.hpp>
#include <DUNE/Parsers/AbstractStringReader.hpp>

namespace DUNE
{
  namespace Parsers
  {
    template <typename T>
    class BasicStringReader: public AbstractStringReader
    {
    public:
      BasicStringReader(T& var):
        m_var(var)
      { }

      virtual
      ~BasicStringReader(void)
      { }

      virtual bool
      read(const std::string& value)
      {
        return castLexical(value, m_var);
      }

    private:
      T& m_var;
    };
  }
}

#endif
