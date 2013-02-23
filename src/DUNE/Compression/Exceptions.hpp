//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Exceptions.hpp 12667 2013-01-22 02:44:42Z rasm                   $:*
//***************************************************************************

#ifndef DUNE_COMPRESSION_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_COMPRESSION_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Compression
  {
    class Error: public std::runtime_error
    {
    public:
      Error(const std::string& msg):
        std::runtime_error(msg)
      { }
    };

    class UnknownMethod: public Error
    {
    public:
      UnknownMethod(const std::string& msg):
        Error(std::string("unknown compression method: ") + msg)
      { }
    };

    class OutOfMemory: public Error
    {
    public:
      OutOfMemory(void):
        Error("not enough memory to uncompress/decompress data")
      { }
    };

    class BufferTooShort: public Error
    {
    public:
      BufferTooShort(void):
        Error(Utils::String::str("buffer is too short"))
      { }

      BufferTooShort(unsigned long length):
        Error(Utils::String::str("buffer is too short (length %lu)", length))
      { }
    };

    class CorruptedData: public Error
    {
    public:
      CorruptedData(void):
        Error("corrupted data")
      { }
    };

    //! End of data.
    class UnexpectedEOD: public Error
    {
    public:
      UnexpectedEOD(void):
        Error("unexpected end-of-data")
      { }
    };
  }
}

#endif
