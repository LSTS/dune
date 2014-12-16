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

// ISO C++ 98 headers.
#include <iostream>
#include <cstring>

// DUNE headers.
#include <DUNE/Algorithms/Base64.hpp>

namespace DUNE
{
  namespace Algorithms
  {
      //! Encode a sequence of bytes in Base64.
      std::string
      Base64::encode(const std::string& str)
      {
        return encode(str.c_str(), str.size());
      }
      
      std::string
      Base64::encode(const char* str, size_t len)
      {
        return encode(str, len);
      }
      
      std::string
      Base64::encode(const unsigned char* bytes, size_t len)
      {
        return encode((const char*)bytes, len);
      }

      int decode_to(const unsigned char* first,  unsigned long f_len, unsigned char* last, unsigned long* l_len);

      //! Decode a sequence of bytes in Base64.
      std::string
      Base64::decode(const std::string& str)
      {
        unsigned char* last = new unsigned char[str.size()];
        unsigned long l_len = str.size();
        decode_to((unsigned char*) str.c_str(), str.size(), last, &l_len);
        std::string msg((char*) last, l_len);
        delete[] last;
        return msg;
      }
      
      std::string
      Base64::decode(const char* str, size_t len)
      {
        return "decode";
      }
      
      std::string
      Base64::decode(const unsigned char* bytes, size_t len){
        return "decode";
      }
  }
}
