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
