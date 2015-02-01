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

#ifndef DUNE_HARDWARE_HPP_INCLUDED_
#define DUNE_HARDWARE_HPP_INCLUDED_

namespace DUNE
{
  //! Low level hardware drivers.
  namespace Hardware
  { }
}

#include <DUNE/Hardware/SerialPort.hpp>
#include <DUNE/Hardware/I2C.hpp>
#include <DUNE/Hardware/IOPort.hpp>
#include <DUNE/Hardware/GPIO.hpp>
#include <DUNE/Hardware/Buttons.hpp>
#include <DUNE/Hardware/PPS.hpp>
#include <DUNE/Hardware/ESCC.hpp>
#include <DUNE/Hardware/IntelHEX.hpp>
#include <DUNE/Hardware/BasicModem.hpp>
#include <DUNE/Hardware/HayesModem.hpp>
#include <DUNE/Hardware/Exceptions.hpp>
#include <DUNE/Hardware/UCTK/Constants.hpp>
#include <DUNE/Hardware/UCTK/Errors.hpp>
#include <DUNE/Hardware/UCTK/Parser.hpp>
#include <DUNE/Hardware/UCTK/Bootloader.hpp>
#include <DUNE/Hardware/LUCL/Protocol.hpp>
#include <DUNE/Hardware/LUCL/ProtocolParser.hpp>
#include <DUNE/Hardware/LUCL/BootLoader.hpp>

#endif
