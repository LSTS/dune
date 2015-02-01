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
