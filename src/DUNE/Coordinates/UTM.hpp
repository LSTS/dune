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
// Author: Joao Fortuna                                                     *
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
