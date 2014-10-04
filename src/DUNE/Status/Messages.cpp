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
// Author: Ricardo Martins                                                  *
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
    static const char* c_status_messages[33] =
    {
      DTR_RT("initializing"),
      DTR_RT("idle"),
      DTR_RT("active"),
      DTR_RT("activating"),
      DTR_RT("deactivating"),
      DTR_RT("input/output error"),
      DTR_RT("internal error"),
      DTR_RT("CPU usage is too high"),
      DTR_RT("fuel is running low"),
      DTR_RT("fuel level estimation is not reliable"),
      DTR_RT("fuel reserve"),
      DTR_RT("calibrating"),
      DTR_RT("calibrated"),
      DTR_RT("not aligned"),
      DTR_RT("aligning"),
      DTR_RT("aligned"),
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
      DTR_RT("active but without bottom lock"),
      DTR_RT("no medium data: user must control device"),
      DTR_RT("active (no medium data: need user input)"),
      DTR_RT("idle (no medium data: need user input)"),
      DTR_RT("connecting"),
      DTR_RT("connected")
    };

    const char*
    getString(Code code)
    {
      return c_status_messages[code];
    }
  }
}
