//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: URL.cpp 12667 2013-01-22 02:44:42Z rasm                          $:*
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
