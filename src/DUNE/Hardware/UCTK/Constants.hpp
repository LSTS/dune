//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Constants.hpp 12703 2013-01-24 02:54:34Z rasm                    $:*
//***************************************************************************

#ifndef DUNE_HARDWARE_UCTK_CONSTANTS_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_CONSTANTS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      //! Synchronization number.
      static const uint8_t c_sync = 0x2C;
      //! XOR checksum OR mask.
      static const uint8_t c_csum_mask = 0x80;
      //! Maximum size of message payload in bytes.
      static const unsigned c_max_payload = 64;
      //! Framing overhead in bytes.
      static const unsigned c_frame_overhead = 4;
      //! Default baud rate.
      static const unsigned c_baud_default = 115200;
      //! Bootloader baud rate.
      static const unsigned c_baud_boot = 19200;
    }
  }
}

#endif
