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
// Author: Joao Fortuna                                                     *
//***************************************************************************

// Local headers.
#include <DUNE/Math/Constants.hpp>
#include <DUNE/Coordinates/WGS84.hpp>
#include <DUNE/Coordinates/UTM.hpp>

namespace DUNE
{
  namespace Coordinates
  {
    double
    UTM::distance(double north1, double east1, double z1, int zone1, double north2, double east2, double z2, int zone2)
    {
      if(zone1==zone2)
        return std::sqrt(((north1 - north2) * (north1 - north2))
            + ((east1 - east2) * (east1 - east2))
            + ((z1 - z2) * (z1 - z2)));
      else
        return -1;
    }

    void
    UTM::toWGS84(double north, double east, int zone, bool in_north_hem, double* lat, double* lon)
    {
        double c_k0 = 0.9996;
        double c_ref_easting = 500000;

        double b = c_wgs84_b;
        double eSquared = c_wgs84_e2;
        double e2Squared = c_wgs84_ep2;
        double tn;
        double ap;
        double bp;
        double cp;
        double dp;
        double ep;
        double tmd;
        double sr;
        double sn;
        double ftphi;
        double s;
        double c;
        double t;
        double eta;
        double de;
        double dlam;
        double olam;
        double dn;

        tn = (c_wgs84_a - b) / (c_wgs84_a + b);
        ap = c_wgs84_a * (1.0 - tn + 5.0 * ((tn * tn) - (tn * tn * tn)) / 4.0 + 81.0 *
                        ((tn * tn * tn * tn) - (tn * tn * tn * tn * tn)) / 64.0);
        bp = 3.0 * c_wgs84_a * (tn - (tn * tn) + 7.0 * ((tn * tn * tn)
                        - (tn * tn * tn * tn)) / 8.0 + 55.0 * (tn * tn * tn * tn * tn) / 64.0) / 2.0;
        cp = 15.0 * c_wgs84_a * ((tn * tn) - (tn * tn * tn) + 3.0 * ((tn * tn * tn * tn)
                        - (tn * tn * tn * tn * tn)) / 4.0) / 16.0;
        dp = 35.0 * c_wgs84_a * ((tn * tn * tn) - (tn * tn * tn * tn) + 11.0
                        * (tn * tn * tn * tn * tn) / 16.0) / 48.0;
        ep = 315.0 * c_wgs84_a * ((tn * tn * tn * tn) - (tn * tn * tn * tn * tn)) / 512.0;

        if(!in_north_hem)
                north -= 10000000.0;

        tmd = north / c_k0;

        sr = c_wgs84_a * (1.0 - eSquared);

        ftphi = tmd / sr;

        double t10, t11, t14, t15;
        for (int i = 0; i < 5; i++) {
                t10 = (ap * ftphi) - (bp * std::sin(2.0 * ftphi)) + (cp * std::sin(4.0 * ftphi)) - (dp * std::sin(6.0 * ftphi)) + (ep * std::sin(8.0 * ftphi));
                dn = std::sqrt(1.0 - eSquared * (std::sin(ftphi) * std::sin(ftphi)));
                sr = c_wgs84_a * (1.0 - eSquared) / (dn * dn * dn);
                ftphi = ftphi + (tmd - t10) / sr;
        }
        dn = std::sqrt(1.0 - eSquared * (std::sin(ftphi) * std::sin(ftphi)));
        sr = c_wgs84_a * (1.0 - eSquared) / (dn * dn * dn);
        sn = c_wgs84_a / std::sqrt(1.0 - eSquared * (std::sin(ftphi) * std::sin(ftphi)));

        s = std::sin(ftphi);
        c = std::cos(ftphi);
        t = s / c;
        eta = e2Squared * (c * c);
        de = east - c_ref_easting;
        t10 = t / (2.0 * sr * sn * (c_k0 * c_k0));
        t11 = t * (5.0 + 3.0 * (t * t) + eta - 4.0 * (eta * eta) - 9.0 * (t * t)
                        * eta) / (24.0 * sr * (sn * sn * sn) * (c_k0 * c_k0 * c_k0 * c_k0));
        *lat = ftphi - (de * de) * t10 + (de * de * de * de) * t11;
        t14 = 1.0 / (sn * c * c_k0);
        t15 = (1.0 + 2.0 * (t * t) + eta) / (6 * (sn * sn * sn) * c
                        * (c_k0 * c_k0 * c_k0));
        dlam = de * t14 - (de * de * de) * t15;
        olam = (zone * 6 - 183.0) * DUNE::Math::c_pi/180;
        *lon = olam + dlam;
    }

