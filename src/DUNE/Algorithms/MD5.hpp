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

#ifndef DUNE_ALGORITHMS_MD5_HPP_INCLUDED_
#define DUNE_ALGORITHMS_MD5_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM MD5;

    //! MD-5 Algorithm (RFC 1321).
    class MD5
    {
    public:
      // Static utility methods

      //! Compute the MD5 hash sum of a given data buffer.
      //! @param buffer data buffer.
      //! @param len data buffer length.
      //! @param digest output MD5 digest (16 bytes long).
      static void
      compute(const uint8_t* buffer, unsigned int len, uint8_t* digest);

      //! Compute the MD5 hash sum for a file.
      //! @param path file path.
      //! @param digest output MD5 digest (16 bytes long).
      static void
      compute(const char* path, uint8_t* digest);

      // Instance methods

      //! Constructor.
      MD5(void);

      //! Destructor.
      ~MD5(void);

      //! Reset to an initial state.
      void
      reset(void);

      //! Update MD5 hash with input data.
      //! @param data data buffer
      //! @param size length of data
      void
      update(const uint8_t* data, int size);

      //! Finalize MD5 hash and obtain digest.
      //! @param digest output digest (16 bytes long)
      void
      finalize(uint8_t* digest);

    private:
      // Forward declaration.
      struct MD5_HANDLE;

      //! Private handle for MD5 calculation.
      MD5_HANDLE* m_handle;
    };
  }
}

#endif
