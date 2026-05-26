//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Eduardo Marques                                                  *
// Author: Pedro Vaz Teixeira                                               *
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/Coordinates/WMM.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Time/BrokenDown.hpp>

// WMM 2025 headers.
extern "C" {
  #include <wmm2025/egm9615.h>
  #include <wmm2025/GeomagnetismHeader.h>
}
namespace DUNE
{
  namespace Coordinates
  {
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
      FileSystem::Path wmmfile(root / "wmm/wmmhr.cof");

      if (!wmmfile.isFile())
        throw std::runtime_error(wmmfile.str() + " not found");

      MAGtype_MagneticModel *magnetic_model[1] = {nullptr};

      // Initialization
      int result =
        MAG_robustReadMagModels(const_cast<char*>(wmmfile.c_str()),
                                reinterpret_cast<MAGtype_MagneticModel**>(&magnetic_model), 1);

      if (result <= 0) {
        // Handle error - no models were read
        throw std::runtime_error("Failed to read WMM magnetic model file");
      }

      m_data->mm = magnetic_model[0];

      int num_terms = ((m_data->mm->nMax + 1) * (m_data->mm->nMax + 2) / 2);
      m_data->timed_mm = MAG_AllocateModelMemory(num_terms);
      MAG_SetDefaults(&m_data->ellip, &m_data->geoid);

      // Read geoid data
      m_data->geoid.GeoidHeightBuffer = GeoidHeightBuffer;
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
