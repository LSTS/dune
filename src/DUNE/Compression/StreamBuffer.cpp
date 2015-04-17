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
#include <cstdio>

// DUNE headers.
#include <DUNE/Compression/StreamBuffer.hpp>
#include <DUNE/Compression/Factory.hpp>
#include <DUNE/Compression/Compressor.hpp>
#include <DUNE/Compression/Decompressor.hpp>

static const unsigned c_put_bfr_size = 128 * 1024;
static const unsigned c_get_bfr_size = 256 * 1024;

namespace DUNE
{
  namespace Compression
  {
    StreamBuffer::StreamBuffer(std::ostream* stream, Methods method):
      m_method(method),
      m_ostream(stream),
      m_istream(0),
      m_dec(0)
    {
      m_com = Factory::compressor(method);
    }

    StreamBuffer::StreamBuffer(std::istream* stream, Methods method):
      m_method(method),
      m_ostream(0),
      m_istream(stream),
      m_com(0),
      m_get_bfr_idx(0),
      m_get_bfr_rem(0)
    {
      m_dec = Factory::decompressor(method);
      m_bfr.setSize(c_get_bfr_size);
    }

    StreamBuffer::~StreamBuffer(void)
    {
      sync();

      if (m_ostream)
        delete m_com;

      if (m_istream)
        delete m_dec;
    }

    int
    StreamBuffer::sync(void)
    {
      if (m_ostream)
      {
        m_com->compress(m_com_bfr, m_bfr);
        m_ostream->write(m_com_bfr.getBufferSigned(), m_com_bfr.getSize());
        m_ostream->flush();
        m_bfr.setSize(0);
        return 1;
      }

      return 0;
    }

    StreamBuffer::int_type
    StreamBuffer::overflow(int_type c)
    {
      return c;
    }

    StreamBuffer::int_type
    StreamBuffer::underflow(void)
    {
      return EOF;
    }

    std::streamsize
    StreamBuffer::xsputn(const char* bfr, std::streamsize length)
    {
      m_bfr.appendSigned(bfr, length);

      if (m_bfr.getSize() >= c_put_bfr_size)
        sync();

      return length;
    }

    std::streamsize
    StreamBuffer::xsgetn(char* bfr, std::streamsize bfr_len)
    {
      unsigned chunk_rem = bfr_len;
      unsigned chunk_idx = 0;

      while (chunk_rem > 0)
      {
        if (m_get_bfr_rem == 0)
        {
          if (m_istream->eof())
          {
            if (chunk_idx == 0)
              return EOF;
            else
              break;
          }

          m_istream->read(m_bfr.getBufferSigned(), m_bfr.getSize());
          m_get_bfr_idx = 0;
          m_get_bfr_rem = m_istream->gcount();
        }

        m_dec->decompress(bfr + chunk_idx, chunk_rem, m_bfr.getBufferSigned() + m_get_bfr_idx, m_get_bfr_rem);
        m_get_bfr_idx += m_dec->processed();
        m_get_bfr_rem -= m_dec->processed();

        chunk_rem -= m_dec->decompressed();
        chunk_idx += m_dec->decompressed();
      }

      return chunk_idx;
    }
  }
}
