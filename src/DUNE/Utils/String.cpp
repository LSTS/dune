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
#include <cctype>
#include <cstring>
#include <stdexcept>

// Local headers.
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Utils
  {
    //! Blank characters.
    static const std::string BLANK_CHARACTERS = " \n\r\t";

    std::string
    String::filterDuplicates(char element, const std::string& subject)
    {
      if (subject.empty())
        return subject;

      std::string result(subject, 0, 1);

      for (unsigned int i = 1; i < subject.size(); ++i)
      {
        if (subject[i] == element)
        {
          if (subject[i] != result[result.size() - 1])
            result.append(subject, i, 1);
        }
        else
        {
          result.append(subject, i, 1);
        }
      }

      return result;
    }

    std::string
    String::ltrim(const std::string& s)
    {
      size_t first = 0;
      first = s.find_first_not_of(BLANK_CHARACTERS);

      if (first != std::string::npos)
        return s.substr(first);

      // If we get here the string only has blanks.
      return "";
    }

    void
    String::rtrim(char* str)
    {
      char* r = str + std::strlen(str) - 1; // Rightmost character

      for (; isspace(*r); --r)
        *r = 0;
    }

    std::string
    String::rtrim(const std::string& s)
    {
      size_t last = 0;

      last = s.find_last_not_of(BLANK_CHARACTERS);

      if (last != std::string::npos)
        return s.substr(0, last + 1);

      // If we get here the string only has blanks.
      return "";
    }

    std::string
    String::trim(const std::string& s)
    {
      std::string n = ltrim(s);

      return rtrim(n);
    }

    // FIXME: quick hack to preserve white spaces when converting to std::string
    void
    String::split(const std::string& s, const std::string& sep, std::vector<std::string>& lst)
    {
      size_t new_i = 0; // new index
      size_t old_i = 0; // old index
      std::string d;

      if (trim(s) == "")
        return;

      while (1)
      {
        // Find next separator character
        new_i = s.find(sep, old_i);

        std::stringstream sin(trim(s.substr(old_i, new_i - old_i)));

        d = sin.str();

        lst.push_back(d);

        if (new_i == std::string::npos)
          break;

        old_i = new_i + 1;
      }
    }

    void
    String::replaceWhiteSpace(std::string& str, char rep)
    {
      for (unsigned int i = 0; i < str.size(); ++i)
      {
        if ((str[i] == ' ') || (str[i] == '\t'))
          str[i] = rep;
      }
    }

    std::string
    String::replace(const std::string& str, char rep, const std::string& pat)
    {
      std::string rv;

      for (unsigned int i = 0; i < str.size(); ++i)
      {
        if (str[i] == rep)
          rv.append(pat);
        else
          rv.push_back(str[i]);
      }

      return rv;
    }

    void
    String::toLowerCase(std::string& str)
    {
      for (unsigned int i = 0; i < str.size(); ++i)
        str[i] = tolower(str[i]);
    }

    void
    String::toUpperCase(std::string& str)
    {
      for (unsigned int i = 0; i < str.size(); ++i)
        str[i] = toupper(str[i]);
    }

    std::string
    String::toHex(const std::string& str)
    {
      char bfr[3];
      std::string result;

      for (unsigned int i = 0; i < str.size(); ++i)
      {
        format(bfr, 3, "%02X", (uint8_t)str[i]);
        result.push_back(bfr[0]);
        result.push_back(bfr[1]);
      }

      return result;
    }

    std::string
    String::toHex(const std::vector<char>& str)
    {
      char bfr[3];
      std::string result;

      for (unsigned int i = 0; i < str.size(); ++i)
      {
        format(bfr, 3, "%02X", (uint8_t)str[i]);
        result.push_back(bfr[0]);
        result.push_back(bfr[1]);
      }

      return result;
    }

    std::string
    String::toHex(int nr)
    {
      std::stringstream ss;
      ss << std::hex << nr;

      return ss.str();
    }

    std::string
    String::fromHex(const std::string& str)
    {
      std::string result;

      //! fixme: throw exception.
      if ((str.size() % 2) != 0)
        return result;

      for (unsigned i = 0; i < str.size(); i += 2)
      {
        unsigned c;
        std::sscanf(str.c_str() + i, "%02X", &c);
        result.push_back(c);
      }

      return result;
    }

    void
    String::assign(std::vector<char>& dst, const char* src)
    {
      dst.assign(src, src + std::strlen(src));
    }

    std::string
    String::getRemaining(const std::string& prefix, const std::string& str)
    {
      std::string::size_type pre_idx = str.find(prefix, 0);

      if (pre_idx == std::string::npos)
        return str;

      std::string::size_type rem_idx = pre_idx + prefix.size();

      return str.substr(rem_idx);
    }

    std::string
    String::escape(const std::string& input)
    {
      std::string tmp;
      std::string::const_iterator src = input.begin();
      std::string::const_iterator end = input.end();

      while (src != end)
      {
        switch (*src)
        {
          case '\n':
            tmp.append("\\n");
            break;

          case '\r':
            tmp.append("\\r");
            break;

          case '\t':
            tmp.append("\\t");
            break;

          default:
            tmp.push_back(*src);
        }
        ++src;
      }

      return tmp;
    }

    std::string
    String::unescape(const std::string& input, bool unescape_all)
    {
      std::string tmp;
      std::string::const_iterator src = input.begin();
      std::string::const_iterator end = input.end();

      while (src != end)
      {
        if (*src == '\\')
        {
          if (++src == end)
            throw std::runtime_error(DTR("invalid escape sequence"));

          switch (*src)
          {
            case '\\':
              if (!unescape_all)
                tmp += '\\';
              tmp += '\\';
              break;
            case 'n':
              tmp += '\n';
              break;
            case 't':
              tmp += '\t';
              break;
            case 'r':
              tmp += '\r';
              break;
            default:
              if (!unescape_all)
              {
                tmp += '\\';
              }
              tmp += *src;
          }
          ++src;
        }
        else
          tmp += *src++;
      }

      return tmp;
    }

    bool
    String::startsWith(const std::string& str, const std::string& prefix)
    {
      if (prefix.size() > str.size())
        return false;

      for (unsigned i = 0; i < prefix.size(); ++i)
      {
        if (prefix[i] != str[i])
          return false;
      }

      return true;
    }

    bool
    String::endsWith(const std::string& str, const std::string& suffix)
    {
      if (str.size() < suffix.size())
        return false;

      return str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0;
    }
  }
}
