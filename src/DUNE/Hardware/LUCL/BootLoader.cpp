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

// ISO C++ 98 headers.
#include <iostream>
#include <iomanip>
#include <fstream>

// DUNE headers.
#include <DUNE/Casts.hpp>
#include <DUNE/Time/Delay.hpp>
#include <DUNE/Time/Clock.hpp>
#include <DUNE/Hardware/LUCL/BootLoader.hpp>
#include <DUNE/Utils/String.hpp>

//! Command: halt boot process.
#define CMD_HALT           0x01
//! Command: start flash upgrade.
#define CMD_UPGRADE_START  0x02
//! Command: end flash upgrade.
#define CMD_UPGRADE_END    0x03
//! Command: get flash page size.
#define CMD_PAGE_SIZE      0x04
//! Command: fill flash page.
#define CMD_PAGE_FILL      0x05
//! Command: write flash page.
#define CMD_PAGE_WRITE     0x06

//! Required payload of CMD_UPGRADE_START
#define CMD_UPGRADE_START_BYTE0 0xa0
#define CMD_UPGRADE_START_BYTE1 0x5f

//! Required payload of CMD_HALT
#define CMD_HALT_BYTE0          0xb1
#define CMD_HALT_BYTE1          0x4e

#define INSIST(call, msg, fail)                 \
  {                                             \
    bool ok = false;                            \
    double start = Clock::get();                \
    while ((Clock::get() - start) <= 10)        \
    {                                           \
      if (call)                                 \
      {                                         \
        ok = true;                              \
        break;                                  \
      }                                         \
    }                                           \
                                                \
    if (!ok && fail)                            \
      throw std::runtime_error(msg);            \
  }

#define DO(call, msg)        INSIST(call, msg, false)
#define DO_OR_DIE(call, msg) INSIST(call, msg, true)

// Poll delay.
static const double c_poll_delay = 0.01;
static const double c_reset_delay = 0.2;

using namespace DUNE::Time;
using namespace DUNE::Utils;

namespace DUNE
{
  namespace Hardware
  {
    namespace LUCL
    {
      BootLoader::BootLoader(Protocol& proto, bool verbose, int baudrate):
        m_proto(proto),
        m_baud(baudrate),
        m_page_size(0),
        m_verbose(verbose)
      {
        DO_OR_DIE(enter(), "start bootloader");
      }

      bool
      BootLoader::waitForCommand(CommandType type, Command& cmd, double timeout)
      {
        unsigned retries = (unsigned)(timeout / c_poll_delay);

        while (retries-- > 0)
        {
          CommandType rv = m_proto.consumeData(cmd);
          if (rv == type)
            return true;

          Delay::wait(c_poll_delay);
        }

        return false;
      }

      bool
      BootLoader::waitForCommandCode(uint8_t code, Command& cmd, double timeout)
      {
        unsigned retries = (unsigned)(timeout / c_poll_delay);

        while (retries-- > 0)
        {
          if (m_proto.consumeData(cmd) == CommandTypeNormal)
          {
            if (cmd.command.code == code)
              return true;
          }

          Delay::wait(c_poll_delay);
        }

        return false;
      }

      bool
      BootLoader::enter(void)
      {
        open();
        DO(requestName(), "request firmware name");
        if (m_name == "LUCB")
        {
          if (requestHalt())
            return true;
        }

        DO(requestBootJump(), "request jump to bootloader");
        requestReset();
        return false;
      }

      bool
      BootLoader::leave(void)
      {
        requestReset();

        // Wait for device reset
        Delay::wait(c_reset_delay);

        open();
        DO(requestName(), "request firmware name");
        return (m_name != "LUCB");
      }

      void
      BootLoader::open(void)
      {
        print("* Opening device...");
        m_proto.open(m_baud);
      }

      bool
      BootLoader::requestName(void)
      {
        print("* Requesting firmware name...", false);
        m_name.clear();
        m_proto.requestName();
        if (waitForCommand(CommandTypeName, m_cmd))
        {
          m_name = m_cmd.name.data;
          print(String::str("OK [%s]", m_cmd.name.data));
          return true;
        }

        print("FAILED");
        return false;
      }

      bool
      BootLoader::requestBootJump(void)
      {
        print("* Requesting jump to bootloader...", false);
        m_proto.requestBootJump();
        if (waitForCommand(CommandTypeBootJump, m_cmd))
        {
          print("OK");
          return true;
        }

        print("FAILED");
        return false;
      }

      bool
      BootLoader::requestReset(void)
      {
        print("* Requesting device reset...", false);
        m_proto.requestReset();
        if (waitForCommand(CommandTypeReset, m_cmd))
        {
          print("OK");
          return true;
        }

        print("FAILED");
        return false;
      }

      bool
      BootLoader::requestHalt(void)
      {
        uint8_t data[] = {CMD_HALT_BYTE0, CMD_HALT_BYTE1};
        m_proto.sendCommand(CMD_HALT, data, sizeof(data));
        return waitForCommandCode(CMD_HALT, m_cmd);
      }

