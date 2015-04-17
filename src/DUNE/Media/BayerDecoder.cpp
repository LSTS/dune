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
// Based on libdc1394.                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Media/BayerDecoder.hpp>

namespace DUNE
{
  namespace Media
  {
    BayerDecoder::BayerDecoder(Tile tile, Method method)
    {
      m_blue_line = (tile == TILE_BGGR || tile == TILE_GBRG) ? -1 : 1;
      m_start_with_green = (tile == TILE_GBRG || tile == TILE_GRBG);
      setMethod(method);
    }

    void
    BayerDecoder::setMethod(Method method)
    {
      switch (method)
      {
        case METHOD_NEAREST:
          m_decoder = &BayerDecoder::decodeNearest;
          break;
        case METHOD_HQLINEAR:
          m_decoder = &BayerDecoder::decodeHQLinear;
          break;
        default:
          m_decoder = &BayerDecoder::decodeBilinear;
          break;
      }
    }

    void
    BayerDecoder::decodeNearest(const uint8_t* bayer, uint8_t* rgb, int sx, int sy) const
    {
      const int bayer_step = sx;
      const int rgb_step = 3 * sx;
      int width = sx;
      int height = sy;
      int blue = m_blue_line;
      bool start_with_green = m_start_with_green;
      int i;

      int imax = sx * sy * 3;
      for (i = sx * (sy - 1) * 3; i < imax; i++)
        rgb[i] = 0;

      int iinc = (sx - 1) * 3;
      for (i = (sx - 1) * 3; i < imax; i += iinc)
      {
        rgb[i++] = 0;
        rgb[i++] = 0;
        rgb[i++] = 0;
      }

      rgb += 1;
      width -= 1;
      height -= 1;

      for (; height--; bayer += bayer_step, rgb += rgb_step)
      {
        const uint8_t* bayer_end = bayer + width;

        if (start_with_green)
        {
          rgb[-blue] = bayer[1];
          rgb[0] = bayer[bayer_step + 1];
          rgb[blue] = bayer[bayer_step];
          bayer++;
          rgb += 3;
        }

        if (blue > 0)
        {
          for (; bayer <= bayer_end - 2; bayer += 2, rgb += 6)
          {
            rgb[-1] = bayer[0];
            rgb[0] = bayer[1];
            rgb[1] = bayer[bayer_step + 1];

            rgb[2] = bayer[2];
            rgb[3] = bayer[bayer_step + 2];
            rgb[4] = bayer[bayer_step + 1];
          }
        }
        else
        {
          for (; bayer <= bayer_end - 2; bayer += 2, rgb += 6)
          {
            rgb[1] = bayer[0];
            rgb[0] = bayer[1];
            rgb[-1] = bayer[bayer_step + 1];

            rgb[4] = bayer[2];
            rgb[3] = bayer[bayer_step + 2];
            rgb[2] = bayer[bayer_step + 1];
          }
        }

        if (bayer < bayer_end)
        {
          rgb[-blue] = bayer[0];
          rgb[0] = bayer[1];
          rgb[blue] = bayer[bayer_step + 1];
          bayer++;
          rgb += 3;
        }

        bayer -= width;
        rgb -= width * 3;

        blue = -blue;
        start_with_green = !start_with_green;
      }
    }

