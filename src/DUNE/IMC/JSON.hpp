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

#ifndef DUNE_IMC_JSON_HPP_INCLUDED_
#define DUNE_IMC_JSON_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <vector>
#include <string>

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
      os << prefix << '\n' << indent << '"' << label << "\": \"" << value << '"';
    }

    //! Convert an 8 bit signed integer type to a JSON string.
    //! @param[in] os output stream.
    //! @param[in] label label.
    //! @param[in] value value.
    //! @param[in] nindent number of indentation spaces.
    //! @param[in] prefix prefix character.
    template <>
    inline void
    toJSON(std::ostream& os, const char* label, const int8_t& value, unsigned nindent, char prefix)
    {
      const char* indent = indentJSON(nindent);
      os << prefix << '\n' << indent << '"' << label << "\": \"" << (int)value << '"';
    }

    //! Convert an 8 bit unsigned integer type to a JSON string.
    //! @param[in] os output stream.
    //! @param[in] label label.
    //! @param[in] value value.
    //! @param[in] nindent number of indentation spaces.
    //! @param[in] prefix prefix character.
    template <>
    inline void
    toJSON(std::ostream& os, const char* label, const uint8_t& value, unsigned nindent, char prefix)
    {
      const char* indent = indentJSON(nindent);
      os << prefix << '\n' << indent << '"' << label << "\": \"" << (unsigned)value << '"';
    }

    //! Convert a string to a JSON string.
    //! @param[in] os output stream.
    //! @param[in] label label.
    //! @param[in] value value.
    //! @param[in] nindent number of indentation spaces.
    //! @param[in] prefix prefix character.
    template <>
    inline void
    toJSON(std::ostream& os, const char* label, const std::string& value, unsigned nindent, char prefix)
    {
      const char* indent = indentJSON(nindent);
      os << prefix << '\n' << indent << '"' << label << "\": \"" << value << '"';
    }

    //! Convert a character vector type to a JSON string.
    //! @param[in] os output stream.
    //! @param[in] label label.
    //! @param[in] value value.
    //! @param[in] nindent number of indentation spaces.
    //! @param[in] prefix prefix character.
    template <>
    inline void
    toJSON(std::ostream& os, const char* label, const std::vector<char>& value, unsigned nindent, char prefix)
    {
      const char* indent = indentJSON(nindent);
      os << prefix << '\n' << indent << '"' << label << "\": \"" << Utils::String::toHex(value) << '"';
    }
  }
}

#endif
