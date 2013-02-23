//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: General.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/Coordinates/General.hpp>
#include <DUNE/Coordinates/WGS84.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace Coordinates
  {
    void
    toWGS84(const IMC::EstimatedState& estate, double& lat, double& lon, double& hae)
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
      double hae = estate.height;

      toWGS84(estate, lat, lon, hae);
    }
  }
}
