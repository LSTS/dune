//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
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
