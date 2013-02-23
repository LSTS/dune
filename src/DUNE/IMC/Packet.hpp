//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_IMC_PACKET_HPP_INCLUDED_
#define DUNE_IMC_PACKET_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>
#include <ostream>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/ByteBuffer.hpp>
#include <DUNE/IMC/Constants.hpp>
#include <DUNE/IMC/Header.hpp>

namespace DUNE
{
  namespace IMC
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Packet;

    // Forward declarations.
    class Message;

    class Packet
    {
    public:
      //! Serialize a message object.
      //! @param[in] msg message object.
      //! @param[out] bfr destination buffer.
      //! @param[in] size destination buffer size.
      //! @return number of bytes written to the destination buffer.
      static uint16_t
      serialize(const Message* msg, uint8_t* bfr, uint16_t size);

      //! Serialize a message object.
      //! @param[in] msg message object.
      //! @param[out] bfr destination buffer.
      //! @return number of bytes written to the destination buffer.
      static uint16_t
      serialize(const Message* msg, Utils::ByteBuffer& bfr);

      //! Serialize a message object.
      //! @param[in] msg message object.
      //! @param[out] ofs destination output stream.
      //! @return number of bytes written to the destination output
      //! stream.
      static uint16_t
      serialize(const Message* msg, std::ostream& ofs);

      static Message*
      deserialize(const uint8_t* bfr, uint16_t bfr_len, Message* msg = NULL);

      static Message*
      deserialize(std::istream& ifs);

      static Message*
      deserialize(std::istream& ifs, Utils::ByteBuffer& bfr);

      static uint16_t
      serializeHeader(const Message* msg, uint8_t* bfr, uint16_t bfr_len);

      static void
      deserializeHeader(Header& hdr, const uint8_t* bfr, uint16_t bfr_len);

      static Message*
      deserializePayload(const Header& hdr, const uint8_t* bfr, uint16_t bfr_len, Message* msg);
    };
  }
}

#endif
