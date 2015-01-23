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

using namespace DUNE::FileSystem;
using namespace DUNE::Math;
using namespace DUNE::Time;

// WMM 2015 headers.
#include <wmm2015/GeomagnetismHeader.h>
#include <wmm2015/EGM9615.h>

namespace DUNE
{
  namespace Coordinates
  {
    struct WMMData
    {
      MAGtype_Geoid geoid;
      MAGtype_Ellipsoid ellip;
      MAGtype_MagneticModel* mm;
    };

    WMM::WMM(void)
    {
      init(Path::applicationFile().dirname() / "../etc");
    }

    WMM::WMM(const Path& root)
    {
      init(root);
    }

    void
    WMM::init(const Path& root)
    {
      m_data = new WMMData;
      Path wmmfile(root / "wmm/WMM.COF");

      if (!wmmfile.isFile())
        throw std::runtime_error(wmmfile.str() + " not found");

      // Initialization
      MAG_robustReadMagModels(wmmfile.c_str(), m_data->mm, 1);

      int n_max = m_data->mm->nMax;

      if (n_max < m_data->mm->nMax)
        n_max = m_data->mm->nMax;

      int num_terms = ((n_max + 1) * (n_max + 2) / 2);
      MAGtype_MagneticModel* tmp = MAG_AllocateModelMemory(num_terms);
      MAG_SetDefaults(&m_data->ellip, &m_data->geoid);

      // Read geoid data
      /* Set EGM96 Geoid parameters */
      m_data->geoid.GeoidHeightBuffer = GeoidHeightBuffer;
      m_data->geoid.Geoid_Initialized = 1;

      // Adjust magnetic model according to date
      char dummy[100];
      BrokenDown now;
      MAGtype_Date date;
      date.Year = now.year;
      date.Month = now.month;
      date.Day = now.day;
      MAG_DateToYear(&date, dummy);

      MAG_TimelyModifyMagneticModel(date, m_data->mm, tmp);
      MAG_FreeMagneticModelMemory(tmp);
    }

    WMM::~WMM(void)
    {
      MAG_FreeMagneticModelMemory(m_data->mm);
      std::free(m_data->geoid.GeoidHeightBuffer);
      delete m_data;
    }

    double
    WMM::height(double lat, double lon)
    {
      double h = 0;

      MAG_GetGeoidHeight(Angles::degrees(lat), Angles::degrees(lon), &h, &m_data->geoid);

      return h;
    }

    double
    WMM::declination(double lat, double lon, double h)
    {
      MAGtype_CoordGeodetic geo;
      MAGtype_CoordSpherical sph;
      MAGtype_GeoMagneticElements gme;

      geo.phi = Angles::degrees(lat);
      geo.lambda = Angles::degrees(lon);
      geo.UseGeoid = false;
      geo.HeightAboveEllipsoid = h * 1e-03;

      MAG_GeodeticToSpherical(m_data->ellip, geo, &sph);
      MAG_Geomag(m_data->ellip, sph, geo, m_data->mm, &gme);
      MAG_CalculateGridVariation(geo, &gme);

      return Angles::radians(gme.Decl);
    }
  }
}
