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
#include <DUNE/Media/ExifData.hpp>

// ISO C++ 98 headers.
#include <cstddef>
#include <stdexcept>
#include <cstring>

// Exif headers.
#include <libexif/exif-data.h>
#include <libexif/exif-content.h>

namespace DUNE
{
  namespace Media
  {
    //! Construct an empty ExifData object.
    ExifData::ExifData(void) :
      m_exif_data(exif_data_new())
    { }

    //! Construct an ExifData object from existing data.
    ExifData::ExifData(uint8_t* bfr, std::size_t len) :
      m_exif_data(exif_data_new_from_data(bfr, len))
    { }

    //! Destroy a ExifData object.
    ExifData::~ExifData(void)
    {
      if (m_exif_data)
        exif_data_free(m_exif_data);
    }

    std::vector<uint8_t>
    ExifData::getRawData(void)
    {
      uint8_t* bfr;
      unsigned len;

      exif_data_fix(m_exif_data);
      exif_data_save_data(m_exif_data, &bfr, &len);
      if (!bfr)
        return std::vector<uint8_t>();

      std::vector<uint8_t> vec(bfr, bfr + len);
      delete[] bfr;
      return vec;
    }

    std::string
    ExifData::getComment(void)
    {
      ExifEntry* e = exif_content_get_entry(m_exif_data->ifd[EXIF_IFD_EXIF], exif_tag_table_get_tag(EXIF_TAG_USER_COMMENT));
      if (e == NULL)
        return std::string("");
      else
        return std::string((const char*)e->data + 8, (size_t)e->size - 8);
    }

    void
    ExifData::setComment(std::string comment)
    {
      const char ascii_header[] = "ASCII\0\0\0";
      ExifContent* ifd = m_exif_data->ifd[EXIF_IFD_EXIF];
      ExifTag tag = exif_tag_table_get_tag(EXIF_TAG_USER_COMMENT);

      ExifEntry* e = exif_content_get_entry(ifd, tag);
      if (e != NULL)
      {
        // Remove existing tag
        exif_content_remove_entry(ifd, e);
      }

      ExifMem* mem = exif_mem_new_default();

      // Create and initialize the entry
      e = exif_entry_new_mem(mem);
      e->tag = tag;
      e->format = EXIF_FORMAT_UNDEFINED;

      // Fill data
      std::size_t len = sizeof(ascii_header) - 1 + comment.length();
      e->data = (unsigned char*)exif_mem_alloc(mem, len);
      std::memcpy(e->data, ascii_header, sizeof(ascii_header) - 1);
      std::memcpy(e->data + sizeof(ascii_header) - 1, comment.c_str(), comment.length());
      e->size = len;
      e->components = len;

      // Pass ownership of "entity" to m_exif_data
      exif_content_add_entry (ifd, e);
      exif_mem_unref(mem);
      exif_entry_unref(e);
    }

  }
}
