//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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

      //! Destructor.
      ~NMEAReader(void);

      //! Retrieve sentence code.
      //! @return sentence code.
      const char*
      code(void) const
      {
        return m_code.c_str();
      }

      //! Skip the next field in the input stream.
      //! @return current object.
      NMEAReader&
      skip(void);

      //! Convert the next field in the input stream to boolean.
      //! @param value output variable.
      //! @return current object.
      NMEAReader&
      operator>>(bool& value);

      //! Convert the next field in the input stream to integer.
      //! @param value output variable.
      //! @return current object.
      NMEAReader&
      operator>>(int& value);

      //! Convert the next field in the input stream to unsigned
      //! integer.
      //! @param value output variable.
      //! @return current object.
      NMEAReader&
      operator>>(unsigned& value);

      //! Convert the next field in the input stream to float.
      //! @param value output variable.
      //! @return current object.
      NMEAReader&
      operator>>(float& value);

      //! Convert the next field in the input stream to double.
      //! @param value output variable.
      //! @return current object.
      NMEAReader&
      operator>>(double& value);

      //! Read the next field in the input stream verbatim.
      //! @param value output variable.
      //! @return current object.
      NMEAReader&
      operator>>(std::string& value);

      //! Check if we reached the end of sentence and there are no
      //! more fields to extract.
      //! @return true of there are no more fields to extract, false
      //! otherwise.
      bool
      eos(void);

    private:
      //! Input stream.
      std::istringstream m_stream;
      //! Sentence code.
      std::string m_code;
      //! Sentence length in bytes.
      unsigned m_length;
      //! Current field number.
      unsigned m_field;
      //! Internal buffer.
      char* m_bfr;

      //! Check if we can convert the next field.
      void
      checkFieldStart(void);

      //! Parse NMEA checksum.
      //! @param checksum in ASCII format.
      //! @return checksum in unsigned char format.
      unsigned char
      parseChecksum(const char* str);
    };
  }
}

#endif
