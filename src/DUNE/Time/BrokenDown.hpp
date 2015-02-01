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
