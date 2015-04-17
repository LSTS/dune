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
