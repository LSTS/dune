//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
