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

#ifndef DUNE_MEDIA_VIDEO_CAPTURE_HPP_INCLUDED_
#define DUNE_MEDIA_VIDEO_CAPTURE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

// Forward declarations.
struct v4l2_format;
struct v4l2_buffer;
struct v4l2_requestbuffers;

namespace DUNE
{
  namespace Media
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM VideoCapture;

    class VideoCapture
    {
    public:
      //! Standard.
      enum Standard
      {
        //! Phase Alternating Line (PAL).
        STANDARD_PAL,
        //! National Television System Committee (NTSC).
        STANDARD_NTSC
      };

      VideoCapture(const std::string& dev, uint32_t width, uint32_t height);

      ~VideoCapture(void);

      void
      start(void);

      void
      stop(void);

      void
      setStandard(Standard standard);

      bool
      frameCapture(void);

      uint32_t
      frameWidth(void) const;

      uint32_t
      frameHeight(void) const;

      uint8_t*
      frameData(void) const;

      uint32_t
      frameSize(void) const;

    private:
      struct Buffer
      {
        void* start;
        size_t length;
      };

      int m_fd;
      struct v4l2_format* m_fmt;
      struct v4l2_buffer* m_bfr;
      struct v4l2_requestbuffers* m_bfr_req;
      struct Buffer* m_bfrs;
    };
  }
}

#endif
