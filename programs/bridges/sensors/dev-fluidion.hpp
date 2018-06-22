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

#ifndef BRIDGES_SENSORS_DEVICES_FLUIDION_HPP
#define BRIDGES_SENSORS_DEVICES_FLUIDION_HPP

#include <DUNE/DUNE.hpp>

#include "base.hpp"

//! Fluidion's ping command.
static const char* c_fld_ping = "#PING;";
//! Fluidion's sample command.
static const char* c_fld_sample = "#TAKE SAMPLE";
//! Fluidion's drain command.
static const char* c_fld_drain = "#PREFILL;";
//! Fluidion's no bottle reply.
static const char* c_fld_no_bot = "NO AVAILABLE BOTTLE;";
//! Maximum number of bottles.
static const size_t c_bottles = 8;

enum FluidionPing
{
  FP_NS = 0,
  FP_TS = 1,
  FP_TP = 2,
  FP_FW = 3,
  FP_SN = 4,
  FP_TOTAL = 5
};

class DevFluidion: public Sensor
{
public:
  DevFluidion(unsigned lane, SibBus* sib, unsigned baud):
    Sensor(lane, sib, baud),
    m_samples(-1),
    m_sample_time(-1),
    m_drain_time(-1)
  {
    // fill all acquisition zones.
    for (size_t i = 0; i < c_bottles; ++i)
      m_used[i] = false;
  }

  void
  onUpdateParameters(void)
  {
    // fill all depth zones.
    for (size_t i = 0; i < c_bottles; ++i)
    {
      std::string str = DUNE::Utils::String::str("bottle.%d.", i + 1);
      getParameter(str + "depth", "-1.0", m_depths[i]);
    }
  }

  bool
  onSetup(void)
  {
    if (m_sib == NULL)
      return false;

    ping();
    return true;
  }

  void
  trigger(void)
  {
    // fill all acquisition zones.
    for (size_t i = 0; i < c_bottles; ++i)
    {
      // already asked.
      if (m_used[i])
        continue;

      // not defined.
      if (m_depths[i] < 0)
        continue;

      // let's take sample.
      if (m_depth > m_depths[i])
      {
        m_used[i] = true;
        sample();
      }
    }
  }

  //! Get status.
  void
  ping(void)
  {
    sendCommand(c_fld_ping);
  }

  //! Take sample.
  void
  sample(void)
  {
    DUNE::Time::BrokenDown bdt;
    sendCommand(DUNE::Utils::String::str("%s %02u%02u%02u;", c_fld_sample, bdt.hour, bdt.minutes, bdt.seconds));
  }

  //! Drain system.
  void
  drain(void)
  {
    sendCommand(c_fld_drain);
  }

  bool
  parse(uint8_t byte)
  {
    switch (m_sm)
    {
      case (BS_SYNC):
        if (byte != '#')
          break;

        Sensor::m_data_index = 0;
        m_data[Sensor::m_data_index++] = byte;
        m_sm = BS_TERM;
        break;
      case (BS_TERM):
        m_data[Sensor::m_data_index++] = byte;

        if (byte == '\n' || byte == '\r')
        {
          decode();
          m_sm = BS_SYNC;
          return true;
        }
        break;
    }

    return false;
  }

private:
  void
  onDecode(const std::vector<std::string> fields)
  {
    if (fields.size() == FP_TOTAL)
    {
      DUNE::castLexical(fields[FP_NS], m_samples);
      DUNE::castLexical(fields[FP_TS], m_sample_time);
      DUNE::castLexical(fields[FP_TP], m_drain_time);
      setActive(true);
    }
    else
    {
      if (fields[0] == c_fld_no_bot)
      {
        std::cerr << "fluidion: no bottles available" << std::endl;
        setActive(true);
      }
    }
  }

  //! Depth of areas to fill bottles.
  float m_depths[c_bottles];
  //! Bottles sampled.
  bool m_used[c_bottles];
  //! Number of samples taken.
  int m_samples;
  //! Time to sample.
  int m_sample_time;
  //! Time to drain.
  int m_drain_time;
};

#endif
