//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
    //! Water density constant at 5ºC of temperature. (Kg/m³)
    static const uint16_t c_water_density = 1000;
    //! Mean angular velocity of the Earth's rotation (rad/s)
    static const fp64_t c_earth_rotation = 7292115e-11;
  }
}

#endif
