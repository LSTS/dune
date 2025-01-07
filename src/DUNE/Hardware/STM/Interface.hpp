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

#ifndef DUNE_HARDWARE_STM_INTERFACE_HPP_INCLUDED_
#define DUNE_HARDWARE_STM_INTERFACE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IO/Handle.hpp>
#include <DUNE/Time/Counter.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace STM
    {
      class Interface
      {
      public:
        Interface(IO::Handle* handle, std::string ibin);

        virtual
        ~Interface(void);

        void
        startFirmwareUpdate(void);

        bool
        checkSystemType(void);

        void
        checkSystemVersion(void);

        bool
        checkFirmwareFile(void);

        void
        computeCRC(void);

        bool
        syncBoot(bool boot_update);

        void
        sendCommand(const char* cmd);

      private:
        //! I/O handle.
        IO::Handle* m_handle;
        //! Firmware File path.
        std::string m_ibin;
        //! Buffer to save data received
        uint8_t m_buffer_rx[128];
        //! Buffer to save data string received
        uint8_t m_frame_rx[128];
        //! Storage bytes received
        unsigned m_frame_rx_count;
        //! System type
        std::string m_system_type;
        //! Buffer to storage frames blocks to send
        uint8_t m_block_frame[512];

        void
        print(const char* format, ...);

        void
        title(const char* str);

        uint8_t
        computeCRC(uint8_t* data, size_t size);

        bool
        readReply(double timeout);
      };
    }
  }
}

#endif
