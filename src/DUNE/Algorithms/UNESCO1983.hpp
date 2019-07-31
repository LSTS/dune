//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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

      //! Compute conductivity.
      //! @param salinity (PSU).
      //! @param pressure (bar).
      //! @param temperature (ºC).
      //! @return conductivity (S/m) or a negative number if the
      //! computation is not reliable.
      static double
      computeConductivity(double s, double p, double t);

      //! Compute sound speed.
      //! @param salinity (PSU)
      //! @param pressure (bar).
      //! @param temperature (ºC).
      //! @return sound speed (m/s).
      static double
      computeSoundSpeed(double salinity, double pressure, double temperature);

    private:
      //! Salinity polinomial as defined in:
      //! 'Algorithms for computation of fundamental
      //! properties of seawater' (UNESCO 1983)
      //! @param rt sqrt of temperature ratio.
      //! @param dt (ºC) corrected temperature (t-15).
      //! @return salinity (PSU).
      static double
      salinity_poli(double rt, double dt)
      {
        return (((((2.7081 * rt - 7.0261) * rt + 14.0941) * rt + 25.3851) * rt - 0.1692)
                           * rt + 0.0080 + (dt / (1.0 + 0.0162 * dt))
                           * (((((-0.0144 * rt + 0.0636) * rt - 0.0375) * rt - 0.0066) * rt - 0.0056)
                              * rt + 0.0005));
      }

      //! Salinity polinomial derivative:
      //! 'Algorithms for computation of fundamental
      //! properties of seawater' (UNESCO 1983)
      //! @param rt sqrt of temperature ratio.
      //! @param dt (ºC) corrected temperature (t-15).
      //! @return polinomial derivative with respect to rt.
      static double
      salinity_poli_deriv(double rt, double dt)
      {
        return (((((13.5405 * rt - 28.1044) * rt + 42.2823) * rt + 50.7702) * rt - 0.1692)
                  + (dt / (1.0 + 0.0162 * dt))
                   * ((((-0.072 * rt + 0.2544) * rt - 0.1125) * rt - 0.0132) * rt - 0.0056));
      }

    };
  }
}

#endif
