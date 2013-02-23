//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Error.hpp 12667 2013-01-22 02:44:42Z rasm                        $:*
//***************************************************************************

#ifndef DUNE_SYSTEM_ERROR_HPP_INCLUDED_
#define DUNE_SYSTEM_ERROR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <sstream>
#include <cerrno>
#include <cstring>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>

#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

namespace DUNE
{
  namespace System
  {
    //! Error
    class Error: public std::exception
    {
    public:
      //! Constructor.
      //! @param[in] code error code.
      //! @param[in] msg message to the user.
      Error(int code, const std::string& msg)
      {
        std::ostringstream ss;
        ss << msg << ": " << getMessage(code);
        m_full_msg = ss.str();
      }

      //! Constructor.
      //! @param[in] code error code.
      //! @param[in] msg message to the user.
      //! @param[in] args user message arguments.
      Error(int code, const std::string& msg, const std::string& args)
      {
        std::ostringstream ss;
        ss << msg << ": " << args << ": " << getMessage(code);
        m_full_msg = ss.str();
      }

      //! Constructor.
      //! @param[in] code error code.
      //! @param[in] msg message to the user.
      //! @param[in] args user message argument.
      Error(int code, const std::string& msg, int args)
      {
        std::ostringstream ss;
        ss << msg << ": " << args << ": " << getMessage(code);
        m_full_msg = ss.str();
      }

      //! Constructor.
      //! @param[in] estr error message.
      //! @param[in] msg message to the user.
      Error(const std::string& estr, const std::string& msg)
      {
        std::ostringstream ss;
        ss << msg << ": " << estr;
        m_full_msg = ss.str();
      }

      //! Constructor.
      //! @param[in] estr error message.
      //! @param[in] msg message to the user.
      //! @param[in] args user message arguments.
      Error(const std::string& estr, const std::string& msg, const std::string& args)
      {
        std::ostringstream ss;
        ss << msg << ": " << args << ": " << estr;
        m_full_msg = ss.str();
      }

      //! Destructor.
      ~Error(void) throw()
      { }

      //! Get the full description of the exception.
      //! @return description c string.
      const char*
      what(void) const throw()
      {
        return m_full_msg.c_str();
      }

      //! Retrieve the message of the last error.
      //! @return last error message.
      static std::string
      getLastMessage(void)
      {
#if defined(DUNE_SYS_HAS_GET_LAST_ERROR)
        return getMessage(GetLastError());
#else
        return getMessage(errno);
#endif
      }

      //! Retrieve the message associated with a specific error code.
      //! @param[in] ec error code.
      //! @return error message.
      static std::string
      getMessage(int ec)
      {
        char bfr[512] = {0};
        char* p = bfr;

        // POSIX strerror_r
#if defined(DUNE_SYS_HAS_POSIX_STRERROR_R)
        strerror_r(ec, bfr, sizeof(bfr));

        // GNU strerror_r
#elif defined(DUNE_SYS_HAS_GNU_STRERROR_R)
        p = strerror_r(ec, bfr, sizeof(bfr));

        // POSIX strerror
#elif defined(DUNE_SYS_HAS_STRERROR)
        p = strerror(ec);

        // Microsoft Windows FormatMessage
#elif defined(DUNE_SYS_HAS_FORMAT_MESSAGE)
        WORD lid = MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT);
        if (FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM, "%0", ec, lid, bfr, sizeof(bfr), 0) == 0)
          return "unable to translate system error";

        // Unsupported system
#else
        return "retrieving of error messages is not supported in this system";
#endif

        return p;
      }

    private:
      //! Full message.
      std::string m_full_msg;
    };
  }
}

#endif
