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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_HARDWARE_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Hardware
  {
    //! An unexpected reply was received.
    class UnexpectedReply: public std::runtime_error
    {
    public:
      //! Constructor.
      //! @param[in] exp expected string.
      //! @param[in] got received string.
      UnexpectedReply(const std::string& exp, const std::string& got):
        std::runtime_error(DUNE::Utils::String::str("expecting '%s' but received '%s'",
                                       exp.c_str(),
                                       got.c_str()))
      { }

      //! Constructor.
      UnexpectedReply(void):
        std::runtime_error(DTR("unexpected reply"))
      { }
    };

    //! Timeout while waiting for data.
    class ReadTimeout: public std::runtime_error
    {
    public:
      //! Constructor.
      ReadTimeout(void):
        std::runtime_error(DTR("timeout while reading reply"))
      { }
    };

    //! Supplied buffer is too small to be used.
    class BufferTooSmall: public std::runtime_error
    {
    public:
      //! Constructor.
      //! @param[in] has size of supplied buffer.
      //! @param[in] need size needed to complete the operation.
      BufferTooSmall(unsigned has, unsigned need):
        std::runtime_error(DUNE::Utils::String::str(DTR("buffer has %u bytes, needed %u"),
                                       has, need))
      { }
    };

    //! Invalid checksum.
    class InvalidChecksum: public std::runtime_error
    {
    public:
      //! Constructor.
      //! @param[in] r received checksum.
      //! @param[in] c computed checksum.
      InvalidChecksum(uint8_t* r, uint8_t* c):
        std::runtime_error(DUNE::Utils::String::str(DTR("invalid checksum: should be %02X%02X but received %02X%02X"),
                                       c[0], c[1],
                                       r[0], r[1]))
      { }
    };

    //! Invalid command/response format.
    class InvalidFormat: public std::runtime_error
    {
    public:
      //! Constructor.
      //! @param[in] str invalid command/response.
      InvalidFormat(const std::string& str):
        std::runtime_error(DUNE::Utils::String::str(DTR("invalid format: %s"), str.c_str()))
      { }
    };
  }
}

#endif
