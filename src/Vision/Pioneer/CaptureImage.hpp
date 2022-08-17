//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef VISION_PIONNER_CAPTUREIMAGE_HPP_INCLUDED_
#define VISION_PIONNER_CAPTUREIMAGE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

//OpenCV headers
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>

namespace Vision
{
  namespace Pioneer
  {
    //! Mutex lock/unlock
    static Concurrency::Mutex m_mutex;

    class CaptureImage : public Concurrency::Thread
    {
      public:
        //! Url of video capture
        std::string m_url;

        //! Constructor.
        //! @param[in] task parent task.
        //! @param[in] url of ipcam.
        //! @param[in] name of ipcam.
        CaptureImage(DUNE::Tasks::Task* task, std::string url) :
          m_task(task)
        {
          m_url = url;
          cv::setNumThreads(4);
          m_capture = initCapture(m_url);
        }

        //! Destructor.
        ~CaptureImage(void)
        {
          m_capture.release();
          cv::destroyAllWindows();
        }

        cv::VideoCapture
        initCapture(std::string url)
        {
          setenv("OPENCV_FFMPEG_CAPTURE_OPTIONS", "rtsp_transport;udp", 1);
          cv::VideoCapture capture(url, cv::CAP_FFMPEG);
          if (!capture.isOpened())
          {
            std::cout << "erro open cam link %s" << url << std::endl;
            cv::VideoCapture capture_null(0, 0);
            return capture_null;
          }
          return capture;
        }

        void
        run(void)
        {
          if (!m_capture.isOpened())
          {
            m_task->err("erro capture video device");
          }
          else
          {
            cv::namedWindow("RTSP stream", cv::WINDOW_NORMAL);
            cv::Mat frame;
            while(!isStopping())
            {
              //Delay::waitMsec(100);
              if (!m_capture.read(frame))
              {
                m_task->war("fail getting frame");
              }
              else
              {
                cv::imshow("RTSP stream", frame);
                cv::waitKey(1);
              }
            }
          }
        }

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! OpenCv Video Capture
        cv::VideoCapture m_capture;
    };
  }
}

#endif


