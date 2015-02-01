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

#ifndef TRANSPORTS_SUNSET_SSC_EXCEPTIONS_HPP_INCLUDED_
#define TRANSPORTS_SUNSET_SSC_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace SUNSET
  {
    class InvalidChecksum: public std::runtime_error
    {
    public:
      InvalidChecksum(void):
        std::runtime_error("invalid checksum")
      { }
    };

    class InvalidFormat: public std::runtime_error
    {
    public:
      InvalidFormat(const std::string& str):
        std::runtime_error(DUNE::Utils::String::str("invalid format: %s", str.c_str()))
      { }
    };

    class InvalidVersion: public std::runtime_error
    {
    public:
      InvalidVersion(void):
        std::runtime_error("invalid version")
      { }
    };

    class InvalidRequest: public std::runtime_error
    {
    public:
      InvalidRequest(void):
        std::runtime_error("invalid request")
      { }
    };

    class InvalidValue: public std::runtime_error
    {
    public:
      InvalidValue(void):
        std::runtime_error("invalid value")
      { }
    };
  }
}

#endif
