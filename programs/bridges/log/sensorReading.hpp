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

#ifndef BRIDGES_LOG_SENSOR_READING_HPP
#define BRIDGES_LOG_SENSOR_READING_HPP

#include <DUNE/DUNE.hpp>
#include "../sensors/base.hpp"

//! Logger's sensor reading. This class holds last sensor measurements for logger.
class SensorReading
{
public:
  //! Constructor.
  SensorReading(Sensor* s):
    m_sensor(s),
    m_token(false),
    m_token_sub(false)
  {
    m_header = m_sensor->getHeader();
    for (size_t i = 0; i < m_sensor->getHeaderSize(); ++i)
      m_empty += "; ";

    m_line = m_empty;
  }

  //! Update cycle to get new data.
  //! @return true if there's new data from the sensor.
  bool
  update(void)
  {
    if (!m_sensor->hasData())
      return false;

    m_line = m_sensor->getData();
    m_sensor->clear();
    m_token = true;
    m_token_sub = true;
    return true;
  }

  //! Get data header (should be constant).
  //! @return data header.
  std::string
  getHeader(void)
  {
    return m_header;
  };

  //! Get data only if there's something new to read.
  //! @return new line of data or empty string.
  std::string
  getLatestData(void)
  {
    if (!m_token)
      return m_empty;

    m_token = false;
    return getReading();
  }

  //! Get (subsampled) data only if there's something new to read.
  //! @return new line of data or empty string.
  std::string
  getSubSampledData(void)
  {
    if (!m_token_sub)
      return m_empty;

    m_token_sub = false;
    return getReading();
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
    return m_line;
  }

  //! Pointer to sensor.
  Sensor* const m_sensor;
  //! Token that signals there's new data to be read.
  bool m_token;
  //! Token that signals there's sub sampled data to be read.
  bool m_token_sub;
  //! Data header.
  std::string m_header;
  //! Data line.
  std::string m_line;
  //! Empty line.
  std::string m_empty;
};

#endif
