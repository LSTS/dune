//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_NAVIGATION_USBL_TOOLS_HPP_INCLUDED_
#define DUNE_NAVIGATION_USBL_TOOLS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! %UsblTools provides converter methods for IMC's USBL messages.
    //!
    //! @author José Braga.
    class UsblTools
    {
    public:
      static IMC::UsblFixExtended
      toFix(const IMC::UsblPositionExtended& usbl, const IMC::GpsFix& gps)
      {
        return toFix(usbl, gps.lat, gps.lon, gps.height, IMC::Z_HEIGHT);
      }

      static IMC::UsblFixExtended
      toFix(const IMC::UsblPositionExtended& usbl, const IMC::EstimatedState& state)
      {
        double lat, lon;
        Coordinates::toWGS84(state, lat, lon);
        return toFix(usbl, lat, lon, state.depth, IMC::Z_DEPTH);
      }

      static IMC::UsblFixExtended
      toFix(const IMC::UsblPositionExtended& usbl, double lat, double lon, float z, IMC::ZUnits z_units)
      {
        Coordinates::WGS84::displace(usbl.n, usbl.e, &lat, &lon);

        IMC::UsblFixExtended fix;
        fix.lat = lat;
        fix.lon = lon;
        fix.z_units = z_units;
        fix.accuracy = usbl.accuracy;

        if (z_units == IMC::Z_ALTITUDE)
          fix.z = z - usbl.d;
        else
          fix.z = z + usbl.d;

        return fix;
      }
    };
  }
}

#endif
