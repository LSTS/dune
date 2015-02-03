//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Mauro Brandão                                                    *
//***************************************************************************

#ifndef DUNE_ALGORITHMS_BASE64_HPP_INCLUDED_
#define DUNE_ALGORITHMS_BASE64_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstddef>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Base64;

    //! Base64 encoding and decoding as defined by RFC 2045.
    class Base64
    {
    public:
      //! Encode a sequence of bytes in Base64.
      //! @param[in] str source string.
      //! @return Base64 encoded string.
      static std::string
      encode(const std::string& str)
      {
        return encode(reinterpret_cast<const unsigned char*>(str.c_str()), str.size());
      }

      //! Encode a sequence of bytes in Base64.
      //! @param[in] str source string.
      //! @param[in] len length of the string.
      //! @return Base64 encoded string.
      static std::string
      encode(const char* str, size_t len)
      {
        return encode(reinterpret_cast<const unsigned char*>(str), len);
      }

      //! Encode a sequence of bytes in Base64.
      //! @param[in] bytes unsigned char.
      //! @param[in] len length of the string.
      //! @return Base64 encoded string.
      static std::string
      encode(const unsigned char* bytes, size_t len);

      //! Decode a sequence of bytes in Base64.
      //! @param[in] str source string.
      //! @return Base64 decoded string.
      static std::string
      decode(const std::string& str)
      {
        return decode(reinterpret_cast<const unsigned char*>(str.c_str()), str.size());
      }

      //! Decode a sequence of bytes in Base64.
      //! @param[in] str source string.
      //! @param[in] len length of the string.
      //! @return Base64 encoded string.
      static std::string
      decode(const char* str, size_t len)
      {
        return decode(reinterpret_cast<const unsigned char*>(str), len);
      }

      //! Decode a sequence of bytes in Base64.
      //! @param[in] bytes unsigned char.
      //! @param[in] len length of the string.
      //! @return Base64 encoded string.
      static std::string
      decode(const unsigned char* bytes, size_t len);
    };
  }
}

#endif

