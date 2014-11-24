//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Eduardo Marques                                                  *
// Author: Ricardo Martins                                                  *
//***************************************************************************
// These are the standard conversion routines as described in: J. Zhu,      *
// "Conversion of Earth-centered Earth-fixed coordinates to geodetic        *
// coordinates," IEEE Transactions on Aerospace and Electronic              *
// Systems, IEEE Transactions on, vol. 30, pp. 957-961, 1994.               *
//                                                                          *
// A summary of the implementation can be found in:                         *
// - http://en.wikipedia.org/wiki/Geodetic_system                           *
//***************************************************************************

#ifndef DUNE_COORDINATES_WGS84_HPP_INCLUDED_
#define DUNE_COORDINATES_WGS84_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cassert>
#include <cmath>
#include <cstddef>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Coordinates
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM WGS84;

    //! Semi-major axis.
    static const double c_wgs84_a = 6378137.0;
    //! Semi-minor axis.
    static const double c_wgs84_b = 6356752.3142;
    //! First eccentricity squared.
    static const double c_wgs84_e2 = 0.00669437999013;
    //! Second (prime) eccentricity squared.
    static const double c_wgs84_ep2 = 0.00673949674228;
    //! Flattening.
    static const double c_wgs84_f = 0.0033528106647475;

    //! Routines for WGS-84 coordinate manipulation.
    class WGS84
    {
    public:
      //! Calculate distance between two WGS-84 coordinates.
      //! Basically, a ECEF conversion of both WGS-84 coordinates is
      //! done then the ECEF distance is returned.
      //!
      //! @note
      //! This is the standard way of doing it and that NE distance is
      //! a different measure.
      //!
      //! @param[in] lat1 WGS-84 latitude of first coordinate (rad).
      //! @param[in] lon1 WGS-84 longitude of first coordinate (rad).
      //! @param[in] hae1 height above WGS-84 ellipsoid of first
      //!            coordinate (m).
      //! @param[in] lat2 WGS-84 latitude of second coordinate (rad).
      //! @param[in] lon2 WGS-84 longitude of second coordinate (rad).
      //! @param[in] hae2 height above WGS-84 ellipsoid of second
      //!            coordinate (m).
      //!
      //! @return distance between the two coordinates (m).
      template <typename Ta, typename Tb>
      static Ta
      distance(Ta lat1, Ta lon1, Tb hae1,
               Ta lat2, Ta lon2, Tb hae2)
      {
        double x1;
        double y1;
        double z1;

        toECEF(lat1, lon1, hae1, &x1, &y1, &z1);

        double x2;
        double y2;
        double z2;

        toECEF(lat2, lon2, hae2, &x2, &y2, &z2);

        x1 -= x2;
        y1 -= y2;
        z1 -= z2;

        return std::sqrt(x1 * x1 + y1 * y1 + z1 * z1);
      }

      //! Compute North-East-Down displacement between two WGS-84
      //! coordinates.
      //!
      //! @param[in] rlat reference WGS-84 latitude (rad).
      //! @param[in] rlon reference WGS-84 longitude (rad).
      //! @param[in] rhae reference WGS-84 coordinate height (m).
      //! @param[in] lat Offset coordinate WGS-84 latitude (rad).
      //! @param[in] lon Offset coordinate WGS-84 longitude (rad).
      //! @param[in] hae Offset coordinate height (m).
      //! @param[out] n storage for North offset (x-coordinate in NED
      //!             referential).
      //! @param[out] e storage for East offset (y-coordinate in NED
      //!             referential).
      //! @param[out] d storage for Down offset (z-coordinate in NED
      //!             referential).
      template <typename Ta, typename Tb, typename Tc, typename Td, typename Te>
      static void
      displacement(Ta rlat, Ta rlon, Tb rhae,
                   Tc lat, Tc lon, Td hae,
                   Te* n, Te* e, Te* d = NULL)
      {
        double cs[6] = {0.0};

        toECEF(rlat, rlon, rhae, &cs[0], &cs[1], &cs[2]);
        toECEF(lat, lon, hae, &cs[3], &cs[4], &cs[5]);

        double ox = cs[3] - cs[0];
        double oy = cs[4] - cs[1];
        double oz = cs[5] - cs[2];
        double slat = std::sin(rlat);
        double clat = std::cos(rlat);
        double slon = std::sin(rlon);
        double clon = std::cos(rlon);

        // North.
        if (n != NULL)
          *n = -slat * clon * ox - slat * slon * oy + clat * oz;

        // East.
        if (e != NULL)
          *e = -slon * ox + clon * oy;

        // Down.
        if (d != NULL)
          *d = -clat * clon * ox - clat * slon * oy - slat * oz;
      }

      //! Displace a geodetic coordinate in the NED frame
      //! according to given offsets.
      //!
      //! @param[in] n North offset (m).
      //! @param[in] e East offset (m).
      //! @param[in] d Down offset (m).
      //! @param[in,out] lat reference latitude on entry, displaced
      //!                latitude on exit (rad).
      //! @param[in,out] lon reference longitude entry, displaced
      //!                longitude on exit (rad).
      //! @param[in,out] hae reference height on entry, displaced
      //!                height on exit (rad).
      template <typename Ta, typename Tb, typename Tc, typename Td>
      static void
      displace(Ta n, Ta e, Tb d,
               Tc* lat, Tc* lon, Td* hae)
      {
        // Convert reference to ECEF coordinates
        double x;
        double y;
        double z;
        toECEF(*lat, *lon, *hae, &x, &y, &z);

        // Compute Geocentric latitude
        double phi = std::atan2(z, std::sqrt(x * x + y * y));

        // Compute all needed sine and cosine terms for conversion.
        double slon = std::sin(*lon);
        double clon = std::cos(*lon);
        double sphi = std::sin(phi);
        double cphi = std::cos(phi);

        // Obtain ECEF coordinates of displaced point
        // Note: some signs from standard ENU formula
        // are inverted - we are working with NED (= END) coordinates
        x += -slon * e - clon * sphi * n - clon * cphi * d;
        y += clon * e - slon * sphi * n - slon * cphi * d;
        z += cphi * n - sphi * d;

        // Convert back to WGS-84 coordinates.
        fromECEF(x, y, z, lat, lon, hae);
      }

      //! Displace a WGS-84 coordinate in the NED frame according to
      //! given offsets.
      //!
      //! @param[in] n North offset (m).
      //! @param[in] e East offset (m).
      //! @param[in,out] lat reference latitude on entry, displaced
      //!                latitude on exit (rad).
      //! @param[in,out] lon reference longitude entry, displaced
      //!                longitude on exit (rad).
      template <typename Ta, typename Tb>
      static inline void
      displace(Ta n, Ta e, Tb* lat, Tb* lon)
      {
        // Dummy variable
        double hae = 0.00;

        // Call the general method
        displace(n, e, 0.00, lat, lon, &hae);
      }

      //! Get North-East bearing and range between two
      //! latitude/longitude coordinates.
      //!
      //! @param[in] lat1 WGS-84 latitude of first coordinate (rad).
      //! @param[in] lon1 WGS-84 longitude of first coordinate (rad).
      //! @param[in] lat2 WGS-84 latitude of second coordinate (rad).
      //! @param[in] lon2 WGS-84 longitude of second coordinate (rad).
      //! @param[in,out] bearing bearing (rad).
      //! @param[in,out] range range (m).
      template <typename Ta, typename Tb>
      static inline void
      getNEBearingAndRange(Ta lat1, Ta lon1,
                           Ta lat2, Ta lon2,
                           Tb* bearing, Tb* range)
      {
        double n, e;
        WGS84::displacement(lat1, lon1, 0, lat2, lon2, 0, &n, &e);
        *bearing = (Tb)std::atan2(e, n);
        *range = (Tb)std::sqrt(n * n + e * e);
      }

      //! Get angles of Azimuth and Elevation between two
      //! latitude/longitude/height coordinates.
      //!
      //! @param[in] lat1 WGS-84 latitude of first coordinate (rad).
      //! @param[in] lon1 WGS-84 longitude of first coordinate (rad).
      //! @param[in] hei1 WGS-84 height of first coordinate (m).
      //! @param[in] lat2 WGS-84 latitude of second coordinate (rad).
      //! @param[in] lon2 WGS-84 longitude of second coordinate (rad).
      //! @param[in] hei2 WGS-84 height of second coordinate (m).
      //! @param[in,out] azimuth azimuth angle (rad).
      //! @param[in,out] elevation elevation angle (rad).
      template <typename Ta, typename Tb, typename Tc>
      static inline void
      getAzimuthAndElevation(Ta lat1, Ta lon1, Tb hei1,
                             Ta lat2, Ta lon2, Tb hei2,
                             Tc* azimuth, Tc* elevation)
      {
        double latitudeArc  = lat1 - lat2;
        double longitudeArc = lon1 - lon2;
        double latitudeH = std::sin(latitudeArc * 0.5);
        latitudeH *= latitudeH;
        double lontitudeH = std::sin(longitudeArc * 0.5);
        lontitudeH *= lontitudeH;
        double tmp = std::cos(lat1) * std::cos(lat2);
        double arc = 2.0 * std::asin(std::sqrt(latitudeH + tmp * lontitudeH));

        double cos_arc = std::cos(arc);
        double sin_arc = std::sin(arc);
        double tan_arc = std::tan(arc);

        double radius = computeRn(lat1);
        double r1 = radius + hei1;

        double h1 = (r1 / cos_arc) - radius;
        double h2 = hei2 - h1;
        double h3 = cos_arc * h2;
        double d1 = tan_arc * r1;
        double d2 = sin_arc * h2;

        *elevation = std::atan(h3 / (d1 + d2));
        getNEBearingAndRange(lat1, lon1, lat2, lon2, azimuth, &tmp);
      }

    private:
      //! Convert WGS-84 coordinates to ECEF (Earch Center Earth Fixed) coordinates.
      //!
      //! @param[in] lat WGS-84 latitude (rad).
      //! @param[in] lon WGS-84 longitude (rad).
      //! @param[in] hae WGS-84 coordinate height (m).
      //! @param[out] x storage for ECEF x coordinate (m).
      //! @param[out] y storage for ECEF y coordinate (m).
      //! @param[out] z storage for ECEF z coordinate (m).
      template <typename Ta, typename Tb, typename Tc>
      static void
      toECEF(Ta lat, Ta lon, Tb hae, Tc* x, Tc* y, Tc* z)
      {
        assert(x != 0);
        assert(y != 0);
        assert(z != 0);

        double cos_lat = std::cos(lat);
        double sin_lat = std::sin(lat);
        double cos_lon = std::cos(lon);
        double sin_lon = std::sin(lon);
        double rn = computeRn(lat);

        *x = (rn + hae) * cos_lat * cos_lon;
        *y = (rn + hae) * cos_lat * sin_lon;
        *z = (((1.0 - c_wgs84_e2) * rn) + hae) * sin_lat;
      }

      //! Convert ECEF (x,y,z) to WGS-84 (lat, lon, hae).
      //!
      //! @param[in] x ECEF x coordinate (m).
      //! @param[in] y ECEF y coordinate (m).
      //! @param[in] z ECEF z coordinate (m).
      //! @param[out] lat WGS-84 latitude (rad).
      //! @param[out] lon WGS-84 longitude (rad).
      //! @param[out] hae height above WGS-84 ellipsoid (m).
      template <typename Ta, typename Tb, typename Tc, typename Td>
      static void
      fromECEF(Ta x, Ta y, Tb z, Tc* lat, Tc* lon, Td* hae)
      {
        assert(lat != 0);
        assert(lon != 0);
        assert(hae != 0);

        double p = std::sqrt(x * x + y * y);
        *lon = std::atan2(y, x);
        *lat = std::atan2(z / p, 0.01);
        double n = computeRn(*lat);
        *hae = p / std::cos(*lat) - n;
        double old_hae = -1e-9;
        double num = z / p;

        while (std::fabs(*hae - old_hae) > 1e-4)
        {
          old_hae = *hae;
          double den = 1 - c_wgs84_e2 * n / (n + *hae);
          *lat = std::atan2(num, den);
          n = computeRn(*lat);
          *hae = p / std::cos(*lat) - n;
        }
      }

      //! Compute the radius of curvature in the prime vertical (Rn).
      //!
      //! @param[in] lat WGS-84 latitude (rad).
      //!
      //! @return radius of curvature in the prime vertical (rad).
      template <typename Type>
      static inline Type
      computeRn(Type lat)
      {
        double lat_sin = std::sin(lat);
        return c_wgs84_a / std::sqrt(1 - c_wgs84_e2 * (lat_sin * lat_sin));
      }
    };
  }
}

#endif
