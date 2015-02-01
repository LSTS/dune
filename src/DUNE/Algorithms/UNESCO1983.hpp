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
