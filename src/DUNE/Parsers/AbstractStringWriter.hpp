//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_PARSERS_ABSTRACT_STRING_WRITER_HPP_INCLUDED_
#define DUNE_PARSERS_ABSTRACT_STRING_WRITER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

namespace DUNE
{
  namespace Parsers
  {
    class AbstractStringWriter
    {
    public:
      virtual
      ~AbstractStringWriter(void)
      { }

      virtual std::string
      write(void) = 0;
    };
  }
}

#endif
