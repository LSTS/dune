//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact info@oceanscan-mst.com                               *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef BRIDGES_PMC_FRAME_NAV_HPP
#define BRIDGES_PMC_FRAME_NAV_HPP

#include <DUNE/DUNE.hpp>

#include "../sensors/rules.hpp"

//! Minimum vertical speed to consider vehicle is up or down.
static const int c_min_zspeed = 5;

//! Glider frames.
class FrameNav
{
public:
  FrameNav(const std::vector<std::string> fields)
  {
    unsigned mode = 0;
    DUNE::castLexical(fields[SF_MODE], mode);
    m_controlled = mode > 0 ? true : false;

    DUNE::castLexical(fields[SF_ZB], m_depth_bottom);
    DUNE::castLexical(fields[SF_ZT], m_depth_top);
    DUNE::castLexical(fields[SF_AL], m_altitude);
    DUNE::castLexical(fields[SF_RATE], m_rate);

    if (!m_controlled)
      return;

    DUNE::castLexical(fields[SF_HEADING], m_heading);
    DUNE::castLexical(fields[SF_PU], m_pitch_up);
    DUNE::castLexical(fields[SF_PD], m_pitch_down);
    DUNE::castLexical(fields[SF_BU], m_buoy_up);
    DUNE::castLexical(fields[SF_BD], m_buoy_down);
  }

private:
  enum StateFields
  {
    SF_NAV = 0,
    SF_MODE = 1,
    SF_HEADING = 2,
    SF_PU = 3,
    SF_PD = 4,
    SF_BU = 5,
    SF_BD = 6,
    SF_ZB = 7,
    SF_ZT = 8,
    SF_AL = 9,
    SF_RATE = 10
  };

  //! Mode may be 'Primitive' or 'Controlled'.
  bool m_controlled;
  //! Primitive mode: Rudder position in degree:
  //! - [1000; 1045]: Rudder angle with offset of 1000
  //!   (ie: 1040 = +40deg; 1000 = 0 deg),
  //! - [-1000; -1045]: Rudder angle with offset of 1000
  //!   (ie: 1040 = +40deg; -1000 = 0 deg),
  //!
  //! Controlled mode: Heading set point [0-359] deg or -9999
  //! if no heading defined, rudder is aligned on vehicle axis.
  int m_heading;
  //! Primitive mode: Moving mass position in mm:
  //! - [1000; 1200]: Linear actuator relative position based on 1000
  //!   (ie: 1100=+100mm).
  //!
  //! Controlled mode: Pitch Up angle [0; +90] deg (0 = horizontal).
  int m_pitch_up;
  //! Primitive mode: Moving mass position in mm:
  //! - [-1000; -1200]: Linear actuator relative position based on -1000
  //!   (ie: -1099 = -99mm).
  //!
  //! Controlled mode: Pitch Up angle [-90; 0] deg (0 = horizontal).
  int m_pitch_down;
  //! Primitive mode: None
  //! Controlled mode: Buoyancy Up velocity in cm/s (<0 when up): [0; -100] cm/s
  int m_buoy_up;
  //! Primitive mode: None
  //! Controlled mode: Buoyancy Down velocity in cm/s (>0 when down): [0; +100] cm/s
  int m_buoy_down;
  //! Bottom inflection depth in meter:
  //! - DXP < 2500 m
  //! - UXP < 5000 m
  unsigned m_depth_bottom;
  //! Top inflection depth in meter.
  unsigned m_depth_top;
  //! Altitude in meter. If > 0 inflection driven by altitude.
  unsigned m_altitude;
  //! Surfacing rate [1-1000] : 2 = surfacing every two yos.
  unsigned m_rate;
};

#endif
