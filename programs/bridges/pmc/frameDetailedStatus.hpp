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

#ifndef BRIDGES_PMC_FRAME_DETAILED_STATUS_HPP
#define BRIDGES_PMC_FRAME_DETAILED_STATUS_HPP

#include <DUNE/DUNE.hpp>

//! Vehicle frames.
class FrameDetailedStatus
{
public:
  //! Constructor.
  FrameDetailedStatus(const std::vector<std::string> fields)
  {
    // cast all values.
    DUNE::castLexical(fields[SF_STATE], m_state);
    DUNE::castLexical(fields[SF_HEADING], m_heading);
    DUNE::castLexical(fields[SF_PITCH], m_pitch);
    DUNE::castLexical(fields[SF_ROLL], m_roll);
    DUNE::castLexical(fields[SF_DEPTH], m_depth);
    DUNE::castLexical(fields[SF_TEMP], m_temperature);
    DUNE::castLexical(fields[SF_VACCUM], m_pressure);
    DUNE::castLexical(fields[SF_LPOS], m_lpos);
    DUNE::castLexical(fields[SF_APOS], m_apos);
    DUNE::castLexical(fields[SF_BPOS], m_bpos);
  }

  //! Get vehicle heading.
  //! @return current system heading.
  float
  getHeading(void) const
  {
    return DUNE::Math::Angles::radians((float)m_heading);
  }

  //! Get vehicle pitch.
  //! @return current system pitch.
  float
  getPitch(void) const
  {
    return DUNE::Math::Angles::radians((float)m_pitch);
  }

  //! Get vehicle roll.
  //! @return current system roll.
  float
  getRoll(void) const
  {
    return DUNE::Math::Angles::radians((float)m_roll);
  }

  //! Get vehicle depth.
  //! @return current depth.
  float
  getDepth(void) const
  {
    return m_depth;
  }

  //! Get vehicle altitude
  //! @return current altitude.
  float
  getAltitude(void) const
  {
    // @todo altitude will be added in future version.
    return -1.0;
    //return m_altitude;
  }

private:
  enum StateFields
  {
    SF_DST = 0,
    SF_STATE = 1,
    SF_HEADING = 2,
    SF_PITCH = 3,
    SF_ROLL = 4,
    SF_DEPTH = 5,
    SF_WHAT = 6,
    SF_TEMP = 7,
    SF_VACCUM = 8,
    SF_LPOS = 9,
    SF_APOS = 10,
    SF_BPOS = 11
  };

  //! Current flying state (see vehicle state machine definition).Integer [100-200].
  unsigned m_state;
  //! Current vehicle heading in degree [0-360] deg.
  unsigned m_heading;
  //! Current pitch angle in degree [-90; 90] deg.
  int m_pitch;
  //! Current roll angle in degree [-180; 180] deg.
  int m_roll;
  //! Current depth in meter.
  float m_depth;
  //! Current altitude in meter.
  float m_altitude;
  //! Current internal temperature in degree Celsius.
  unsigned m_temperature;
  //! Current internal pressure in Pa.
  unsigned m_pressure;
  //! Current linear position in mm.
  int m_lpos;
  //! Current rudder position in degree.
  int m_apos;
  //! Current ballast position in ml.
  int m_bpos;
};

#endif
