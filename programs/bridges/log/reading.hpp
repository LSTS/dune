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

#ifndef BRIDGES_LOG_READING_HPP
#define BRIDGES_LOG_READING_HPP

#include <DUNE/DUNE.hpp>

//! Sensor reading class. This structure should be able to handle
//! data from the device, already parsed and ready to be stored.
//! A single reading (single feedback from sensor) may contain
//! multiple sensor measurements (e.g: temperature, voltage).
class Reading
{
public:
  Reading(double tstamp):
    m_timestamp(tstamp)
  {
    m_data.clear();
    m_index = 0;
  }

  Reading(double tstamp, size_t size):
    m_timestamp(tstamp)
  {
    m_data.clear();
    m_data.resize(size);
    m_index = 0;
  }

  //! Reset data pointer.
  void
  reset(void)
  {
    m_index = 0;
  }

  //! Add new value.
  //! @param[in] value new data value.
  void
  add(std::string value)
  {
    m_data.push_back(value);
  }

  //! Incrementally pop value of data.
  //! @return data value.
  std::string
  pop(void)
  {
    if (m_index >= size())
      throw std::runtime_error(DTR("invalid index"));

    return m_data.at(m_index++);
  }

  //! Return value at index.
  //! @return data value.
  std::string
  at(size_t index)
  {
    if (index >= size())
      throw std::runtime_error(DTR("invalid index"));

    return m_data.at(index);
  }

  //! Set value at index.
  //! @param[in] value new value.
  std::string&
  operator()(size_t index)
  {
    if (index >= size())
      throw std::runtime_error(DTR("invalid index"));

    return m_data[index];
  }

  //! Get data container size.
  //! @return size of data container.
  size_t
  size(void) const
  {
    return m_data.size();
  }

  //! Data available
  //! @return true if data is available to be read, false otherwise.
  bool
  toRead(void) const
  {
    return m_index < size();
  }

  //! Get reading timestamp.
  //! @return reading timestamp.
  double
  getTime(void) const
  {
    return m_timestamp;
  }
private:
  //! Reading timestamp. This should refer to a single reading, or
  //! single packet return from the sensor.
  double m_timestamp;
  //! Data container.
  std::vector<std::string> m_data;
  //! Data pointer.
  unsigned m_index;
};

#endif
