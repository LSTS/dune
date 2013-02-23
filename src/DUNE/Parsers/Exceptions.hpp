//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Exceptions.hpp 12667 2013-01-22 02:44:42Z rasm                   $:*
//***************************************************************************

#ifndef DUNE_PARSERS_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_PARSERS_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Parsers
  {
    class Error: public std::runtime_error
    {
    public:
      Error(const std::string& msg):
        std::runtime_error(msg)
      { }
    };

    class InvalidSentence: public Error
    {
    public:
      InvalidSentence(const char* msg):
        Error(Utils::String::str("invalid sentence: %s", msg))
      { }

      InvalidSentence(const char* msg, const char* sentence):
        Error(Utils::String::str("invalid sentence: %s: %s", sentence, msg))
      { }
    };

    class InvalidCode: public Error
    {
    public:
      InvalidCode(void):
        Error("unable to extract NMEA code from sentence")
      { }
    };

    class TypeMismatch: public Error
    {
    public:
      TypeMismatch(void):
        Error("type mismatch")
      { }
    };

    class InvalidChecksum: public Error
    {
    public:
      InvalidChecksum(void):
        Error("no proper checksum found")
      { }
    };

    class InvalidReference: public Error
    {
    public:
      InvalidReference(const std::string& ref):
        Error(std::string("invalid reference: ") + ref)
      { }
    };

    class ChecksumMismatch: public Error
    {
    public:
      ChecksumMismatch(unsigned char expected, unsigned char received):
        Error(Utils::String::str("checksum mismatch: expecting %02X, got %02X", expected, received))
      { }
    };

    class ReaderError: public Error
    {
    public:
      ReaderError(const std::string& msg):
        Error(msg)
      { }
    };

    class ConversionError: public Error
    {
    public:
      ConversionError(const char* type, unsigned field):
        Error(Utils::String::str("conversion to %s failed on field %u", type, field))
      { }
    };

    class SyntaxError: public Error
    {
    public:
      SyntaxError(const std::string& file, unsigned line):
        Error(Utils::String::str("syntax error on file %s at line %u", file.c_str(), line))
      { }
    };

    class FileOpenError: public Error
    {
    public:
      FileOpenError(const std::string& file, const std::string& reason):
        Error(Utils::String::str("error opening file %s: %s", file.c_str(), reason.c_str()))
      { }
    };
  }
}

#endif
