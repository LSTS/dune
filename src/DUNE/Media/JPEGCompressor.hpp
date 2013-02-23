//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
