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

#ifndef DUNE_COMPRESSION_FILE_INPUT_HPP_INCLUDED_
#define DUNE_COMPRESSION_FILE_INPUT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <istream>
#include <fstream>

// DUNE headers.
#include <DUNE/Compression/StreamBuffer.hpp>
#include <DUNE/Compression/Methods.hpp>

namespace DUNE
{
  namespace Compression
  {
    class FileInput: public std::istream
    {
    public:
      FileInput(const char* filename, Methods method):
        std::istream(0),
        m_method(method),
        m_stream(filename, std::ios::binary | std::ios::in),
        m_buffer(0)
      {
        attach(m_stream);
      }

      ~FileInput(void)
      {
        delete m_buffer;
      }

      void
      attach(std::istream& stream)
      {
        if (m_buffer)
          delete m_buffer;

        m_buffer = new StreamBuffer(&stream, m_method);
        rdbuf(m_buffer);
      }

    protected:
      Methods m_method;
      std::ifstream m_stream;
      StreamBuffer* m_buffer;
    };
  }
}

#endif
