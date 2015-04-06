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

// DUNE headers.
#include <DUNE/Media/JPEGCompressor.hpp>

// ISO C++ 98 headers.
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>

// JPEG Library headers.
#if defined(DUNE_SYS_HAS_JPEG)
#  include <jpeglib.h>
#else
#  include <jpeg/jpeglib.h>
#endif

struct DestinationManager
{
  jpeg_destination_mgr mgr;
  uint8_t* bfr;
  uint32_t bfr_size;
};

extern "C" void
initDestination(j_compress_ptr cinfo)
{
  DestinationManager* mgr = (DestinationManager*)cinfo->dest;
  mgr->mgr.next_output_byte = mgr->bfr;
  mgr->mgr.free_in_buffer = mgr->bfr_size;
}

extern "C" void
termDestination(j_compress_ptr cinfo)
{
  (void)cinfo;
}

// If buffer is full, double the allocated memory.
extern "C" int
emptyBuffer(j_compress_ptr cinfo)
{
  DestinationManager* mgr = (DestinationManager*)cinfo->dest;
  unsigned int increment = mgr->bfr_size;

  mgr->bfr_size += increment;
  mgr->bfr = (uint8_t*)std::realloc(mgr->bfr, mgr->bfr_size);
  mgr->mgr.next_output_byte = mgr->bfr + increment;
  mgr->mgr.free_in_buffer = increment;

  return TRUE;
}

namespace DUNE
{
  namespace Media
  {
    JPEGCompressor::JPEGCompressor(void)
    {
      // Initialize destination manager.
      m_mgr = new DestinationManager;
      std::memset(&(m_mgr->mgr), 0, sizeof(jpeg_destination_mgr));
      m_mgr->bfr_size = c_default_bfr_size;
      m_mgr->bfr = (uint8_t*)std::malloc(m_mgr->bfr_size);
      m_mgr->mgr.init_destination = initDestination;
      m_mgr->mgr.empty_output_buffer = emptyBuffer;
      m_mgr->mgr.term_destination = termDestination;

      // Initialize JPEG compression info.
      m_jcinfo = new jpeg_compress_struct;
      jpeg_create_compress(m_jcinfo);
      m_jerror = new jpeg_error_mgr;
      m_jcinfo->err = jpeg_std_error(m_jerror);
      m_jcinfo->dest = (jpeg_destination_mgr*)m_mgr;

      // Set defaults.
      setInputColorSpace(c_default_icspace);
      jpeg_set_defaults(m_jcinfo);
    }

    JPEGCompressor::~JPEGCompressor(void)
    {
      jpeg_destroy_compress(m_jcinfo);
      delete m_jcinfo;
      delete m_jerror;
      std::free(m_mgr->bfr);
      delete m_mgr;
    }

    JPEGCompressor&
    JPEGCompressor::setOptimize(bool optimize)
    {
      m_jcinfo->optimize_coding = optimize ? TRUE : FALSE;
      return *this;
    }

    JPEGCompressor&
    JPEGCompressor::setInputDimensions(uint32_t width, uint32_t height)
    {
      m_jcinfo->image_width = width;
      m_jcinfo->image_height = height;
      return *this;
    }

    JPEGCompressor&
    JPEGCompressor::setInputColorSpace(ColorSpace cspace)
    {
      switch (cspace)
      {
        case CS_GRAYSCALE:
          m_jcinfo->in_color_space = JCS_GRAYSCALE;
          m_jcinfo->input_components = 1;
          break;

        case CS_RGB:
          m_jcinfo->in_color_space = JCS_RGB;
          m_jcinfo->input_components = 3;
          break;

        case CS_CMYK:
          m_jcinfo->in_color_space = JCS_CMYK;
          m_jcinfo->input_components = 4;
          break;

        case CS_YUV:
          m_jcinfo->in_color_space = JCS_YCbCr;
          m_jcinfo->input_components = 3;
          break;
      }

      return *this;
    }

    JPEGCompressor&
    JPEGCompressor::setOutputColorSpace(ColorSpace cspace)
    {
      switch (cspace)
      {
        case CS_GRAYSCALE:
          jpeg_set_colorspace(m_jcinfo, JCS_GRAYSCALE);
          break;

        case CS_RGB:
          jpeg_set_colorspace(m_jcinfo, JCS_RGB);
          break;

        case CS_CMYK:
          jpeg_set_colorspace(m_jcinfo, JCS_CMYK);
          break;

        case CS_YUV:
          jpeg_set_colorspace(m_jcinfo, JCS_YCbCr);
          break;
      }

      return *this;
    }

    bool
    JPEGCompressor::compress(uint8_t* raw, uint8_t quality)
    {
      jpeg_set_quality(m_jcinfo, quality, TRUE);
      jpeg_start_compress(m_jcinfo, TRUE);

      JSAMPROW row_pointer[1];
      int row_stride = m_jcinfo->image_width * m_jcinfo->input_components;
      while (m_jcinfo->next_scanline < m_jcinfo->image_height)
      {
        row_pointer[0] = &raw[m_jcinfo->next_scanline * row_stride];
        jpeg_write_scanlines(m_jcinfo, row_pointer, 1);
      }

      jpeg_finish_compress(m_jcinfo);
      return true;
    }

    const uint8_t*
    JPEGCompressor::imageData(void) const
    {
      return m_mgr->bfr;
    }

    uint32_t
    JPEGCompressor::imageSize(void) const
    {
      return m_mgr->bfr_size - m_mgr->mgr.free_in_buffer;
    }
  }
}
