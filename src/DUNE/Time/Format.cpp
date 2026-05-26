//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <ctime>
#include <sstream>
#include <iomanip>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Format.hpp>

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

namespace DUNE
{
  namespace Time
  {
    std::string
    Format::getTimeDate(void)
    {
      return getTimeDate(static_cast<double>(std::time(0)));
    }

    std::string
    Format::getTimeDate(double tstamp, bool utc)
    {
      char bfr[32] = {0};
      std::time_t t = static_cast<std::time_t>(tstamp);

#if defined(DUNE_SYS_HAS_GMTIME_R) && defined(DUNE_SYS_HAS_LOCALTIME_R)
      std::tm tm_bfr = {0};
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

    std::string
    Format::getDateSafe(void)
    {
      return getDateSafe(static_cast<double>(std::time(0)));
    }

    std::string
    Format::getDateSafe(double tstamp, bool utc)
    {
      char bfr[32] = {0};
      std::time_t t = static_cast<std::time_t>(tstamp);

#if defined(DUNE_SYS_HAS_GMTIME_R) && defined(DUNE_SYS_HAS_LOCALTIME_R)
      std::tm tm_bfr = {0};
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

    std::string
    Format::getTimeSafe(void)
    {
      return getTimeSafe(static_cast<double>(std::time(0)));
    }

    std::string
    Format::getTimeSafe(double tstamp, bool utc)
    {
      char bfr[32] = {0};
      std::time_t t = static_cast<std::time_t>(tstamp);

#if defined(DUNE_SYS_HAS_GMTIME_R) && defined(DUNE_SYS_HAS_LOCALTIME_R)
      std::tm tm_bfr = {0};
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

    std::string
    Format::getRFC1123(bool utc)
    {
      std::time_t t = std::time(0);

#if defined(DUNE_SYS_HAS_GMTIME_R) && defined(DUNE_SYS_HAS_LOCALTIME_R)
      std::tm tm_bfr = {0};
      std::tm* tmp = utc ? gmtime_r(&t, &tm_bfr) : localtime_r(&t, &tm_bfr);
#else
      std::tm* tmp = utc ? std::gmtime(&t) : std::localtime(&t);
#endif

      char bfr[64];
      std::strftime(bfr, 64, "%a, %d %b %Y %H:%M:%S GMT", tmp);
      return bfr;
    }

    std::string
    Format::getTimeDHMS(double tstamp)
    {
      unsigned days = static_cast<unsigned>(tstamp / 86400);
      tstamp -= days * 86400;

      unsigned hours = static_cast<unsigned>(tstamp / 3600);
      tstamp -= hours * 3600;

      unsigned minutes = static_cast<unsigned>(tstamp / 60);
      tstamp -= minutes * 60;

      std::ostringstream result;
      if (days > 0)
        result << days << "d";
      if (hours > 0)
        result << hours << "h";
      if (minutes > 0)
        result << minutes << "m";
      if (tstamp >= 0)
        result << std::fixed << std::setprecision(1) << tstamp << "s";

      return result.str();
    }

    std::string
    Format::getTimeDHMS(void)
    {
      return getTimeDHMS(static_cast<double>(std::time(0)));
    }
  }
}
