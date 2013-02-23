//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_ALGORITHMS_UNESCO1983_HPP_INCLUDED_
#define DUNE_ALGORITHMS_UNESCO1983_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM UNESCO1983;

    //! Collection of algorithms for calculating fundamental
    //! properties of seawater. All equations are described in the
    //! UNESCO handbook 'Algorithms for computation of fundamental
    //! properties of seawater' (UNESCO 1983)
    class UNESCO1983
    {
    public:
      //! Compute depth.
      //! @param pressure (bar).
      //! @param latitude (rad).
      //! @param del geopotential anomaly (m).
      //! @return depth (m).
      static double
      computeDepth(double pressure, double latitude, double del);

      //! Compute salinity.
      //! @param conductivity (S/m).
      //! @param pressure (bar).
      //! @param temperature (ºC).
      //! @return salinity (PSU) or a negative number if the
      //! computation is not reliable.
      static double
      computeSalinity(double conductivity, double pressure, double temperature);

      //! Compute sound speed.
      //! @param salinity (PSU)
      //! @param pressure (bar).
      //! @param temperature (ºC).
      //! @return sound speed (m/s).
      static double
      computeSoundSpeed(double salinity, double pressure, double temperature);
    };
  }
}

#endif
