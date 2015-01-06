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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ headers.
#include <cstdio>
#include <stdexcept>
#include <fstream>

// MD5 headers
#define MD 5
#define PROTOTYPES 1
#include "md5/global.h"
#include "md5/md5.h"

// DUNE headers.
#include <DUNE/Algorithms/MD5.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    void
    MD5::compute(const uint8_t* buffer, unsigned int length, uint8_t* digest)
    {
      MD5 md5;
      MD5_CTX context;

      MD5Init(&context);
      MD5Update(&context, (unsigned char*)buffer, length);
      MD5Final(digest, &context);
    }

    void
    MD5::compute(const char* path, uint8_t* digest)
    {
      std::ifstream ifs(path, std::ios::binary);

      if (!ifs.is_open())
        throw std::runtime_error(DTR("failed to open file"));

      MD5_CTX context;
      MD5Init(&context);

      unsigned char buffer[1024];
      while (!ifs.eof())
      {
        ifs.read((char*)buffer, sizeof(buffer));
        MD5Update(&context, buffer, ifs.gcount());
      }

      MD5Final(digest, &context);
    }

    // You cannot forward declare a type defined from an anonymous structure,
    // as is the case of MD5_CTX, hence the slightly odd construction below.
    // (harmless in principle).
    struct MD5::MD5_HANDLE
    {
      ::MD5_CTX ctx;
    };

    MD5::MD5(void):
      m_handle(new MD5_HANDLE)
    {
      reset();
    }

    MD5::~MD5(void)
    {
      delete m_handle;
    }

    void
    MD5::reset(void)
    {
      MD5Init(&m_handle->ctx);
    }

    void
    MD5::update(const uint8_t* data, int size)
    {
      MD5Update(&m_handle->ctx, (uint8_t*)data, size);
    }

    void
    MD5::finalize(uint8_t* digest)
    {
      MD5Final(digest, &m_handle->ctx);
    }
  }
}
