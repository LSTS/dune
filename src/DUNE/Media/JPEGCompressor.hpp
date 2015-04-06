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

#ifndef DUNE_MEDIA_JPEG_COMPRESSOR_HPP_INCLUDED_
#define DUNE_MEDIA_JPEG_COMPRESSOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

// Forward declarations.
struct jpeg_compress_struct;
struct jpeg_error_mgr;
struct DestinationManager;

namespace DUNE
{
  namespace Media
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM JPEGCompressor;

    class JPEGCompressor
    {
    public:
      //! Image color space.
      enum ColorSpace
      {
        //! Grayscale.
        CS_GRAYSCALE,
        //! Red, Green and Blue.
        CS_RGB,
        //! Cyan, Magenta, Yellow and Black.
        CS_CMYK,
        //! YCbCr
        CS_YUV
      };

      //! Construct a JPEGCompressor object.
      JPEGCompressor(void);

      //! Destroy a JPEGCompressor object.
      ~JPEGCompressor(void);

      //! Set entropy encoding optimization.
      //! @param optimize true enables optimization.
      //! @return JPEGCompressor object.
      JPEGCompressor&
      setOptimize(bool optimize);

      //! Set dimensions of input image.
      //! @param width width of input image.
      //! @param height height of input image.
      //! @return JPEGCompressor object.
      JPEGCompressor&
      setInputDimensions(uint32_t width, uint32_t height);

      //! Set input color space.
      //! @param cspace color space.
      //! @return JPEGCompressor object.
      JPEGCompressor&
      setInputColorSpace(ColorSpace cspace);

      //! Set output image color space.
      //! @param cspace color space.
      //! @return JPEGCompressor object.
      JPEGCompressor&
      setOutputColorSpace(ColorSpace cspace);

      //! Compress a raw image in JPEG.
      //! @param raw raw image.
      //! @param quality JPEG image quality.
      //! @return true on success, false otherwise.
      bool
      compress(uint8_t* raw, uint8_t quality = 90);

      //! Retrieve the compressed image.
      //! @return compressed image.
      const uint8_t*
      imageData(void) const;

      //! Retrieve the size of the compressed image.
      //! @return size in bytes of the compressed image.
      uint32_t
      imageSize(void) const;

    private:
      // JPEG destination manager.
      struct DestinationManager* m_mgr;
      //! JPEG compression info.
      jpeg_compress_struct* m_jcinfo;
      //! JPEG compression error.
      jpeg_error_mgr* m_jerror;
      //! Default buffer size.
      const static uint32_t c_default_bfr_size = 102400;
      //! Default image width.
      const static uint32_t c_default_width = 640;
      //! Default image height.
      const static uint32_t c_default_height = 480;
      //! Default compression quality.
      const static uint8_t c_default_quality = 90;
      //! Default input color space.
      const static ColorSpace c_default_icspace = CS_RGB;
      //! Default output color space.
      const static ColorSpace c_default_ocspace = CS_RGB;
    };
  }
}

#endif
