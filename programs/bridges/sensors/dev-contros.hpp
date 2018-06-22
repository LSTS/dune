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

#ifndef BRIDGES_SENSORS_DEVICES_CONTROS_HPP
#define BRIDGES_SENSORS_DEVICES_CONTROS_HPP

#include <DUNE/DUNE.hpp>
#include "base.hpp"

//! Sensor reading index.
enum ControsReadingIndex
{
  CRI_NUMBER = 0,
  CRI_TEMP_RAW = 1,
  CRI_TEMP_VAL = 2,
  CRI_SIG_INT = 3,
  CRI_AMB_LIGHT = 4,
  CRI_DPHI = 5,
  CRI_pO2 = 6,
  CRI_cO2 = 7,
  CRI_OXY_SAT = 8,
  CRI_TOTAL = 9
};

//! Contros probe types.
static const char* c_contros_hdr[] =
{
  "O2_NUMBER",
  "O2_TEMPERATURE_RAW",
  "O2_TEMPERATURE_VAL",
  "O2_SIGNAL_INTENS",
  "O2_AMBIENT_LIGHT",
  "O2_DPHI",
  "O2_pO2",
  "O2_cO2",
  "O2_OXYGEN_SAT"
};

//! Command not acknowledged.
static const char* c_contros_nack = "UNKNOWN";
//! Contros data identifier.
static const char* c_contros_id = "CODT1";
//! Start of header reply.
static const size_t c_contros_start = 6;

class DevContros: public Sensor
{
public:
  DevContros(unsigned lane, SibBus* sib, unsigned baud):
    Sensor(lane, sib, baud)
  { }

  bool
  onSetup(void)
  {
    if (m_sib == NULL)
      return false;

    flush();

    // set sampling rate.
    unsigned rate = std::max(0u, (unsigned)m_sampling_rate);
    if (sendAndRepeat(DUNE::Utils::String::str("$COSLP,0,0,W,1,%u\r\n", rate),
                      DUNE::Utils::String::str("$COSLP,0,0,D,1,%u\r\n", rate),
                      c_contros_nack, 1.0, 2))
      return true;

    m_sib->powerCycle(1.0);
    DUNE::Time::Delay::wait(1.0);

    if (sendAndRepeat(DUNE::Utils::String::str("$COSLP,0,0,W,1,%u\r\n", rate),
                      DUNE::Utils::String::str("$COSLP,0,0,D,1,%u\r\n", rate),
                      c_contros_nack, 1.0, 2))
      return true;

    return false;
  }

  std::string
  getHeader(void) const
  {
    std::string str;
    for (size_t i = 0; i < CRI_TOTAL; i++)
      str += DUNE::Utils::String::str("%s; ", c_contros_hdr[i]);

    return str;
  }

  size_t
  getHeaderSize(void) const
  {
    return CRI_TOTAL;
  }

  std::string
  getData(void)
  {
    if (m_log.size() == 0)
      throw std::runtime_error(DTR("no data to be retrieved"));

    std::string str;
    for (size_t i = 0; i < CRI_TOTAL; i++)
      str += m_log.back().at(i) + "; ";

    return str;
  }

private:
  void
  onDecode(const std::vector<std::string> fields)
  {
    // does not match size.
    if (fields.size() != c_contros_start + CRI_TOTAL)
      return;

    if (fields[0] != c_contros_id)
      return;

    Reading r(DUNE::Time::Clock::getSinceEpoch());

    float t;
    for (size_t i = 0; i < CRI_TOTAL; i++)
    {
      // check if can be cast as float, otherwise, do not decode.
      if (!DUNE::castLexical(fields[i + c_contros_start], t))
        return;

      r.add(fields[i + c_contros_start]);
    }

    m_log.push(r);
    setNewData();
  }
};

#endif
