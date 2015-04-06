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
#include <DUNE/Media/VideoCapture.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/Utils/String.hpp>

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_IOCTL_H)
#  include <sys/ioctl.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_TIME_H)
#  include <sys/time.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_MMAN_H)
#  include <sys/mman.h>
#endif

#if defined(DUNE_SYS_HAS_LINUX_VIDEODEV2_H)
#  include <linux/videodev2.h>
#endif

#if defined(DUNE_SYS_HAS_LIBV4L2_H)
#  include <libv4l2.h>
#endif

namespace DUNE
{
  using System::Error;
  using Utils::String;

  namespace Media
  {
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
    static int
    testIoctl(int fh, unsigned request, void* arg)
    {
      return v4l2_ioctl(fh, request, arg);
    }

    static void
    doIoctl(int fh, unsigned request, void* arg)
    {
      int rv = 0;

      do
      {
        rv = v4l2_ioctl(fh, request, arg);
      }
      while (rv == -1 && ((errno == EINTR) || (errno == EAGAIN)));

      if (rv == -1)
        throw Error(errno, "I/O control error");
    }

#endif

    VideoCapture::VideoCapture(const std::string& dev, uint32_t w, uint32_t h)
    {
      // Video 4 Linux library implementation.
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
      m_fd = v4l2_open(dev.c_str(), O_RDWR | O_NONBLOCK, 0);
      if (m_fd < 0)
        throw Error(errno, String::str("failed to open device '%s'", dev.c_str()));

      // Initialize V4L2 format.
      m_fmt = new v4l2_format;
      std::memset(m_fmt, 0, sizeof(v4l2_format));
      m_fmt->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
      m_fmt->fmt.pix.width = w;
      m_fmt->fmt.pix.height = h;
      m_fmt->fmt.pix.pixelformat = V4L2_PIX_FMT_RGB24;
      m_fmt->fmt.pix.field = V4L2_FIELD_INTERLACED;
      doIoctl(m_fd, VIDIOC_S_FMT, m_fmt);

      if (m_fmt->fmt.pix.pixelformat != V4L2_PIX_FMT_RGB24)
        throw std::runtime_error("pixel format RGB24 is not supported by device");

      // Initialize V4L2 request buffers.
      m_bfr_req = new v4l2_requestbuffers;
      std::memset(m_bfr_req, 0, sizeof(v4l2_requestbuffers));
      m_bfr_req->count = 2;
      m_bfr_req->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
      m_bfr_req->memory = V4L2_MEMORY_MMAP;
      doIoctl(m_fd, VIDIOC_REQBUFS, m_bfr_req);

      m_bfr = new v4l2_buffer;
      m_bfrs = (Buffer*)calloc(m_bfr_req->count, sizeof(Buffer));

      for (unsigned i = 0; i < m_bfr_req->count; ++i)
      {
        std::memset(m_bfr, 0, sizeof(v4l2_buffer));
        m_bfr->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        m_bfr->memory = V4L2_MEMORY_MMAP;
        m_bfr->index = i;
        doIoctl(m_fd, VIDIOC_QUERYBUF, m_bfr);

        m_bfrs[i].length = m_bfr->length;
        m_bfrs[i].start = v4l2_mmap(0, m_bfr->length,
                                    PROT_READ | PROT_WRITE, MAP_SHARED,
                                    m_fd, m_bfr->m.offset);

        if (MAP_FAILED == m_bfrs[i].start)
        {
          perror("mmap");
          exit(EXIT_FAILURE);
        }

        std::memset(m_bfr, 0, sizeof(v4l2_buffer));
        m_bfr->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        m_bfr->memory = V4L2_MEMORY_MMAP;
        m_bfr->index = i;
        doIoctl(m_fd, VIDIOC_QBUF, m_bfr);
      }

#else
      (void)dev;
      (void)h;
      (void)w;

      throw std::runtime_error("VideoCapture is not yet implemented in this system.");
#endif
    }

    VideoCapture::~VideoCapture(void)
    {
      // Video 4 Linux library implementation.
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
      stop();

      for (unsigned i = 0; i < m_bfr_req->count; ++i)
        v4l2_munmap(m_bfrs[i].start, m_bfrs[i].length);
      v4l2_close(m_fd);

      free(m_bfrs);
      delete m_bfr_req;
      delete m_bfr;
      delete m_fmt;
#endif
    }

    void
    VideoCapture::start(void)
    {
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
      v4l2_buf_type type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
      doIoctl(m_fd, VIDIOC_STREAMON, &type);

      // Read one frame to allow for captureFrame() to enqueue/deque
      // buffers in one run.
      std::memset(m_bfr, 0, sizeof(v4l2_buffer));
      m_bfr->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
      m_bfr->memory = V4L2_MEMORY_MMAP;
      doIoctl(m_fd, VIDIOC_DQBUF, m_bfr);
#endif
    }

    void
    VideoCapture::stop(void)
    {
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
      v4l2_buf_type type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
      doIoctl(m_fd, VIDIOC_STREAMOFF, &type);
#endif
    }

    void
    VideoCapture::setStandard(VideoCapture::Standard standard)
    {
      (void)standard;

#if defined(DUNE_SYS_HAS_LIBV4L2_H)
      v4l2_std_id id = 0;
      switch (standard)
      {
        case STANDARD_PAL:
          id = V4L2_STD_PAL;
          break;
        case STANDARD_NTSC:
          id = V4L2_STD_NTSC;
          break;
      }

      if (id & (1ULL << 63))
      {
        struct v4l2_standard vs;

        vs.index = id & 0xffff;
        if (testIoctl(m_fd, VIDIOC_ENUMSTD, &vs) >= 0)
          id = vs.id;
      }

      doIoctl(m_fd, VIDIOC_S_STD, &id);
#endif
    }

    bool
    VideoCapture::frameCapture(void)
    {
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
      fd_set fds;
      timeval tv;
      int rv = 0;

      do
      {
        FD_ZERO(&fds);
        FD_SET(m_fd, &fds);
        tv.tv_sec = 1;
        tv.tv_usec = 0;
        rv = select(m_fd + 1, &fds, NULL, NULL, &tv);
      }
      while ((rv == -1 && (errno = EINTR)));

      doIoctl(m_fd, VIDIOC_QBUF, m_bfr);
      std::memset(m_bfr, 0, sizeof(v4l2_buffer));
      m_bfr->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
      m_bfr->memory = V4L2_MEMORY_MMAP;
      doIoctl(m_fd, VIDIOC_DQBUF, m_bfr);
      return true;
#else
      return false;
#endif
    }

    uint32_t
    VideoCapture::frameWidth(void) const
    {
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
      return m_fmt->fmt.pix.width;
#else
      return 0;
#endif
    }

    uint32_t
    VideoCapture::frameHeight(void) const
    {
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
      return m_fmt->fmt.pix.height;
#else
      return 0;
#endif
    }

    uint8_t*
    VideoCapture::frameData(void) const
    {
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
      return (uint8_t*)m_bfrs[m_bfr->index].start;
#else
      return 0;
#endif
    }

    uint32_t
    VideoCapture::frameSize(void) const
    {
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
      return m_bfr->bytesused;
#else
      return 0;
#endif
    }
  }
}
