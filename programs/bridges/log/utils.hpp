//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact info@oceanscan-mst.com                               *
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
// Author: José Braga                                                       *
//***************************************************************************

//***************************************************************************
// Latitude/Longitude to NMEA conversion methods derived from               *
// DUNE::Coordinates::General due to an adjustment to have signal instead   *
// of cardinal direction initials.                                          *
//***************************************************************************

#ifndef BRIDGES_LOG_UTILS_HPP
#define BRIDGES_LOG_UTILS_HPP

#include <DUNE/DUNE.hpp>

//! Get date and time string.
//! @return date and time string.
std::string
getDateAndTime(void)
{
  double time = DUNE::Time::Clock::getSinceEpoch();
  time_t secs = (time_t)time;
  uint8_t msecs = (uint8_t)((time - secs) * 1000);
  DUNE::Time::BrokenDown bdt(secs);

  return DUNE::Utils::String::str("%02u/%02u/%02u %02u:%02u:%02u.%03u; ",
                                  bdt.day, bdt.month, bdt.year,
                                  bdt.hour, bdt.minutes, bdt.seconds, msecs);
}

//! Convert latitude (radians) to NMEA format.
//! @param[in] latitude latitude in radians.
//! @return NMEA latitude string.
std::string
latToNMEA(double latitude)
{
  int lat_deg = 0;
  double lat_min_fp = 0;
  DUNE::Math::Angles::convertDecimalToDM(DUNE::Math::Angles::degrees(latitude), lat_deg, lat_min_fp);
  int lat_min = (int)lat_min_fp;
  int lat_min_frac = (lat_min_fp - lat_min) * 100000;

  return DUNE::Utils::String::str("%02u%02u.%05u", lat_deg, lat_min, lat_min_frac);
}

//! Convert longitude (radians) to NMEA format.
//! @param[in] longitude longitude in radians.
//! @return NMEA longitude string.
std::string
lonToNMEA(double longitude)
{
  int lon_deg = 0;
  double lon_min_fp = 0;
  DUNE::Math::Angles::convertDecimalToDM(DUNE::Math::Angles::degrees(longitude), lon_deg, lon_min_fp);
  int lon_min = (int)lon_min_fp;
  int lon_min_frac = (lon_min_fp - lon_min) * 100000;

  return DUNE::Utils::String::str("%03d%02u.%05u", lon_deg, lon_min, lon_min_frac);
}

#endif
