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

#ifndef DUNE_COMPRESSION_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_COMPRESSION_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Compression
  {
    class Error: public std::runtime_error
    {
    public:
      Error(const std::string& msg):
        std::runtime_error(msg)
      { }
    };

    class UnknownMethod: public Error
    {
    public:
      UnknownMethod(const std::string& msg):
        Error(std::string("unknown compression method: ") + msg)
      { }
    };

    class OutOfMemory: public Error
    {
    public:
      OutOfMemory(void):
        Error("not enough memory to uncompress/decompress data")
      { }
    };

    class BufferTooShort: public Error
    {
    public:
      BufferTooShort(void):
        Error(Utils::String::str("buffer is too short"))
      { }

      BufferTooShort(unsigned long length):
        Error(Utils::String::str("buffer is too short (length %lu)", length))
      { }
    };

    class CorruptedData: public Error
    {
    public:
      CorruptedData(void):
        Error("corrupted data")
      { }
    };

    //! End of data.
    class UnexpectedEOD: public Error
    {
    public:
      UnexpectedEOD(void):
        Error("unexpected end-of-data")
      { }
    };
  }
}

#endif
