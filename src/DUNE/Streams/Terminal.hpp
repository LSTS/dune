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

#ifndef DUNE_STREAMS_TERMINAL_HPP_INCLUDED_
#define DUNE_STREAMS_TERMINAL_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <ostream>
#include <fstream>
#include <iostream>
#include <cstddef>
#include <cctype>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Format.hpp>
#include <DUNE/Concurrency/ScopedRWLock.hpp>
#include <DUNE/Concurrency/Mutex.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Streams
  {
    inline std::string
    sanitize(const std::string& str)
    {
      std::string out;

      for (unsigned int i = 0; i < str.size(); ++i)
      {
        switch (str[i])
        {
          case '\t':
            out += "\\t";
            break;
          case '\r':
            out += "\\r";
            break;
          case '\n':
            out += "\\n";
            break;
          default:
            if (isprint(str[i]))
              out += str[i];
            else
              out += Utils::String::str("<%02X>", (unsigned char)str[i]);
            break;
        }
      }

      return out;
    }

    inline void
    printBinary(std::ostream& os, uint8_t byte)
    {
      for (int i = 0; i < 8; ++i)
      {
        os << ((byte & 0x80) ? "1" : "0");
        byte <<= 1;
      }
    }

    // Export DLL Symbol.
    class DUNE_DLL_SYM Terminal;

    class Terminal
    {
    public:
      class Flusher
      { };

      Terminal(void):
        m_out(NULL)
      { }

      ~Terminal(void)
      {
        close();
      }

      void
      open(const std::string& fname);

      void
      close(void);

      Terminal&
      lock(const char* str = "");

      template <typename T>
      inline Terminal&
      operator<<(T o)
      {
        std::cerr << o;
        if (m_out)
          *m_out << o;
        return *this;
      }

      Terminal&
      operator<<(Flusher& f)
      {
        (void)f;
        if (m_out)
          m_out->flush();

#if defined(DUNE_OS_POSIX)
        std::cerr << "\033[0m";
#endif

        m_mutex.unlock();
        return *this;
      }

    private:
      std::ofstream* m_out;
      Concurrency::Mutex m_mutex;
    };

    DUNE_DLL_SYM extern Terminal dune_term;
    DUNE_DLL_SYM extern Terminal::Flusher dune_term_flush;
  }
}

#ifdef DEBUG
//! Prints a debug message to standard error with the given
//! parameters. If the macro DEBUG is not set nothing is performed.
#  define DUNE_DBG(module, code)                                        \
  ::DUNE::Streams::dune_term.lock()                                     \
  << "[" << ::DUNE::Time::Format::getTimeDate() << "] - " << DTR("DBG") \
  << " [" << module << "] >> " << code << "\n"                          \
  << ::DUNE::Streams::dune_term_flush
#else
//! Prints a debug message to standard error with the given
//! parameters. If the macro DEBUG is not set nothing is performed.
#  define DUNE_DBG(module, code)
#endif

//! Prints an error message to standard error with the given
//! parameters.
#define DUNE_ERR(module, code)                                          \
  ::DUNE::Streams::dune_term.lock("\033[1;31m")                         \
  << "[" << ::DUNE::Time::Format::getTimeDate() << "] - " << DTR("ERR") \
  << " [" << module << "] >> " << code                                  \
  << "\n"                                                               \
  << ::DUNE::Streams::dune_term_flush

//! Prints a warning message to standard error with the given
//! parameters.
#define DUNE_WRN(module, code)                                          \
  ::DUNE::Streams::dune_term.lock("\033[1;33m")                         \
  << "[" << ::DUNE::Time::Format::getTimeDate() << "] - " << DTR("WRN") \
  << " [" << module << "] >> " << code                                  \
  << "\n"                                                               \
  << ::DUNE::Streams::dune_term_flush

//! Prints a normal message to standard error with the given
//! parameters.
#define DUNE_MSG(module, code)                                          \
  ::DUNE::Streams::dune_term.lock()                                     \
  << "[" << ::DUNE::Time::Format::getTimeDate() << "] - " << DTR("MSG") \
  << " [" << module << "] >> " << code << "\n"                          \
  << ::DUNE::Streams::dune_term_flush

//! Prints a development message to standard error with the given
//! parameters.
#define DUNE_DEV(module, code)                                          \
  ::DUNE::Streams::dune_term.lock()                                     \
  << "[" << ::DUNE::Time::Format::getTimeDate() << "] - " << DTR("DBG") \
  << " [" << module << "] >> " << code << "\n"                          \
  << ::DUNE::Streams::dune_term_flush

#endif
