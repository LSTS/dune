//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Format.hpp 12667 2013-01-22 02:44:42Z rasm                       $:*
//***************************************************************************

#ifndef DUNE_TIME_FORMAT_HPP_INCLUDED_
#define DUNE_TIME_FORMAT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <ctime>

// DUNE headers.
#include <DUNE/Config.hpp>

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

namespace DUNE
{
  namespace Time
  {
    class Format
    {
    public:
      static std::string
      getTimeDate(void)
      {
        return getTimeDate(static_cast<double>(std::time(0)));
      }

      static std::string
      getTimeDate(double tstamp, bool utc = true)
      {
        char bfr[32] = {0};
        std::time_t t = static_cast<std::time_t>(tstamp);

#if defined(DUNE_SYS_HAS_GMTIME_R) && defined(DUNE_SYS_HAS_LOCALTIME_R)
        struct tm tm_bfr= {0};
        std::tm* tmp = utc ? gmtime_r(&t, &tm_bfr) : localtime_r(&t, &tm_bfr);
#else
        std::tm* tmp = utc ? std::gmtime(&t) : std::localtime(&t);
#endif

        if (tmp == 0)
          return "unknown time";

        if (std::strftime(bfr, sizeof(bfr), "%Y/%m/%d %H:%M:%S", tmp) == 0)
          return "unknown time";

        return bfr;
      }

      static std::string
      getDateSafe(void)
      {
        return getDateSafe(static_cast<double>(std::time(0)));
      }

      static std::string
      getDateSafe(double tstamp, bool utc = true)
      {
        char bfr[32] = {0};
        std::time_t t = static_cast<std::time_t>(tstamp);

#if defined(DUNE_SYS_HAS_GMTIME_R) && defined(DUNE_SYS_HAS_LOCALTIME_R)
        struct tm tm_bfr= {0};
        std::tm* tmp = utc ? gmtime_r(&t, &tm_bfr) : localtime_r(&t, &tm_bfr);
#else
        std::tm* tmp = utc ? std::gmtime(&t) : std::localtime(&t);
#endif

        if (tmp == 0)
          return "unknown date";

        if (std::strftime(bfr, sizeof(bfr), "%Y%m%d", tmp) == 0)
          return "unknown date";

        return bfr;
      }

      static std::string
      getTimeSafe(void)
      {
        return getTimeSafe(static_cast<double>(std::time(0)));
      }

      static std::string
      getTimeSafe(double tstamp, bool utc = true)
      {
        char bfr[32] = {0};
        std::time_t t = static_cast<std::time_t>(tstamp);

#if defined(DUNE_SYS_HAS_GMTIME_R) && defined(DUNE_SYS_HAS_LOCALTIME_R)
        struct tm tm_bfr= {0};
        std::tm* tmp = utc ? gmtime_r(&t, &tm_bfr) : localtime_r(&t, &tm_bfr);
#else
        std::tm* tmp = utc ? std::gmtime(&t) : std::localtime(&t);
#endif

        if (tmp == 0)
          return "unknown time";

        if (std::strftime(bfr, sizeof(bfr), "%H%M%S", tmp) == 0)
          return "unknown time";

        return bfr;
      }

      static std::string
      getRFC1123(bool utc = true)
      {
        std::time_t t = std::time(0);

#if defined(DUNE_SYS_HAS_GMTIME_R) && defined(DUNE_SYS_HAS_LOCALTIME_R)
        struct tm tm_bfr= {0};
        std::tm* tmp = utc ? gmtime_r(&t, &tm_bfr) : localtime_r(&t, &tm_bfr);
#else
        std::tm* tmp = utc ? std::gmtime(&t) : std::localtime(&t);
#endif

        char bfr[64];
        std::strftime(bfr, 64, "%a, %d %b %Y %H:%M:%S GMT", tmp);
        return bfr;
      }
    };
  }
}

#endif
