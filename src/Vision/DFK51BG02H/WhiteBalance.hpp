//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef VISION_DFK51BG02H_WHITE_BALANCE_HPP_INCLUDED_
#define VISION_DFK51BG02H_WHITE_BALANCE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Vision
{
  namespace DFK51BG02H
  {
    //! White-balance filter for Bayer 8 (GBRG) images.
    class WhiteBalance
    {
    public:
      //! Constructor.
      //! @param[in] w image width.
      //! @param[in] h image height.
      WhiteBalance(unsigned w, unsigned h):
        m_width(w),
        m_height(h),
        m_r_factor(1.0f),
        m_b_factor(1.0f)
      { }

      //! Set R factor.
      //! @param[in] r_factor R factor.
      void
      setRFactor(float r_factor)
      {
        m_r_factor = r_factor;
      }

      //! Set B factor.
      //! @param[in] b_factor B factor.
      void
      setBFactor(float b_factor)
      {
        m_b_factor = b_factor;
      }

      //! Apply white-balance to data.
      //! @param[in] data Bayer 8 (GBRG) image.
      void
      filter(uint8_t* data)
      {
        // B.
        for (unsigned y = 0; y < m_height; y += 2)
        {
          for (unsigned x = 1; x < m_width; x += 2)
          {
            data[(y * m_width) + x] = clip(data[(y * m_width) + x] * m_b_factor);
          }
        }

        // R.
        for (unsigned y = 1; y < m_height; y += 2)
        {
          for (unsigned x = 0; x < m_width; x += 2)
          {
            data[(y * m_width) + x] = clip(data[(y * m_width) + x] * m_r_factor);
          }
        }
      }

    private:
      //! Image width.
      unsigned m_width;
      //! Image height.
      unsigned m_height;
      //! R factor.
      float m_r_factor;
      //! B factor.
      float m_b_factor;

      //! Clip a value if it doesn't fit in 8 bits.
      //! @param[in] value value to clip.
      inline uint8_t
      clip(float value)
      {
        return (value > 255) ? 255 : (uint8_t)value;
      }
    };
  }
}

#endif
