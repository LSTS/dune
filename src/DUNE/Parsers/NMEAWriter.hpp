//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_PARSERS_NMEA_WRITER_HPP_INCLUDED_
#define DUNE_PARSERS_NMEA_WRITER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <sstream>
#include <iomanip>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Parsers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM NMEAWriter;

    //! NMEA Writer.
    class NMEAWriter
    {
    public:
      //! Initialize a NMEA sentence of type <b>code</b>.
      //! @param code sentence type (without the $, eg. GPGGA)
      NMEAWriter(const std::string& code);

      //! Append a boolean to the current sentence.
      //! @param value boolean to be appended.
      //! @return *this.
      NMEAWriter&
      operator<<(const bool& value);

      //! Append an integer to the current sentence.
      //! @param value integer to be appended.
      //! @return *this.
      NMEAWriter&
      operator<<(const int& value);

      //! Append an unsigned integer to the current sentence.
      //! @param value unsigned integer to be appended.
      //! @return *this.
      NMEAWriter&
      operator<<(const unsigned& value);

      //! Append a double to the current sentence.
      //! @param value double to be appended.
      //! @return *this.
      NMEAWriter&
      operator<<(const double& value);

      //! Append a string value to the current sentence.
      //! @param value string to be appended.
      //! @return *this.
      NMEAWriter&
      operator<<(const char* value);

      //! Append a string value to the current sentence.
      //! @param value string to be appended.
      //! @return *this.
      NMEAWriter&
      operator<<(const std::string& value);

      //! Retrieve NMEA compliant sentence with checksum and line
      //! termination.
      //! @return NMEA compliant sentence.
      std::string
      sentence(void);

    private:
      //! Internal string stream.
      std::ostringstream m_stream;
    };
  }
}

#endif
