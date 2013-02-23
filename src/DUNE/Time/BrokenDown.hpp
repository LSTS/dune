//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: BrokenDown.hpp 12922 2013-02-14 18:39:55Z rasm                   $:*
//***************************************************************************

#ifndef DUNE_TIME_BROKEN_DOWN_HPP_INCLUDED_
#define DUNE_TIME_BROKEN_DOWN_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

// ISO C++ 98 headers.
#include <ctime>
#include <cstddef>

namespace DUNE
{
  namespace Time
  {
    //! Representation of time/date in a broken down fashion.
    class BrokenDown
    {
    public:
      //! Seconds after the minute.
      unsigned seconds;
      //! Minutes after the hour.
      unsigned minutes;
      //! Hours since midnight.
      unsigned hour;
      //! Day of the month.
      unsigned day;
      //! Day of the week.
      unsigned week_day;
      //! Months since January.
      unsigned month;
      //! Year.
      unsigned year;
      //! Day of the year.
      unsigned day_year;

      //! Default constructor, initializes object with current time.
      BrokenDown(void)
      {
        convert();
      }

      //! Initialize object to a given time.
      //! @param[in] value time.
      //! @param[in] utc true if time is UTC, false is time is localtime.
      BrokenDown(time_t value, bool utc = true)
      {
        convert(value, utc);
      }

      //! Convert time to broken down time.
      //! @param[in] value time.
      //! @param[in] utc true if time is UTC, false is time is localtime.
      void
      convert(time_t value, bool utc = true)
      {
        std::tm* sbdt = utc ? std::gmtime(&value) : std::localtime(&value);

        seconds = sbdt->tm_sec;
        minutes = sbdt->tm_min;
        hour = sbdt->tm_hour;
        day = sbdt->tm_mday;
        week_day = sbdt->tm_wday;
        month = sbdt->tm_mon + 1;
        year = sbdt->tm_year + 1900;
        day_year = sbdt->tm_yday + 1;
      }

      //! Convert current time to broken down time.
      //! @param[in] utc true if time is UTC, false is time is localtime.
      void
      convert(bool utc = true)
      {
        std::time_t now = std::time(NULL);
        convert(now, utc);
      }
    };
  }
}

#endif
