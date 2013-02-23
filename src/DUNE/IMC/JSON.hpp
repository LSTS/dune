//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
