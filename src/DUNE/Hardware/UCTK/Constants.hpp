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
      enum PacketIds
      {
        PKT_ID_ERR = 0xf0,
        PKT_ID_NAME,
        PKT_ID_VERSION,
        PKT_ID_RESET,
        PKT_ID_BOOT,
        PKT_ID_BOOT_UPGRADE_START,
        PKT_ID_BOOT_UPGRADE_END,
        PKT_ID_BOOT_FLASH_FILL,
        PKT_ID_BOOT_FLASH_WRITE,
        PKT_ID_BOOT_FLASH_INFO
      };

      //! Synchronization number.
      static const uint8_t c_sync = 0x2C;
      //! XOR checksum OR mask.
      static const uint8_t c_csum_mask = 0x80;
      //! Maximum size of message payload in bytes.
      static const unsigned c_max_payload = 96;
      //! Header size.
      static const unsigned c_header_size = 3;
      //! Footer size.
      static const unsigned c_footer_size = 1;
      //! Framing overhead in bytes.
      static const unsigned c_frame_overhead = c_header_size + c_footer_size;
      //! Default baud rate.
      static const unsigned c_baud_default = 115200;
      //! Bootloader baud rate.
      static const unsigned c_baud_boot = 19200;
    }
  }
}

#endif
