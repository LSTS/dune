//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Math/General.hpp>

// Local headers.
#include "Model.hpp"

namespace DUNE
{
  namespace Power
  {
    Model::Model(Parsers::Config* cfg)
    {
      std::string sec = "General";

      std::vector<std::string> hardware_parts;
      cfg->get(sec, "Hardware List", "", hardware_parts);
      processHardwareParts(hardware_parts, cfg);

      cfg->get(sec, "Power Model -- Conversion - Watt", "50.0", m_conv_watt);
      cfg->get(sec, "Power Model -- Conversion - RPM", "1000.0", m_conv_rpm);
      cfg->get(sec, "Battery Capacity", "700.0", m_capacity);
    }

    void
    Model::validate(void) const
    {
      if (!m_conv_watt.size() || !m_conv_rpm.size())
        throw std::runtime_error("power model has empty parameters");

      if (m_conv_watt.size() != m_conv_rpm.size())
        throw std::runtime_error("power model sizes do not match");
    }

    float
    Model::computeMotionEnergy(float rpm, float duration) const
    {
      if (rpm <= 0.0f || duration <= 0.0f)
        return 0.0;

      float power;

      if (m_conv_watt.size() == 1)
        power = rpm * m_conv_watt[0] / m_conv_rpm[0];
      else
        power = Math::piecewiseLI(m_conv_watt , m_conv_rpm, rpm);

      return toWh(power, duration);
    }

    float
    Model::computePayloadEnergy(const std::string& label, float duration) const
    {
      if (!m_payloads.size())
        return 0.0;

      std::map<std::string, float>::const_iterator itr;
      itr = m_payloads.find(label);
      if (itr == m_payloads.end())
        return 0.0;

      return toWh(itr->second, duration);
    }

    float
    Model::computeHotelEnergy(float duration) const
    {
      return toWh(m_power_hotel, duration);
    }

    float
    Model::computeIMUEnergy(float duration) const
    {
      return toWh(m_power_imu, duration);
    }

    void
    Model::processHardwareParts(const std::vector<std::string>& hardware_parts, Parsers::Config* cfg)
    {
      m_power_imu = 0;
      m_power_hotel = 0;
      m_power_payload = 0;
      m_payloads.clear();

      for (size_t i = 0; i < hardware_parts.size(); ++i)
      {
        std::vector<std::string> info;
        cfg->get("Hardware Parts", hardware_parts[i], "", info);
        if (info.size() != 7)
          throw std::runtime_error(Utils::String::str(DTR("invalid hardware part '%s'"), hardware_parts[i].c_str()));

        if (info[CFG_IDX_HOTEL] == "On")
          m_power_hotel += castLexical<float>(info[CFG_IDX_AVERAGE]);
        else if (info[CFG_IDX_HOTEL] == "Powersave")
          m_power_hotel += castLexical<float>(info[CFG_IDX_POWERSAVE]);

        if (info[CFG_IDX_PAYLOAD] == "On")
        {
          float value = castLexical<float>(info[CFG_IDX_AVERAGE]);
          std::pair<std::string, float> pl(info[CFG_IDX_ENTITY_LABEL], value);
          m_payloads.insert(pl);
          m_power_payload += value;
        }

        if (info[CFG_IDX_IMU] == "On")
          m_power_imu += castLexical<float>(info[CFG_IDX_AVERAGE]);
      }

      m_power_full = m_power_hotel + m_power_imu + m_power_payload;
    }
  }
}