    void
    BayerDecoder::decodeBilinear(const uint8_t* bayer, uint8_t* rgb, int sx, int sy) const
    {
      const int bayer_step = sx;
      const int rgb_step = 3 * sx;
      int width = sx;
      int height = sy;
      int blue = m_blue_line;
      bool start_with_green = m_start_with_green;

      clearBorders(rgb, sx, sy, 1);
      rgb += rgb_step + 3 + 1;
      height -= 2;
      width -= 2;

      for (; height--; bayer += bayer_step, rgb += rgb_step)
      {
        int t0;
        int t1;
        const uint8_t* bayer_end = bayer + width;

        if (start_with_green)
        {
          t0 = (bayer[1] + bayer[bayer_step * 2 + 1] + 1) >> 1;
          t1 = (bayer[bayer_step] + bayer[bayer_step + 2] + 1) >> 1;
          rgb[-blue] = (uint8_t)t0;
          rgb[0] = bayer[bayer_step + 1];
          rgb[blue] = (uint8_t)t1;
          bayer++;
          rgb += 3;
        }

        if (blue > 0)
        {
          for (; bayer <= bayer_end - 2; bayer += 2, rgb += 6)
          {
            t0 = (bayer[0] + bayer[2] + bayer[bayer_step * 2] +
                  bayer[bayer_step * 2 + 2] + 2) >> 2;
            t1 = (bayer[1] + bayer[bayer_step] +
                  bayer[bayer_step + 2] + bayer[bayer_step * 2 + 1] + 2) >> 2;
            rgb[-1] = (uint8_t)t0;
            rgb[0] = (uint8_t)t1;
            rgb[1] = bayer[bayer_step + 1];

            t0 = (bayer[2] + bayer[bayer_step * 2 + 2] + 1) >> 1;
            t1 = (bayer[bayer_step + 1] + bayer[bayer_step + 3] + 1) >> 1;
            rgb[2] = (uint8_t)t0;
            rgb[3] = bayer[bayer_step + 2];
            rgb[4] = (uint8_t)t1;
          }
        }
        else
        {
          for (; bayer <= bayer_end - 2; bayer += 2, rgb += 6)
          {
            t0 = (bayer[0] + bayer[2] + bayer[bayer_step * 2] +
                  bayer[bayer_step * 2 + 2] + 2) >> 2;
            t1 = (bayer[1] + bayer[bayer_step] +
                  bayer[bayer_step + 2] + bayer[bayer_step * 2 + 1] + 2) >> 2;
            rgb[1] = (uint8_t)t0;
            rgb[0] = (uint8_t)t1;
            rgb[-1] = bayer[bayer_step + 1];

            t0 = (bayer[2] + bayer[bayer_step * 2 + 2] + 1) >> 1;
            t1 = (bayer[bayer_step + 1] + bayer[bayer_step + 3] + 1) >> 1;
            rgb[4] = (uint8_t)t0;
            rgb[3] = bayer[bayer_step + 2];
            rgb[2] = (uint8_t)t1;
          }
        }

        if (bayer < bayer_end)
        {
          t0 = (bayer[0] + bayer[2] + bayer[bayer_step * 2] +
                bayer[bayer_step * 2 + 2] + 2) >> 2;
          t1 = (bayer[1] + bayer[bayer_step] +
                bayer[bayer_step + 2] + bayer[bayer_step * 2 + 1] + 2) >> 2;
          rgb[-blue] = (uint8_t)t0;
          rgb[0] = (uint8_t)t1;
          rgb[blue] = bayer[bayer_step + 1];
          bayer++;
          rgb += 3;
        }

        bayer -= width;
        rgb -= width * 3;

        blue = -blue;
        start_with_green = !start_with_green;
      }
    }

