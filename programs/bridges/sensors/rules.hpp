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

#ifndef BRIDGES_SENSORS_RULES_HPP
#define BRIDGES_SENSORS_RULES_HPP

#include <DUNE/DUNE.hpp>

//! Number of acquisition rules.
static const size_t c_acq_rules = 5;

//! Up and down enumeration.
enum UpDownRule
{
  UDR_DOWN = 0,
  UDR_ELSE = 1,
  UDR_UP   = 2
};

//! Sensor acquisition rules.
//! *******************************************************************************
//! Sensors configuration (refer to manual for more information)
//! Define configuration parameters for each sensors (example below)
//!
//! cfg.WarmUpPeriod = 1   # time (seconds) to wait before acquiring
//! cfg.phaseswitch = 0    # 0=sensor always ON (default); 1=sensor switches on/off at zone change
//! cfg.Chl_SF = 0.0121    # calibration coefficients if applicable
//!
//! Define acquisition zones for each sensors
//! First acquisition zone (1)
//!
//!  acq.1.depth = 350      # acquire until depth (meters)
//!  acq.1.period = 0       # acquisition period (seconds); 0=as fast as possible
//!  acq.1.phase = 111      # X/X/X =going down/other/going up; 0=don't read; 1=read.
//!  acq.1.yo = 1           # acquire every N yos
//!
//! Second acquisition zone (2)
//!
//!  acq.2.depth = 750
//!  acq.2.period = 0
//!  acq.2.phase = 000      # don't acquire, sensor will be off if phaseswitch = 1
//!  acq.2.yo = 1
//!
//! At most five acquisition zones
//! If no acquisition zone is defined, sensors will NOT be recorded
//! *******************************************************************************
class Rules
{
public:
  //! Constructor.
  //! @param[in] cfg configuration file.
  //! @param[in] section section header.
  Rules(DUNE::Parsers::Config& cfg, const std::string& section):
    m_config(&cfg),
    m_section(section)
  {
    // fill all acquisition zones.
    for (size_t i = 0; i < c_acq_rules; ++i)
    {
      m_last_yo[i] = 0;

      std::string str = DUNE::Utils::String::str("acq.%d.", i + 1);
      m_config->get(m_section, str + "depth", "-1.0", m_zones[i].depth);
      m_config->get(m_section, str + "period", "0", m_zones[i].period);
      m_config->get(m_section, str + "phase", "000", m_zones[i].phase);
      m_config->get(m_section, str + "yo", "1", m_zones[i].yo);
    }
  }

  //! Enable sensor sampling according with acquisition zones rules.
  //! @param[in] depth system depth.
  //! @param[in] state system climbing, descending or else.
  //! @param[in] yo system's yo cycle.
  //! @return sampling rate. Negative value denotes sensor is off. Zero means sensor is free-running.
  float
  enable(float depth, UpDownRule state, unsigned yo)
  {
    for (size_t i = 0; i < c_acq_rules; ++i)
    {
      // if our depth is beyond layer i, then check previous layer.
      // this assumes each layer has a depth defined greater than
      // previous' layer.
      if (depth < m_zones[i].depth)
        return check(depth, state, yo, i);
    }

    return -1.0;
  }

  //! Retrieve the value of an option in a given section and perform type conversion.
  //! @param opt option.
  //! @param def default value.
  //! @param var destination variable.
  template <typename Type>
  void
  get(const std::string& opt, const std::string& def, Type& var)
  {
    m_config->get(m_section, opt, def, var);
  }

private:
  //! Acquisition Rules Parameters.
  struct AcquisitionRules
  {
    float depth;
    float period;
    std::string phase;
    unsigned yo;
  };

  //! Check if sensor should be on or off.
  //! @param[in] depth system depth.
  //! @param[in] state system climbing, descending or else.
  //! @param[in] yo system's yo cycle.
  //! @return sampling rate. Negative value denotes sensor is off. Zero means sensor is free-running.
  float
  check(float depth, UpDownRule state, unsigned yo, size_t index)
  {
    // make sure depth is within layer's bound.
    if (depth < m_zones[index].depth)
    {
      // check up/down/else rule.
      if (enable(index, state))
      {
        // equal to last yo, so use it.
        if (yo == m_last_yo[index])
          return m_zones[index].period;

        // not equal to last yo, so check yo interval,
        // or, if yo's cycle counter has restarted.
        if (yo >= m_last_yo[index] + m_zones[index].yo || yo < m_last_yo[index])
        {
          m_last_yo[index] = yo;
          return m_zones[index].period;
        }
      }
    }

    return -1.0;
  }

  //! Enable sensor.
  //! @param[in] rule acquisition rule.
  //! @param[in] state system climbing, descending or else.
  //! @return true to enable sensor, false otherwise.
  bool
  enable(AcquisitionRules& rule, UpDownRule state) const
  {
    return rule.phase[state] == '1';
  }

  //! Enable sensor.
  //! @param[in] index acquisition rule index.
  //! @param[in] state system climbing, descending or else.
  //! @return true to enable sensor, false otherwise.
  bool
  enable(size_t index, UpDownRule state) const
  {
    return m_zones[index].phase[state] == '1';
  }

  //! Acquisition rules/zones.
  AcquisitionRules m_zones[c_acq_rules];
  //! Last yo with acquisition.
  unsigned m_last_yo[c_acq_rules];
  //! Configuration file.
  DUNE::Parsers::Config* m_config;
  //! Configuration header.
  std::string m_section;
};

#endif
