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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Algorithms/Base64.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    //! Base64 alphabet.
    static const std::string c_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"  \
    "abcdefghijklmnopqrstuvwxyz"                                        \
    "0123456789"                                                        \
    "+/";

    std::string
    Base64::encode(const std::string& str)
    {
      size_t output_size = (str.size() + 2 - ((str.size() + 2) % 3)) / 3 * 4;
      std::string output(output_size, '=');

      const uint8_t* s = (uint8_t*)&str[0];
      size_t ri = 0;
      for (size_t i = 0; i < str.size() / 3; ++i)
      {
        output[ri++] = c_alphabet[s[0] >> 2];
        output[ri++] = c_alphabet[((s[0] << 4) | (s[1] >> 4)) & 0x3f];
        output[ri++] = c_alphabet[((s[1] << 2) | (s[2] >> 6)) & 0x3f];
        output[ri++] = c_alphabet[s[2] & 0x3f];
        s += 3;
      }

      size_t remaining = str.size() % 3;
      if (remaining == 1)
      {
        output[ri++] = c_alphabet[s[0] >> 2];
        output[ri++] = c_alphabet[(s[0] << 4) & 0x3f];
      }
      else if (remaining == 2)
      {
        output[ri++] = c_alphabet[s[0] >> 2];
        output[ri++] = c_alphabet[((s[0] << 4) | (s[1] >> 4)) & 0x3f];
        output[ri++] = c_alphabet[(s[1] << 2) & 0x3f];
      }

      return output;
    }
  }
}
