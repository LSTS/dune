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

#ifndef DUNE_ALGORITHMS_FLETCHER_CHECKSUM_HPP_INCLUDED_
#define DUNE_ALGORITHMS_FLETCHER_CHECKSUM_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    //! 8-bit Fletcher Checksum Algorithm.
    //! Implementation of the 8-bit Fletcher Checksum Algorithm as
    //! described in RFC 1146.
    class FletcherChecksum
    {
    public:
      //! Compute the 8-bit Fletcher Checksum of a byte buffer D. The
      //! result is returned in the accumulators A and B that should
      //! be initilized to 0 before calling this method.
      //! @param buffer byte buffer.
      //! @param length byte buffer length.
      //! @param a accumulator A (sum of all bytes).
      //! @param b accumulator B (sum of partial byte sums).
      static inline void
      compute(const uint8_t* buffer, int length, uint8_t& a, uint8_t& b)
      {
        for (int i = 0; i < length; i++)
        {
          a += buffer[i];
          b += a;
        }
      }
    };
  }
}

#endif
