//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
#include <DUNE/Hardware/Modem.hpp>
#include <DUNE/Hardware/Buttons.hpp>
#include <DUNE/Hardware/PPS.hpp>
#include <DUNE/Hardware/IntelHEX.hpp>
#include <DUNE/Hardware/UCTK/Constants.hpp>
#include <DUNE/Hardware/UCTK/Errors.hpp>
#include <DUNE/Hardware/UCTK/Parser.hpp>
#include <DUNE/Hardware/UCTK/Message.hpp>
#include <DUNE/Hardware/UCTK/Messages.hpp>
#include <DUNE/Hardware/UCTK/Factory.hpp>
#include <DUNE/Hardware/UCTK/InterfaceUART.hpp>
#include <DUNE/Hardware/UCTK/Bootloader.hpp>
#include <DUNE/Hardware/LUCL/Protocol.hpp>
#include <DUNE/Hardware/LUCL/ProtocolParser.hpp>
#include <DUNE/Hardware/LUCL/BootLoader.hpp>

#endif
