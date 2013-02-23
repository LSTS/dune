//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Codes.hpp 12746 2013-01-26 01:40:33Z rasm                        $:*
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
      //! Powering down.
      CODE_POWER_DOWN = 11,
      //! Communication error.
      CODE_COM_ERROR = 12,
      //! Synchronized.
      CODE_SYNCHED = 13,
      //! Synchronizing.
      CODE_SYNCING = 14,
      //! Not synchronized.
      CODE_NOT_SYNCHED = 15,
      //! Waiting for GPS fix.
      CODE_WAIT_GPS_FIX = 16,
      //! Waiting for configuration of LBL beacons.
      CODE_WAIT_LBL_CFG = 17,
      //! Waiting for solution to converge.
      CODE_WAIT_CONVERGE = 18,
      //! Missing data.
      CODE_MISSING_DATA = 19,
      //! Invalid checksum.
      CODE_INVALID_CHECKSUM = 20,
      //! Invalid version.
      CODE_INVALID_VERSION = 21,
      //! Active but without bottom lock.
      CODE_NO_BOTTOM_LOCK = 22
    };
  }
}

#endif
