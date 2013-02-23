//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
