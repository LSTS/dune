//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_PARSERS_BASIC_STRING_WRITER_HPP_INCLUDED_
#define DUNE_PARSERS_BASIC_STRING_WRITER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Casts.hpp>
#include <DUNE/Parsers/AbstractStringWriter.hpp>

namespace DUNE
{
  namespace Parsers
  {
    template <typename T>
    class BasicStringWriter: public AbstractStringWriter
    {
    public:
      BasicStringWriter(T& var):
        m_var(var)
      { }

      virtual
      ~BasicStringWriter(void)
      { }

      virtual std::string
      write(void)
      {
        return uncastLexical(m_var);
      }

    private:
      T& m_var;
    };
  }
}

#endif
