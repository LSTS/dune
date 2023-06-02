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

#ifndef VISION_PIONNER_PROCESSIMAGE_HPP_INCLUDED_
#define VISION_PIONNER_PROCESSIMAGE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

// OpenCV headers
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>

// Local Headers
#include "FilterLine.hpp"
#include "FilterTemplateMatch.hpp"
#include "FilterDotsColor.hpp"

namespace Vision
{
  namespace Pioneer
  {
    //! Mutex lock/unlock
    static Concurrency::Mutex m_mutex_cap;

    class ProcessImage : public Concurrency::Thread
    {
      public:
        //! Url of video capture
        std::string m_url;

        //! Constructor.
        //! @param[in] task parent task.
        //! @param[in] imshow display
        //! @param[in] cap of pioneer video device.
        ProcessImage(DUNE::Tasks::Task* task, std::string imshow, CaptureImage* cap, std::string method, int fps) :
          m_task(task)
        {
          m_cap = cap;
          m_imshow = imshow;
          m_method = method;
          m_fps = fps;
          cv::setNumThreads(4);
          m_filter_line = new FilterLine(task, imshow);
          m_filter_template = new FilterTemplateMatch(task, imshow);
          m_filter_dots = new FilterDotsColor(task, imshow);
        }

        //! Destructor.
        ~ProcessImage(void)
        {
          if(m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
            cv::destroyAllWindows();
        }

        void
        setHSVIntervals(std::vector<int> hue, std::vector<int> saturation, std::vector<int> value)
        {
          m_filter_dots->setHSVIntervals(hue, saturation, value);
        }

        void
        run(void)
        {
          Delay::wait(4);
          if(m_imshow.compare("All") == 0 || m_imshow.compare("Cap") == 0)
          {
            cv::namedWindow("Process Image Thread", cv::WINDOW_NORMAL);
            cv::waitKey(1);
          }
          //if(m_method.compare("Dots") == 0)
          //  m_filter_dots->initCallBack();

          if(m_method.compare("Template") == 0)
            m_filter_template->initCallBack();

          while(!isStopping())
          {
            if(m_cap->isCapturing())
            {
              m_raw_frame = m_cap->getFrame();
              //if(!m_raw_frame.empty() && m_raw_frame.rows == 1080 && m_raw_frame.cols == 1920)
              if(!m_raw_frame.empty())
              {
                m_task->debug("Frame size: %d x s%d", m_raw_frame.rows, m_raw_frame.cols);
                resize(m_raw_frame, m_image_resized, cv::Size(m_raw_frame.cols/2, m_raw_frame.rows/2), cv::INTER_LINEAR);
                m_task->debug("Frame resized size: %d x %d", m_image_resized.rows, m_image_resized.cols);
                if(m_method.compare("Lines") == 0)
                  m_filter_line->getLinesInImage(m_image_resized);
                else if(m_method.compare("Template") == 0)
                  m_filter_template->templateMatch(m_image_resized);
                else if(m_method.compare("Dots") == 0)
                  m_filter_dots->colorPoints(m_image_resized);
                else
                  m_task->war("No valide detection method selected.(config problem\?\?\?)");

                if(m_imshow.compare("All") == 0 || m_imshow.compare("Cap") == 0)
                {
                  cv::imshow("Process Image Thread", m_image_resized);
                  char key = cv::waitKey(1000/m_fps);
                  switch (key)
                  {
                    case 't':
                      if (m_method.compare("Template") == 0)
                        m_filter_template->requestNewTpl();
                      break;

                    default:
                      break;
                  }
                }
              }
              else
              {
                m_task->war("No frame captured");
              }
            }
          }
        }

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! Flag to control imshow
        std::string m_imshow;
        //! Detection method
        std::string m_method;
        //! Object from VideoCapture Pioneer;
        CaptureImage* m_cap;
        //! Raw frame captured
        cv::Mat m_raw_frame;
        //! Resize Image
        cv::Mat m_image_resized;
        //! Filter Line class
        FilterLine* m_filter_line;
        //! Filter Template Match class
        FilterTemplateMatch* m_filter_template;
        //! Filter Dots Color class
        FilterDotsColor* m_filter_dots;
        //! Fps
        int m_fps;

    };
  }
}

#endif

