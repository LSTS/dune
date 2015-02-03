//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Mauro Brandão                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/Algorithms/Base64.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    //! Base64 mapping table.
    static const std::string c_b64_en = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                        "abcdefghijklmnopqrstuvwxyz"
                                        "0123456789+/";

    //! Base64 decoding table.
    static const unsigned char c_b64_de[] =
    {
      66,66,66,66,66,66,66,66,66,64,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
      66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,62,66,66,66,63,52,53,
      54,55,56,57,58,59,60,61,66,66,66,65,66,66,66, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
      10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,66,66,66,66,66,66,26,27,28,
      29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,66,66,
      66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
      66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
      66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
      66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
      66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
      66,66,66,66,66,66
    };

    //! Encode a sequence of bytes in Base64.
    std::string
    Base64::encode(const unsigned char* bytes, size_t len)
    {
      std::string msg;
      int i = 0, j = 0;
      unsigned char triple[3], quad[4];

      for(unsigned int k = 0; k < len; k++)
      {
        triple[i++] = *(bytes++);
        if (i == 3)
        {
          quad[0] = (triple[0] & 0xfc) >> 2;
          quad[1] = ((triple[0] & 0x03) << 4) + ((triple[1] & 0xf0) >> 4);
          quad[2] = ((triple[1] & 0x0f) << 2) + ((triple[2] & 0xc0) >> 6);
          quad[3] = triple[2] & 0x3f;

          for(i = 0; (i < 4) ; i++)
            msg += c_b64_en[quad[i]];
          i = 0;
        }
      }

      if (i)
      {
        for(j = i; j < 3; j++)
          triple[j] = '\0';

        quad[0] = (triple[0] & 0xfc) >> 2;
        quad[1] = ((triple[0] & 0x03) << 4) + ((triple[1] & 0xf0) >> 4);
        quad[2] = ((triple[1] & 0x0f) << 2) + ((triple[2] & 0xc0) >> 6);
        quad[3] = triple[2] & 0x3f;

        for (j = 0; (j < i + 1); j++)
          msg += c_b64_en[quad[j]];

        while((i++ < 3))
          msg += '=';
      }

      return msg;
    }

    //! Decode a sequence of bytes in Base64.
    std::string
    Base64::decode(const unsigned char* bytes, size_t len)
    {
      if (len % 4 != 0) return NULL;

      size_t msg_len = 0;
      msg_len = len / 4 * 3;

      if (bytes[len - 1] == '=')
        (msg_len)--;
      if (bytes[len - 2] == '=')
        (msg_len)--;

      std::string msg(bytes, bytes + msg_len);

      for (unsigned int i = 0, j = 0; i < len;)
      {
        uint32_t sextet_a = bytes[i] == '=' ? 0 & i++ : c_b64_de[bytes[i++]];
        uint32_t sextet_b = bytes[i] == '=' ? 0 & i++ : c_b64_de[bytes[i++]];
        uint32_t sextet_c = bytes[i] == '=' ? 0 & i++ : c_b64_de[bytes[i++]];
        uint32_t sextet_d = bytes[i] == '=' ? 0 & i++ : c_b64_de[bytes[i++]];

        uint32_t triple = (sextet_a << 3 * 6) + (sextet_b << 2 * 6)
        + (sextet_c << 1 * 6) + (sextet_d << 0 * 6);

        if (j < msg_len) msg[j++] = (triple >> 2 * 8) & 0xFF;
        if (j < msg_len) msg[j++] = (triple >> 1 * 8) & 0xFF;
        if (j < msg_len) msg[j++] = (triple >> 0 * 8) & 0xFF;
      }

      return msg;
    }
  }
}
