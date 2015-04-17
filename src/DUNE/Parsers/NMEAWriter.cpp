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

// ISO C++ 98 headers.
#include <iomanip>

// DUNE headers.
#include <DUNE/Parsers/NMEAWriter.hpp>

namespace DUNE
{
  namespace Parsers
  {
    NMEAWriter::NMEAWriter(const std::string& code)
    {
      m_stream << '$' << code;
    }

    NMEAWriter&
    NMEAWriter::operator<<(const bool& value)
    {
      m_stream << ',' << value;
      return *this;
    }

    NMEAWriter&
    NMEAWriter::operator<<(const int& value)
    {
      m_stream << ',' << value;
      return *this;
    }

    NMEAWriter&
    NMEAWriter::operator<<(const unsigned& value)
    {
      m_stream << ',' << value;
      return *this;
    }

    NMEAWriter&
    NMEAWriter::operator<<(const double& value)
    {
      m_stream << ',' << value;
      return *this;
    }

    NMEAWriter&
    NMEAWriter::operator<<(const char* value)
    {
      m_stream << ',' << value;
      return *this;
    }

    NMEAWriter&
    NMEAWriter::operator<<(const std::string& value)
    {
      m_stream << ',' << value;
      return *this;
    }

    std::string
    NMEAWriter::sentence(void)
    {
      const std::string& stn = m_stream.str();

      unsigned char csum = 0;
      for (unsigned i = 1; i < stn.size(); ++i)
        csum ^= stn[i];

      m_stream << '*'
      << std::setw(2)
      << std::setfill('0')
      << std::uppercase
      << std::hex
      << (unsigned)csum << "\r\n";

      return m_stream.str();
    }
  }
}
