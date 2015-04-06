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

#ifndef DUNE_CASTS_HPP_INCLUDED_
#define DUNE_CASTS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>

// ISO C++ 98 headers.
#include <cstdlib>
#include <climits>
#include <cerrno>
#include <string>
#include <sstream>
#include <vector>

namespace DUNE
{
  //! Character used to split the elements of a list.
  static const char* c_string_list_separator = ",";

  //! Convert a type to another type somewhat circumventing type
  //! checking. This is useful to cast void* to function pointers
  //! (since C++ does not allow this type of casts). This function
  //! should be used sparingly.
  //! @param f variable to cast.
  //! @return cast variable.
  template <typename To, typename From>
  static To
  castUnsafe(From f)
  {
    union
    {
      From f;
      To t;
    } u;

    u.f = f;
    return u.t;
  }

  //! Convert a string to a long signed integer, checking limits in
  //! the process.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false otherwise.
  template <typename T, long vmin, long vmax>
  inline bool
  castLongSigned(const std::string& str, T& var)
  {
    char* endptr = 0;
    const char* cstr = str.c_str();

    errno = 0;
    long tmp = std::strtol(cstr, &endptr, 0);

    // std::strtol() reported error.
    if ((errno == ERANGE && (tmp == LONG_MAX || tmp == LONG_MIN)) || (errno != 0 && tmp == 0))
      return false;

    // No digits were found.
    if (endptr == cstr)
      return false;

    if ((tmp > vmax) || (tmp < vmin))
      return false;

    var = static_cast<T>(tmp);
    return true;
  }

  //! Convert a string to a long unsigned integer, checking top limit.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false otherwise.
  template <typename T, unsigned long vmax>
  inline bool
  castLongUnsigned(const std::string& str, T& var)
  {
    char* endptr = 0;
    const char* cstr = str.c_str();

    errno = 0;
    unsigned long tmp = std::strtoul(cstr, &endptr, 0);

    // std::strtoul() reported error.
    if ((errno == ERANGE && (tmp == ULONG_MAX)) || (errno != 0 && tmp == 0))
      return false;

    // No digits were found.
    if (endptr == cstr)
      return false;

    if (tmp > vmax)
      return false;

    var = static_cast<T>(tmp);
    return true;
  }

  //! Convert a string to a value of a generic type.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false otherwise.
  template <typename T>
  inline bool
  castLexical(const std::string& str, T& var)
  {
    std::istringstream ss(str);

    ss >> var;

    return !ss.fail();
  }

  //! Convert a string to a value of a generic type without reporting
  //! conversion errors.
  //! @param str string to convert.
  //! @return converted value.
  template <typename T>
  inline T
  castLexical(const std::string& str)
  {
    T var = T();
    castLexical(str, var);
    return var;
  }

  //! Convert a string to a 8 bit signed integer.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false otherwise.
  template <>
  inline bool
  castLexical(const std::string& str, int8_t& var)
  {
    return castLongSigned<int8_t, -128, 127>(str, var);
  }

  //! Convert a string to a 8 bit unsigned integer.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false otherwise.
  template <>
  inline bool
  castLexical(const std::string& str, uint8_t& var)
  {
    return castLongUnsigned<uint8_t, 255>(str, var);
  }

  //! Convert a string to a 16 bit signed integer.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false otherwise.
  template <>
  inline bool
  castLexical(const std::string& str, int16_t& var)
  {
    return castLongSigned<int16_t, -32768, 32767>(str, var);
  }

  //! Convert a string to a 16 bit unsigned integer.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false otherwise.
  template <>
  inline bool
  castLexical(const std::string& str, uint16_t& var)
  {
    return castLongUnsigned<uint16_t, 65535>(str, var);
  }

  //! Convert a string to a 32 bit signed integer.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false otherwise.
  template <>
  inline bool
  castLexical(const std::string& str, int32_t& var)
  {
    return castLongSigned<int32_t, -2147483647 - 1, 2147483647>(str, var);
  }

  //! Convert a string to a 32 bit unsigned integer.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false otherwise.
  template <>
  inline bool
  castLexical(const std::string& str, uint32_t& var)
  {
    return castLongUnsigned<uint32_t, 4294967295U>(str, var);
  }

  //! Convert a string to another string. This function circumvents
  //! the problem of extract strings with spaces from stringstreams
  //! (used by the general template).
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return always true.
  template <>
  inline bool
  castLexical(const std::string& str, std::string& var)
  {
    var = str;
    return true;
  }

  //! Convert a string to a boolean.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false otherwise.
  template <>
  inline bool
  castLexical(const std::string& str, bool& var)
  {
    if (str == "true" || str == "True" || str == "1")
    {
      var = true;
      return true;
    }

    if (str == "false" || str == "False" || str == "0")
    {
      var = false;
      return true;
    }

    return false;
  }

  //! Convert a string of elements separated by
  //! c_string_list_separator to a vector of strings. The destination
  //! vector is cleared before conversion.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false otherwise.
  template <>
  inline bool
  castLexical(const std::string& str, std::vector<std::string>& var)
  {
    var.clear();
    Utils::String::split(str, c_string_list_separator, var);
    return true;
  }

  //! Convert a string of elements separated by
  //! c_string_list_separator to a vector with elements of generic
  //! type. The destination vector is cleared before conversion.
  //! @param str string to convert.
  //! @param var variable to hold the result.
  //! @return true if the conversion is successful, false if any
  //! errors have occurred.
  template <typename T>
  inline bool
  castLexical(const std::string& str, std::vector<T>& var)
  {
    var.clear();
    std::vector<std::string> vec;
    Utils::String::split(str, c_string_list_separator, vec);
    bool no_errors = true;
    for (std::vector<std::string>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
    {
      T elm;
      if (castLexical(*itr, elm))
        var.push_back(elm);
      else
        no_errors = false;
    }

    return no_errors;
  }

  template <typename T>
  inline std::string
  uncastLexical(T& var)
  {
    std::ostringstream os;
    os << var;
    return os.str();
  }

  inline std::string
  uncastLexical(int8_t var)
  {
    std::ostringstream os;
    os << (int)var;
    return os.str();
  }

  inline std::string
  uncastLexical(uint8_t var)
  {
    std::ostringstream os;
    os << (unsigned)var;
    return os.str();
  }

  template <>
  inline std::string
  uncastLexical(std::vector<std::string>& var)
  {
    std::ostringstream os;

    if (!var.empty())
    {
      os << var[0];

      for (unsigned i = 0; i < var.size(); ++i)
        os << ", " << var[i];
    }

    return os.str();
  }
}

#endif
