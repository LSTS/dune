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

// ISO C++ 98 headers.
#include <string>
#include <sstream>
#include <cstdio>
#include <iostream>
#include <algorithm>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Parsers/NMEAReader.hpp>

//! Characters to ignore in the beginning and end of a string.
static const char* c_blanks = " \t\r\n";

namespace DUNE
{
  namespace Parsers
  {
    NMEAReader::NMEAReader(const std::string& sentence):
      m_field(0)
    {
      // Clean sentence beginning.
      size_t lead_idx = sentence.find_first_not_of(c_blanks);
      if (lead_idx == std::string::npos)
        throw InvalidSentence("blank sentence");

      if (sentence[lead_idx] != '$')
        throw InvalidSentence("missing dollar sign", sentence.c_str());

      // Clean sentence end.
      size_t trail_idx = sentence.find_last_not_of(c_blanks);

      // The calculation of length is off by one, but since we are
      // getting rid of the dollar sign it's correct.
      m_length = trail_idx - lead_idx;
      ++lead_idx;

      // Create proper string.
      std::string proper = sentence.substr(lead_idx, m_length);

      // Check if the sentence contains a checksum.
      size_t csum_idx = proper.find_last_of('*');
      if (csum_idx == m_length - 3)
      {
        // Extract checksum.
        uint8_t rcsum = parseChecksum(proper.c_str() + csum_idx + 1);

        // Get rid of checksum.
        m_length -= 3;
        proper.resize(m_length);

        // Compute checksum and count fields.
        uint8_t ccsum = 0;
        for (unsigned i = 0; i < m_length; ++i)
          ccsum ^= proper[i];

        //! Validate checksum.
        if (ccsum != rcsum)
        {
          throw ChecksumMismatch(ccsum, rcsum);
        }
      }
      else
      {
        if (csum_idx != std::string::npos)
          throw InvalidChecksum();
      }

      //! Initialize input string stream.
      m_stream.str(proper);
      m_total = std::count(proper.begin(), proper.end(), ',');

      //! Extract code.
      (*this) >> m_code;
    }

    void
    NMEAReader::skip(void)
    {
      Optional::optional<int> dummy;
      (*this) >> dummy;
    }

    NMEAReader&
    NMEAReader::operator>>(std::string& value)
    {
      fieldStart();

      if (eos())
        throw ReaderError("trying to extract fields past the end of the sentence");

      value.clear();
      while (m_stream.peek() != ',' && !m_stream.eof())
      {
        char c;
        m_stream.get(c);
        value.push_back(c);
      }

      if (value.empty())
      {
        if (m_field == 0)
          throw InvalidCode();
        else
          throw EmptyField(m_field);
      }

      if (m_stream.fail())
        throw ConversionError(m_field);

      ++m_field;
      return *this;
    }

    NMEAReader&
    NMEAReader::operator>>(Optional::optional<std::string>& value)
    {
      fieldStart();

      if (eos())
        throw ReaderError("trying to extract fields past the end of the sentence");
      
      std::string tmp;
      while (m_stream.peek() != ',' && !m_stream.eof())
      {
        char c;
        m_stream.get(c);
        tmp.push_back(c);
      }

      if (m_stream.fail())
        throw ConversionError(m_field);

      if (tmp.empty())
        value.reset();
      else
        value = tmp;

      ++m_field;
      return *this;
    }

    bool
    NMEAReader::eos(void)
    {
      return (m_stream.eof() || m_field > m_total);
    }

    void
    NMEAReader::fieldStart(void)
    {
      if (m_field == 0)
        return;

      int c = m_stream.get();
      while (c != ',')
      {
        if (eos())
          throw ReaderError("trying to extract fields past the end of the sentence");

        c = m_stream.get();
      }
    }

    unsigned char
    NMEAReader::parseChecksum(const char* str)
    {
      unsigned char result = 0;
      unsigned shift = 4;

      for (unsigned i = 0; i < 2; ++i)
      {
        unsigned char byte = str[i];

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

    const char*
    NMEAReader::print(void)
    {
      return DUNE::Utils::String::str("%s | %s | %u | %u", m_stream.str().c_str(), m_code.c_str(), m_length, m_field).c_str();
    }
  }
}
