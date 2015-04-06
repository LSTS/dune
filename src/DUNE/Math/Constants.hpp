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

#ifndef DUNE_MATH_CONSTANTS_HPP_INCLUDED_
#define DUNE_MATH_CONSTANTS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Math
  {
    //! The mathematical constant PI.
    static const fp64_t c_pi = 3.14159265358979323846;
    //! The mathematical constant PI multiplied by 2.
    static const fp64_t c_two_pi = 2 * c_pi;
    //! The mathematical constant PI divided by 2.
    static const fp64_t c_half_pi = 1.57079632679489661923;
    //! The mathematical constant PI divided by 4.
    static const fp64_t c_quarter_pi = 0.78539816339744830962;
    //! Degrees per radian.
    static const fp64_t c_degrees_per_radian = 180.0 / c_pi;
    //! Golden ratio.
    static const fp64_t c_golden_ratio = 1.61803398874989490253;
    //! The gravity constant.
    static const fp64_t c_gravity = 9.80665;
    //! Water density constant at 5ºC of temperature (Kg/m³).
    static const uint16_t c_water_density = 1000;
    //! Sea water density (Kg/m³).
    static const uint16_t c_seawater_density = 1025;
    //! Mean angular velocity of the Earth's rotation (rad/s).
    static const fp64_t c_earth_rotation = 7292115e-11;
    //! Sea level standard atmospheric pressure (Pa).
    static const float c_sea_level_pressure = 101325.0f;
    // Conversion between bar and pascal
    static const float c_pascal_per_bar = 100000.0f;
  }
}

#endif
