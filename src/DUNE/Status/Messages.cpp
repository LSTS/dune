//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Messages.cpp 12746 2013-01-26 01:40:33Z rasm                     $:*
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Status/Messages.hpp>

namespace DUNE
{
  namespace Status
  {
    static const char* c_status_messages[23] =
    {
      DTR_RT("initializing"),
      DTR_RT("idle"),
      DTR_RT("active"),
      DTR_RT("input/output error"),
      DTR_RT("internal error"),
      DTR_RT("CPU usage is too high"),
      DTR_RT("fuel is running low"),
      DTR_RT("fuel level estimation is not reliable"),
      DTR_RT("fuel reserve"),
      DTR_RT("calibrating"),
      DTR_RT("calibrated"),
      DTR_RT("powering down"),
      DTR_RT("communication error"),
      DTR_RT("synchronized"),
      DTR_RT("synchronizing"),
      DTR_RT("not synchronized"),
      DTR_RT("waiting for GPS fix"),
      DTR_RT("waiting for configuration of LBL beacons"),
      DTR_RT("waiting for solution to converge"),
      DTR_RT("missing data"),
      DTR_RT("invalid checksum"),
      DTR_RT("invalid version"),
      DTR_RT("active but without bottom lock")
    };

    const char*
    getString(Code code)
    {
      return c_status_messages[code];
    }
  }
}
