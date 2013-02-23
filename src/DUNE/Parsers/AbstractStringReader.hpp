//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: AbstractStringReader.hpp 12667 2013-01-22 02:44:42Z rasm         $:*
//***************************************************************************

#ifndef DUNE_PARSERS_ABSTRACT_STRING_READER_HPP_INCLUDED_
#define DUNE_PARSERS_ABSTRACT_STRING_READER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

namespace DUNE
{
  namespace Parsers
  {
    class AbstractStringReader
    {
    public:
      virtual
      ~AbstractStringReader(void)
      { }

      virtual bool
      read(const std::string& value) = 0;
    };
  }
}

#endif
