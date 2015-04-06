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
#include <cstring>
#include <fstream>
#include <cstdio>
#include <stdexcept>
#include <iomanip>

// DUNE headers.
#include <DUNE/Utils/String.hpp>
#include <DUNE/Algorithms/CRC8.hpp>
#include <DUNE/Hardware/IntelHEX.hpp>

namespace DUNE
{
  namespace Hardware
  {
    //! Maximum number of characters in one line.
    static const unsigned c_max_line_length = 256;
    static const unsigned c_bytes_per_line = 20;

    IntelHEX::IntelHEX(const std::string& file_name, unsigned page_size):
      m_file_name(file_name),
      m_page_size(page_size)
    {
      load();
    }

    void
    IntelHEX::load(void)
    {
      std::ifstream ifs(m_file_name.c_str());
      if (ifs.fail())
      {
        throw std::runtime_error(Utils::String::str("%s: %s", DTR("failed to open file"),
                                                    m_file_name.c_str()));
      }

      char line[c_max_line_length];
      uint8_t data[c_max_line_length];

      while (!ifs.eof())
      {
        ifs.getline(line, sizeof(line));

        // Check if line contains the start code.
        if (line[0] != ':')
          break;

        // Parse byte count.
        unsigned byte_count;
        std::sscanf(line + 1, "%02X", &byte_count);
        uint8_t ccsum = byte_count;

        // Parse address.
        unsigned address;
        std::sscanf(line + 3, "%04X", &address);
        ccsum += (uint8_t)address + (uint8_t)(address >> 8);

        // Parse record type.
        unsigned rec_type;
        std::sscanf(line + 7, "%02X", &rec_type);
        ccsum += rec_type;

        // Parse data.
        for (unsigned i = 0; i < byte_count; ++i)
        {
          unsigned tmp = 0;
          std::sscanf(line + 9 + i * 2, "%02X", &tmp);
          data[i] = (uint8_t)tmp;
          ccsum += data[i];
        }
        ccsum = (ccsum ^ 0xFF) + 0x01;

        // Parse and validate checksum.
        unsigned tmp = 0;
        std::sscanf(line + 9 + byte_count * 2, "%02X", &tmp);
        uint8_t csum = (uint8_t)tmp;

        if (csum != ccsum)
          throw std::runtime_error(DTR("invalid checksum"));

        // Check for end of file record.
        if (rec_type == 1)
          break;

        // Insert data into map.
        unsigned page = address / m_page_size;
        unsigned page_off = address % m_page_size;

        for (unsigned i = 0; i < byte_count; ++i)
        {
          if (m_page_table.find(page) == m_page_table.end())
            m_page_table[page].resize(m_page_size, 0);

          m_page_table[page][page_off] = data[i];

          if (++page_off == m_page_size)
          {
            ++page;
            page_off = 0;
          }
        }
      }
    }

    void
    IntelHEX::dump(std::ostream& os) const
    {
      os.fill('0');

      PageTable::const_iterator itr = m_page_table.begin();
      for (; itr != m_page_table.end(); ++itr)
      {
        os << "* Page " << std::dec << itr->first << std::endl;

        for (unsigned i = 0; i < itr->second.size(); ++i)
        {
          if ((i % c_bytes_per_line) == 0)
          {
            os << std::endl
               << std::setw(4)
               << std::setfill(' ')
               << std::dec << (i / c_bytes_per_line) * c_bytes_per_line
               << ":"
               << std::hex << std::setfill('0');
          }

          os << " " << std::setw(2) << (unsigned)itr->second[i];
        }

        os << std::endl << std::endl;
      }
    }
  }
}
