//***************************************************************************
// Copyright 2007-2021 OceanScan - Marine Systems & Technology, Lda.        *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_MEDIA_MJPG_ENCODER_HPP_INCLUDED_
#define DUNE_MEDIA_MJPG_ENCODER_HPP_INCLUDED_

// Local headers.
#include "List.hpp"
#include "MJPG.hpp"
#include "AVIH.hpp"
#include "STRF.hpp"
#include "STRH.hpp"
#include "ISFT.hpp"
#include "IDX1.hpp"
#include "TSTP.hpp"

namespace DUNE
{
  namespace Media
  {
    namespace MJPG
    {
      //! Encoder for an AVI contained MJPEG stream.
      class Encoder
      {
      public:
        //! Constructor.
        //! @param[in] fname file name.
        //! @param[in] width video width.
        //! @param[in] height video height.
        //! @param[in] fps video frames per second.
        Encoder(const char* fname, uint32_t width, uint32_t height, unsigned fps)
        {
          m_ofs.open(fname, std::ios::binary);

          m_properties.width = width;
          m_properties.height = height;
          m_properties.fps = fps;

          m_avih = new AVIH(m_properties);
          m_strh = new STRH(m_properties);
          m_strf = new STRF(m_properties);
          m_isft = new ISFT(m_properties);
          m_idx1 = new IDX1(m_properties);
          m_tstp = new TSTP(m_properties);

          m_strl = new List(m_properties, "strl");
          m_strl->add(m_strh);
          m_strl->add(m_strf);

          m_hdrl = new List(m_properties, "hdrl");
          m_hdrl->add(m_avih);
          m_hdrl->add(m_strl);

          m_info = new List(m_properties, "INFO");
          m_info->add(m_isft);

          m_movi = new List(m_properties, "movi");

          m_riff = new MJPG(m_properties);
          m_riff->add(m_hdrl);
          m_riff->add(m_info);
          m_riff->add(m_movi);

          m_riff->write(m_ofs);
        }

        //! Destructor.
        ~Encoder(void)
        {
          m_idx1->write(m_ofs);
          m_tstp->write(m_ofs);
          m_riff->setDataSize(m_riff->getDataSize() + m_idx1->getSize() + m_tstp->getSize());

          // Patch sizes.
          m_ofs.seekp(0);
          m_riff->write(m_ofs);

          delete m_riff;
          delete m_movi;
          delete m_info;
          delete m_hdrl;
          delete m_strl;
          delete m_idx1;
          delete m_tstp;
          delete m_isft;
          delete m_strf;
          delete m_strh;
          delete m_avih;
        }

        //! Encode frame in a video chunk.
        //! @param[in] data video data.
        //! @param[in] data_size size of video data.
        void
        encode(const uint8_t* data, size_t data_size, double timestamp)
        {
          Chunk frame(m_properties, "00dc");
          frame.setData(data, (uint32_t)data_size);
          frame.write(m_ofs);

          uint32_t offset = m_riff->getSize();

          m_movi->setDataSize(m_movi->getDataSize() + frame.getSize());
          m_riff->setDataSize(m_riff->getDataSize() + frame.getSize());

          m_idx1->add("00dc", 0x01, offset, frame.getSize());
          m_tstp->add(timestamp);

          ++m_properties.total_frames;
        }

      private:
        //! Output stream.
        std::ofstream m_ofs;
        //! MJPEG properties.
        Properties m_properties;
        //! AVI header.
        AVIH* m_avih;
        //! Stream header.
        STRH* m_strh;
        //! Stream format.
        STRF* m_strf;
        //! Software information.
        ISFT* m_isft;
        //! AVI index.
        IDX1* m_idx1;
        //! AVI timestamp index.
        TSTP* m_tstp;
        //! Stream list.
        List* m_strl;
        //! Header list.
        List* m_hdrl;
        //! Information list.
        List* m_info;
        //! Frame list.
        List* m_movi;
        //! MJPEG/AVI container.
        MJPG* m_riff;
      };
    }
  }
}

#endif
