//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef SRC_VISION_FLIR_CAPTURE_HPP_
#define SRC_VISION_FLIR_CAPTURE_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

//OpenCV headers
#include <opencv2/opencv.hpp>

namespace Vision
{
  namespace Flir
  {
    class CreateCapture : public Concurrency::Thread
    {
    public:

      CreateCapture(DUNE::Tasks::Task* task, std::string urlCamera, float number_fps) :
        m_task(task),
        isToCapture(0)
      {
        m_number_fps = 1/number_fps;
        m_camera_url = urlCamera;
      }

      //! Destructor.
      ~CreateCapture(void)
      {
        m_cap_dev.release();
        m_error_image.release();
      }

      bool
      initSetupCamera(void)
      {
        bool result = false;
        isToCapture = false;
        m_is_captured = false;
        m_fps.setTop(m_number_fps);
        m_cap_dev.open(m_camera_url);
        if(m_cap_dev.isOpened())
          result = true;
        else
          result = false;

        return result;
      }

      void
      trigger_camera(std::string fileName)
      {
        isToCapture = true;
        m_is_captured = false;
        m_path_file_name = fileName;
      }

      bool
      is_capture_image(void)
      {
        return m_is_captured;
      }

      cv::Mat
      get_image_captured(void)
      {
        if(m_is_captured)
        {
          m_is_captured = false;
          return m_frame_required;
        }

        return m_error_image;
      }

      void
      run(void)
      {
        m_fps.reset();
        m_task->debug("FPS: %f", m_number_fps);
        while(!isStopping())
        {
          if(m_fps.overflow())
          {
            m_cap_dev >> m_frame_capture;
            if(m_frame_capture.empty())
            {
              m_task->war("erro capturing frame");
            }
            else
            {
              if(isToCapture)
              {
                m_task->debug("capture");
                m_frame_required = m_frame_capture;
                isToCapture = false;
                m_is_captured = true;
              }
            }
            m_fps.reset();
          }
        }
      }

    private:
      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Flag to control capture of frames
      bool isToCapture;
      //! Camera Ip
      std::string m_camera_url;
      //! Number of fps to capture.
      float m_number_fps;
      //! Timer to control the frames/s
      Time::Counter<float> m_fps;
      //! Opencv Buffer for frame capture
      cv::Mat m_frame_capture;
      //! Opencv Buffer for frame required
      cv::Mat m_frame_required;
      //! Opencv Struct for camera capture
      cv::VideoCapture m_cap_dev;
      //! Path to save the image
      std::string m_path_file_name;
      //! Flag to control state of image capture.
      bool m_is_captured;
      //! Black image to return in error
      cv::Mat m_error_image;

    };
  }
}

#endif /* SRC_VISION_FLIR_CAPTURE_HPP_ */
