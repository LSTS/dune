//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Renato Caldas                                                    *
//***************************************************************************

#ifndef TRANSPORTS_SUNRISE_CONVERSIONS_HPP_INCLUDED_
#define TRANSPORTS_SUNRISE_CONVERSIONS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "SSC/Factory.hpp"

namespace Transports
{
  namespace SUNSET
  {
    using DUNE_NAMESPACES;

    ZUnits
    zUnitsToSSC(uint8_t zu)
    {
      switch (zu)
      {
        case IMC::Z_DEPTH:
          return DEPTH;
        case IMC::Z_ALTITUDE:
          return ALTITUDE;
        default:
          throw InvalidValue();
      };
    }

    IMC::ZUnits
    zUnitsToIMC(ZUnits zu)
    {
      switch (zu)
      {
        case DEPTH:
          return IMC::Z_DEPTH;
        case ALTITUDE:
          return IMC::Z_ALTITUDE;
        default:
          throw InvalidValue();
      };
    }

    SpeedUnits
    speedUnitsToSSC(uint8_t su)
    {
      switch (su)
      {
        case IMC::SUNITS_METERS_PS:
          return METER_PS;
        case IMC::SUNITS_RPM:
          return RPM;
        case IMC::SUNITS_PERCENTAGE:
          return PERCENTAGE;
        default:
          throw InvalidValue();
      };
    }

    IMC::SpeedUnits
    speedUnitsToIMC(SpeedUnits su)
    {
      switch (su)
      {
        case METER_PS:
          return IMC::SUNITS_METERS_PS;
        case RPM:
          return IMC::SUNITS_RPM;
        case PERCENTAGE:
          return IMC::SUNITS_PERCENTAGE;
        default:
          throw InvalidValue();
      };
    }

    IMC::Maneuver*
    newManeuverIMC(Maneuver* m)
    {
      std::string mtype = m->getTypeName();
      if (mtype == "Goto")
      {
        Goto* gcmd = static_cast<Goto*>(m);

        IMC::Goto* gimc = new IMC::Goto();
        gimc->lat = gcmd->latitude;
        gimc->lon = gcmd->longitude;
        gimc->z = gcmd->z_reference.z_reference;
        gimc->z_units = zUnitsToIMC(gcmd->z_reference.z_units);
        gimc->speed = gcmd->speed_reference.speed_reference;
        gimc->speed_units = speedUnitsToIMC(gcmd->speed_reference.speed_units);
        gimc->timeout = gcmd->timeout;

        return gimc;
      }
      else if (mtype == "StationKeeping")
      {
        StationKeeping* skcmd = static_cast<StationKeeping*>(m);

        IMC::StationKeeping* skimc = new IMC::StationKeeping();
        skimc->lat = skcmd->latitude;
        skimc->lon = skcmd->longitude;
        skimc->z = skcmd->z_reference.z_reference;
        skimc->z_units = zUnitsToIMC(skcmd->z_reference.z_units);
        skimc->speed = skcmd->speed_reference.speed_reference;
        skimc->speed_units = speedUnitsToIMC(skcmd->speed_reference.speed_units);
        skimc->duration = skcmd->duration;
        skimc->radius = skcmd->radius;

        return skimc;
      }
      else
        throw InvalidValue();
    }

    Maneuver*
    newManeuverSSC(IMC::Maneuver* m)
    {
      if (m->getId() == IMC::Goto::getIdStatic())
      {
        IMC::Goto* gimc = static_cast<IMC::Goto*>(m);

        Goto* gcmd = new Goto();
        gcmd->latitude = gimc->lat;
        gcmd->longitude = gimc->lon;
        gcmd->z_reference.z_reference = gimc->z;
        gcmd->z_reference.z_units = zUnitsToSSC(gimc->z_units);
        gcmd->speed_reference.speed_reference = gimc->speed;
        gcmd->speed_reference.speed_units = speedUnitsToSSC(gimc->speed_units);
        gcmd->timeout = gimc->timeout;

        return gcmd;
      }
      else if (m->getId() == IMC::StationKeeping::getIdStatic())
      {
        IMC::StationKeeping* skimc = static_cast<IMC::StationKeeping*>(m);

        StationKeeping* skcmd = new StationKeeping();
        skcmd->latitude = skimc->lat;
        skcmd->longitude = skimc->lon;
        skcmd->z_reference.z_reference = skimc->z;
        skcmd->z_reference.z_units = zUnitsToSSC(skimc->z_units);
        skcmd->speed_reference.speed_reference = skimc->speed;
        skcmd->speed_reference.speed_units = speedUnitsToSSC(skimc->speed_units);
        skcmd->duration = skimc->duration;
        skcmd->radius = skimc->radius;

        return skcmd;
      }
      else
        throw InvalidValue();
    }
  }
}

#endif
