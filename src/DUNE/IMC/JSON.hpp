//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef DUNE_IMC_JSON_HPP_INCLUDED_
#define DUNE_IMC_JSON_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <vector>
#include <string>
#include <iterator>
#include <type_traits>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Return a string with a given number of white spaces.
    //! @param[in] count number of white spaces.
    //! @return string with 'count' white spaces.
    const char*
    indentJSON(unsigned count);

    template <typename T>
    inline void
    toJSON_impl(std::ostream& os, const T& value)
    {
      os << '"' << value << '"';
    }

    //! Convert an 8 bit signed integer type to a JSON string.
    //! @param[in] os output stream.
    //! @param[in] label label.
    //! @param[in] value value.
    //! @param[in] nindent number of indentation spaces.
    //! @param[in] prefix prefix character.
    template <>
    inline void
    toJSON_impl(std::ostream& os, const int8_t& value)
    {
      os << '"' << (int)value << '"';
    }

    //! Convert an 8 bit unsigned integer type to a JSON string.
    //! @param[in] os output stream.
    //! @param[in] label label.
    //! @param[in] value value.
    //! @param[in] nindent number of indentation spaces.
    //! @param[in] prefix prefix character.
    template <>
    inline void
    toJSON_impl(std::ostream& os, const uint8_t& value)
    {
      os << '"' << (unsigned)value << '"';
    }

    //! Convert a string to a JSON string.
    //! @param[in] os output stream.
    //! @param[in] label label.
    //! @param[in] value value.
    //! @param[in] nindent number of indentation spaces.
    //! @param[in] prefix prefix character.
    template <>
    inline void
    toJSON_impl(std::ostream& os, const std::string& value)
    {
      std::string val = DUNE::Utils::String::replace(value, '"', "\\\"");
      val = Utils::String::escape(val);
      os << '"' << val << '"';
    }

    //! Convert a vector of numbers to a JSON string.
    //! @param[in] os output stream.
    //! @param[in] label label.
    //! @param[in] value value.
    //! @param[in] nindent number of indentation spaces.
    //! @param[in] prefix prefix character.
    template <typename Type, typename = typename std::enable_if<std::is_arithmetic<Type>::value, Type>::type>
    inline void
    toJSON_impl(std::ostream& os, const std::vector<Type>& value)
    {
      os << '[';
      if(!value.empty()) {
        std::copy(value.begin(), value.end()-1, std::ostream_iterator<Type>(os, ", "));
        os << value.back();  // Avoid trailing comma
      }
      os << ']';
    }

    //! Specialization for vector<uint8_t>
    template <>
    inline void
    toJSON_impl(std::ostream& os, const std::vector<uint8_t>& value)
    {
      os << '[';
      if(!value.empty()) {
        std::copy(value.begin(), value.end()-1, std::ostream_iterator<unsigned>(os, ", "));
        os << static_cast<unsigned>(value.back());  // Avoid trailing comma
      }
      os << ']';
    }

    //! Specialization for vector<int8_t>
    template <>
    inline void
    toJSON_impl(std::ostream& os, const std::vector<int8_t>& value)
    {
      os << '[';
      if(!value.empty()) {
        std::copy(value.begin(), value.end()-1, std::ostream_iterator<int>(os, ", "));
        os << static_cast<int>(value.back());  // Avoid trailing comma
      }
      os << ']';
    }

    //! Convert a character vector type to a JSON string.
    //! @param[in] os output stream.
    //! @param[in] label label.
    //! @param[in] value value.
    //! @param[in] nindent number of indentation spaces.
    //! @param[in] prefix prefix character.
    template <>
    inline void
    toJSON_impl(std::ostream& os, const std::vector<char>& value)
    {
      os << '"' << Utils::String::toHex(value) << '"';
    }

    //! Convert a generic type to a JSON string.
    //! @param[in] os output stream.
    //! @param[in] label label.
    //! @param[in] value value.
    //! @param[in] nindent number of indentation spaces.
    //! @param[in] prefix prefix character.
    template <typename Type>
    inline void
    toJSON(std::ostream& os, const char* label, const Type& value, unsigned nindent, char prefix = ',')
    {
      const char* indent = indentJSON(nindent);
      os << prefix << '\n' << indent << '"' << label << "\": ";
      toJSON_impl(os, value);
    }
  }
}

#endif
