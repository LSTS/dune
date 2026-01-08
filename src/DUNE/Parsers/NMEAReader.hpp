//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef DUNE_PARSERS_NMEA_READER_HPP_INCLUDED_
#define DUNE_PARSERS_NMEA_READER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <sstream>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Optional.hpp>
#include <DUNE/Parsers/Exceptions.hpp>

namespace DUNE
{
  namespace Parsers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM NMEAReader;

    //! NMEA Sentence reader is a simple NMEA parser capable of
    //! validating and converting sentence fields.
    class NMEAReader
    {
    public:
      //! Construct a NMEA Reader object. The code of the sentence
      //! (ie. first field of the sentence, next to the dollar sign)
      //! will be extracted and accessible through the code() member
      //! function. If the sentence contains a checksum it will be
      //! validated.
      //! @param sentence string with NMEA sentence.
      NMEAReader(const std::string& sentence);

      //! Retrieve sentence code.
      //! @return sentence code.
      const char*
      code(void) const
      {
        return m_code.c_str();
      }

      //! Skip the next field in the input stream.
      void
      skip(void);

      //! Read the next field in the input stream verbatim into a <T>.
      //! @param value output variable.
      //! @return current object.
      //! @throw EmptyField, if the current field is empty.
      //! @throw ConversionError, if failed to convert current field into a <T>.
      template <typename T>
      NMEAReader&
      operator>>(T& value)
      {
        fieldStart();

        if (eos())
          throw ReaderError("trying to extract fields past the end of the sentence");

        if (m_stream.peek() == ',' || m_stream.eof())
          throw EmptyField(m_field);

        m_stream >> value;
        if (m_stream.fail())
          throw ConversionError(m_field);

        ++m_field;
        return *this;
      }

      //! Read the next field in the input stream verbatim into a <T>, but field may be empty.
      //! @param value optional output variable.
      //! @return current object.
      //! @throw ConversionError, if failed to convert current field into a <T>.
      template <typename T>
      NMEAReader&
      operator>>(Optional::optional<T>& value)
      {
        fieldStart();

        if (eos())
          throw ReaderError("trying to extract fields past the end of the sentence");

        if (m_stream.peek() != ',' && !m_stream.eof())
        {
          T tmp{};
          m_stream >> tmp;
          if (m_stream.fail())
            throw ConversionError(m_field);

          value = tmp;
        }
        else
          value.reset();

        ++m_field;
        return *this;
      }

      //! Read the next field in the input stream verbatim into a string.
      //! @param value output variable.
      //! @return current object.
      //! @throw EmptyField, if the current field is empty.
      //! @throw ConversionError, if failed to convert current field into a string.
      NMEAReader&
      operator>>(std::string& value);

      //! Read the next field in the input stream verbatim into a string, but field may be empty.
      //! @param value optional output variable.
      //! @return current object.
      //! @throw ConversionError, if failed to convert current field into a string.
      NMEAReader&
      operator>>(Optional::optional<std::string>& value);

      //! Check if we reached the end of sentence and there are no
      //! more fields to extract.
      //! @return true of there are no more fields to extract, false
      //! otherwise.
      bool
      eos(void);

      const char*
      print(void);

    private:
      //! Input stream.
      std::istringstream m_stream;
      //! Sentence code.
      std::string m_code;
      //! Sentence length in bytes.
      unsigned m_length;
      //! Total field number.
      unsigned m_total;
      //! Current field number.
      unsigned m_field;

      //! Move to the start of the next field.
      void
      fieldStart(void);

      //! Parse NMEA checksum.
      //! @param checksum in ASCII format.
      //! @return checksum in unsigned char format.
      unsigned char
      parseChecksum(const char* str);
    };
  }
}

#endif
