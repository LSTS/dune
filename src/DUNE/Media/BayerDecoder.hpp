//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: BayerDecoder.hpp 12667 2013-01-22 02:44:42Z rasm                 $:*
//***************************************************************************

#ifndef DUNE_MEDIA_BAYER_DECODER_HPP_INCLUDED_
#define DUNE_MEDIA_BAYER_DECODER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Media
  {
    //! Bayer decoder (demosaicing).
    class BayerDecoder
    {
    public:
      //! Decoding method.
      enum Method
      {
        //! Nearest neighbor.
        METHOD_NEAREST,
        //! Bilinear interpolation.
        METHOD_BILINEAR,
        //! High-Quality linear interpolation.
        METHOD_HQLINEAR
      };

      //! Tile format (2x2 sensor alignment).
      enum Tile
      {
        // Green, Blue, Red, Green.
        TILE_GBRG,
        // Green, Red, Blue, Green.
        TILE_GRBG,
        // Red, Green, Green, Blue.
        TILE_RGGB,
        // Blue, Green, Green, Red.
        TILE_BGGR
      };

      //! Constructor.
      //! @param[in] tile tile format of Bayer data.
      //! @param[in] method conversion method.
      BayerDecoder(Tile tile, Method method = METHOD_BILINEAR);

      //! Set decoding method.
      //! @param[in] method decoding method.
      void
      setMethod(Method method);

      //! Convert Bayer mosaic to RGB24.
      //! @param[in] bayer bayer mosaic.
      //! @param[out] rgb RGB24 image.
      //! @param[in] width width of bayer mosaic.
      //! @param[in] height height of bayer mosaic.
      void
      decodeToRGB24(const uint8_t* bayer, uint8_t* rgb, int width, int height) const
      {
        ((*this).*(m_decoder))(bayer, rgb, width, height);
      }

    private:
      //! Type of decoder functions.
      typedef void (BayerDecoder::*Decoder)(const uint8_t*, uint8_t*, int, int) const;
      //! Pointer to decoder.
      Decoder m_decoder;
      //! True if tile starts with a green pixel.
      bool m_start_with_green;
      int m_blue_line;

      //! Convert Bayer mosaic to RGB24 using the nearest neighbor method.
      //! @param[in] bayer bayer mosaic.
      //! @param[out] rgb RGB24 image.
      //! @param[in] width width of bayer mosaic.
      //! @param[in] height height of bayer mosaic.
      void
      decodeNearest(const uint8_t* bayer, uint8_t* rgb, int width, int height) const;

      //! Convert Bayer mosaic to RGB24 using bilinear interpolation.
      //! @param[in] bayer bayer mosaic.
      //! @param[out] rgb RGB24 image.
      //! @param[in] width width of bayer mosaic.
      //! @param[in] height height of bayer mosaic.
      void
      decodeBilinear(const uint8_t* bayer, uint8_t* rgb, int width, int height) const;

      //! Convert Bayer mosaic to RGB24 using high-quality linear
      //! interpolation.
      //! @param[in] bayer bayer mosaic.
      //! @param[out] rgb RGB24 image.
      //! @param[in] width width of bayer mosaic.
      //! @param[in] height height of bayer mosaic.
      void
      decodeHQLinear(const uint8_t* bayer, uint8_t* rgb, int width, int height) const;

      //! Clear image borders.
      //! @param[in] rgb RGB24 image.
      //! @param[in] width image width.
      //! @param[in] height image height.
      //! @param[in] w border width.
      static void
      clearBorders(uint8_t* rgb, int width, int height, int w);

      //! Clip value to fit in 8 bits.
      //! @param[in] in input value.
      //! @param[out] destination variable.
      static inline void
      clip(int in, uint8_t& out)
      {
        in = (in < 0) ? 0 : in;
        out = (in > 255) ? 255 : in;
      }
    };
  }
}

#endif
