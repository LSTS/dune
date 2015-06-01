//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda.        *
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

#ifndef SENSORS_MICROSTRAIN_MIP_CONSTANTS_HPP_INCLUDED_
#define SENSORS_MICROSTRAIN_MIP_CONSTANTS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace Sensors
{
  namespace MicrostrainMIP
  {
    //! Number of axes.
    static const uint8_t c_axes_count = 3;
    //! Synchronization byte #0.
    static const uint8_t c_sync0 = 0x75;
    //! Synchronization byte #1.
    static const uint8_t c_sync1 = 0x65;

    //! Command sets.
    enum CommandSet
    {
      //! Base command set.
      CMD_SET_BASE = 0x01,
      //! 3DM command set.
      CMD_SET_3DM = 0x0C,
      //! System command set.
      CMD_SET_SYS = 0x7F
    };

    //! Base command set.
    enum BaseCommand
    {
      //! Set to Idle.
      CMD_BASE_SET_TO_IDLE = 0x02,
      //! Device Information.
      CMD_BASE_GET_DEV_INFO = 0x03,
      //! AHRS message format.
      CMD_3DM_MSG_FORMAT = 0x08,
      //! Enable/disable continuous data stream.
      CMD_3DM_CONT_STREAM = 0x11,
      //! AHRS Hard Iron Offset.
      CMD_3DM_HARD_IRON_OFFSET = 0x3A
    };

    enum DataDescriptor
    {
      //! Scaled Acceleration Vector.
      DD_SCALED_ACCL_VEC = 0x04,
      //! Scaled Gyro Vector.
      DD_SCALED_GYRO_VEC = 0x05,
      //! Scaled Magnetometer Vector.
      DD_SCALED_MAGN_VEC = 0x06,
      //! Orientation Matrix.
      DD_ORIENTATION_MATRIX = 0x09,
      //! Internal Timestamp.
      DD_INTERNAL_TIME = 0x0E
    };
  }
}

#endif
