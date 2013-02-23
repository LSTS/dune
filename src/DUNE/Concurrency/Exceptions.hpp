//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Exceptions.hpp 12667 2013-01-22 02:44:42Z rasm                   $:*
//***************************************************************************

#ifndef DUNE_CONCURRENCY_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_CONCURRENCY_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/Concurrency/Initializer.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    class ThreadError: public std::runtime_error
    {
    public:
      ThreadError(const std::string& msg, int code):
        std::runtime_error("thread error: " + msg + ": " + System::Error::getMessage(code))
      { }
    };

    class MutexError: public std::runtime_error
    {
    public:
      MutexError(int code):
        std::runtime_error("mutex error: " + System::Error::getMessage(code))
      { }

      MutexError(std::string msg, int code):
        std::runtime_error("mutex error: " + msg + ": " + System::Error::getMessage(code))
      { }
    };

    class RWLockError: public std::runtime_error
    {
    public:
      RWLockError(int code):
        std::runtime_error("rwlock error: " + System::Error::getMessage(code))
      { }

      RWLockError(std::string msg, int code):
        std::runtime_error("rwlock error: " + msg + ": " + System::Error::getMessage(code))
      { }
    };

    class ConditionError: public std::runtime_error
    {
    public:
      ConditionError(int code):
        std::runtime_error("condition error: " + System::Error::getMessage(code))
      { }

      ConditionError(std::string msg, int code):
        std::runtime_error("condition error: " + msg + ": " + System::Error::getMessage(code))
      { }
    };

    class BarrierError: public std::runtime_error
    {
    public:
      BarrierError(int code):
        std::runtime_error("barrier error: " + System::Error::getMessage(code))
      { }

      BarrierError(std::string msg, int code):
        std::runtime_error("barrier error: " + msg + ": " + System::Error::getMessage(code))
      { }
    };
    class TLSError: public std::runtime_error
    {
    public:
      TLSError(int code):
        std::runtime_error("TLS error: " + System::Error::getMessage(code))
      { }

      TLSError(std::string msg, int code):
        std::runtime_error("TLS error: " + msg + ": " + System::Error::getMessage(code))
      { }
    };
  }
}

#endif