      bool
      BootLoader::requestPageSize(void)
      {
        print("* Requesting page size...", false);

        m_proto.sendCommand(CMD_PAGE_SIZE);
        if (waitForCommandCode(CMD_PAGE_SIZE, m_cmd))
        {
          m_page_size = m_cmd.command.data[0] << 8 | m_cmd.command.data[1];
          print(String::str("OK [%d]", m_page_size));
          return true;
        }

        print("FAILED");
        return false;
      }

      bool
      BootLoader::fillPage(const uint8_t* data, unsigned data_size)
      {
        print(".", false);
        m_proto.sendCommand(CMD_PAGE_FILL, data, data_size);
        return waitForCommandCode(CMD_PAGE_FILL, m_cmd);
      }

      bool
      BootLoader::writePage(const uint8_t* data, unsigned data_size)
      {
        m_proto.sendCommand(CMD_PAGE_WRITE, data, data_size);
        if (waitForCommandCode(CMD_PAGE_WRITE, m_cmd))
        {
          if (m_cmd.command.data[0] == 1)
          {
            print(" OK");
            return true;
          }
        }

        return false;
      }

      bool
      BootLoader::startUpgrade(void)
      {
        print("* Starting upgrade...");
        uint8_t data[] = {CMD_UPGRADE_START_BYTE0, CMD_UPGRADE_START_BYTE1};
        m_proto.sendCommand(CMD_UPGRADE_START, data, sizeof(data));
        return waitForCommandCode(CMD_UPGRADE_START, m_cmd);
      }

      bool
      BootLoader::endUpgrade(void)
      {
        print("* Finishing upgrade...");
        m_proto.sendCommand(CMD_UPGRADE_END);
        return waitForCommandCode(CMD_UPGRADE_END, m_cmd);
      }

      void
      BootLoader::flash(const std::string& ihex)
      {
        DO_OR_DIE(requestPageSize(), "request page size");

        loadIHEX(ihex);

        DO_OR_DIE(startUpgrade(), "start upgrade");

        unsigned chunks = (m_page_size / c_chunk_size) + ((m_page_size % c_chunk_size) > 0);

        std::map<unsigned, std::vector<uint8_t> >::iterator itr = m_page_map.begin();
        unsigned page_nr = 0;
        for (; itr != m_page_map.end(); ++itr)
        {
          print(String::str("* Updating page %d ", page_nr++), false);

          for (unsigned i = 0; i < chunks; ++i)
          {
            uint16_t offset = i * c_chunk_size;
            uint16_t remain = m_page_size - offset;
            uint16_t length = remain < c_chunk_size ? remain : c_chunk_size;
            uint8_t data[c_data_size] = {(uint8_t)(offset >> 8), (uint8_t)(offset)};
            std::memcpy(data + 2, &itr->second[offset], length);

            while (1)
            {
              if (fillPage(data, c_data_size))
                break;
            }
          }

          uint8_t page[] =
          {
            (uint8_t)(itr->first >> 8),
            (uint8_t)(itr->first)
          };

          DO_OR_DIE(writePage(page, sizeof(page)), "write page");
        }

        DO_OR_DIE(endUpgrade(), "finish upgrade");
        DO_OR_DIE(leave(), "leave bootloader");
      }

      void
      BootLoader::loadIHEX(const std::string& ihex)
      {
        print("* Loading iHEX file...");

        const unsigned line_length = 256;
        std::ifstream ifs(ihex.c_str());

        while (!ifs.eof())
        {
          char line[line_length];
          ifs.getline(line, line_length);

          // Check if line contains the start code.
          if (line[0] != ':')
            break;

          // Parse byte count.
          unsigned bcount;
          std::sscanf(line + 1, "%02X", &bcount);
          uint8_t ccsum = bcount;

          // Parse address.
          unsigned address;
          std::sscanf(line + 3, "%04X", &address);
          ccsum += (uint8_t)address + (uint8_t)(address >> 8);

          // Parse record type.
          unsigned rtype;
          std::sscanf(line + 7, "%02X", &rtype);
          ccsum += rtype;

          // Parse data.
          uint8_t data[line_length];
          for (unsigned i = 0; i < bcount; ++i)
          {
            unsigned tmp = 0;
            std::sscanf(line + 9 + i * 2, "%02X", &tmp);
            data[i] = (uint8_t)tmp;
            ccsum += data[i];
          }
          ccsum = (ccsum ^ 0xFF) + 0x01;

          // Parse and validate checksum.
          unsigned tmp = 0;
          std::sscanf(line + 9 + bcount * 2, "%02X", &tmp);
          uint8_t csum = (uint8_t)tmp;

          if (csum != ccsum)
          {
            throw std::runtime_error("checksum mismatch");
          }

          // Check for end of file record.
          if (rtype == 1)
            break;

          // Insert data into map.
          unsigned page = address / m_page_size;
          unsigned page_off = address % m_page_size;

          for (unsigned i = 0; i < bcount; ++i)
          {
            if (m_page_map.find(page) == m_page_map.end())
              m_page_map[page].resize(m_page_size, 0);

            m_page_map[page][page_off] = data[i];

            if (++page_off == m_page_size)
            {
              ++page;
              page_off = 0;
            }
          }
        }
      }

      void
      BootLoader::print(const std::string& str, bool nl)
      {
        if (m_verbose)
        {
          std::cerr << str;
          if (nl)
            std::cerr << std::endl;
        }
      }
    }
  }
}
