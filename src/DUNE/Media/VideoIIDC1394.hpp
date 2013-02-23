//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Carlos Oliveira                                                  *
//***************************************************************************
// $Id:: VideoIIDC1394.hpp 12667 2013-01-22 02:44:42Z rasm                $:*
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
