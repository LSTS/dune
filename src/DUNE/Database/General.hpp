//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
