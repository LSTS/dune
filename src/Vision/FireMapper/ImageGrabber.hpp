/* Copyright (c) 2017-2018, CNRS-LAAS
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */

// ISO C++ 98 headers.
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// OpenCV headers
#include <opencv2/opencv.hpp>

namespace Vision
{
  namespace DummyGrabber
  {
    using DUNE_NAMESPACES;

    struct ImageGrabber: public Concurrency::Thread
    {

      ImageGrabber(DUNE::Tasks::Task* task) :
        m_task(task),
        m_grab(false),
        m_is_available(false)
      {

      }

      void
      trigger(std::string imageFolder, IMC::EstimatedState es)
      {
        m_grab = true;
        m_is_available = false;
        m_image_folder = imageFolder;
        m_state = es;
      }

      bool
      is_available(void)
      {
        return m_is_available;
      }

      cv::Mat
      get_image(void)
      {
        if (m_is_available)
        {
          m_is_available = false;
          return m_frame;
        }

        return m_error_image;
      }

      void
      run(void)
      {
        m_task->inf("Dummy image grabber started");

        while (!isStopping())
        {
          if (m_grab)
          {
            m_grab = false;

            // TODO: Get an image from 'm_image_folder' given 'm_state'
            // TODO: ¿ Resize it to (m_args.pic_w, m_args.pic_h) ?
            // TODO: Do all operations needed to prepare the image
            // TODO: Set m_frame;

            // Flag availability of a new picture
            m_is_available = true;
          }

          Delay::waitMsec(10);
        }
      }

      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Flag to control capture of frames
      bool m_grab;
      //! Opencv Buffer for frame capture
      cv::Mat m_frame;
      //! Path to save the image
      std::string m_image_folder;
      //! Flag to control state of image capture.
      bool m_is_available;
      //! Black image to return in error
      cv::Mat m_error_image;
      //! Estimated
      IMC::EstimatedState m_state;
    };
  }
}
