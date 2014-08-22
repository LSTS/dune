//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/Plans/SpeedConversion.hpp>

namespace DUNE
{
  namespace Plans
  {
    float
    SpeedConversion::toMPS(const SpeedModel& sm, float value, uint8_t units)
    {
      return convert(sm, value, (IMC::SpeedUnits)units, IMC::SUNITS_METERS_PS);
    }

    float
    SpeedConversion::toRPM(const SpeedModel& sm, float value, uint8_t units)
    {
      return convert(sm, value, (IMC::SpeedUnits)units, IMC::SUNITS_RPM);
    }

    float
    SpeedConversion::toAct(const SpeedModel& sm, float value, uint8_t units)
    {
      return convert(sm, value, (IMC::SpeedUnits)units, IMC::SUNITS_PERCENTAGE);
    }

    void
    SpeedConversion::validate(const SpeedModel& sm)
    {
      unsigned psize = sm.values[IMC::SUNITS_PERCENTAGE].size();
      unsigned rsize = sm.values[IMC::SUNITS_RPM].size();
      unsigned msize = sm.values[IMC::SUNITS_METERS_PS].size();

      if (psize != rsize || psize != msize)
        throw std::runtime_error("speed model sizes do not match");

      if (!psize)
        throw std::runtime_error("speed model values are empty");
    }

    float
    SpeedConversion::convert(const SpeedModel& sm, float value,
                             uint8_t from, uint8_t to)
    {
      if (value < 0.0)
        return -1.0;

      if (!sm.values[0].size())
        return -1.0;

      // make simple conversion
      if (sm.values[0].size() == 1)
        return value * sm.values[to][0] / sm.values[from][0];

      switch (from)
      {
        case IMC::SUNITS_PERCENTAGE:
        case IMC::SUNITS_RPM:
        case IMC::SUNITS_METERS_PS:
          {
            if (from == to)
              return value;

            return Math::piecewiseLI(sm.values[to] , sm.values[from], value);
          }
        default:
          return -1.0;
      }
    }
  }
}
