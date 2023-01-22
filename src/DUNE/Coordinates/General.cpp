//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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

// DUNE headers.
#include <DUNE/Coordinates/General.hpp>
#include <DUNE/Coordinates/WGS84.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Coordinates
  {
    void
    toWGS84(const IMC::EstimatedState& estate, double& lat, double& lon, float& hae)
    {
      // Define reference.
      lat = estate.lat;
      lon = estate.lon;
      hae = estate.height;

      // Call the general method.
      WGS84::displace(estate.x, estate.y, estate.z, &lat, &lon, &hae);
    }

    void
    toWGS84(const IMC::EstimatedState& estate, double& lat, double& lon)
    {
      // Use reference height.
      float hae = estate.height;

      toWGS84(estate, lat, lon, hae);
    }

    void
    toWGS84(const IMC::SimulatedState& estate, double& lat, double& lon, float& hae)
    {
      // Define reference.
      lat = estate.lat;
      lon = estate.lon;
      hae = estate.height;

      // Call the general method.
      WGS84::displace(estate.x, estate.y, estate.z, &lat, &lon, &hae);
    }

    void
    toWGS84(const IMC::SimulatedState& estate, double& lat, double& lon)
    {
      // Use reference height.
      float hae = estate.height;

      toWGS84(estate, lat, lon, hae);
    }

    std::string
    latitudeToNMEA(double latitude)
    {
      int lat_deg = 0;
      double lat_min_fp = 0;
      Math::Angles::convertDecimalToDM(Math::Angles::degrees(latitude), lat_deg, lat_min_fp);
      int lat_min = (int)lat_min_fp;
      int lat_min_frac = (lat_min_fp - lat_min) * 100000;

      return Utils::String::str("%02d%02d.%05d,%c", std::abs(lat_deg), lat_min, lat_min_frac, (lat_deg >= 0) ? 'N' : 'S');
    }

    std::string
    longitudeToNMEA(double longitude)
    {
      int lon_deg = 0;
      double lon_min_fp = 0;
      Math::Angles::convertDecimalToDM(Math::Angles::degrees(longitude), lon_deg, lon_min_fp);
      int lon_min = (int)lon_min_fp;
      int lon_min_frac = (lon_min_fp - lon_min) * 100000;

      return Utils::String::str("%03d%02d.%05d,%c", std::abs(lon_deg), lon_min, lon_min_frac, (lon_deg >= 0) ? 'E' : 'W');
    }

    double
    NMEAToLatitude(const std::string& str)
    {
      int lat_deg = 0;
      double lat_min = 0.0;
      char hemisphere;

      if (str[4] != '.')
        return -1.0;

      if (std::sscanf(str.c_str(), "%02d%lf,%c", &lat_deg, &lat_min, &hemisphere) != 3)
        return -1.0;

      if (hemisphere == 'S')
        lat_deg *= -1;

      return Math::Angles::normalizeRadian(Math::Angles::radians(Math::Angles::convertDMSToDecimal(lat_deg, lat_min)));
    }

    double
    NMEAToLongitude(const std::string& str)
    {
      int lon_deg = 0;
      double lon_min = 0.0;
      char hemisphere;

      if (str[5] != '.')
        return -1.0;

      if (std::sscanf(str.c_str(), "%03d%lf,%c", &lon_deg, &lon_min, &hemisphere) != 3)
        return -1.0;

      if (hemisphere == 'W')
        lon_deg *= -1;

      return Math::Angles::normalizeRadian(Math::Angles::radians(Math::Angles::convertDMSToDecimal(lon_deg, lon_min)));
    }
  }
}
