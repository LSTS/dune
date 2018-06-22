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

#ifndef BRIDGES_PMC_FRAME_STATUS_HPP
#define BRIDGES_PMC_FRAME_STATUS_HPP

#include <DUNE/DUNE.hpp>

//! Glider frames.
class FrameStatus
{
public:
  //! Constructor.
  FrameStatus(const std::vector<std::string> fields)
  {
    // cast all values.
    m_id = fields[SF_ID];
    m_date = fields[SF_DATE];
    m_time = fields[SF_TIME];
    m_lat = fields[SF_LAT];
    m_lon = fields[SF_LON];

    DUNE::castLexical(fields[SF_MSN], m_mission);
    DUNE::castLexical(fields[SF_CYCLE], m_cycle);
    DUNE::castLexical(fields[SF_STATUS], m_status);
    DUNE::castLexical(fields[SF_BATTERIES], m_voltage);
  }

  //! Get vehicle name.
  //! @return vehicle name.
  std::string
  getVehicle(void) const
  {
    return m_id;
  }

  //! Get current mission id.
  //! @return mission id.
  unsigned
  getMission(void) const
  {
    return m_mission;
  }

  //! Get current cycle number (cycle = yo).
  //! @return current cycle number.
  unsigned
  getCycle(void) const
  {
    return m_cycle;
  }

  //! Get vehicle latitude.
  //! @return vehicle latitude.
  std::string
  getLatitude(void) const
  {
    return m_lat;
  }

  //! Get vehicle longitude.
  //! @return vehicle longitude.
  std::string
  getLongitude(void) const
  {
    return m_lon;
  }

private:
  enum StateFields
  {
    SF_MRS = 0,
    SF_ID = 1,
    SF_MSN = 2,
    SF_CYCLE = 3,
    SF_STATUS = 4,
    SF_BATTERIES = 5,
    SF_DATE = 6,
    SF_TIME = 7,
    SF_LAT = 8,
    SF_LON = 9
  };

  //! String identifying vehicle id.
  std::string m_id;
  //! Integer identifying actual mission id.
  unsigned m_mission;
  //! Integer identifying cycle number (Cycle = yo).
  unsigned m_cycle;
  //! Vehicle status mask (see Status Code appendix).
  unsigned m_status;
  //! Batteries voltage in V*10 : 291 = 29.1V.
  unsigned m_voltage;
  //! Date stamp (ddmmyy).
  std::string m_date;
  //! Time stamp (hhmmss).
  std::string m_time;
  //! Latitude (ddmm.mmm). Positive if North, < 0 if South.
  std::string m_lat;
  //! Longitude (ddmm.mmm) Positive if East, < 0 if West.
  std::string m_lon;
};

#endif
