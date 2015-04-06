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

// ISO C++ 98 headers.
#include <cstdio>

// DUNE headers.
#include <DUNE/Network/URL.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Network
  {
    std::string
    URL::decode(const std::string& str)
    {
      std::string result;

      for (unsigned i = 0; i < str.size(); ++i)
      {
        char c = str[i];

        if (c == '%')
        {
          unsigned hex;
          if (std::sscanf(str.c_str() + i, "%%%02X", &hex) == 1)
          {
            result.push_back(hex);
            i += 2;
          }
        }
        else
        {
          result.push_back(c);
        }
      }

      return result;
    }

    std::string
    URL::encode(const std::string& str)
    {
      std::string result;

      for (unsigned i = 0; i < str.size(); ++i)
      {
        char c = str[i];

        // Safe characters.
        if ((c >= '0' && c <= '9')
            || (c >= 'a' && c <= 'z')
            || (c >= 'A' && c <= 'Z'))
        {
          result.push_back(c);
        }
        // Unsafe characters.
        else
        {
          char hex[4];
          Utils::String::format(hex, 4, "%%%02X", c);
          result.append(hex);
        }
      }

      return result;
    }
  }
}
