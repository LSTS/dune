//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_IMC_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_IMC_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Invalid synchronization number exception.
    class InvalidSync: public std::runtime_error
    {
    public:
      InvalidSync(uint16_t sync):
        std::runtime_error("invalid synchronization number: " + Utils::String::toHex(sync))
      { }
    };

    //! Invalid message identification number exception.
    class InvalidMessageId: public std::runtime_error
    {
    public:
      InvalidMessageId(uint32_t id):
        std::runtime_error("invalid message identification number: " + DUNE::Utils::String::str(id))
      { }
    };

    //! Invalid message abbreviation exception.
    class InvalidMessageAbbrev: public std::runtime_error
    {
    public:
      InvalidMessageAbbrev(const std::string& abbrev):
        std::runtime_error("invalid message abbreviation: " + abbrev)
      { }
    };

    //! Unsupported message format.
    class UnsupportedFormat: public std::runtime_error
    {
    public:
      UnsupportedFormat(void):
        std::runtime_error("unsupported message format")
      { }
    };

    class UnknownStandard: public std::runtime_error
    {
    public:
      UnknownStandard(void):
        std::runtime_error("unknown message standard")
      { }
    };

    //! Invalid CRC exception.
    class InvalidCrc: public std::runtime_error
    {
    public:
      InvalidCrc(void):
        std::runtime_error("invalid CRC")
      { }
    };

    //! Buffer too short to be unpacked exception.
    class BufferTooShort: public std::runtime_error
    {
    public:
      BufferTooShort(void):
        std::runtime_error("buffer is too short to be unpacked")
      { }
    };

    //! Internal buffer is too short exception.
    class InternalBufferTooShort: public std::runtime_error
    {
    public:
      InternalBufferTooShort(void):
        std::runtime_error("internal buffer is too short to hold the message")
      { }
    };

    //! Invalid format.
    class InvalidFormat: public std::runtime_error
    {
    public:
      InvalidFormat(void):
        std::runtime_error("invalid format")
      { }
    };

    class InvalidMessageSize: public std::runtime_error
    {
    public:
      InvalidMessageSize(unsigned size):
        std::runtime_error(Utils::String::str(DTR("invalid message size %u"), size))
      { }
    };
  }
}

#endif
