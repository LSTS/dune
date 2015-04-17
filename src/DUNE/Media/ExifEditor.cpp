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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Renato Caldas                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/Media/ExifEditor.hpp>

// ISO C++ 98 headers.
#include <iterator>
#include <stdexcept>

namespace DUNE
{
  namespace Media
  {
    //! Construct a ExifEditor object.
    ExifEditor::ExifEditor(void) :
      m_bfr(NULL),
      m_bfr_len(0),
      m_exif_pos(0),
      m_exif_len(0),
      m_exif_data(NULL)
    { }

    //! Destroy a ExifEditor object.
    ExifEditor::~ExifEditor(void)
    {
      if (m_exif_data)
        delete m_exif_data;
    }

    // Set the JPEG data (fix the name)
    void
    ExifEditor::setBuffer(uint8_t* bfr, std::size_t length)
    {
      std::size_t idx = 0;

      // Check for the SOI marker
      if ((bfr[idx] << 8 | bfr[idx + 1]) != c_mk_soi)
        throw std::runtime_error(DTR("buffer does not contain a valid jpeg image"));
      idx += 2;

      while (true)
      {
        uint16_t marker = (bfr[idx] << 8 | bfr[idx + 1]);
        std::size_t size = (bfr[idx + 2] << 8 | bfr[idx + 3]);

        if (marker == c_mk_app + 1)
        {
          // Found the App1 (Exif) marker
          m_exif_pos = idx;
          m_exif_len = size + 2;
          break;
        }
        else if ((marker & 0xFFF0) != c_mk_app || marker != c_mk_com)
        {
          // Assume no exif info is present
          m_exif_pos = idx;
          m_exif_len = 0;
          break;
        }
        else
        {
          // Skip App and COM segments until App1 is found
          idx += size + 2;
        }
      }

      // Save buffer information
      m_bfr = bfr;
      m_bfr_len = length;

      // Load exif data structure
      if (m_exif_data)
        delete m_exif_data;

      if (m_exif_pos > 0)
        m_exif_data = new ExifData(m_bfr + m_exif_pos, m_exif_len);
      else
        m_exif_data = new ExifData;
    }

    ExifData*
    ExifEditor::getExifData(void)
    {
      if (m_exif_data)
        return m_exif_data;
      else
        throw std::runtime_error(DTR("jpeg buffer not set"));
    }

    void
    ExifEditor::outputToStream(std::ostream& stream)
    {
      // Write the SOI
      stream.put((uint8_t)(c_mk_soi >> 8));
      stream.put((uint8_t)(c_mk_soi & 0xFF));

      // Get exif data vector
      std::vector<uint8_t> exif = m_exif_data->getRawData();

      // Write JPEG marker and segment length
      stream.put((uint8_t)(c_mk_app >> 8));
      stream.put((uint8_t)((c_mk_app & 0xFF) + 1));
      unsigned len = exif.size() + 2;
      if (len > 0xFFFF)
        throw std::runtime_error(DTR("exif data exceeds maximum segment size"));
      stream.put((uint8_t)(len >> 8));
      stream.put((uint8_t)(len & 0xFF));

      // Write exif raw data
      std::ostreambuf_iterator<char> oit (stream);
      std::copy(exif.begin(), exif.end(), oit);

      // Write the remaining jpeg file contents
      std::size_t skip = m_exif_pos + m_exif_len;
      stream.write((const char*)(m_bfr + skip), m_bfr_len - skip);
    }
  }
}
