//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************

#ifndef DUNE_STATUS_CODES_HPP_INCLUDED_
#define DUNE_STATUS_CODES_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Status
  {
    //! Status codes.
    enum Code
    {
      //! Initializing.
      CODE_INIT = 0,
      //! Idle.
      CODE_IDLE = 1,
      //! Active.
      CODE_ACTIVE = 2,
      //! Input/output error.
      CODE_IO_ERROR = 3,
      //! Internal error.
      CODE_INTERNAL_ERROR = 4,
      //! CPU usage is too high.
      CODE_CPU_TOO_HIGH = 5,
      //! Fuel is running low.
      CODE_FUEL_LOW = 6,
      //! Fuel level estimation is not reliable.
      CODE_FUEL_EST_UNRELIABLE = 7,
      //! Fuel reserve.
      CODE_FUEL_RESERVE = 8,
      //! Calibrating.
      CODE_CALIBRATING = 9,
      //! Calibrated.
      CODE_CALIBRATED = 10,
      //! Aligning.
      CODE_ALIGNING = 11,
      //! Aligned.
      CODE_ALIGNED = 12,
      //! Powering down.
      CODE_POWER_DOWN = 13,
      //! Communication error.
      CODE_COM_ERROR = 14,
      //! Synchronized.
      CODE_SYNCHED = 15,
      //! Synchronizing.
      CODE_SYNCING = 16,
      //! Not synchronized.
      CODE_NOT_SYNCHED = 17,
      //! Waiting for GPS fix.
      CODE_WAIT_GPS_FIX = 18,
      //! Waiting for configuration of LBL beacons.
      CODE_WAIT_LBL_CFG = 19,
      //! Waiting for solution to converge.
      CODE_WAIT_CONVERGE = 20,
      //! Missing data.
      CODE_MISSING_DATA = 21,
      //! Invalid checksum.
      CODE_INVALID_CHECKSUM = 22,
      //! Invalid version.
      CODE_INVALID_VERSION = 23,
      //! Active but without bottom lock.
      CODE_NO_BOTTOM_LOCK = 24
    };
  }
}

#endif
