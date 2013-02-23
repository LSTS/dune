//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
        throw std::runtime_error(Utils::String::str("failed to open file: %s",
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
          throw std::runtime_error("invalid checksum");

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
