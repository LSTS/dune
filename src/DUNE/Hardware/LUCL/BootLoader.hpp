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

#ifndef DUNE_HARDWARE_LUCL_BOOT_LOADER_HPP_INCLUDED_
#define DUNE_HARDWARE_LUCL_BOOT_LOADER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Hardware/LUCL/Protocol.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace LUCL
    {
      // Export DLL Symbol.
      class DUNE_DLL_SYM BootLoader;

      class BootLoader
      {
      public:
        BootLoader(Protocol& proto, bool verbose = 0, int baudrate = 0);

        void
        flash(const std::string& ihex);

      private:
        //! Data size.
        static const unsigned c_data_size = 14;
        //! Chunk size.
        static const unsigned c_chunk_size = c_data_size - 2;
        //! LUCL Protocol handler.
        Protocol& m_proto;
        //! LUCL protocol baud rate (if specified)
        int m_baud;
        //! Page size of device's flash.
        unsigned m_page_size;
        //! Firmware name.
        std::string m_name;
        //! Command.
        Command m_cmd;
        //! Page map.
        std::map<unsigned, std::vector<uint8_t> > m_page_map;
        //! True to print out messages.
        bool m_verbose;

        bool
        waitForCommand(CommandType type, Command& cmd, double timeout = 1.0);

        bool
        waitForCommandCode(uint8_t code, Command& cmd, double timeout = 1.0);

        void
        open(void);

        bool
        enter(void);

        bool
        leave(void);

        bool
        requestName(void);

        bool
        requestReset(void);

        bool
        requestHalt(void);

        bool
        requestBootJump(void);

        bool
        requestPageSize(void);

        bool
        fillPage(const uint8_t* data, unsigned data_size);

        bool
        writePage(const uint8_t* data, unsigned data_size);

        bool
        startUpgrade(void);

        bool
        endUpgrade(void);

        void
        loadIHEX(const std::string& ihex);

        void
        print(const std::string& str, bool nl = true);
      };
    }
  }
}

#endif
