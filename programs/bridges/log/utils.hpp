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
