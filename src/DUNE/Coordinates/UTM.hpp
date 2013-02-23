//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Joao Fortuna                                                     *
//***************************************************************************
// $Id:: UTM.hpp 12667 2013-01-22 02:44:42Z rasm                          $:*
//***************************************************************************

#ifndef DUNE_COORDINATES_UTM_HPP_INCLUDED_
#define DUNE_COORDINATES_UTM_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Coordinates
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM UTM;

    class UTM
    {
    public:
      //! Calculates distance in meters of two points in UTM coordinates
      //! @return distance in meters or -1 if zones are different
      static double
      distance(double north1, double east1, double z1, int zone1, double north2, double east2, double z2, int zone2);

      //! Converts UTM to WGS84
      //! @param[in] north northing of the UTM coordinate
      //! @param[in] east easting of the UTM coordinate
      //! @param[in] zone zone of the UTM coordinate
      //! @param[in] in_north_hem true if UTM coordinate is in the north hemisphere, false otherwise
      //! @param[out] lat pointer to variable to store the latitude
      //! @param[out] lon pointer to variable to store the longitude
      static void
      toWGS84(double north, double east, int zone, bool in_north_hem, double* lat, double* lon);

      //! Converts WGS84 to UTM
      //! @param[in] lat latitude
      //! @param[in] lon longitude
      //! @param[out] north pointer to variable to store the northing of the UTM coordinate
      //! @param[out] east pointer to variable to store the easting of the UTM coordinate
      //! @param[out] zone pointer to variable to store the zone of the UTM coordinate
      //! @param[out] in_north_hem pointer to variable to store the hemisphere
      //! true if UTM coordinate is in the north hemisphere, false otherwise
      static void
      fromWGS84(double lat, double lon, double* north, double* east, int* zone, bool* in_north_hem);
    };

    // Export DLL Symbol.
    class DUNE_DLL_SYM UTMPoint;

    class UTMPoint
    {
    public:
      UTMPoint(double lat, double lon, double z);

      double
      getNorthing(void);

      double
      getEasting(void);

      double
      getZ(void);

      int
      getZone(void);

      bool
      isNorth(void);

      void
      translate(double n, double e);

      void
      toWGS84(double* lat, double* lon, double* z);

    private:
      double m_northing;
      double m_easting;
      double m_z;
      int m_utm_zone;
      bool m_in_north_hem;
    };
  }
}

#endif
