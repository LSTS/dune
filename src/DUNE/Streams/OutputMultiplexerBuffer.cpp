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
#include <streambuf>
#include <ostream>
#include <cstdlib>
#include <cerrno>
#include <cstring>
#include <iostream>

// DUNE headers.
#include <DUNE/Streams/OutputMultiplexerBuffer.hpp>

namespace DUNE
{
  namespace Streams
  {
    OutputMultiplexerBuffer::OutputMultiplexerBuffer(void)
    { }

    OutputMultiplexerBuffer::OutputMultiplexerBuffer(std::ostream* stream)
    {
      m_streams.push_back(stream);
    }

    OutputMultiplexerBuffer::~OutputMultiplexerBuffer(void)
    {
      sync();
    }

    void
    OutputMultiplexerBuffer::add(std::ostream* stream)
    {
      m_streams.push_back(stream);
    }

    int
    OutputMultiplexerBuffer::sync(void)
    {
      for (unsigned int i = 0; i < m_streams.size(); ++i)
      {
        m_streams[i]->flush();
      }

      return 1;
    }

    OutputMultiplexerBuffer::int_type
    OutputMultiplexerBuffer::overflow(int_type c)
    {
      for (unsigned int i = 0; i < m_streams.size(); ++i)
      {
        m_streams[i]->put(c);
      }

      return c;
    }

    std::streamsize
    OutputMultiplexerBuffer::xsputn(const char* bfr, std::streamsize length)
    {
      for (unsigned int i = 0; i < m_streams.size(); ++i)
      {
        m_streams[i]->write(bfr, length);
      }

      return length;
    }
  }
}
