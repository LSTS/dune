//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef DUNE_PARSERS_NMEA_SENTENCE_HPP_INCLUDED_
#define DUNE_PARSERS_NMEA_SENTENCE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <cstdarg>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Parsers/Exceptions.hpp>
#include <DUNE/Algorithms/XORChecksum.hpp>

namespace DUNE
{
  namespace Parsers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM NMEASentence;

    //! NMEA Sentence reader is a simple NMEA parser capable of
    //! validating and converting sentence fields.
    class NMEASentence
    {
    public:
      explicit
      NMEASentence(char start_sym = '$')
      {
        m_start_sym.push_back(start_sym);
        clear();
      }

      const std::string&
      getCode() const
      {
        return m_fields[0];
      }

      void
      setCode(const std::string& code)
      {
        m_fields[0] = code;
      }

      const std::string&
      getField(size_t index) const
      {
        return m_fields[index + 1];
      }

      void
      setField(size_t index, const std::string& value)
      {
        if (index + 1 >= m_fields.size())
          m_fields.resize(index + 2);

        m_fields[index + 1] = value;
      }

      void
      setField(size_t index, const char* fmt, ...)
      {
        std::va_list ap;
        va_start(ap, fmt);
        std::string result = Utils::String::strVl(fmt, ap);
        va_end(ap);
        setField(index, result);
      }

      //! Retrieve the number of fields currently present in the sentence.
      //!
      //! @return number of fields.
      size_t
      getFieldCount() const
      {
        return m_fields.size() - 1;
      }

      std::string
      str() const
      {
        std::string data = Utils::String::join(m_fields.begin(), m_fields.end(), ",");
        return m_start_sym
        + data
        + Utils::String::str("*%02X\r\n", computeChecksum(data, 0, data.size()));
      }

      //! Clear sentence.
      void
      clear()
      {
        m_fields.clear();
        m_fields.emplace_back("");
      }

      //! Parse NMEA sentence.
      //! @param[in] text string with NMEA sentence.
      void
      parse(const std::string& text)
      {
        std::string str_trim(Utils::String::trim(text));
        if (str_trim[0] != m_start_sym[0])
          throw std::runtime_error(DTR("invalid start symbol"));

        uint8_t ccsum = computeChecksum(str_trim, 1, str_trim.size() - 4);
        uint8_t rcsum = readChecksum(str_trim);
        if (ccsum != rcsum)
          throw InvalidChecksum();

        m_fields.clear();
        Utils::String::split(str_trim.substr(1, str_trim.size() - 4), ",", m_fields);
      }

    private:
      //! Start of sentence symbol.
      std::string m_start_sym;
      //! List of fields.
      std::vector<std::string> m_fields;

      uint8_t
      computeChecksum(const std::string& text, size_t pos, size_t len) const
      {
        return Algorithms::XORChecksum::compute((const uint8_t*)&text[pos], len);
      }

      uint8_t
      readChecksum(const std::string& text) const
      {
        size_t idx = text.find_last_of('*');
        if ((idx == std::string::npos) || (text.size() - idx) != 3)
          return 0;

        uint8_t result = 0;
        unsigned shift = 4;

        for (size_t i = idx + 1; i < text.size(); ++i)
        {
          uint8_t byte = text[i];

          if (byte >= '0' && byte <= '9')
            result |= (byte - '0') << shift;
          else if (byte >= 'a' && byte <= 'f')
            result |= (byte - 'a' + 10) << shift;
          else if (byte >= 'A' && byte <= 'F')
            result |= (byte - 'A' + 10) << shift;
          else
            throw InvalidChecksum();

          shift = 0;
        }

        return result;
      }
    };
  }
}

#endif
