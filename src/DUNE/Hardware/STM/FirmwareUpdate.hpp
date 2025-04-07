//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_STM_FIRMWARE_UPDATE_HPP_INCLUDED_
#define DUNE_HARDWARE_STM_FIRMWARE_UPDATE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IO/Handle.hpp>
#include <DUNE/Time/Counter.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace STM
    {
      enum FirmwareStates
      {
        FIRMWARE_READ_BLOCK = 0,
        FIRMWARE_SEND_BLOCK,
        FIRMWARE_WAIT_ACK,
        FIRMWARE_IDLE
      };

      class FirmwareUpdate
      {
      public:
        FirmwareUpdate(IO::Handle* handle, std::string ibin);

        virtual
        ~FirmwareUpdate(void);

        size_t
        getFirmwareSize(void);

        bool
        isFirmwareFileOpen(void);

        bool
        finishUpdate(void);

      private:
        //! I/O handle.
        IO::Handle* m_handle;
        //! Firmware File path.
        std::string m_ibin;
        //! File Object
        FILE *file;
        //! Size of firmware file
        size_t m_firmware_len;
        //! Flag to control state of firmware file
        bool m_firmware_file_open;
        //! Counter of bytes read/send
        uint32_t m_size_send;
        //! State of firmware machine state
        uint8_t m_state;
        //! Len of block read;
        uint16_t m_block_len;
        //! Buffer to save data in
        uint8_t m_buffer_rx[128];
        //! Buffer to storage reply
        uint8_t m_buf_reply[128];
        //! Counter of data reply
        uint16_t m_reply_cnt;
        //! Buffer to storage frame read
        uint8_t* m_buf_bin;
        //! Buffer frame to send
        uint8_t m_block_frame[256];

        bool
        openFile(void);

        void
        sendFrameBlock(uint8_t* frame, uint16_t size_frame);

        bool
        readReply(double timeout);

        uint8_t
        computeCRC(uint8_t* data, size_t size);
      };
    }
  }
}

#endif
