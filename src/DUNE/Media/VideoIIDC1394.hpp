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
// Author: Carlos Oliveira                                                  *
//***************************************************************************

#ifndef DUNE_MEDIA_VIDEO_IIDC1394_HPP_INCLUDED_
#define DUNE_MEDIA_VIDEO_IIDC1394_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

#if defined(DUNE_SYS_HAS_DC1394_CAMERA_H)
#  include <dc1394/dc1394.h>
#endif

namespace DUNE
{
  namespace Media
  {
    class VideoIIDC1394
    {
    public:
      VideoIIDC1394(int source, uint8_t iso, uint8_t vid_mode, uint8_t f_rate, uint32_t w, uint32_t h);

      ~VideoIIDC1394(void);

      void
      start(void);

      void
      stop(void);

      bool
      frameCapture(void);

      bool
      doOneShotFocus(void);

      uint32_t
      frameWidth(void) const;

      uint32_t
      frameHeight(void) const;

      uint8_t*
      rawFrameData(void);

      uint32_t
      frameSize(void) const;

      uint8_t*
      yuvFrameData(void);

      uint8_t*
      rgbFrameData(void);

    private:
      void
      updateZoomStatus(void);

      void
      updateFocusStatus(void);

#if defined(DUNE_SYS_HAS_DC1394_CAMERA_H)

      dc1394feature_t feature;

      dc1394feature_modes_t fm;
      dc1394feature_mode_t mode;

      dc1394camera_t* camera;
      dc1394video_frame_t* frame;

      dc1394video_frame_t* converted_frame;

      dc1394_t* iidc;
      dc1394camera_list_t* list;
#endif

      uint32_t width;
      uint32_t height;

      struct zoom
      {
        uint8_t min_zoom;
        uint8_t max_zoom;
        uint8_t current_zoom;
      };

      struct focus
      {
        uint8_t min_focus;
        uint8_t max_focus;
        uint8_t current_focus;
      };

      //TODO test this first and then implement frame queue for output buffering / reading.
    };
  }
}

#endif
