//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_UTILS_STRING_HPP_INCLUDED_
#define DUNE_UTILS_STRING_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdarg>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Utils
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM String;

    class String
    {
    public:
      template <typename Iterator>
      static std::string
      join(Iterator begin, Iterator end, const std::string& separator)
      {
        // Empty container.
        if (begin == end)
          return "";

        Iterator itr = begin;
        std::string result = *itr;
        ++itr;

        for (; itr != end; ++itr)
        {
          result.append(separator).append(*itr);
        }

        return result;
      }

      //! Filter duplicates of a given character in a string.
      //! @param element element to filter.
      //! @param subject string to search for duplicates.
      //! @return filtered string.
      static std::string
      filterDuplicates(char element, const std::string& subject);

      //! Strip whitespace from the beginning of a string.
      //! @param str object string.
      //! @return string without leading whitespaces.
      static std::string
      ltrim(const std::string& str);

      //! Strip whitespace from the end of a string in place.
      //! @param[in,out] str string.
      static void
      rightTrimInPlace(char* str);

      //! Strip whitespace from the end of a string.
      //! @param str object string.
      //! @return string without trailing whitespaces.
      static std::string
      rtrim(const std::string& str);

      //! Resize string by replacing any extra characters with '\0'.
      //! If size is greater than current size, the string is untouched.
      //! If size is lower than 0, the resulting size is [strlen(str) + size].
      //! @param str object string
      //! @param size new size
      static void
      resize(char* str, int size);

      //! Strip whitespace from the beginning and end of a string.
      //! @param str object string.
      //! @return string without leading and trailing whitespaces.
      static std::string
      trim(const std::string& str);

      //! Split a string into a vector of strings.
      //! @param s string to split.
      //! @param sep separator string.
      //! @param lst vector of strings.
      static void
      split(const std::string& s, const std::string& sep, std::vector<std::string>& lst);

      //! Split a string into a vector of given type.
      //! @param s string to split.
      //! @param sep separator string.
      //! @param lst vector of Type.
      template <typename Type>
      static void
      split(const std::string& s, const std::string& sep, std::vector<Type>& lst)
      {
        size_t new_i = 0; // new index
        size_t old_i = 0; // old index
        Type d;

        if (trim(s) == "")
          return;

        while (1)
        {
          // Find next separator character
          new_i = s.find(sep, old_i);

          std::stringstream sin(trim(s.substr(old_i, new_i - old_i)));

          sin >> d;

          lst.push_back(d);

          if (new_i == std::string::npos)
            break;

          old_i = new_i + 1;
        }
      }

      template <typename Type>
      static void
      splitMulti(const std::string& s, const std::string& sep0, const std::string& sep1, std::vector<std::vector<Type> >& lst)
      {
        std::vector<std::string> chunks;
        split(s, sep0, chunks);

        if (chunks.size() == 0)
          return;

        lst.resize(chunks.size());

        for (unsigned int i = 0; i < chunks.size(); ++i)
        {
          split(chunks[i], sep1, lst[i]);
        }
      }

      static void
      toLowerCase(std::string& str);

      static void
      toUpperCase(std::string& str);

      static std::string
      toHex(const std::string& str);

      static std::string
      toHex(const std::vector<char>& str);

      static std::string
      toHex(int nr);

      static std::vector<uint8_t>
      hexToBytes(const std::string& hex);

      static std::string
      fromHex(const std::string& str);

      static void
      assign(std::vector<char>& dst, const char* src);

      static std::string
      getRemaining(const std::string& prefix, const std::string& str);

      template <typename Type>
      static std::string
      str(Type t)
      {
        std::stringstream ss;
        ss << t;
        return ss.str();
      }

      static std::string
      str(const char* fmt, ...)
      {
        std::va_list ap;
        va_start(ap, fmt);
        std::string result = strVl(fmt, ap);
        va_end(ap);
        return result;
      }

      static std::string
      strVl(const char* fmt, std::va_list ap)
      {
        char bfr[1024] = {0};
        formatVl(bfr, sizeof(bfr), fmt, ap);
        return bfr;
      }

      static int
      format(char* str, size_t size, const char* fmt, ...)
      {
        std::va_list ap;
        va_start(ap, fmt);
        int rv = formatVl(str, size, fmt, ap);
        va_end(ap);
        return rv;
      }

      static int
      formatVl(char* str, size_t size, const char* fmt, std::va_list ap)
      {
#if defined(DUNE_SYS_HAS_VSNPRINTF)
        int rv = vsnprintf(str, size, fmt, ap);
#elif defined(DUNE_SYS_HAS_VSNPRINTF_S)
        int rv = vsnprintf_s(str, size, size - 1, fmt, ap);
#else
        int rv = std::vsprintf(str, fmt, ap);
#endif
        return rv;
      }

      static void
      replaceWhiteSpace(std::string& str, char rep);

      static std::string
      replace(const std::string& str, char rep, const std::string& pat);

      //! Replace all occurrences of a substring in a string
      //! @param[in] inStr string.
      //! @param[in] searchStr substring to search for.
      //! @param[in] replaceStr substring replacement.
      //! @return resulting string with all substring occurrences replaced.
      static std::string
      replaceAll(const std::string& inStr, const std::string& searchStr, const std::string& replaceStr);

      static std::string
      escape(const std::string& input);

      static std::string
      unescape(const std::string& input, bool unescape_all = true);

      //! Test if string 'str' starts with a specified 'prefix'.
      //! @param[in] str string.
      //! @param[in] prefix prefix.
      //! @return true if 'str' starts with 'prefix', false otherwise.
      static bool
      startsWith(const std::string& str, const std::string& prefix);

      //! Test if string 'str' ends with a specified 'suffix'.
      //! @param[in] str string.
      //! @param[in] suffix suffix.
      //! @return true if 'str' ends with 'suffix', false otherwise.
      static bool
      endsWith(const std::string& str, const std::string& suffix);
    };
  }
}

#endif
