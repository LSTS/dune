//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_DATABASE_GENERAL_HPP_INCLUDED_
#define DUNE_DATABASE_GENERAL_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <stdexcept>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Database
  {
    // This header contains defines a few small types for this package.

    //! Blob type.
    typedef std::vector<char> Blob;

    //! Datum to represent a NULL argument when binding statements.
    struct Null
    { };

    //! Database error.
    class Error: public std::runtime_error
    {
    public:
      Error(std::string msg):
        std::runtime_error("database error: " + msg)
      { }
    };
  }
}

#endif
