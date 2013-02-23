//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <sstream>
#include <cstdio>
#include <iostream>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Parsers/Exceptions.hpp>
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

      //! Extract code.
      m_bfr = new char[m_length];
      m_stream.get(m_bfr, m_length, ',');
      if (m_stream.gcount() <= 0)
        throw InvalidCode();
      ++m_field;

      m_code = m_bfr;
    }

    NMEAReader::~NMEAReader(void)
    {
      delete [] m_bfr;
    }

    NMEAReader&
    NMEAReader::skip(void)
    {
      checkFieldStart();

      m_stream.get(m_bfr, m_length, ',');

      if (m_stream.fail())
        throw ConversionError("discard type", m_field);

      ++m_field;

      return *this;
    }

    NMEAReader&
    NMEAReader::operator>>(bool& value)
    {
      checkFieldStart();

      if (m_stream.peek() == ',')
      {
        ++m_field;
        throw ConversionError("boolean", m_field);
      }

      m_stream >> value;
      if (m_stream.fail())
        throw ConversionError("boolean", m_field);

      ++m_field;

      return *this;
    }

    NMEAReader&
    NMEAReader::operator>>(int& value)
    {
      checkFieldStart();

      if (m_stream.peek() == ',')
      {
        ++m_field;
        throw ConversionError("int", m_field);
      }

      m_stream >> value;
      if (m_stream.fail())
        throw ConversionError("integer", m_field);

      ++m_field;

      return *this;
    }

    NMEAReader&
    NMEAReader::operator>>(unsigned& value)
    {
      checkFieldStart();

      if (m_stream.peek() == ',')
      {
        ++m_field;
        throw ConversionError("unsigned", m_field);
      }

      m_stream >> value;
      if (m_stream.fail())
        throw ConversionError("unsigned", m_field);

      ++m_field;

      return *this;
    }

    NMEAReader&
    NMEAReader::operator>>(float& value)
    {
      checkFieldStart();

      if (m_stream.peek() == ',')
      {
        ++m_field;
        throw ConversionError("float", m_field);
      }

      m_stream >> value;
      if (m_stream.fail())
        throw ConversionError("float", m_field);

      ++m_field;

      return *this;
    }

    NMEAReader&
    NMEAReader::operator>>(double& value)
    {
      checkFieldStart();

      if (m_stream.peek() == ',')
      {
        ++m_field;
        throw ConversionError("double", m_field);
      }

      m_stream >> value;
      if (m_stream.fail())
        throw ConversionError("double", m_field);

      ++m_field;

      return *this;
    }

    NMEAReader&
    NMEAReader::operator>>(std::string& value)
    {
      checkFieldStart();

      if (m_stream.peek() == ',')
      {
        value = "";
      }
      else
      {
        m_bfr[0] = 0;
        m_stream.get(m_bfr, m_length, ',');
        if (m_stream.fail() && !m_stream.eof())
          throw ConversionError("string", m_field);
        value.assign(m_bfr);
      }

      ++m_field;

      return *this;
    }

    bool
    NMEAReader::eos(void)
    {
      return (m_stream.eof() || m_stream.peek() == EOF);
    }

    void
    NMEAReader::checkFieldStart(void)
    {
      int c = m_stream.get();

      if (m_stream.eof())
        throw ReaderError("trying to extract fields past the end of the sentence");

      if (c != ',')
        throw ReaderError(Utils::String::str("expecting ',' but got '%c'", c));
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
  }
}
