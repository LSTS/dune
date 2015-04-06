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
