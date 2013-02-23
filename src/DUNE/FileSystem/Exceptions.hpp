//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_FILE_SYSTEM_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_FILE_SYSTEM_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/System/Error.hpp>

namespace DUNE
{
  namespace FileSystem
  {
    class FileReadError: public std::runtime_error
    {
    public:
      FileReadError(const std::string& fname, const std::string& msg):
        std::runtime_error("reading file: (" + fname + ") " + msg)
      { }

      FileReadError(const std::string& fname):
        std::runtime_error("reading file: (" + fname + ") " + System::Error::getLastMessage())
      { }
    };

    class FileWriteError: public std::runtime_error
    {
    public:
      FileWriteError(const std::string& fname, const std::string& msg):
        std::runtime_error("writing file: (" + fname + ") " + msg)
      { }

      FileWriteError(const std::string& fname):
        std::runtime_error("writing file: (" + fname + ") " + System::Error::getLastMessage())
      { }
    };
  }
}

#endif
