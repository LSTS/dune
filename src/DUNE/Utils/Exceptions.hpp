//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_UTILS_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_UTILS_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <string>

namespace DUNE
{
  namespace Utils
  {
    class IOError: public std::runtime_error
    {
    public:
      IOError(std::string op, std::string file, std::string arg):
        std::runtime_error(op + ": " + file + ": " + arg)
      { }
    };

    class ZipFileError: public std::runtime_error
    {
    public:
      ZipFileError(std::string msg):
        std::runtime_error(msg)
      { }
    };

    class ParseError: public std::runtime_error
    {
    public:
      ParseError(std::string subject, std::string msg):
        std::runtime_error("parse error: " + subject + ": " + msg)
      { }
    };
  }
}

#endif