    void
    UTM::fromWGS84(double lat, double lon, double* north, double* east, int* zone, bool* in_north_hem)
    {
      double c_k0 = 0.9996; // scale on central meridian
      double c_ref_easting = 500000; // false easting

      double ref_lon;
      double hemi_northing;

      ref_lon = std::floor((lon * 180 / DUNE::Math::c_pi) / 6) * 6 + 3;
      // UTM zone
      *zone = (int)std::floor(ref_lon / 6) + 31;

      ref_lon *= DUNE::Math::c_pi / 180;

      *in_north_hem = (lat > 0);

      if(lat < 0)
        hemi_northing = 10000000.0;
      else
        hemi_northing = 0.0;

      // Equations parameters
      double eqn_n = c_wgs84_a / std::sqrt(1 - c_wgs84_e2 * (std::sin(lat) * std::sin(lat)));
      // eqn_n: radius of curvature of the earth perpendicular to meridian plane
      double eqn_t = std::tan(lat) * std::tan(lat);
      double eqn_c = ((c_wgs84_e2) / (1 - c_wgs84_e2)) * std::cos(lat) * std::cos(lat);
      double eqn_a = (lon - ref_lon) * std::cos(lat);

      // M: true distance along the central meridian from the equator to lat
      double eqn_m = c_wgs84_a * ((1 - c_wgs84_e2 / 4 - 3 * (c_wgs84_e2 * c_wgs84_e2) / 64
          - 5 * (c_wgs84_e2 * c_wgs84_e2 * c_wgs84_e2) / 256) * lat
          - (3 * c_wgs84_e2 / 8 + 3 * (c_wgs84_e2 * c_wgs84_e2) / 32 + 45
          * (c_wgs84_e2 * c_wgs84_e2 * c_wgs84_e2) / 1024) * std::sin(2 * lat)
          + (15 * (c_wgs84_e2 * c_wgs84_e2) / 256 + 45 * (c_wgs84_e2 * c_wgs84_e2 * c_wgs84_e2) / 1024)
          * std::sin(4 * lat) - (35 * (c_wgs84_e2 * c_wgs84_e2 * c_wgs84_e2) / 3072) * std::sin(6 * lat));

      // easting
      *east = c_ref_easting + c_k0 * eqn_n * (eqn_a + (1 - eqn_t + eqn_c) * (eqn_a * eqn_a * eqn_a) / 6
          + (5 - 18 * eqn_t + (eqn_t * eqn_t) + 72 * eqn_c - 58 * c_wgs84_ep2) * (eqn_a * eqn_a * eqn_a * eqn_a * eqn_a) / 120);

      // northing
      *north = hemi_northing + c_k0 * eqn_m + c_k0 * eqn_n * std::tan(lat) * ((eqn_a * eqn_a) / 2 + (5 - eqn_t + 9 * eqn_c + 4 * (eqn_c * eqn_c))
          * (eqn_a * eqn_a * eqn_a * eqn_a) / 24 + (61 - 58 * eqn_t + (eqn_t * eqn_t) + 600 * eqn_c - 330 * c_wgs84_ep2)
          * (eqn_a * eqn_a * eqn_a * eqn_a * eqn_a * eqn_a) / 720);
    }

    double
    UTMPoint::getNorthing()
    {
      return m_northing;
    }

    double
    UTMPoint::getEasting()
    {
      return m_easting;
    }

    double
    UTMPoint::getZ()
    {
      return m_z;
    }

    int
    UTMPoint::getZone()
    {
      return m_utm_zone;
    }

    bool
    UTMPoint::isNorth(){
      return m_in_north_hem;
    }

    void
    UTMPoint::translate(double n, double e)
    {
      m_northing += n;
      m_easting += e;
    }

    void
    UTMPoint::toWGS84(double* lat, double* lon, double* z)
    {
      UTM::toWGS84(m_northing, m_easting, m_utm_zone, m_in_north_hem, lat, lon);
      *z = m_z;
    }

    UTMPoint::UTMPoint(double lat, double lon, double z)
    {
      UTM::fromWGS84(lat, lon, &m_northing, &m_easting, &m_utm_zone, &m_in_north_hem);
      m_z = z;
    }
  }
}
