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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_EDGETECH_2205_SUBSYSTEM_DATA_HPP_INCLUDED_
#define SENSORS_EDGETECH_2205_SUBSYSTEM_DATA_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "EstimatedStateList.hpp"

namespace Sensors
{
  namespace Edgetech2205
  {
    using DUNE_NAMESPACES;

    //! Subsystem specific data used to rewrite the header of each ping.
    struct SubsystemData
    {
      //! Ping count.
      unsigned ping_count;
      //! Ping number.
      uint32_t ping_number;
      //! Seconds since Unix Epoch from local CPU.
      int64_t msec_cpu;
      //! Seconds since Unix Epoch from sidescan CPU.
      uint32_t time_epoch;
      //! Milliseconds today.
      uint32_t time_msec_today;
      //! Brokendown time.
      Time::BrokenDown time_bdt;
      //! Navigation data validity.
      uint16_t validity;
      //! Latitude.
      int32_t latitude;
      //! Latitude in radian.
      double latitude_rad;
      //! Longitude.
      int32_t longitude;
      //! Longitude in radian;
      double longitude_rad;
      //! Course.
      int16_t course;
      //! Speed.
      int16_t speed;
      //! Heading.
      uint16_t heading;
      //! Roll.
      int16_t roll;
      //! Pitch.
      int16_t pitch;
      //! Altitude.
      int32_t altitude;
      //! Depth.
      int32_t depth;
      //! Estimated state list.
      EstimatedStateList estates;
      //! True if subsystem is active.
      bool active;

      SubsystemData(void)
      {
        clear();
      }

      void
      clear(void)
      {
        estates.clear();
        ping_number = 0;
        ping_count = 0;
        msec_cpu = 0;
        time_epoch = 0,
        time_msec_today = 0;
        validity = 0;
        latitude = 0;
        longitude = 0;
        latitude_rad = 0;
        longitude_rad = 0;
        course = 0;
        speed = 0;
        heading = 0;
        roll = 0;
        pitch = 0;
        altitude = 0;
        depth = 0;
        active = false;
      }
    };
  }
}

#endif
