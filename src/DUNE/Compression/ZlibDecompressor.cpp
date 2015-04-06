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

// DUNE headers.
#include <DUNE/Utils/String.hpp>
#include <DUNE/Compression/Exceptions.hpp>
#include <DUNE/Compression/ZlibDecompressor.hpp>

// Zlib headers.
#include <zlib/zlib.h>

namespace DUNE
{
  namespace Compression
  {
    struct ZlibDecompressor::PrivateData
    {
      z_stream stream;
    };

    ZlibDecompressor::ZlibDecompressor(bool gzip):
      Decompressor()
    {
      m_private = new PrivateData;
      m_wbits = gzip ? (MAX_WBITS + 32) : MAX_WBITS;
      clear();
    }

    ZlibDecompressor::~ZlibDecompressor(void)
    {
      inflateEnd(&m_private->stream);
      delete m_private;
    }

    void
    ZlibDecompressor::clear(void)
    {
      m_clear = false;

      z_stream* stream = &m_private->stream;
      stream->next_in = 0;
      stream->avail_in = 0;
      stream->next_out = 0;
      stream->avail_out = 0;
      stream->zalloc = 0;
      stream->zfree = 0;
      stream->total_out = 0;
      stream->opaque = 0;

      int err = inflateInit2(stream, m_wbits);
      if (err != Z_OK)
        throw Error("decompressor initialization failed");
    }

    unsigned long
    ZlibDecompressor::decompressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len, unsigned long& unprocessed_len)
    {
      z_stream* stream = &m_private->stream;

      if (m_clear)
      {
        inflateEnd(stream);
        clear();
      }

      stream->next_in = (Bytef*)src;
      stream->avail_in = (uInt)src_len;
      stream->next_out = (Bytef*)dst;
      stream->avail_out = (uInt)dst_len;

      int err = inflate(stream, Z_NO_FLUSH);

      if (err != Z_OK)
      {
        if (err == Z_STREAM_END)
          m_clear = true;
        else
          throw Error(Utils::String::str("decompressor error %d", err));
      }

      dst_len = dst_len - stream->avail_out;
      unprocessed_len = stream->avail_in;

      return dst_len;
    }
  }
}
