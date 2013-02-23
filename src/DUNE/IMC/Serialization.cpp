//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Algorithms/CRC16.hpp>
#include <DUNE/IMC/Exceptions.hpp>
#include <DUNE/IMC/Serialization.hpp>
#include <DUNE/IMC/InlineMessage.hpp>

namespace DUNE
{
  namespace IMC
  {
    uint16_t
    serialize(const std::string& t, uint8_t* bfr)
    {
      const uint16_t s = t.size();
      std::memcpy(bfr, &s, sizeof(s));
      bfr += sizeof(s);
      std::memcpy(bfr, t.c_str(), s);
      return s + 2;
    }

    uint16_t
    deserialize(std::string& t, const uint8_t* bfr, uint16_t& bfr_len)
    {
      if (bfr_len < 2)
        throw BufferTooShort();

      uint16_t s = 0;
      std::memcpy(&s, bfr, 2);

      if (bfr_len < s + 2)
        throw BufferTooShort();

      t.assign((const char*)(bfr + 2), s);
      bfr_len -= s + 2;

      return s + 2;
    }

    uint16_t
    reverseDeserialize(std::string& t, const uint8_t* bfr, uint16_t& bfr_len)
    {
      if (bfr_len < 2)
        throw BufferTooShort();

      uint16_t s = 0;
      Utils::reverseCopy(s, (char*)bfr);

      if (bfr_len < s + 2)
        throw BufferTooShort();

      t.assign((const char*)(bfr + 2), s);
      bfr_len -= s + 2;

      return s + 2;
    }

    uint16_t
    serialize(const std::vector<char>& t, uint8_t* bfr)
    {
      const uint16_t s = t.size();
      std::memcpy(bfr, &s, sizeof(s));
      bfr += sizeof(s);
      if (s > 0)
        std::memcpy(bfr, &t[0], s);
      return s + 2;
    }

    uint16_t
    deserialize(std::vector<char>& t, const uint8_t* bfr, uint16_t& bfr_len)
    {
      if (bfr_len < 2)
        throw BufferTooShort();

      uint16_t s = 0;
      std::memcpy(&s, bfr, 2);

      if (bfr_len < s + 2)
        throw BufferTooShort();

      t.assign((const char*)(bfr + 2), (const char*)(bfr + 2 + s));
      bfr_len -= s + 2;

      return s + 2;
    }

    uint16_t
    reverseDeserialize(std::vector<char>& t, const uint8_t* bfr, uint16_t& bfr_len)
    {
      if (bfr_len < 2)
        throw BufferTooShort();

      uint16_t s = 0;
      Utils::reverseCopy(s, (char*)bfr);

      if (bfr_len < s + 2)
        throw BufferTooShort();

      t.assign((const char*)(bfr + 2), (const char*)(bfr + 2 + s));
      bfr_len -= s + 2;

      return s + 2;
    }
  }
}