    void
    BayerDecoder::decodeHQLinear(const uint8_t* bayer, uint8_t* rgb, int sx, int sy) const
    {
      const int bayer_step = sx;
      const int rgb_step = 3 * sx;
      int width = sx;
      int height = sy;
      int blue = m_blue_line;
      bool start_with_green = m_start_with_green;

      clearBorders(rgb, sx, sy, 2);
      rgb += 2 * rgb_step + 6 + 1;
      height -= 4;
      width -= 4;

      blue = -blue;

      for (; height--; bayer += bayer_step, rgb += rgb_step)
      {
        int t0;
        int t1;
        const uint8_t* bayer_end = bayer + width;
        const int bayer_step2 = bayer_step * 2;
        const int bayer_step3 = bayer_step * 3;
        const int bayer_step4 = bayer_step * 4;

        if (start_with_green)
        {
          /* at green pixel */
          rgb[0] = bayer[bayer_step2 + 2];
          t0 = rgb[0] * 5
          + ((bayer[bayer_step + 2] + bayer[bayer_step3 + 2]) << 2)
          - bayer[2]
          - bayer[bayer_step + 1]
          - bayer[bayer_step + 3]
          - bayer[bayer_step3 + 1]
          - bayer[bayer_step3 + 3]
          - bayer[bayer_step4 + 2]
          + ((bayer[bayer_step2] + bayer[bayer_step2 + 4] + 1) >> 1);
          t1 = rgb[0] * 5 +
          ((bayer[bayer_step2 + 1] + bayer[bayer_step2 + 3]) << 2)
          - bayer[bayer_step2]
          - bayer[bayer_step + 1]
          - bayer[bayer_step + 3]
          - bayer[bayer_step3 + 1]
          - bayer[bayer_step3 + 3]
          - bayer[bayer_step2 + 4]
          + ((bayer[2] + bayer[bayer_step4 + 2] + 1) >> 1);
          t0 = (t0 + 4) >> 3;
          clip(t0, rgb[-blue]);
          t1 = (t1 + 4) >> 3;
          clip(t1, rgb[blue]);
          bayer++;
          rgb += 3;
        }

        if (blue > 0)
        {
          for (; bayer <= bayer_end - 2; bayer += 2, rgb += 6)
          {
            /* B at B */
            rgb[1] = bayer[bayer_step2 + 2];
            /* R at B */
            t0 = ((bayer[bayer_step + 1] + bayer[bayer_step + 3] +
                   bayer[bayer_step3 + 1] + bayer[bayer_step3 + 3]) << 1)
            -
            (((bayer[2] + bayer[bayer_step2] +
               bayer[bayer_step2 + 4] + bayer[bayer_step4 +
                                              2]) * 3 + 1) >> 1)
            + rgb[1] * 6;
            /* G at B */
            t1 = ((bayer[bayer_step + 2] + bayer[bayer_step2 + 1] +
                   bayer[bayer_step2 + 3] + bayer[bayer_step3 + 2]) << 1)
            - (bayer[2] + bayer[bayer_step2] +
               bayer[bayer_step2 + 4] + bayer[bayer_step4 + 2])
            + (rgb[1] << 2);
            t0 = (t0 + 4) >> 3;
            clip(t0, rgb[-1]);
            t1 = (t1 + 4) >> 3;
            clip(t1, rgb[0]);
            /* at green pixel */
            rgb[3] = bayer[bayer_step2 + 3];
            t0 = rgb[3] * 5
            + ((bayer[bayer_step + 3] + bayer[bayer_step3 + 3]) << 2)
            - bayer[3]
            - bayer[bayer_step + 2]
            - bayer[bayer_step + 4]
            - bayer[bayer_step3 + 2]
            - bayer[bayer_step3 + 4]
            - bayer[bayer_step4 + 3]
            +
            ((bayer[bayer_step2 + 1] + bayer[bayer_step2 + 5] +
              1) >> 1);
            t1 = rgb[3] * 5 +
            ((bayer[bayer_step2 + 2] + bayer[bayer_step2 + 4]) << 2)
            - bayer[bayer_step2 + 1]
            - bayer[bayer_step + 2]
            - bayer[bayer_step + 4]
            - bayer[bayer_step3 + 2]
            - bayer[bayer_step3 + 4]
            - bayer[bayer_step2 + 5]
            + ((bayer[3] + bayer[bayer_step4 + 3] + 1) >> 1);
            t0 = (t0 + 4) >> 3;
            clip(t0, rgb[2]);
            t1 = (t1 + 4) >> 3;
            clip(t1, rgb[4]);
          }
        }
        else
        {
          for (; bayer <= bayer_end - 2; bayer += 2, rgb += 6)
          {
            /* R at R */
            rgb[-1] = bayer[bayer_step2 + 2];
            /* B at R */
            t0 = ((bayer[bayer_step + 1] + bayer[bayer_step + 3] +
                   bayer[bayer_step3 + 1] + bayer[bayer_step3 + 3]) << 1)
            -
            (((bayer[2] + bayer[bayer_step2] +
               bayer[bayer_step2 + 4] + bayer[bayer_step4 +
                                              2]) * 3 + 1) >> 1)
            + rgb[-1] * 6;
            /* G at R */
            t1 = ((bayer[bayer_step + 2] + bayer[bayer_step2 + 1] +
                   bayer[bayer_step2 + 3] + bayer[bayer_step * 3 +
                                                  2]) << 1)
            - (bayer[2] + bayer[bayer_step2] +
               bayer[bayer_step2 + 4] + bayer[bayer_step4 + 2])
            + (rgb[-1] << 2);
            t0 = (t0 + 4) >> 3;
            clip(t0, rgb[1]);
            t1 = (t1 + 4) >> 3;
            clip(t1, rgb[0]);

            /* at green pixel */
            rgb[3] = bayer[bayer_step2 + 3];
            t0 = rgb[3] * 5
            + ((bayer[bayer_step + 3] + bayer[bayer_step3 + 3]) << 2)
            - bayer[3]
            - bayer[bayer_step + 2]
            - bayer[bayer_step + 4]
            - bayer[bayer_step3 + 2]
            - bayer[bayer_step3 + 4]
            - bayer[bayer_step4 + 3]
            +
            ((bayer[bayer_step2 + 1] + bayer[bayer_step2 + 5] +
              1) >> 1);
            t1 = rgb[3] * 5 +
            ((bayer[bayer_step2 + 2] + bayer[bayer_step2 + 4]) << 2)
            - bayer[bayer_step2 + 1]
            - bayer[bayer_step + 2]
            - bayer[bayer_step + 4]
            - bayer[bayer_step3 + 2]
            - bayer[bayer_step3 + 4]
            - bayer[bayer_step2 + 5]
            + ((bayer[3] + bayer[bayer_step4 + 3] + 1) >> 1);
            t0 = (t0 + 4) >> 3;
            clip(t0, rgb[4]);
            t1 = (t1 + 4) >> 3;
            clip(t1, rgb[2]);
          }
        }

        if (bayer < bayer_end)
        {
          /* B at B */
          rgb[blue] = bayer[bayer_step2 + 2];
          /* R at B */
          t0 = ((bayer[bayer_step + 1] + bayer[bayer_step + 3] +
                 bayer[bayer_step3 + 1] + bayer[bayer_step3 + 3]) << 1)
          -
          (((bayer[2] + bayer[bayer_step2] +
             bayer[bayer_step2 + 4] + bayer[bayer_step4 +
                                            2]) * 3 + 1) >> 1)
          + rgb[blue] * 6;
          /* G at B */
          t1 = (((bayer[bayer_step + 2] + bayer[bayer_step2 + 1] +
                  bayer[bayer_step2 + 3] + bayer[bayer_step3 + 2])) << 1)
          - (bayer[2] + bayer[bayer_step2] +
             bayer[bayer_step2 + 4] + bayer[bayer_step4 + 2])
          + (rgb[blue] << 2);
          t0 = (t0 + 4) >> 3;
          clip(t0, rgb[-blue]);
          t1 = (t1 + 4) >> 3;
          clip(t1, rgb[0]);
          bayer++;
          rgb += 3;
        }

        bayer -= width;
        rgb -= width * 3;

        blue = -blue;
        start_with_green = !start_with_green;
      }
    }

    void
    BayerDecoder::clearBorders(uint8_t* rgb, int sx, int sy, int w)
    {
      int i = 3 * sx * w - 1;
      int j = 3 * sx * sy - 1;
      while (i >= 0)
      {
        rgb[i--] = 0;
        rgb[j--] = 0;
      }

      int low = sx * (w - 1) * 3 - 1 + w * 3;
      i = low + sx * (sy - w * 2 + 1) * 3;
      while (i > low)
      {
        j = 6 * w;
        while (j > 0)
        {
          rgb[i--] = 0;
          j--;
        }
        i -= (sx - 2 * w) * 3;
      }
    }
  }
}
