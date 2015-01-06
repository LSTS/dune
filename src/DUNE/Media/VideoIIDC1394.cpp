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

// ISO C++ 98 headers.
#include <stdexcept>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <sstream>
#include <iostream>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Media/VideoIIDC1394.hpp>

namespace DUNE
{
  namespace Media
  {
    VideoIIDC1394::VideoIIDC1394(int source, uint8_t iso, uint8_t vid_mode, uint8_t f_rate, uint32_t w, uint32_t h)
    {
#if defined(DUNE_WITH_DC1394)

      std::cout << " Entered constructor " << std:: endl;

      width = w;

      height = h;

      iidc = dc1394_new();

      frame = NULL;

      std::cout << " Built Object " << std:: endl;

      dc1394error_t error_code;

      if (!iidc)
      {
        throw std::runtime_error("Failed to start IEEE 1394 IIDC interface");
      }

      error_code = dc1394_camera_enumerate(iidc, &list);

      std::cout << " Enumerated camera objects " << std:: endl;

      if (error_code < 0)
      {
        throw std::runtime_error("Failed to enumerate cameras");
      }

      std::cout << "Number of cameras found: " << list->num << std:: endl;

      camera = dc1394_camera_new(iidc, list->ids[0].guid);

      std::cout << " Built new camera object " << std:: endl;

      if (!camera)
      {
        throw std::runtime_error("Failed to initialize camera");
      }

      dc1394_camera_free_list(list);

      error_code = dc1394_video_set_iso_speed(camera, DC1394_ISO_SPEED_400);

      if (error_code < 0)
      {
        throw std::runtime_error("Failed to set ISO SPEED");
      }

      error_code = dc1394_video_set_mode(camera, DC1394_VIDEO_MODE_640x480_YUV422);
      if (error_code < 0)
      {
        throw std::runtime_error("Failed to set video mode");
      }

      error_code = dc1394_video_set_framerate(camera, DC1394_FRAMERATE_15);
      if (error_code < 0)
      {
        free(this);
        throw std::runtime_error("Failed to set ISO SPEED");
      }

      error_code = dc1394_capture_setup(camera, 8, DC1394_CAPTURE_FLAGS_DEFAULT);
      if (error_code < 0)
      {
        throw std::runtime_error("Failed to set ISO SPEED");
      }

      error_code = dc1394_video_set_transmission(camera, DC1394_ON);
      if (error_code < 0)
      {
        throw std::runtime_error("Could not start video capture");
      }

      converted_frame = new dc1394video_frame_t;
      std::memset(converted_frame, 0, sizeof(dc1394video_frame_t));

      std::cout << " Finished setting everything up " << std:: endl;

#else
      (void)source;
      (void)iso;
      (void)vid_mode;
      (void)f_rate;
      (void)w;
      (void)h;

      throw std::runtime_error("IIDC Firewire Video interface is not yet implemented in this system.");

#endif
    }

    VideoIIDC1394::~VideoIIDC1394(void)
    {
#if defined(DUNE_WITH_DC1394)
      dc1394_video_set_transmission(camera, DC1394_OFF);
      dc1394_capture_stop(camera);
      dc1394_camera_free(camera);
#endif
    }

    void
    VideoIIDC1394::start(void)
    { }

    void
    VideoIIDC1394::stop(void)
    {
#if defined(DUNE_WITH_DC1394)
      dc1394error_t error_code;
      error_code = dc1394_video_set_transmission(camera, DC1394_OFF);
      if (error_code < 0)
      {
        throw std::runtime_error("Could not stop video capture");
        free(this);
        std::exit(EXIT_FAILURE);
      }
      error_code = dc1394_capture_stop(camera);
      if (error_code < 0)
      {
        throw std::runtime_error("Could not stop video capture");
        free(this);
        std::exit(EXIT_FAILURE);
      }

#endif
    }

    bool
    VideoIIDC1394::frameCapture(void)
    {
#if defined(DUNE_WITH_DC1394)
      dc1394error_t error_code;
      error_code = dc1394_capture_dequeue(camera, DC1394_CAPTURE_POLICY_WAIT, &frame);
      if (error_code < 0)
      {
        throw std::runtime_error("Could not capture a frame");
      }
      return true;
#else
      return false;
#endif
    }

    uint32_t
    VideoIIDC1394::frameWidth(void) const
    {
      return width;
    }

    uint32_t
    VideoIIDC1394::frameHeight(void) const
    {
      return height;
    }

    uint8_t*
    VideoIIDC1394::rgbFrameData(void)
    {
#if defined(DUNE_WITH_DC1394)
      std::cout << "Starting conversion to RGB8" << std::endl;
      frameCapture();
      converted_frame->color_coding = DC1394_COLOR_CODING_RGB8;
      dc1394_convert_frames(frame, converted_frame);
      std::cout << "Finished up conversion to RGB8" << std::endl;

      dc1394_capture_enqueue(camera, frame);

      return converted_frame->image;

#else
      return NULL;
#endif
    }

    uint8_t*
    VideoIIDC1394::rawFrameData(void)
    {
   #if defined(DUNE_WITH_DC1394)
      frameCapture();

      converted_frame->color_coding = DC1394_COLOR_CODING_YUV422;
      converted_frame->yuv_byte_order = DC1394_BYTE_ORDER_YUYV;

      dc1394_convert_frames(frame, converted_frame);

      dc1394_capture_enqueue(camera, frame);

      return converted_frame->image;

   #else
      return NULL;
   #endif
    }

    uint8_t*
    VideoIIDC1394::yuvFrameData(void)
    {
#if defined(DUNE_WITH_DC1394)
      std::cout << "Starting conversion to YUV 422" << std::endl;
      frameCapture();
      converted_frame->color_coding = DC1394_COLOR_CODING_YUV422;
      dc1394_convert_frames(frame, converted_frame);
      std::cout << "Finished up conversion to YUV 422" << std::endl;

      dc1394_capture_enqueue(camera, frame);

      return converted_frame->image;

#else
      return NULL;
#endif
    }

    bool
    VideoIIDC1394::doOneShotFocus()
    {
#if defined(DUNE_WITH_DC1394)
      dc1394error_t error_code;
      error_code = dc1394_feature_set_mode(camera, DC1394_FEATURE_FOCUS, DC1394_FEATURE_MODE_ONE_PUSH_AUTO);
      if (error_code < 0)
      {
        throw std::runtime_error("Could not capture a frame");
      }
      return true;
#else
      return false;
#endif
    }

    void
    VideoIIDC1394::updateFocusStatus()
    {
#if defined(DUNE_WITH_DC1394)
      feature = DC1394_FEATURE_FOCUS;

      dc1394_feature_get_mode(camera, feature, &mode);
      dc1394_feature_get_modes(camera, feature, &fm);

      std::cout << "Camera focus mode: " << mode << std::endl;

      uint8_t i = 0;

      for (i = 0; i < fm.num; i++)
      {
        std::cout << "Camera focus available modes: " << fm.modes[i] << std::endl;
      }
#endif
    }

    void
    VideoIIDC1394::updateZoomStatus()
    { }

    uint32_t
    VideoIIDC1394::frameSize(void) const
    {
#if defined(DUNE_WITH_DC1394)
      return converted_frame->image_bytes;
#else
      return 0;
#endif
    }
  }
}
