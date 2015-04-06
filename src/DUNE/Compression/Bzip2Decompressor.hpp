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

#ifndef DUNE_COMPRESSION_BZIP2_DECOMPRESSOR_HPP_INCLUDED_
#define DUNE_COMPRESSION_BZIP2_DECOMPRESSOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Compression/Decompressor.hpp>

namespace DUNE
{
  namespace Compression
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Bzip2Decompressor;

    class Bzip2Decompressor: public Decompressor
    {
    public:
      Bzip2Decompressor(void);

      ~Bzip2Decompressor(void);

    protected:
      virtual unsigned long
      decompressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len, unsigned long& unprocessed_len);

    private:
      // Forward declaration of private data.
      struct PrivateData;
      //! Private data, used to store bzip2 specific structures.
      PrivateData* m_private;
      //! True if the compressor's state must be cleared.
      bool m_clear;

      void
      clear(void);
    };
  }
}

#endif
