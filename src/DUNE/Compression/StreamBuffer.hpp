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

#ifndef DUNE_COMPRESSION_STREAM_BUFFER_HPP_INCLUDED_
#define DUNE_COMPRESSION_STREAM_BUFFER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <streambuf>
#include <ostream>
#include <istream>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Compression/Methods.hpp>
#include <DUNE/Utils/ByteBuffer.hpp>

namespace DUNE
{
  namespace Compression
  {
    // Forward declarations.
    class Compressor;
    class Decompressor;

    // Export DLL Symbol.
    class DUNE_DLL_SYM StreamBuffer;

    class StreamBuffer: public std::streambuf
    {
    public:
      StreamBuffer(std::ostream* stream, Methods method);

      StreamBuffer(std::istream* stream, Methods method);

      virtual
      ~StreamBuffer(void);

    protected:
      virtual int_type
      overflow(int_type c);

      virtual int_type
      underflow(void);

      virtual int
      sync(void);

      virtual std::streamsize
      xsputn(const char* bfr, std::streamsize bfr_len);

      virtual std::streamsize
      xsgetn(char* bfr, std::streamsize bfr_len);

      virtual std::streampos
      seekoff(std::streamoff off, std::ios_base::seekdir way,
              std::ios_base::openmode which = std::ios_base::in | std::ios_base::out)
      {
        (void)off;
        (void)way;
        (void)which;

        return -1;
      }

    private:
      //! Stream format.
      Methods m_method;
      //! Associated output stream.
      std::ostream* m_ostream;
      //! Associated input stream.
      std::istream* m_istream;
      //! Compressor.
      Compressor* m_com;
      //! Decompressor.
      Decompressor* m_dec;
      //! Internal buffer.
      Utils::ByteBuffer m_bfr;
      //! Internal compression buffer.
      Utils::ByteBuffer m_com_bfr;
      //! Read index of the internal buffer.
      unsigned m_get_bfr_idx;
      //! Remaining bytes to read in the internal buffer.
      unsigned m_get_bfr_rem;
    };
  }
}

#endif
