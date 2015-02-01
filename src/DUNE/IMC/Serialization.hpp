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

#ifndef DUNE_IMC_SERIALIZATION_HPP_INCLUDED_
#define DUNE_IMC_SERIALIZATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <istream>
#include <vector>
#include <string>

// DUNE headers.
#include <DUNE/Utils/ByteCopy.hpp>
#include <DUNE/IMC/Exceptions.hpp>
#include <DUNE/IMC/Message.hpp>
#include <DUNE/IMC/Factory.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Retrieve the number of bytes required to serialize a variable
    //! of type 'plaintext'.
    //! @param[in] variable variable.
    //! @return number of bytes required to serialize variable.
    inline unsigned
    getSerializationSize(const std::string& variable)
    {
      return static_cast<unsigned>(variable.size()) + 2;
    }

    //! Retrieve the number of bytes required to serialize a variable
    //! of type 'rawdata'.
    //! @param[in] variable variable.
    //! @return number of bytes required to serialize variable.
    inline unsigned
    getSerializationSize(const std::vector<char>& variable)
    {
      return static_cast<unsigned>(variable.size()) + 2;
    }

    //! Serializator for scalar types.
    //! @param t scalar to serialize.
    //! @param bfr buffer where to place the serialized bytes.
    //! @return number of serialized bytes.
    template <typename Type>
    inline uint16_t
    serialize(const Type t, uint8_t* bfr)
    {
      uint16_t size = sizeof(Type);
      std::memcpy(bfr, &t, size);
      return size;
    }

    //! Serializator for floating point (double precision).
    //! @param t floating point value to serialize.
    //! @param bfr buffer where to place the serialized bytes.
    //! @return number of serialized bytes.
    inline uint16_t
    serialize(const fp64_t t, uint8_t* bfr)
    {
#if defined(DUNE_CPU_MIXED_ENDIAN_DOUBLES)
      uint8_t tmp[8];
      std::memcpy(tmp, &t, 8);

      bfr[0] = tmp[4];
      bfr[1] = tmp[5];
      bfr[2] = tmp[6];
      bfr[3] = tmp[7];
      bfr[4] = tmp[0];
      bfr[5] = tmp[1];
      bfr[6] = tmp[2];
      bfr[7] = tmp[3];
#else
      std::memcpy(bfr, &t, 8);
#endif
      return 8;
    }

    uint16_t
    serialize(const std::string& t, uint8_t* bfr);

    uint16_t
    serialize(const std::vector<char>& t, uint8_t* bfr);

    //! Deserializator for scalar types.
    //! @param t scalar where to place the unserialized bytes.
    //! @param bfr buffer where to read the serialized bytes.
    //! @param length amount of bytes available to unserialize.
    //! @return number of serialized bytes.
    //! @throw BufferTooShort
    template <typename Type>
    inline uint16_t
    deserialize(Type& t, const uint8_t* bfr, uint16_t& length)
    {
      uint16_t size = sizeof(Type);

      if (length < size)
        throw BufferTooShort();

      std::memcpy(&t, bfr, size);
      length -= size;

      return size;
    }

    //! Deserializator for string objects.
    //! @param t string object where to place the deserialized bytes.
    //! @param bfr buffer where to read the serialized bytes.
    //! @param length amount of bytes available to deserialize.
    //! @return number of deserialized bytes.
    //! @throw BufferTooShort
    uint16_t
    deserialize(std::string& t, const uint8_t* bfr, uint16_t& length);

    //! Deserializator for string objects.
    //! @param t string object where to place the deserialized bytes.
    //! @param bfr buffer where to read the serialized bytes.
    //! @param length amount of bytes available to deserialize.
    //! @return number of deserialized bytes.
    //! @throw BufferTooShort
    uint16_t
    deserialize(std::vector<char>& t, const uint8_t* bfr, uint16_t& length);

    //! Deserialize a numeric field with a different byte.
    //! @param t variable where to place the unserialized result.
    //! @param bfr buffer where to read the serialized bytes.
    //! @param length amount of bytes available to unserialize.
    //! @return number of serialized bytes.
    //! @throw BufferTooShort
    template <typename Type>
    inline uint16_t
    reverseDeserialize(Type& t, const uint8_t* bfr, uint16_t& length)
    {
      uint16_t size = sizeof(Type);

      if (length < size)
        throw BufferTooShort();

      Utils::reverseCopy(t, (char*)bfr);
      length -= size;

      return size;
    }

    uint16_t
    reverseDeserialize(std::string& t, const uint8_t* bfr, uint16_t& length);

    uint16_t
    reverseDeserialize(std::vector<char>& t, const uint8_t* bfr, uint16_t& length);
  }
}

#endif
