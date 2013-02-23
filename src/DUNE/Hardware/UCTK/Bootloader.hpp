//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Bootloader.hpp 12703 2013-01-24 02:54:34Z rasm                   $:*
//***************************************************************************

#ifndef DUNE_HARDWARE_UCTK_BOOTLOADER_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_BOOTLOADER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/Hardware/IntelHEX.hpp>
#include <DUNE/Hardware/UCTK/Interface.hpp>
#include <DUNE/Hardware/UCTK/Messages.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      class Bootloader
      {
      public:
        Bootloader(Interface* itf);

        void
        program(const std::string& file_name);

      private:
        Interface* m_itf;
        bool m_verbose;
        FirmwareName m_fwm_name;
        FirmwareVersion m_fwm_version;
        BootFlashInfo m_flash_info;

        void
        enter(void);

        void
        fillPage(unsigned page, const std::vector<uint8_t>& contents);

        void
        fillPageChunk(unsigned page);

        void
        print(const char* format, ...) const;

        void
        title(const char* str) const;

        void
        reset(void);
      };
    }
  }
}

#endif
