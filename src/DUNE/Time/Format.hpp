//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef DUNE_TIME_FORMAT_HPP_INCLUDED_
#define DUNE_TIME_FORMAT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Time
  {
    //! Time/date formatting routines.
    class Format
    {
    public:
      //! Represent the current time as a string with format "YYYY/MM/DD
      //! HH:mm:SS".
      //!
      //! @return string representing current date and time.
      static std::string
      getTimeDate(void);

      //! Represent the number of seconds since the Unix Epoch as a string
      //! with format "YYYY/MM/DD HH:mm:SS".
      //!
      //! @param[in] tstamp number of seconds since the Unix Epoch.
      //! @param[in] utc true to use UTC timezone, false to use local timezone.
      //!
      //! @return string representing date and time.
      static std::string
      getTimeDate(double tstamp, bool utc = true);

      //! Represent the current date as a string with format "YYYYMMDD".
      //!
      //! @return string representing date.
      static std::string
      getDateSafe(void);

      //! Represent the number of seconds since the Unix Epoch as a string
      //! with format "YYYYMMDD".
      //!
      //! @param[in] tstamp number of seconds since the Unix Epoch.
      //! @param[in] utc true to use UTC timezone, false to use local timezone.
      //!
      //! @return string representing date and time.
      static std::string
      getDateSafe(double tstamp, bool utc = true);

      //! Represent the current time as a string with format "HHmmSS".
      //!
      //! @return string representing current time.
      static std::string
      getTimeSafe(void);

      //! Represent the number of seconds since the Unix Epoch as a string
      //! of format "YYYYMMDD".
      //!
      //! @param[in] tstamp number of seconds since the Unix Epoch.
      //! @param[in] utc true to use UTC timezone, false to use local timezone.
      //!
      //! @return string representing time.
      static std::string
      getTimeSafe(double tstamp, bool utc = true);

      //! Convert the current time as a RFC1123 compliant string.
      //!
      //! @return RFC1123 compliant string.
      static std::string
      getRFC1123(void);

      //! Convert the number of seconds since the Unix Epoch as a RFC1123
      //! compliant string.
      //!
      //! @param[in] tstamp number of seconds since the Unix Epoch.
      //! @param[in] utc true to use UTC timezone, false to use local timezone.
      //!
      //! @return RFC1123 compliant string.
      static std::string
      getRFC1123(double tstamp, bool utc = true);
    };
  }
}

#endif
