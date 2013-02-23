//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  // Export DLL Symbol.
  class DUNE_DLL_SYM Exception;
  class DUNE_DLL_SYM NotImplemented;

  //! Base class for all exceptions.
  class Exception: public std::runtime_error
  {
  public:
    //! Constructor.
    //! @param[in] message message string.
    Exception(const std::string& message):
      std::runtime_error(message.c_str())
    { }
  };

  //! A given feature is not implemented.
  class NotImplemented: public Exception
  {
  public:
    //! Constructor.
    //! @param[in] feature feature name.
    NotImplemented(const std::string& feature):
      Exception(Utils::String::str(DTR("feature not implemented '%s'"),
                                   feature.c_str()))
    { }
  };
}

#endif
