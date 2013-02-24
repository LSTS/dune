//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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

// DUNE headers.
#include <DUNE/Algorithms/CRC8.hpp>
#include <DUNE/Hardware/UCTK/Bootloader.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      Bootloader::Bootloader(Interface* itf):
        m_itf(itf),
        m_verbose(true)
      {
        enter();

        title("Device");

        if (!m_itf->request(m_fwm_name))
          throw std::runtime_error("failed to retrieve firmware name");

        print("%-20s: %s\n", "Firmware Name", m_fwm_name.name.c_str());

        if (!m_itf->request(m_fwm_version))
          throw std::runtime_error("failed to retrieve firmware version");

        print("%-20s: %u.%u.%u\n", "Firmware Version",
              m_fwm_version.major, m_fwm_version.minor, m_fwm_version.patch);

        if (!m_itf->request(m_flash_info))
          throw std::runtime_error("failed to retrieve flash info");

        print("%-20s: %u\n", "Flash Size", m_flash_info.flash_size);
        print("%-20s: %u\n", "Flash Page Size", m_flash_info.page_size);
      }

      void
      Bootloader::enter(void)
      {
        if (!m_itf->request(m_fwm_name))
          throw std::runtime_error("failed to retrieve firmware name");

        print("%-20s: %s\n", "Firmware Name", m_fwm_name.name.c_str());
      }

      void
      Bootloader::program(const std::string& file_name)
      {
        title("Firmare");

        // Load iHEX file.
        IntelHEX ihex(file_name, m_flash_info.page_size);

        // Compute program size.
        unsigned size = ihex.getTable().size() * m_flash_info.page_size;
        print("%-20s: %u\n", "Intel HEX - Size", size);

        // Compute program CRC.
        Algorithms::CRC8 crc(0x07);
        const IntelHEX::PageTable& table = ihex.getTable();
        IntelHEX::PageTable::const_iterator itr = table.begin();
        for (; itr != table.end(); ++itr)
          crc.putArray(&itr->second[0], itr->second.size());
        print("%-20s: 0x%02X\n", "Intel HEX - CRC8", crc.get());

        title("Programming");

        // Start upgrade procedure.
        BootUpgradeStart start(size, crc.get());
        if (!m_itf->command(start))
          throw std::runtime_error("failed start upgrade procedure");

        // Program pages.
        IntelHEX::PageTable::const_iterator pitr = table.begin();
        for (; pitr != table.end(); ++pitr)
        {
          fillPage(pitr->first, pitr->second);
        }

        // End upgrade procedure.
        BootUpgradeStart end;
        if (!m_itf->command(start))
          throw std::runtime_error("failed to end upgrade procedure");

        reset();

        print("\nSuccess!\n\n");
      }

      void
      Bootloader::fillPage(unsigned page, const std::vector<uint8_t>& contents)
      {
        BootFlashFill msg;
        unsigned chunk_size = sizeof(msg.contents);
        unsigned chunk_count = contents.size() / chunk_size;

        print("Page %u: ", page);

        for (unsigned i = 0; i < chunk_count; ++i)
        {
          msg.offset = i * chunk_size;
          std::memcpy(msg.contents, &contents[msg.offset], chunk_size);
          if (!m_itf->command(msg))
            throw std::runtime_error("failed to fill page chunk");

          print(".");
        }

        BootFlashWrite flash_write(page * m_flash_info.page_size);
        if (!m_itf->command(flash_write))
          throw std::runtime_error("failed to write flash page");

        print(" OK\n");
      }

      void
      Bootloader::print(const char* format, ...) const
      {
        if (!m_verbose)
          return;

        std::va_list ap;
        va_start(ap, format);
        std::vfprintf(stderr, format, ap);
        va_end(ap);
      }

      void
      Bootloader::title(const char* str) const
      {
        if (!m_verbose)
          return;

        std::fprintf(stderr, "\n%s\n", str);
        std::fprintf(stderr, "------------------------------\n");
      }

      void
      Bootloader::reset(void)
      {
        print("\nResetting Device...");

        Reset msg;
        if (!m_itf->command(msg))
          throw std::runtime_error("failed to reset device");

        print(" OK\n");
      }
    }
  }
}
