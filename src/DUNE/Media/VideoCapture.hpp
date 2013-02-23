//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: VideoCapture.hpp 12667 2013-01-22 02:44:42Z rasm                 $:*
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
