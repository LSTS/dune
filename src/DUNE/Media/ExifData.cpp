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
#if defined(DUNE_USING_EXIF)
#include <libexif/exif-data.h>
#include <libexif/exif-content.h>
#else
// Alternative struct _ExifData to hold the original exif data.
struct _ExifData
{
  uint8_t* bfr;
  std::size_t len;
};
#endif

namespace DUNE
{
  namespace Media
  {
#if defined(DUNE_USING_EXIF)
    //! Construct an empty ExifData object.
    ExifData::ExifData(void) :
      m_exif_data(exif_data_new())
    { }

    //! Construct an ExifData object from existing data.
    ExifData::ExifData(uint8_t* bfr, std::size_t len) :
      m_exif_data(exif_data_new_from_data(bfr, len))
    { }
#else
    ExifData::ExifData(void) :
      m_exif_data(new struct _ExifData)
    {
      m_exif_data->len = 0;
    }

    ExifData::ExifData(uint8_t* bfr, std::size_t len) :
      m_exif_data(new struct _ExifData)
    {
      if (len > 4)
      {
        // Advance the length of the EXIF header
        len -= 4;
        bfr += 4;

        m_exif_data->len = len;
        m_exif_data->bfr = new uint8_t[len];
        std::memcpy(m_exif_data->bfr, bfr, len);
      }
      else
        m_exif_data->len = 0;
    }
#endif

    //! Destroy a ExifData object.
    ExifData::~ExifData(void)
    {
      if (m_exif_data)
      {
#if defined(DUNE_USING_EXIF)
        exif_data_free(m_exif_data);
#else
        if (m_exif_data->len)
          delete m_exif_data->bfr;
        delete m_exif_data;
#endif
      }
    }

    std::vector<uint8_t>
    ExifData::getRawData(void)
    {
      uint8_t* bfr;
      unsigned len;

#if defined(DUNE_USING_EXIF)
      exif_data_fix(m_exif_data);
      exif_data_save_data(m_exif_data, &bfr, &len);
#else
      len = m_exif_data->len;
      if (len > 0)
      {
        bfr = new uint8_t[len];
        std::memcpy(bfr, m_exif_data->bfr, len);
      }
      else
        bfr = NULL;
#endif

      if (!bfr)
        return std::vector<uint8_t>();

      std::vector<uint8_t> vec(bfr, bfr + len);
      delete[] bfr;
      return vec;
    }

    std::string
    ExifData::getComment(void)
    {
#if defined(DUNE_USING_EXIF)
      ExifEntry* e = exif_content_get_entry(m_exif_data->ifd[EXIF_IFD_EXIF], exif_tag_table_get_tag(EXIF_TAG_USER_COMMENT));
      if (e != NULL)
        return std::string((const char*)e->data + 8, (size_t)e->size - 8);
#endif
      return std::string("");
    }

    void
    ExifData::setComment(std::string comment)
    {
#if defined(DUNE_USING_EXIF)
      const char ascii_header[] = "ASCII\0\0\0";
      ExifContent* ifd = m_exif_data->ifd[EXIF_IFD_EXIF];
      ExifTag tag = EXIF_TAG_USER_COMMENT;

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
#else
      (void)comment;
#endif
    }
  }
}

