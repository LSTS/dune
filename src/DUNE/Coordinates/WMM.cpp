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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Eduardo Marques                                                  *
// Author: Pedro Vaz Teixeira                                               *
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

// WMM 2010 headers.
#include <wmm2010/WMMHeader.h>

namespace DUNE
{
  namespace Coordinates
  {
    static const int c_num_terms = ((WMM_MAX_MODEL_DEGREES + 1) * (WMM_MAX_MODEL_DEGREES + 2) / 2);

    struct WMMData
    {
      WMMtype_Geoid geoid;
      WMMtype_Ellipsoid ellip;
      WMMtype_MagneticModel* mm;
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
      Path egmfile(root / "wmm/egm9615.bin");
      Path wmmfile(root / "wmm/wmm.cof");

      if (!egmfile.isFile())
        throw std::runtime_error(egmfile.str() + " not found");

      if (!wmmfile.isFile())
        throw std::runtime_error(wmmfile.str() + " not found");

      // Initialization
      WMMtype_MagneticModel* tmp = WMM_AllocateModelMemory(c_num_terms);
      WMM_SetDefaults(&m_data->ellip, tmp, &m_data->geoid);

      // Read geoid data
      WMM_InitializeGeoid(egmfile.c_str(), &m_data->geoid);

      // Read magnetic model data
      WMM_readMagneticModel(wmmfile.c_str(), tmp);

      // Adjust magnetic model according to date
      char dummy[100];
      BrokenDown now;
      WMMtype_Date date;
      date.Year = now.year;
      date.Month = now.month;
      date.Day = now.day;
      WMM_DateToYear(&date, dummy);

      m_data->mm = WMM_AllocateModelMemory(c_num_terms);
      WMM_TimelyModifyMagneticModel(date, tmp, m_data->mm);
      WMM_FreeMagneticModelMemory(tmp);
    }

    WMM::~WMM(void)
    {
      WMM_FreeMagneticModelMemory(m_data->mm);
      std::free(m_data->geoid.GeoidHeightBuffer);
      delete m_data;
    }

    double
    WMM::height(double lat, double lon)
    {
      double h = 0;

      WMM_GetGeoidHeight(Angles::degrees(lat), Angles::degrees(lon), &h, &m_data->geoid);

      return h;
    }

    double
    WMM::declination(double lat, double lon, double h)
    {
      WMMtype_CoordGeodetic geo;
      WMMtype_CoordSpherical sph;
      WMMtype_GeoMagneticElements gme;

      geo.phi = Angles::degrees(lat);
      geo.lambda = Angles::degrees(lon);
      geo.UseGeoid = false;
      geo.HeightAboveEllipsoid = h * 1e-03;

      WMM_GeodeticToSpherical(m_data->ellip, geo, &sph);
      WMM_Geomag(m_data->ellip, sph, geo, m_data->mm, &gme);
      WMM_CalculateGridVariation(geo, &gme);

      return Angles::radians(gme.Decl);
    }
  }
}
