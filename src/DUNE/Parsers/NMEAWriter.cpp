//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: NMEAWriter.cpp 12667 2013-01-22 02:44:42Z rasm                   $:*
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
