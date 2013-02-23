//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: AbstractParameterParser.hpp 12700 2013-01-24 02:29:36Z rasm      $:*
//***************************************************************************

#ifndef DUNE_TASKS_ABSTRACT_PARAMETER_PARSER_HPP_INCLUDED_
#define DUNE_TASKS_ABSTRACT_PARAMETER_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

namespace DUNE
{
  namespace Tasks
  {
    //! Abstract class for parameter parsers.
    class AbstractParameterParser
    {
    public:
      //! Destructor.
      virtual
      ~AbstractParameterParser(void)
      { }

      virtual void
      read(const std::string& value) = 0;

      virtual std::string
      getTypeName(void) = 0;

      //! @return true if value changed, false otherwise.
      virtual bool
      commit(void) = 0;

      virtual void
      minimumSize(unsigned value)
      {
        (void)value;
      }

      virtual void
      maximumSize(unsigned value)
      {
        (void)value;
      }

      virtual void
      minimumValue(const std::string& value)
      {
        (void)value;
      }

      virtual void
      maximumValue(const std::string& value)
      {
        (void)value;
      }

      virtual void
      values(const std::string& list)
      {
        (void)list;
      }

      virtual void
      validate(void)
      { }
    };
  }
}

#endif
