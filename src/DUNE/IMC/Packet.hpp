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
