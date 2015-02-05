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
// Author: Eduardo Marques                                                  *
// Author: Pedro Vaz Teixeira                                               *
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <cstdlib>

// DUNE headers.
#include <DUNE/Coordinates/WMM.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Time/BrokenDown.hpp>

// WMM 2015 headers.
#include <wmm2015/GeomagnetismHeader.h>

namespace DUNE
{
  namespace Coordinates
  {
    static const unsigned c_num_geoid_cols = 1441;
    static const unsigned c_num_geoid_rows = 721;

    struct WMMData
    {
      MAGtype_Geoid geoid;
      MAGtype_Ellipsoid ellip;
      MAGtype_MagneticModel* mm;
      MAGtype_MagneticModel* timed_mm;
    };

    WMM::WMM(void)
    {
      init(FileSystem::Path::applicationFile().dirname() / "../etc");
    }

    WMM::WMM(const FileSystem::Path& root)
    {
      init(root);
    }

    void
    WMM::init(const FileSystem::Path& root)
    {
      m_data = new WMMData;
      FileSystem::Path egmfile(root / "wmm/egm9615.bin");
      FileSystem::Path wmmfile(root / "wmm/wmm.cof");

      if (!egmfile.isFile())
        throw std::runtime_error(egmfile.str() + " not found");

      if (!wmmfile.isFile())
        throw std::runtime_error(wmmfile.str() + " not found");

      // Initialization
      m_data->mm = MAG_robustReadMagModels(wmmfile.c_str());

      int num_terms = ((m_data->mm->nMax + 1) * (m_data->mm->nMax + 2) / 2);
      m_data->timed_mm = MAG_AllocateModelMemory(num_terms);
      MAG_SetDefaults(&m_data->ellip, &m_data->geoid);

      // Read geoid data
      /* Set EGM96 Geoid parameters */
      unsigned n = c_num_geoid_cols * c_num_geoid_rows;
      m_data->geoid.GeoidHeightBuffer = (float *) std::malloc((n + 1) * sizeof(float));
      std::FILE* file = std::fopen(egmfile.c_str(), "rb");
      std::fread(m_data->geoid.GeoidHeightBuffer, sizeof(float), n, file);
      std::fclose(file);

      //m_data->geoid.GeoidHeightBuffer = GeoidHeightBuffer;
      m_data->geoid.Geoid_Initialized = 1;

      // Adjust magnetic model according to date
      char dummy[100];
      Time::BrokenDown now;
      MAGtype_Date date;
      date.Year = now.year;
      date.Month = now.month;
      date.Day = now.day;
      MAG_DateToYear(&date, dummy);
      MAG_TimelyModifyMagneticModel(date, m_data->mm, m_data->timed_mm);
    }

    WMM::~WMM(void)
    {
      MAG_FreeMagneticModelMemory(m_data->timed_mm);
      MAG_FreeMagneticModelMemory(m_data->mm);
      std::free(m_data->geoid.GeoidHeightBuffer);
      delete m_data;
    }

    double
    WMM::height(double lat, double lon)
    {
      double h = 0;
      MAG_GetGeoidHeight(Math::Angles::degrees(lat), Math::Angles::degrees(lon), &h, &m_data->geoid);

      return h;
    }

    double
    WMM::declination(double lat, double lon, double h)
    {
      MAGtype_CoordGeodetic geo;
      MAGtype_CoordSpherical sph;
      MAGtype_GeoMagneticElements gme;

      geo.phi = Math::Angles::degrees(lat);
      geo.lambda = Math::Angles::degrees(lon);
      geo.UseGeoid = false;
      geo.HeightAboveEllipsoid = h * 1e-03;

      MAG_GeodeticToSpherical(m_data->ellip, geo, &sph);
      MAG_Geomag(m_data->ellip, sph, geo, m_data->timed_mm, &gme);
      MAG_CalculateGridVariation(geo, &gme);

      return Math::Angles::radians(gme.Decl);
    }
  }
}
