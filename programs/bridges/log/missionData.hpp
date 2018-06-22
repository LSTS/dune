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

#ifndef BRIDGES_LOG_MISSION_DATA_HPP
#define BRIDGES_LOG_MISSION_DATA_HPP

#include <DUNE/DUNE.hpp>


//! Mission data empty header.
static const char* c_msn_empty = "; ; ; ; ; ; ; ; ";
//! Mission data header.
static const char* c_msn_hdr = "PLD_REALTIMECLOCK; NAV_RESOURCE; NAV_MISSION_ID; NAV_YO; "
                               "NAV_LATITUDE; NAV_LONGITUDE; NAV_DEPTH; NAV_ALT; ";

//! Logger's mission data. This class holds vehicle's mission status data.
class MissionData
{
public:
  //! Constructor.
  MissionData(void):
    m_resource("0"),
    m_id(0),
    m_yo(0),
    m_lat("0"),
    m_lon("0"),
    m_depth(0.0),
    m_altitude(-1.0),
    m_token(false),
    m_token_sub(false)
  { }

  //! Update mission state.
  void
  update(std::string r, unsigned i, unsigned y,
         std::string la, std::string lo, float d, float a)
  {
    m_resource = r;
    m_id = i;
    m_yo = y;
    m_lat = la;
    m_lon = lo;
    m_depth = d;
    m_altitude = a;
    m_token = true;
    m_token_sub = true;
  }

  //! Get mission data header.
  //! @return mission data header.
  std::string
  getHeader(void)
  {
    return c_msn_hdr;
  }

  //! Get mission data only if there's something new.
  //! @return new mission data or empty string.
  std::string
  getLatestData(void)
  {
    if (!m_token)
      return c_msn_empty;

    m_token = false;
    return getReading();
  }

  //! Get latest mission data.
  //! @return latest mission data.
  std::string
  getSubSampledData(void)
  {
    if (!m_token_sub)
      return c_msn_empty;

    m_token_sub = false;
    return getReading();

  }

  //! Checks if there's data to be read.
  //! @return true if there's data.
  bool
  hasData(void)
  {
    return m_token;
  }

  //! Checks if there's sub sampled data to be read.
  //! @return true if there's sub sampled data.
  bool
  hasSubSampledData(void)
  {
    return m_token_sub;
  }

private:
  //! Get last line of data.
  //! @return last line of data.
  std::string
  getReading(void)
  {
    return DUNE::Utils::String::str("%s; %d; %d; %s; %s; %.3f; %.1f; ",
                                    m_resource.c_str(), m_id, m_yo, m_lat.c_str(),
                                    m_lon.c_str(), m_depth, m_altitude);
  }

  //! Navigation resource.
  std::string m_resource;
  //! Mission ID.
  unsigned m_id;
  //! Mission Yo number.
  unsigned m_yo;
  //! System latitude.
  std::string m_lat;
  //! System longitude.
  std::string m_lon;
  //! System depth.
  float m_depth;
  //! System altitude.
  float m_altitude;
  //! Token that signals there's new state to be read.
  bool m_token;
  //! Token that signals there's sub sampled data to be read.
  bool m_token_sub;
};

#endif
