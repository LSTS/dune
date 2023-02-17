//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
#include <DUNE/Plans/SpeedModel.hpp>

namespace DUNE
{
  namespace Plans
  {
    SpeedModel::SpeedModel(Parsers::Config* config)
    {
      const std::string sec = "General";
      config->get(sec, "Speed Conversion -- Actuation",
                  "", m_models[IMC::SUNITS_PERCENTAGE]);

      config->get(sec, "Speed Conversion -- RPM",
                  "", m_models[IMC::SUNITS_RPM]);

      config->get(sec, "Speed Conversion -- MPS",
                  "", m_models[IMC::SUNITS_METERS_PS]);

      config->get(sec, "Time Of Arrival Factor",
                  "5.0", m_time_factor);

      config->get(sec, "Maximum Absolute Speed",
                  "1.6", m_max_speed);
    }

    SpeedModel::SpeedModel(const std::vector<float>& act,
                           const std::vector<float>& rpm,
                           const std::vector<float>& mps,
                           float time_factor,
                           float max_speed)
    {
      m_models[IMC::SUNITS_PERCENTAGE] = act;
      m_models[IMC::SUNITS_METERS_PS] = rpm;
      m_models[IMC::SUNITS_RPM] = mps;
      m_time_factor = time_factor;
      m_max_speed = max_speed;
    }

    float
    SpeedModel::toMPS(float value, uint8_t units) const
    {
      float speed = convert(value, (IMC::SpeedUnits)units, IMC::SUNITS_METERS_PS);
      return std::min(speed, m_max_speed);
    }

    float
    SpeedModel::toRPM(float value, uint8_t units) const
    {
      return convert(value, (IMC::SpeedUnits)units, IMC::SUNITS_RPM);
    }

    float
    SpeedModel::toAct(float value, uint8_t units) const
    {
      return convert(value, (IMC::SpeedUnits)units, IMC::SUNITS_PERCENTAGE);
    }

    void
    SpeedModel::validate(void) const
    {
      unsigned psize = m_models[IMC::SUNITS_PERCENTAGE].size();
      unsigned rsize = m_models[IMC::SUNITS_RPM].size();
      unsigned msize = m_models[IMC::SUNITS_METERS_PS].size();

      if (psize != rsize || psize != msize)
        throw std::runtime_error("speed model sizes do not match");

      if (!psize)
        throw std::runtime_error("speed model values are empty");
    }

    float
    SpeedModel::convert(float value, uint8_t from, uint8_t to) const
    {
      if (value < 0.0)
        return -1.0;

      if (!m_models[0].size())
        return -1.0;

      // make simple conversion
      if (m_models[0].size() == 1)
        return value * m_models[to][0] / m_models[from][0];

      switch (from)
      {
        case IMC::SUNITS_PERCENTAGE:
        case IMC::SUNITS_RPM:
        case IMC::SUNITS_METERS_PS:
          {
            if (from == to)
              return value;

            return Math::piecewiseLI(m_models[to] , m_models[from], value);
          }
        default:
          return -1.0;
      }
    }
  }
}
